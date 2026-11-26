#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSimpleS.h"

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::CollisionDetail::staticClass  (binary VA: 0x172cc50)
// Original: hkpSimpleShapePhantom::CollisionDetail::staticClass
// ----------------------------------------------------------------------------
void * hkpSimpleShapePhantom::CollisionDetail::staticClass()
{
  return &hkpSimpleShapePhantomCollisionDetailClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::staticClass  (binary VA: 0x172cc70)
// Original: hkpSimpleShapePhantom::staticClass
// ----------------------------------------------------------------------------
void * hkpSimpleShapePhantom::staticClass()
{
  return &hkpSimpleShapePhantomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::getType  (binary VA: 0x1772050)
// Original: hkpSimpleShapePhantom::getType
// ----------------------------------------------------------------------------
int hkpSimpleShapePhantom::getType()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::getClosestPoints  (binary VA: 0x1772060)
// Original: hkpSimpleShapePhantom::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSimpleShapePhantom::getClosestPoints(uint32_t *a1, int a2, int *a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;

  if ( a3 == nullptr )
    a3 = *(int **)(a1[2] + 112);
  v7 = *a3;
  result = (int)(uintptr_t)(a1 + 4);
  v4 = a1[85] - 1;
  v5 = 4 * v4;
  if ( v4 >= 0 )
  {
    do
    {
      --v4;
      v6 = *(uint32_t *)(a1[84] + v5);
      v5 -= 4;
      result = (*(int (**)(uint32_t *, int, int *, int))(v7
                                                             + 20
                                                             * *(uint8_t *)(*(uint8_t *)(*(uint32_t *)v6 + 8)
                                                                                  + v7
                                                                                  + 35 * *(uint8_t *)(a1[4] + 8)
                                                                                  + 416)
                                                             + 2876))(
                 a1 + 4,
                 v6,
                 a3,
                 a2);
    }
    while ( v4 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::getPenetrations  (binary VA: 0x1772120)
// Original: hkpSimpleShapePhantom::getPenetrations
// ----------------------------------------------------------------------------
uint32_t * hkpSimpleShapePhantom::getPenetrations(uint32_t *a1, int a2, int *a3)
{
  uint32_t *result;
  int v4;
  int v5;
  int v6;

  if ( a3 == nullptr )
    a3 = *(int **)(a1[2] + 112);
  v6 = *a3;
  result = a1 + 4;
  v4 = a1[85] - 1;
  v5 = 4 * v4;
  if ( v4 >= 0 )
  {
    do
    {
      (*(void (**)(uint32_t *, uint32_t, int *, int))(v6
                                                        + 20
                                                        * *(uint8_t *)(*(uint8_t *)(**(uint32_t **)(a1[84] + v5)
                                                                                                  + 8)
                                                                             + v6
                                                                             + 35 * *(uint8_t *)(a1[4] + 8)
                                                                             + 416)
                                                        + 2872))(
        a1 + 4,
        *(uint32_t *)(a1[84] + v5),
        a3,
        a2);
      result = (uint32_t *)a2;
      if ( *(uint8_t *)(a2 + 4) != 0 )
        break;
      --v4;
      v5 -= 4;
    }
    while ( v4 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::isOverlappingCollidableAdded  (binary VA: 0x17721e0)
// Original: hkpSimpleShapePhantom::isOverlappingCollidableAdded
// ----------------------------------------------------------------------------
hkpSimpleShapePhantom::Self * hkpSimpleShapePhantom::isOverlappingCollidableAdded(hkpSimpleShapePhantom::Self *self, const hkpCollidable::Self *a2, int a3)
{
  hkpSimpleShapePhantom::Self *result;
  int v4;
  uint32_t *v5;
  int v6;

  result = self;
  v4 = *((uint32_t *)a2 + 85);
  if ( v4 <= 0 )
  {
LABEL_6:
    *(uint8_t *)self = 0;
    return result;
  }
  v5 = *((uint32_t **)a2 + 84);
  v6 = 0;
  if ( *v5 != a3 )
  {
    while ( ++v6 != v4 )
    {
      if ( v5[v6] == a3 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  *(uint8_t *)self = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::setPositionAndLinearCast  (binary VA: 0x1772230)
// Original: hkpSimpleShapePhantom::setPositionAndLinearCast
// ----------------------------------------------------------------------------
int * hkpSimpleShapePhantom::setPositionAndLinearCast(hkpPhantom::Self *a1, float *a2, float *a3, int a4, int a5, const hkAabb::Self *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, unsigned int a36, float a37, float a38, float a39, int a40, float a41, int a42)
{
  uint32_t *v42;
  unsigned int v43; // xmm3_4
  float v44; // xmm1_4
  float v45; // xmm4_4
  int v46;
  int *v47;
  float v48; // xmm0_4
  int v49;
  int v50;
  int v51; // xmm5_4
  __m128i v52;
  int v53;
  float v54; // xmm2_4
  float v55; // xmm1_4
  int v56; // xmm0_4
  int v57;
  int v58;
  int *result;
  int v60;
  int v61;
  int v70;
  int v71;
  int v72;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint8_t _g4_t_v68[156];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v62)) > _g4_s0 ? (0u + sizeof(_g4_t_v62)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v63)) > _g4_s1 ? (4u + sizeof(_g4_t_v63)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v64)) > _g4_s2 ? (8u + sizeof(_g4_t_v64)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v65)) > _g4_s3 ? (12u + sizeof(_g4_t_v65)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v66)) > _g4_s4 ? (16u + sizeof(_g4_t_v66)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v67)) > _g4_s5 ? (20u + sizeof(_g4_t_v67)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v68)) > _g4_s6 ? (32u + sizeof(_g4_t_v68)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 0u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 8u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);

  v42 = *((uint32_t **)a1 + 4);
  *((float *)a1 + 52) = *a2;
  *((float *)a1 + 53) = a2[1];
  *((float *)a1 + 54) = a2[2];
  *((float *)a1 + 55) = a2[3];
  G4_VCALL<void>(v42, 24, (char *)a1 + 160, (float)(0.5 * *(float *)(*(uint32_t *)(*((uint32_t *)a1 + 2) + 112) + 12)) + a3[5], v68, v62, v63, v64, v65, v66, v67, v68, *v42);
  *(float *)&v43 = *a3 - *a2;
  v44 = a3[2] - a2[2];
  v45 = a3[3] - a2[3];
  *(float *)&v70 = a3[1] - a2[1];
  hkpPhantom::updateBroadPhase(a1, a6);
  v46 = *((uint32_t *)a1 + 2);
  a40 = 872415232;
  a18 = 0;
  v47 = *(int **)(v46 + 112);
  a16 = *v47;
  a17 = v47[1];
  a18 = v47[2];
  a20 = v47[4];
  a21 = v47[5];
  a22 = v47[6];
  a24 = v47[8];
  a25 = v47[9];
  a26 = v47[10];
  a27 = v47[11];
  a28 = v47[12];
  a29 = v47[13];
  a30 = v47[14];
  a31 = v47[15];
  a32 = v47[16];
g4_m128_raw(v52) = v43;
  a33 = v47[17];
  a34 = v47[18];
  v48 = 0.0;
  v49 = v47[19];
  a36 = v43;
  v50 = v47[28];
  a37 = *(float *)&v70;
  a42 = v50;
  a35 = v49;
  a38 = v44;
  v51 = *(uint32_t *)(v70 + 20);
  a39 = v45;
  *(float *)g4_m128_ptr<int32_t>(v52) = (float)((float)(*(float *)&v43 * *(float *)&v43) + (float)(a37 * a37)) + (float)(a38 * a38);
  if ( *(float *)g4_m128_ptr<int32_t>(v52) > 0.0 )
  {
    v53 = ((_mm_cvtsi128_si32(v52) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v52) >> 1));
    v54 = (float)(*(float *)&v53 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v52)) * *(float *)&v53)
                * (float)(*(float *)&v53 * *(float *)&v53));
    v55 = (float)(v54 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v52)) * v54) * (float)(v54 * v54));
    v48 = (float)((float)(1.5 * v55)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v52)) * v55) * (float)(v55 * v55)))
        * *(float *)g4_m128_ptr<int32_t>(v52);
  }
  a41 = v48;
  v56 = *(uint32_t *)(v70 + 16);
  v57 = *(uint32_t *)(v46 + 120);
  a19 = v51;
  v72 = v57;
  a40 = v56;
  v58 = *((uint32_t *)a1 + 85) - 1;
  result = &a16;
  if ( v58 >= 0 )
  {
    v71 = *((uint32_t *)a1 + 85) - 1;
    v60 = 4 * v58;
    do
    {
      v61 = *(uint32_t *)(*((uint32_t *)a1 + 84) + v60);
      v60 -= 4;
      result = (int *)(*(int (**)(char *, int, int *, int *))(v72
                                                                    + 20
                                                                    * *(uint8_t *)(*(uint8_t *)(*(uint32_t *)v61 + 8)
                                                                                         + v72
                                                                                         + 35
                                                                                         * *(uint8_t *)(*((uint32_t *)a1 + 4) + 8)
                                                                                         + 416)
                                                                    + 2880))(
                        (char *)a1 + 16,
                        v61,
                        &a16,
                        &a16);
      --v71;
    }
    while ( v71 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::deallocateInternalArrays  (binary VA: 0x1772640)
// Original: hkpSimpleShapePhantom::deallocateInternalArrays
// ----------------------------------------------------------------------------
int hkpSimpleShapePhantom::deallocateInternalArrays(hkpSimpleShapePhantom::Self *self)
{
  int v2;

  if ( *((uint32_t *)self + 85) != 0 )
    return hkpShapePhantom::deallocateInternalArrays(self);
  v2 = *((uint32_t *)self + 86);
  *((uint32_t *)self + 85) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 84),
      4 * v2);
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 86) = 0x80000000;
  return hkpShapePhantom::deallocateInternalArrays(self);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::addOverlappingCollidable  (binary VA: 0x1772790)
