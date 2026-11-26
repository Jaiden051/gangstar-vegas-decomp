#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCompres.h"

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::Chunk::staticClass  (binary VA: 0x16c1e70)
// Original: hkpCompressedMeshShape::Chunk::staticClass
// ----------------------------------------------------------------------------
void * hkpCompressedMeshShape::Chunk::staticClass()
{
  return &hkpCompressedMeshShapeChunkClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::BigTriangle::staticClass  (binary VA: 0x16c1e90)
// Original: hkpCompressedMeshShape::BigTriangle::staticClass
// ----------------------------------------------------------------------------
void * hkpCompressedMeshShape::BigTriangle::staticClass()
{
  return &hkpCompressedMeshShapeBigTriangleClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::ConvexPiece::staticClass  (binary VA: 0x16c1eb0)
// Original: hkpCompressedMeshShape::ConvexPiece::staticClass
// ----------------------------------------------------------------------------
void * hkpCompressedMeshShape::ConvexPiece::staticClass()
{
  return &hkpCompressedMeshShapeConvexPieceClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::staticClass  (binary VA: 0x16c1ed0)
// Original: hkpCompressedMeshShape::staticClass
// ----------------------------------------------------------------------------
void * hkpCompressedMeshShape::staticClass()
{
  return &hkpCompressedMeshShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::getFirstKey  (binary VA: 0x16ffa10)
// Original: hkpCompressedMeshShape::getFirstKey
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::getFirstKey(hkpCompressedMeshShape::Self *self)
{
  return G4_VCALL<int>(self, 92, -1);
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::calcSizeForSpu  (binary VA: 0x16ffa40)
// Original: hkpCompressedMeshShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::calcSizeForSpu()
{
  return 224;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::setWeldingInfo  (binary VA: 0x16ffa50)
// Original: hkpCompressedMeshShape::setWeldingInfo
// ----------------------------------------------------------------------------
hkpCompressedMeshShape::Self * hkpCompressedMeshShape::setWeldingInfo(hkpCompressedMeshShape::Self *self, unsigned int a2, int16_t a3)
{
  hkpCompressedMeshShape::Self *result;
  unsigned int v4;
  int v5;
  int v6;
  int v7;

  result = self;
  v4 = a2 >> *((uint32_t *)self + 7);
  if ( v4 != 0 )
  {
    v5 = *((uint32_t *)self + 30);
    v6 = 16 * (5 * v4 - 5) + v5;
    v7 = *(uint16_t *)(v6 + 68);
    if ( (uint16_t)v7 != 0xFFFF )
      v6 = 80 * v7 + v5;
    result = *(hkpCompressedMeshShape::Self **)(v6 + 52);
    *((uint16_t *)result + (*((uint32_t *)self + 9) & a2)) = a3;
  }
  else
  {
    *(uint16_t *)(*((uint32_t *)self + 27) + 16 * (*((uint32_t *)self + 8) & a2) + 12) = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::initWeldingInfo  (binary VA: 0x16ffab0)
// Original: hkpCompressedMeshShape::initWeldingInfo
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::initWeldingInfo(int a1, int a2)
{
  int v2;
  int result;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v12[3] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  v11 = a1;
  result = a2;
  *(uint8_t *)(a1 + 44) = a2;
  if ( result != 6 )
  {
    result = *(uint32_t *)(v2 + 124);
    if ( result > 0 )
    {
      v9 = 0;
      v10 = 0;
      result = v11;
      do
      {
        v4 = (uint32_t *)(*(uint32_t *)(result + 120) + v9);
        v5 = v4[8];
        v6 = v4[15] & 0x3FFFFFFF;
        if ( v5 > v6 )
        {
          v7 = 2 * v6;
          if ( v7 < v5 )
            v7 = v4[8];
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v12,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v4 + 13,
            v7,
            2);
        }
        v8 = v4[14];
        if ( v5 - v8 > 0 )
          memset((void *)(v4[13] + 2 * v8), 0, 2 * (v5 - v8));
        result = v11;
        ++v10;
        v4[14] = v5;
        v9 += 80;
      }
      while ( *(uint32_t *)(v11 + 124) > v10 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::getAabb  (binary VA: 0x16ffbb0)
// Original: hkpCompressedMeshShape::getAabb
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpCompressedMeshShape::getAabb(hkpCompressedMeshShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  float v5; // xmm5_4
  float v6; // xmm2_4
  float v7; // xmm7_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm5_4
  float v11; // xmm7_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm6_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;

  v5 = *((float *)self + 45);
  v6 = *((float *)self + 41) + v5;
  v24 = *((float *)self + 42);
  v7 = *((float *)self + 44);
  v8 = *((float *)self + 46);
  v9 = *((float *)self + 40) + v7;
  v10 = (float)(v5 - *((float *)self + 41)) * 0.5;
  v23 = v6 * 0.5;
  v11 = (float)(v7 - *((float *)self + 40)) * 0.5;
  v12 = v9 * 0.5;
  v13 = (float)(v24 + v8) * 0.5;
  v14 = (float)(v8 - v24) * 0.5;
  v26 = v13;
  v22 = (float)(fabs(*(float *)a2 * v11) + fabs(*((float *)a2 + 4) * v10))
      + (float)(fabs(*((float *)a2 + 8) * v14) + a3);
  v15 = *((float *)a2 + 10) * v14;
  v25 = (float)(fabs(*((float *)a2 + 1) * v11) + fabs(*((float *)a2 + 5) * v10))
      + (float)(fabs(*((float *)a2 + 9) * v14) + a3);
  v16 = (float)(fabs(v14 * *((float *)a2 + 11)) + a3)
      + (float)(fabs(v11 * *((float *)a2 + 3)) + fabs(v10 * *((float *)a2 + 7)));
  v17 = (float)(fabs(v15) + a3) + (float)(fabs(*((float *)a2 + 2) * v11) + fabs(*((float *)a2 + 6) * v10));
  v18 = (float)((float)((float)(*(float *)a2 * v12) + (float)(*((float *)a2 + 4) * v23))
              + (float)(*((float *)a2 + 8) * v13))
      + *((float *)a2 + 12);
  v19 = (float)((float)((float)(*((float *)a2 + 1) * v12) + (float)(*((float *)a2 + 5) * v23))
              + (float)(*((float *)a2 + 9) * v13))
      + *((float *)a2 + 13);
  v20 = (float)((float)((float)(*((float *)a2 + 2) * v12) + (float)(v23 * *((float *)a2 + 6)))
              + (float)(v26 * *((float *)a2 + 10)))
      + *((float *)a2 + 14);
  v21 = (float)((float)((float)(v12 * *((float *)a2 + 3)) + (float)(*((float *)a2 + 7) * v23))
              + (float)(v26 * *((float *)a2 + 11)))
      + *((float *)a2 + 15);
  *((float *)a4 + 4) = v22 + v18;
  *(float *)a4 = v18 - v22;
  *((float *)a4 + 5) = v25 + v19;
  *((float *)a4 + 1) = v19 - v25;
  *((float *)a4 + 6) = v17 + v20;
  *((float *)a4 + 2) = v20 - v17;
  *((float *)a4 + 7) = v16 + v21;
  *((float *)a4 + 3) = v21 - v16;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::Destroy  (binary VA: 0x16ffe50)
// Original: hkpCompressedMeshShape::~hkpCompressedMeshShape
// ----------------------------------------------------------------------------
void hkpCompressedMeshShape::Destroy(hkpCompressedMeshShape::Self *self)
{
  int v1;
  int v2;
  hkStringPtr::Self *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
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

  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_209BCD8);
  v1 = *((uint32_t *)self + 52);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209BC68);
  v2 = v1 - 1;
  v3 = (hkStringPtr::Self *)(*((uint32_t *)self + 51) + 8 * (v1 - 1) + 4);
  if ( v1 - 1 >= 0 )
  {
    do
    {
      --v2;
      hkStringPtr::Destroy(v3);
      v3 = (hkStringPtr::Self *)((char *)v3 - 8);
    }
    while ( v2 != -1 );
  }
  *((uint32_t *)self + 52) = 0;
  v4 = *((uint32_t *)self + 53);
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 51),
      8 * v4);
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 53) = 0x80000000;
  v25 = *((uint32_t *)self + 33);
  v5 = *((uint32_t *)self + 34) - 1;
  if ( v5 >= 0 )
  {
    v27 = 32 * v5 + 32;
    v6 = (int *)(32 * v5 + v25 + 24);
    v29 = 32 * v5 + v25 + 16;
    do
    {
      *(int *)((char *)v6 + v27 - v29 + v25 - 20) = 0;
      if ( *v6 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(v6 - 2),
          2 * (*v6 & 0x3FFFFFFF));
      --v5;
      *(v6 - 2) = 0;
      *v6 = 0x80000000;
      v6 -= 8;
    }
    while ( v5 != -1 );
  }
  *((uint32_t *)self + 34) = 0;
  v7 = *((uint32_t *)self + 35);
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 33),
      32 * v7);
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 35) = 0x80000000;
  v32 = *((uint32_t *)self + 30);
  v8 = *((uint32_t *)self + 31);
  v30 = v8 - 1;
  if ( v8 - 1 >= 0 )
  {
    v33 = -80 * v8;
    v9 = 80 * v8 + v32 + 52;
    v10 = v32 + 80 * v8 - 80;
    v31 = v10 + 52;
    v28 = v10 + 40;
    v11 = v10 + 28;
    v12 = v10 + 16;
    v26 = v11;
    do
    {
      v13 = v9 + v33 - v32;
      *(uint32_t *)(v9 - 76) = 0;
      v14 = *(uint32_t *)(v13 + v31 - 44);
      if ( v14 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v13 + v31 - 52),
          2 * (v14 & 0x3FFFFFFF));
      *(uint32_t *)(v13 + v31 - 44) = 0x80000000;
      *(uint32_t *)(v13 + v31 - 52) = 0;
      *(uint32_t *)(v9 - 88) = 0;
      v15 = *(uint32_t *)(v13 + v28 - 44);
      if ( v15 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v13 + v28 - 52),
          2 * (v15 & 0x3FFFFFFF));
      *(uint32_t *)(v13 + v28 - 44) = 0x80000000;
      *(uint32_t *)(v13 + v28 - 52) = 0;
      *(uint32_t *)(v9 - 100) = 0;
      v16 = *(uint32_t *)(v13 + v26 - 44);
      if ( v16 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v13 + v26 - 52),
          2 * (v16 & 0x3FFFFFFF));
      *(uint32_t *)(v13 + v26 - 52) = 0;
      *(uint32_t *)(v13 + v26 - 44) = 0x80000000;
      *(uint32_t *)(v9 - 112) = 0;
      v17 = *(uint32_t *)(v13 + v12 - 44);
      if ( v17 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v13 + v12 - 52),
          2 * (v17 & 0x3FFFFFFF));
      --v30;
      *(uint32_t *)(v13 + v12 - 52) = 0;
      *(uint32_t *)(v13 + v12 - 44) = 0x80000000;
      v9 -= 80;
    }
    while ( v30 != -1 );
  }
  *((uint32_t *)self + 31) = 0;
  v18 = *((uint32_t *)self + 32);
  if ( v18 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 30),
      80 * v18);
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 32) = 0x80000000;
  *((uint32_t *)self + 28) = 0;
  v19 = *((uint32_t *)self + 29);
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 27),
      16 * v19);
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 29) = 0x80000000;
  *((uint32_t *)self + 25) = 0;
  v20 = *((uint32_t *)self + 26);
  if ( v20 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 24),
      16 * v20);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *((uint32_t *)self + 22) = 0;
  v21 = *((uint32_t *)self + 23);
  if ( v21 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 21),
      48 * v21);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  *((uint32_t *)self + 19) = 0;
  v22 = *((uint32_t *)self + 20);
  if ( v22 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 18),
      v22 & 0x3FFFFFFF);
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 20) = 0x80000000;
  *((uint32_t *)self + 16) = 0;
  v23 = *((uint32_t *)self + 17);
  if ( v23 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 15),
      2 * (v23 & 0x3FFFFFFF));
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0x80000000;
  *((uint32_t *)self + 13) = 0;
  v24 = *((uint32_t *)self + 14);
  if ( v24 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v24);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::Destroy_ea17003b0  (binary VA: 0x17003b0)
// Original: hkpCompressedMeshShape::~hkpCompressedMeshShape
// ----------------------------------------------------------------------------
void hkpCompressedMeshShape::Destroy_ea17003b0(hkpCompressedMeshShape::Self *self)
{
  hkpCompressedMeshShape::Self *v1;
  int v2;
  hkStringPtr::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
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
  int v37;
  int v38;
  hkpCompressedMeshShape::Self *thisa;

  v1 = self;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_209BCD8);
  v2 = *((uint32_t *)self + 52) - 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209BC68);
  v3 = (hkStringPtr::Self *)(*((uint32_t *)self + 51) + 8 * v2 + 4);
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      hkStringPtr::Destroy(v3);
      v3 = (hkStringPtr::Self *)((char *)v3 - 8);
    }
    while ( v2 != -1 );
  }
  v4 = *((uint32_t *)self + 53);
  *((uint32_t *)self + 52) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 51),
      8 * v4);
  v5 = *((uint32_t *)self + 33);
  *((uint32_t *)self + 51) = 0;
  v31 = v5;
  v6 = *((uint32_t *)self + 34) - 1;
  *((uint32_t *)self + 53) = 0x80000000;
  if ( v6 >= 0 )
  {
    v7 = 32 * v6 + v31;
    v8 = (int *)(v7 + 24);
    v9 = v6;
    v33 = 32 * v6 + 32;
    do
    {
      *(int *)((char *)v8 + v33 - (v7 + 16) + v31 - 20) = 0;
      if ( *v8 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(v8 - 2),
          2 * (*v8 & 0x3FFFFFFF));
      --v9;
      *(v8 - 2) = 0;
      *v8 = 0x80000000;
      v8 -= 8;
    }
    while ( v9 != -1 );
    v1 = self;
  }
  v10 = *((uint32_t *)v1 + 35);
  *((uint32_t *)v1 + 34) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 33),
      32 * v10);
  v11 = *((uint32_t *)v1 + 30);
  *((uint32_t *)v1 + 33) = 0;
  v37 = v11;
  v12 = *((uint32_t *)v1 + 31);
  *((uint32_t *)v1 + 35) = 0x80000000;
  v35 = v12 - 1;
  if ( v12 - 1 >= 0 )
  {
    v38 = -80 * v12;
    v13 = 80 * v12 + v37;
    thisa = v1;
    v14 = v13 - 80;
    v15 = v13 + 52;
    v36 = v14 + 52;
    v34 = v14 + 28;
    v32 = v14 + 16;
    v16 = v14 + 40;
    do
    {
      v17 = v15 + v38 - v37;
      *(uint32_t *)(v15 - 76) = 0;
      v18 = *(uint32_t *)(v17 + v36 - 44);
      if ( v18 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v17 + v36 - 52),
          2 * (v18 & 0x3FFFFFFF));
      *(uint32_t *)(v17 + v36 - 52) = 0;
      *(uint32_t *)(v17 + v36 - 44) = 0x80000000;
      *(uint32_t *)(v15 - 88) = 0;
      v19 = *(uint32_t *)(v17 + v16 - 44);
      if ( v19 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v17 + v16 - 52),
          2 * (v19 & 0x3FFFFFFF));
      *(uint32_t *)(v17 + v16 - 52) = 0;
      *(uint32_t *)(v17 + v16 - 44) = 0x80000000;
      *(uint32_t *)(v15 - 100) = 0;
      v20 = *(uint32_t *)(v17 + v34 - 44);
      if ( v20 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v17 + v34 - 52),
          2 * (v20 & 0x3FFFFFFF));
      *(uint32_t *)(v17 + v34 - 44) = 0x80000000;
      *(uint32_t *)(v17 + v34 - 52) = 0;
      *(uint32_t *)(v15 - 112) = 0;
      v21 = *(uint32_t *)(v17 + v32 - 44);
      if ( v21 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v17 + v32 - 52),
          2 * (v21 & 0x3FFFFFFF));
      --v35;
      v15 -= 80;
      *(uint32_t *)(v17 + v32 - 52) = 0;
      *(uint32_t *)(v17 + v32 - 44) = 0x80000000;
    }
    while ( v35 != -1 );
    v1 = thisa;
  }
  v22 = *((uint32_t *)v1 + 32);
  *((uint32_t *)v1 + 31) = 0;
  if ( v22 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 30),
      80 * v22);
  v23 = *((uint32_t *)v1 + 29);
  *((uint32_t *)v1 + 30) = 0;
  *((uint32_t *)v1 + 32) = 0x80000000;
  *((uint32_t *)v1 + 28) = 0;
  if ( v23 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 27),
      16 * v23);
  v24 = *((uint32_t *)v1 + 26);
  *((uint32_t *)v1 + 27) = 0;
  *((uint32_t *)v1 + 29) = 0x80000000;
  *((uint32_t *)v1 + 25) = 0;
  if ( v24 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 24),
      16 * v24);
  v25 = *((uint32_t *)v1 + 23);
  *((uint32_t *)v1 + 24) = 0;
  *((uint32_t *)v1 + 26) = 0x80000000;
  *((uint32_t *)v1 + 22) = 0;
  if ( v25 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 21),
      48 * v25);
  v26 = *((uint32_t *)v1 + 20);
  *((uint32_t *)v1 + 21) = 0;
  *((uint32_t *)v1 + 23) = 0x80000000;
  *((uint32_t *)v1 + 19) = 0;
  if ( v26 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 18),
      v26 & 0x3FFFFFFF);
  v27 = *((uint32_t *)v1 + 17);
  *((uint32_t *)v1 + 18) = 0;
  *((uint32_t *)v1 + 20) = 0x80000000;
  *((uint32_t *)v1 + 16) = 0;
  if ( v27 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 15),
      2 * (v27 & 0x3FFFFFFF));
  v28 = *((uint32_t *)v1 + 14);
  *((uint32_t *)v1 + 15) = 0;
  *((uint32_t *)v1 + 17) = 0x80000000;
  *((uint32_t *)v1 + 13) = 0;
  if ( v28 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 12),
      4 * v28);
  *((uint32_t *)v1 + 12) = 0;
  *((uint32_t *)v1 + 14) = 0x80000000;
  *((uint32_t *)v1 + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v29 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v30 = 224;
  if ( *((uint16_t *)v1 + 3) != 0xFFFF )
    v30 = *((uint16_t *)v1 + 3);
  G4_VCALL<void>(v29, 12, v1, v30);
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::Construct  (binary VA: 0x1700900)
// Original: hkpCompressedMeshShape::hkpCompressedMeshShape
// ----------------------------------------------------------------------------
void hkpCompressedMeshShape::Construct(hkpCompressedMeshShape::Self *self, int a2, float a3)
{
  hkpShapeCollection::Construct((int)(uintptr_t)(self), 15, 6);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_209BCD8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209BC68);
  *((uint32_t *)self + 7) = a2 + 1;
  *((uint32_t *)self + 6) = a2;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 8) = (1 << (a2 + 1)) - 1;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 9) = (1 << a2) - 1;
  *((uint32_t *)self + 17) = 0x80000000;
  *((float *)self + 10) = a3;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0x80000000;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0x80000000;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0x80000000;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0x80000000;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint16_t *)self + 101) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0x80000000;
  *((uint8_t *)self + 44) = 6;
  *((uint16_t *)self + 100) = 4;
}



// ============================================================================
// Address:   0x1700a80 (size: 108 bytes)
// Symbol:    _ZN22hkpCompressedMeshShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpCompressedMeshShape::hkpCompressedMeshShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN22hkpCompressedMeshShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpCompressedMeshShape::Construct(
        int a1,
        int a2))(hkpCompressedMeshShape::Self * self)
{
  void (**result)(hkpCompressedMeshShape::Self *);

  hkpShapeCollection::Construct(a1, a2);
  result = (void (**)(hkpCompressedMeshShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209BCD8));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209BC68);
  *(uint32_t *)(a1 + 16) = ((uint32_t)(uintptr_t)&off_209BCD8);
  if ( a2 != 0 )
  {
    result = *(void (***)(hkpCompressedMeshShape::Self *))(a1 + 208);
    *(uint8_t *)(a1 + 8) = 15;
    *(uint8_t *)(a1 + 21) = 6;
    if ( result != nullptr )
    {
      result = *(void (***)(hkpCompressedMeshShape::Self *))(a1 + 204);
      *(uint16_t *)(a1 + 200) = 8;
      *(uint32_t *)(a1 + 196) = (uint32_t)(uintptr_t)(result);
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::Chunk::getNextIndex  (binary VA: 0x1700af0)
// Original: hkpCompressedMeshShape::Chunk::getNextIndex
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::Chunk::getNextIndex(hkpCompressedMeshShape::Chunk::Self *self, int a2, int *a3)
{
  int v3;
  int v4;
  uint16_t *v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  *a3 = 0;
  if ( a2 < 0 )
    return 0;
  v3 = a2 + 1;
  v4 = *((uint32_t *)self + 11);
  if ( v4 == 0 )
  {
    v10 = 0;
    goto LABEL_16;
  }
  v5 = *((uint16_t **)self + 10);
  v6 = *v5;
  if ( v3 < v6 )
  {
    v8 = *v5;
    v7 = 0;
    LOBYTE(v6) = 0;
  }
  else
  {
    if ( v4 <= 1 )
    {
      v8 = *v5;
      goto LABEL_20;
    }
    v7 = 1;
    while ( 1 )
    {
      v8 = v6 + v5[v7];
      if ( v3 < v8 )
        break;
      if ( ++v7 == v4 )
        goto LABEL_20;
      v6 = v8;
    }
  }
  if ( v7 >= v4 )
  {
LABEL_20:
    v10 = v8;
LABEL_16:
    v8 = a2 + 1;
    if ( v3 - v10 != 3 * ((v3 - v10) / 3) )
    {
      do
        ++v8;
      while ( v8 - v10 != 3 * ((v8 - v10) / 3) );
    }
    goto LABEL_12;
  }
  if ( v3 < v8 - 2 )
  {
    v8 = a2 + 1;
    *a3 = ((uint8_t)v3 - (uint8_t)v6) & 1;
  }
LABEL_12:
  result = -1;
  if ( v8 < *((uint32_t *)self + 8) )
    return v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::getNextKey  (binary VA: 0x1700bf0)
// Original: hkpCompressedMeshShape::getNextKey
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::getNextKey(hkpCompressedMeshShape::Self *self, unsigned int a2)
{
  int NextIndex;
  int v3;
  unsigned int v4;
  signed int v5;
  int v6;
  int v7;
  int isDegenerate;
  int v9;
  int v10;
  int v11;
  int v12;
  uint16_t *v13;
  int v14;
  int v15;
  int v16;
  int result;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef signed int _g4_t_v20;
  typedef uint16_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[3];
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[131];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v25)) > _g4_s7 ? (44u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v26)) > _g4_s8 ? (48u + sizeof(_g4_t_v26)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);

  if ( a2 == -1 )
  {
    v23 = 0;
    v11 = 0;
    goto LABEL_14;
  }
  NextIndex = *((uint32_t *)self + 9) & a2;
  v3 = *((uint32_t *)self + 7);
  v4 = a2 >> v3;
  if ( a2 >> v3 == 0 )
  {
    v11 = NextIndex + 1;
    v23 = NextIndex + 1;
LABEL_14:
    if ( *((uint32_t *)self + 28) > v11 )
    {
      v12 = 16 * v11;
      do
      {
        v13 = (uint16_t *)(*((uint32_t *)self + 27) + v12);
        v14 = *((uint32_t *)self + 24) + 16 * *v13;
        v15 = *((uint32_t *)self + 24) + 16 * v13[1];
        v16 = *((uint32_t *)self + 24) + 16 * v13[2];
        v26[0] = hkDefaultTriangleDegeneracyTolerance;
        if ( hkcdTriangleUtil::isDegenerate(v14, v15, v16, v26) == 0 )
          return v23;
        ++v23;
        v12 += 16;
      }
      while ( *((uint32_t *)self + 28) > v23 );
    }
    v3 = *((uint32_t *)self + 7);
    NextIndex = -1;
    v4 = 1;
  }
  v18 = (1 << (32 - v3)) - 1;
  if ( v4 == v18 || (v5 = v4 - 1, v20 = v5, *((uint32_t *)self + 31) <= v5) )
  {
    v10 = NextIndex + 1;
    goto LABEL_24;
  }
  v19 = 80 * v5;
  while ( 2 )
  {
    v21 = (uint16_t *)(*((uint32_t *)self + 30) + v19);
    v24[0] = 0;
    ++v20;
    while ( 1 )
    {
      v9 = v21[34];
      if ( (uint16_t)v9 == 0xFFFF )
        break;
      NextIndex = hkpCompressedMeshShape::Chunk::getNextIndex(
                    (hkpCompressedMeshShape::Chunk::Self *)(*((uint32_t *)self + 30) + 80 * v9),
                    NextIndex,
                    v24);
      if ( NextIndex == -1 )
        goto LABEL_11;
LABEL_8:
      v22 = NextIndex;
      v6 = *((uint32_t *)self + 8) & NextIndex | ((v24[0] & 1) << *((uint32_t *)self + 6)) | (v20 << *((uint32_t *)self + 7));
      v7 = G4_VCALL<int>(self, 96, v6, v26);
      v25 = hkDefaultTriangleDegeneracyTolerance;
      isDegenerate = hkcdTriangleUtil::isDegenerate(v7 + 32, v7 + 48, v7 + 64, &v25);
      NextIndex = v22;
      if ( isDegenerate == 0 )
        return v6;
    }
    NextIndex = hkpCompressedMeshShape::Chunk::getNextIndex((hkpCompressedMeshShape::Chunk::Self *)v21, NextIndex, v24);
    if ( NextIndex != -1 )
      goto LABEL_8;
LABEL_11:
    v19 += 80;
    if ( *((uint32_t *)self + 31) > v20 )
      continue;
    break;
  }
  v10 = 0;
LABEL_24:
  result = -1;
  if ( *((uint32_t *)self + 34) > v10 )
    return v10 | (v18 << *((uint32_t *)self + 7));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::Chunk::getTriangle  (binary VA: 0x1700e90)
// Original: hkpCompressedMeshShape::Chunk::getTriangle
// ----------------------------------------------------------------------------
hkpCompressedMeshShape::Chunk::Self * hkpCompressedMeshShape::Chunk::getTriangle(hkpCompressedMeshShape::Chunk::Self *self, int a2, int a3, int a4, float a5, hkVector4f::Self *a6, hkVector4f::Self *a7, hkVector4f::Self *a8)
{
  int v9;
  int v10;
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm1_4
  int v18;
  int v19;
  int v20;
  float v21; // xmm1_4

  v9 = *((uint32_t *)self + 4);
  v10 = 2 * (a2 + 2);
  v11 = (float)((float)((float)0 * 65536.0) + (float)*(uint16_t *)(v9 + v10)) * a5;
  v12 = (float)((float)((float)0 * 65536.0) + (float)*(uint16_t *)(v9 + v10 - 2)) * a5;
  v13 = (float)((float)0 * 65536.0) + (float)*(uint16_t *)(v9 + v10 - 4);
  v14 = 2 * (a3 + 2);
  *(float *)a6 = (float)(v13 * a5) + *(float *)self;
  *((float *)a6 + 1) = v12 + *((float *)self + 1);
  *((float *)a6 + 2) = v11 + *((float *)self + 2);
  *((float *)a6 + 3) = *((float *)self + 3) + (float)(0.0 * a5);
  v15 = *((uint32_t *)self + 4);
  v16 = *(uint16_t *)(v15 + v14 - 2);
  v17 = (float)((float)0 * 65536.0) + (float)*(uint16_t *)(v15 + v14);
  *(float *)a7 = (float)((float)((float)((float)0 * 65536.0) + (float)*(uint16_t *)(v15 + v14 - 4)) * a5)
               + *(float *)self;
  *((float *)a7 + 1) = (float)((float)((float)((float)0 * 65536.0) + (float)v16) * a5) + *((float *)self + 1);
  *((float *)a7 + 2) = (float)(v17 * a5) + *((float *)self + 2);
  *((float *)a7 + 3) = *((float *)self + 3) + (float)(0.0 * a5);
  v18 = *((uint32_t *)self + 4);
  v19 = 2 * (a4 + 2);
  v20 = *(uint16_t *)(v18 + v19 - 2);
  v21 = (float)((float)0 * 65536.0) + (float)*(uint16_t *)(v18 + v19);
  *(float *)a8 = (float)((float)((float)((float)0 * 65536.0) + (float)*(uint16_t *)(v18 + v19 - 4)) * a5)
               + *(float *)self;
  *((float *)a8 + 1) = (float)((float)((float)((float)0 * 65536.0) + (float)v20) * a5) + *((float *)self + 1);
  *((float *)a8 + 2) = (float)(v21 * a5) + *((float *)self + 2);
  *((float *)a8 + 3) = (float)(0.0 * a5) + *((float *)self + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::getChildShape  (binary VA: 0x1701080)
// Original: hkpCompressedMeshShape::getChildShape
// ----------------------------------------------------------------------------
hkpConvexVerticesShape::Self * hkpCompressedMeshShape::getChildShape(int a1, unsigned int a2, hkpConvexVerticesShape::Self *a3)
{
  unsigned int v3;
  int v4;
  uint16_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  uint16_t *v12;
  uint16_t v13;
  int *v14;
  float *v15;
  int *v16;
  int v17;
  int v18;
  float v19; // xmm0_4
  int v20;
  int v21;
  int v22;
  int *v23;
  uint16_t v24;
  int v25;
  int v26;
  float v27; // xmm6_4
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float *v31;
  uint16_t *v32;
  float *i;
  float *v34;
  float v35; // xmm1_4
  float v36; // xmm2_4
  int v37;
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41;
  int v42; // xmm1_4
  int v43; // xmm1_4
  int v44; // xmm1_4
  int v45;
  float v46; // xmm1_4
  typedef int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef float *_g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef hkpCompressedMeshShape::Chunk::Self *_g4_t_v62;
  typedef float _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint16_t _g4_t_v67;
  typedef float _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef g4_int128_t _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef float _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef float _g4_t_v103;
  typedef int _g4_t_v104;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v47)) > _g4_s0 ? (12u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v48)) > _g4_s1 ? (16u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v49)) > _g4_s2 ? (20u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v50)) > _g4_s3 ? (28u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v51)) > _g4_s4 ? (32u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v52)) > _g4_s5 ? (36u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v53)) > _g4_s6 ? (40u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v54)) > _g4_s7 ? (64u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v55)) > _g4_s8 ? (84u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v56)) > _g4_s9 ? (88u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v57)) > _g4_s10 ? (92u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v58)) > _g4_s11 ? (96u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v59)) > _g4_s12 ? (96u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v60)) > _g4_s13 ? (100u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v61)) > _g4_s14 ? (100u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v62)) > _g4_s15 ? (104u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v63)) > _g4_s16 ? (104u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v64)) > _g4_s17 ? (108u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v65)) > _g4_s18 ? (108u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v66)) > _g4_s19 ? (108u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v67)) > _g4_s20 ? (108u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v68)) > _g4_s21 ? (108u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v69)) > _g4_s22 ? (116u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v70)) > _g4_s23 ? (120u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v71)) > _g4_s24 ? (124u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v72)) > _g4_s25 ? (128u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v73)) > _g4_s26 ? (132u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v74)) > _g4_s27 ? (136u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v75)) > _g4_s28 ? (140u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v76)) > _g4_s29 ? (144u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v77)) > _g4_s30 ? (148u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v78)) > _g4_s31 ? (152u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v79)) > _g4_s32 ? (156u + sizeof(_g4_t_v79)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v80)) > _g4_s33 ? (160u + sizeof(_g4_t_v80)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v81)) > _g4_s34 ? (164u + sizeof(_g4_t_v81)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v82)) > _g4_s35 ? (168u + sizeof(_g4_t_v82)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v83)) > _g4_s36 ? (172u + sizeof(_g4_t_v83)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v84)) > _g4_s37 ? (176u + sizeof(_g4_t_v84)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v85)) > _g4_s38 ? (180u + sizeof(_g4_t_v85)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v86)) > _g4_s39 ? (184u + sizeof(_g4_t_v86)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v87)) > _g4_s40 ? (188u + sizeof(_g4_t_v87)) : _g4_s40,
    _g4_s42 = (192u + sizeof(_g4_t_v88)) > _g4_s41 ? (192u + sizeof(_g4_t_v88)) : _g4_s41,
    _g4_s43 = (196u + sizeof(_g4_t_v89)) > _g4_s42 ? (196u + sizeof(_g4_t_v89)) : _g4_s42,
    _g4_s44 = (200u + sizeof(_g4_t_v90)) > _g4_s43 ? (200u + sizeof(_g4_t_v90)) : _g4_s43,
    _g4_s45 = (204u + sizeof(_g4_t_v91)) > _g4_s44 ? (204u + sizeof(_g4_t_v91)) : _g4_s44,
    _g4_s46 = (208u + sizeof(_g4_t_v92)) > _g4_s45 ? (208u + sizeof(_g4_t_v92)) : _g4_s45,
    _g4_s47 = (224u + sizeof(_g4_t_v93)) > _g4_s46 ? (224u + sizeof(_g4_t_v93)) : _g4_s46,
    _g4_s48 = (228u + sizeof(_g4_t_v94)) > _g4_s47 ? (228u + sizeof(_g4_t_v94)) : _g4_s47,
    _g4_s49 = (232u + sizeof(_g4_t_v95)) > _g4_s48 ? (232u + sizeof(_g4_t_v95)) : _g4_s48,
    _g4_s50 = (236u + sizeof(_g4_t_v96)) > _g4_s49 ? (236u + sizeof(_g4_t_v96)) : _g4_s49,
    _g4_s51 = (240u + sizeof(_g4_t_v97)) > _g4_s50 ? (240u + sizeof(_g4_t_v97)) : _g4_s50,
    _g4_s52 = (244u + sizeof(_g4_t_v98)) > _g4_s51 ? (244u + sizeof(_g4_t_v98)) : _g4_s51,
    _g4_s53 = (248u + sizeof(_g4_t_v99)) > _g4_s52 ? (248u + sizeof(_g4_t_v99)) : _g4_s52,
    _g4_s54 = (252u + sizeof(_g4_t_v100)) > _g4_s53 ? (252u + sizeof(_g4_t_v100)) : _g4_s53,
    _g4_s55 = (256u + sizeof(_g4_t_v101)) > _g4_s54 ? (256u + sizeof(_g4_t_v101)) : _g4_s54,
    _g4_s56 = (260u + sizeof(_g4_t_v102)) > _g4_s55 ? (260u + sizeof(_g4_t_v102)) : _g4_s55,
    _g4_s57 = (264u + sizeof(_g4_t_v103)) > _g4_s56 ? (264u + sizeof(_g4_t_v103)) : _g4_s56,
    _g4_s58 = (272u + sizeof(_g4_t_v104)) > _g4_s57 ? (272u + sizeof(_g4_t_v104)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 96u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 100u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 100u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 104u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 104u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 108u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 108u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 108u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 108u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 108u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 116u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 120u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 124u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 128u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 132u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 136u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 140u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 144u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 148u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 152u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 156u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 160u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 164u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 168u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 172u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 176u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 180u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 184u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 188u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 192u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 196u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 200u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 204u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 208u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 224u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 228u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 232u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 236u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 240u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 244u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 248u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 252u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 256u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 260u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 264u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 272u);

  v64 = *(uint32_t *)(a1 + 32) & a2;
  v3 = a2 >> *(uint32_t *)(a1 + 28);
  v58 = *(uint32_t *)(a1 + 24);
  if ( (1 << (32 - *(uint32_t *)(a1 + 28))) - 1 == v3 )
  {
    v19 = *(float *)(a1 + 40);
    v80 = hkQsTransformf_identityStorage;
    v81 = (int)(uintptr_t)((*(uint32_t *)unk_20C7104));
    v82 = (int)(uintptr_t)((*(uint32_t *)unk_20C7108));
    v83 = (int)(uintptr_t)((*(uint32_t *)unk_20C710C));
    v84 = (int)(uintptr_t)((*(uint32_t *)unk_20C7110));
    v85 = (int)(uintptr_t)((*(uint32_t *)unk_20C7114));
    v86 = (int)(uintptr_t)((*(uint32_t *)unk_20C7118));
    v87 = (int)(uintptr_t)((*(uint32_t *)unk_20C711C));
    v88 = (int)(uintptr_t)((*(uint32_t *)unk_20C7120));
    v89 = (int)(uintptr_t)((*(uint32_t *)unk_20C7124));
    v90 = (int)(uintptr_t)((*(uint32_t *)unk_20C7128));
    v91 = (int)(uintptr_t)((*(uint32_t *)unk_20C712C));
    hkpConvexVerticesShape::Construct(a3, v19);
    v20 = *(uint32_t *)(a1 + 132);
    v21 = 32 * v64 + v20;
    v22 = *(uint16_t *)(v21 + 30);
    if ( (uint16_t)v22 != 0xFFFF )
    {
      v23 = (int *)(*(uint32_t *)(a1 + 84) + 48 * v22);
      v80 = *v23;
      v81 = v23[1];
      v82 = v23[2];
      v83 = v23[3];
      v84 = v23[4];
      v85 = v23[5];
      v86 = v23[6];
      v87 = v23[7];
      v88 = v23[8];
      v89 = v23[9];
      v90 = v23[10];
      v91 = v23[11];
    }
    v24 = *(uint16_t *)(v21 + 28);
    v25 = v64;
    if ( v24 != 0xFFFF )
      v25 = v24;
    v26 = v20 + 32 * v25;
    v51 = (char *)&rotatedVerticesPool + 384 * *(uint32_t *)_emutls_get_address(&g4_emutls_v_hkThreadNumber);
    v47 = *(uint32_t *)(v26 + 20) / 3;
    v68 = 3.40282e38f;
    v27 = 3.40282e38f;
    v50 = (v47 + 3) >> 2;
    v63 = 3.40282e38f;
    v28 = 3.40282e38f;
    v59 = -3.40282e38f;
    v29 = -3.40282e38f;
    v57 = -3.40282e38f;
    v61 = -3.40282e38f;
    v56 = -3.40282e38f;
    v30 = *(float *)(a1 + 144);
    if ( v50 > 0 )
    {
      v52 = v51;
      v53 = 0;
      v48 = v51 + 32;
      v31 = (float *)v26;
      v32 = *(uint16_t **)(v26 + 16);
      v54 = 0;
      v49 = v51 + 16;
      for ( i = v31; ; i = v55 )
      {
        v34 = (float *)&v92;
        while ( 1 )
        {
          v55 = i;
          v35 = (float)v32[2];
          v36 = (float)v32[1];
          v37 = *v32;
          v79 = 0.0;
          v78 = (float)((float)0 * 65536.0) + v35;
          v77 = (float)((float)0 * 65536.0) + v36;
          v76 = (float)((float)0 * 65536.0) + (float)v37;
          v76 = (float)(v76 * v30) + *i;
          v77 = (float)(v77 * v30) + i[1];
          v78 = (float)(v78 * v30) + i[2];
          v79 = (float)(0.0 * v30) + i[3];
          hkVector4f::setTransformedPos((hkVector4f::Self *)v34, (const hkQsTransformf::Self *)&v80, (const hkVector4f::Self *)&v76);
          v38 = v34[1];
          v27 = fminf(v27, *v34);
          v39 = v34[2];
          i = v55;
          v40 = v34[3];
          v61 = fmaxf(v61, *v34);
          v63 = fminf(v63, v39);
          v59 = fmaxf(v59, v38);
          v68 = fminf(v68, v38);
          v28 = fminf(v28, v40);
          v29 = fmaxf(v56, v40);
          v57 = fmaxf(v57, v39);
          if ( v54 < v47 - 1 )
          {
            ++v54;
            v32 += 3;
          }
          v34 += 4;
          if ( v34 == (float *)&v104 )
            break;
          v56 = v29;
        }
        v73 = v94;
        v41 = v99;
        v69 = v93;
        v78 = v99;
        v42 = v97;
        *(uint32_t *)v52 = (uint32_t)(uintptr_t)(v92);
        v70 = v42;
        v43 = v101;
        *((uint32_t *)v52 + 1) = v69;
        v71 = v43;
        v44 = DWORD1(v92);
        *((uint32_t *)v52 + 2) = v70;
        v72 = v44;
        *((uint32_t *)v52 + 3) = v71;
        v45 = v52 - v51;
        v74 = v98;
        v75 = v102;
        *(uint32_t *)&v49[v45] = v72;
        *(uint32_t *)&v49[v45 + 4] = v94;
        *(uint32_t *)&v49[v45 + 8] = v74;
        *(uint32_t *)&v49[v45 + 12] = v75;
        ++v53;
        v76 = *((float *)&v92 + 2);
        v52 += 48;
        v77 = v95;
        *(uint32_t *)&v48[v45] = DWORD2(v92);
        v46 = v103;
        *(float *)&v48[v45 + 4] = v77;
        *(float *)&v48[v45 + 8] = v41;
        v79 = v46;
        *(float *)&v48[v45 + 12] = v46;
        if ( v53 == v50 )
          break;
        v56 = v29;
      }
    }
    *((uint32_t *)a3 + 16) = (uint32_t)(uintptr_t)(v51);
    *((uint32_t *)a3 + 17) = v50;
    *((uint32_t *)a3 + 18) = 8;
    *((uint32_t *)a3 + 19) = v47;
    *((uint8_t *)a3 + 80) = 1;
    *((float *)a3 + 8) = (float)(v61 - v27) * 0.5;
    *((float *)a3 + 12) = (float)(v27 + v61) * 0.5;
    *((float *)a3 + 9) = (float)(v59 - v68) * 0.5;
    *((float *)a3 + 10) = (float)(v57 - v63) * 0.5;
    *((float *)a3 + 11) = (float)(v29 - v28) * 0.5;
    *((float *)a3 + 15) = (float)(v29 + v28) * 0.5;
    *((float *)a3 + 13) = (float)(v68 + v59) * 0.5;
    *((float *)a3 + 14) = (float)(v63 + v57) * 0.5;
    return a3;
  }
  else
  {
    *((uint32_t *)a3 + 4) = hkConvexShapeDefaultRadius;
    *((uint32_t *)a3 + 1) = -65535;
    *((uint8_t *)a3 + 8) = 2;
    *((uint8_t *)a3 + 9) = 4;
    *((uint8_t *)a3 + 10) = 0;
    *((uint8_t *)a3 + 11) = 0;
    *((uint32_t *)a3 + 3) = 0;
    *((uint8_t *)a3 + 22) = 6;
    *((uint16_t *)a3 + 10) = 0;
    *(uint32_t *)a3 = ((uint32_t)(uintptr_t)&off_209A8C8);
    *((uint32_t *)a3 + 20) = 0;
    *((uint32_t *)a3 + 21) = 0;
    *((uint32_t *)a3 + 22) = 0;
    *((uint32_t *)a3 + 23) = 0;
    *((uint8_t *)a3 + 23) = 0;
    *((uint32_t *)a3 + 4) = *(uint32_t *)(a1 + 40);
    *((uint8_t *)a3 + 22) = *(uint8_t *)(a1 + 44);
    if ( v3 != 0 )
    {
      v60 = *(uint32_t *)(a1 + 36) & v64;
      v92 = 0;
      v93 = 0;
      v94 = 0;
      v95 = 0.0;
      v96 = 1065353216;
      v97 = 1065353216;
      v98 = 1065353216;
      v99 = 1.0;
      v4 = *(uint32_t *)(a1 + 120);
      v100 = 1065353216;
      v5 = (uint16_t *)(16 * (5 * v3 - 5) + v4);
      v6 = v5[35];
      if ( (uint16_t)v6 != 0xFFFF )
      {
        v7 = *(uint32_t *)(a1 + 84) + 48 * v6;
        v92 = *(g4_int128_t *)v7;
        v93 = *(uint32_t *)(v7 + 16);
        v94 = *(uint32_t *)(v7 + 20);
        v95 = *(float *)(v7 + 24);
        v96 = *(uint32_t *)(v7 + 28);
        v97 = *(uint32_t *)(v7 + 32);
        v98 = *(uint32_t *)(v7 + 36);
        v99 = *(float *)(v7 + 40);
        v100 = *(uint32_t *)(v7 + 44);
      }
      v8 = v5[34];
      v62 = (hkpCompressedMeshShape::Chunk::Self *)v5;
      if ( (uint16_t)v8 != 0xFFFF )
        v62 = (hkpCompressedMeshShape::Chunk::Self *)(v4 + 80 * v8);
      if ( *(uint8_t *)(a1 + 44) != 6 )
        *((uint16_t *)a3 + 10) = *(uint16_t *)(*((uint32_t *)v62 + 13) + 2 * v60);
      v65 = v64 >> v58;
      hkpCompressedMeshShape::Chunk::getTriangle(
        v62,
        3 * *(uint16_t *)(*((uint32_t *)v62 + 7) + 2 * v60),
        3 * *(uint16_t *)(*((uint32_t *)v62 + 7) + 2 * (v60 + 1)),
        3 * *(uint16_t *)(*((uint32_t *)v62 + 7) + 2 * (v60 + 1) + 2),
        *(float *)(a1 + 144),
        (hkVector4f::Self *)&v72,
        (hkVector4f::Self *)&v76,
        (hkVector4f::Self *)&v80);
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v72, (const hkQsTransformf::Self *)&v92, (const hkVector4f::Self *)&v72);
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v76, (const hkQsTransformf::Self *)&v92, (const hkVector4f::Self *)&v76);
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v80, (const hkQsTransformf::Self *)&v92, (const hkVector4f::Self *)&v80);
      v9 = (uint32_t *)((char *)a3 + 32 * v65 + 32);
      v10 = (uint32_t *)((char *)a3 + 32 * (v65 ^ 1) + 32);
      *v9 = v72;
      v9[1] = v73;
      v9[2] = v74;
      v9[3] = v75;
      *((float *)a3 + 12) = v76;
      *((float *)a3 + 13) = v77;
      *((float *)a3 + 14) = v78;
      *((float *)a3 + 15) = v79;
      *v10 = v80;
      v10[1] = v81;
      v10[2] = v82;
      v10[3] = v83;
      return a3;
    }
    else
    {
      v12 = (uint16_t *)(*(uint32_t *)(a1 + 108) + 16 * v64);
      v66 = *(uint32_t *)(a1 + 96);
      v13 = v12[6];
      v14 = (int *)(16 * *v12 + v66);
      v72 = *v14;
      v73 = v14[1];
      v74 = v14[2];
      v75 = v14[3];
      v15 = (float *)(v66 + 16 * v12[1]);
      v76 = *v15;
      v77 = v15[1];
      v78 = v15[2];
      v79 = v15[3];
      v16 = (int *)(v66 + 16 * v12[2]);
      v80 = *v16;
      v81 = v16[1];
      v82 = v16[2];
      v83 = v16[3];
      v17 = v12[7];
      if ( (uint16_t)v17 != 0xFFFF )
      {
        v67 = v13;
        v18 = *(uint32_t *)(a1 + 84) + 48 * v17;
        v92 = *(g4_int128_t *)v18;
        v93 = *(uint32_t *)(v18 + 16);
        v94 = *(uint32_t *)(v18 + 20);
        v95 = *(float *)(v18 + 24);
        v96 = *(uint32_t *)(v18 + 28);
        v97 = *(uint32_t *)(v18 + 32);
        v98 = *(uint32_t *)(v18 + 36);
        v99 = *(float *)(v18 + 40);
        v100 = *(uint32_t *)(v18 + 44);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v72, (const hkQsTransformf::Self *)&v92, (const hkVector4f::Self *)&v72);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v76, (const hkQsTransformf::Self *)&v92, (const hkVector4f::Self *)&v76);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v80, (const hkQsTransformf::Self *)&v92, (const hkVector4f::Self *)&v80);
        v13 = v67;
      }
      *((uint16_t *)a3 + 10) = v13;
      *((uint32_t *)a3 + 8) = v72;
      *((uint32_t *)a3 + 9) = v73;
      *((uint32_t *)a3 + 10) = v74;
      *((uint32_t *)a3 + 11) = v75;
      *((float *)a3 + 12) = v76;
      *((float *)a3 + 13) = v77;
      *((float *)a3 + 14) = v78;
      *((float *)a3 + 15) = v79;
      *((uint32_t *)a3 + 16) = v80;
      *((uint32_t *)a3 + 17) = v81;
      *((uint32_t *)a3 + 18) = v82;
      *((uint32_t *)a3 + 19) = v83;
      return a3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::Chunk::getNumTriangles  (binary VA: 0x1701d90)
// Original: hkpCompressedMeshShape::Chunk::getNumTriangles
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::Chunk::getNumTriangles(hkpCompressedMeshShape::Chunk::Self *self)
{
  int v1;
  unsigned int v2;
  uint16_t *v3;
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __m128i v18;
  __m128i *v19;
  __m128i v20;
  unsigned int v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;

  v1 = *((uint32_t *)self + 11);
  v37 = v1;
  if ( v1 <= 0 )
  {
    v5 = 0;
    v6 = 0;
    return (*((uint32_t *)self + 8) - v5) / 3 + v6;
  }
  v2 = *((uint32_t *)self + 11);
  v3 = *((uint16_t **)self + 10);
  v4 = -((uint8_t)((uint8_t)(uintptr_t)v3 & 0xF) >> 1) & 7;
  if ( v4 > v1 )
    v4 = *((uint32_t *)self + 11);
  if ( (unsigned int)v1 <= 0xB )
  {
LABEL_5:
    v5 = *v3;
    v6 = v5 - 2;
    if ( v2 <= 1 )
    {
      v17 = 1;
    }
    else
    {
      v7 = v3[1];
      v5 += v7;
      v6 = v7 + v6 - 2;
      if ( v2 <= 2 )
      {
        v17 = 2;
      }
      else
      {
        v8 = v3[2];
        v5 += v8;
        v6 = v8 + v6 - 2;
        if ( v2 <= 3 )
        {
          v17 = 3;
        }
        else
        {
          v9 = v3[3];
          v5 += v9;
          v6 = v9 + v6 - 2;
          if ( v2 <= 4 )
          {
            v17 = 4;
          }
          else
          {
            v10 = v3[4];
            v5 += v10;
            v6 = v10 + v6 - 2;
            if ( v2 <= 5 )
            {
              v17 = 5;
            }
            else
            {
              v11 = v3[5];
              v5 += v11;
              v6 = v11 + v6 - 2;
              if ( v2 <= 6 )
              {
                v17 = 6;
              }
              else
              {
                v12 = v3[6];
                v5 += v12;
                v6 = v12 + v6 - 2;
                if ( v2 <= 7 )
                {
                  v17 = 7;
                }
                else
                {
                  v13 = v3[7];
                  v5 += v13;
                  v6 = v13 + v6 - 2;
                  if ( v2 <= 8 )
                  {
                    v17 = 8;
                  }
                  else
                  {
                    v14 = v3[8];
                    v5 += v14;
                    v6 = v14 + v6 - 2;
                    if ( v2 <= 9 )
                    {
                      v17 = 9;
                    }
                    else
                    {
                      v15 = v3[9];
                      v5 += v15;
                      v6 = v15 + v6 - 2;
                      if ( v2 <= 0xA )
                      {
                        v17 = 10;
                      }
                      else
                      {
                        v16 = v3[10];
                        v5 += v16;
                        v6 = v16 + v6 - 2;
                        v17 = 11;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( v37 == v2 )
      return (*((uint32_t *)self + 8) - v5) / 3 + v6;
    goto LABEL_17;
  }
  if ( v4 != 0 )
  {
    v2 = v4;
    goto LABEL_5;
  }
  v2 = 0;
  v17 = 0;
  v5 = 0;
  v6 = 0;
LABEL_17:
  v35 = v37 - v2;
  v36 = (v37 - v2) >> 3;
  v34 = 8 * v36;
  if ( 8 * v36 == 0 )
    goto LABEL_21;
g4_m128_raw(v18) = 0;
  v19 = (__m128i *)&v3[v2];
  v20 = g4_to_m128i(0);
  v21 = 0;
  do
  {
    ++v21;
    v22 = _mm_unpackhi_epi16(*v19, g4_m128_from<__m128i>(0LL));
    v23 = _mm_unpacklo_epi16(*v19, g4_m128_from<__m128i>(0LL));
    v20 = _mm_add_epi32(_mm_add_epi32(v20, v23), v22);
    ++v19;
    v18 = _mm_add_epi32(
            _mm_add_epi32(v22, G4_BITCAST<__m128i>(xmmword_1C7CC80)),
            _mm_add_epi32(_mm_add_epi32(v23, G4_BITCAST<__m128i>(xmmword_1C7CC80)), v18));
  }
  while ( v36 > v21 );
  v3 = *((uint16_t **)self + 10);
  v24 = _mm_add_epi32(v18, _mm_srli_si128(v18, 8));
  v25 = _mm_add_epi32(v20, _mm_srli_si128(v20, 8));
  v6 += _mm_cvtsi128_si32(_mm_add_epi32(v24, _mm_srli_si128(v24, 4)));
  v5 += _mm_cvtsi128_si32(_mm_add_epi32(v25, _mm_srli_si128(v25, 4)));
  v17 += v34;
  if ( v35 != v34 )
  {
LABEL_21:
    v26 = v3[v17];
    v5 += v26;
    v6 = v26 + v6 - 2;
    if ( v17 + 1 < v37 )
    {
      v27 = v3[v17 + 1];
      v5 += v27;
      v6 = v27 + v6 - 2;
      if ( v37 > v17 + 2 )
      {
        v28 = v3[v17 + 2];
        v5 += v28;
        v6 = v28 + v6 - 2;
        if ( v37 > v17 + 3 )
        {
          v29 = v3[v17 + 3];
          v5 += v29;
          v6 = v29 + v6 - 2;
          if ( v37 > v17 + 4 )
          {
            v30 = v3[v17 + 4];
            v5 += v30;
            v6 = v30 + v6 - 2;
            if ( v37 > v17 + 5 )
            {
              v31 = v3[v17 + 5];
              v5 += v31;
              v6 = v31 + v6 - 2;
              if ( v37 > v17 + 6 )
              {
                v32 = v3[v17 + 6];
                v5 += v32;
                v6 = v32 + v6 - 2;
              }
            }
          }
        }
      }
    }
  }
  return (*((uint32_t *)self + 8) - v5) / 3 + v6;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::isValidShapeKey  (binary VA: 0x1702110)
// Original: hkpCompressedMeshShape::isValidShapeKey
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::isValidShapeKey(hkpCompressedMeshShape::Self *self, unsigned int a2)
{
  unsigned int v2;
  int v3;
  int result;
  unsigned int v5;
  bool v6; // cc
  int v7;
  int v8;
  uint16_t *v9;
  int v10;
  unsigned int v11;
  int NextIndex;
  int v13[7];

  v2 = a2 >> *((uint32_t *)self + 7);
  v3 = (int)(*((uint32_t *)self + 8) & a2) >> *((uint32_t *)self + 6);
  if ( v2 == 0 )
    return v3 != 0;
  v5 = v2 - 1;
  v6 = (int)(v2 - 1) < *((uint32_t *)self + 31);
  result = 2;
  if ( v6 )
  {
    v7 = 5 * v5;
    v8 = *((uint32_t *)self + 30);
    v9 = (uint16_t *)(16 * v7 + v8);
    v10 = v9[34];
    if ( (uint16_t)v10 != 0xFFFF )
      v9 = (uint16_t *)(v8 + 80 * v10);
    v11 = *((uint32_t *)self + 9) & *((uint32_t *)self + 8) & a2;
    NextIndex = hkpCompressedMeshShape::Chunk::getNextIndex((hkpCompressedMeshShape::Chunk::Self *)v9, v11 - 1, v13);
    result = 3;
    if ( NextIndex == v11 )
      return 4 * (v13[0] != v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::setShapeKeyBitsPerIndex  (binary VA: 0x17021d0)
// Original: hkpCompressedMeshShape::setShapeKeyBitsPerIndex
// ----------------------------------------------------------------------------
hkpCompressedMeshShape::Self * hkpCompressedMeshShape::setShapeKeyBitsPerIndex(hkpCompressedMeshShape::Self *self, int a2)
{
  hkpCompressedMeshShape::Self *result;

  result = self;
  if ( *((uint32_t *)self + 7) != a2 )
  {
    *((uint32_t *)self + 7) = a2 + 1;
    *((uint32_t *)self + 6) = a2;
    *((uint32_t *)self + 8) = (1 << (a2 + 1)) - 1;
    *((uint32_t *)self + 9) = (1 << a2) - 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::Chunk::getTriangle  (binary VA: 0x1702210)
// Original: hkpCompressedMeshShape::Chunk::getTriangle
// ----------------------------------------------------------------------------
hkpCompressedMeshShape::Chunk::Self * hkpCompressedMeshShape::Chunk::getTriangle(hkpCompressedMeshShape::Chunk::Self *self, int a2, float a3, hkVector4f::Self *a4, hkVector4f::Self *a5, hkVector4f::Self *a6)
{
  return hkpCompressedMeshShape::Chunk::getTriangle(
           self,
           3 * *(uint16_t *)(*((uint32_t *)self + 7) + 2 * a2),
           3 * *(uint16_t *)(*((uint32_t *)self + 7) + 2 * a2 + 2),
           3 * *(uint16_t *)(*((uint32_t *)self + 7) + 2 * a2 + 4),
           a3,
           a4,
           a5,
           a6);
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::Chunk::getVertices  (binary VA: 0x1702290)
// Original: hkpCompressedMeshShape::Chunk::getVertices
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::Chunk::getVertices(hkpCompressedMeshShape::Chunk::Self *self, float a2, const hkQsTransformf::Self *a3, hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a4)
{
  hkpCompressedMeshShape::Chunk::Self *v4;
  float v5; // xmm3_4
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  float v12; // xmm2_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  int v17; // kr00_4
  int v18;
  typedef const hkQsTransformf::Self *_g4_t_v19;
  typedef hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[4];
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef hkpCompressedMeshShape::Chunk::Self **_g4_t_v27;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v25)) > _g4_s6 ? (36u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v26)) > _g4_s7 ? (40u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v27)) > _g4_s8 ? (52u + sizeof(_g4_t_v27)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);

  v27 = &self;
  v4 = self;
  v5 = a2;
  v19 = a3;
  v20 = a4;
  v6 = *((uint32_t *)self + 5) / 3;
  v7 = *((uint32_t *)a4 + 2) & 0x3FFFFFFF;
  if ( v6 > v7 )
  {
    v8 = 2 * v7;
    if ( v6 >= v8 )
      v8 = *((uint32_t *)self + 5) / 3;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v22,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)a4,
      v8,
      16);
  }
  *((uint32_t *)v20 + 1) = v6;
  result = *((uint32_t *)v4 + 5);
  if ( result > 0 )
  {
    v10 = 0;
    do
    {
      v11 = 2 * (v10 + 2);
      v21 = *((uint32_t *)v4 + 4);
      v12 = (float)*(uint16_t *)(v21 + v11 - 2);
      v13 = (float)*(uint16_t *)(v21 + v11 - 4);
      v25 = (float)((float)((float)((float)0 * 65536.0) + (float)*(uint16_t *)(v21 + v11)) * v5)
          + *((float *)v4 + 2);
      v14 = (float)((float)((float)((float)0 * 65536.0) + v12) * v5) + *((float *)v4 + 1);
      v15 = (float)(0.0 * v5) + *((float *)v4 + 3);
      v16 = (float)((float)((float)((float)0 * 65536.0) + v13) * v5) + *(float *)v4;
      v24 = v14;
      v26 = v15;
      v23 = v16;
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v23, v19, (const hkVector4f::Self *)&v23);
      v17 = v10;
      v10 += 3;
      v18 = *(uint32_t *)v20 + 16 * (v17 / 3);
      *(float *)v18 = v23;
      *(float *)(v18 + 4) = v24;
      *(float *)(v18 + 8) = v25;
      result = LODWORD(v26);
      *(float *)(v18 + 12) = v26;
    }
    while ( *((uint32_t *)v4 + 5) > v10 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::getChunkAabb  (binary VA: 0x1702460)
// Original: hkpCompressedMeshShape::getChunkAabb
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::getChunkAabb(hkpCompressedMeshShape::Self *self, const hkpCompressedMeshShape::Chunk::Self *a2, hkAabb::Self *a3)
{
  int v3;
  int v4;
  int v5;
  float v6; // xmm0_4
  int result;
  bool v8;
  float v9; // xmm1_4
  typedef hkAabb::Self *_g4_t_v10;
  typedef hkAabbUtil::Self *_g4_t_v11;
  typedef hkVector4f::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef g4_int128_t _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v15)) > _g4_s5 ? (48u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v16)) > _g4_s6 ? (52u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v17)) > _g4_s7 ? (56u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v18)) > _g4_s8 ? (60u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v19)) > _g4_s9 ? (64u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v20)) > _g4_s10 ? (68u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v21)) > _g4_s11 ? (72u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v22)) > _g4_s12 ? (76u + sizeof(_g4_t_v22)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1065353216;
  v19 = 1065353216;
  v20 = 1065353216;
  v21 = 1065353216;
  v22 = 1065353216;
  v3 = *((uint16_t *)a2 + 35);
  if ( (uint16_t)v3 != 0xFFFF )
  {
    v4 = *((uint32_t *)self + 21) + 48 * v3;
    v14 = *(g4_int128_t *)v4;
    v15 = *(uint32_t *)(v4 + 16);
    v16 = *(uint32_t *)(v4 + 20);
    v17 = *(uint32_t *)(v4 + 24);
    v18 = *(uint32_t *)(v4 + 28);
    v19 = *(uint32_t *)(v4 + 32);
    v20 = *(uint32_t *)(v4 + 36);
    v21 = *(uint32_t *)(v4 + 40);
    v22 = *(uint32_t *)(v4 + 44);
  }
  v5 = *((uint16_t *)a2 + 34);
  v11 = nullptr;
  v12 = nullptr;
  v13 = 0x80000000;
  if ( (uint16_t)v5 == 0xFFFF )
    hkpCompressedMeshShape::Chunk::getVertices(
      (hkpCompressedMeshShape::Chunk::Self *)(a2),
      *((float *)self + 36),
      (const hkQsTransformf::Self *)&v14,
      (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v11);
  else
    hkpCompressedMeshShape::Chunk::getVertices(
      (hkpCompressedMeshShape::Chunk::Self *)(*((uint32_t *)self + 30) + 80 * v5),
      *((float *)self + 36),
      (const hkQsTransformf::Self *)&v14,
      (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v11);
  hkAabbUtil::calcAabb(v11, v12, (int)(uintptr_t)(a3), v10);
  v6 = *((float *)self + 10);
  result = v13;
  v8 = v13 < 0;
  v9 = *((float *)a3 + 4) + v6;
  v12 = nullptr;
  *((float *)a3 + 4) = v9;
  *((float *)a3 + 5) = *((float *)a3 + 5) + v6;
  *((float *)a3 + 6) = *((float *)a3 + 6) + v6;
  *((float *)a3 + 7) = *((float *)a3 + 7) + v6;
  *(float *)a3 = *(float *)a3 - v6;
  *((float *)a3 + 1) = *((float *)a3 + 1) - v6;
  *((float *)a3 + 2) = *((float *)a3 + 2) - v6;
  *((float *)a3 + 3) = *((float *)a3 + 3) - v6;
  if ( !v8 )
    return (*(int (**)(uint32_t *, hkAabbUtil::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v11,
             16 * result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::ConvexPiece::getVertices  (binary VA: 0x1702680)
// Original: hkpCompressedMeshShape::ConvexPiece::getVertices
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::ConvexPiece::getVertices(hkpCompressedMeshShape::ConvexPiece::Self *self, float a2, const hkQsTransformf::Self *a3, hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a4)
{
  hkpCompressedMeshShape::ConvexPiece::Self *v4;
  float v5; // xmm3_4
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  float v12; // xmm2_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  int v17; // kr00_4
  int v18;
  typedef const hkQsTransformf::Self *_g4_t_v19;
  typedef hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[4];
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef hkpCompressedMeshShape::ConvexPiece::Self **_g4_t_v27;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v25)) > _g4_s6 ? (36u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v26)) > _g4_s7 ? (40u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v27)) > _g4_s8 ? (52u + sizeof(_g4_t_v27)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);

  v27 = &self;
  v4 = self;
  v5 = a2;
  v19 = a3;
  v20 = a4;
  v6 = *((uint32_t *)self + 5) / 3;
  v7 = *((uint32_t *)a4 + 2) & 0x3FFFFFFF;
  if ( v6 > v7 )
  {
    v8 = 2 * v7;
    if ( v6 >= v8 )
      v8 = *((uint32_t *)self + 5) / 3;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v22,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)a4,
      v8,
      16);
  }
  result = (int)(uintptr_t)(v20);
  *((uint32_t *)v20 + 1) = v6;
  if ( *((int *)v4 + 5) > 0 )
  {
    v10 = 0;
    do
    {
      v11 = 2 * (v10 + 2);
      v21 = *((uint32_t *)v4 + 4);
      v12 = (float)*(uint16_t *)(v21 + v11 - 2);
      v13 = (float)*(uint16_t *)(v21 + v11 - 4);
      v25 = (float)((float)((float)((float)0 * 65536.0) + (float)*(uint16_t *)(v21 + v11)) * v5)
          + *((float *)v4 + 2);
      v14 = (float)((float)((float)((float)0 * 65536.0) + v12) * v5) + *((float *)v4 + 1);
      v15 = (float)(0.0 * v5) + *((float *)v4 + 3);
      v16 = (float)((float)((float)((float)0 * 65536.0) + v13) * v5) + *(float *)v4;
      v24 = v14;
      v26 = v15;
      v23 = v16;
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v23, v19, (const hkVector4f::Self *)&v23);
      v17 = v10;
      v10 += 3;
      v18 = *(uint32_t *)v20 + 16 * (v17 / 3);
      *(float *)v18 = v23;
      *(float *)(v18 + 4) = v24;
      *(float *)(v18 + 8) = v25;
      result = LODWORD(v26);
      *(float *)(v18 + 12) = v26;
    }
    while ( *((uint32_t *)v4 + 5) > v10 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::getConvexPieceAabb  (binary VA: 0x1702850)
// Original: hkpCompressedMeshShape::getConvexPieceAabb
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::getConvexPieceAabb(hkpCompressedMeshShape::Self *self, const hkpCompressedMeshShape::ConvexPiece::Self *a2, hkAabb::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  typedef hkAabb::Self *_g4_t_v7;
  typedef hkAabbUtil::Self *_g4_t_v8;
  typedef hkVector4f::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef g4_int128_t _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v12)) > _g4_s5 ? (48u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v13)) > _g4_s6 ? (52u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v14)) > _g4_s7 ? (56u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v15)) > _g4_s8 ? (60u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v16)) > _g4_s9 ? (64u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v17)) > _g4_s10 ? (68u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v18)) > _g4_s11 ? (72u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v19)) > _g4_s12 ? (76u + sizeof(_g4_t_v19)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 1065353216;
  v16 = 1065353216;
  v17 = 1065353216;
  v18 = 1065353216;
  v19 = 1065353216;
  v3 = *((uint16_t *)a2 + 15);
  if ( (uint16_t)v3 != 0xFFFF )
  {
    v4 = *((uint32_t *)self + 21) + 48 * v3;
    v11 = *(g4_int128_t *)v4;
    v12 = *(uint32_t *)(v4 + 16);
    v13 = *(uint32_t *)(v4 + 20);
    v14 = *(uint32_t *)(v4 + 24);
    v15 = *(uint32_t *)(v4 + 28);
    v16 = *(uint32_t *)(v4 + 32);
    v17 = *(uint32_t *)(v4 + 36);
    v18 = *(uint32_t *)(v4 + 40);
    v19 = *(uint32_t *)(v4 + 44);
  }
  v5 = *((uint16_t *)a2 + 14);
  v8 = nullptr;
  v9 = nullptr;
  v10 = 0x80000000;
  if ( (uint16_t)v5 == 0xFFFF )
    hkpCompressedMeshShape::ConvexPiece::getVertices(
      (hkpCompressedMeshShape::ConvexPiece::Self *)(a2),
      *((float *)self + 36),
      (const hkQsTransformf::Self *)&v11,
      (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v8);
  else
    hkpCompressedMeshShape::ConvexPiece::getVertices(
      (hkpCompressedMeshShape::ConvexPiece::Self *)(*((uint32_t *)self + 33) + 32 * v5),
      *((float *)self + 36),
      (const hkQsTransformf::Self *)&v11,
      (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v8);
  hkAabbUtil::calcAabb(v8, v9, (int)(uintptr_t)(a3), v7);
  result = v10;
  v9 = nullptr;
  if ( v10 >= 0 )
    return (*(int (**)(uint32_t *, hkAabbUtil::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v8,
             16 * v10);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::getMaterial  (binary VA: 0x1702a00)
// Original: hkpCompressedMeshShape::getMaterial
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::getMaterial(hkpCompressedMeshShape::Self *self, unsigned int a2)
{
  int v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t v10;
  int v11;

  v2 = *((uint32_t *)self + 49);
  if ( v2 != 0 )
  {
    v3 = *((uint32_t *)self + 7);
    v4 = *((uint32_t *)self + 9) & a2;
    v5 = a2 >> v3;
    if ( a2 >> v3 == 0 )
    {
      v11 = *(uint32_t *)(*((uint32_t *)self + 27) + 16 * v4 + 8);
      return v2 + v11 * *((uint16_t *)self + 100);
    }
    if ( v5 != (1 << (32 - v3)) - 1 )
    {
      v6 = *((uint32_t *)self + 30);
      v7 = v6 + 80 * v5 - 80;
      v8 = *(uint16_t *)(v7 + 68);
      if ( (uint16_t)v8 != 0xFFFF )
        v7 = 80 * v8 + v6;
      v9 = *(uint32_t *)(v7 + 64);
      v10 = *((uint8_t *)self + 45);
      if ( v10 == 2 )
      {
        v11 = *(uint8_t *)(*((uint32_t *)self + 18) + v4 + v9);
        return v2 + v11 * *((uint16_t *)self + 100);
      }
      if ( v10 <= 2u )
      {
        v11 = v9;
        if ( v10 == 1 )
          return v2 + v11 * *((uint16_t *)self + 100);
      }
      else
      {
        if ( v10 == 3 )
        {
          v11 = *(uint16_t *)(*((uint32_t *)self + 15) + 2 * (v4 + v9));
          return v2 + v11 * *((uint16_t *)self + 100);
        }
        if ( v10 == 4 )
        {
          v11 = *(uint32_t *)(*((uint32_t *)self + 12) + 4 * (v4 + v9));
          return v2 + v11 * *((uint16_t *)self + 100);
        }
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShape::getCollisionFilterInfo  (binary VA: 0x1702ae0)
// Original: hkpCompressedMeshShape::getCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpCompressedMeshShape::getCollisionFilterInfo(hkpCompressedMeshShape::Self *self, unsigned int a2)
{
  int Material;

  Material = hkpCompressedMeshShape::getMaterial(self, a2);
  if ( Material != 0 )
    return *(uint32_t *)Material;
  else
    return *((uint32_t *)self + 48);
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::MappingTree::Destroy  (binary VA: 0x1adaca0)
// Original: hkpCompressedMeshShapeBuilder::MappingTree::~MappingTree
// ----------------------------------------------------------------------------
void hkpCompressedMeshShapeBuilder::MappingTree::Destroy(hkpCompressedMeshShapeBuilder::MappingTree::Self *self)
{
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v1;
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  uint32_t *address;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v20;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v21;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v22;
  uint32_t *v23;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v24;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v25;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v26;

  v1 = self;
  v2 = *((uint32_t **)self + 3);
  if ( v2 != nullptr )
  {
    v3 = v2[3];
    if ( v3 != 0 )
    {
      v4 = *(uint32_t *)(v3 + 12);
      if ( v4 != 0 )
      {
        hkpCompressedMeshShapeBuilder::MappingTree::Destroy(*(hkpCompressedMeshShapeBuilder::MappingTree::Self **)(v3 + 12));
        address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*address + 44) + 12))(*(uint32_t *)(*address + 44), v4, 20);
        v5 = address;
      }
      else
      {
        v5 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      }
      if ( *(uint32_t *)(v3 + 16) != 0 )
      {
        v20 = *(hkpCompressedMeshShapeBuilder::MappingTree::Self **)(v3 + 16);
        hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v20);
        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v5 + 44) + 12))(
          *(uint32_t *)(*v5 + 44),
          v20,
          20);
      }
      v6 = *(uint32_t *)(v3 + 8);
      *(uint32_t *)(v3 + 4) = 0;
      if ( v6 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)v3,
          20 * v6);
      *(uint32_t *)v3 = 0;
      *(uint32_t *)(v3 + 8) = 0x80000000;
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v5 + 44) + 12))(*(uint32_t *)(*v5 + 44), v3, 20);
    }
    else
    {
      v5 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    }
    v7 = (uint32_t *)v2[4];
    if ( v7 != nullptr )
    {
      if ( v7[3] != 0 )
      {
        v21 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v7[3];
        hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v21);
        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v5 + 44) + 12))(
          *(uint32_t *)(*v5 + 44),
          v21,
          20);
      }
      if ( v7[4] != 0 )
      {
        v22 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v7[4];
        hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v22);
        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v5 + 44) + 12))(
          *(uint32_t *)(*v5 + 44),
          v22,
          20);
      }
      v8 = v7[2];
      v7[1] = 0;
      if ( v8 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *v7,
          20 * v8);
      *v7 = 0;
      v7[2] = 0x80000000;
      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v5 + 44) + 12))(*(uint32_t *)(*v5 + 44), v7, 20);
    }
    v9 = v2[2];
    v2[1] = 0;
    if ( v9 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *v2,
        20 * v9);
    *v2 = 0;
    v2[2] = 0x80000000;
    (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v5 + 44) + 12))(*(uint32_t *)(*v5 + 44), v2, 20);
    v1 = self;
  }
  v10 = *((uint32_t **)v1 + 4);
  if ( v10 != nullptr )
  {
    v11 = v10[3];
    if ( v11 != 0 )
    {
      v12 = *(uint32_t *)(v11 + 12);
      if ( v12 != 0 )
      {
        hkpCompressedMeshShapeBuilder::MappingTree::Destroy(*(hkpCompressedMeshShapeBuilder::MappingTree::Self **)(v11 + 12));
        v23 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v23 + 44) + 12))(*(uint32_t *)(*v23 + 44), v12, 20);
        v13 = v23;
      }
      else
      {
        v13 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      }
      if ( *(uint32_t *)(v11 + 16) != 0 )
      {
        v24 = *(hkpCompressedMeshShapeBuilder::MappingTree::Self **)(v11 + 16);
        hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v24);
        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v13 + 44) + 12))(
          *(uint32_t *)(*v13 + 44),
          v24,
          20);
      }
      v14 = *(uint32_t *)(v11 + 8);
      *(uint32_t *)(v11 + 4) = 0;
      if ( v14 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)v11,
          20 * v14);
      *(uint32_t *)v11 = 0;
      *(uint32_t *)(v11 + 8) = 0x80000000;
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v13 + 44) + 12))(*(uint32_t *)(*v13 + 44), v11, 20);
    }
    else
    {
      v13 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    }
    v15 = (uint32_t *)v10[4];
    if ( v15 != nullptr )
    {
      if ( v15[3] != 0 )
      {
        v25 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v15[3];
        hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v25);
        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v13 + 44) + 12))(
          *(uint32_t *)(*v13 + 44),
          v25,
          20);
      }
      if ( v15[4] != 0 )
      {
        v26 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v15[4];
        hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v26);
        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v13 + 44) + 12))(
          *(uint32_t *)(*v13 + 44),
          v26,
          20);
      }
      v16 = v15[2];
      v15[1] = 0;
      if ( v16 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *v15,
          20 * v16);
      *v15 = 0;
      v15[2] = 0x80000000;
      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v13 + 44) + 12))(*(uint32_t *)(*v13 + 44), v15, 20);
    }
    v17 = v10[2];
    v10[1] = 0;
    if ( v17 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *v10,
        20 * v17);
    *v10 = 0;
    v10[2] = 0x80000000;
    (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v13 + 44) + 12))(*(uint32_t *)(*v13 + 44), v10, 20);
    v1 = self;
  }
  *((uint32_t *)v1 + 1) = 0;
  v18 = *((uint32_t *)v1 + 2);
  if ( v18 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)self,
      20 * v18);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::createMeshShape  (binary VA: 0x1adb150)
// Original: hkpCompressedMeshShapeBuilder::createMeshShape
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::createMeshShape(uint32_t *a1, int a2, char a3, int a4)
{
  uint32_t *address;
  int v5;
  float v6; // xmm1_4
  float v7; // xmm1_4

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 224);
  hkpCompressedMeshShape::Construct((hkpCompressedMeshShape::Self *)v5, a4, hkConvexShapeDefaultRadius);
  *(uint32_t *)(v5 + 144) = a2;
  *(uint8_t *)(v5 + 45) = a3;
  *(uint32_t *)(v5 + 160) = 2139095022;
  v6 = *(float *)(v5 + 160);
  *(uint32_t *)(v5 + 164) = 2139095022;
  *(float *)(v5 + 176) = -v6;
  *(uint32_t *)(v5 + 168) = 2139095022;
  v7 = -*(float *)(v5 + 164);
  *(uint32_t *)(v5 + 172) = 2139095022;
  *(float *)(v5 + 180) = v7;
  *(float *)(v5 + 184) = -*(float *)(v5 + 168);
  *(float *)(v5 + 188) = -*(float *)(v5 + 172);
  a1[45] = 0;
  *a1 = a2;
  a1[64] = v5;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::gatherStatistics  (binary VA: 0x1adb270)
// Original: hkpCompressedMeshShapeBuilder::gatherStatistics
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::gatherStatistics(hkpCompressedMeshShapeBuilder::Self *self, hkpCompressedMeshShape::Self *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  float v17; // xmm0_4
  int v18;
  int v19;
  int v20;
  float v21; // xmm0_4
  int result;
  int v23;
  uint32_t *v24;

  v2 = *((uint32_t *)a2 + 31);
  if ( v2 <= 0 )
  {
    v8 = 224;
    v3 = 0;
    v4 = 224;
    v23 = 0;
  }
  else
  {
    v3 = 0;
    v23 = 0;
    v4 = 224;
    v5 = (uint32_t *)(*((uint32_t *)a2 + 30) + 20);
    v24 = &v5[20 * v2];
    do
    {
      v6 = v5[6];
      v3 += v6;
      v7 = v5[3] + *v5 + v5[9] + v6;
      v23 += *v5 / 3;
      v5 += 20;
      v4 += 2 * v7 + 80;
    }
    while ( v5 != v24 );
    v8 = v4;
  }
  *((uint32_t *)self + 34) = v4;
  v9 = *((uint32_t *)a2 + 34);
  if ( v9 <= 0 )
  {
    v12 = v4;
    v14 = 0;
  }
  else
  {
    v10 = (int *)(*((uint32_t *)a2 + 33) + 20);
    v11 = &v10[8 * v9];
    v12 = v4;
    do
    {
      v13 = *v10;
      v10 += 8;
      v12 += 2 * v13 + 32;
    }
    while ( v10 != v11 );
    v8 = v12;
    v14 = v12 - v4;
  }
  *((uint32_t *)self + 35) = v14;
  v15 = *((uint32_t *)a2 + 25);
  v16 = v8 + 16 * (v15 + *((uint32_t *)a2 + 28));
  *((uint32_t *)self + 36) = v16 - v12;
  v17 = *(float *)self;
  v18 = 4 * *((uint32_t *)a2 + 13) + 2 * *((uint32_t *)a2 + 16) + *((uint32_t *)a2 + 19) + (*((uint32_t *)a2 + 22) << 6) + v16;
  v19 = *((uint32_t *)self + 21);
  v20 = *((uint32_t *)self + 20);
  *((uint32_t *)self + 23) = 0xFFFF;
  *((uint32_t *)self + 27) = v23 + v15 - v20;
  *((float *)self + 22) = 65535.0 * v17;
  *((float *)self + 24) = v17;
  v21 = (float)v18 / (float)(16 * (v20 + v19) + 32);
  result = *((uint32_t *)a2 + 31);
  *((uint32_t *)self + 29) = v18;
  *((uint32_t *)self + 28) = result;
  *((uint32_t *)self + 31) = v3;
  *((float *)self + 30) = v21;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::beginSubpart  (binary VA: 0x1adb410)
// Original: hkpCompressedMeshShapeBuilder::beginSubpart
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::beginSubpart(hkpCompressedMeshShapeBuilder::Self *self, hkpCompressedMeshShape::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int result;
  int v8;
  int v9;
  int v10;

  v2 = *((uint32_t *)a2 + 31);
  v3 = *((uint32_t *)a2 + 28);
  v4 = *((uint32_t *)a2 + 34);
  v9 = *((uint32_t *)self + 45);
  v5 = *((uint32_t *)self + 42);
  if ( v5 == (*((uint32_t *)self + 43) & 0x3FFFFFFF) )
  {
    v10 = *((uint32_t *)a2 + 31);
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpCompressedMeshShapeBuilder::Self *)((char *)self + 164),
      36,
      v8);
    v5 = *((uint32_t *)self + 42);
    v2 = v10;
  }
  v6 = (uint32_t *)(*((uint32_t *)self + 41) + 36 * v5);
  v6[5] = v4;
  *v6 = 0;
  v6[1] = v2;
  v6[2] = 0;
  v6[3] = v3;
  v6[4] = 0;
  v6[6] = 0;
  v6[7] = v9;
  v6[8] = 0;
  result = *((uint32_t *)self + 42);
  *((uint32_t *)self + 42) = result + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::endSubpart  (binary VA: 0x1adb4f0)
// Original: hkpCompressedMeshShapeBuilder::endSubpart
// ----------------------------------------------------------------------------
uint32_t * hkpCompressedMeshShapeBuilder::endSubpart(hkpCompressedMeshShapeBuilder::Self *self, hkpCompressedMeshShape::Self *a2)
{
  uint32_t *result;

  result = (uint32_t *)(*((uint32_t *)self + 41) + 4 * (9 * *((uint32_t *)self + 42) - 9));
  result[2] = *((uint32_t *)a2 + 31) - result[1];
  result[4] = *((uint32_t *)a2 + 28) - result[3];
  result[6] = *((uint32_t *)a2 + 34) - result[5];
  if ( *((uint8_t *)self + 188) != 0 )
    result[8] = *((uint32_t *)self + 45) - result[7];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::addInstance  (binary VA: 0x1adb550)
// Original: hkpCompressedMeshShapeBuilder::addInstance
// ----------------------------------------------------------------------------
uint32_t * hkpCompressedMeshShapeBuilder::addInstance(hkpCompressedMeshShapeBuilder::Self *self, int a2, const hkMatrix4f::Self *a3, hkpCompressedMeshShape::Self *a4, hkArray<unsigned int, hkContainerHeapAllocator::Self> *a5)
{
  hkpCompressedMeshShape::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint16_t *v17;
  int v18;
  float *v19;
  float *v20;
  float *v21;
  int v22;
  int v23;
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm1_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm7_4
  float v32; // xmm6_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int16_t _g4_t_v55;
  typedef int16_t _g4_t_v56;
  typedef int16_t _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int16_t _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef uint8_t _g4_t_v88[48];
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v51)) > _g4_s0 ? (12u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v52)) > _g4_s1 ? (12u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v53)) > _g4_s2 ? (16u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v54)) > _g4_s3 ? (20u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (26u + sizeof(_g4_t_v55)) > _g4_s4 ? (26u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v56)) > _g4_s5 ? (28u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (30u + sizeof(_g4_t_v57)) > _g4_s6 ? (30u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v58)) > _g4_s7 ? (32u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v59)) > _g4_s8 ? (32u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v60)) > _g4_s9 ? (32u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v61)) > _g4_s10 ? (32u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v62)) > _g4_s11 ? (40u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v63)) > _g4_s12 ? (40u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v64)) > _g4_s13 ? (44u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v65)) > _g4_s14 ? (48u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v66)) > _g4_s15 ? (48u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v67)) > _g4_s16 ? (48u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v68)) > _g4_s17 ? (48u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v69)) > _g4_s18 ? (52u + sizeof(_g4_t_v69)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v70)) > _g4_s19 ? (52u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v71)) > _g4_s20 ? (56u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v72)) > _g4_s21 ? (60u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v73)) > _g4_s22 ? (60u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v74)) > _g4_s23 ? (60u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v75)) > _g4_s24 ? (60u + sizeof(_g4_t_v75)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v76)) > _g4_s25 ? (64u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v77)) > _g4_s26 ? (68u + sizeof(_g4_t_v77)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v78)) > _g4_s27 ? (72u + sizeof(_g4_t_v78)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v79)) > _g4_s28 ? (76u + sizeof(_g4_t_v79)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v80)) > _g4_s29 ? (80u + sizeof(_g4_t_v80)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v81)) > _g4_s30 ? (84u + sizeof(_g4_t_v81)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v82)) > _g4_s31 ? (88u + sizeof(_g4_t_v82)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v83)) > _g4_s32 ? (92u + sizeof(_g4_t_v83)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v84)) > _g4_s33 ? (96u + sizeof(_g4_t_v84)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v85)) > _g4_s34 ? (100u + sizeof(_g4_t_v85)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v86)) > _g4_s35 ? (104u + sizeof(_g4_t_v86)) : _g4_s35,
    _g4_s37 = (108u + sizeof(_g4_t_v87)) > _g4_s36 ? (108u + sizeof(_g4_t_v87)) : _g4_s36,
    _g4_s38 = (112u + sizeof(_g4_t_v88)) > _g4_s37 ? (112u + sizeof(_g4_t_v88)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v89)) > _g4_s38 ? (160u + sizeof(_g4_t_v89)) : _g4_s38,
    _g4_s40 = (164u + sizeof(_g4_t_v90)) > _g4_s39 ? (164u + sizeof(_g4_t_v90)) : _g4_s39,
    _g4_s41 = (168u + sizeof(_g4_t_v91)) > _g4_s40 ? (168u + sizeof(_g4_t_v91)) : _g4_s40,
    _g4_s42 = (172u + sizeof(_g4_t_v92)) > _g4_s41 ? (172u + sizeof(_g4_t_v92)) : _g4_s41,
    _g4_s43 = (176u + sizeof(_g4_t_v93)) > _g4_s42 ? (176u + sizeof(_g4_t_v93)) : _g4_s42,
    _g4_s44 = (180u + sizeof(_g4_t_v94)) > _g4_s43 ? (180u + sizeof(_g4_t_v94)) : _g4_s43,
    _g4_s45 = (184u + sizeof(_g4_t_v95)) > _g4_s44 ? (184u + sizeof(_g4_t_v95)) : _g4_s44,
    _g4_s46 = (188u + sizeof(_g4_t_v96)) > _g4_s45 ? (188u + sizeof(_g4_t_v96)) : _g4_s45,
    _g4_s47 = (192u + sizeof(_g4_t_v97)) > _g4_s46 ? (192u + sizeof(_g4_t_v97)) : _g4_s46,
    _g4_s48 = (196u + sizeof(_g4_t_v98)) > _g4_s47 ? (196u + sizeof(_g4_t_v98)) : _g4_s47,
    _g4_s49 = (200u + sizeof(_g4_t_v99)) > _g4_s48 ? (200u + sizeof(_g4_t_v99)) : _g4_s48,
    _g4_s50 = (204u + sizeof(_g4_t_v100)) > _g4_s49 ? (204u + sizeof(_g4_t_v100)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 26u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 30u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 52u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 64u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 72u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 76u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 80u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 84u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 88u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 92u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 96u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 100u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 104u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 108u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 112u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 160u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 164u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 168u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 172u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 176u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 180u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 184u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 188u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 192u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 196u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 200u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 204u);

  v5 = a4;
  hkQsTransformf::set((hkQsTransformf::Self *)v88, a3);
  v54 = *((uint32_t *)a4 + 22);
  v6 = v54;
  if ( v54 == (*((uint32_t *)a4 + 23) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpCompressedMeshShape::Self *)((char *)a4 + 84),
      48,
      v51);
    v6 = *((uint32_t *)a4 + 22);
  }
  std::memcpy((void *)(*((uint32_t *)a4 + 21) + 48 * v6), v88, 48);
  ++*((uint32_t *)a4 + 22);
  v64 = 36 * a2;
  v71 = (uint32_t *)(*((uint32_t *)self + 41) + 36 * a2);
  v7 = v71[1];
  v8 = v71[2];
  v72 = v7;
  v65 = v7 + v8;
  v52 = *((uint32_t *)a4 + 31);
  if ( v7 >= v7 + v8 )
  {
    v14 = *((uint32_t *)self + 41) + 36 * a2;
  }
  else
  {
    v9 = 80 * v7;
    do
    {
      if ( *v71 != 0 )
      {
        v11 = *((uint32_t *)a4 + 31);
        v12 = v11;
        if ( v11 == (*((uint32_t *)a4 + 32) & 0x3FFFFFFF) )
        {
          v60 = *((uint32_t *)a4 + 31);
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkpCompressedMeshShape::Self *)((char *)a4 + 120),
            80,
            v52);
          v12 = *((uint32_t *)a4 + 31);
          v11 = v60;
        }
        v10 = 80 * v11;
        v13 = *((uint32_t *)a4 + 30) + 80 * v12;
        *(uint16_t *)(v13 + 68) = v72;
        *(uint16_t *)(v13 + 70) = v54;
        *(uint32_t *)(v13 + 16) = 0;
        *(uint32_t *)(v13 + 24) = 0x80000000;
        *(uint32_t *)(v13 + 28) = 0;
        *(uint32_t *)(v13 + 36) = 0x80000000;
        *(uint32_t *)(v13 + 40) = 0;
        *(uint32_t *)(v13 + 48) = 0x80000000;
        *(uint32_t *)(v13 + 52) = 0;
        *(uint32_t *)(v13 + 60) = 0x80000000;
        *(uint32_t *)v13 = 0;
        *(uint32_t *)(v13 + 4) = 0;
        *(uint32_t *)(v13 + 8) = 0;
        *(uint32_t *)(v13 + 12) = 0;
        *(uint32_t *)(v13 + 20) = 0;
        *(uint32_t *)(v13 + 32) = 0;
        *(uint32_t *)(v13 + 44) = 0;
        *(uint32_t *)(v13 + 56) = 0;
        *(uint32_t *)(v13 + 64) = 0;
        ++*((uint32_t *)a4 + 31);
        ++*((uint32_t *)self + 37);
      }
      else
      {
        *(uint16_t *)(*((uint32_t *)a4 + 30) + v9 + 70) = v54;
        v10 = v9;
      }
      v9 += 80;
      hkpCompressedMeshShape::getChunkAabb(
        a4,
        (const hkpCompressedMeshShape::Chunk::Self *)(*((uint32_t *)a4 + 30) + v10),
        (hkAabb::Self *)&v89);
      ++v72;
      *((float *)a4 + 40) = fminf(*((float *)a4 + 40), v89);
      *((float *)a4 + 41) = fminf(*((float *)a4 + 41), v90);
      *((float *)a4 + 42) = fminf(*((float *)a4 + 42), v91);
      *((float *)a4 + 43) = fminf(*((float *)a4 + 43), v92);
      *((float *)a4 + 44) = fmaxf(*((float *)a4 + 44), v93);
      *((float *)a4 + 45) = fmaxf(*((float *)a4 + 45), v94);
      *((float *)a4 + 46) = fmaxf(*((float *)a4 + 46), v95);
      *((float *)a4 + 47) = fmaxf(*((float *)a4 + 47), v96);
    }
    while ( v72 != v65 );
    v14 = *((uint32_t *)self + 41) + v64;
  }
  v15 = *(uint32_t *)(v14 + 12);
  v53 = *((uint32_t *)a4 + 28);
  v73 = v15;
  v62 = v15 + *(uint32_t *)(v14 + 16);
  if ( v15 < v62 )
  {
    v69 = 16 * v15;
    do
    {
      if ( *v71 != 0 )
      {
        v37 = *((uint32_t *)a4 + 27);
        v55 = *(uint16_t *)(v37 + v69);
        v56 = *(uint16_t *)(v37 + v69 + 2);
        v57 = *(uint16_t *)(v37 + v69 + 4);
        v58 = *(uint32_t *)(v37 + v69 + 8);
        v66 = *(uint16_t *)(v37 + v69 + 12);
        v38 = *((uint32_t *)a4 + 28);
        v39 = v38;
        if ( v38 == (*((uint32_t *)a4 + 29) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkpCompressedMeshShape::Self *)((char *)a4 + 108),
            16,
            v52);
          v37 = *((uint32_t *)a4 + 27);
          v39 = *((uint32_t *)a4 + 28);
        }
        v16 = 16 * v38;
        v40 = v37 + 16 * v39;
        *(uint16_t *)v40 = v55;
        *(uint16_t *)(v40 + 2) = v56;
        *(uint16_t *)(v40 + 4) = v57;
        *(uint32_t *)(v40 + 8) = v58;
        *(uint16_t *)(v40 + 12) = v66;
        *(uint16_t *)(v40 + 14) = v54;
        ++*((uint32_t *)a4 + 28);
      }
      else
      {
        v16 = v69;
        *(uint16_t *)(*((uint32_t *)a4 + 27) + v69 + 14) = v54;
      }
      v17 = (uint16_t *)(*((uint32_t *)a4 + 27) + v16);
      v18 = *((uint32_t *)a4 + 24);
      v19 = (float *)(16 * *v17 + v18);
      v76 = *v19;
      v77 = v19[1];
      v78 = v19[2];
      v79 = v19[3];
      v20 = (float *)(16 * v17[1] + v18);
      v80 = *v20;
      v81 = v20[1];
      v82 = v20[2];
      v83 = v20[3];
      v21 = (float *)(v18 + 16 * v17[2]);
      v84 = *v21;
      v85 = v21[1];
      v86 = v21[2];
      v87 = v21[3];
      v22 = v17[7];
      if ( (uint16_t)v22 != 0xFFFF )
      {
        v23 = *((uint32_t *)a4 + 21) + 48 * v22;
        v89 = *(float *)v23;
        v90 = *(float *)(v23 + 4);
        v91 = *(float *)(v23 + 8);
        v92 = *(float *)(v23 + 12);
        v93 = *(float *)(v23 + 16);
        v94 = *(float *)(v23 + 20);
        v95 = *(float *)(v23 + 24);
        v96 = *(float *)(v23 + 28);
        v97 = *(uint32_t *)(v23 + 32);
        v98 = *(uint32_t *)(v23 + 36);
        v99 = *(uint32_t *)(v23 + 40);
        v100 = *(uint32_t *)(v23 + 44);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v76, (const hkQsTransformf::Self *)&v89, (const hkVector4f::Self *)&v76);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v80, (const hkQsTransformf::Self *)&v89, (const hkVector4f::Self *)&v80);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v84, (const hkQsTransformf::Self *)&v89, (const hkVector4f::Self *)&v84);
      }
      v24 = fminf(fminf(v79, v83), v87);
      v25 = fmaxf(fmaxf(v79, v83), v87);
      v26 = fminf(fminf(v77, v81), v85);
      v27 = fmaxf(v78, v82);
      v28 = fminf(fminf(v78, v82), v86);
      v29 = fmaxf(fmaxf(v76, v80), v84);
      v30 = fmaxf(fmaxf(v77, v81), v85);
      *((float *)a4 + 40) = fminf(*((float *)a4 + 40), fminf(fminf(v76, v80), v84));
      v31 = fminf(*((float *)a4 + 41), v26);
      v32 = fminf(*((float *)a4 + 42), v28);
      v33 = fminf(*((float *)a4 + 43), v24);
      v34 = fmaxf(*((float *)a4 + 44), v29);
      v35 = fmaxf(*((float *)a4 + 45), v30);
      v36 = fmaxf(*((float *)a4 + 46), fmaxf(v27, v86));
      *((float *)a4 + 41) = v31;
      *((float *)a4 + 42) = v32;
      *((float *)a4 + 43) = v33;
      *((float *)a4 + 44) = v34;
      *((float *)a4 + 45) = v35;
      *((float *)a4 + 46) = v36;
      ++v73;
      v69 += 16;
      *((float *)a4 + 47) = fmaxf(*((float *)a4 + 47), v25);
    }
    while ( v73 != v62 );
  }
  if ( *((uint8_t *)self + 188) != 0 && a5 != nullptr )
  {
    v41 = v71[7];
    v74 = v41;
    v67 = v41 + v71[8];
    if ( v41 < v67 )
    {
      v42 = *((uint32_t *)a5 + 1);
      v70 = 4 * v71[7];
      while ( 1 )
      {
        v43 = *(uint32_t *)(*((uint32_t *)self + 44) + v70);
        if ( v43 == -1 || *v71 == 0 )
          goto LABEL_27;
        v59 = *((uint32_t *)a4 + 7);
        v63 = v43 >> v59;
        if ( v43 >> v59 == 0 )
          break;
        if ( (1 << (32 - v59)) - 1 == v63 )
          goto LABEL_27;
        v43 = v43 & *((uint32_t *)a4 + 8) | ((v63 + v52 - v71[1]) << v59);
        if ( (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) == v42 )
        {
LABEL_34:
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 4, v52);
          v42 = *((uint32_t *)a5 + 1);
        }
LABEL_28:
        ++v74;
        v70 += 4;
        *(uint32_t *)(*(uint32_t *)a5 + 4 * v42) = v43;
        v42 = *((uint32_t *)a5 + 1) + 1;
        *((uint32_t *)a5 + 1) = v42;
        if ( v74 == v67 )
        {
          v5 = a4;
          goto LABEL_36;
        }
      }
      v43 = (v43 & *((uint32_t *)a4 + 8)) + v53 - v71[3];
LABEL_27:
      if ( (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) == v42 )
        goto LABEL_34;
      goto LABEL_28;
    }
  }
LABEL_36:
  v44 = *((uint32_t *)self + 41);
  v75 = *(uint32_t *)(v44 + v64 + 20);
  v68 = v75 + *(uint32_t *)(v44 + v64 + 24);
  if ( v75 < v68 )
  {
    v45 = 32 * v75;
    while ( 1 )
    {
      if ( *(uint32_t *)(v44 + 36 * a2) != 0 )
      {
        v47 = *((uint32_t *)v5 + 34);
        v48 = v47;
        if ( v47 == (*((uint32_t *)v5 + 35) & 0x3FFFFFFF) )
        {
          v61 = *((uint32_t *)v5 + 34);
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkpCompressedMeshShape::Self *)((char *)v5 + 132),
            32,
            v52);
          v48 = *((uint32_t *)v5 + 34);
          v47 = v61;
        }
        v49 = *((uint32_t *)v5 + 33) + 32 * v48;
        v46 = 32 * v47;
        *(uint16_t *)(v49 + 28) = v75;
        *(uint32_t *)(v49 + 16) = 0;
        *(uint32_t *)(v49 + 24) = 0x80000000;
        *(uint32_t *)v49 = 0;
        *(uint32_t *)(v49 + 4) = 0;
        *(uint32_t *)(v49 + 8) = 0;
        *(uint32_t *)(v49 + 12) = 0;
        *(uint32_t *)(v49 + 20) = 0;
        *(uint16_t *)(v49 + 30) = v54;
        ++*((uint32_t *)v5 + 34);
      }
      else
      {
        *(uint16_t *)(*((uint32_t *)v5 + 33) + v45 + 30) = v54;
        v46 = v45;
      }
      v45 += 32;
      hkpCompressedMeshShape::getConvexPieceAabb(
        v5,
        (const hkpCompressedMeshShape::ConvexPiece::Self *)(*((uint32_t *)v5 + 33) + v46),
        (hkAabb::Self *)&v89);
      ++v75;
      *((float *)v5 + 40) = fminf(*((float *)v5 + 40), v89);
      *((float *)v5 + 41) = fminf(*((float *)v5 + 41), v90);
      *((float *)v5 + 42) = fminf(*((float *)v5 + 42), v91);
      *((float *)v5 + 43) = fminf(*((float *)v5 + 43), v92);
      *((float *)v5 + 44) = fmaxf(*((float *)v5 + 44), v93);
      *((float *)v5 + 45) = fmaxf(*((float *)v5 + 45), v94);
      *((float *)v5 + 46) = fmaxf(*((float *)v5 + 46), v95);
      *((float *)v5 + 47) = fmaxf(*((float *)v5 + 47), v96);
      if ( v75 == v68 )
        break;
      v44 = *((uint32_t *)self + 41);
    }
  }
  ++*v71;
  return v71;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::appendGeometry  (binary VA: 0x1adc020)
// Original: hkpCompressedMeshShapeBuilder::appendGeometry
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::appendGeometry(hkpCompressedMeshShapeBuilder::Self *self, hkGeometry::Self *a2, const hkGeometry::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v18;
  int v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v25)) > _g4_s4 ? (12u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v26)) > _g4_s5 ? (12u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v27)) > _g4_s6 ? (16u + sizeof(_g4_t_v27)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);

  v3 = *((uint32_t *)a2 + 3);
  v22 = *((uint32_t *)a2 + 6);
  v25 = *((uint32_t *)a3 + 6);
  v4 = v22;
  v5 = *((uint32_t *)a3 + 5);
  v23 = v25 + v22;
  v6 = *((uint32_t *)a2 + 7) & 0x3FFFFFFF;
  if ( v25 + v22 > v6 )
  {
    v21 = *((uint32_t *)a2 + 3);
    v20 = 2 * v6;
    if ( v20 < v23 )
      v20 = v25 + v22;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v27,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)a2 + 5,
      v20,
      16);
    v4 = *((uint32_t *)a2 + 6);
    v3 = v21;
  }
  v7 = *((uint32_t *)a2 + 5) + 16 * v4;
  v8 = 0;
  if ( v25 > 0 )
  {
    do
    {
      *(uint32_t *)(v7 + v8) = *(uint32_t *)(v5 + v8);
      *(uint32_t *)(v7 + v8 + 4) = *(uint32_t *)(v5 + v8 + 4);
      *(uint32_t *)(v7 + v8 + 8) = *(uint32_t *)(v5 + v8 + 8);
      *(uint32_t *)(v7 + v8 + 12) = *(uint32_t *)(v5 + v8 + 12);
      v8 += 16;
    }
    while ( v8 != 16 * v25 );
  }
  v9 = v22;
  *((uint32_t *)a2 + 6) = v23;
  v10 = 16 * v22;
  if ( v22 >= v23 )
  {
    v12 = *((uint32_t *)a2 + 3);
    v13 = *((uint32_t *)a3 + 2);
    v26 = *((uint32_t *)a3 + 3);
    v24 = v12 + v26;
    v14 = *((uint32_t *)a2 + 4) & 0x3FFFFFFF;
    v18 = (int *)((char *)a2 + 8);
    if ( v12 + v26 <= v14 )
      goto LABEL_7;
  }
  else
  {
    do
    {
      ++v9;
      *(uint32_t *)(*((uint32_t *)a2 + 5) + v10) += v3;
      *(uint32_t *)(*((uint32_t *)a2 + 5) + v10 + 4) += v3;
      v11 = *((uint32_t *)a2 + 5) + v10;
      v10 += 16;
      *(uint32_t *)(v11 + 8) += v3;
    }
    while ( *((uint32_t *)a2 + 6) > v9 );
    v12 = *((uint32_t *)a2 + 3);
    v13 = *((uint32_t *)a3 + 2);
    v26 = *((uint32_t *)a3 + 3);
    v24 = v12 + v26;
    v14 = *((uint32_t *)a2 + 4) & 0x3FFFFFFF;
    if ( v12 + v26 <= v14 )
      goto LABEL_7;
    v18 = (int *)((char *)a2 + 8);
  }
  v19 = 2 * v14;
  if ( v19 < v24 )
    v19 = v24;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v27, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v18, v19, 16);
  v12 = *((uint32_t *)a2 + 3);
LABEL_7:
  v15 = 0;
  v16 = *((uint32_t *)a2 + 2) + 16 * v12;
  if ( v26 > 0 )
  {
    do
    {
      *(uint32_t *)(v16 + v15) = *(uint32_t *)(v13 + v15);
      *(uint32_t *)(v16 + v15 + 4) = *(uint32_t *)(v13 + v15 + 4);
      *(uint32_t *)(v16 + v15 + 8) = *(uint32_t *)(v13 + v15 + 8);
      *(uint32_t *)(v16 + v15 + 12) = *(uint32_t *)(v13 + v15 + 12);
      v15 += 16;
    }
    while ( v15 != 16 * v26 );
  }
  *((uint32_t *)a2 + 3) = v24;
  return v24;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::snapToGrid  (binary VA: 0x1adc280)
// Original: hkpCompressedMeshShapeBuilder::snapToGrid
// ----------------------------------------------------------------------------
hkpCompressedMeshShapeBuilder::Self * hkpCompressedMeshShapeBuilder::snapToGrid(hkpCompressedMeshShapeBuilder::Self *self, hkVector4f::Self *a2)
{
  hkpCompressedMeshShapeBuilder::Self *result;
  int v3;
  int v4; // xmm2_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  __m128i v7;
  __m128i v8;
  __m128i v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  float v16; // xmm4_4
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  float v23; // xmm1_4
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  float v30; // xmm3_4

  result = self;
  v3 = _mm_cvtsi128_si32(g4_to_m128i((unsigned int)(uintptr_t)(a2)));
  v4 = (2130706432 - v3) & ((v3 ^ (v3 + 2139095040)) >> 31);
g4_m128_raw(v7) = *(unsigned int *)self;
  v5 = (float)(2.0
             - (float)(*(float *)&a2 * (float)((float)(2.0 - (float)(*(float *)&a2 * *(float *)&v4)) * *(float *)&v4)))
     * (float)((float)(2.0 - (float)(*(float *)&a2 * *(float *)&v4)) * *(float *)&v4);
g4_m128_raw(v8) = *((unsigned int *)self + 1);
  v6 = (float)(2.0 - (float)(*(float *)&a2 * v5)) * v5;
g4_m128_raw(v9) = *((unsigned int *)self + 2);
  *((float *)self + 3) = v6 * *((float *)self + 3);
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)(*(float *)g4_m128_ptr<int32_t>(v7) * v6) + 0.5;
  *(float *)g4_m128_ptr<int32_t>(v8) = (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v6) + 0.5;
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v6) + 0.5;
  v10 = _mm_cvtsi128_si32(v7);
  v11 = (v10 & 0x7F800000u) >> 23;
  v12 = v11 - 127;
  if ( v11 < 0x7F )
  {
    v16 = 0.0;
  }
  else
  {
    v13 = _mm_cvtsi128_si32(v7) & 0x7FFFFF | 0x800000;
    v14 = (_mm_cvtsi128_si32(v7) >> 31) | 1;
    if ( v12 > 23 )
      v15 = v13 << (v11 + 106);
    else
      v15 = v13 >> (23 - v12);
    v16 = (float)(int)(v10 & 0x80000000 | (v14 * v15) & 0x7FFFFFFF);
  }
  v17 = _mm_cvtsi128_si32(v8);
  v18 = (v17 & 0x7F800000u) >> 23;
  v19 = v18 - 127;
  if ( v18 < 0x7F )
  {
    v23 = 0.0;
  }
  else
  {
    v20 = _mm_cvtsi128_si32(v8) & 0x7FFFFF | 0x800000;
    v21 = (_mm_cvtsi128_si32(v8) >> 31) | 1;
    if ( v19 <= 23 )
      v22 = v20 >> (23 - v19);
    else
      v22 = v20 << (v18 + 106);
    v23 = (float)(int)(v17 & 0x80000000 | (v21 * v22) & 0x7FFFFFFF);
  }
  v24 = _mm_cvtsi128_si32(v9);
  v25 = (v24 & 0x7F800000u) >> 23;
  v26 = v25 - 127;
  if ( v25 < 0x7F )
  {
    v30 = 0.0;
  }
  else
  {
    v27 = _mm_cvtsi128_si32(v9) & 0x7FFFFF | 0x800000;
    v28 = (_mm_cvtsi128_si32(v9) >> 31) | 1;
    if ( v26 <= 23 )
      v29 = v27 >> (23 - v26);
    else
      v29 = v27 << (v25 + 106);
    v30 = (float)(int)(v24 & 0x80000000 | (v28 * v29) & 0x7FFFFFFF);
  }
  *(float *)self = v16 * *(float *)&a2;
  *((float *)self + 1) = v23 * *(float *)&a2;
  *((float *)self + 2) = *(float *)&a2 * v30;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::addMaterial  (binary VA: 0x1adc4c0)
// Original: hkpCompressedMeshShapeBuilder::addMaterial
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::addMaterial(hkpCompressedMeshShapeBuilder::Self *self, hkpCompressedMeshShape::Chunk::Self *a2, int a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = *((uint32_t *)self + 64);
  result = *(uint8_t *)(v3 + 45);
  switch ( (uint8_t)result )
  {
    case 4:
      v5 = *(uint32_t *)(v3 + 52);
      if ( v5 == (*(uint32_t *)(v3 + 56) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v3 + 48),
          4,
          v8);
        v5 = *(uint32_t *)(v3 + 52);
      }
      result = *(uint32_t *)(v3 + 48);
      *(uint32_t *)(result + 4 * v5) = a3;
      ++*(uint32_t *)(v3 + 52);
      break;
    case 3:
      v7 = *(uint32_t *)(v3 + 64);
      if ( v7 == (*(uint32_t *)(v3 + 68) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v3 + 60),
          2,
          v8);
        v7 = *(uint32_t *)(v3 + 64);
      }
      result = *(uint32_t *)(v3 + 60);
      *(uint16_t *)(result + 2 * v7) = a3;
      ++*(uint32_t *)(v3 + 64);
      break;
    case 2:
      v6 = *(uint32_t *)(v3 + 76);
      if ( v6 == (*(uint32_t *)(v3 + 80) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v3 + 72),
          1,
          v8);
        v6 = *(uint32_t *)(v3 + 76);
      }
      result = *(uint32_t *)(v3 + 72);
      *(uint8_t *)(result + v6) = a3;
      ++*(uint32_t *)(v3 + 76);
      break;
    default:
      if ( *((uint32_t *)a2 + 16) == -1 && (uint8_t)result == 1 )
        *((uint32_t *)a2 + 16) = a3;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::quantizeVertices  (binary VA: 0x1adc610)
// Original: hkpCompressedMeshShapeBuilder::quantizeVertices
// ----------------------------------------------------------------------------
const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> * hkpCompressedMeshShapeBuilder::quantizeVertices(hkpCompressedMeshShapeBuilder::Self *self, float *a2, const hkVector4f::Self *a3, const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a4)
{
  int v4;
  int v5;
  int v6;
  float v7; // xmm3_4
  int v8;
  const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *result;
  unsigned int *v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  unsigned int v14;
  char v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *v25;
  typedef int _g4_t_v26;
  typedef const hkVector4f::Self *_g4_t_v27;
  typedef float *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef int _g4_t_v32;
  typedef const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *_g4_t_v37;
  typedef uint32_t _g4_t_v38[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v32)) > _g4_s6 ? (24u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v33)) > _g4_s7 ? (28u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v34)) > _g4_s8 ? (32u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v35)) > _g4_s9 ? (32u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v36)) > _g4_s10 ? (32u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v37)) > _g4_s11 ? (36u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v38)) > _g4_s12 ? (40u + sizeof(_g4_t_v38)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);

  v38[3] = (uint32_t)(uintptr_t)(&self);
  v28 = a2;
  v27 = a3;
  v33 = a4;
  v4 = *((uint32_t *)a3 + 1);
  v5 = 3 * v4;
  v6 = *((uint32_t *)a4 + 2) & 0x3FFFFFFF;
  v7 = 1.0 / *(float *)&self;
  if ( 3 * v4 > v6 )
  {
    v8 = 2 * v6;
    if ( v8 < v5 )
      v8 = 3 * v4;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v38, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)a4, v8, 2);
  }
  result = v33;
  *((uint32_t *)v33 + 1) = v5;
  if ( v4 > 0 )
  {
    v26 = 6 * v4;
    v37 = nullptr;
    v29 = 0;
    do
    {
      v10 = (unsigned int *)(*(uint32_t *)v27 + v29);
g4_m128_raw(v11) = *v10;
g4_m128_raw(v12) = v10[1];
g4_m128_raw(v13) = v10[2];
      *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) - *v28) * v7) + 0.5;
      *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) - v28[1]) * v7) + 0.5;
      *(float *)g4_m128_ptr<int32_t>(v13) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) - v28[2]) * v7) + 0.5;
      v14 = (_mm_cvtsi128_si32(v11) & 0x7F800000u) >> 23;
      v32 = v14 - 127;
      v15 = v14 + 106;
      v16 = (int)(v14 - 151) >> 31;
      v34 = v16 & (23 - v32);
      v17 = _mm_cvtsi128_si32(v11) & ~(((_mm_cvtsi128_si32(v11) & 0x7FFFFFFF) - 1) >> 31);
      v18 = (v17 & 0x7FFFFF | 0x800000) & (~v16 | (-8388608 >> ((v16 & 0x17) - v34)));
      *(uint16_t *)((char *)v37 + *(uint32_t *)v33) = (~(v32 >> 31) & (((v17 >> 31) | (v18 + v18 - 1)) - v18 + 1)) >> v34 << (~(uint8_t)v16 & v15);
      v19 = (_mm_cvtsi128_si32(v12) & 0x7F800000u) >> 23;
      v30 = v19 + 106;
      v35 = v19 - 127;
      LOBYTE(v17) = 23 - (v19 - 127);
      v20 = (int)(v19 - 151) >> 31;
      LOBYTE(v18) = v20 & v17;
      v21 = _mm_cvtsi128_si32(v12) & ~(((_mm_cvtsi128_si32(v12) & 0x7FFFFFFF) - 1) >> 31);
      *(uint16_t *)((char *)v37 + *(uint32_t *)v33 + 2) = (~(v35 >> 31)
                                                    & (((v21 >> 31)
                                                      | (((v21 & 0x7FFFFF | 0x800000)
                                                        & (~v20 | (-8388608 >> ((v20 & 0x17) - v18))))
                                                       + ((v21 & 0x7FFFFF | 0x800000)
                                                        & (~v20 | (-8388608 >> ((v20 & 0x17) - v18))))
                                                       - 1))
                                                     - ((v21 & 0x7FFFFF | 0x800000)
                                                      & (~v20 | (-8388608 >> ((v20 & 0x17) - v18))))
                                                     + 1)) >> v18 << (~(uint8_t)v20 & v30);
      v22 = (_mm_cvtsi128_si32(v13) & 0x7F800000u) >> 23;
      v36 = v22 - 127;
      LOBYTE(v21) = v22 + 106;
      v23 = (int)(v22 - 151) >> 31;
      v31 = v21;
      v29 += 16;
      v24 = _mm_cvtsi128_si32(v13) & ~(((_mm_cvtsi128_si32(v13) & 0x7FFFFFFF) - 1) >> 31);
      v25 = v37;
      v37 = (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)((char *)v37 + 6);
      *(uint16_t *)((char *)v25 + *(uint32_t *)v33 + 4) = (~(v36 >> 31)
                                                    & (((v24 >> 31)
                                                      | (((v24 & 0x7FFFFF | 0x800000)
                                                        & (~v23 | (-8388608 >> ((v23 & 0x17) - (v23 & (23 - v36))))))
                                                       + ((v24 & 0x7FFFFF | 0x800000)
                                                        & (~v23 | (-8388608 >> ((v23 & 0x17) - (v23 & (23 - v36))))))
                                                       - 1))
                                                     - ((v24 & 0x7FFFFF | 0x800000)
                                                      & (~v23 | (-8388608 >> ((v23 & 0x17) - (v23 & (23 - v36))))))
                                                     + 1)) >> (v23 & (23 - v36)) << (~(uint8_t)v23 & v31);
      result = v37;
    }
    while ( v37 != (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)v26 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::createChunk  (binary VA: 0x1adc940)
// Original: hkpCompressedMeshShapeBuilder::createChunk
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::createChunk(hkpCompressedMeshShapeBuilder::Self *self, const hkGeometry::Self *a2, const hkVector4f::Self *a3, hkpCompressedMeshShape::Chunk::Self *a4, hkpCompressedMeshShapeBuilder::MappingTree::Self *a5)
{
  hkpCompressedMeshShapeBuilder::Self *v5;
  hkpCompressedMeshShape::Chunk::Self *v6;
  const hkVector4f::Self *v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  hkpCompressedMeshShape::Chunk::Self *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  hkpCompressedMeshShape::Chunk::Self *v23;
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
  int v37;
  int v38;
  uint32_t *v39;
  uint32_t *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  uint32_t *v53;
  int v54;
  int v55;
  int v56;
  uint32_t *v57;
  int v58;
  int v59;
  int v60;
  uint32_t *v61;
  int v62;
  int i;
  int v64;
  int v65;
  int result;
  int v67;
  int v68;
  typedef int _g4_t_v69;
  typedef hkMemoryAllocator::Self *_g4_t_v70;
  typedef int16_t _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef hkGeometry::Self *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef hkpCompressedMeshShapeBuilder::Self *_g4_t_v76;
  typedef hkpCompressedMeshShape::Chunk::Self *_g4_t_v77;
  typedef hkpCompressedMeshShape::Chunk::Self *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int16_t _g4_t_v80;
  typedef int *_g4_t_v81;
  typedef int16_t _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef char _g4_t_v89[4];
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
  typedef int _g4_t_v101;
  typedef int _g4_t_v102[3];
  typedef uint32_t _g4_t_v103[2];
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_j;
  typedef char _g4_t_v108[12];
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef hkpCompressedMeshShapeBuilder::Self **_g4_t_v118;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v69)) > _g4_s0 ? (0u + sizeof(_g4_t_v69)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v70)) > _g4_s1 ? (16u + sizeof(_g4_t_v70)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v71)) > _g4_s2 ? (24u + sizeof(_g4_t_v71)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v72)) > _g4_s3 ? (28u + sizeof(_g4_t_v72)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v73)) > _g4_s4 ? (32u + sizeof(_g4_t_v73)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v74)) > _g4_s5 ? (36u + sizeof(_g4_t_v74)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v75)) > _g4_s6 ? (40u + sizeof(_g4_t_v75)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v76)) > _g4_s7 ? (48u + sizeof(_g4_t_v76)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v77)) > _g4_s8 ? (52u + sizeof(_g4_t_v77)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v78)) > _g4_s9 ? (52u + sizeof(_g4_t_v78)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v79)) > _g4_s10 ? (52u + sizeof(_g4_t_v79)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v80)) > _g4_s11 ? (52u + sizeof(_g4_t_v80)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v81)) > _g4_s12 ? (56u + sizeof(_g4_t_v81)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v82)) > _g4_s13 ? (56u + sizeof(_g4_t_v82)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v83)) > _g4_s14 ? (60u + sizeof(_g4_t_v83)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v84)) > _g4_s15 ? (60u + sizeof(_g4_t_v84)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v85)) > _g4_s16 ? (60u + sizeof(_g4_t_v85)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v86)) > _g4_s17 ? (60u + sizeof(_g4_t_v86)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v87)) > _g4_s18 ? (60u + sizeof(_g4_t_v87)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v88)) > _g4_s19 ? (60u + sizeof(_g4_t_v88)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v89)) > _g4_s20 ? (64u + sizeof(_g4_t_v89)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v90)) > _g4_s21 ? (68u + sizeof(_g4_t_v90)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v91)) > _g4_s22 ? (72u + sizeof(_g4_t_v91)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v92)) > _g4_s23 ? (76u + sizeof(_g4_t_v92)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v93)) > _g4_s24 ? (84u + sizeof(_g4_t_v93)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v94)) > _g4_s25 ? (88u + sizeof(_g4_t_v94)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v95)) > _g4_s26 ? (92u + sizeof(_g4_t_v95)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v96)) > _g4_s27 ? (100u + sizeof(_g4_t_v96)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v97)) > _g4_s28 ? (104u + sizeof(_g4_t_v97)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v98)) > _g4_s29 ? (108u + sizeof(_g4_t_v98)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v99)) > _g4_s30 ? (116u + sizeof(_g4_t_v99)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v100)) > _g4_s31 ? (120u + sizeof(_g4_t_v100)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v101)) > _g4_s32 ? (124u + sizeof(_g4_t_v101)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v102)) > _g4_s33 ? (136u + sizeof(_g4_t_v102)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v103)) > _g4_s34 ? (148u + sizeof(_g4_t_v103)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v104)) > _g4_s35 ? (156u + sizeof(_g4_t_v104)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v105)) > _g4_s36 ? (172u + sizeof(_g4_t_v105)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v106)) > _g4_s37 ? (176u + sizeof(_g4_t_v106)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_j)) > _g4_s38 ? (180u + sizeof(_g4_t_j)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v108)) > _g4_s39 ? (188u + sizeof(_g4_t_v108)) : _g4_s39,
    _g4_s41 = (200u + sizeof(_g4_t_v109)) > _g4_s40 ? (200u + sizeof(_g4_t_v109)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v110)) > _g4_s41 ? (204u + sizeof(_g4_t_v110)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v111)) > _g4_s42 ? (208u + sizeof(_g4_t_v111)) : _g4_s42,
    _g4_s44 = (216u + sizeof(_g4_t_v112)) > _g4_s43 ? (216u + sizeof(_g4_t_v112)) : _g4_s43,
    _g4_s45 = (220u + sizeof(_g4_t_v113)) > _g4_s44 ? (220u + sizeof(_g4_t_v113)) : _g4_s44,
    _g4_s46 = (224u + sizeof(_g4_t_v114)) > _g4_s45 ? (224u + sizeof(_g4_t_v114)) : _g4_s45,
    _g4_s47 = (232u + sizeof(_g4_t_v115)) > _g4_s46 ? (232u + sizeof(_g4_t_v115)) : _g4_s46,
    _g4_s48 = (236u + sizeof(_g4_t_v116)) > _g4_s47 ? (236u + sizeof(_g4_t_v116)) : _g4_s47,
    _g4_s49 = (240u + sizeof(_g4_t_v117)) > _g4_s48 ? (240u + sizeof(_g4_t_v117)) : _g4_s48,
    _g4_s50 = (252u + sizeof(_g4_t_v118)) > _g4_s49 ? (252u + sizeof(_g4_t_v118)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 0u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 16u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 24u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 28u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 32u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 36u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 48u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 52u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 52u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 56u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 56u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 60u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 60u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 60u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 60u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 60u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 64u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 68u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 72u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 76u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 84u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 88u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 92u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 100u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 104u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 108u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 116u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 120u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 124u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 136u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 148u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 156u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 172u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 176u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 180u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 188u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 200u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 204u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 208u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 216u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 220u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 224u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 232u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 236u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 240u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 252u);

  v118 = &self;
  v76 = self;
  v5 = self;
  v6 = a4;
  v74 = (hkGeometry::Self *)(a2);
  v7 = a3;
  v81 = (int *)a5;
  *(uint32_t *)a4 = *(uint32_t *)a3;
  *((uint32_t *)v6 + 1) = *((uint32_t *)v7 + 1);
  *((uint32_t *)v6 + 2) = *((uint32_t *)v7 + 2);
  *((uint32_t *)v6 + 3) = *((uint32_t *)v7 + 3);
  v8 = *((uint32_t *)v5 + 64);
  v9 = *(uint8_t *)(v8 + 45);
  switch ( v9 )
  {
    case 2:
      *((uint32_t *)v6 + 16) = *(uint32_t *)(v8 + 76);
      break;
    case 3:
      *((uint32_t *)v6 + 16) = *(uint32_t *)(v8 + 64);
      break;
    case 4:
      *((uint32_t *)v6 + 16) = *(uint32_t *)(v8 + 52);
      break;
    default:
      *((uint32_t *)v6 + 16) = -1;
      break;
  }
  hkpCompressedMeshShapeBuilder::quantizeVertices(
    *(hkpCompressedMeshShapeBuilder::Self **)v76,
    (float *)v7,
    (const hkVector4f::Self *)((hkGeometry::Self *)((char *)v74 + 8)),
    (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)((hkpCompressedMeshShape::Chunk::Self *)((char *)v6 + 16)));
  hkgpIndexedMesh::Construct((hkgpIndexedMesh::Self *)v103);
  hkgpIndexedMesh::appendFromGeometry((hkgpIndexedMesh::Self *)v103, v74);
  v90 = 0;
  v91 = 0;
  v92 = 0x80000000;
  v93 = 0;
  v94 = 0;
  v95 = 0x80000000;
  v96 = 0;
  v97 = 0;
  v98 = 0x80000000;
  v102[0] = 4;
  v102[1] = 0xFFFF;
  v102[2] = 0;
  hkgpIndexedMesh::generateStrips((int)(uintptr_t)(v103), &v90, (hkMemoryAllocator::Self *)&v93, (hkMemoryAllocator::Self *)&v96, v102);
  if ( v81 != nullptr )
  {
    v10 = v97;
    v99 = 0;
    v100 = 0;
    v101 = 0x80000000;
    if ( v97 > 0 )
    {
      v85 = v97;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v89, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v99, v97, 20);
      v10 = v85;
      v39 = (uint32_t *)(v99 + 20 * v100);
      if ( v85 - v100 > 0 )
      {
        v40 = &v39[5 * (v85 - v100)];
        do
        {
          *v39 = -1;
          v39[1] = -1;
          v39[2] = -1;
          v39[3] = -1;
          v39[4] = -1;
          v39 += 5;
        }
        while ( v39 != v40 );
      }
    }
    v11 = 0;
    v12 = 0;
    v100 = v10;
    if ( v97 <= 0 )
    {
      v83 = v10;
      v16 = v10;
    }
    else
    {
      do
      {
        v13 = v99;
        v14 = *(uint32_t *)(v96 + 4 * v12++);
        v15 = (uint32_t *)(*v81 + 20 * v14);
        *(uint32_t *)(v99 + v11) = *v15;
        *(uint32_t *)(v13 + v11 + 4) = v15[1];
        *(uint32_t *)(v13 + v11 + 8) = v15[2];
        *(uint32_t *)(v13 + v11 + 12) = v15[3];
        *(uint32_t *)(v13 + v11 + 16) = v15[4];
        v11 += 20;
      }
      while ( v97 > v12 );
      v83 = v100;
      v16 = v100;
    }
    v17 = (hkpCompressedMeshShape::Chunk::Self *)v81[1];
    if ( v16 <= (int)(uintptr_t)(v17) )
      v17 = (hkpCompressedMeshShape::Chunk::Self *)v16;
    v77 = v17;
    v18 = v81[2] & 0x3FFFFFFF;
    if ( v18 < v16 )
    {
      v19 = 2 * v18;
      if ( v16 >= v19 )
        v19 = v16;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v89, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v81, v19, 20);
    }
    v20 = v99;
    v21 = *v81;
    if ( (int)(uintptr_t)(v77) > 0 )
    {
      v22 = 0;
      do
      {
        *(uint32_t *)(v21 + v22) = *(uint32_t *)(v20 + v22);
        *(uint32_t *)(v21 + v22 + 4) = *(uint32_t *)(v20 + v22 + 4);
        *(uint32_t *)(v21 + v22 + 8) = *(uint32_t *)(v20 + v22 + 8);
        *(uint32_t *)(v21 + v22 + 12) = *(uint32_t *)(v20 + v22 + 12);
        *(uint32_t *)(v21 + v22 + 16) = *(uint32_t *)(v20 + v22 + 16);
        v22 += 20;
      }
      while ( v22 != 20 * (uint32_t)(uintptr_t)(v77) );
      v20 = v99;
      v21 = *v81;
    }
    v23 = v77;
    v24 = 20 * (uint32_t)(uintptr_t)(v77) + v21;
    v78 = (hkpCompressedMeshShape::Chunk::Self *)(20 * (uint32_t)(uintptr_t)(v77) + v20);
    if ( v83 - (int)(uintptr_t)(v23) > 0 )
    {
      v25 = 20 * (v83 - (uint32_t)(uintptr_t)(v23));
      v26 = 0;
      do
      {
        *(uint32_t *)(v24 + v26) = *(uint32_t *)((char *)v78 + v26);
        *(uint32_t *)(v24 + v26 + 4) = *(uint32_t *)((char *)v78 + v26 + 4);
        *(uint32_t *)(v24 + v26 + 8) = *(uint32_t *)((char *)v78 + v26 + 8);
        *(uint32_t *)(v24 + v26 + 12) = *(uint32_t *)((char *)v78 + v26 + 12);
        *(uint32_t *)(v24 + v26 + 16) = *(uint32_t *)((char *)v78 + v26 + 16);
        v26 += 20;
      }
      while ( v26 != v25 );
    }
    v100 = 0;
    v81[1] = v83;
    if ( v101 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v99,
        20 * v101);
  }
  v27 = v91;
  v28 = *((uint32_t *)v6 + 12) & 0x3FFFFFFF;
  v29 = v91;
  if ( v91 > v28 )
  {
    v30 = 2 * v28;
    if ( v30 < v91 )
      v30 = v91;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v89,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v6 + 10,
      v30,
      2);
    v29 = v91;
  }
  *((uint32_t *)v6 + 11) = v27;
  v70 = (hkMemoryAllocator::Self *)((hkpCompressedMeshShape::Chunk::Self *)((char *)v6 + 28));
  if ( v29 <= 0 )
  {
    v84 = 0;
    v73 = 0;
  }
  else
  {
    v72 = 0;
    v84 = 0;
    v73 = 0;
    do
    {
      v31 = *(uint32_t *)(v90 + 12 * v72 + 4);
      v79 = v31;
      *(uint16_t *)(*((uint32_t *)v6 + 10) + 2 * v72) = v31;
      if ( v31 > 0 )
      {
        v32 = v31;
        v33 = 0;
        v75 = v32 - 2;
        do
        {
          v37 = *((uint32_t *)v6 + 8);
          v38 = *(uint32_t *)(*(uint32_t *)(v90 + 12 * v72) + 4 * v33);
          if ( v37 == (*((uint32_t *)v6 + 9) & 0x3FFFFFFF) )
          {
            v71 = *(uint32_t *)(*(uint32_t *)(v90 + 12 * v72) + 4 * v33);
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v70, 2, v69);
            v37 = *((uint32_t *)v6 + 8);
            LOWORD(v38) = v71;
          }
          *(uint16_t *)(*((uint32_t *)v6 + 7) + 2 * v37) = v38;
          ++*((uint32_t *)v6 + 8);
          if ( v33 >= v75 )
          {
            v36 = -1;
          }
          else
          {
            if ( v81 != nullptr )
            {
              v34 = 20 * v84;
              *(uint32_t *)(*v81 + v34 + 4) = v33 + v73;
              *(uint32_t *)(*v81 + v34 + 12) = v33 & 1;
            }
            v35 = v84++;
            v36 = *(uint32_t *)(*((uint32_t *)v74 + 5) + 16 * *(uint32_t *)(v96 + 4 * v35) + 12);
          }
          hkpCompressedMeshShapeBuilder::addMaterial(v76, v6, v36);
          ++v33;
        }
        while ( v33 != v79 );
      }
      ++v72;
      v73 += v79;
    }
    while ( v91 > v72 );
  }
  if ( v94 > 0 )
  {
    v41 = 0;
    if ( v81 != nullptr )
    {
      do
      {
        v45 = *((uint32_t *)v6 + 8);
        v46 = *(uint32_t *)(v93 + 4 * v41);
        if ( v45 == (*((uint32_t *)v6 + 9) & 0x3FFFFFFF) )
        {
          v80 = *(uint32_t *)(v93 + 4 * v41);
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v70, 2, v69);
          v45 = *((uint32_t *)v6 + 8);
          LOWORD(v46) = v80;
        }
        *(uint16_t *)(*((uint32_t *)v6 + 7) + 2 * v45) = v46;
        ++*((uint32_t *)v6 + 8);
        v42 = -1;
        if ( v41 == 3 * (v41 / 3) )
        {
          v43 = v84;
          v44 = v84++;
          *(uint32_t *)(*v81 + 4 * (v43 + 4 * v44) + 4) = v41 + v73;
          v42 = *(uint32_t *)(*((uint32_t *)v74 + 5) + 16 * *(uint32_t *)(v96 + 4 * v43) + 12);
        }
        hkpCompressedMeshShapeBuilder::addMaterial(v76, v6, v42);
        ++v41;
      }
      while ( v94 > v41 );
    }
    else
    {
      do
      {
        v47 = *((uint32_t *)v6 + 8);
        v48 = *(uint32_t *)(v93 + 4 * v41);
        if ( v47 == (*((uint32_t *)v6 + 9) & 0x3FFFFFFF) )
        {
          v82 = *(uint32_t *)(v93 + 4 * v41);
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v70, 2, v69);
          v47 = *((uint32_t *)v6 + 8);
          LOWORD(v48) = v82;
        }
        *(uint16_t *)(*((uint32_t *)v6 + 7) + 2 * v47) = v48;
        ++*((uint32_t *)v6 + 8);
        v49 = -1;
        if ( v41 == 3 * (v41 / 3) )
        {
          v50 = v84++;
          v49 = *(uint32_t *)(*((uint32_t *)v74 + 5) + 16 * *(uint32_t *)(v96 + 4 * v50) + 12);
        }
        hkpCompressedMeshShapeBuilder::addMaterial(v76, v6, v49);
        ++v41;
      }
      while ( v94 > v41 );
    }
  }
  if ( *((uint32_t *)v6 + 8) < (*((uint32_t *)v6 + 9) & 0x3FFFFFFF) )
    hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)v70, 2, 0, *((uint32_t *)v6 + 8));
  v97 = 0;
  if ( v98 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v96,
      4 * v98);
  v96 = 0;
  v98 = 0x80000000;
  v94 = 0;
  if ( v95 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v93,
      4 * v95);
  v93 = 0;
  v95 = 0x80000000;
  v51 = v90 + 12 * v91;
  v52 = v91 - 1;
  if ( v91 - 1 >= 0 )
  {
    v53 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    do
    {
      v54 = *(uint32_t *)(v51 - 4);
      *(uint32_t *)(v51 - 8) = 0;
      if ( v54 >= 0 )
      {
        v86 = v53;
        G4_VCALL<void>(v53, 20, *(uint32_t *)(v51 - 12), 4 * v54);
        v53 = v86;
      }
      --v52;
      *(uint32_t *)(v51 - 12) = 0;
      *(uint32_t *)(v51 - 4) = 0x80000000;
      v51 -= 12;
    }
    while ( v52 != -1 );
  }
  v91 = 0;
  if ( v92 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v90,
      12 * v92);
  v103[0] = ((uint32_t)(uintptr_t)&off_2098C48);
  v90 = 0;
  v92 = 0x80000000;
  v55 = v115 + 12 * v116;
  v56 = v116 - 1;
  if ( v116 - 1 >= 0 )
  {
    v57 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    do
    {
      v58 = *(uint32_t *)(v55 - 4);
      *(uint32_t *)(v55 - 8) = 0;
      if ( v58 >= 0 )
      {
        v87 = v57;
        G4_VCALL<void>(v57, 20, *(uint32_t *)(v55 - 12), 4 * v58);
        v57 = v87;
      }
      --v56;
      *(uint32_t *)(v55 - 12) = 0;
      *(uint32_t *)(v55 - 4) = 0x80000000;
      v55 -= 12;
    }
    while ( v56 != -1 );
  }
  v116 = 0;
  if ( v117 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v115,
      12 * v117);
  v115 = 0;
  v117 = 0x80000000;
  v113 = 0;
  if ( v114 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v112,
      4 * v114);
  v112 = 0;
  v114 = 0x80000000;
  v59 = v109 + 12 * v110;
  v60 = v110 - 1;
  if ( v110 - 1 >= 0 )
  {
    v61 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    do
    {
      v62 = *(uint32_t *)(v59 - 4);
      *(uint32_t *)(v59 - 8) = 0;
      if ( v62 >= 0 )
      {
        v88 = v61;
        G4_VCALL<void>(v61, 20, *(uint32_t *)(v59 - 12), 8 * v62);
        v61 = v88;
      }
      --v60;
      *(uint32_t *)(v59 - 12) = 0;
      *(uint32_t *)(v59 - 4) = 0x80000000;
      v59 -= 12;
    }
    while ( v60 != -1 );
  }
  v110 = 0;
  if ( v111 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v109,
      12 * v111);
  v109 = 0;
  v111 = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v108,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v103[0] = ((uint32_t)(uintptr_t)&off_2098B48);
  for ( i = v105; v105 != 0; i = v105 )
  {
    v65 = *(uint32_t *)(i + 2564);
    if ( v65 != 0 )
    {
      *(uint32_t *)(v65 + 2568) = *(uint32_t *)(i + 2568);
      v64 = *(uint32_t *)(i + 2568);
    }
    else
    {
      v64 = *(uint32_t *)(i + 2568);
      v105 = v64;
    }
    if ( v64 != 0 )
      *(uint32_t *)(v64 + 2564) = *(uint32_t *)(i + 2564);
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      i,
      2576);
  }
  result = v104;
  v106 = 0;
  for ( j = 0; v104 != 0; result = v104 )
  {
    v68 = *(uint32_t *)(result + 1540);
    if ( v68 != 0 )
    {
      *(uint32_t *)(v68 + 1544) = *(uint32_t *)(result + 1544);
      v67 = *(uint32_t *)(result + 1544);
    }
    else
    {
      v67 = *(uint32_t *)(result + 1544);
      v104 = v67;
    }
    if ( v67 != 0 )
      *(uint32_t *)(v67 + 1540) = *(uint32_t *)(result + 1540);
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      result,
      1552);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::splitCriterion  (binary VA: 0x1add5f0)
// Original: hkpCompressedMeshShapeBuilder::splitCriterion
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::splitCriterion(hkpCompressedMeshShapeBuilder::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, float a5, int a6)
{
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm4_4

  v6 = *((float *)a2 + a6);
  v7 = fminf(*((float *)a4 + a6), fminf(*((float *)a3 + a6), v6));
  v8 = fmaxf(*((float *)a4 + a6), fmaxf(*((float *)a3 + a6), v6));
  if ( a5 <= v7 || v8 <= a5 )
    return a5 > (float)((float)(v8 + v7) * 0.5);
  v9 = v8 - v7;
  if ( (float)(v8 - v7) <= (float)((float)(65535.0 * *(float *)self) * *((float *)self + 1)) )
  {
    if ( v9 > *((float *)self + 32) )
      *((float *)self + 32) = v9;
    return a5 > (float)((float)(v8 + v7) * 0.5);
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::addLeftOverTriangle  (binary VA: 0x1adda40)
// Original: hkpCompressedMeshShapeBuilder::addLeftOverTriangle
// ----------------------------------------------------------------------------
uint32_t * hkpCompressedMeshShapeBuilder::addLeftOverTriangle(uint32_t *a1, hkVector4f::Self *a2, hkVector4f::Self *a3, hkVector4f::Self *a4, uint32_t *a5, uint32_t *a6)
{
  int v6;
  int v7;
  int *v8;
  uint32_t *result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v12 = addVertex((hkGeometry::Self *)(a1 + 6), a2);
  v13 = addVertex((hkGeometry::Self *)(a1 + 6), a3);
  v6 = addVertex((hkGeometry::Self *)(a1 + 6), a4);
  v7 = a1[12];
  if ( v7 == (a1[13] & 0x3FFFFFFF) )
  {
    v14 = v6;
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(a1 + 11),
      16,
      v11);
    v7 = a1[12];
    v6 = v14;
  }
  v8 = (int *)(a1[11] + 16 * v7);
  *v8 = v12;
  v8[2] = v6;
  result = a5;
  v8[1] = v13;
  v8[3] = (int)(uintptr_t)(a5);
  ++a1[12];
  if ( a6 != nullptr )
  {
    v10 = a1[39];
    if ( v10 == (a1[40] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a1 + 38),
        20,
        v11);
      v10 = a1[39];
    }
    result = (uint32_t *)(a1[38] + 20 * v10);
    *result = *a6;
    result[1] = a6[1];
    result[2] = a6[2];
    result[3] = a6[3];
    result[4] = a6[4];
    ++a1[39];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::splitGeometry  (binary VA: 0x1addb80)
// Original: hkpCompressedMeshShapeBuilder::splitGeometry
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::splitGeometry(hkpCompressedMeshShapeBuilder::Self *self, const hkGeometry::Self *a2, hkGeometry::Self *a3, hkGeometry::Self *a4, int a5, float a6, hkpCompressedMeshShapeBuilder::MappingTree::Self *a7)
{
  const hkGeometry::Self *v7;
  int v8;
  int v9;
  int i;
  uint32_t *address;
  hkMemoryAllocator::Self *v12;
  hkMemoryAllocator::Self *v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  const hkVector4f::Self *v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  hkMemoryAllocator::Self *v23;
  int v24;
  uint32_t *v25;
  int result;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef hkGeometry::Self *_g4_t_v30;
  typedef hkGeometry::Self *_g4_t_v31;
  typedef hkMemoryAllocator::Self *_g4_t_v32;
  typedef hkMemoryAllocator::Self *_g4_t_v33;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v34;
  typedef float _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef hkpCompressedMeshShapeBuilder::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef hkVector4f::Self *_g4_t_v42;
  typedef hkVector4f::Self *_g4_t_v43;
  typedef const hkGeometry::Self *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef char _g4_t_v46[4];
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef hkpCompressedMeshShapeBuilder::Self **_g4_t_v53;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v31)) > _g4_s3 ? (36u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v32)) > _g4_s4 ? (40u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v33)) > _g4_s5 ? (44u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v34)) > _g4_s6 ? (48u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v35)) > _g4_s7 ? (52u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v36)) > _g4_s8 ? (56u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v37)) > _g4_s9 ? (60u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v38)) > _g4_s10 ? (64u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v39)) > _g4_s11 ? (68u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v40)) > _g4_s12 ? (72u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v41)) > _g4_s13 ? (76u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v42)) > _g4_s14 ? (80u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v43)) > _g4_s15 ? (84u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v44)) > _g4_s16 ? (88u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v45)) > _g4_s17 ? (92u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v46)) > _g4_s18 ? (96u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v47)) > _g4_s19 ? (100u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v48)) > _g4_s20 ? (104u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v49)) > _g4_s21 ? (108u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v50)) > _g4_s22 ? (116u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v51)) > _g4_s23 ? (120u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v52)) > _g4_s24 ? (124u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v53)) > _g4_s25 ? (140u + sizeof(_g4_t_v53)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 116u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 120u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 124u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);

  v53 = &self;
  v7 = a2;
  v47 = 0;
  v39 = self;
  v30 = a3;
  v31 = a4;
  v8 = *((uint32_t *)a2 + 3);
  v36 = a5;
  v34 = a7;
  v35 = a6;
  v48 = 0;
  v49 = 0x80000000;
  v50 = 0;
  v51 = 0;
  v52 = 0x80000000;
  if ( v8 <= 0 )
  {
    v48 = v8;
    v51 = v8;
    if ( a7 != nullptr )
    {
LABEL_9:
      address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v12 = (hkMemoryAllocator::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                                   *(uint32_t *)(*address + 44),
                                   20);
      *(uint32_t *)v12 = 0;
      *((uint32_t *)v12 + 1) = 0;
      *((uint32_t *)v12 + 2) = 0x80000000;
      *((uint32_t *)v12 + 3) = 0;
      *((uint32_t *)v12 + 4) = 0;
      v32 = v12;
      v13 = (hkMemoryAllocator::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                                   *(uint32_t *)(*address + 44),
                                   20);
      *(uint32_t *)v13 = 0;
      *((uint32_t *)v13 + 1) = 0;
      *((uint32_t *)v13 + 2) = 0x80000000;
      *((uint32_t *)v13 + 3) = 0;
      *((uint32_t *)v13 + 4) = 0;
      v33 = v13;
      *((uint32_t *)v34 + 4) = (uint32_t)(uintptr_t)(v13);
      *((uint32_t *)v34 + 3) = (uint32_t)(uintptr_t)(v32);
      goto LABEL_10;
    }
  }
  else
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)v46, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v47, v8, 4);
    v48 = v8;
    if ( v8 > (v52 & 0x3FFFFFFF) )
    {
      v9 = 2 * (v52 & 0x3FFFFFFF);
      if ( v8 >= v9 )
        v9 = v8;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v46, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v50, v9, 4);
    }
    v51 = v8;
    for ( i = 0; i < v8; ++i )
    {
      *(uint32_t *)(v47 + 4 * i) = -1;
      *(uint32_t *)(v50 + 4 * i) = -1;
    }
    if ( v34 != nullptr )
      goto LABEL_9;
  }
  v33 = nullptr;
  v32 = nullptr;
LABEL_10:
  v40 = 0;
  v45 = 0;
  if ( *((int *)v7 + 6) > 0 )
  {
    v44 = v7;
    v14 = 0;
    do
    {
      v15 = (int *)(*((uint32_t *)v7 + 5) + 16 * v14);
      v41 = (uint32_t *)v15[3];
      v16 = v15[2];
      v37 = v15[1];
      v38 = *v15;
      v17 = *((uint32_t *)v44 + 2);
      v18 = (const hkVector4f::Self *)(v17 + 16 * v38);
      v42 = (hkVector4f::Self *)(v17 + 16 * v16);
      v43 = (hkVector4f::Self *)(v17 + 16 * v37);
      v19 = hkpCompressedMeshShapeBuilder::splitCriterion(v39, v18, v43, v42, v35, v36);
      switch ( v19 )
      {
        case 0:
          addTriangle(v38, v37, v16, (int)(uintptr_t)(v41), v18, v43, v42, v31, (hkArray<int, hkContainerHeapAllocator::Self> *)&v50);
          if ( v33 == nullptr )
            goto LABEL_14;
          v21 = (uint32_t *)(*(uint32_t *)v34 + v40);
          v22 = *((uint32_t *)v33 + 1);
          if ( v22 == (*((uint32_t *)v33 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v33, 20, v28);
            v22 = *((uint32_t *)v33 + 1);
          }
          v23 = v33;
          v24 = 20 * v22;
          break;
        case 1:
          addTriangle(v38, v37, v16, (int)(uintptr_t)(v41), v18, v43, v42, v30, (hkArray<int, hkContainerHeapAllocator::Self> *)&v47);
          if ( v32 == nullptr )
            goto LABEL_14;
          v21 = (uint32_t *)(*(uint32_t *)v34 + v40);
          v27 = *((uint32_t *)v32 + 1);
          if ( v27 == (*((uint32_t *)v32 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v32, 20, v29);
            v27 = *((uint32_t *)v32 + 1);
          }
          v23 = v32;
          v24 = 20 * v27;
          break;
        case -1:
          if ( v34 != nullptr )
            v20 = (uint32_t *)(*(uint32_t *)v34 + v40);
          else
            v20 = nullptr;
          hkpCompressedMeshShapeBuilder::addLeftOverTriangle(v39, v18, v43, v42, v41, v20);
          goto LABEL_14;
        default:
          goto LABEL_14;
      }
      v25 = (uint32_t *)(*(uint32_t *)v23 + v24);
      *v25 = *v21;
      v25[1] = v21[1];
      v25[2] = v21[2];
      v25[3] = v21[3];
      v25[4] = v21[4];
      ++*((uint32_t *)v23 + 1);
LABEL_14:
      v7 = v44;
      ++v45;
      v40 += 20;
      v14 = v45;
    }
    while ( *((uint32_t *)v44 + 6) > v45 );
  }
  if ( v34 != nullptr )
    *((uint32_t *)v34 + 1) = 0;
  v51 = 0;
  if ( v52 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v50,
      4 * v52);
  result = v49;
  v50 = 0;
  v52 = 0x80000000;
  v48 = 0;
  if ( v49 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v47,
             4 * v49);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::splitGeometry  (binary VA: 0x1ade030)
// Original: hkpCompressedMeshShapeBuilder::splitGeometry
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::splitGeometry(hkpCompressedMeshShapeBuilder::Self *self, hkAabbUtil::Self **a2, hkGeometry::Self *a3, hkGeometry::Self *a4)
{
  int v4;
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm4_4
  int v8;
  typedef float _g4_t_v10[4];
  typedef float _g4_t_v11[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  hkAabbUtil::calcAabb(a2[2], a2[3], v11);
  v4 = 1;
  v5 = fabs(v11[5] - v11[1]);
  v6 = fabs(v11[4] - v11[0]);
  v7 = fabs(v11[6] - v11[2]);
  if ( v5 < v6 )
  {
    v5 = v6;
    LOBYTE(v4) = 0;
  }
  v8 = 2;
  if ( v7 < v5 )
    v8 = v4;
  v10[3] = (float)(v11[3] + v11[7]) * 0.5;
  v10[0] = (float)(v11[0] + v11[4]) * 0.5;
  v10[1] = (float)(v11[1] + v11[5]) * 0.5;
  v10[2] = (float)(v11[6] + v11[2]) * 0.5;
  return hkpCompressedMeshShapeBuilder::splitGeometry(self, (const hkGeometry::Self *)a2, a3, a4, v8, v10[v8], nullptr);
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::addChunk  (binary VA: 0x1ade170)
// Original: hkpCompressedMeshShapeBuilder::addChunk
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::addChunk(hkpCompressedMeshShapeBuilder::Self *a1, int a2, hkMemoryAllocator::Self *a3, int *a4)
{
  int *v4;
  float v5; // xmm7_4
  int v6;
  int v7; // xmm6_4
  __m128i v8;
  float v9; // xmm4_4
  __m128 v10;
  float v11; // xmm2_4
  unsigned int v12;
  __m128 v13;
  __m128 v14;
  bool v15;
  __m128 v16;
  uint32_t v17; // xmm5_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  hkGeometry::Self *v23;
  uint32_t *v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  int v32;
  uint32_t *v33;
  uint32_t *v34;
  hkpCompressedMeshShapeBuilder::Self *v35;
  uint32_t *v36;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v37;
  int v38;
  uint32_t *v39;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v40;
  int v41;
  int v42;
  hkMemoryAllocator::Self *v43;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v44;
  int v45;
  hkMemoryAllocator::Self *v46;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  uint32_t *v52;
  hkpCompressedMeshShapeBuilder::Self *v53;
  uint32_t *v54;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v55;
  int v56;
  uint32_t *v57;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v58;
  int v59;
  int v60;
  hkMemoryAllocator::Self *v61;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v62;
  int v63;
  hkMemoryAllocator::Self *v64;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v65;
  int v66;
  int v67;
  int v68;
  int v69;
  float v70;
  int v71;
  hkGeometry::Self *v72;
  int v73;
  hkGeometry::Self *v74;
  uint32_t *v75;
  int v76;
  int v77;
  uint32_t *v78;
  int v79;
  uint32_t *v80;
  int v81;
  uint32_t *v82;
  int v83;
  uint32_t *v84;
  uint32_t *v85;
  hkpCompressedMeshShapeBuilder::Self *v86;
  uint32_t *v87;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v88;
  int v89;
  uint32_t *v90;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v91;
  int v92;
  int v93;
  hkMemoryAllocator::Self *v94;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v95;
  int v96;
  hkMemoryAllocator::Self *v97;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *v98;
  int v99;
  int v100;
  int v101;
  int v102;
  uint32_t *v103;
  int v104;
  float v105;
  int v106;
  hkGeometry::Self *v107;
  int v108;
  int result;
  int v110;
  int v111;
  unsigned int v112;
  int (**v113)(int);
  int (**v114)(int);
  int v115;
  int v116;
  unsigned int v117;
  int v118;
  int v119;
  int v120;
  signed int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int (**v127)(int);
  int v128;
  signed int v129;
  int v130;
  unsigned int v131;
  int v132;
  int v133;
  int v134;
  int (**v135)(int);
  int v136;
  signed int v137;
  int v138;
  unsigned int v139;
  int v140;
  int *v141;
  int v142;
  int v143;
  uint32_t *v144;
  int v145;
  int v146;
  int (**v147)(int);
  int *v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  char v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int *v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef hkGeometry::Self *_g4_t_v181;
  typedef float _g4_t_v182;
  typedef int _g4_t_v183;
  typedef int _g4_t_v184;
  typedef int _g4_t_v185;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v186;
  typedef int _g4_t_v187;
  typedef unsigned int _g4_t_v188;
  typedef unsigned int _g4_t_v189;
  typedef unsigned int _g4_t_v190;
  typedef hkMemoryAllocator::Self *_g4_t_v191;
  typedef uint32_t *_g4_t_v192;
  typedef uint32_t *_g4_t_v193;
  typedef uint32_t *_g4_t_v194;
  typedef hkpCompressedMeshShapeBuilder::Self *_g4_t_address;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v196;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v197;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v198;
  typedef float _g4_t_v199;
  typedef uint32_t *_g4_t_v200;
  typedef uint32_t *_g4_t_v201;
  typedef int _g4_t_v202;
  typedef unsigned int _g4_t_v203;
  typedef unsigned int _g4_t_v204;
  typedef unsigned int _g4_t_v205;
  typedef unsigned int _g4_t_v206;
  typedef unsigned int _g4_t_v207;
  typedef unsigned int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef hkGeometry::Self *_g4_t_v210;
  typedef hkGeometry::Self *_g4_t_v211;
  typedef hkGeometry::Self *_g4_t_v212;
  typedef hkGeometry::Self *_g4_t_v213;
  typedef hkGeometry::Self *_g4_t_v214;
  typedef hkGeometry::Self *_g4_t_v215;
  typedef hkGeometry::Self *_g4_t_v216;
  typedef int _g4_t_v217;
  typedef hkGeometry::Self *_g4_t_v218;
  typedef hkGeometry::Self *_g4_t_v219;
  typedef int *_g4_t_v220;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v221;
  typedef int _g4_t_v222;
  typedef float _g4_t_v223;
  typedef float _g4_t_v224;
  typedef float _g4_t_v225;
  typedef float _g4_t_v226;
  typedef int _g4_t_v227;
  typedef float _g4_t_v228;
  typedef float _g4_t_v229;
  typedef hkGeometry::Self *_g4_t_v230;
  typedef float _g4_t_v231;
  typedef float _g4_t_v232;
  typedef float _g4_t_v233;
  typedef float _g4_t_v234;
  typedef int (**_g4_t_v235)(int);
  typedef int _g4_t_v236;
  typedef int _g4_t_v237;
  typedef int _g4_t_v238;
  typedef int _g4_t_v239;
  typedef int _g4_t_v240;
  typedef int _g4_t_v241;
  typedef int _g4_t_v242;
  typedef g4_int128_t _g4_t_v243;
  typedef int _g4_t_v244;
  typedef int _g4_t_v245;
  typedef int _g4_t_v246;
  typedef int _g4_t_v247;
  typedef int _g4_t_v248;
  typedef int _g4_t_v249;
  typedef unsigned int _g4_t_v250;
  typedef int _g4_t_v251;
  typedef int _g4_t_v252;
  typedef unsigned int _g4_t_v253;
  typedef int _g4_t_v254;
  typedef int _g4_t_v255;
  typedef int _g4_t_v256;
  typedef int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef int _g4_t_v259;
  typedef int _g4_t_v260;
  typedef hkpCompressedMeshShapeBuilder::Self **_g4_t_v261;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v171)) > _g4_s0 ? (12u + sizeof(_g4_t_v171)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v172)) > _g4_s1 ? (12u + sizeof(_g4_t_v172)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v173)) > _g4_s2 ? (16u + sizeof(_g4_t_v173)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v174)) > _g4_s3 ? (20u + sizeof(_g4_t_v174)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v175)) > _g4_s4 ? (24u + sizeof(_g4_t_v175)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v176)) > _g4_s5 ? (28u + sizeof(_g4_t_v176)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v177)) > _g4_s6 ? (32u + sizeof(_g4_t_v177)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v178)) > _g4_s7 ? (36u + sizeof(_g4_t_v178)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v179)) > _g4_s8 ? (36u + sizeof(_g4_t_v179)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v180)) > _g4_s9 ? (40u + sizeof(_g4_t_v180)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v181)) > _g4_s10 ? (44u + sizeof(_g4_t_v181)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v182)) > _g4_s11 ? (48u + sizeof(_g4_t_v182)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v183)) > _g4_s12 ? (48u + sizeof(_g4_t_v183)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v184)) > _g4_s13 ? (48u + sizeof(_g4_t_v184)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v185)) > _g4_s14 ? (48u + sizeof(_g4_t_v185)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v186)) > _g4_s15 ? (52u + sizeof(_g4_t_v186)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v187)) > _g4_s16 ? (52u + sizeof(_g4_t_v187)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v188)) > _g4_s17 ? (52u + sizeof(_g4_t_v188)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v189)) > _g4_s18 ? (52u + sizeof(_g4_t_v189)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v190)) > _g4_s19 ? (52u + sizeof(_g4_t_v190)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v191)) > _g4_s20 ? (56u + sizeof(_g4_t_v191)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v192)) > _g4_s21 ? (56u + sizeof(_g4_t_v192)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v193)) > _g4_s22 ? (56u + sizeof(_g4_t_v193)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v194)) > _g4_s23 ? (56u + sizeof(_g4_t_v194)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_address)) > _g4_s24 ? (60u + sizeof(_g4_t_address)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v196)) > _g4_s25 ? (60u + sizeof(_g4_t_v196)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v197)) > _g4_s26 ? (60u + sizeof(_g4_t_v197)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v198)) > _g4_s27 ? (60u + sizeof(_g4_t_v198)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v199)) > _g4_s28 ? (64u + sizeof(_g4_t_v199)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v200)) > _g4_s29 ? (64u + sizeof(_g4_t_v200)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v201)) > _g4_s30 ? (64u + sizeof(_g4_t_v201)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v202)) > _g4_s31 ? (64u + sizeof(_g4_t_v202)) : _g4_s31,
    _g4_s33 = (64u + sizeof(_g4_t_v203)) > _g4_s32 ? (64u + sizeof(_g4_t_v203)) : _g4_s32,
    _g4_s34 = (64u + sizeof(_g4_t_v204)) > _g4_s33 ? (64u + sizeof(_g4_t_v204)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_v205)) > _g4_s34 ? (64u + sizeof(_g4_t_v205)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v206)) > _g4_s35 ? (64u + sizeof(_g4_t_v206)) : _g4_s35,
    _g4_s37 = (64u + sizeof(_g4_t_v207)) > _g4_s36 ? (64u + sizeof(_g4_t_v207)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v208)) > _g4_s37 ? (64u + sizeof(_g4_t_v208)) : _g4_s37,
    _g4_s39 = (64u + sizeof(_g4_t_v209)) > _g4_s38 ? (64u + sizeof(_g4_t_v209)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v210)) > _g4_s39 ? (68u + sizeof(_g4_t_v210)) : _g4_s39,
    _g4_s41 = (68u + sizeof(_g4_t_v211)) > _g4_s40 ? (68u + sizeof(_g4_t_v211)) : _g4_s40,
    _g4_s42 = (68u + sizeof(_g4_t_v212)) > _g4_s41 ? (68u + sizeof(_g4_t_v212)) : _g4_s41,
    _g4_s43 = (68u + sizeof(_g4_t_v213)) > _g4_s42 ? (68u + sizeof(_g4_t_v213)) : _g4_s42,
    _g4_s44 = (68u + sizeof(_g4_t_v214)) > _g4_s43 ? (68u + sizeof(_g4_t_v214)) : _g4_s43,
    _g4_s45 = (68u + sizeof(_g4_t_v215)) > _g4_s44 ? (68u + sizeof(_g4_t_v215)) : _g4_s44,
    _g4_s46 = (68u + sizeof(_g4_t_v216)) > _g4_s45 ? (68u + sizeof(_g4_t_v216)) : _g4_s45,
    _g4_s47 = (68u + sizeof(_g4_t_v217)) > _g4_s46 ? (68u + sizeof(_g4_t_v217)) : _g4_s46,
    _g4_s48 = (68u + sizeof(_g4_t_v218)) > _g4_s47 ? (68u + sizeof(_g4_t_v218)) : _g4_s47,
    _g4_s49 = (68u + sizeof(_g4_t_v219)) > _g4_s48 ? (68u + sizeof(_g4_t_v219)) : _g4_s48,
    _g4_s50 = (72u + sizeof(_g4_t_v220)) > _g4_s49 ? (72u + sizeof(_g4_t_v220)) : _g4_s49,
    _g4_s51 = (72u + sizeof(_g4_t_v221)) > _g4_s50 ? (72u + sizeof(_g4_t_v221)) : _g4_s50,
    _g4_s52 = (76u + sizeof(_g4_t_v222)) > _g4_s51 ? (76u + sizeof(_g4_t_v222)) : _g4_s51,
    _g4_s53 = (80u + sizeof(_g4_t_v223)) > _g4_s52 ? (80u + sizeof(_g4_t_v223)) : _g4_s52,
    _g4_s54 = (84u + sizeof(_g4_t_v224)) > _g4_s53 ? (84u + sizeof(_g4_t_v224)) : _g4_s53,
    _g4_s55 = (88u + sizeof(_g4_t_v225)) > _g4_s54 ? (88u + sizeof(_g4_t_v225)) : _g4_s54,
    _g4_s56 = (92u + sizeof(_g4_t_v226)) > _g4_s55 ? (92u + sizeof(_g4_t_v226)) : _g4_s55,
    _g4_s57 = (96u + sizeof(_g4_t_v227)) > _g4_s56 ? (96u + sizeof(_g4_t_v227)) : _g4_s56,
    _g4_s58 = (100u + sizeof(_g4_t_v228)) > _g4_s57 ? (100u + sizeof(_g4_t_v228)) : _g4_s57,
    _g4_s59 = (104u + sizeof(_g4_t_v229)) > _g4_s58 ? (104u + sizeof(_g4_t_v229)) : _g4_s58,
    _g4_s60 = (108u + sizeof(_g4_t_v230)) > _g4_s59 ? (108u + sizeof(_g4_t_v230)) : _g4_s59,
    _g4_s61 = (112u + sizeof(_g4_t_v231)) > _g4_s60 ? (112u + sizeof(_g4_t_v231)) : _g4_s60,
    _g4_s62 = (116u + sizeof(_g4_t_v232)) > _g4_s61 ? (116u + sizeof(_g4_t_v232)) : _g4_s61,
    _g4_s63 = (120u + sizeof(_g4_t_v233)) > _g4_s62 ? (120u + sizeof(_g4_t_v233)) : _g4_s62,
    _g4_s64 = (124u + sizeof(_g4_t_v234)) > _g4_s63 ? (124u + sizeof(_g4_t_v234)) : _g4_s63,
    _g4_s65 = (128u + sizeof(_g4_t_v235)) > _g4_s64 ? (128u + sizeof(_g4_t_v235)) : _g4_s64,
    _g4_s66 = (132u + sizeof(_g4_t_v236)) > _g4_s65 ? (132u + sizeof(_g4_t_v236)) : _g4_s65,
    _g4_s67 = (136u + sizeof(_g4_t_v237)) > _g4_s66 ? (136u + sizeof(_g4_t_v237)) : _g4_s66,
    _g4_s68 = (140u + sizeof(_g4_t_v238)) > _g4_s67 ? (140u + sizeof(_g4_t_v238)) : _g4_s67,
    _g4_s69 = (144u + sizeof(_g4_t_v239)) > _g4_s68 ? (144u + sizeof(_g4_t_v239)) : _g4_s68,
    _g4_s70 = (148u + sizeof(_g4_t_v240)) > _g4_s69 ? (148u + sizeof(_g4_t_v240)) : _g4_s69,
    _g4_s71 = (152u + sizeof(_g4_t_v241)) > _g4_s70 ? (152u + sizeof(_g4_t_v241)) : _g4_s70,
    _g4_s72 = (156u + sizeof(_g4_t_v242)) > _g4_s71 ? (156u + sizeof(_g4_t_v242)) : _g4_s71,
    _g4_s73 = (160u + sizeof(_g4_t_v243)) > _g4_s72 ? (160u + sizeof(_g4_t_v243)) : _g4_s72,
    _g4_s74 = (176u + sizeof(_g4_t_v244)) > _g4_s73 ? (176u + sizeof(_g4_t_v244)) : _g4_s73,
    _g4_s75 = (180u + sizeof(_g4_t_v245)) > _g4_s74 ? (180u + sizeof(_g4_t_v245)) : _g4_s74,
    _g4_s76 = (184u + sizeof(_g4_t_v246)) > _g4_s75 ? (184u + sizeof(_g4_t_v246)) : _g4_s75,
    _g4_s77 = (188u + sizeof(_g4_t_v247)) > _g4_s76 ? (188u + sizeof(_g4_t_v247)) : _g4_s76,
    _g4_s78 = (192u + sizeof(_g4_t_v248)) > _g4_s77 ? (192u + sizeof(_g4_t_v248)) : _g4_s77,
    _g4_s79 = (196u + sizeof(_g4_t_v249)) > _g4_s78 ? (196u + sizeof(_g4_t_v249)) : _g4_s78,
    _g4_s80 = (200u + sizeof(_g4_t_v250)) > _g4_s79 ? (200u + sizeof(_g4_t_v250)) : _g4_s79,
    _g4_s81 = (204u + sizeof(_g4_t_v251)) > _g4_s80 ? (204u + sizeof(_g4_t_v251)) : _g4_s80,
    _g4_s82 = (208u + sizeof(_g4_t_v252)) > _g4_s81 ? (208u + sizeof(_g4_t_v252)) : _g4_s81,
    _g4_s83 = (212u + sizeof(_g4_t_v253)) > _g4_s82 ? (212u + sizeof(_g4_t_v253)) : _g4_s82,
    _g4_s84 = (216u + sizeof(_g4_t_v254)) > _g4_s83 ? (216u + sizeof(_g4_t_v254)) : _g4_s83,
    _g4_s85 = (220u + sizeof(_g4_t_v255)) > _g4_s84 ? (220u + sizeof(_g4_t_v255)) : _g4_s84,
    _g4_s86 = (224u + sizeof(_g4_t_v256)) > _g4_s85 ? (224u + sizeof(_g4_t_v256)) : _g4_s85,
    _g4_s87 = (228u + sizeof(_g4_t_v257)) > _g4_s86 ? (228u + sizeof(_g4_t_v257)) : _g4_s86,
    _g4_s88 = (232u + sizeof(_g4_t_v258)) > _g4_s87 ? (232u + sizeof(_g4_t_v258)) : _g4_s87,
    _g4_s89 = (236u + sizeof(_g4_t_v259)) > _g4_s88 ? (236u + sizeof(_g4_t_v259)) : _g4_s88,
    _g4_s90 = (240u + sizeof(_g4_t_v260)) > _g4_s89 ? (240u + sizeof(_g4_t_v260)) : _g4_s89,
    _g4_s91 = (248u + sizeof(_g4_t_v261)) > _g4_s90 ? (248u + sizeof(_g4_t_v261)) : _g4_s90
  };
  alignas(16) uint8_t _g4_sf[_g4_s91];
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 12u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 12u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 16u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 20u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 24u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 28u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 32u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 36u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 36u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 40u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 44u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 48u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 48u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 48u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 48u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 52u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 52u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 52u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 52u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 52u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 56u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 56u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 56u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 56u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 60u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 60u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 60u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 60u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 64u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 64u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 64u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 64u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 64u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 64u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 64u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 64u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 64u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 64u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 64u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 68u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 68u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 68u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 68u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 68u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 68u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 68u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 68u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 68u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 68u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 72u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 72u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 76u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 80u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 84u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 88u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 92u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 96u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 100u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 104u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 108u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 112u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 116u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 120u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 124u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 128u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 132u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 136u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 140u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 144u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 148u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 152u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 156u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 160u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 176u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 180u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 184u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 188u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 192u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 196u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 200u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 204u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 208u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 212u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 216u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 220u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 224u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 228u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 232u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 236u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 240u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 248u);

  v261 = &a1;
  v4 = (int *)a2;
  address = a1;
  v191 = a3;
  v220 = a4;
  hkAabbUtil::calcAabb(*(hkAabbUtil::Self **)(a2 + 8), *(const hkVector4f::Self **)(a2 + 12), (float *)&v227);
  v5 = v231;
  v6 = 1;
  v7 = v227;
g4_m128_raw(v8) = LODWORD(v231);
  *(float *)g4_m128_ptr<int32_t>(v8) = v231 - *(float *)&v227;
  v9 = v232;
g4_m128_raw(v10) = LODWORD(v232);
g4_m128_lane<float>(v10, 0) = v232 - v228;
  v199 = v228;
  v11 = v233;
  v12 = _mm_cvtsi128_si32(v8);
  v186 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v229);
  v182 = v234;
  v181 = v230;
  v13 = _mm_and_ps(v10, g4_m128_u32(0x7FFFFFFFu));
g4_m128_lane<int32_t>(v14, 0) = fabs(v233 - v229);
  if (g4_m128_lane<float>(v13, 0) < fabs(*(float *)&v12) )
  {
g4_m128_raw(v10) = (g4_int128_t)_mm_cvtsi32_si128(v12);
    v6 = 0;
g4_m128_raw(v13) = v12 & 0x7FFFFFFF;
  }
  v15 =g4_m128_lane<float>(v14, 0) <g4_m128_lane<float>(v13, 0);
  v16 = _mm_cmple_ss(v13, v14);
  v17 = COERCE_UNSIGNED_INT(v233 - v229) &g4_m128_lane<int32_t>(v16, 0);
  v18 =g4_m128_lane<float>(_mm_andnot_ps(v16, v10), 0);
  if ( !v15 )
    v6 = 2;
  if ( v4[3] > 255 || COERCE_FLOAT(LODWORD(v18) | v17) > (float)(65534.0 * *(float *)address) )
  {
    v210 = v230;
    v19 = v234;
    v20 = v229;
    v21 = v228;
    goto LABEL_8;
  }
  if ( *(uint8_t *)(*((uint32_t *)address + 64) + 45) == 1 )
  {
    v219 = (hkGeometry::Self *)v6;
    v156 = hasDifferentMaterials((const hkGeometry::Self *)v4);
    v6 = (int)(uintptr_t)(v219);
    if ( v156 != 0 )
    {
      v210 = v230;
      v7 = v227;
      v5 = v231;
      v21 = v228;
      v9 = v232;
      v20 = v229;
      v11 = v233;
      v19 = v234;
LABEL_8:
      v235 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
      LODWORD(v243) = ((uint32_t)(uintptr_t)&off_20586B8);
      v226 = (float)(v19 + *(float *)&v210) * 0.5;
      v223 = (float)(*(float *)&v7 + v5) * 0.5;
      v211 = (hkGeometry::Self *)&v243;
      v224 = (float)(v9 + v21) * 0.5;
      v225 = (float)(v11 + v20) * 0.5;
      v22 = *(&v223 + v6);
      v236 = -65535;
      v237 = 0;
      v238 = 0;
      v239 = 0x80000000;
      v240 = 0;
      v241 = 0;
      v242 = 0x80000000;
      *(uint64_t *)((char *)&v243 + 4) = 4294901761LL;
      HIDWORD(v243) = 0;
      v244 = 0x80000000;
      v245 = 0;
      v246 = 0;
      v247 = 0x80000000;
      hkpCompressedMeshShapeBuilder::splitGeometry(
        address,
        (const hkGeometry::Self *)v4,
        (hkGeometry::Self *)&v235,
        (hkGeometry::Self *)&v243,
        v6,
        v22,
        (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v220);
      if ( v241 != 0 )
      {
        if ( v246 != 0 )
        {
          if ( v220 != nullptr )
          {
            hkpCompressedMeshShapeBuilder::addChunk(address, (int)(uintptr_t)(&v235), v191, (int *)(uintptr_t)(v220[3]));
            hkpCompressedMeshShapeBuilder::addChunk(address, (int)(uintptr_t)(&v243), v191, (int *)(uintptr_t)(v220[4]));
          }
          else
          {
            hkpCompressedMeshShapeBuilder::addChunk(address, (int)(uintptr_t)(&v235), v191, 0);
            hkpCompressedMeshShapeBuilder::addChunk(address, (int)(uintptr_t)(&v243), v191, 0);
          }
          goto LABEL_229;
        }
        hkpCompressedMeshShapeBuilder::appendGeometry(
          address,
          (hkGeometry::Self *)((hkpCompressedMeshShapeBuilder::Self *)((char *)address + 24)),
          (const hkGeometry::Self *)&v235);
        if ( v220 == nullptr )
        {
LABEL_229:
          v246 = 0;
          LODWORD(v243) = ((uint32_t)(uintptr_t)&off_20586B8);
          if ( v247 >= 0 )
            (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v245,
              16 * v247);
          v245 = 0;
          v247 = 0x80000000;
          HIDWORD(v243) = 0;
          if ( v244 >= 0 )
            (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              DWORD2(v243),
              16 * v244);
          DWORD2(v243) = 0;
          v244 = 0x80000000;
          LODWORD(v243) = ((uint32_t)(uintptr_t)&off_2054CB8);
          v241 = 0;
          v235 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
          if ( v242 >= 0 )
            (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v240,
              16 * v242);
          result = v239;
          v240 = 0;
          v242 = 0x80000000;
          v238 = 0;
          if ( v239 >= 0 )
            return (*(int (**)(uint32_t *, int, int, int, int, int, int, int, int, int, int, hkGeometry::Self *, float, hkpCompressedMeshShapeBuilder::MappingTree::Self *, hkMemoryAllocator::Self *, hkpCompressedMeshShapeBuilder::Self *, float, hkGeometry::Self *, int *, int, float, float, float, float, int, float, float, hkGeometry::Self *, float, float, float, float, int (**)(int), int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int, int, int, unsigned int, int, int, unsigned int, int, int, int, int, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     v237,
                     16 * v239,
                     v171,
                     v173,
                     v174,
                     v175,
                     v176,
                     v177,
                     v178,
                     v180,
                     v181,
                     COERCE_FLOAT(LODWORD(v182)),
                     v186,
                     v191,
                     address,
                     COERCE_FLOAT(LODWORD(v199)),
                     v211,
                     v220,
                     v222,
                     COERCE_FLOAT(LODWORD(v223)),
                     COERCE_FLOAT(LODWORD(v224)),
                     COERCE_FLOAT(LODWORD(v225)),
                     COERCE_FLOAT(LODWORD(v226)),
                     v227,
                     COERCE_FLOAT(LODWORD(v228)),
                     COERCE_FLOAT(LODWORD(v229)),
                     v230,
                     COERCE_FLOAT(LODWORD(v231)),
                     COERCE_FLOAT(LODWORD(v232)),
                     COERCE_FLOAT(LODWORD(v233)),
                     COERCE_FLOAT(LODWORD(v234)),
                     v235,
                     v236,
                     v237,
                     v238,
                     v239,
                     v240,
                     v241,
                     v242,
                     LODWORD(v243),
                     DWORD1(v243),
                     DWORD2(v243),
                     HIDWORD(v243),
                     v244,
                     v245,
                     v246,
                     v247,
                     v248,
                     v249,
                     v250,
                     v251,
                     v252,
                     v253,
                     v254,
                     v255,
                     v256,
                     v257,
                     v258,
                     v259,
                     v260);
          return result;
        }
        v148 = (int *)v220[3];
        v149 = v148[1];
        v150 = *v148;
        v151 = *((uint32_t *)address + 39);
        v152 = v151 + v149;
        v153 = *((uint32_t *)address + 40) & 0x3FFFFFFF;
        v218 = (hkGeometry::Self *)(v151 + v149);
        if ( v151 + v149 > v153 )
        {
          v169 = 2 * v153;
          if ( 2 * v153 < v152 )
            v169 = v152;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)&v222,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (int *)address + 38,
            v169,
            20);
          v151 = *((uint32_t *)address + 39);
        }
        v154 = *((uint32_t *)address + 38) + 20 * v151;
        if ( v149 > 0 )
        {
          v155 = 0;
          do
          {
            *(uint32_t *)(v154 + v155) = *(uint32_t *)(v150 + v155);
            *(uint32_t *)(v154 + v155 + 4) = *(uint32_t *)(v150 + v155 + 4);
            *(uint32_t *)(v154 + v155 + 8) = *(uint32_t *)(v150 + v155 + 8);
            *(uint32_t *)(v154 + v155 + 12) = *(uint32_t *)(v150 + v155 + 12);
            *(uint32_t *)(v154 + v155 + 16) = *(uint32_t *)(v150 + v155 + 16);
            v155 += 20;
          }
          while ( v155 != 20 * v149 );
        }
      }
      else
      {
        if ( v246 == 0 )
        {
          if ( v220 != nullptr )
          {
LABEL_11:
            v23 = (hkGeometry::Self *)v220[3];
            v212 = v23;
            if ( v23 != nullptr )
            {
              v24 = *((uint32_t **)v23 + 3);
              v200 = v24;
              if ( v24 != nullptr )
              {
                v25 = v24[3];
                if ( v25 != 0 )
                {
                  v26 = *(uint32_t *)(v25 + 12);
                  if ( v26 != 0 )
                  {
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(*(hkpCompressedMeshShapeBuilder::MappingTree::Self **)(v25 + 12));
                    address = (hkpCompressedMeshShapeBuilder::Self *)_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
                    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
                      *(uint32_t *)(*(uint32_t *)address + 44),
                      v26,
                      20);
                    v27 = (uint32_t *)(address);
                  }
                  else
                  {
                    v27 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
                  }
                  if ( *(uint32_t *)(v25 + 16) != 0 )
                  {
                    address = *(hkpCompressedMeshShapeBuilder::Self **)(v25 + 16);
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(address));
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                      *(uint32_t *)(*v27 + 44),
                      address,
                      20);
                  }
                  v28 = *(uint32_t *)(v25 + 8);
                  *(uint32_t *)(v25 + 4) = 0;
                  if ( v28 >= 0 )
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *(uint32_t *)v25,
                      20 * v28);
                  *(uint32_t *)v25 = 0;
                  *(uint32_t *)(v25 + 8) = 0x80000000;
                  (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v27 + 44) + 12))(
                    *(uint32_t *)(*v27 + 44),
                    v25,
                    20);
                }
                else
                {
                  v27 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
                }
                v29 = (uint32_t *)v200[4];
                if ( v29 != nullptr )
                {
                  if ( v29[3] != 0 )
                  {
                    address = (hkpCompressedMeshShapeBuilder::Self *)v29[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(address));
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                      *(uint32_t *)(*v27 + 44),
                      address,
                      20);
                  }
                  if ( v29[4] != 0 )
                  {
                    address = (hkpCompressedMeshShapeBuilder::Self *)v29[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(address));
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                      *(uint32_t *)(*v27 + 44),
                      address,
                      20);
                  }
                  v30 = v29[2];
                  v29[1] = 0;
                  if ( v30 >= 0 )
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v29,
                      20 * v30);
                  *v29 = 0;
                  v29[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                    *(uint32_t *)(*v27 + 44),
                    v29,
                    20);
                }
                v31 = v200;
                v32 = v200[2];
                v200[1] = 0;
                if ( v32 >= 0 )
                {
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v200,
                    20 * v32);
                  v31 = v200;
                }
                *v31 = 0;
                v31[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                  *(uint32_t *)(*v27 + 44),
                  v31,
                  20);
              }
              else
              {
                v27 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
              }
              v33 = *((uint32_t **)v212 + 4);
              v199 = *(float *)&v33;
              if ( *(float *)&v33 != 0.0 )
              {
                v34 = (uint32_t *)v33[3];
                if ( v34 != nullptr )
                {
                  if ( v34[3] != 0 )
                  {
                    v196 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v34[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v196);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                      *(uint32_t *)(*v27 + 44),
                      v196,
                      20);
                  }
                  v35 = (hkpCompressedMeshShapeBuilder::Self *)v34[4];
                  address = v35;
                  if ( v35 != nullptr )
                  {
                    v36 = *((uint32_t **)v35 + 3);
                    v192 = v36;
                    if ( v36 != nullptr )
                    {
                      v37 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v36[3];
                      if ( v37 != nullptr )
                      {
                        if ( *((uint32_t *)v37 + 3) != 0 )
                        {
                          v182 = *((float *)v36 + 3);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v37 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v37 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v37 + 4) != 0 )
                        {
                          v182 = *(float *)&v37;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v37 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v37 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v38 = *((uint32_t *)v37 + 2);
                        *((uint32_t *)v37 + 1) = 0;
                        if ( v38 >= 0 )
                        {
                          v186 = v37;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v37,
                            20 * v38);
                          v37 = v186;
                        }
                        *(uint32_t *)v37 = 0;
                        *((uint32_t *)v37 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                          *(uint32_t *)(*v27 + 44),
                          v37,
                          20);
                      }
                      v39 = v192;
                      v40 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v192[4];
                      if ( v40 != nullptr )
                      {
                        if ( *((uint32_t *)v40 + 3) != 0 )
                        {
                          v182 = *((float *)v192 + 4);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v40 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v40 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v40 + 4) != 0 )
                        {
                          v182 = *(float *)&v40;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v40 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v40 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v41 = *((uint32_t *)v40 + 2);
                        *((uint32_t *)v40 + 1) = 0;
                        if ( v41 >= 0 )
                        {
                          v186 = v40;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v40,
                            20 * v41);
                          v40 = v186;
                        }
                        *(uint32_t *)v40 = 0;
                        *((uint32_t *)v40 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                          *(uint32_t *)(*v27 + 44),
                          v40,
                          20);
                        v39 = v192;
                      }
                      v39[1] = 0;
                      v42 = v39[2];
                      if ( v42 >= 0 )
                        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                          *v192,
                          20 * v42);
                      *v192 = 0;
                      v192[2] = 0x80000000;
                      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                        *(uint32_t *)(*v27 + 44),
                        v192,
                        20);
                    }
                    v43 = *((hkMemoryAllocator::Self **)address + 4);
                    v191 = v43;
                    if ( v43 != nullptr )
                    {
                      v44 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v43 + 3);
                      if ( v44 != nullptr )
                      {
                        if ( *((uint32_t *)v44 + 3) != 0 )
                        {
                          v182 = *((float *)v43 + 3);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v44 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v44 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v44 + 4) != 0 )
                        {
                          v182 = *(float *)&v44;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v44 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v44 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v45 = *((uint32_t *)v44 + 2);
                        *((uint32_t *)v44 + 1) = 0;
                        if ( v45 >= 0 )
                        {
                          v186 = v44;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v44,
                            20 * v45);
                          v44 = v186;
                        }
                        *(uint32_t *)v44 = 0;
                        *((uint32_t *)v44 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                          *(uint32_t *)(*v27 + 44),
                          v44,
                          20);
                      }
                      v46 = v191;
                      v47 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v191 + 4);
                      if ( v47 != nullptr )
                      {
                        if ( *((uint32_t *)v47 + 3) != 0 )
                        {
                          v182 = *((float *)v191 + 4);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v47 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v47 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v47 + 4) != 0 )
                        {
                          v182 = *(float *)&v47;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v47 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v47 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v48 = *((uint32_t *)v47 + 2);
                        *((uint32_t *)v47 + 1) = 0;
                        if ( v48 >= 0 )
                        {
                          v186 = v47;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v47,
                            20 * v48);
                          v47 = v186;
                        }
                        *(uint32_t *)v47 = 0;
                        *((uint32_t *)v47 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                          *(uint32_t *)(*v27 + 44),
                          v47,
                          20);
                        v46 = v191;
                      }
                      *((uint32_t *)v46 + 1) = 0;
                      v49 = *((uint32_t *)v46 + 2);
                      if ( v49 >= 0 )
                        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                          *(uint32_t *)v191,
                          20 * v49);
                      *(uint32_t *)v191 = 0;
                      *((uint32_t *)v191 + 2) = 0x80000000;
                      (*(void (**)(uint32_t, hkMemoryAllocator::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                        *(uint32_t *)(*v27 + 44),
                        v191,
                        20);
                    }
                    *((uint32_t *)address + 1) = 0;
                    v50 = *((uint32_t *)address + 2);
                    if ( v50 >= 0 )
                      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                        *(uint32_t *)address,
                        20 * v50);
                    *(uint32_t *)address = 0;
                    *((uint32_t *)address + 2) = 0x80000000;
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                      *(uint32_t *)(*v27 + 44),
                      address,
                      20);
                  }
                  v51 = v34[2];
                  v34[1] = 0;
                  if ( v51 >= 0 )
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v34,
                      20 * v51);
                  *v34 = 0;
                  v34[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                    *(uint32_t *)(*v27 + 44),
                    v34,
                    20);
                }
                v52 = *(uint32_t **)(LODWORD(v199) + 16);
                if ( v52 != nullptr )
                {
                  if ( v52[3] != 0 )
                  {
                    v197 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v52[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v197);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                      *(uint32_t *)(*v27 + 44),
                      v197,
                      20);
                  }
                  v53 = (hkpCompressedMeshShapeBuilder::Self *)v52[4];
                  address = v53;
                  if ( v53 != nullptr )
                  {
                    v54 = *((uint32_t **)v53 + 3);
                    v193 = v54;
                    if ( v54 != nullptr )
                    {
                      v55 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v54[3];
                      if ( v55 != nullptr )
                      {
                        if ( *((uint32_t *)v55 + 3) != 0 )
                        {
                          v182 = *((float *)v54 + 3);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v55 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v55 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v55 + 4) != 0 )
                        {
                          v182 = *(float *)&v55;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v55 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v55 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v56 = *((uint32_t *)v55 + 2);
                        *((uint32_t *)v55 + 1) = 0;
                        if ( v56 >= 0 )
                        {
                          v186 = v55;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v55,
                            20 * v56);
                          v55 = v186;
                        }
                        *(uint32_t *)v55 = 0;
                        *((uint32_t *)v55 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                          *(uint32_t *)(*v27 + 44),
                          v55,
                          20);
                      }
                      v57 = v193;
                      v58 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v193[4];
                      if ( v58 != nullptr )
                      {
                        if ( *((uint32_t *)v58 + 3) != 0 )
                        {
                          v182 = *((float *)v193 + 4);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v58 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v58 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v58 + 4) != 0 )
                        {
                          v182 = *(float *)&v58;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v58 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v58 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v59 = *((uint32_t *)v58 + 2);
                        *((uint32_t *)v58 + 1) = 0;
                        if ( v59 >= 0 )
                        {
                          v186 = v58;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v58,
                            20 * v59);
                          v58 = v186;
                        }
                        *(uint32_t *)v58 = 0;
                        *((uint32_t *)v58 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                          *(uint32_t *)(*v27 + 44),
                          v58,
                          20);
                        v57 = v193;
                      }
                      v57[1] = 0;
                      v60 = v57[2];
                      if ( v60 >= 0 )
                        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                          *v193,
                          20 * v60);
                      *v193 = 0;
                      v193[2] = 0x80000000;
                      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                        *(uint32_t *)(*v27 + 44),
                        v193,
                        20);
                    }
                    v61 = *((hkMemoryAllocator::Self **)address + 4);
                    v191 = v61;
                    if ( v61 != nullptr )
                    {
                      v62 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v61 + 3);
                      if ( v62 != nullptr )
                      {
                        if ( *((uint32_t *)v62 + 3) != 0 )
                        {
                          v182 = *((float *)v61 + 3);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v62 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v62 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v62 + 4) != 0 )
                        {
                          v182 = *(float *)&v62;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v62 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v62 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v63 = *((uint32_t *)v62 + 2);
                        *((uint32_t *)v62 + 1) = 0;
                        if ( v63 >= 0 )
                        {
                          v186 = v62;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v62,
                            20 * v63);
                          v62 = v186;
                        }
                        *(uint32_t *)v62 = 0;
                        *((uint32_t *)v62 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                          *(uint32_t *)(*v27 + 44),
                          v62,
                          20);
                      }
                      v64 = v191;
                      v65 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v191 + 4);
                      if ( v65 != nullptr )
                      {
                        if ( *((uint32_t *)v65 + 3) != 0 )
                        {
                          v182 = *((float *)v191 + 4);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v65 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v65 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v65 + 4) != 0 )
                        {
                          v182 = *(float *)&v65;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v65 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                            *(uint32_t *)(*v27 + 44),
                            v186,
                            20);
                          v65 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v66 = *((uint32_t *)v65 + 2);
                        *((uint32_t *)v65 + 1) = 0;
                        if ( v66 >= 0 )
                        {
                          v186 = v65;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v65,
                            20 * v66);
                          v65 = v186;
                        }
                        *(uint32_t *)v65 = 0;
                        *((uint32_t *)v65 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                          *(uint32_t *)(*v27 + 44),
                          v65,
                          20);
                        v64 = v191;
                      }
                      *((uint32_t *)v64 + 1) = 0;
                      v67 = *((uint32_t *)v64 + 2);
                      if ( v67 >= 0 )
                        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                          *(uint32_t *)v191,
                          20 * v67);
                      *(uint32_t *)v191 = 0;
                      *((uint32_t *)v191 + 2) = 0x80000000;
                      (*(void (**)(uint32_t, hkMemoryAllocator::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                        *(uint32_t *)(*v27 + 44),
                        v191,
                        20);
                    }
                    *((uint32_t *)address + 1) = 0;
                    v68 = *((uint32_t *)address + 2);
                    if ( v68 >= 0 )
                      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                        *(uint32_t *)address,
                        20 * v68);
                    *(uint32_t *)address = 0;
                    *((uint32_t *)address + 2) = 0x80000000;
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                      *(uint32_t *)(*v27 + 44),
                      address,
                      20);
                  }
                  v69 = v52[2];
                  v52[1] = 0;
                  if ( v69 >= 0 )
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v52,
                      20 * v69);
                  *v52 = 0;
                  v52[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                    *(uint32_t *)(*v27 + 44),
                    v52,
                    20);
                }
                v70 = v199;
                v71 = *(uint32_t *)(LODWORD(v199) + 8);
                *(uint32_t *)(LODWORD(v199) + 4) = 0;
                if ( v71 >= 0 )
                {
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *(uint32_t *)LODWORD(v199),
                    20 * v71);
                  v70 = v199;
                }
                *(uint32_t *)LODWORD(v70) = 0;
                *(uint32_t *)(LODWORD(v70) + 8) = 0x80000000;
                (*(void (**)(uint32_t, float, int))(**(uint32_t **)(*v27 + 44) + 12))(
                  *(uint32_t *)(*v27 + 44),
                  COERCE_FLOAT(LODWORD(v70)),
                  20);
              }
              v72 = v212;
              v73 = *((uint32_t *)v212 + 2);
              *((uint32_t *)v212 + 1) = 0;
              if ( v73 >= 0 )
              {
                (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  *(uint32_t *)v212,
                  20 * v73);
                v72 = v212;
              }
              *(uint32_t *)v72 = 0;
              *((uint32_t *)v72 + 2) = 0x80000000;
              (*(void (**)(uint32_t, hkGeometry::Self *, int))(**(uint32_t **)(*v27 + 44) + 12))(
                *(uint32_t *)(*v27 + 44),
                v72,
                20);
            }
            v220[3] = 0;
            v74 = (hkGeometry::Self *)v220[4];
            v211 = v74;
            if ( v74 != nullptr )
            {
              v75 = *((uint32_t **)v74 + 3);
              v201 = v75;
              if ( v75 != nullptr )
              {
                v76 = v75[3];
                if ( v76 != 0 )
                {
                  v77 = *(uint32_t *)(v76 + 12);
                  if ( v77 != 0 )
                  {
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(*(hkpCompressedMeshShapeBuilder::MappingTree::Self **)(v76 + 12));
                    address = (hkpCompressedMeshShapeBuilder::Self *)_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
                    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
                      *(uint32_t *)(*(uint32_t *)address + 44),
                      v77,
                      20);
                    v78 = (uint32_t *)(address);
                  }
                  else
                  {
                    v78 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
                  }
                  if ( *(uint32_t *)(v76 + 16) != 0 )
                  {
                    address = *(hkpCompressedMeshShapeBuilder::Self **)(v76 + 16);
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(address));
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                      *(uint32_t *)(*v78 + 44),
                      address,
                      20);
                  }
                  v79 = *(uint32_t *)(v76 + 8);
                  *(uint32_t *)(v76 + 4) = 0;
                  if ( v79 >= 0 )
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *(uint32_t *)v76,
                      20 * v79);
                  *(uint32_t *)v76 = 0;
                  *(uint32_t *)(v76 + 8) = 0x80000000;
                  (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v78 + 44) + 12))(
                    *(uint32_t *)(*v78 + 44),
                    v76,
                    20);
                }
                else
                {
                  v78 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
                }
                v80 = (uint32_t *)v201[4];
                if ( v80 != nullptr )
                {
                  if ( v80[3] != 0 )
                  {
                    address = (hkpCompressedMeshShapeBuilder::Self *)v80[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(address));
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                      *(uint32_t *)(*v78 + 44),
                      address,
                      20);
                  }
                  if ( v80[4] != 0 )
                  {
                    address = (hkpCompressedMeshShapeBuilder::Self *)v80[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(address));
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                      *(uint32_t *)(*v78 + 44),
                      address,
                      20);
                  }
                  v81 = v80[2];
                  v80[1] = 0;
                  if ( v81 >= 0 )
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v80,
                      20 * v81);
                  *v80 = 0;
                  v80[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                    *(uint32_t *)(*v78 + 44),
                    v80,
                    20);
                }
                v82 = v201;
                v83 = v201[2];
                v201[1] = 0;
                if ( v83 >= 0 )
                {
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v201,
                    20 * v83);
                  v82 = v201;
                }
                *v82 = 0;
                v82[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                  *(uint32_t *)(*v78 + 44),
                  v82,
                  20);
              }
              else
              {
                v78 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
              }
              v84 = *((uint32_t **)v211 + 4);
              v199 = *(float *)&v84;
              if ( *(float *)&v84 != 0.0 )
              {
                v85 = (uint32_t *)v84[3];
                if ( v85 != nullptr )
                {
                  if ( v85[3] != 0 )
                  {
                    v198 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v85[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v198);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                      *(uint32_t *)(*v78 + 44),
                      v198,
                      20);
                  }
                  v86 = (hkpCompressedMeshShapeBuilder::Self *)v85[4];
                  address = v86;
                  if ( v86 != nullptr )
                  {
                    v87 = *((uint32_t **)v86 + 3);
                    v194 = v87;
                    if ( v87 != nullptr )
                    {
                      v88 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v87[3];
                      if ( v88 != nullptr )
                      {
                        if ( *((uint32_t *)v88 + 3) != 0 )
                        {
                          v182 = *((float *)v87 + 3);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v88 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                            *(uint32_t *)(*v78 + 44),
                            v186,
                            20);
                          v88 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v88 + 4) != 0 )
                        {
                          v182 = *(float *)&v88;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v88 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                            *(uint32_t *)(*v78 + 44),
                            v186,
                            20);
                          v88 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v89 = *((uint32_t *)v88 + 2);
                        *((uint32_t *)v88 + 1) = 0;
                        if ( v89 >= 0 )
                        {
                          v186 = v88;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v88,
                            20 * v89);
                          v88 = v186;
                        }
                        *(uint32_t *)v88 = 0;
                        *((uint32_t *)v88 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                          *(uint32_t *)(*v78 + 44),
                          v88,
                          20);
                      }
                      v90 = v194;
                      v91 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v194[4];
                      if ( v91 != nullptr )
                      {
                        if ( *((uint32_t *)v91 + 3) != 0 )
                        {
                          v182 = *((float *)v194 + 4);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v91 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                            *(uint32_t *)(*v78 + 44),
                            v186,
                            20);
                          v91 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v91 + 4) != 0 )
                        {
                          v182 = *(float *)&v91;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v91 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                            *(uint32_t *)(*v78 + 44),
                            v186,
                            20);
                          v91 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v92 = *((uint32_t *)v91 + 2);
                        *((uint32_t *)v91 + 1) = 0;
                        if ( v92 >= 0 )
                        {
                          v186 = v91;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v91,
                            20 * v92);
                          v91 = v186;
                        }
                        *(uint32_t *)v91 = 0;
                        *((uint32_t *)v91 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                          *(uint32_t *)(*v78 + 44),
                          v91,
                          20);
                        v90 = v194;
                      }
                      v90[1] = 0;
                      v93 = v90[2];
                      if ( v93 >= 0 )
                        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                          *v194,
                          20 * v93);
                      *v194 = 0;
                      v194[2] = 0x80000000;
                      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                        *(uint32_t *)(*v78 + 44),
                        v194,
                        20);
                    }
                    v94 = *((hkMemoryAllocator::Self **)address + 4);
                    v191 = v94;
                    if ( v94 != nullptr )
                    {
                      v95 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v94 + 3);
                      if ( v95 != nullptr )
                      {
                        if ( *((uint32_t *)v95 + 3) != 0 )
                        {
                          v182 = *((float *)v94 + 3);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v95 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                            *(uint32_t *)(*v78 + 44),
                            v186,
                            20);
                          v95 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v95 + 4) != 0 )
                        {
                          v182 = *(float *)&v95;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v95 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                            *(uint32_t *)(*v78 + 44),
                            v186,
                            20);
                          v95 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v96 = *((uint32_t *)v95 + 2);
                        *((uint32_t *)v95 + 1) = 0;
                        if ( v96 >= 0 )
                        {
                          v186 = v95;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v95,
                            20 * v96);
                          v95 = v186;
                        }
                        *(uint32_t *)v95 = 0;
                        *((uint32_t *)v95 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                          *(uint32_t *)(*v78 + 44),
                          v95,
                          20);
                      }
                      v97 = v191;
                      v98 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v191 + 4);
                      if ( v98 != nullptr )
                      {
                        if ( *((uint32_t *)v98 + 3) != 0 )
                        {
                          v182 = *((float *)v191 + 4);
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v98 + 3);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                            *(uint32_t *)(*v78 + 44),
                            v186,
                            20);
                          v98 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        if ( *((uint32_t *)v98 + 4) != 0 )
                        {
                          v182 = *(float *)&v98;
                          v186 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)v98 + 4);
                          hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                            *(uint32_t *)(*v78 + 44),
                            v186,
                            20);
                          v98 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)LODWORD(v182);
                        }
                        v99 = *((uint32_t *)v98 + 2);
                        *((uint32_t *)v98 + 1) = 0;
                        if ( v99 >= 0 )
                        {
                          v186 = v98;
                          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            *(uint32_t *)v98,
                            20 * v99);
                          v98 = v186;
                        }
                        *(uint32_t *)v98 = 0;
                        *((uint32_t *)v98 + 2) = 0x80000000;
                        (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                          *(uint32_t *)(*v78 + 44),
                          v98,
                          20);
                        v97 = v191;
                      }
                      *((uint32_t *)v97 + 1) = 0;
                      v100 = *((uint32_t *)v97 + 2);
                      if ( v100 >= 0 )
                        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                          *(uint32_t *)v191,
                          20 * v100);
                      *(uint32_t *)v191 = 0;
                      *((uint32_t *)v191 + 2) = 0x80000000;
                      (*(void (**)(uint32_t, hkMemoryAllocator::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                        *(uint32_t *)(*v78 + 44),
                        v191,
                        20);
                    }
                    *((uint32_t *)address + 1) = 0;
                    v101 = *((uint32_t *)address + 2);
                    if ( v101 >= 0 )
                      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                        *(uint32_t *)address,
                        20 * v101);
                    *(uint32_t *)address = 0;
                    *((uint32_t *)address + 2) = 0x80000000;
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                      *(uint32_t *)(*v78 + 44),
                      address,
                      20);
                  }
                  v102 = v85[2];
                  v85[1] = 0;
                  if ( v102 >= 0 )
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v85,
                      20 * v102);
                  *v85 = 0;
                  v85[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                    *(uint32_t *)(*v78 + 44),
                    v85,
                    20);
                }
                v103 = *(uint32_t **)(LODWORD(v199) + 16);
                if ( v103 != nullptr )
                {
                  if ( v103[3] != 0 )
                  {
                    address = (hkpCompressedMeshShapeBuilder::Self *)v103[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(address));
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                      *(uint32_t *)(*v78 + 44),
                      address,
                      20);
                  }
                  if ( v103[4] != 0 )
                  {
                    address = (hkpCompressedMeshShapeBuilder::Self *)v103[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(address));
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                      *(uint32_t *)(*v78 + 44),
                      address,
                      20);
                  }
                  v104 = v103[2];
                  v103[1] = 0;
                  if ( v104 >= 0 )
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v103,
                      20 * v104);
                  *v103 = 0;
                  v103[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                    *(uint32_t *)(*v78 + 44),
                    v103,
                    20);
                }
                v105 = v199;
                v106 = *(uint32_t *)(LODWORD(v199) + 8);
                *(uint32_t *)(LODWORD(v199) + 4) = 0;
                if ( v106 >= 0 )
                {
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *(uint32_t *)LODWORD(v199),
                    20 * v106);
                  v105 = v199;
                }
                *(uint32_t *)LODWORD(v105) = 0;
                *(uint32_t *)(LODWORD(v105) + 8) = 0x80000000;
                (*(void (**)(uint32_t, float, int))(**(uint32_t **)(*v78 + 44) + 12))(
                  *(uint32_t *)(*v78 + 44),
                  COERCE_FLOAT(LODWORD(v105)),
                  20);
              }
              v107 = v211;
              v108 = *((uint32_t *)v211 + 2);
              *((uint32_t *)v211 + 1) = 0;
              if ( v108 >= 0 )
              {
                (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  *(uint32_t *)v211,
                  20 * v108);
                v107 = v211;
              }
              *(uint32_t *)v107 = 0;
              *((uint32_t *)v107 + 2) = 0x80000000;
              (*(void (**)(uint32_t, hkGeometry::Self *, int))(**(uint32_t **)(*v78 + 44) + 12))(
                *(uint32_t *)(*v78 + 44),
                v107,
                20);
            }
            v220[4] = 0;
            goto LABEL_229;
          }
          goto LABEL_229;
        }
        hkpCompressedMeshShapeBuilder::appendGeometry(
          address,
          (hkGeometry::Self *)((hkpCompressedMeshShapeBuilder::Self *)((char *)address + 24)),
          (const hkGeometry::Self *)&v243);
        if ( v220 == nullptr )
          goto LABEL_229;
        v162 = (int *)v220[4];
        v163 = v162[1];
        v164 = *v162;
        v165 = *((uint32_t *)address + 39);
        v166 = *((uint32_t *)address + 40) & 0x3FFFFFFF;
        v218 = (hkGeometry::Self *)(v165 + v163);
        if ( v165 + v163 > v166 )
        {
          v170 = 2 * v166;
          if ( v170 < v165 + v163 )
            v170 = v165 + v163;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)&v222,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (int *)address + 38,
            v170,
            20);
          v165 = *((uint32_t *)address + 39);
        }
        v167 = *((uint32_t *)address + 38) + 20 * v165;
        if ( v163 > 0 )
        {
          v168 = 0;
          do
          {
            *(uint32_t *)(v167 + v168) = *(uint32_t *)(v164 + v168);
            *(uint32_t *)(v167 + v168 + 4) = *(uint32_t *)(v164 + v168 + 4);
            *(uint32_t *)(v167 + v168 + 8) = *(uint32_t *)(v164 + v168 + 8);
            *(uint32_t *)(v167 + v168 + 12) = *(uint32_t *)(v164 + v168 + 12);
            *(uint32_t *)(v167 + v168 + 16) = *(uint32_t *)(v164 + v168 + 16);
            v168 += 20;
          }
          while ( v168 != 20 * v163 );
        }
      }
      *((uint32_t *)address + 39) = (uint32_t)(uintptr_t)(v218);
      goto LABEL_11;
    }
  }
  v244 = 0;
  v245 = 0;
  v246 = 0x80000000;
  v247 = 0;
  v248 = 0;
  v249 = 0x80000000;
  v250 = 0;
  v251 = 0;
  v252 = 0x80000000;
  v253 = 0;
  v254 = 0;
  v255 = 0x80000000;
  v257 = -1;
  v256 = 0;
  v243 = 0;
  hkpCompressedMeshShapeBuilder::createChunk(
    address,
    (const hkGeometry::Self *)v4,
    (const hkVector4f::Self *)&v227,
    (hkpCompressedMeshShape::Chunk::Self *)&v243,
    (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v220);
  v110 = *((uint32_t *)v191 + 1);
  if ( v110 == (*((uint32_t *)v191 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v191, 80, v172);
    v110 = *((uint32_t *)v191 + 1);
  }
  v111 = *(uint32_t *)v191 + 80 * v110;
  *(uint32_t *)(v111 + 16) = 0;
  *(uint32_t *)(v111 + 20) = 0;
  *(uint32_t *)(v111 + 24) = 0x80000000;
  *(uint32_t *)(v111 + 28) = 0;
  *(uint32_t *)(v111 + 32) = 0;
  *(uint32_t *)(v111 + 36) = 0x80000000;
  *(uint32_t *)(v111 + 40) = 0;
  *(uint32_t *)(v111 + 44) = 0;
  *(uint32_t *)(v111 + 48) = 0x80000000;
  *(uint32_t *)(v111 + 52) = 0;
  *(uint32_t *)(v111 + 56) = 0;
  *(uint32_t *)(v111 + 60) = 0x80000000;
  *(g4_int128_t *)v111 = v243;
  if ( v245 > 0 )
  {
    v235 = (int (**)(int))(2 * v245);
    v112 = (*(int (**)(uint32_t *, int (***)(int)))(hkContainerHeapAllocator::s_alloc + 16))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             &v235);
    v113 = v235;
    v114 = v235;
    *(uint32_t *)(v111 + 16) = v112;
    *(uint32_t *)(v111 + 24) = (int)((int)(uintptr_t)(v113) + ((unsigned int)(uintptr_t)(v114) >> 31)) >> 1;
    v115 = v245;
    *(uint32_t *)(v111 + 20) = v245;
    v202 = v115;
    v213 = (hkGeometry::Self *)v244;
    if ( v115 > 0 )
    {
      if ( (v112 >= v244 + 16 || v244 >= v112 + 16) && (unsigned int)v115 > 0xA )
      {
        v179 = v111;
        v116 = 0;
        v187 = 8 * ((unsigned int)v115 >> 3);
        v117 = 0;
        do
        {
          ++v117;
          *(__m128i *)(v112 + v116) = *(__m128i *)((char *)v213 + v116);
          v116 += 16;
        }
        while ( v117 < (unsigned int)v115 >> 3 );
        v111 = v179;
        if ( v187 != v115 )
        {
          *(uint16_t *)(v112 + 16 * ((unsigned int)v115 >> 3)) = *((uint16_t *)v213 + 8 * ((unsigned int)v115 >> 3));
          if ( v187 + 1 < v115 )
          {
            *(uint16_t *)(v112 + 2 * (v187 + 1)) = *((uint16_t *)v213 + v187 + 1);
            if ( v187 + 2 < v115 )
            {
              *(uint16_t *)(v112 + 2 * (v187 + 2)) = *((uint16_t *)v213 + v187 + 2);
              if ( v115 > v187 + 3 )
              {
                *(uint16_t *)(v112 + 2 * (v187 + 3)) = *((uint16_t *)v213 + v187 + 3);
                if ( v115 > v187 + 4 )
                {
                  *(uint16_t *)(v112 + 2 * (v187 + 4)) = *((uint16_t *)v213 + v187 + 4);
                  if ( v115 > v187 + 5 )
                  {
                    *(uint16_t *)(v112 + 2 * (v187 + 5)) = *((uint16_t *)v213 + v187 + 5);
                    if ( v115 > v187 + 6 )
                      *(uint16_t *)(v112 + 2 * (v187 + 6)) = *((uint16_t *)v213 + v187 + 6);
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v157 = v244;
        v158 = 0;
        do
        {
          *(uint16_t *)(v112 + 2 * v158) = *(uint16_t *)(v157 + 2 * v158);
          ++v158;
        }
        while ( v158 != v202 );
      }
    }
    v118 = v248;
    v119 = *(uint32_t *)(v111 + 36) & 0x3FFFFFFF;
    if ( v248 <= v119 )
      goto LABEL_255;
    if ( *(int *)(v111 + 36) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *(uint32_t *)(v111 + 28),
        2 * v119);
      v118 = v248;
    }
LABEL_321:
    v235 = (int (**)(int))(2 * v118);
    v146 = (*(int (**)(uint32_t *, int (***)(int)))(hkContainerHeapAllocator::s_alloc + 16))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             &v235);
    v147 = v235;
    *(uint32_t *)(v111 + 28) = v146;
    v188 = v146;
    *(uint32_t *)(v111 + 36) = (int)(uintptr_t)(v147) / 2;
    v203 = v248;
    v120 = v248;
    goto LABEL_256;
  }
  *(uint32_t *)(v111 + 20) = v245;
  v118 = v248;
  if ( v248 > 0 )
    goto LABEL_321;
LABEL_255:
  v203 = v118;
  v188 = *(uint32_t *)(v111 + 28);
  v120 = v118;
LABEL_256:
  *(uint32_t *)(v111 + 32) = v120;
  v214 = (hkGeometry::Self *)v247;
  if ( v120 > 0 )
  {
    if ( (v188 >= v247 + 16 || v247 >= v188 + 16) && (v121 = v203, v203 > 0xA) )
    {
      v122 = 0;
      v204 = 0;
      v183 = 8 * ((unsigned int)v121 >> 3);
      v123 = v247;
      do
      {
        ++v204;
        *(__m128i *)(v188 + v122) = *(__m128i *)((char *)v214 + v122);
        v122 += 16;
      }
      while ( v204 < (unsigned int)v121 >> 3 );
      if ( v121 != v183 )
      {
        *(uint16_t *)(v188 + 16 * ((unsigned int)v121 >> 3)) = *(uint16_t *)(v123 + 16 * ((unsigned int)v121 >> 3));
        if ( v121 > v183 + 1 )
        {
          *(uint16_t *)(v188 + 2 * (v183 + 1)) = *((uint16_t *)v214 + v183 + 1);
          if ( v121 > v183 + 2 )
          {
            *(uint16_t *)(v188 + 2 * (v183 + 2)) = *((uint16_t *)v214 + v183 + 2);
            if ( v121 > v183 + 3 )
            {
              *(uint16_t *)(v188 + 2 * (v183 + 3)) = *((uint16_t *)v214 + v183 + 3);
              if ( v121 > v183 + 4 )
              {
                *(uint16_t *)(v188 + 2 * (v183 + 4)) = *((uint16_t *)v214 + v183 + 4);
                if ( v121 > v183 + 5 )
                {
                  *(uint16_t *)(v188 + 2 * (v183 + 5)) = *((uint16_t *)v214 + v183 + 5);
                  if ( v121 > v183 + 6 )
                    *(uint16_t *)(v188 + 2 * (v183 + 6)) = *((uint16_t *)v214 + v183 + 6);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v159 = 0;
      do
      {
        *(uint16_t *)(v188 + 2 * v159) = *((uint16_t *)v214 + v159);
        ++v159;
      }
      while ( v159 != v203 );
    }
  }
  v124 = v251;
  v125 = *(uint32_t *)(v111 + 48) & 0x3FFFFFFF;
  if ( v125 >= v251 )
  {
    v205 = v251;
    v189 = *(uint32_t *)(v111 + 40);
    v128 = v251;
  }
  else
  {
    if ( *(int *)(v111 + 48) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *(uint32_t *)(v111 + 40),
        2 * v125);
      v124 = v251;
    }
    v235 = (int (**)(int))(2 * v124);
    v126 = (*(int (**)(uint32_t *, int (***)(int)))(hkContainerHeapAllocator::s_alloc + 16))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             &v235);
    v127 = v235;
    *(uint32_t *)(v111 + 40) = v126;
    v189 = v126;
    *(uint32_t *)(v111 + 48) = (int)(uintptr_t)(v127) / 2;
    v205 = v251;
    v128 = v251;
  }
  *(uint32_t *)(v111 + 44) = v128;
  v215 = (hkGeometry::Self *)v250;
  if ( v128 > 0 )
  {
    if ( (v189 >= v250 + 16 || v250 >= v189 + 16) && (v129 = v205, v205 > 0xA) )
    {
      v130 = 0;
      v206 = 0;
      v184 = 8 * ((unsigned int)v129 >> 3);
      v131 = v250;
      do
      {
        ++v206;
        *(__m128i *)(v189 + v130) = *(__m128i *)((char *)v215 + v130);
        v130 += 16;
      }
      while ( (unsigned int)v129 >> 3 > v206 );
      if ( v129 != v184 )
      {
        *(uint16_t *)(v189 + 16 * ((unsigned int)v129 >> 3)) = *(uint16_t *)(v131 + 16 * ((unsigned int)v129 >> 3));
        if ( v129 > v184 + 1 )
        {
          *(uint16_t *)(v189 + 2 * (v184 + 1)) = *((uint16_t *)v215 + v184 + 1);
          if ( v129 > v184 + 2 )
          {
            *(uint16_t *)(v189 + 2 * (v184 + 2)) = *((uint16_t *)v215 + v184 + 2);
            if ( v129 > v184 + 3 )
            {
              *(uint16_t *)(v189 + 2 * (v184 + 3)) = *((uint16_t *)v215 + v184 + 3);
              if ( v129 > v184 + 4 )
              {
                *(uint16_t *)(v189 + 2 * (v184 + 4)) = *((uint16_t *)v215 + v184 + 4);
                if ( v129 > v184 + 5 )
                {
                  *(uint16_t *)(v189 + 2 * (v184 + 5)) = *((uint16_t *)v215 + v184 + 5);
                  if ( v129 > v184 + 6 )
                    *(uint16_t *)(v189 + 2 * (v184 + 6)) = *((uint16_t *)v215 + v184 + 6);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v160 = 0;
      do
      {
        *(uint16_t *)(v189 + 2 * v160) = *((uint16_t *)v215 + v160);
        ++v160;
      }
      while ( v160 != v205 );
    }
  }
  v132 = v254;
  v133 = *(uint32_t *)(v111 + 60) & 0x3FFFFFFF;
  if ( v133 >= v254 )
  {
    v207 = v254;
    v190 = *(uint32_t *)(v111 + 52);
    v136 = v254;
  }
  else
  {
    if ( *(int *)(v111 + 60) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *(uint32_t *)(v111 + 52),
        2 * v133);
      v132 = v254;
    }
    v235 = (int (**)(int))(2 * v132);
    v134 = (*(int (**)(uint32_t *, int (***)(int)))(hkContainerHeapAllocator::s_alloc + 16))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             &v235);
    v135 = v235;
    *(uint32_t *)(v111 + 52) = v134;
    v190 = v134;
    *(uint32_t *)(v111 + 60) = (int)(uintptr_t)(v135) / 2;
    v207 = v254;
    v136 = v254;
  }
  *(uint32_t *)(v111 + 56) = v136;
  v216 = (hkGeometry::Self *)v253;
  if ( v136 > 0 )
  {
    if ( (v190 >= v253 + 16 || v253 >= v190 + 16) && (v137 = v207, v207 > 0xA) )
    {
      v138 = 0;
      v208 = 0;
      v185 = 8 * ((unsigned int)v137 >> 3);
      v139 = v253;
      do
      {
        ++v208;
        *(__m128i *)(v190 + v138) = *(__m128i *)((char *)v216 + v138);
        v138 += 16;
      }
      while ( (unsigned int)v137 >> 3 > v208 );
      if ( v185 != v137 )
      {
        *(uint16_t *)(v190 + 16 * ((unsigned int)v137 >> 3)) = *(uint16_t *)(v139 + 16 * ((unsigned int)v137 >> 3));
        if ( v137 > v185 + 1 )
        {
          *(uint16_t *)(v190 + 2 * (v185 + 1)) = *((uint16_t *)v216 + v185 + 1);
          if ( v185 + 2 < v137 )
          {
            *(uint16_t *)(v190 + 2 * (v185 + 2)) = *((uint16_t *)v216 + v185 + 2);
            if ( v137 > v185 + 3 )
            {
              *(uint16_t *)(v190 + 2 * (v185 + 3)) = *((uint16_t *)v216 + v185 + 3);
              if ( v137 > v185 + 4 )
              {
                *(uint16_t *)(v190 + 2 * (v185 + 4)) = *((uint16_t *)v216 + v185 + 4);
                if ( v185 + 5 < v137 )
                {
                  *(uint16_t *)(v190 + 2 * (v185 + 5)) = *((uint16_t *)v216 + v185 + 5);
                  if ( v137 > v185 + 6 )
                    *(uint16_t *)(v190 + 2 * (v185 + 6)) = *((uint16_t *)v216 + v185 + 6);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v161 = 0;
      do
      {
        *(uint16_t *)(v190 + 2 * v161) = *((uint16_t *)v216 + v161);
        ++v161;
      }
      while ( v161 != v207 );
    }
  }
  *(uint32_t *)(v111 + 64) = v256;
  *(uint32_t *)(v111 + 68) = v257;
  v140 = *((uint32_t *)v191 + 1) + 1;
  *((uint32_t *)v191 + 1) = v140;
  if ( v220 != nullptr )
  {
    v141 = v220;
    if ( v220[1] > 0 )
    {
      v217 = v140;
      v142 = 0;
      while ( 1 )
      {
        v143 = 5 * v142++;
        v209 = 4 * v143;
        v144 = (uint32_t *)(*v141 + 4 * v143);
        v145 = v144[3];
        v221 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v144[1];
        v144[2] = v217 - 1;
        *(uint32_t *)(*v141 + v209 + 16) = (v217 << *(uint32_t *)(*((uint32_t *)address + 64) + 28))
                                       | *(uint32_t *)(*((uint32_t *)address + 64) + 32) & (unsigned int)(uintptr_t)(v221)
                                       | ((v145 & 1) << *(uint32_t *)(*((uint32_t *)address + 64) + 24));
        if ( v141[1] <= v142 )
          break;
        v217 = *((uint32_t *)v191 + 1);
      }
    }
  }
  v254 = 0;
  if ( v255 >= 0 )
    (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v253,
      2 * (v255 & 0x3FFFFFFF));
  v253 = 0;
  v255 = 0x80000000;
  v251 = 0;
  if ( v252 >= 0 )
    (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v250,
      2 * (v252 & 0x3FFFFFFF));
  v250 = 0;
  v252 = 0x80000000;
  v248 = 0;
  if ( v249 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v247,
      2 * (v249 & 0x3FFFFFFF));
  result = v246;
  v247 = 0;
  v249 = 0x80000000;
  v245 = 0;
  if ( v246 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v244,
             2 * (v246 & 0x3FFFFFFF));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::chunkToGeometry  (binary VA: 0x1ae0d80)
// Original: hkpCompressedMeshShapeBuilder::chunkToGeometry
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::chunkToGeometry(hkpCompressedMeshShapeBuilder::Self *self, hkpCompressedMeshShape::Self *a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int result;
  int v15;
  int v16;
  char *v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  typedef hkVector4f::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef hkpCompressedMeshShape::Chunk::Self *_g4_t_v30;
  typedef char *_g4_t_s;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33[4];
  typedef g4_int128_t _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef g4_int128_t _g4_t_v43;
  typedef g4_int128_t _g4_t_v44;
  typedef uint32_t _g4_t_v45[8];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v24)) > _g4_s1 ? (32u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v25)) > _g4_s2 ? (40u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v26)) > _g4_s3 ? (60u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v27)) > _g4_s4 ? (64u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v28)) > _g4_s5 ? (64u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v29)) > _g4_s6 ? (64u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v30)) > _g4_s7 ? (68u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_s)) > _g4_s8 ? (72u + sizeof(_g4_t_s)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v32)) > _g4_s9 ? (76u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v33)) > _g4_s10 ? (80u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v34)) > _g4_s11 ? (96u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v35)) > _g4_s12 ? (112u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v36)) > _g4_s13 ? (116u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v37)) > _g4_s14 ? (120u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v38)) > _g4_s15 ? (124u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v39)) > _g4_s16 ? (128u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v40)) > _g4_s17 ? (132u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v41)) > _g4_s18 ? (136u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v42)) > _g4_s19 ? (140u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v43)) > _g4_s20 ? (144u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v44)) > _g4_s21 ? (160u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (176u + sizeof(_g4_t_v45)) > _g4_s22 ? (176u + sizeof(_g4_t_v45)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 132u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 136u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 160u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 176u);

  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 1065353216;
  v39 = 1065353216;
  v40 = 1065353216;
  v41 = 1065353216;
  v42 = 1065353216;
  v3 = *((uint32_t *)self + 30);
  v4 = 80 * (uint32_t)(uintptr_t)(a2) + v3;
  v5 = *(uint16_t *)(v4 + 70);
  if ( (uint16_t)v5 != 0xFFFF )
  {
    v6 = *((uint32_t *)self + 21) + 48 * v5;
    v34 = *(g4_int128_t *)v6;
    v35 = *(uint32_t *)(v6 + 16);
    v36 = *(uint32_t *)(v6 + 20);
    v37 = *(uint32_t *)(v6 + 24);
    v38 = *(uint32_t *)(v6 + 28);
    v39 = *(uint32_t *)(v6 + 32);
    v40 = *(uint32_t *)(v6 + 36);
    v41 = *(uint32_t *)(v6 + 40);
    v42 = *(uint32_t *)(v6 + 44);
  }
  v7 = *(uint16_t *)(v4 + 68);
  v30 = (hkpCompressedMeshShape::Chunk::Self *)(80 * (uint32_t)(uintptr_t)(a2) + v3);
  if ( (uint16_t)v7 != 0xFFFF )
    v30 = (hkpCompressedMeshShape::Chunk::Self *)(80 * v7 + v3);
  s = nullptr;
  v8 = *((uint32_t *)v30 + 5) / 3;
  if ( v8 == 0
    || (LODWORD(v43) = 4 * v8,
        s = (char *)(*(int (**)(uint32_t *, g4_int128_t *))(hkContainerHeapAllocator::s_alloc + 16))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      &v43),
        v24 = (int)v43 / 4,
        (int)v43 / 4 == 0) )
  {
    v24 = 0x80000000;
  }
  if ( v8 > 0 )
    memset(s, -1, 4 * v8);
  v33[0] = 0;
  v32 = 0;
  do
  {
    hkpCompressedMeshShape::Chunk::getTriangle(
      v30,
      v32,
      *((float *)self + 36),
      (hkVector4f::Self *)&v43,
      (hkVector4f::Self *)&v44,
      (hkVector4f::Self *)v45);
    v15 = *((uint32_t *)v30 + 7);
    v16 = 2 * v32;
    v17 = s;
    v18 = &s[4 * *(uint16_t *)(v15 + 2 * v32)];
    if ( *(uint32_t *)v18 == -1 )
    {
      *(uint32_t *)v18 = a3[3];
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v43, (const hkQsTransformf::Self *)&v34, (const hkVector4f::Self *)&v43);
      v19 = a3[3];
      v16 = 2 * v32;
      if ( v19 == (a3[4] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(a3 + 2),
          16,
          (int)(uintptr_t)(v23));
        v19 = a3[3];
        v16 = 2 * v32;
      }
      v17 = s;
      *(g4_int128_t *)(a3[2] + 16 * v19) = v43;
      ++a3[3];
      v15 = *((uint32_t *)v30 + 7);
      v9 = &s[4 * *(uint16_t *)(v15 + v16 + 2)];
      if ( *(uint32_t *)v9 != -1 )
      {
LABEL_11:
        v10 = &v17[4 * *(uint16_t *)(v15 + v16 + 4)];
        if ( *(uint32_t *)v10 != -1 )
          goto LABEL_12;
LABEL_22:
        v29 = v16;
        *(uint32_t *)v10 = a3[3];
        hkVector4f::setTransformedPos((hkVector4f::Self *)v45, (const hkQsTransformf::Self *)&v34, (const hkVector4f::Self *)v45);
        v21 = a3[3];
        v16 = v29;
        if ( v21 == (a3[4] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(a3 + 2),
            16,
            (int)(uintptr_t)(v23));
          v21 = a3[3];
          v16 = v29;
        }
        v22 = (uint32_t *)(a3[2] + 16 * v21);
        *v22 = v45[0];
        v22[1] = v45[1];
        v22[2] = v45[2];
        v22[3] = v45[3];
        ++a3[3];
        v15 = *((uint32_t *)v30 + 7);
        goto LABEL_12;
      }
    }
    else
    {
      v9 = &s[4 * *(uint16_t *)(v15 + v16 + 2)];
      if ( *(uint32_t *)v9 != -1 )
        goto LABEL_11;
    }
    v28 = v16;
    *(uint32_t *)v9 = a3[3];
    hkVector4f::setTransformedPos((hkVector4f::Self *)&v44, (const hkQsTransformf::Self *)&v34, (const hkVector4f::Self *)&v44);
    v20 = a3[3];
    v16 = v28;
    if ( v20 == (a3[4] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a3 + 2),
        16,
        (int)(uintptr_t)(v23));
      v20 = a3[3];
      v16 = v28;
    }
    *(g4_int128_t *)(a3[2] + 16 * v20) = v44;
    ++a3[3];
    v15 = *((uint32_t *)v30 + 7);
    v10 = &s[4 * *(uint16_t *)(v15 + v16 + 4)];
    if ( *(uint32_t *)v10 == -1 )
      goto LABEL_22;
LABEL_12:
    v27 = *(uint32_t *)&s[4 * *(uint16_t *)(v15 + 2 * (v32 + 2 * v33[0]))];
    v26 = *(uint32_t *)&s[4 * *(uint16_t *)(v15 + v16 + 2)];
    v11 = a3[6];
    v12 = *(uint32_t *)&s[4 * *(uint16_t *)(v15 + 2 * (v32 + 2 * (1 - v33[0])))];
    if ( v11 == (a3[7] & 0x3FFFFFFF) )
    {
      v25 = *(uint32_t *)&s[4 * *(uint16_t *)(v15 + 2 * (v32 + 2 * (1 - v33[0])))];
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a3 + 5),
        16,
        (int)(uintptr_t)(v23));
      v11 = a3[6];
      v12 = v25;
    }
    v13 = (uint32_t *)(a3[5] + 16 * v11);
    *v13 = v27;
    v13[1] = v26;
    v13[2] = v12;
    v13[3] = 0;
    ++a3[6];
    result = hkpCompressedMeshShape::Chunk::getNextIndex(v30, v32, v33);
    v32 = result;
  }
  while ( result != -1 );
  if ( v24 >= 0 )
    return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             s,
             4 * v24);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::convexPieceToGeometry  (binary VA: 0x1ae1310)
// Original: hkpCompressedMeshShapeBuilder::convexPieceToGeometry
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::convexPieceToGeometry(hkpCompressedMeshShapeBuilder::Self *self, const hkpCompressedMeshShape::Self *a2, int *a3)
{
  int v3;
  uint16_t *v4;
  int v5;
  int v6;
  int v7;
  int result;
  typedef float _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[3];
  typedef g4_int128_t _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v13)) > _g4_s4 ? (36u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v14)) > _g4_s5 ? (48u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v15)) > _g4_s6 ? (64u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v16)) > _g4_s7 ? (68u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v17)) > _g4_s8 ? (72u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v18)) > _g4_s9 ? (76u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v19)) > _g4_s10 ? (80u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v20)) > _g4_s11 ? (84u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v21)) > _g4_s12 ? (88u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v22)) > _g4_s13 ? (92u + sizeof(_g4_t_v22)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1065353216;
  v19 = 1065353216;
  v20 = 1065353216;
  v21 = 1065353216;
  v3 = *((uint32_t *)self + 33);
  v22 = 1065353216;
  v4 = (uint16_t *)(32 * (uint32_t)(uintptr_t)(a2) + v3);
  v5 = v4[15];
  if ( (uint16_t)v5 != 0xFFFF )
  {
    v6 = *((uint32_t *)self + 21) + 48 * v5;
    v14 = *(g4_int128_t *)v6;
    v15 = *(uint32_t *)(v6 + 16);
    v16 = *(uint32_t *)(v6 + 20);
    v17 = *(uint32_t *)(v6 + 24);
    v18 = *(uint32_t *)(v6 + 28);
    v19 = *(uint32_t *)(v6 + 32);
    v20 = *(uint32_t *)(v6 + 36);
    v21 = *(uint32_t *)(v6 + 40);
    v22 = *(uint32_t *)(v6 + 44);
  }
  v7 = v4[14];
  if ( (uint16_t)v7 != 0xFFFF )
    v4 = (uint16_t *)(32 * v7 + v3);
  v9 = *((float *)self + 36);
  v10 = 0;
  v11 = 0;
  v12 = 0x80000000;
  hkpCompressedMeshShape::ConvexPiece::getVertices(
    (hkpCompressedMeshShape::ConvexPiece::Self *)v4,
    v9,
    (const hkQsTransformf::Self *)&v14,
    (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v10);
  v13[2] = 16;
  v13[0] = v10;
  v13[1] = v11;
  hkGeometryUtility::createConvexGeometry((int)(uintptr_t)(v13), a3);
  result = v12;
  v11 = 0;
  if ( v12 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v10,
             16 * v12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::bigTrianglesToGeometry  (binary VA: 0x1ae14b0)
// Original: hkpCompressedMeshShapeBuilder::bigTrianglesToGeometry
// ----------------------------------------------------------------------------
hkpCompressedMeshShapeBuilder::Self * hkpCompressedMeshShapeBuilder::bigTrianglesToGeometry(hkpCompressedMeshShapeBuilder::Self *self, const hkpCompressedMeshShape::Self *a2)
{
  hkpCompressedMeshShapeBuilder::Self *result;
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint16_t *v13;
  int *v14;
  int *v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef hkMemoryAllocator::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef hkpCompressedMeshShapeBuilder::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[60];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v21)) > _g4_s1 ? (28u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v22)) > _g4_s2 ? (32u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v23)) > _g4_s3 ? (36u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v24)) > _g4_s4 ? (40u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v25)) > _g4_s5 ? (44u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v26)) > _g4_s6 ? (44u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v27)) > _g4_s7 ? (44u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v28)) > _g4_s8 ? (44u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v29)) > _g4_s9 ? (44u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v30)) > _g4_s10 ? (48u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v31)) > _g4_s11 ? (52u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v32)) > _g4_s12 ? (56u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v33)) > _g4_s13 ? (60u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v34)) > _g4_s14 ? (64u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v35)) > _g4_s15 ? (68u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v36)) > _g4_s16 ? (72u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v37)) > _g4_s17 ? (76u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v38)) > _g4_s18 ? (80u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v39)) > _g4_s19 ? (84u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v40)) > _g4_s20 ? (88u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v41)) > _g4_s21 ? (92u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v42)) > _g4_s22 ? (96u + sizeof(_g4_t_v42)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);

  v24 = nullptr;
  v22 = (hkMemoryAllocator::Self *)((const hkpCompressedMeshShape::Self *)((char *)a2 + 8));
  result = self;
  if ( *((int *)self + 28) > 0 )
  {
    result = nullptr;
    do
    {
      v13 = (uint16_t *)(*((uint32_t *)self + 27) + 16 * (uint32_t)(uintptr_t)(result));
      v26 = *((uint32_t *)self + 24);
      v14 = (int *)(16 * *v13 + v26);
      v30 = *v14;
      v31 = v14[1];
      v32 = v14[2];
      v33 = v14[3];
      v15 = (int *)(v26 + 16 * v13[1]);
      v34 = *v15;
      v35 = v15[1];
      v36 = v15[2];
      v37 = v15[3];
      v16 = (int *)(v26 + 16 * v13[2]);
      v38 = *v16;
      v39 = v16[1];
      v40 = v16[2];
      v41 = v16[3];
      v17 = v13[7];
      if ( (uint16_t)v17 != 0xFFFF )
      {
        std::memcpy(v42, (const void *)(*((uint32_t *)self + 21) + 48 * v17), 48);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v30, (const hkQsTransformf::Self *)v42, (const hkVector4f::Self *)&v30);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v34, (const hkQsTransformf::Self *)v42, (const hkVector4f::Self *)&v34);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v38, (const hkQsTransformf::Self *)v42, (const hkVector4f::Self *)&v38);
      }
      v19 = *((uint32_t *)a2 + 3);
      v18 = v19;
      if ( v19 == (*((uint32_t *)a2 + 4) & 0x3FFFFFFF) )
      {
        v27 = *((uint32_t *)a2 + 3);
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v22, 16, v20);
        v18 = *((uint32_t *)a2 + 3);
        v19 = v27;
      }
      v3 = (uint32_t *)(*((uint32_t *)a2 + 2) + 16 * v18);
      *v3 = v30;
      v3[1] = v31;
      v3[2] = v32;
      v3[3] = v33;
      v4 = *((uint32_t *)a2 + 3) + 1;
      v5 = *((uint32_t *)a2 + 4) & 0x3FFFFFFF;
      *((uint32_t *)a2 + 3) = v4;
      if ( v4 == v5 )
      {
        v29 = v19;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v22, 16, v20);
        v4 = *((uint32_t *)a2 + 3);
        v19 = v29;
      }
      v6 = (uint32_t *)(*((uint32_t *)a2 + 2) + 16 * v4);
      *v6 = v34;
      v6[1] = v35;
      v6[2] = v36;
      v6[3] = v37;
      v7 = *((uint32_t *)a2 + 3) + 1;
      v8 = *((uint32_t *)a2 + 4) & 0x3FFFFFFF;
      *((uint32_t *)a2 + 3) = v7;
      if ( v7 == v8 )
      {
        v28 = v19;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v22, 16, v20);
        v7 = *((uint32_t *)a2 + 3);
        v19 = v28;
      }
      v9 = (uint32_t *)(*((uint32_t *)a2 + 2) + 16 * v7);
      *v9 = v38;
      v9[1] = v39;
      v9[2] = v40;
      v9[3] = v41;
      v25 = v19 + 1;
      v23 = v19 + 2;
      v10 = *((uint32_t *)a2 + 6);
      v11 = *((uint32_t *)a2 + 7) & 0x3FFFFFFF;
      ++*((uint32_t *)a2 + 3);
      if ( v10 == v11 )
      {
        v21 = v19;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (const hkpCompressedMeshShape::Self *)((char *)a2 + 20),
          16,
          v20);
        v10 = *((uint32_t *)a2 + 6);
        v19 = v21;
      }
      v12 = (uint32_t *)(*((uint32_t *)a2 + 5) + 16 * v10);
      v24 = (hkpCompressedMeshShapeBuilder::Self *)((char *)v24 + 1);
      v12[1] = v25;
      v12[2] = v23;
      *v12 = v19;
      v12[3] = 0;
      result = v24;
      ++*((uint32_t *)a2 + 6);
    }
    while ( *((uint32_t *)self + 28) > (int)(uintptr_t)(v24) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::MappingTree::getKeys  (binary VA: 0x1ae1810)
// Original: hkpCompressedMeshShapeBuilder::MappingTree::getKeys
// ----------------------------------------------------------------------------
hkpCompressedMeshShapeBuilder::MappingTree::Self * hkpCompressedMeshShapeBuilder::MappingTree::getKeys(hkpCompressedMeshShapeBuilder::MappingTree::Self *self, hkArray<unsigned int, hkContainerHeapAllocator::Self> *a2, int a3)
{
  int v4;
  int i;
  uint32_t *v6;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *result;

  while ( 1 )
  {
    v4 = 0;
    for ( i = 0; *((uint32_t *)self + 1) > i; *(uint32_t *)(*(uint32_t *)a2 + 4 * (*v6 + a3)) = v6[4] )
    {
      ++i;
      v6 = (uint32_t *)(*(uint32_t *)self + v4);
      v4 += 20;
    }
    result = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)self + 3);
    if ( result == nullptr || *((uint32_t *)self + 4) == 0 )
      break;
    hkpCompressedMeshShapeBuilder::MappingTree::getKeys(result, a2, a3);
    self = *((hkpCompressedMeshShapeBuilder::MappingTree::Self **)self + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::addBigTriangles  (binary VA: 0x1ae18a0)
// Original: hkpCompressedMeshShapeBuilder::addBigTriangles
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::addBigTriangles(hkpCompressedMeshShapeBuilder::Self *self, hkpCompressedMeshShape::Self *a2)
{
  hkpCompressedMeshShapeBuilder::Self *v2;
  hkpCompressedMeshShape::Self *v3;
  int v4;
  hkpCompressedMeshShape::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v25;
  int v26;
  typedef int _g4_t_v27;
  typedef int16_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int16_t _g4_t_v32;
  typedef int *_g4_t_v33;
  typedef int16_t _g4_t_v34;
  typedef uint32_t _g4_t_v35[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v28)) > _g4_s1 ? (4u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v29)) > _g4_s2 ? (8u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v30)) > _g4_s3 ? (8u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v31)) > _g4_s4 ? (12u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v32)) > _g4_s5 ? (12u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v33)) > _g4_s6 ? (16u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v34)) > _g4_s7 ? (16u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v35)) > _g4_s8 ? (20u + sizeof(_g4_t_v35)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);

  v35[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  hkGeometryUtils::weldVertices((hkpCompressedMeshShapeBuilder::Self *)((char *)self + 24), (hkGeometry::Self *)0x3A83126F);
  v4 = *((uint32_t *)v3 + 25);
  v28 = v4;
  v31 = *((uint32_t *)v2 + 9);
  v33 = (int *)v3;
  v5 = v3;
  v6 = *((uint32_t *)v2 + 8);
  v29 = v31 + v4;
  v7 = *((uint32_t *)v5 + 26) & 0x3FFFFFFF;
  if ( v31 + v4 > v7 )
  {
    v26 = 2 * v7;
    if ( v31 + v4 >= v26 )
      v26 = v31 + v4;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v35,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      v33 + 24,
      v26,
      16);
    v4 = v33[25];
  }
  v8 = v33[24] + 16 * v4;
  v9 = 0;
  if ( v31 > 0 )
  {
    do
    {
      *(uint32_t *)(v8 + v9) = *(uint32_t *)(v6 + v9);
      *(uint32_t *)(v8 + v9 + 4) = *(uint32_t *)(v6 + v9 + 4);
      *(uint32_t *)(v8 + v9 + 8) = *(uint32_t *)(v6 + v9 + 8);
      *(uint32_t *)(v8 + v9 + 12) = *(uint32_t *)(v6 + v9 + 12);
      v9 += 16;
    }
    while ( v9 != 16 * v31 );
  }
  v10 = v33[28];
  v33[25] = v29;
  v11 = *((uint32_t *)v2 + 12);
  v27 = v10;
  v12 = v33[29] & 0x3FFFFFFF;
  v13 = v11 + v10;
  if ( v13 > v12 )
  {
    v25 = 2 * v12;
    if ( v13 < v25 )
      v13 = v25;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v35,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      v33 + 27,
      v13,
      16);
    v15 = v33;
    v14 = v33[28];
  }
  else
  {
    v14 = v27;
    v15 = v33;
  }
  v16 = v15[27];
  v17 = v16 + 16 * v14;
  if ( v11 > 0 )
  {
    v18 = v17 + 16 * v11;
    do
    {
      *(uint32_t *)(v17 + 8) = 0;
      *(uint16_t *)(v17 + 12) = 0;
      *(uint16_t *)(v17 + 14) = -1;
      v17 += 16;
    }
    while ( v17 != v18 );
    v14 = v33[28];
    v16 = v33[27];
  }
  v33[28] = v11 + v14;
  v19 = 16 * v27 + v16;
  v20 = *((uint32_t *)v2 + 12);
  if ( v20 > 0 )
  {
    v21 = 0;
    do
    {
      v22 = *((uint32_t *)v2 + 11) + 16 * v21++;
      v34 = *(uint16_t *)(v22 + 4) + v28;
      v32 = *(uint16_t *)(v22 + 8) + v28;
      v30 = *(uint32_t *)(v22 + 12);
      v19 += 16;
      *(uint16_t *)(v19 - 16) = *(uint16_t *)v22 + v28;
      *(uint16_t *)(v19 - 14) = v34;
      *(uint16_t *)(v19 - 12) = v32;
      *(uint32_t *)(v19 - 8) = v30;
      *(uint16_t *)(v19 - 4) = 0;
      *(uint16_t *)(v19 - 2) = -1;
      v20 = *((uint32_t *)v2 + 12);
    }
    while ( v20 > v21 );
  }
  *((uint32_t *)v2 + 25) += v20;
  *((uint32_t *)v2 + 12) = 0;
  v23 = *((uint32_t *)v2 + 9);
  *((uint32_t *)v2 + 9) = 0;
  *((uint32_t *)v2 + 26) += v23;
  return v27;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::snapGeometry  (binary VA: 0x1ae1af0)
// Original: hkpCompressedMeshShapeBuilder::snapGeometry
// ----------------------------------------------------------------------------
hkpCompressedMeshShapeBuilder::Self * hkpCompressedMeshShapeBuilder::snapGeometry(hkpCompressedMeshShapeBuilder::Self *self, hkGeometry::Self *a2)
{
  int v2;
  hkpCompressedMeshShapeBuilder::Self *result;
  int v4;

  v2 = 0;
  result = *((hkpCompressedMeshShapeBuilder::Self **)self + 3);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    do
    {
      v4 = v2++;
      result = hkpCompressedMeshShapeBuilder::snapToGrid(
                 (hkpCompressedMeshShapeBuilder::Self *)(*((uint32_t *)self + 2) + 16 * v4),
                 (hkVector4f::Self *)(a2));
    }
    while ( *((uint32_t *)self + 3) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::filterGeometry  (binary VA: 0x1ae1b40)
// Original: hkpCompressedMeshShapeBuilder::filterGeometry
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::filterGeometry(hkpCompressedMeshShapeBuilder::Self *self, hkpCompressedMeshShapeBuilder::MappingTree::Self *a2)
{
  hkpCompressedMeshShapeBuilder::Self *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int *v6;
  bool isDegenerate;
  float *v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  uint32_t *v38;
  int v39;
  int result;
  int v41;
  int v42;
  int j;
  int v44;
  int i;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef float *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef float *_g4_t_v55;
  typedef float *_g4_t_v56;
  typedef hkVector4f::Self *_g4_t_v57;
  typedef hkVector4f::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef char _g4_t_v61[4];
  typedef float _g4_t_v62[4];
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef hkpCompressedMeshShapeBuilder::Self **_g4_t_v69;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v47)) > _g4_s1 ? (16u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v48)) > _g4_s2 ? (20u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v49)) > _g4_s3 ? (28u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v50)) > _g4_s4 ? (32u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v51)) > _g4_s5 ? (36u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v52)) > _g4_s6 ? (40u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v53)) > _g4_s7 ? (44u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v54)) > _g4_s8 ? (48u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v55)) > _g4_s9 ? (52u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v56)) > _g4_s10 ? (56u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v57)) > _g4_s11 ? (56u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v58)) > _g4_s12 ? (56u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v59)) > _g4_s13 ? (60u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v60)) > _g4_s14 ? (60u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v61)) > _g4_s15 ? (64u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v62)) > _g4_s16 ? (68u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v63)) > _g4_s17 ? (84u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v64)) > _g4_s18 ? (88u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v65)) > _g4_s19 ? (92u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v66)) > _g4_s20 ? (100u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v67)) > _g4_s21 ? (104u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v68)) > _g4_s22 ? (108u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v69)) > _g4_s23 ? (124u + sizeof(_g4_t_v69)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 84u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 88u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 92u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 100u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 104u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 108u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 124u);

  v69 = &self;
  v2 = self;
  v63 = 0;
  v48 = a2;
  v64 = 0;
  v65 = 0x80000000;
  if ( *((uint8_t *)self + 13) != 0 )
  {
    v41 = *((uint32_t *)self + 51);
    if ( v41 > 0 )
    {
      hkArrayUtil::reserve((hkArrayUtil::Self *)v61, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v63, v41, 4);
      v64 = v41;
      for ( i = 0; i < v64; ++i )
        *(uint32_t *)(v63 + 4 * i) = 0;
    }
    else
    {
      v64 = *((uint32_t *)self + 51);
    }
    v42 = *((uint32_t *)v2 + 65);
    for ( j = 80 * v42; *((uint32_t *)v2 + 15) > v42; *(uint32_t *)(v63 + 4 * v44) = -1 )
    {
      ++v42;
      v44 = *(uint32_t *)(*((uint32_t *)v2 + 14) + j + 16);
      j += 80;
    }
  }
  v3 = *((uint32_t *)v2 + 54);
  v4 = *((uint32_t **)v2 + 53);
  v66 = 0;
  v67 = 0;
  v68 = 0x80000000;
  v47 = v4;
  if ( v3 <= 0 )
  {
    v22 = 0;
  }
  else
  {
    v53 = 0;
    v59 = 0;
    while ( 1 )
    {
      v5 = *((uint32_t *)v2 + 50);
      v54 = 16 * v59;
      v6 = (int *)(&v4[4 * v59]);
      v51 = *v6;
      v50 = v6[1];
      v49 = v6[2];
      v52 = (float *)(16 * *v6 + v5);
      v55 = (float *)(16 * v49 + v5);
      LODWORD(v62[0]) = hkDefaultTriangleDegeneracyTolerance;
      v56 = (float *)(v5 + 16 * v50);
      isDegenerate = hkcdTriangleUtil::isDegenerate(v52, v56, v55, v62);
      v8 = v56;
      if ( isDegenerate )
      {
        ++*((uint32_t *)v2 + 33);
      }
      else
      {
        v57 = v48 != nullptr ? (hkVector4f::Self *)(*(uint32_t *)v48 + v53) : nullptr;
        if ( *((uint8_t *)v2 + 13) != 0
          && (*(uint32_t *)(v63 + 4 * v51) == -1 || *(uint32_t *)(v63 + 4 * v50) == -1 || *(uint32_t *)(v63 + 4 * v49) == -1) )
        {
          goto LABEL_22;
        }
        v9 = _mm_xor_ps(g4_m128_u32(0x7F7FFFEEu), *(__m128 *)&dword_1C7C1B0);
        v10 = v9;
        v11 = v9;
g4_m128_lane<float>(v9, 0) = fmaxf(fmaxf(fmaxf(g4_m128_lane<float>(v9, 0), *v52), *v8), *v55)
                       - fminf(fminf(fminf(3.40282e38f, *v52), *v8), *v55);
g4_m128_lane<float>(v10, 0) = fmaxf(fmaxf(fmaxf(g4_m128_lane<float>(v10, 0), v52[1]), v8[1]), v55[1])
                        - fminf(fminf(fminf(3.40282e38f, v52[1]), v8[1]), v55[1]);
g4_m128_lane<float>(v11, 0) = fmaxf(fmaxf(fmaxf(g4_m128_lane<float>(v11, 0), v52[2]), v8[2]), v55[2])
                        - fminf(fminf(fminf(3.40282e38f, v52[2]), v8[2]), v55[2]);
        v12 = _mm_and_ps(v9, *(__m128 *)&dword_1C7C1C0);
        v13 = _mm_and_ps(v10, *(__m128 *)&dword_1C7C1C0);
g4_m128_lane<int32_t>(v14, 0) = fabs(g4_m128_lane<float>(v11, 0));
        if (g4_m128_lane<float>(v13, 0) <g4_m128_lane<float>(v12, 0) )
        {
g4_m128_lane<int32_t>(v10, 0) =g4_m128_lane<int32_t>(v9, 0);
          v13 = v12;
        }
        v15 = _mm_cmpgt_ss(v13, v14);
        if ( COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v15, v11), 0) |g4_m128_lane<int32_t>(v10, 0) &g4_m128_lane<int32_t>(v15, 0)) > (float)(65534.0 * *(float *)v2) )
        {
LABEL_22:
          hkpCompressedMeshShapeBuilder::addLeftOverTriangle(
            v2,
            (hkVector4f::Self *)v52,
            (hkVector4f::Self *)v8,
            (hkVector4f::Self *)v55,
            *(uint32_t **)(*((uint32_t *)v2 + 53) + v54 + 12),
            v57);
        }
        else
        {
          v16 = *((uint32_t *)v2 + 53);
          v17 = v47 + 4;
          *v47 = *(uint32_t *)(v16 + 16 * v59);
          v47[1] = *(uint32_t *)(v16 + v54 + 4);
          v47[2] = *(uint32_t *)(v16 + v54 + 8);
          v47[3] = *(uint32_t *)(v16 + v54 + 12);
          if ( v48 != nullptr )
          {
            v18 = (uint32_t *)(*(uint32_t *)v48 + v53);
            v19 = v67;
            if ( v67 == (v68 & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v66,
                20,
                v46);
              v19 = v67;
              v17 = v47 + 4;
            }
            v20 = (uint32_t *)(v66 + 20 * v19);
            *v20 = *v18;
            v20[1] = v18[1];
            v20[2] = v18[2];
            v20[3] = v18[3];
            v20[4] = v18[4];
            ++v67;
          }
          v47 = v17;
        }
      }
      ++v59;
      v53 += 20;
      if ( *((uint32_t *)v2 + 54) <= v59 )
        break;
      v4 = *((uint32_t **)v2 + 53);
    }
    v21 = *((uint32_t *)v2 + 55) & 0x3FFFFFFF;
    v22 = ((int)(uintptr_t)(v47) - *((uint32_t *)v2 + 53)) >> 4;
    if ( v21 < v22 )
    {
      v23 = 2 * v21;
      if ( v23 < v22 )
        v23 = ((int)(uintptr_t)(v47) - *((uint32_t *)v2 + 53)) >> 4;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v61,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v2 + 53,
        v23,
        16);
    }
  }
  *((uint32_t *)v2 + 54) = v22;
  if ( v48 != nullptr )
  {
    v24 = *(uint32_t *)v48;
    *(uint32_t *)v48 = v66;
    v66 = v24;
    v25 = v67;
    v67 = *((uint32_t *)v48 + 1);
    *((uint32_t *)v48 + 1) = v25;
    v26 = *((uint32_t *)v48 + 2);
    *((uint32_t *)v48 + 2) = v68;
    v68 = v26;
  }
  if ( *((uint8_t *)v2 + 13) != 0 )
  {
    v27 = *((uint32_t *)v2 + 50);
    if ( *((int *)v2 + 51) <= 0 )
    {
      v32 = 0;
    }
    else
    {
      v28 = *((uint32_t *)v2 + 51);
      v58 = *((hkVector4f::Self **)v2 + 50);
      v29 = 0;
      v60 = 0;
      do
      {
        if ( *(uint32_t *)(v63 + 4 * v29) != -1 )
        {
          v27 += 16;
          v30 = (uint32_t *)((char *)v58 + 16 * v29);
          *(uint32_t *)(v27 - 16) = *v30;
          *(uint32_t *)(v27 - 12) = v30[1];
          *(uint32_t *)(v27 - 8) = v30[2];
          *(uint32_t *)(v27 - 4) = v30[3];
          *(uint32_t *)(v63 + 4 * v29) = v60;
          v58 = *((hkVector4f::Self **)v2 + 50);
          v28 = *((uint32_t *)v2 + 51);
          ++v60;
        }
        ++v29;
      }
      while ( v29 < v28 );
      v31 = *((uint32_t *)v2 + 52) & 0x3FFFFFFF;
      v32 = (v27 - (int)(uintptr_t)(v58)) >> 4;
      if ( v31 < v32 )
      {
        v33 = 2 * v31;
        if ( v33 < v32 )
          v33 = (v27 - (int)(uintptr_t)(v58)) >> 4;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v61,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)v2 + 50,
          v33,
          16);
      }
    }
    v34 = *((uint32_t *)v2 + 54);
    *((uint32_t *)v2 + 51) = v32;
    if ( v34 > 0 )
    {
      v35 = v63;
      v36 = 0;
      do
      {
        v37 = v36++;
        v38 = (uint32_t *)(*((uint32_t *)v2 + 53) + 16 * v37);
        v39 = v38[1];
        *v38 = *(uint32_t *)(v35 + 4 * *v38);
        v35 = v63;
        v38[1] = *(uint32_t *)(v63 + 4 * v39);
        v38[2] = *(uint32_t *)(v35 + 4 * v38[2]);
      }
      while ( *((uint32_t *)v2 + 54) > v36 );
    }
  }
  v67 = 0;
  if ( v68 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v66,
      20 * v68);
  result = v65;
  v66 = 0;
  v68 = 0x80000000;
  v64 = 0;
  if ( v65 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v63,
             4 * v65);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::snapGeometry  (binary VA: 0x1ae2630)
// Original: hkpCompressedMeshShapeBuilder::snapGeometry
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::snapGeometry(hkpCompressedMeshShapeBuilder::Self *self, hkpCompressedMeshShapeBuilder::MappingTree::Self *a2)
{
  int v2; // xmm0_4
  int result;
  uint32_t *v4;
  float *v5;
  uint32_t *v6;
  int v7;
  __m128i v8;
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  __m128i v15;
  float v16; // xmm5_4
  float v17; // xmm0_4
  __m128i v18;
  float v19; // xmm4_4
  int v20;
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm7_4
  float v25; // xmm5_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  int v31;
  int v32;
  int v33;
  int v34;
  hkpCompressedMeshShapeBuilder::MappingTree::Self *i;
  uint32_t *v36;
  uint32_t *v37;
  int v38;
  int v39;
  int v40;
  typedef float _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef float _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef float _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v55;
  typedef hkTjunctionDetector::Self *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v41)) > _g4_s0 ? (4u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v42)) > _g4_s1 ? (12u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v43)) > _g4_s2 ? (44u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v44)) > _g4_s3 ? (44u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v45)) > _g4_s4 ? (44u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v46)) > _g4_s5 ? (44u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v47)) > _g4_s6 ? (44u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v48)) > _g4_s7 ? (48u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v49)) > _g4_s8 ? (48u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v50)) > _g4_s9 ? (48u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v51)) > _g4_s10 ? (48u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v52)) > _g4_s11 ? (48u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v53)) > _g4_s12 ? (52u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v54)) > _g4_s13 ? (56u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v55)) > _g4_s14 ? (56u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v56)) > _g4_s15 ? (60u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v57)) > _g4_s16 ? (60u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v58)) > _g4_s17 ? (64u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v59)) > _g4_s18 ? (68u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v60)) > _g4_s19 ? (72u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v61)) > _g4_s20 ? (80u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v62)) > _g4_s21 ? (84u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v63)) > _g4_s22 ? (88u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v64)) > _g4_s23 ? (96u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v65)) > _g4_s24 ? (100u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v66)) > _g4_s25 ? (104u + sizeof(_g4_t_v66)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 72u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 84u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 100u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 104u);

  if ( *((uint8_t *)self + 12) != 0 )
  {
    if ( a2 != nullptr )
    {
      v58 = 0;
      v56 = (hkTjunctionDetector::Self *)((hkpCompressedMeshShapeBuilder::Self *)((char *)self + 192));
      v59 = 0;
      v41 = *((float *)self + 5);
      v60 = 0x80000000;
      v61 = 0;
      v62 = 0;
      v63 = 0x80000000;
      v64 = 0;
      v65 = 0;
      v66 = 0x80000000;
      hkGeometryUtils::weldVertices((uint32_t *)self + 48, v41, 0, &v58, &v61);
      v33 = 0;
      v34 = v65;
      for ( i = a2; v62 > v33; ++v65 )
      {
        while ( *(uint32_t *)(v61 + 4 * v33) == -1 )
        {
          ++v33;
          ++*((uint32_t *)self + 33);
          if ( v62 <= v33 )
            goto LABEL_25;
        }
        v36 = (uint32_t *)(*(uint32_t *)i + 20 * v33);
        if ( (v66 & 0x3FFFFFFF) == v34 )
        {
          v55 = i;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v64,
            20,
            v42);
          v34 = v65;
          i = v55;
        }
        ++v33;
        v37 = (uint32_t *)(v64 + 20 * v34);
        *v37 = *v36;
        v37[1] = v36[1];
        v37[2] = v36[2];
        v37[3] = v36[3];
        v37[4] = v36[4];
        v34 = v65 + 1;
      }
LABEL_25:
      v38 = v64;
      *((uint32_t *)i + 1) = v34;
      v39 = *((uint32_t *)i + 2);
      v40 = *(uint32_t *)i;
      *(uint32_t *)i = v38;
      v64 = v40;
      *((uint32_t *)i + 2) = v66;
      v66 = v39;
      v65 = 0;
      if ( v39 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v40,
          20 * v39);
      v64 = 0;
      v66 = 0x80000000;
      v62 = 0;
      if ( v63 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v61,
          4 * v63);
      v61 = 0;
      v63 = 0x80000000;
      v59 = 0;
      if ( v60 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v58,
          4 * v60);
    }
    else
    {
      v56 = (hkTjunctionDetector::Self *)((hkpCompressedMeshShapeBuilder::Self *)((char *)self + 192));
      hkGeometryUtils::weldVertices((hkpCompressedMeshShapeBuilder::Self *)((char *)self + 192), *((hkGeometry::Self **)self + 5));
    }
  }
  else
  {
    v56 = (hkTjunctionDetector::Self *)((hkpCompressedMeshShapeBuilder::Self *)((char *)self + 192));
  }
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 65) = *((uint32_t *)self + 15);
  hkTjunctionDetector::detect(v56, (int)(uintptr_t)(self) + 56, (int)(uintptr_t)(self) + 68, *((hkVector4f::Self **)self + 4), v2);
  hkpCompressedMeshShapeBuilder::snapGeometry(v56, *(hkGeometry::Self **)self);
  result = *((uint32_t *)self + 65);
  v53 = result;
  if ( result < *((uint32_t *)self + 15) )
  {
    v54 = 80 * result;
    result = (int)(uintptr_t)(self);
    do
    {
      v4 = (uint32_t *)(*(uint32_t *)(result + 56) + v54);
      v48 = *(uint32_t *)(result + 200);
      v5 = (float *)(v48 + 16 * v4[4]);
      v6 = (uint32_t *)(*((uint32_t *)self + 53) + 16 * v4[5]);
      v57 = v48 + 16 * *v6;
      v31 = 16 * v6[1] + v48;
      v32 = 16 * v6[2] + v48;
      v7 = v4[6];
      switch ( v7 )
      {
        case 4:
g4_m128_raw(v8) = *(unsigned int *)(v31 + 4);
          v9 = *(float *)(v57 + 4);
          v49 = *(float *)(v57 + 8);
          *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) - v9;
          v10 = *(float *)(v31 + 8) - v49;
          v11 = *(float *)v31 - *(float *)v57;
          v12 = *(float *)v32 - *(float *)v57;
          v13 = *(float *)(v32 + 4) - v9;
          v14 = *(float *)(v32 + 8) - v49;
          v15 = v8;
          *(float *)g4_m128_ptr<int32_t>(v15) = (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v14) - (float)(v10 * v13);
          v16 = (float)(v10 * v12) - (float)(v14 * v11);
          v17 = (float)(v13 * v11) - (float)(v12 * *(float *)g4_m128_ptr<int32_t>(v8));
          v18 = v15;
          *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15))
                                          + (float)(v16 * v16))
                                  + (float)(v17 * v17);
          if ( *(float *)g4_m128_ptr<int32_t>(v18) <= 0.0 )
          {
            v23 = 0.0;
            v44 = 0.0;
          }
          else
          {
            v19 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v18);
            v43 = 1597463174 - (_mm_cvtsi128_si32(v18) >> 1);
            v20 = (_mm_cvtsi128_si32(v18) + 2139095040) >> 31;
            v21 = (float)(COERCE_FLOAT(v20 & v43) * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * COERCE_FLOAT(v20 & v43))
                        * (float)(COERCE_FLOAT(v20 & v43) * COERCE_FLOAT(v20 & v43)));
            v22 = (float)(v21 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * v21) * (float)(v21 * v21));
            v23 = (float)(1.5 * v22) - (float)((float)(v19 * v22) * (float)(v22 * v22));
            v44 = 0.0 * v23;
          }
          v24 = *(float *)g4_m128_ptr<int32_t>(v15) * v23;
          v25 = v16 * v23;
          v26 = v23 * v17;
          v27 = (float)((float)((float)(*v5 - *(float *)v57) * v24) + (float)((float)(v5[1] - *(float *)(v57 + 4)) * v25))
              + (float)((float)(v5[2] - v49) * v26);
          v28 = v5[1] - (float)(v25 * v27);
          v29 = v5[2] - (float)(v26 * v27);
          v30 = v5[3] - (float)(v27 * v44);
          *v5 = *v5 - (float)(v24 * v27);
          v5[1] = v28;
          v5[2] = v29;
          v5[3] = v30;
          break;
        case 1:
          v45 = v32;
          v50 = v31;
          projectOnEdge((hkVector4f::Self *)v5, (const hkVector4f::Self *)v57, (const hkVector4f::Self *)v31);
          v31 = v50;
          v32 = v45;
          break;
        case 2:
          v46 = v32;
          v51 = v31;
          projectOnEdge((hkVector4f::Self *)v5, (const hkVector4f::Self *)v31, (const hkVector4f::Self *)v32);
          v31 = v51;
          v32 = v46;
          break;
        case 3:
          v47 = v31;
          v52 = v32;
          projectOnEdge((hkVector4f::Self *)v5, (const hkVector4f::Self *)v32, (const hkVector4f::Self *)v57);
          v31 = v47;
          v32 = v52;
          break;
        default:
          break;
      }
      *v4 = *(uint32_t *)v5;
      v4[1] = *((uint32_t *)v5 + 1);
      v4[2] = *((uint32_t *)v5 + 2);
      v4[3] = *((uint32_t *)v5 + 3);
      v4[8] = *(uint32_t *)v57;
      v4[9] = *(uint32_t *)(v57 + 4);
      v4[10] = *(uint32_t *)(v57 + 8);
      v4[11] = *(uint32_t *)(v57 + 12);
      v4[12] = *(uint32_t *)v31;
      v4[13] = *(uint32_t *)(v31 + 4);
      v4[14] = *(uint32_t *)(v31 + 8);
      v4[15] = *(uint32_t *)(v31 + 12);
      v4[16] = *(uint32_t *)v32;
      v4[17] = *(uint32_t *)(v32 + 4);
      v4[18] = *(uint32_t *)(v32 + 8);
      v4[19] = *(uint32_t *)(v32 + 12);
      ++v53;
      result = (int)(uintptr_t)(self);
      v54 += 80;
    }
    while ( *((uint32_t *)self + 15) > v53 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::addGeometry  (binary VA: 0x1ae2c90)
// Original: hkpCompressedMeshShapeBuilder::addGeometry
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::addGeometry(hkpCompressedMeshShapeBuilder::Self *self, const hkGeometry::Self *a2, const hkMatrix4f::Self *a3, hkpCompressedMeshShape::Self *a4)
{
  hkpCompressedMeshShapeBuilder::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  hkpCompressedMeshShapeBuilder::Self *v22;
  int v23;
  hkpCompressedMeshShapeBuilder::Self *v24;
  int result;
  int v26;
  hkMatrix4f::Self **v27;
  hkMatrix4f::Self *v28;
  hkMatrix4f::Self *v29;
  int v30;
  hkpCompressedMeshShapeBuilder::MappingTree::Self **v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  int v35;
  uint32_t *v36;
  uint32_t *v37;
  int v38;
  int v39;
  uint32_t *v40;
  uint32_t *v41;
  int v42;
  uint32_t *v43;
  uint32_t *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  hkpCompressedMeshShapeBuilder::Self *v50;
  hkMatrix4f::Self *v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  int v55;
  uint32_t *v56;
  uint32_t *v57;
  int v58;
  int v59;
  uint32_t *v60;
  uint32_t *v61;
  int v62;
  uint32_t *v63;
  uint32_t *v64;
  int v65;
  int v66;
  int v67;
  uint32_t *v68;
  uint32_t *v69;
  uint32_t *v70;
  int v71;
  uint32_t *v72;
  uint32_t *v73;
  int v74;
  int v75;
  uint32_t *v76;
  uint32_t *v77;
  int v78;
  uint32_t *v79;
  uint32_t *v80;
  int v81;
  int v82;
  int v83;
  int v84;
  hkMatrix4f::Self *v85;
  uint32_t *v86;
  uint32_t *v87;
  uint32_t *v88;
  int v89;
  uint32_t *v90;
  uint32_t *v91;
  int v92;
  int v93;
  uint32_t *v94;
  uint32_t *v95;
  int v96;
  uint32_t *v97;
  uint32_t *v98;
  int v99;
  int v100;
  int v101;
  uint32_t *v102;
  uint32_t *v103;
  uint32_t *v104;
  int v105;
  uint32_t *v106;
  uint32_t *v107;
  int v108;
  int v109;
  uint32_t *v110;
  uint32_t *v111;
  int v112;
  uint32_t *v113;
  uint32_t *v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  uint32_t *v121;
  uint32_t *address;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  uint32_t *v132;
  uint32_t *v133;
  int v134;
  int v135;
  typedef hkVector4f::Self *_g4_t_v136;
  typedef uint32_t *_g4_t_v137;
  typedef uint32_t *_g4_t_v138;
  typedef uint32_t *_g4_t_v139;
  typedef uint32_t *_g4_t_v140;
  typedef uint32_t *_g4_t_v141;
  typedef uint32_t *_g4_t_v142;
  typedef uint32_t *_g4_t_v143;
  typedef uint32_t *_g4_t_v144;
  typedef uint32_t *_g4_t_v145;
  typedef uint32_t *_g4_t_v146;
  typedef uint32_t *_g4_t_v147;
  typedef uint32_t *_g4_t_v148;
  typedef uint32_t *_g4_t_v149;
  typedef uint32_t *_g4_t_v150;
  typedef uint32_t *_g4_t_v151;
  typedef uint32_t *_g4_t_v152;
  typedef uint32_t *_g4_t_v153;
  typedef uint32_t *_g4_t_v154;
  typedef uint32_t *_g4_t_v155;
  typedef uint32_t *_g4_t_v156;
  typedef uint32_t *_g4_t_v157;
  typedef uint32_t *_g4_t_v158;
  typedef uint32_t *_g4_t_v159;
  typedef uint32_t *_g4_t_v160;
  typedef uint32_t *_g4_t_v161;
  typedef uint32_t *_g4_t_v162;
  typedef uint32_t *_g4_t_v163;
  typedef uint32_t *_g4_t_v164;
  typedef uint32_t *_g4_t_v165;
  typedef uint32_t *_g4_t_v166;
  typedef uint32_t *_g4_t_v167;
  typedef uint32_t *_g4_t_v168;
  typedef uint32_t *_g4_t_v169;
  typedef uint32_t *_g4_t_v170;
  typedef uint32_t *_g4_t_v171;
  typedef uint32_t *_g4_t_v172;
  typedef uint32_t *_g4_t_v173;
  typedef uint32_t *_g4_t_v174;
  typedef uint32_t *_g4_t_v175;
  typedef uint32_t *_g4_t_v176;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v177;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v178;
  typedef uint32_t *_g4_t_v179;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v180;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v181;
  typedef uint32_t *_g4_t_v182;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v183;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v184;
  typedef uint32_t *_g4_t_v185;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v186;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v187;
  typedef uint32_t *_g4_t_v188;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v189;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v190;
  typedef uint32_t *_g4_t_v191;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v192;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v193;
  typedef uint32_t *_g4_t_v194;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v195;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v196;
  typedef uint32_t *_g4_t_v197;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v198;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v199;
  typedef uint32_t *_g4_t_v200;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v201;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v202;
  typedef uint32_t *_g4_t_v203;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v204;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v205;
  typedef uint32_t *_g4_t_v206;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v207;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v208;
  typedef uint32_t *_g4_t_v209;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v210;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v211;
  typedef uint32_t *_g4_t_v212;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v213;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v214;
  typedef uint32_t *_g4_t_v215;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v216;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v217;
  typedef uint32_t *_g4_t_v218;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v219;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v220;
  typedef uint32_t *_g4_t_v221;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v222;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v223;
  typedef uint32_t *_g4_t_v224;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v225;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v226;
  typedef uint32_t *_g4_t_v227;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v228;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v229;
  typedef uint32_t *_g4_t_v230;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v231;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v232;
  typedef uint32_t *_g4_t_v233;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v234;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v235;
  typedef uint32_t *_g4_t_v236;
  typedef uint32_t *_g4_t_v237;
  typedef uint32_t *_g4_t_v238;
  typedef uint32_t *_g4_t_v239;
  typedef uint32_t *_g4_t_v240;
  typedef uint32_t *_g4_t_v241;
  typedef uint32_t *_g4_t_v242;
  typedef uint32_t *_g4_t_v243;
  typedef uint32_t *_g4_t_v244;
  typedef uint32_t *_g4_t_v245;
  typedef uint32_t *_g4_t_v246;
  typedef hkMatrix4f::Self *_g4_t_v247;
  typedef hkMatrix4f::Self *_g4_t_v248;
  typedef hkpCompressedMeshShapeBuilder::MappingTree::Self *_g4_t_v249;
  typedef uint32_t *_g4_t_v250;
  typedef uint32_t *_g4_t_v251;
  typedef uint32_t *_g4_t_v252;
  typedef uint32_t *_g4_t_v253;
  typedef uint32_t *_g4_t_v254;
  typedef hkMatrix4f::Self *_g4_t_v255;
  typedef hkMatrix4f::Self *_g4_t_v256;
  typedef hkMatrix4f::Self *_g4_t_v257;
  typedef hkMatrix4f::Self *_g4_t_v258;
  typedef hkMatrix4f::Self *_g4_t_v259;
  typedef hkMatrix4f::Self *_g4_t_v260;
  typedef hkMatrix4f::Self *_g4_t_v261;
  typedef hkMatrix4f::Self *_g4_t_v262;
  typedef hkpCompressedMeshShapeBuilder::Self *_g4_t_v263;
  typedef hkpCompressedMeshShapeBuilder::Self *_g4_t_v264;
  typedef hkpCompressedMeshShapeBuilder::Self *_g4_t_v265;
  typedef hkpCompressedMeshShape::Self *_g4_t_v266;
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef const hkGeometry::Self *_g4_t_v270;
  typedef uint32_t *_g4_t_v271;
  typedef int *_g4_t_v272;
  typedef char _g4_t_v273[4];
  typedef uint32_t _g4_t_v274[18];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v136)) > _g4_s0 ? (12u + sizeof(_g4_t_v136)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v137)) > _g4_s1 ? (32u + sizeof(_g4_t_v137)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v138)) > _g4_s2 ? (32u + sizeof(_g4_t_v138)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v139)) > _g4_s3 ? (32u + sizeof(_g4_t_v139)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v140)) > _g4_s4 ? (32u + sizeof(_g4_t_v140)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v141)) > _g4_s5 ? (32u + sizeof(_g4_t_v141)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v142)) > _g4_s6 ? (32u + sizeof(_g4_t_v142)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v143)) > _g4_s7 ? (32u + sizeof(_g4_t_v143)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v144)) > _g4_s8 ? (32u + sizeof(_g4_t_v144)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v145)) > _g4_s9 ? (32u + sizeof(_g4_t_v145)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v146)) > _g4_s10 ? (32u + sizeof(_g4_t_v146)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v147)) > _g4_s11 ? (32u + sizeof(_g4_t_v147)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v148)) > _g4_s12 ? (32u + sizeof(_g4_t_v148)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v149)) > _g4_s13 ? (32u + sizeof(_g4_t_v149)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v150)) > _g4_s14 ? (32u + sizeof(_g4_t_v150)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v151)) > _g4_s15 ? (32u + sizeof(_g4_t_v151)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v152)) > _g4_s16 ? (32u + sizeof(_g4_t_v152)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v153)) > _g4_s17 ? (32u + sizeof(_g4_t_v153)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v154)) > _g4_s18 ? (32u + sizeof(_g4_t_v154)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v155)) > _g4_s19 ? (32u + sizeof(_g4_t_v155)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v156)) > _g4_s20 ? (32u + sizeof(_g4_t_v156)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v157)) > _g4_s21 ? (32u + sizeof(_g4_t_v157)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v158)) > _g4_s22 ? (32u + sizeof(_g4_t_v158)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v159)) > _g4_s23 ? (32u + sizeof(_g4_t_v159)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v160)) > _g4_s24 ? (32u + sizeof(_g4_t_v160)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v161)) > _g4_s25 ? (32u + sizeof(_g4_t_v161)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v162)) > _g4_s26 ? (32u + sizeof(_g4_t_v162)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v163)) > _g4_s27 ? (32u + sizeof(_g4_t_v163)) : _g4_s27,
    _g4_s29 = (32u + sizeof(_g4_t_v164)) > _g4_s28 ? (32u + sizeof(_g4_t_v164)) : _g4_s28,
    _g4_s30 = (32u + sizeof(_g4_t_v165)) > _g4_s29 ? (32u + sizeof(_g4_t_v165)) : _g4_s29,
    _g4_s31 = (32u + sizeof(_g4_t_v166)) > _g4_s30 ? (32u + sizeof(_g4_t_v166)) : _g4_s30,
    _g4_s32 = (32u + sizeof(_g4_t_v167)) > _g4_s31 ? (32u + sizeof(_g4_t_v167)) : _g4_s31,
    _g4_s33 = (32u + sizeof(_g4_t_v168)) > _g4_s32 ? (32u + sizeof(_g4_t_v168)) : _g4_s32,
    _g4_s34 = (32u + sizeof(_g4_t_v169)) > _g4_s33 ? (32u + sizeof(_g4_t_v169)) : _g4_s33,
    _g4_s35 = (32u + sizeof(_g4_t_v170)) > _g4_s34 ? (32u + sizeof(_g4_t_v170)) : _g4_s34,
    _g4_s36 = (32u + sizeof(_g4_t_v171)) > _g4_s35 ? (32u + sizeof(_g4_t_v171)) : _g4_s35,
    _g4_s37 = (32u + sizeof(_g4_t_v172)) > _g4_s36 ? (32u + sizeof(_g4_t_v172)) : _g4_s36,
    _g4_s38 = (32u + sizeof(_g4_t_v173)) > _g4_s37 ? (32u + sizeof(_g4_t_v173)) : _g4_s37,
    _g4_s39 = (32u + sizeof(_g4_t_v174)) > _g4_s38 ? (32u + sizeof(_g4_t_v174)) : _g4_s38,
    _g4_s40 = (32u + sizeof(_g4_t_v175)) > _g4_s39 ? (32u + sizeof(_g4_t_v175)) : _g4_s39,
    _g4_s41 = (32u + sizeof(_g4_t_v176)) > _g4_s40 ? (32u + sizeof(_g4_t_v176)) : _g4_s40,
    _g4_s42 = (36u + sizeof(_g4_t_v177)) > _g4_s41 ? (36u + sizeof(_g4_t_v177)) : _g4_s41,
    _g4_s43 = (36u + sizeof(_g4_t_v178)) > _g4_s42 ? (36u + sizeof(_g4_t_v178)) : _g4_s42,
    _g4_s44 = (36u + sizeof(_g4_t_v179)) > _g4_s43 ? (36u + sizeof(_g4_t_v179)) : _g4_s43,
    _g4_s45 = (36u + sizeof(_g4_t_v180)) > _g4_s44 ? (36u + sizeof(_g4_t_v180)) : _g4_s44,
    _g4_s46 = (36u + sizeof(_g4_t_v181)) > _g4_s45 ? (36u + sizeof(_g4_t_v181)) : _g4_s45,
    _g4_s47 = (36u + sizeof(_g4_t_v182)) > _g4_s46 ? (36u + sizeof(_g4_t_v182)) : _g4_s46,
    _g4_s48 = (36u + sizeof(_g4_t_v183)) > _g4_s47 ? (36u + sizeof(_g4_t_v183)) : _g4_s47,
    _g4_s49 = (36u + sizeof(_g4_t_v184)) > _g4_s48 ? (36u + sizeof(_g4_t_v184)) : _g4_s48,
    _g4_s50 = (36u + sizeof(_g4_t_v185)) > _g4_s49 ? (36u + sizeof(_g4_t_v185)) : _g4_s49,
    _g4_s51 = (36u + sizeof(_g4_t_v186)) > _g4_s50 ? (36u + sizeof(_g4_t_v186)) : _g4_s50,
    _g4_s52 = (36u + sizeof(_g4_t_v187)) > _g4_s51 ? (36u + sizeof(_g4_t_v187)) : _g4_s51,
    _g4_s53 = (36u + sizeof(_g4_t_v188)) > _g4_s52 ? (36u + sizeof(_g4_t_v188)) : _g4_s52,
    _g4_s54 = (36u + sizeof(_g4_t_v189)) > _g4_s53 ? (36u + sizeof(_g4_t_v189)) : _g4_s53,
    _g4_s55 = (36u + sizeof(_g4_t_v190)) > _g4_s54 ? (36u + sizeof(_g4_t_v190)) : _g4_s54,
    _g4_s56 = (36u + sizeof(_g4_t_v191)) > _g4_s55 ? (36u + sizeof(_g4_t_v191)) : _g4_s55,
    _g4_s57 = (36u + sizeof(_g4_t_v192)) > _g4_s56 ? (36u + sizeof(_g4_t_v192)) : _g4_s56,
    _g4_s58 = (36u + sizeof(_g4_t_v193)) > _g4_s57 ? (36u + sizeof(_g4_t_v193)) : _g4_s57,
    _g4_s59 = (36u + sizeof(_g4_t_v194)) > _g4_s58 ? (36u + sizeof(_g4_t_v194)) : _g4_s58,
    _g4_s60 = (36u + sizeof(_g4_t_v195)) > _g4_s59 ? (36u + sizeof(_g4_t_v195)) : _g4_s59,
    _g4_s61 = (36u + sizeof(_g4_t_v196)) > _g4_s60 ? (36u + sizeof(_g4_t_v196)) : _g4_s60,
    _g4_s62 = (36u + sizeof(_g4_t_v197)) > _g4_s61 ? (36u + sizeof(_g4_t_v197)) : _g4_s61,
    _g4_s63 = (36u + sizeof(_g4_t_v198)) > _g4_s62 ? (36u + sizeof(_g4_t_v198)) : _g4_s62,
    _g4_s64 = (36u + sizeof(_g4_t_v199)) > _g4_s63 ? (36u + sizeof(_g4_t_v199)) : _g4_s63,
    _g4_s65 = (36u + sizeof(_g4_t_v200)) > _g4_s64 ? (36u + sizeof(_g4_t_v200)) : _g4_s64,
    _g4_s66 = (36u + sizeof(_g4_t_v201)) > _g4_s65 ? (36u + sizeof(_g4_t_v201)) : _g4_s65,
    _g4_s67 = (36u + sizeof(_g4_t_v202)) > _g4_s66 ? (36u + sizeof(_g4_t_v202)) : _g4_s66,
    _g4_s68 = (36u + sizeof(_g4_t_v203)) > _g4_s67 ? (36u + sizeof(_g4_t_v203)) : _g4_s67,
    _g4_s69 = (36u + sizeof(_g4_t_v204)) > _g4_s68 ? (36u + sizeof(_g4_t_v204)) : _g4_s68,
    _g4_s70 = (36u + sizeof(_g4_t_v205)) > _g4_s69 ? (36u + sizeof(_g4_t_v205)) : _g4_s69,
    _g4_s71 = (36u + sizeof(_g4_t_v206)) > _g4_s70 ? (36u + sizeof(_g4_t_v206)) : _g4_s70,
    _g4_s72 = (36u + sizeof(_g4_t_v207)) > _g4_s71 ? (36u + sizeof(_g4_t_v207)) : _g4_s71,
    _g4_s73 = (36u + sizeof(_g4_t_v208)) > _g4_s72 ? (36u + sizeof(_g4_t_v208)) : _g4_s72,
    _g4_s74 = (36u + sizeof(_g4_t_v209)) > _g4_s73 ? (36u + sizeof(_g4_t_v209)) : _g4_s73,
    _g4_s75 = (36u + sizeof(_g4_t_v210)) > _g4_s74 ? (36u + sizeof(_g4_t_v210)) : _g4_s74,
    _g4_s76 = (36u + sizeof(_g4_t_v211)) > _g4_s75 ? (36u + sizeof(_g4_t_v211)) : _g4_s75,
    _g4_s77 = (36u + sizeof(_g4_t_v212)) > _g4_s76 ? (36u + sizeof(_g4_t_v212)) : _g4_s76,
    _g4_s78 = (36u + sizeof(_g4_t_v213)) > _g4_s77 ? (36u + sizeof(_g4_t_v213)) : _g4_s77,
    _g4_s79 = (36u + sizeof(_g4_t_v214)) > _g4_s78 ? (36u + sizeof(_g4_t_v214)) : _g4_s78,
    _g4_s80 = (36u + sizeof(_g4_t_v215)) > _g4_s79 ? (36u + sizeof(_g4_t_v215)) : _g4_s79,
    _g4_s81 = (36u + sizeof(_g4_t_v216)) > _g4_s80 ? (36u + sizeof(_g4_t_v216)) : _g4_s80,
    _g4_s82 = (36u + sizeof(_g4_t_v217)) > _g4_s81 ? (36u + sizeof(_g4_t_v217)) : _g4_s81,
    _g4_s83 = (36u + sizeof(_g4_t_v218)) > _g4_s82 ? (36u + sizeof(_g4_t_v218)) : _g4_s82,
    _g4_s84 = (36u + sizeof(_g4_t_v219)) > _g4_s83 ? (36u + sizeof(_g4_t_v219)) : _g4_s83,
    _g4_s85 = (36u + sizeof(_g4_t_v220)) > _g4_s84 ? (36u + sizeof(_g4_t_v220)) : _g4_s84,
    _g4_s86 = (36u + sizeof(_g4_t_v221)) > _g4_s85 ? (36u + sizeof(_g4_t_v221)) : _g4_s85,
    _g4_s87 = (36u + sizeof(_g4_t_v222)) > _g4_s86 ? (36u + sizeof(_g4_t_v222)) : _g4_s86,
    _g4_s88 = (36u + sizeof(_g4_t_v223)) > _g4_s87 ? (36u + sizeof(_g4_t_v223)) : _g4_s87,
    _g4_s89 = (36u + sizeof(_g4_t_v224)) > _g4_s88 ? (36u + sizeof(_g4_t_v224)) : _g4_s88,
    _g4_s90 = (36u + sizeof(_g4_t_v225)) > _g4_s89 ? (36u + sizeof(_g4_t_v225)) : _g4_s89,
    _g4_s91 = (36u + sizeof(_g4_t_v226)) > _g4_s90 ? (36u + sizeof(_g4_t_v226)) : _g4_s90,
    _g4_s92 = (36u + sizeof(_g4_t_v227)) > _g4_s91 ? (36u + sizeof(_g4_t_v227)) : _g4_s91,
    _g4_s93 = (36u + sizeof(_g4_t_v228)) > _g4_s92 ? (36u + sizeof(_g4_t_v228)) : _g4_s92,
    _g4_s94 = (36u + sizeof(_g4_t_v229)) > _g4_s93 ? (36u + sizeof(_g4_t_v229)) : _g4_s93,
    _g4_s95 = (36u + sizeof(_g4_t_v230)) > _g4_s94 ? (36u + sizeof(_g4_t_v230)) : _g4_s94,
    _g4_s96 = (36u + sizeof(_g4_t_v231)) > _g4_s95 ? (36u + sizeof(_g4_t_v231)) : _g4_s95,
    _g4_s97 = (36u + sizeof(_g4_t_v232)) > _g4_s96 ? (36u + sizeof(_g4_t_v232)) : _g4_s96,
    _g4_s98 = (36u + sizeof(_g4_t_v233)) > _g4_s97 ? (36u + sizeof(_g4_t_v233)) : _g4_s97,
    _g4_s99 = (36u + sizeof(_g4_t_v234)) > _g4_s98 ? (36u + sizeof(_g4_t_v234)) : _g4_s98,
    _g4_s100 = (36u + sizeof(_g4_t_v235)) > _g4_s99 ? (36u + sizeof(_g4_t_v235)) : _g4_s99,
    _g4_s101 = (36u + sizeof(_g4_t_v236)) > _g4_s100 ? (36u + sizeof(_g4_t_v236)) : _g4_s100,
    _g4_s102 = (40u + sizeof(_g4_t_v237)) > _g4_s101 ? (40u + sizeof(_g4_t_v237)) : _g4_s101,
    _g4_s103 = (40u + sizeof(_g4_t_v238)) > _g4_s102 ? (40u + sizeof(_g4_t_v238)) : _g4_s102,
    _g4_s104 = (40u + sizeof(_g4_t_v239)) > _g4_s103 ? (40u + sizeof(_g4_t_v239)) : _g4_s103,
    _g4_s105 = (40u + sizeof(_g4_t_v240)) > _g4_s104 ? (40u + sizeof(_g4_t_v240)) : _g4_s104,
    _g4_s106 = (40u + sizeof(_g4_t_v241)) > _g4_s105 ? (40u + sizeof(_g4_t_v241)) : _g4_s105,
    _g4_s107 = (40u + sizeof(_g4_t_v242)) > _g4_s106 ? (40u + sizeof(_g4_t_v242)) : _g4_s106,
    _g4_s108 = (40u + sizeof(_g4_t_v243)) > _g4_s107 ? (40u + sizeof(_g4_t_v243)) : _g4_s107,
    _g4_s109 = (40u + sizeof(_g4_t_v244)) > _g4_s108 ? (40u + sizeof(_g4_t_v244)) : _g4_s108,
    _g4_s110 = (40u + sizeof(_g4_t_v245)) > _g4_s109 ? (40u + sizeof(_g4_t_v245)) : _g4_s109,
    _g4_s111 = (40u + sizeof(_g4_t_v246)) > _g4_s110 ? (40u + sizeof(_g4_t_v246)) : _g4_s110,
    _g4_s112 = (44u + sizeof(_g4_t_v247)) > _g4_s111 ? (44u + sizeof(_g4_t_v247)) : _g4_s111,
    _g4_s113 = (44u + sizeof(_g4_t_v248)) > _g4_s112 ? (44u + sizeof(_g4_t_v248)) : _g4_s112,
    _g4_s114 = (44u + sizeof(_g4_t_v249)) > _g4_s113 ? (44u + sizeof(_g4_t_v249)) : _g4_s113,
    _g4_s115 = (44u + sizeof(_g4_t_v250)) > _g4_s114 ? (44u + sizeof(_g4_t_v250)) : _g4_s114,
    _g4_s116 = (44u + sizeof(_g4_t_v251)) > _g4_s115 ? (44u + sizeof(_g4_t_v251)) : _g4_s115,
    _g4_s117 = (44u + sizeof(_g4_t_v252)) > _g4_s116 ? (44u + sizeof(_g4_t_v252)) : _g4_s116,
    _g4_s118 = (44u + sizeof(_g4_t_v253)) > _g4_s117 ? (44u + sizeof(_g4_t_v253)) : _g4_s117,
    _g4_s119 = (44u + sizeof(_g4_t_v254)) > _g4_s118 ? (44u + sizeof(_g4_t_v254)) : _g4_s118,
    _g4_s120 = (48u + sizeof(_g4_t_v255)) > _g4_s119 ? (48u + sizeof(_g4_t_v255)) : _g4_s119,
    _g4_s121 = (48u + sizeof(_g4_t_v256)) > _g4_s120 ? (48u + sizeof(_g4_t_v256)) : _g4_s120,
    _g4_s122 = (48u + sizeof(_g4_t_v257)) > _g4_s121 ? (48u + sizeof(_g4_t_v257)) : _g4_s121,
    _g4_s123 = (48u + sizeof(_g4_t_v258)) > _g4_s122 ? (48u + sizeof(_g4_t_v258)) : _g4_s122,
    _g4_s124 = (48u + sizeof(_g4_t_v259)) > _g4_s123 ? (48u + sizeof(_g4_t_v259)) : _g4_s123,
    _g4_s125 = (48u + sizeof(_g4_t_v260)) > _g4_s124 ? (48u + sizeof(_g4_t_v260)) : _g4_s124,
    _g4_s126 = (48u + sizeof(_g4_t_v261)) > _g4_s125 ? (48u + sizeof(_g4_t_v261)) : _g4_s125,
    _g4_s127 = (48u + sizeof(_g4_t_v262)) > _g4_s126 ? (48u + sizeof(_g4_t_v262)) : _g4_s126,
    _g4_s128 = (52u + sizeof(_g4_t_v263)) > _g4_s127 ? (52u + sizeof(_g4_t_v263)) : _g4_s127,
    _g4_s129 = (52u + sizeof(_g4_t_v264)) > _g4_s128 ? (52u + sizeof(_g4_t_v264)) : _g4_s128,
    _g4_s130 = (52u + sizeof(_g4_t_v265)) > _g4_s129 ? (52u + sizeof(_g4_t_v265)) : _g4_s129,
    _g4_s131 = (56u + sizeof(_g4_t_v266)) > _g4_s130 ? (56u + sizeof(_g4_t_v266)) : _g4_s130,
    _g4_s132 = (60u + sizeof(_g4_t_v267)) > _g4_s131 ? (60u + sizeof(_g4_t_v267)) : _g4_s131,
    _g4_s133 = (60u + sizeof(_g4_t_v268)) > _g4_s132 ? (60u + sizeof(_g4_t_v268)) : _g4_s132,
    _g4_s134 = (60u + sizeof(_g4_t_v269)) > _g4_s133 ? (60u + sizeof(_g4_t_v269)) : _g4_s133,
    _g4_s135 = (64u + sizeof(_g4_t_v270)) > _g4_s134 ? (64u + sizeof(_g4_t_v270)) : _g4_s134,
    _g4_s136 = (64u + sizeof(_g4_t_v271)) > _g4_s135 ? (64u + sizeof(_g4_t_v271)) : _g4_s135,
    _g4_s137 = (68u + sizeof(_g4_t_v272)) > _g4_s136 ? (68u + sizeof(_g4_t_v272)) : _g4_s136,
    _g4_s138 = (72u + sizeof(_g4_t_v273)) > _g4_s137 ? (72u + sizeof(_g4_t_v273)) : _g4_s137,
    _g4_s139 = (76u + sizeof(_g4_t_v274)) > _g4_s138 ? (76u + sizeof(_g4_t_v274)) : _g4_s138
  };
  alignas(16) uint8_t _g4_sf[_g4_s139];
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 12u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 32u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 32u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 32u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 32u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 32u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 32u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 32u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 32u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 32u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 32u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 32u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 32u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 32u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 32u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 32u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 32u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 32u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 32u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 32u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 32u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 32u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 32u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 32u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 32u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 32u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 32u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 32u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 32u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 32u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 32u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 32u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 32u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 32u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 32u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 32u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 32u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 32u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 32u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 32u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 32u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 36u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 36u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 36u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 36u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 36u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 36u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 36u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 36u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 36u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 36u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 36u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 36u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 36u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 36u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 36u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 36u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 36u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 36u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 36u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 36u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 36u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 36u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 36u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 36u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 36u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 36u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 36u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 36u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 36u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 36u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 36u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 36u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 36u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 36u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 36u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 36u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 36u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 36u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 36u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 36u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 36u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 36u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 36u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 36u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 36u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 36u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 36u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 36u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 36u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 36u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 36u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 36u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 36u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 36u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 36u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 36u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 36u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 36u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 36u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 36u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 40u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 40u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 40u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 40u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 40u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 40u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 40u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 40u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 40u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 40u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 44u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 44u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 44u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 44u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 44u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 44u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 44u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 44u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 48u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 48u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 48u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 48u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 48u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 48u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 48u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 48u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 52u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 52u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 52u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 56u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 60u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 60u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 60u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 64u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 64u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 68u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 72u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 76u);

  v274[14] = (uint32_t)(uintptr_t)(&self);
  v4 = self;
  v255 = (hkMatrix4f::Self *)(a3);
  v266 = a4;
  v270 = a2;
  *((uint32_t *)self + 64) = (uint32_t)(uintptr_t)(a4);
  v5 = *((uint32_t *)v4 + 52);
  *((uint32_t *)v4 + 20) += *((uint32_t *)v270 + 3);
  *((uint32_t *)v4 + 21) += *((uint32_t *)v270 + 6);
  v263 = (hkpCompressedMeshShapeBuilder::Self *)((char *)v4 + 192);
  if ( (v5 & 0x3FFFFFFF) < *((uint32_t *)v270 + 3) )
  {
    if ( v5 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)v4 + 50),
        16 * v5);
    v274[0] = 16 * *((uint32_t *)v270 + 3);
    v6 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           v274);
    v16 = v274[0];
    v17 = v274[0];
    *((uint32_t *)v4 + 50) = v6;
    v18 = v17 + 15;
    if ( v16 < 0 )
      v16 = v18;
    *((uint32_t *)v4 + 52) = v16 >> 4;
    v7 = *((uint32_t *)v270 + 3);
    v267 = v7;
  }
  else
  {
    v6 = *((uint32_t *)v4 + 50);
    v267 = *((uint32_t *)v270 + 3);
    v7 = v267;
  }
  *((uint32_t *)v4 + 51) = v7;
  v8 = 16 * v7;
  v9 = 0;
  v10 = *((uint32_t *)v270 + 2);
  if ( v267 > 0 )
  {
    do
    {
      *(uint32_t *)(v6 + v9) = *(uint32_t *)(v10 + v9);
      *(uint32_t *)(v6 + v9 + 4) = *(uint32_t *)(v10 + v9 + 4);
      *(uint32_t *)(v6 + v9 + 8) = *(uint32_t *)(v10 + v9 + 8);
      *(uint32_t *)(v6 + v9 + 12) = *(uint32_t *)(v10 + v9 + 12);
      v9 += 16;
    }
    while ( v9 != v8 );
  }
  if ( (*((uint32_t *)v4 + 55) & 0x3FFFFFFF) >= *((uint32_t *)v270 + 6) )
  {
    v11 = *((uint32_t *)v4 + 53);
    v268 = *((uint32_t *)v270 + 6);
    v15 = v268;
  }
  else
  {
    if ( *((int *)v4 + 55) >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)v4 + 53),
        16 * *((uint32_t *)v4 + 55));
    v274[0] = 16 * *((uint32_t *)v270 + 6);
    v11 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v274);
    v12 = v274[0];
    v13 = v274[0];
    *((uint32_t *)v4 + 53) = v11;
    v14 = v13 + 15;
    if ( v12 < 0 )
      v12 = v14;
    *((uint32_t *)v4 + 55) = v12 >> 4;
    v15 = *((uint32_t *)v270 + 6);
    v268 = v15;
  }
  *((uint32_t *)v4 + 54) = v15;
  v19 = 16 * v15;
  v20 = 0;
  v21 = *((uint32_t *)v270 + 5);
  if ( v268 > 0 )
  {
    do
    {
      *(uint32_t *)(v11 + v20) = *(uint32_t *)(v21 + v20);
      *(uint32_t *)(v11 + v20 + 4) = *(uint32_t *)(v21 + v20 + 4);
      *(uint32_t *)(v11 + v20 + 8) = *(uint32_t *)(v21 + v20 + 8);
      *(uint32_t *)(v11 + v20 + 12) = *(uint32_t *)(v21 + v20 + 12);
      v20 += 16;
    }
    while ( v20 != v19 );
  }
  hkQsTransformf::set((hkQsTransformf::Self *)v274, v255);
  if ( *((int *)v4 + 51) > 0 )
  {
    v22 = v4;
    v23 = 0;
    v24 = v22;
    do
    {
      v136 = (hkVector4f::Self *)(*((uint32_t *)v24 + 50) + 16 * v23++);
      hkVector4f::setTransformedPos(v136, (const hkQsTransformf::Self *)v274, v136);
    }
    while ( *((uint32_t *)v24 + 51) > v23 );
    v4 = v24;
  }
  if ( *((uint8_t *)v4 + 188) != 0 )
  {
    address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v272 = (int *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 20);
    *v272 = 0;
    v272[1] = 0;
    v272[2] = 0x80000000;
    v272[3] = 0;
    v272[4] = 0;
    v123 = *((uint32_t *)v270 + 6);
    if ( v123 > 0 )
    {
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v273,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v272,
        v123,
        20);
      v131 = v272[1];
      v132 = (uint32_t *)(*v272 + 20 * v131);
      if ( v123 - v131 > 0 )
      {
        v133 = &v132[5 * (v123 - v131)];
        do
        {
          *v132 = -1;
          v132[1] = -1;
          v132[2] = -1;
          v132[3] = -1;
          v132[4] = -1;
          v132 += 5;
        }
        while ( v132 != v133 );
      }
      v134 = 0;
      v135 = 0;
      v272[1] = v123;
      do
      {
        *(uint32_t *)(*v272 + v134) = v135++;
        *(uint32_t *)(*v272 + v134 + 12) = 0;
        v134 += 20;
      }
      while ( v272[1] > v135 );
    }
    else
    {
      v272[1] = v123;
    }
    v124 = *((uint32_t *)v4 + 45);
    *((uint32_t *)v4 + 39) = 0;
    v269 = v124;
    v125 = *((uint32_t *)v4 + 46) & 0x3FFFFFFF;
    v126 = *((uint32_t *)v270 + 6);
    v127 = v126 + v124;
    if ( v127 > v125 )
    {
      v128 = 2 * v125;
      if ( v128 >= v127 )
        v127 = v128;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v273,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v4 + 44,
        v127,
        4);
      v127 = v126 + *((uint32_t *)v4 + 45);
    }
    *((uint32_t *)v4 + 45) = v127;
    if ( v269 < v127 )
    {
      v129 = v269;
      v130 = 4 * v269;
      do
      {
        ++v129;
        *(uint32_t *)(*((uint32_t *)v4 + 44) + v130) = -1;
        v130 += 4;
      }
      while ( *((uint32_t *)v4 + 45) > v129 );
    }
  }
  else
  {
    v269 = 0;
    v272 = nullptr;
  }
  if ( *((uint8_t *)v4 + 13) != 0 )
    hkpCompressedMeshShapeBuilder::snapGeometry(v4, (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v272);
  else
    hkpCompressedMeshShapeBuilder::snapGeometry(v263, *(hkGeometry::Self **)v4);
  hkpCompressedMeshShapeBuilder::filterGeometry(v4, (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v272);
  result = *((uint32_t *)v4 + 54);
  if ( result != 0 || *((uint32_t *)v4 + 12) != 0 )
  {
    hkpCompressedMeshShapeBuilder::addChunk(v4, (int)(uintptr_t)(v263), (hkMemoryAllocator::Self *)((hkpCompressedMeshShape::Self *)((char *)v266 + 120)), v272);
    result = hkpCompressedMeshShapeBuilder::addBigTriangles(v4, v266);
    v26 = result;
    if ( *((uint8_t *)v4 + 188) != 0 )
    {
      hkpCompressedMeshShapeBuilder::MappingTree::getKeys(
        (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v272,
        (hkArray<unsigned int, hkContainerHeapAllocator::Self> *)((hkpCompressedMeshShapeBuilder::Self *)((char *)v4 + 176)),
        v269);
      if ( v272 != nullptr )
      {
        v27 = (hkMatrix4f::Self **)v272[3];
        v264 = (hkpCompressedMeshShapeBuilder::Self *)v27;
        if ( v27 != nullptr )
        {
          v28 = v27[3];
          if ( v28 != nullptr )
          {
            if ( *((uint32_t *)v28 + 3) != 0 )
            {
              v247 = v27[3];
              v256 = *((hkMatrix4f::Self **)v28 + 3);
              hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(v256));
              v271 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
              (*(void (**)(uint32_t, hkMatrix4f::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                *(uint32_t *)(*v271 + 44),
                v256,
                20);
              v29 = v247;
            }
            else
            {
              v262 = v27[3];
              v271 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
              v29 = v262;
            }
            if ( *((uint32_t *)v29 + 4) != 0 )
            {
              v248 = v29;
              v257 = *((hkMatrix4f::Self **)v29 + 4);
              hkpCompressedMeshShapeBuilder::MappingTree::Destroy((hkpCompressedMeshShapeBuilder::MappingTree::Self *)(v257));
              (*(void (**)(uint32_t, hkMatrix4f::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                *(uint32_t *)(*v271 + 44),
                v257,
                20);
              v29 = v248;
            }
            v30 = *((uint32_t *)v29 + 2);
            *((uint32_t *)v29 + 1) = 0;
            if ( v30 >= 0 )
            {
              v258 = v29;
              (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                *(uint32_t *)v29,
                20 * v30);
              v29 = v258;
            }
            *(uint32_t *)v29 = 0;
            *((uint32_t *)v29 + 2) = 0x80000000;
            (*(void (**)(uint32_t, hkMatrix4f::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
              *(uint32_t *)(*v271 + 44),
              v29,
              20);
          }
          else
          {
            v271 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
          }
          v31 = *((hkpCompressedMeshShapeBuilder::MappingTree::Self ***)v264 + 4);
          v259 = (hkMatrix4f::Self *)v31;
          if ( v31 != nullptr )
          {
            if ( v31[3] != nullptr )
            {
              v249 = v31[3];
              hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v249);
              (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44)
                                                                                             + 12))(
                *(uint32_t *)(*v271 + 44),
                v249,
                20);
            }
            v32 = *((uint32_t **)v259 + 4);
            v250 = v32;
            if ( v32 != nullptr )
            {
              v33 = (uint32_t *)v32[3];
              v237 = v33;
              if ( v33 != nullptr )
              {
                v34 = (uint32_t *)v33[3];
                if ( v34 != nullptr )
                {
                  if ( v34[3] != 0 )
                  {
                    v137 = (uint32_t *)v33[3];
                    v177 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v34[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v177);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v177,
                      20);
                    v34 = v137;
                  }
                  if ( v34[4] != 0 )
                  {
                    v138 = v34;
                    v178 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v34[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v178);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v178,
                      20);
                    v34 = v138;
                  }
                  v35 = v34[2];
                  v34[1] = 0;
                  if ( v35 >= 0 )
                  {
                    v179 = v34;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v34,
                      20 * v35);
                    v34 = v179;
                  }
                  *v34 = 0;
                  v34[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v34,
                    20);
                }
                v36 = v237;
                v37 = (uint32_t *)v237[4];
                if ( v37 != nullptr )
                {
                  if ( v37[3] != 0 )
                  {
                    v139 = (uint32_t *)v237[4];
                    v180 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v37[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v180);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v180,
                      20);
                    v37 = v139;
                  }
                  if ( v37[4] != 0 )
                  {
                    v140 = v37;
                    v181 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v37[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v181);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v181,
                      20);
                    v37 = v140;
                  }
                  v38 = v37[2];
                  v37[1] = 0;
                  if ( v38 >= 0 )
                  {
                    v182 = v37;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v37,
                      20 * v38);
                    v37 = v182;
                  }
                  *v37 = 0;
                  v37[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v37,
                    20);
                  v36 = v237;
                }
                v36[1] = 0;
                v39 = v36[2];
                if ( v39 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v237,
                    20 * v39);
                *v237 = 0;
                v237[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v237,
                  20);
              }
              v40 = (uint32_t *)v250[4];
              v238 = v40;
              if ( v40 != nullptr )
              {
                v41 = (uint32_t *)v40[3];
                if ( v41 != nullptr )
                {
                  if ( v41[3] != 0 )
                  {
                    v141 = (uint32_t *)v40[3];
                    v183 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v41[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v183);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v183,
                      20);
                    v41 = v141;
                  }
                  if ( v41[4] != 0 )
                  {
                    v142 = v41;
                    v184 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v41[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v184);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v184,
                      20);
                    v41 = v142;
                  }
                  v42 = v41[2];
                  v41[1] = 0;
                  if ( v42 >= 0 )
                  {
                    v185 = v41;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v41,
                      20 * v42);
                    v41 = v185;
                  }
                  *v41 = 0;
                  v41[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v41,
                    20);
                }
                v43 = v238;
                v44 = (uint32_t *)v238[4];
                if ( v44 != nullptr )
                {
                  if ( v44[3] != 0 )
                  {
                    v143 = (uint32_t *)v238[4];
                    v186 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v44[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v186);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v186,
                      20);
                    v44 = v143;
                  }
                  if ( v44[4] != 0 )
                  {
                    v144 = v44;
                    v187 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v44[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v187);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v187,
                      20);
                    v44 = v144;
                  }
                  v45 = v44[2];
                  v44[1] = 0;
                  if ( v45 >= 0 )
                  {
                    v188 = v44;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v44,
                      20 * v45);
                    v44 = v188;
                  }
                  *v44 = 0;
                  v44[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v44,
                    20);
                  v43 = v238;
                }
                v43[1] = 0;
                v46 = v43[2];
                if ( v46 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v238,
                    20 * v46);
                *v238 = 0;
                v238[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v238,
                  20);
              }
              v250[1] = 0;
              v47 = v250[2];
              if ( v47 >= 0 )
                (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  *v250,
                  20 * v47);
              *v250 = 0;
              v250[2] = 0x80000000;
              (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                *(uint32_t *)(*v271 + 44),
                v250,
                20);
            }
            *((uint32_t *)v259 + 1) = 0;
            v48 = *((uint32_t *)v259 + 2);
            if ( v48 >= 0 )
              (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                *(uint32_t *)v259,
                20 * v48);
            *(uint32_t *)v259 = 0;
            *((uint32_t *)v259 + 2) = 0x80000000;
            (*(void (**)(uint32_t, hkMatrix4f::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
              *(uint32_t *)(*v271 + 44),
              v259,
              20);
          }
          *((uint32_t *)v264 + 1) = 0;
          v49 = *((uint32_t *)v264 + 2);
          if ( v49 >= 0 )
            (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              *(uint32_t *)v264,
              20 * v49);
          *(uint32_t *)v264 = 0;
          *((uint32_t *)v264 + 2) = 0x80000000;
          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
            *(uint32_t *)(*v271 + 44),
            v264,
            20);
        }
        else
        {
          v271 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        }
        v50 = (hkpCompressedMeshShapeBuilder::Self *)v272[4];
        v265 = v50;
        if ( v50 != nullptr )
        {
          v51 = *((hkMatrix4f::Self **)v50 + 3);
          v260 = v51;
          if ( v51 != nullptr )
          {
            v52 = *((uint32_t **)v51 + 3);
            v251 = v52;
            if ( v52 != nullptr )
            {
              v53 = (uint32_t *)v52[3];
              v239 = v53;
              if ( v53 != nullptr )
              {
                v54 = (uint32_t *)v53[3];
                if ( v54 != nullptr )
                {
                  if ( v54[3] != 0 )
                  {
                    v145 = (uint32_t *)v53[3];
                    v189 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v54[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v189);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v189,
                      20);
                    v54 = v145;
                  }
                  if ( v54[4] != 0 )
                  {
                    v146 = v54;
                    v190 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v54[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v190);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v190,
                      20);
                    v54 = v146;
                  }
                  v55 = v54[2];
                  v54[1] = 0;
                  if ( v55 >= 0 )
                  {
                    v191 = v54;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v54,
                      20 * v55);
                    v54 = v191;
                  }
                  *v54 = 0;
                  v54[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v54,
                    20);
                }
                v56 = v239;
                v57 = (uint32_t *)v239[4];
                if ( v57 != nullptr )
                {
                  if ( v57[3] != 0 )
                  {
                    v147 = (uint32_t *)v239[4];
                    v192 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v57[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v192);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v192,
                      20);
                    v57 = v147;
                  }
                  if ( v57[4] != 0 )
                  {
                    v148 = v57;
                    v193 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v57[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v193);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v193,
                      20);
                    v57 = v148;
                  }
                  v58 = v57[2];
                  v57[1] = 0;
                  if ( v58 >= 0 )
                  {
                    v194 = v57;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v57,
                      20 * v58);
                    v57 = v194;
                  }
                  *v57 = 0;
                  v57[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v57,
                    20);
                  v56 = v239;
                }
                v56[1] = 0;
                v59 = v56[2];
                if ( v59 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v239,
                    20 * v59);
                *v239 = 0;
                v239[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v239,
                  20);
              }
              v60 = (uint32_t *)v251[4];
              v240 = v60;
              if ( v60 != nullptr )
              {
                v61 = (uint32_t *)v60[3];
                if ( v61 != nullptr )
                {
                  if ( v61[3] != 0 )
                  {
                    v149 = (uint32_t *)v60[3];
                    v195 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v61[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v195);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v195,
                      20);
                    v61 = v149;
                  }
                  if ( v61[4] != 0 )
                  {
                    v150 = v61;
                    v196 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v61[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v196);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v196,
                      20);
                    v61 = v150;
                  }
                  v62 = v61[2];
                  v61[1] = 0;
                  if ( v62 >= 0 )
                  {
                    v197 = v61;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v61,
                      20 * v62);
                    v61 = v197;
                  }
                  *v61 = 0;
                  v61[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v61,
                    20);
                }
                v63 = v240;
                v64 = (uint32_t *)v240[4];
                if ( v64 != nullptr )
                {
                  if ( v64[3] != 0 )
                  {
                    v151 = (uint32_t *)v240[4];
                    v198 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v64[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v198);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v198,
                      20);
                    v64 = v151;
                  }
                  if ( v64[4] != 0 )
                  {
                    v152 = v64;
                    v199 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v64[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v199);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v199,
                      20);
                    v64 = v152;
                  }
                  v65 = v64[2];
                  v64[1] = 0;
                  if ( v65 >= 0 )
                  {
                    v200 = v64;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v64,
                      20 * v65);
                    v64 = v200;
                  }
                  *v64 = 0;
                  v64[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v64,
                    20);
                  v63 = v240;
                }
                v63[1] = 0;
                v66 = v63[2];
                if ( v66 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v240,
                    20 * v66);
                *v240 = 0;
                v240[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v240,
                  20);
              }
              v251[1] = 0;
              v67 = v251[2];
              if ( v67 >= 0 )
                (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  *v251,
                  20 * v67);
              *v251 = 0;
              v251[2] = 0x80000000;
              (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                *(uint32_t *)(*v271 + 44),
                v251,
                20);
            }
            v68 = *((uint32_t **)v260 + 4);
            v252 = v68;
            if ( v68 != nullptr )
            {
              v69 = (uint32_t *)v68[3];
              v241 = v69;
              if ( v69 != nullptr )
              {
                v70 = (uint32_t *)v69[3];
                if ( v70 != nullptr )
                {
                  if ( v70[3] != 0 )
                  {
                    v153 = (uint32_t *)v69[3];
                    v201 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v70[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v201);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v201,
                      20);
                    v70 = v153;
                  }
                  if ( v70[4] != 0 )
                  {
                    v154 = v70;
                    v202 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v70[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v202);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v202,
                      20);
                    v70 = v154;
                  }
                  v71 = v70[2];
                  v70[1] = 0;
                  if ( v71 >= 0 )
                  {
                    v203 = v70;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v70,
                      20 * v71);
                    v70 = v203;
                  }
                  *v70 = 0;
                  v70[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v70,
                    20);
                }
                v72 = v241;
                v73 = (uint32_t *)v241[4];
                if ( v73 != nullptr )
                {
                  if ( v73[3] != 0 )
                  {
                    v155 = (uint32_t *)v241[4];
                    v204 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v73[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v204);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v204,
                      20);
                    v73 = v155;
                  }
                  if ( v73[4] != 0 )
                  {
                    v156 = v73;
                    v205 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v73[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v205);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v205,
                      20);
                    v73 = v156;
                  }
                  v74 = v73[2];
                  v73[1] = 0;
                  if ( v74 >= 0 )
                  {
                    v206 = v73;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v73,
                      20 * v74);
                    v73 = v206;
                  }
                  *v73 = 0;
                  v73[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v73,
                    20);
                  v72 = v241;
                }
                v72[1] = 0;
                v75 = v72[2];
                if ( v75 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v241,
                    20 * v75);
                *v241 = 0;
                v241[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v241,
                  20);
              }
              v76 = (uint32_t *)v252[4];
              v242 = v76;
              if ( v76 != nullptr )
              {
                v77 = (uint32_t *)v76[3];
                if ( v77 != nullptr )
                {
                  if ( v77[3] != 0 )
                  {
                    v157 = (uint32_t *)v76[3];
                    v207 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v77[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v207);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v207,
                      20);
                    v77 = v157;
                  }
                  if ( v77[4] != 0 )
                  {
                    v158 = v77;
                    v208 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v77[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v208);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v208,
                      20);
                    v77 = v158;
                  }
                  v78 = v77[2];
                  v77[1] = 0;
                  if ( v78 >= 0 )
                  {
                    v209 = v77;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v77,
                      20 * v78);
                    v77 = v209;
                  }
                  *v77 = 0;
                  v77[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v77,
                    20);
                }
                v79 = v242;
                v80 = (uint32_t *)v242[4];
                if ( v80 != nullptr )
                {
                  if ( v80[3] != 0 )
                  {
                    v159 = (uint32_t *)v242[4];
                    v210 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v80[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v210);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v210,
                      20);
                    v80 = v159;
                  }
                  if ( v80[4] != 0 )
                  {
                    v160 = v80;
                    v211 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v80[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v211);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v211,
                      20);
                    v80 = v160;
                  }
                  v81 = v80[2];
                  v80[1] = 0;
                  if ( v81 >= 0 )
                  {
                    v212 = v80;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v80,
                      20 * v81);
                    v80 = v212;
                  }
                  *v80 = 0;
                  v80[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v80,
                    20);
                  v79 = v242;
                }
                v79[1] = 0;
                v82 = v79[2];
                if ( v82 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v242,
                    20 * v82);
                *v242 = 0;
                v242[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v242,
                  20);
              }
              v252[1] = 0;
              v83 = v252[2];
              if ( v83 >= 0 )
                (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  *v252,
                  20 * v83);
              *v252 = 0;
              v252[2] = 0x80000000;
              (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                *(uint32_t *)(*v271 + 44),
                v252,
                20);
            }
            *((uint32_t *)v260 + 1) = 0;
            v84 = *((uint32_t *)v260 + 2);
            if ( v84 >= 0 )
              (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                *(uint32_t *)v260,
                20 * v84);
            *(uint32_t *)v260 = 0;
            *((uint32_t *)v260 + 2) = 0x80000000;
            (*(void (**)(uint32_t, hkMatrix4f::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
              *(uint32_t *)(*v271 + 44),
              v260,
              20);
          }
          v85 = *((hkMatrix4f::Self **)v265 + 4);
          v261 = v85;
          if ( v85 != nullptr )
          {
            v86 = *((uint32_t **)v85 + 3);
            v253 = v86;
            if ( v86 != nullptr )
            {
              v87 = (uint32_t *)v86[3];
              v243 = v87;
              if ( v87 != nullptr )
              {
                v88 = (uint32_t *)v87[3];
                if ( v88 != nullptr )
                {
                  if ( v88[3] != 0 )
                  {
                    v161 = (uint32_t *)v87[3];
                    v213 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v88[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v213);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v213,
                      20);
                    v88 = v161;
                  }
                  if ( v88[4] != 0 )
                  {
                    v162 = v88;
                    v214 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v88[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v214);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v214,
                      20);
                    v88 = v162;
                  }
                  v89 = v88[2];
                  v88[1] = 0;
                  if ( v89 >= 0 )
                  {
                    v215 = v88;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v88,
                      20 * v89);
                    v88 = v215;
                  }
                  *v88 = 0;
                  v88[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v88,
                    20);
                }
                v90 = v243;
                v91 = (uint32_t *)v243[4];
                if ( v91 != nullptr )
                {
                  if ( v91[3] != 0 )
                  {
                    v163 = (uint32_t *)v243[4];
                    v216 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v91[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v216);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v216,
                      20);
                    v91 = v163;
                  }
                  if ( v91[4] != 0 )
                  {
                    v164 = v91;
                    v217 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v91[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v217);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v217,
                      20);
                    v91 = v164;
                  }
                  v92 = v91[2];
                  v91[1] = 0;
                  if ( v92 >= 0 )
                  {
                    v218 = v91;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v91,
                      20 * v92);
                    v91 = v218;
                  }
                  *v91 = 0;
                  v91[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v91,
                    20);
                  v90 = v243;
                }
                v90[1] = 0;
                v93 = v90[2];
                if ( v93 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v243,
                    20 * v93);
                *v243 = 0;
                v243[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v243,
                  20);
              }
              v94 = (uint32_t *)v253[4];
              v244 = v94;
              if ( v94 != nullptr )
              {
                v95 = (uint32_t *)v94[3];
                if ( v95 != nullptr )
                {
                  if ( v95[3] != 0 )
                  {
                    v165 = (uint32_t *)v94[3];
                    v219 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v95[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v219);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v219,
                      20);
                    v95 = v165;
                  }
                  if ( v95[4] != 0 )
                  {
                    v166 = v95;
                    v220 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v95[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v220);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v220,
                      20);
                    v95 = v166;
                  }
                  v96 = v95[2];
                  v95[1] = 0;
                  if ( v96 >= 0 )
                  {
                    v221 = v95;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v95,
                      20 * v96);
                    v95 = v221;
                  }
                  *v95 = 0;
                  v95[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v95,
                    20);
                }
                v97 = v244;
                v98 = (uint32_t *)v244[4];
                if ( v98 != nullptr )
                {
                  if ( v98[3] != 0 )
                  {
                    v167 = (uint32_t *)v244[4];
                    v222 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v98[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v222);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v222,
                      20);
                    v98 = v167;
                  }
                  if ( v98[4] != 0 )
                  {
                    v168 = v98;
                    v223 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v98[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v223);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v223,
                      20);
                    v98 = v168;
                  }
                  v99 = v98[2];
                  v98[1] = 0;
                  if ( v99 >= 0 )
                  {
                    v224 = v98;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v98,
                      20 * v99);
                    v98 = v224;
                  }
                  *v98 = 0;
                  v98[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v98,
                    20);
                  v97 = v244;
                }
                v97[1] = 0;
                v100 = v97[2];
                if ( v100 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v244,
                    20 * v100);
                *v244 = 0;
                v244[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v244,
                  20);
              }
              v253[1] = 0;
              v101 = v253[2];
              if ( v101 >= 0 )
                (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  *v253,
                  20 * v101);
              *v253 = 0;
              v253[2] = 0x80000000;
              (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                *(uint32_t *)(*v271 + 44),
                v253,
                20);
            }
            v102 = *((uint32_t **)v261 + 4);
            v254 = v102;
            if ( v102 != nullptr )
            {
              v103 = (uint32_t *)v102[3];
              v245 = v103;
              if ( v103 != nullptr )
              {
                v104 = (uint32_t *)v103[3];
                if ( v104 != nullptr )
                {
                  if ( v104[3] != 0 )
                  {
                    v169 = (uint32_t *)v103[3];
                    v225 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v104[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v225);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v225,
                      20);
                    v104 = v169;
                  }
                  if ( v104[4] != 0 )
                  {
                    v170 = v104;
                    v226 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v104[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v226);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v226,
                      20);
                    v104 = v170;
                  }
                  v105 = v104[2];
                  v104[1] = 0;
                  if ( v105 >= 0 )
                  {
                    v227 = v104;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v104,
                      20 * v105);
                    v104 = v227;
                  }
                  *v104 = 0;
                  v104[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v104,
                    20);
                }
                v106 = v245;
                v107 = (uint32_t *)v245[4];
                if ( v107 != nullptr )
                {
                  if ( v107[3] != 0 )
                  {
                    v171 = (uint32_t *)v245[4];
                    v228 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v107[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v228);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v228,
                      20);
                    v107 = v171;
                  }
                  if ( v107[4] != 0 )
                  {
                    v172 = v107;
                    v229 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v107[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v229);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v229,
                      20);
                    v107 = v172;
                  }
                  v108 = v107[2];
                  v107[1] = 0;
                  if ( v108 >= 0 )
                  {
                    v230 = v107;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v107,
                      20 * v108);
                    v107 = v230;
                  }
                  *v107 = 0;
                  v107[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v107,
                    20);
                  v106 = v245;
                }
                v106[1] = 0;
                v109 = v106[2];
                if ( v109 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v245,
                    20 * v109);
                *v245 = 0;
                v245[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v245,
                  20);
              }
              v110 = (uint32_t *)v254[4];
              v246 = v110;
              if ( v110 != nullptr )
              {
                v111 = (uint32_t *)v110[3];
                if ( v111 != nullptr )
                {
                  if ( v111[3] != 0 )
                  {
                    v173 = (uint32_t *)v110[3];
                    v231 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v111[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v231);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v231,
                      20);
                    v111 = v173;
                  }
                  if ( v111[4] != 0 )
                  {
                    v174 = v111;
                    v232 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v111[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v232);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v232,
                      20);
                    v111 = v174;
                  }
                  v112 = v111[2];
                  v111[1] = 0;
                  if ( v112 >= 0 )
                  {
                    v233 = v111;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v111,
                      20 * v112);
                    v111 = v233;
                  }
                  *v111 = 0;
                  v111[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v111,
                    20);
                }
                v113 = v246;
                v114 = (uint32_t *)v246[4];
                if ( v114 != nullptr )
                {
                  if ( v114[3] != 0 )
                  {
                    v175 = (uint32_t *)v246[4];
                    v234 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v114[3];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v234);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v234,
                      20);
                    v114 = v175;
                  }
                  if ( v114[4] != 0 )
                  {
                    v176 = v114;
                    v235 = (hkpCompressedMeshShapeBuilder::MappingTree::Self *)v114[4];
                    hkpCompressedMeshShapeBuilder::MappingTree::Destroy(v235);
                    (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::MappingTree::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                      *(uint32_t *)(*v271 + 44),
                      v235,
                      20);
                    v114 = v176;
                  }
                  v115 = v114[2];
                  v114[1] = 0;
                  if ( v115 >= 0 )
                  {
                    v236 = v114;
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      *v114,
                      20 * v115);
                    v114 = v236;
                  }
                  *v114 = 0;
                  v114[2] = 0x80000000;
                  (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                    *(uint32_t *)(*v271 + 44),
                    v114,
                    20);
                  v113 = v246;
                }
                v113[1] = 0;
                v116 = v113[2];
                if ( v116 >= 0 )
                  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    *v246,
                    20 * v116);
                *v246 = 0;
                v246[2] = 0x80000000;
                (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                  *(uint32_t *)(*v271 + 44),
                  v246,
                  20);
              }
              v254[1] = 0;
              v117 = v254[2];
              if ( v117 >= 0 )
                (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  *v254,
                  20 * v117);
              *v254 = 0;
              v254[2] = 0x80000000;
              (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*v271 + 44) + 12))(
                *(uint32_t *)(*v271 + 44),
                v254,
                20);
            }
            *((uint32_t *)v261 + 1) = 0;
            v118 = *((uint32_t *)v261 + 2);
            if ( v118 >= 0 )
              (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                *(uint32_t *)v261,
                20 * v118);
            *(uint32_t *)v261 = 0;
            *((uint32_t *)v261 + 2) = 0x80000000;
            (*(void (**)(uint32_t, hkMatrix4f::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
              *(uint32_t *)(*v271 + 44),
              v261,
              20);
          }
          *((uint32_t *)v265 + 1) = 0;
          v119 = *((uint32_t *)v265 + 2);
          if ( v119 >= 0 )
            (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              *(uint32_t *)v265,
              20 * v119);
          *(uint32_t *)v265 = 0;
          *((uint32_t *)v265 + 2) = 0x80000000;
          (*(void (**)(uint32_t, hkpCompressedMeshShapeBuilder::Self *, int))(**(uint32_t **)(*v271 + 44) + 12))(
            *(uint32_t *)(*v271 + 44),
            v265,
            20);
        }
        v272[1] = 0;
        v120 = v272[2];
        if ( v120 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            *v272,
            20 * v120);
        *v272 = 0;
        v272[2] = 0x80000000;
        (*(void (**)(uint32_t, int *, int))(**(uint32_t **)(*v271 + 44) + 12))(*(uint32_t *)(*v271 + 44), v272, 20);
      }
      for ( result = 0; *((uint32_t *)v266 + 28) > v26; ++v26 )
      {
        v121 = (uint32_t *)(*((uint32_t *)v4 + 38) + result);
        result += 20;
        v121[1] = v26;
        v121[4] = v26;
        *(uint32_t *)(*((uint32_t *)v4 + 44) + 4 * (*v121 + v269)) = v26;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::createMeshFromGeometry  (binary VA: 0x1ae4d80)
// Original: hkpCompressedMeshShapeBuilder::createMeshFromGeometry
// ----------------------------------------------------------------------------
hkpCompressedMeshShape::Self * hkpCompressedMeshShapeBuilder::createMeshFromGeometry(hkGeometry::Self *a1, int a2, char a3)
{
  hkpCompressedMeshShape::Self *MeshShape;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[3];
  typedef int16_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int (**_g4_t_v10)(int);
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char (*_g4_t_v36)(int, int);
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef int (**_g4_t_v49)(int);
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int (**_g4_t_v57)(int);
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v9)) > _g4_s4 ? (36u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v10)) > _g4_s5 ? (40u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v11)) > _g4_s6 ? (44u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v12)) > _g4_s7 ? (48u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v13)) > _g4_s8 ? (52u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v14)) > _g4_s9 ? (56u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v15)) > _g4_s10 ? (60u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v16)) > _g4_s11 ? (64u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v17)) > _g4_s12 ? (68u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v18)) > _g4_s13 ? (72u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v19)) > _g4_s14 ? (76u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v20)) > _g4_s15 ? (80u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v21)) > _g4_s16 ? (84u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v22)) > _g4_s17 ? (88u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v23)) > _g4_s18 ? (92u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v24)) > _g4_s19 ? (96u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v25)) > _g4_s20 ? (100u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v26)) > _g4_s21 ? (104u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v27)) > _g4_s22 ? (108u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v28)) > _g4_s23 ? (112u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v29)) > _g4_s24 ? (116u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v30)) > _g4_s25 ? (120u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v31)) > _g4_s26 ? (124u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v32)) > _g4_s27 ? (128u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v33)) > _g4_s28 ? (132u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v34)) > _g4_s29 ? (136u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v35)) > _g4_s30 ? (140u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v36)) > _g4_s31 ? (144u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v37)) > _g4_s32 ? (148u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v38)) > _g4_s33 ? (164u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v39)) > _g4_s34 ? (168u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v40)) > _g4_s35 ? (172u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v41)) > _g4_s36 ? (176u + sizeof(_g4_t_v41)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v42)) > _g4_s37 ? (180u + sizeof(_g4_t_v42)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v43)) > _g4_s38 ? (184u + sizeof(_g4_t_v43)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v44)) > _g4_s39 ? (188u + sizeof(_g4_t_v44)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v45)) > _g4_s40 ? (192u + sizeof(_g4_t_v45)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v46)) > _g4_s41 ? (196u + sizeof(_g4_t_v46)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v47)) > _g4_s42 ? (200u + sizeof(_g4_t_v47)) : _g4_s42,
    _g4_s44 = (204u + sizeof(_g4_t_v48)) > _g4_s43 ? (204u + sizeof(_g4_t_v48)) : _g4_s43,
    _g4_s45 = (208u + sizeof(_g4_t_v49)) > _g4_s44 ? (208u + sizeof(_g4_t_v49)) : _g4_s44,
    _g4_s46 = (212u + sizeof(_g4_t_v50)) > _g4_s45 ? (212u + sizeof(_g4_t_v50)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v51)) > _g4_s46 ? (216u + sizeof(_g4_t_v51)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v52)) > _g4_s47 ? (220u + sizeof(_g4_t_v52)) : _g4_s47,
    _g4_s49 = (224u + sizeof(_g4_t_v53)) > _g4_s48 ? (224u + sizeof(_g4_t_v53)) : _g4_s48,
    _g4_s50 = (228u + sizeof(_g4_t_v54)) > _g4_s49 ? (228u + sizeof(_g4_t_v54)) : _g4_s49,
    _g4_s51 = (232u + sizeof(_g4_t_v55)) > _g4_s50 ? (232u + sizeof(_g4_t_v55)) : _g4_s50,
    _g4_s52 = (236u + sizeof(_g4_t_v56)) > _g4_s51 ? (236u + sizeof(_g4_t_v56)) : _g4_s51,
    _g4_s53 = (240u + sizeof(_g4_t_v57)) > _g4_s52 ? (240u + sizeof(_g4_t_v57)) : _g4_s52,
    _g4_s54 = (244u + sizeof(_g4_t_v58)) > _g4_s53 ? (244u + sizeof(_g4_t_v58)) : _g4_s53,
    _g4_s55 = (248u + sizeof(_g4_t_v59)) > _g4_s54 ? (248u + sizeof(_g4_t_v59)) : _g4_s54,
    _g4_s56 = (252u + sizeof(_g4_t_v60)) > _g4_s55 ? (252u + sizeof(_g4_t_v60)) : _g4_s55,
    _g4_s57 = (256u + sizeof(_g4_t_v61)) > _g4_s56 ? (256u + sizeof(_g4_t_v61)) : _g4_s56,
    _g4_s58 = (260u + sizeof(_g4_t_v62)) > _g4_s57 ? (260u + sizeof(_g4_t_v62)) : _g4_s57,
    _g4_s59 = (264u + sizeof(_g4_t_v63)) > _g4_s58 ? (264u + sizeof(_g4_t_v63)) : _g4_s58,
    _g4_s60 = (268u + sizeof(_g4_t_v64)) > _g4_s59 ? (268u + sizeof(_g4_t_v64)) : _g4_s59
  };
  alignas(16) uint8_t _g4_sf[_g4_s60];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 116u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 120u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 124u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 128u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 132u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 136u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 140u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 148u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 164u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 168u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 172u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 176u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 180u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 184u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 188u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 192u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 196u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 200u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 204u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 208u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 212u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 216u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 220u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 224u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 228u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 232u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 236u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 240u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 244u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 248u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 252u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 256u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 260u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 264u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 268u);

  v6[1] = 1053609165;
  v6[2] = 1;
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
  v7 = 256;
  v8 = 953267991;
  v9 = 981668463;
  v11 = -65535;
  v12 = 0;
  v13 = 0;
  v14 = 0x80000000;
  v15 = 0;
  v16 = 0;
  v17 = 0x80000000;
  v18 = 0;
  v19 = 0;
  v20 = 0x80000000;
  v21 = 0;
  v22 = 0;
  v23 = 0x80000000;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v49 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
  v57 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = sub_800000;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0x80000000;
  v42 = 0;
  v43 = 0;
  v44 = 0x80000000;
  v45 = 0;
  v46 = 0;
  v47 = 0x80000000;
  v48 = 0;
  v50 = -65535;
  v51 = 0;
  v52 = 0;
  v53 = 0x80000000;
  v54 = 0;
  v55 = 0;
  v56 = 0x80000000;
  v58 = -65535;
  v59 = 0;
  v60 = 0;
  v61 = 0x80000000;
  v62 = 0;
  v63 = 0;
  v64 = 0x80000000;
  MeshShape = (hkpCompressedMeshShape::Self *)hkpCompressedMeshShapeBuilder::createMeshShape(v6, a2, a3, 17);
  v5 = hkpCompressedMeshShapeBuilder::beginSubpart((hkpCompressedMeshShapeBuilder::Self *)v6, MeshShape);
  hkpCompressedMeshShapeBuilder::addGeometry(
    (hkpCompressedMeshShapeBuilder::Self *)v6,
    a1,
    (const hkMatrix4f::Self *)&xmmword_1D12FD0,
    MeshShape);
  hkpCompressedMeshShapeBuilder::endSubpart((hkpCompressedMeshShapeBuilder::Self *)v6, MeshShape);
  hkpCompressedMeshShapeBuilder::addInstance(
    (hkpCompressedMeshShapeBuilder::Self *)v6,
    v5,
    (const hkMatrix4f::Self *)&xmmword_1D12FD0,
    MeshShape,
    nullptr);
  v57 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
  v63 = 0;
  if ( v64 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v62,
      16 * v64);
  v62 = 0;
  v64 = 0x80000000;
  v60 = 0;
  if ( v61 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v59,
      16 * v61);
  v59 = 0;
  v61 = 0x80000000;
  v55 = 0;
  v57 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2054CB8));
  v49 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
  if ( v56 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v54,
      16 * v56);
  v54 = 0;
  v56 = 0x80000000;
  v52 = 0;
  if ( v53 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v51,
      16 * v53);
  v49 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2054CB8));
  v51 = 0;
  v53 = 0x80000000;
  v46 = 0;
  if ( v47 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v45,
      4 * v47);
  v45 = 0;
  v47 = 0x80000000;
  v43 = 0;
  if ( v44 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v42,
      36 * v44);
  v42 = 0;
  v44 = 0x80000000;
  v40 = 0;
  if ( v41 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v39,
      20 * v41);
  v39 = 0;
  v41 = 0x80000000;
  v22 = 0;
  if ( v23 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v21,
      16 * v23);
  v21 = 0;
  v23 = 0x80000000;
  v19 = 0;
  if ( v20 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v18,
      80 * v20);
  v18 = 0;
  v20 = 0x80000000;
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
  v16 = 0;
  if ( v17 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v15,
      16 * v17);
  v15 = 0;
  v17 = 0x80000000;
  v13 = 0;
  if ( v14 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v12,
      16 * v14);
  return MeshShape;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::addConvexPiece  (binary VA: 0x1ae53d0)
// Original: hkpCompressedMeshShapeBuilder::addConvexPiece
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::addConvexPiece(hkpCompressedMeshShapeBuilder::Self *self, hkAabbUtil::Self **a2, hkpCompressedMeshShape::Self *a3)
{
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  hkAabbUtil::Self *v11;
  hkVector4f::Self *v12; // xmm0_4
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  int i;
  typedef float _g4_t_v27;
  typedef hkAabb::Self *_g4_t_v28;
  typedef hkArray<unsigned short, hkContainerHeapAllocator::Self> *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39[3];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[20];
  typedef float _g4_t_v42[8];
  typedef hkAabbUtil::Self *_g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int16_t _g4_t_v50;
  typedef int16_t _g4_t_v51;
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v29)) > _g4_s2 ? (16u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v30)) > _g4_s3 ? (28u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v31)) > _g4_s4 ? (32u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v32)) > _g4_s5 ? (36u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v33)) > _g4_s6 ? (40u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v34)) > _g4_s7 ? (40u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v35)) > _g4_s8 ? (40u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v36)) > _g4_s9 ? (48u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v37)) > _g4_s10 ? (52u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v38)) > _g4_s11 ? (56u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v39)) > _g4_s12 ? (64u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v40)) > _g4_s13 ? (76u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v41)) > _g4_s14 ? (92u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v42)) > _g4_s15 ? (112u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v43)) > _g4_s16 ? (144u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v44)) > _g4_s17 ? (148u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v45)) > _g4_s18 ? (152u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v46)) > _g4_s19 ? (156u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v47)) > _g4_s20 ? (160u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v48)) > _g4_s21 ? (164u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v49)) > _g4_s22 ? (168u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v50)) > _g4_s23 ? (172u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (174u + sizeof(_g4_t_v51)) > _g4_s24 ? (174u + sizeof(_g4_t_v51)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 148u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 152u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 156u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 160u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 164u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 168u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 172u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 174u);

  hkAabbUtil::calcAabb(*a2, a2[1], (int)(uintptr_t)(v42), v28);
g4_m128_raw(v3) = LODWORD(v42[4]);
g4_m128_raw(v4) = LODWORD(v42[5]);
g4_m128_lane<float>(v3, 0) = v42[4] - v42[0];
g4_m128_lane<float>(v4, 0) = v42[5] - v42[1];
g4_m128_raw(v5) = LODWORD(v42[6]);
  v6 = _mm_and_ps(v3, g4_m128_u32(0x7FFFFFFFu));
  v7 = _mm_and_ps(v4, g4_m128_u32(0x7FFFFFFFu));
g4_m128_lane<int32_t>(v8, 0) = fabs(v42[6] - v42[2]);
  if (g4_m128_lane<float>(v7, 0) <g4_m128_lane<float>(v6, 0) )
  {
g4_m128_lane<float>(v4, 0) = v42[4] - v42[0];
    v7 = v6;
  }
  v9 = _mm_cmpgt_ss(v7, v8);
g4_m128_lane<float>(v5, 0) = v42[6] - v42[2];
  if ( COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v9, v5), 0) |g4_m128_lane<int32_t>(v4, 0) &g4_m128_lane<int32_t>(v9, 0)) >= (float)((float)(65535.0 * *(float *)self)
                                                                                                  - 1.0) )
    return 0;
  hkgpConvexHull::BuildConfig::Construct((hkgpConvexHull::BuildConfig::Self *)v40);
  v40[0] = 1;
  hkgpConvexHull::Construct((hkgpConvexHull::Self *)v41);
  v11 = a2[1];
  v43 = *a2;
  v44 = *(float *)&v11;
  LODWORD(v45) = 16;
  hkgpConvexHull::build(v41, &v43, v40);
  v36 = 0;
  v37 = 0;
  v38 = 0x80000000;
  hkgpConvexHull::fetchPositions(v41, 1, &v36);
  if ( v37 > 32 )
  {
    hkErrStream::Construct((hkErrStream::Self *)v39, (hkString::Self *)&v43, 512);
    v22 = (char *)v37;
    v23 = hkOstream::opShl((int)(uintptr_t)(v39), (hkString::Self *)"Number of convex hull vertices (");
    v24 = hkOstream::opShl(v23, v22);
    v25 = hkOstream::opShl(v24, (hkString::Self *)") too large, maximum allowed: ");
    hkOstream::opShl(v25, (char *)&dword_20);
    hkError::messageWarning(
      (hkError::Self *)0x1CC91291,
      (int)(uintptr_t)(&v43),
      "Shape/Deprecated/CompressedMesh/hkpCompressedMeshShapeBuilder.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_4E4)->st_value + 1,
      (int)(uintptr_t)(v29));
    hkErrStream::Destroy((hkErrStream::Self *)v39);
    v21 = 0;
  }
  else
  {
    *((uint32_t *)self + 20) += v37;
    v43 = (hkAabbUtil::Self *)LODWORD(v42[0]);
    v12 = *(hkVector4f::Self **)self;
    v44 = v42[1];
    v45 = v42[2];
    v46 = v42[3];
    v47 = 0;
    v48 = 0;
    v49 = 0x80000000;
    v50 = -1;
    v51 = -1;
    hkpCompressedMeshShapeBuilder::snapToGrid((hkpCompressedMeshShapeBuilder::Self *)&v43, v12);
    hkpCompressedMeshShapeBuilder::quantizeVertices(
      *(hkpCompressedMeshShapeBuilder::Self **)self,
      (float *)&v43,
      (const hkVector4f::Self *)&v36,
      (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v47);
    v13 = *((uint32_t *)a3 + 34);
    if ( v13 == (*((uint32_t *)a3 + 35) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpCompressedMeshShape::Self *)((char *)a3 + 132),
        &dword_20);
      v13 = *((uint32_t *)a3 + 34);
    }
    v14 = *((uint32_t *)a3 + 33) + 32 * v13;
    *(uint32_t *)(v14 + 16) = 0;
    *(uint32_t *)(v14 + 20) = 0;
    *(uint32_t *)(v14 + 24) = 0x80000000;
    *(uint32_t *)v14 = (uint32_t)(uintptr_t)(v43);
    *(float *)(v14 + 4) = v44;
    *(float *)(v14 + 8) = v45;
    *(float *)(v14 + 12) = v46;
    if ( v48 <= 0 )
    {
      *(uint32_t *)(v14 + 20) = v48;
    }
    else
    {
      v39[0] = 2 * v48;
      v15 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v39);
      v16 = v39[0];
      v17 = v39[0];
      *(uint32_t *)(v14 + 16) = v15;
      *(uint32_t *)(v14 + 24) = (int)((v17 >> 31) + v16) >> 1;
      v18 = v48;
      *(uint32_t *)(v14 + 20) = v48;
      v32 = v18;
      v33 = v47;
      if ( v18 > 0 )
      {
        if ( (v15 >= v47 + 16 || v47 >= v15 + 16) && (unsigned int)v18 > 0xA )
        {
          v19 = 0;
          v31 = 0;
          v20 = (unsigned int)v18 >> 3;
          v30 = 8 * v20;
          do
          {
            ++v31;
            *(__m128i *)(v15 + v19) = *(__m128i *)(v33 + v19);
            v19 += 16;
          }
          while ( v31 < v20 );
          if ( v32 != v30 )
          {
            *(uint16_t *)(v15 + 16 * v20) = *(uint16_t *)(v33 + 16 * v20);
            if ( v32 > v30 + 1 )
            {
              *(uint16_t *)(v15 + 2 * (v30 + 1)) = *(uint16_t *)(v33 + 2 * (v30 + 1));
              if ( v30 + 2 < v32 )
              {
                *(uint16_t *)(v15 + 2 * (v30 + 2)) = *(uint16_t *)(v33 + 2 * (v30 + 2));
                if ( v30 + 3 < v32 )
                {
                  *(uint16_t *)(v15 + 2 * (v30 + 3)) = *(uint16_t *)(v33 + 2 * (v30 + 3));
                  if ( v30 + 4 < v32 )
                  {
                    *(uint16_t *)(v15 + 2 * (v30 + 4)) = *(uint16_t *)(v33 + 2 * (v30 + 4));
                    if ( v30 + 5 < v32 )
                    {
                      *(uint16_t *)(v15 + 2 * (v30 + 5)) = *(uint16_t *)(v33 + 2 * (v30 + 5));
                      if ( v32 > v30 + 6 )
                        *(uint16_t *)(v15 + 2 * (v30 + 6)) = *(uint16_t *)(v33 + 2 * (v30 + 6));
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          for ( i = 0; i != v18; ++i )
            *(uint16_t *)(v15 + 2 * i) = *(uint16_t *)(v33 + 2 * i);
        }
      }
    }
    *(uint16_t *)(v14 + 28) = v50;
    *(uint16_t *)(v14 + 30) = v51;
    v48 = 0;
    ++*((uint32_t *)a3 + 34);
    if ( v49 >= 0 )
      (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v47,
        2 * (v49 & 0x3FFFFFFF));
    v47 = 0;
    v49 = 0x80000000;
    v21 = 1;
  }
  v37 = 0;
  if ( v38 >= 0 )
  {
    v34 = v21;
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v36,
      16 * v38);
    v21 = v34;
  }
  v35 = v21;
  v36 = 0;
  v38 = 0x80000000;
  hkgpConvexHull::Destroy((hkgpConvexHull::Self *)v41);
  return v35;
}

// ----------------------------------------------------------------------------
// Function: hkpCompressedMeshShapeBuilder::addConvexPiece_ea1ae5990  (binary VA: 0x1ae5990)
// Original: hkpCompressedMeshShapeBuilder::addConvexPiece
// ----------------------------------------------------------------------------
int hkpCompressedMeshShapeBuilder::addConvexPiece_ea1ae5990(hkpCompressedMeshShapeBuilder::Self *self, hkAabbUtil::Self **a2, hkpCompressedMeshShape::Self *a3)
{
  hkpCompressedMeshShapeBuilder::Self *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v10;
  typedef hkAabbUtil::Self **_g4_t_v11;
  typedef hkAabbUtil::Self *_g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v12)) > _g4_s2 ? (4u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v13)) > _g4_s3 ? (8u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);

  v13[3] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v11 = a2;
  result = hkpCompressedMeshShapeBuilder::addConvexPiece(self, a2 + 2, a3);
  if ( (uint8_t)result != 0 && *((uint8_t *)v3 + 188) != 0 )
  {
    v5 = *((uint32_t *)v3 + 45);
    v12 = v11[6];
    v6 = *((uint32_t *)v3 + 46) & 0x3FFFFFFF;
    v7 = (int)(uintptr_t)(v12) + v5;
    if ( (int)(uintptr_t)(v12) + v5 > v6 )
    {
      v9 = 2 * v6;
      v10 = result;
      if ( v7 >= v9 )
        v9 = (int)(uintptr_t)(v12) + v5;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v13,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v3 + 44,
        v9,
        4);
      result = v10;
      v7 = (int)(uintptr_t)(v12) + *((uint32_t *)v3 + 45);
    }
    *((uint32_t *)v3 + 45) = v7;
    if ( v5 < v7 )
    {
      v8 = 4 * v5;
      do
      {
        ++v5;
        *(uint32_t *)(*((uint32_t *)v3 + 44) + v8) = -1;
        v8 += 4;
      }
      while ( *((uint32_t *)v3 + 45) > v5 );
    }
  }
  return result;
}