// Original: hkpSimpleShapePhantom::addOverlappingCollidable
// ----------------------------------------------------------------------------
int hkpSimpleShapePhantom::addOverlappingCollidable(hkpSimpleShapePhantom::Self *self, hkpCollidable::Self *a2)
{
  int result;
  hkpSimpleShapePhantom::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef hkpSimpleShapePhantom::Self *_g4_t_v9;
  typedef int *_g4_t_v10;
  typedef uint32_t _g4_t_v11[2];
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);

  result = (int)(uintptr_t)(a2);
  v3 = self;
  if ( *(uint32_t *)a2 != 0 )
  {
    v4 = *((uint32_t *)self + 35);
    v11[1] = (uint32_t)(uintptr_t)(a2);
    v5 = v4 - 1;
    v11[0] = (uint32_t)(uintptr_t)(self);
    v12 = 0;
    if ( v5 < 0 )
      goto LABEL_9;
    v6 = 4 * v5;
    do
    {
      result = *(uint32_t *)(*((uint32_t *)v3 + 34) + v6);
      if ( result != 0 )
      {
        v9 = v3;
        result = (**(int (***)(int, uint32_t *))result)(result, v11);
        v3 = v9;
      }
      --v5;
      v6 -= 4;
    }
    while ( v5 != -1 );
    if ( v12 == 0 )
    {
LABEL_9:
      result = *((uint32_t *)v3 + 85);
      if ( result == (*((uint32_t *)v3 + 86) & 0x3FFFFFFF) )
      {
        v10 = (int *)v3;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpSimpleShapePhantom::Self *)((char *)v3 + 336),
          4,
          v8);
        v3 = (hkpSimpleShapePhantom::Self *)v10;
        result = v10[85];
      }
      v7 = *((uint32_t *)v3 + 84);
      *((uint32_t *)v3 + 85) = result + 1;
      *(uint32_t *)(v7 + 4 * result) = (uint32_t)(uintptr_t)(a2);
      *((uint8_t *)v3 + 348) = 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::Destroy  (binary VA: 0x1772890)
// Original: hkpSimpleShapePhantom::~hkpSimpleShapePhantom
// ----------------------------------------------------------------------------
void hkpSimpleShapePhantom::Destroy(hkpSimpleShapePhantom::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A04A8);
  v1 = *((uint32_t *)self + 86);
  *((uint32_t *)self + 85) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 84),
      4 * v1);
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 86) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0B88);
  hkpPhantom::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::Destroy_ea1772920  (binary VA: 0x1772920)
// Original: hkpSimpleShapePhantom::~hkpSimpleShapePhantom
// ----------------------------------------------------------------------------
void hkpSimpleShapePhantom::Destroy_ea1772920(hkpSimpleShapePhantom::Self *self)
{
  int v1;
  int v2;

  hkpSimpleShapePhantom::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 352;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::removeOverlappingCollidable  (binary VA: 0x1772980)
// Original: hkpSimpleShapePhantom::removeOverlappingCollidable
// ----------------------------------------------------------------------------
hkpSimpleShapePhantom::Self * hkpSimpleShapePhantom::removeOverlappingCollidable(hkpSimpleShapePhantom::Self *self, hkpCollidable::Self *a2)
{
  hkpSimpleShapePhantom::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  hkpSimpleShapePhantom::Self *v9;
  int v10;
  int v11;
  int v12;
  hkpSimpleShapePhantom::Self *v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef hkpSimpleShapePhantom::Self *_g4_t_v17;
  typedef hkpSimpleShapePhantom::Self *_g4_t_v18;
  typedef uint32_t _g4_t_v19[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);

  result = *(hkpSimpleShapePhantom::Self **)a2;
  if ( *(uint32_t *)a2 == 0 )
    return result;
  v3 = *((uint32_t *)self + 85) - 1;
  if ( v3 < 0 )
    goto LABEL_8;
  v16 = 4 * v3;
  v4 = 4 * v3 - 4;
  v5 = *((uint32_t *)self + 85) - 1;
  v6 = *((uint32_t *)self + 84);
  if ( a2 != *(hkpCollidable::Self **)(v6 + 4 * v3) )
  {
    while ( --v5 != -1 )
    {
      if ( a2 == *(hkpCollidable::Self **)(v6 + v4) )
      {
        v16 = v4;
        goto LABEL_15;
      }
      v4 -= 4;
    }
LABEL_8:
    v19[1] = (uint32_t)(uintptr_t)(a2);
    v19[0] = (uint32_t)(uintptr_t)(self);
    LOBYTE(v19[2]) = 0;
    v7 = *((uint32_t *)self + 35) - 1;
    result = (hkpSimpleShapePhantom::Self *)v19;
    v8 = 4 * v7;
    if ( v7 >= 0 )
    {
      v9 = self;
      do
      {
        result = *(hkpSimpleShapePhantom::Self **)(*((uint32_t *)v9 + 34) + v8);
        if ( result != nullptr )
        {
          v17 = v9;
          result = (hkpSimpleShapePhantom::Self *)G4_VCALL<int>(result, 4, v19);
          v9 = v17;
        }
        --v7;
        v8 -= 4;
      }
      while ( v7 != -1 );
    }
    return result;
  }
  v5 = *((uint32_t *)self + 85) - 1;
LABEL_15:
  v19[1] = (uint32_t)(uintptr_t)(a2);
  v19[0] = (uint32_t)(uintptr_t)(self);
  LOBYTE(v19[2]) = 1;
  v10 = *((uint32_t *)self + 35) - 1;
  if ( v10 >= 0 )
  {
    v15 = v5;
    v11 = 4 * v10;
    v12 = *((uint32_t *)self + 35) - 1;
    v13 = self;
    do
    {
      v14 = *(uint32_t *)(*((uint32_t *)v13 + 34) + v11);
      if ( v14 != 0 )
      {
        v18 = v13;
        G4_VCALL<void>(v14, 4, v19);
        v13 = v18;
      }
      --v12;
      v11 -= 4;
    }
    while ( v12 != -1 );
    v5 = v15;
    v6 = *((uint32_t *)self + 84);
    v3 = *((uint32_t *)self + 85) - 1;
  }
  *((uint32_t *)self + 85) = v3;
  if ( v5 != v3 )
    *(uint32_t *)(v6 + v16) = *(uint32_t *)(v6 + 4 * v3);
  *((uint8_t *)self + 348) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::Construct  (binary VA: 0x1772b30)
// Original: hkpSimpleShapePhantom::hkpSimpleShapePhantom
// ----------------------------------------------------------------------------
void hkpSimpleShapePhantom::Construct(hkpSimpleShapePhantom::Self *self, const hkpShape::Self *a2, const hkTransformf::Self *a3, unsigned int a4)
{
  hkpShapePhantom::Construct(self, a2, a3);
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 85) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A04A8);
  *((uint32_t *)self + 86) = 0x80000000;
  *((uint8_t *)self + 348) = 0;
  *((uint32_t *)self + 11) = a4;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::clone  (binary VA: 0x1772ba0)
// Original: hkpSimpleShapePhantom::clone
// ----------------------------------------------------------------------------
int * hkpSimpleShapePhantom::clone(hkpSimpleShapePhantom::Self *self)
{
  const hkpShape::Self *v1;
  int address;
  int *v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  unsigned int v14;
  signed int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v26;
  int v27;
  int v28;
  int v29;
  int j;
  int i;
  int savedregs;
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
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef signed int _g4_t_v54;
  typedef hkpSimpleShapePhantom::Self *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t _g4_t_v58[6];
  typedef hkArrayUtil::Self *_g4_t_v59;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v32)) > _g4_s0 ? (8u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v33)) > _g4_s1 ? (12u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v34)) > _g4_s2 ? (16u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v35)) > _g4_s3 ? (20u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v36)) > _g4_s4 ? (24u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v37)) > _g4_s5 ? (28u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v38)) > _g4_s6 ? (32u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v39)) > _g4_s7 ? (32u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v40)) > _g4_s8 ? (36u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v41)) > _g4_s9 ? (40u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v42)) > _g4_s10 ? (40u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v43)) > _g4_s11 ? (40u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v44)) > _g4_s12 ? (44u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v45)) > _g4_s13 ? (44u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v46)) > _g4_s14 ? (44u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v47)) > _g4_s15 ? (48u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v48)) > _g4_s16 ? (48u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v49)) > _g4_s17 ? (48u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v50)) > _g4_s18 ? (52u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v51)) > _g4_s19 ? (52u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v52)) > _g4_s20 ? (52u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v53)) > _g4_s21 ? (52u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v54)) > _g4_s22 ? (52u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v55)) > _g4_s23 ? (56u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v56)) > _g4_s24 ? (56u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v57)) > _g4_s25 ? (60u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v58)) > _g4_s26 ? (64u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v59)) > _g4_s27 ? (88u + sizeof(_g4_t_v59)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);

  v59 = (hkArrayUtil::Self *)&self;
  v55 = self;
  v1 = *((const hkpShape::Self **)self + 4);
  v50 = *((uint32_t *)self + 11);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (int *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, unsigned int, hkpSimpleShapePhantom::Self *, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                *(uint32_t *)(*(uint32_t *)address + 44),
                352,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38,
                v40,
                v41,
                v44,
                v47,
                v50,
                v55,
                v57,
                v58[0],
                v58[1],
                v58[2],
                v58[3],
                v58[4],
                v58[5]);
  hkpSimpleShapePhantom::Construct((hkpSimpleShapePhantom::Self *)v3, v1, (const hkTransformf::Self *)(v56 + 40), v51);
  v4 = v56[35];
  if ( (v3[36] & 0x3FFFFFFF) < v4 )
  {
    if ( v3[36] >= 0 )
    {
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v3[34],
        4 * v3[36]);
      v4 = v56[35];
    }
    v58[0] = 4 * v4;
    v26 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v58);
    v27 = v58[0];
    v28 = v58[0];
    v3[34] = v26;
    v29 = v28 + 3;
    v52 = v26;
    v5 = v56;
    if ( v27 < 0 )
      v27 = v29;
    v3[36] = v27 >> 2;
    v4 = v56[35];
  }
  else
  {
    v52 = v3[34];
    v5 = v56;
  }
  v3[35] = v4;
  v48 = v5[34];
  if ( v4 > 0 )
  {
    if ( (v48 >= v52 + 16 || v52 >= v48 + 16) && (unsigned int)v4 > 0xB )
    {
      v6 = 0;
      v45 = 0;
      v42 = 4 * ((unsigned int)v4 >> 2);
      do
      {
        ++v45;
        *(__m128i *)(v52 + v6) = *(__m128i *)(v48 + v6);
        v6 += 16;
      }
      while ( (unsigned int)v4 >> 2 > v45 );
      if ( v4 != v42 )
      {
        *(uint32_t *)(v52 + 16 * ((unsigned int)v4 >> 2)) = *(uint32_t *)(v48 + 16 * ((unsigned int)v4 >> 2));
        if ( v4 > v42 + 1 )
        {
          *(uint32_t *)(v52 + 4 * (v42 + 1)) = *(uint32_t *)(v48 + 4 * (v42 + 1));
          if ( v4 > v42 + 2 )
            *(uint32_t *)(v52 + 4 * (v42 + 2)) = *(uint32_t *)(v48 + 4 * (v42 + 2));
        }
      }
    }
    else
    {
      for ( i = 0; i != v4; ++i )
        *(uint32_t *)(v52 + 4 * i) = *(uint32_t *)(v48 + 4 * i);
    }
  }
  v7 = v56[38];
  if ( (v3[39] & 0x3FFFFFFF) >= v7 )
  {
    v53 = v3[37];
    v12 = v56;
  }
  else
  {
    if ( v3[39] >= 0 )
    {
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v3[37],
        4 * v3[39]);
      v7 = v56[38];
    }
    v58[0] = 4 * v7;
    v8 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           v58);
    v9 = v58[0];
    v10 = v58[0];
    v3[37] = v8;
    v11 = v10 + 3;
    v53 = v8;
    v12 = v56;
    if ( v9 < 0 )
      v9 = v11;
    v3[39] = v9 >> 2;
    v7 = v56[38];
  }
  v3[38] = v7;
  v49 = v12[37];
  if ( v7 > 0 )
  {
    if ( (v49 >= v53 + 16 || v53 >= v49 + 16) && (unsigned int)v7 > 0xB )
    {
      v39 = v7;
      v13 = 0;
      v46 = 0;
      v43 = 4 * ((unsigned int)v7 >> 2);
      v14 = (unsigned int)v7 >> 2;
      do
      {
        ++v46;
        *(__m128i *)(v53 + v13) = *(__m128i *)(v49 + v13);
        v13 += 16;
      }
      while ( v46 < v14 );
      if ( v39 != v43 )
      {
        *(uint32_t *)(v53 + 4 * v43) = *(uint32_t *)(v49 + 4 * v43);
        if ( v43 + 1 < v39 )
        {
          *(uint32_t *)(v53 + 4 * (v43 + 1)) = *(uint32_t *)(v49 + 4 * (v43 + 1));
          if ( v43 + 2 < v39 )
            *(uint32_t *)(v53 + 4 * (v43 + 2)) = *(uint32_t *)(v49 + 4 * (v43 + 2));
        }
      }
    }
    else
    {
      for ( j = 0; j != v7; ++j )
        *(uint32_t *)(v53 + 4 * j) = *(uint32_t *)(v49 + 4 * j);
    }
  }
  v15 = v3[32];
  v16 = v56[32];
  if ( v16 <= v15 )
    v15 = v56[32];
  v54 = v15;
  v17 = v3[33] & 0x3FFFFFFF;
  if ( v16 > v17 )
  {
    v18 = 2 * v17;
    savedregs = 16;
    v59 = (hkArrayUtil::Self *)&v57;
    if ( v18 < v16 )
      v18 = v16;
    hkArrayUtil::reserve(v59, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v3 + 31, v18, savedregs);
  }
  v19 = v3[31];
  v20 = v56[31];
  if ( v54 > 0 )
  {
    v21 = 0;
    do
    {
      *(uint32_t *)(v19 + v21) = *(uint32_t *)(v20 + v21);
      *(uint32_t *)(v19 + v21 + 4) = *(uint32_t *)(v20 + v21 + 4);
      *(uint32_t *)(v19 + v21 + 8) = *(uint32_t *)(v20 + v21 + 8);
      *(uint32_t *)(v19 + v21 + 12) = *(uint32_t *)(v20 + v21 + 12);
      v21 += 16;
    }
    while ( v21 != 16 * v54 );
    v19 = v3[31];
    v20 = v56[31];
  }
  v22 = 16 * v54 + v20;
  v23 = 16 * v54 + v19;
  v24 = 0;
  if ( v16 - v54 > 0 )
  {
    do
    {
      *(uint32_t *)(v23 + v24) = *(uint32_t *)(v22 + v24);
      *(uint32_t *)(v23 + v24 + 4) = *(uint32_t *)(v22 + v24 + 4);
      *(uint32_t *)(v23 + v24 + 8) = *(uint32_t *)(v22 + v24 + 8);
      *(uint32_t *)(v23 + v24 + 12) = *(uint32_t *)(v22 + v24 + 12);
      v24 += 16;
    }
    while ( v24 != 16 * (v16 - v54) );
  }
  v3[32] = v16;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleShapePhantom::ensureDeterministicOrder  (binary VA: 0x1773900)
// Original: hkpSimpleShapePhantom::ensureDeterministicOrder
// ----------------------------------------------------------------------------
hkpSimpleShapePhantom::Self * hkpSimpleShapePhantom::ensureDeterministicOrder(hkpSimpleShapePhantom::Self *self)
{
  hkpSimpleShapePhantom::Self *result;
  int v2;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  result = self;
  if ( *((uint8_t *)self + 348) == 0 )
    return result;
  v2 = *((uint32_t *)self + 85);
  v10 = *((uint32_t *)self + 84);
  if ( v2 <= 1 )
    goto LABEL_14;
  v13 = 0;
  v14 = v2 - 1;
  v3 = v2 - 1;
  v4 = 0;
  while ( 2 )
  {
    v5 = v4 + 1;
    v12 = *(uint32_t *)(v10 + 4 * ((v4 + v3) >> 1));
    v6 = *(uint32_t *)(v12 + 20);
    while ( 1 )
    {
      v11 = v5 - 1;
      if ( *(uint32_t *)(*(uint32_t *)(v10 + 4 * v5 - 4) + 20) < v6 )
        goto LABEL_20;
      v7 = (int *)(v10 + 4 * v3);
      v8 = *v7;
      if ( *(uint32_t *)(*v7 + 20) > v6 )
      {
        v9 = (int *)(v10 + 4 * v3 - 4);
        do
        {
          v8 = *v9;
          --v3;
          v7 = v9--;
        }
        while ( *(uint32_t *)(v8 + 20) > v6 );
      }
      if ( v3 < v11 )
        break;
      if ( v3 != v11 )
      {
        *v7 = *(uint32_t *)(v10 + 4 * v5 - 4);
        *(uint32_t *)(v10 + 4 * v5 - 4) = v8;
      }
      --v3;
      v11 = v5;
      if ( v3 < v5 )
        break;
      v6 = *(uint32_t *)(v12 + 20);
LABEL_20:
      ++v5;
    }
    if ( v13 < v3 )
      hkAlgorithm::quickSortRecursive_bc2233(
        v10,
        v13,
        v3);
    if ( v14 > v11 )
    {
      v13 = v11;
      v3 = v14;
      v4 = v11;
      continue;
    }
    break;
  }
LABEL_14:
  result = self;
  *((uint8_t *)self + 348) = 0;
  return result;
}


