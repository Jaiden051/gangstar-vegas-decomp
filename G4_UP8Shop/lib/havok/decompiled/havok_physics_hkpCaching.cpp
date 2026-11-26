#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCaching.h"

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::staticClass  (binary VA: 0x175b150)
// Original: hkpCachingShapePhantom::staticClass
// ----------------------------------------------------------------------------
void * hkpCachingShapePhantom::staticClass()
{
  return &hkpCachingShapePhantomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::getType  (binary VA: 0x17621f0)
// Original: hkpCachingShapePhantom::getType
// ----------------------------------------------------------------------------
int hkpCachingShapePhantom::getType()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::getClosestPoints  (binary VA: 0x1762200)
// Original: hkpCachingShapePhantom::getClosestPoints
// ----------------------------------------------------------------------------
int hkpCachingShapePhantom::getClosestPoints(uint32_t *a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;

  if ( a3 == 0 )
    a3 = *(uint32_t *)(a1[2] + 112);
  result = (int)(uintptr_t)(a1 + 4);
  v4 = a1[85] - 1;
  v5 = 8 * v4;
  if ( v4 >= 0 )
  {
    do
    {
      v6 = v5;
      --v4;
      v5 -= 8;
      result = (*(int (**)(uint32_t, uint32_t *, uint32_t, int, int))(**(uint32_t **)(a1[84] + v6) + 24))(
                 *(uint32_t *)(a1[84] + v6),
                 a1 + 4,
                 *(uint32_t *)(a1[84] + v6 + 4),
                 a3,
                 a2);
    }
    while ( v4 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::getPenetrations  (binary VA: 0x17622a0)
// Original: hkpCachingShapePhantom::getPenetrations
// ----------------------------------------------------------------------------
int hkpCachingShapePhantom::getPenetrations(uint32_t *a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;

  if ( a3 == 0 )
    a3 = *(uint32_t *)(a1[2] + 112);
  v5 = a1[85];
  result = (int)(uintptr_t)(a1 + 4);
  v4 = 8 * (v5 - 1);
  if ( v5 - 1 >= 0 )
  {
    v6 = v5 - 1;
    do
    {
      result = (*(int (**)(uint32_t, uint32_t *, uint32_t, int, int))(**(uint32_t **)(a1[84] + v4) + 20))(
                 *(uint32_t *)(a1[84] + v4),
                 a1 + 4,
                 *(uint32_t *)(a1[84] + v4 + 4),
                 a3,
                 a2);
      if ( *(uint8_t *)(a2 + 4) != 0 )
        break;
      --v6;
      v4 -= 8;
    }
    while ( v6 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::isOverlappingCollidableAdded  (binary VA: 0x1762350)
// Original: hkpCachingShapePhantom::isOverlappingCollidableAdded
// ----------------------------------------------------------------------------
hkpCachingShapePhantom::Self * hkpCachingShapePhantom::isOverlappingCollidableAdded(hkpCachingShapePhantom::Self *self, const hkpCollidable::Self *a2, int a3)
{
  hkpCachingShapePhantom::Self *result;
  int v4;
  int v5;
  int v6;

  result = self;
  v4 = *((uint32_t *)a2 + 85);
  if ( v4 <= 0 )
  {
LABEL_6:
    *(uint8_t *)self = 0;
    return result;
  }
  v5 = *((uint32_t *)a2 + 84);
  v6 = 0;
  if ( *(uint32_t *)(v5 + 4) != a3 )
  {
    while ( ++v6 != v4 )
    {
      if ( *(uint32_t *)(v5 + 8 * v6 + 4) == a3 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  *(uint8_t *)self = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::updateShapeCollectionFilter  (binary VA: 0x17623a0)
// Original: hkpCachingShapePhantom::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
hkpCachingShapePhantom::Self * hkpCachingShapePhantom::updateShapeCollectionFilter(hkpCachingShapePhantom::Self *self)
{
  hkpCachingShapePhantom::Self *result;
  int v2;
  int v3;
  uint32_t *v4;
  typedef uint32_t _g4_t_v5[6];
  typedef uint8_t _g4_t_v6[92];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v6)) > _g4_s1 ? (32u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);

  result = self;
  std::memcpy(v6, *(const void **)(*((uint32_t *)self + 2) + 112), 80);
  v2 = *((uint32_t *)self + 85);
  v3 = 0;
  v5[1] = -65535;
  v5[0] = ((uint32_t)(uintptr_t)&off_209FEA8);
  if ( v2 > 0 )
  {
    do
    {
      v4 = (uint32_t *)(*((uint32_t *)self + 84) + 8 * v3++);
      result = (hkpCachingShapePhantom::Self *)G4_VCALL<int>(*v4, 40, (char *)self + 16, v4[1], v6, v5);
    }
    while ( *((uint32_t *)self + 85) > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::Destroy  (binary VA: 0x1762480)
// Original: hkpCachingShapePhantom::~hkpCachingShapePhantom
// ----------------------------------------------------------------------------
void hkpCachingShapePhantom::Destroy(hkpCachingShapePhantom::Self *self)
{
  hkpCachingShapePhantom::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  typedef hkpCachingShapePhantom::Self *_g4_t_v6;
  typedef hkpCachingShapePhantom::Self *_g4_t_v7;
  typedef uint32_t _g4_t_v8[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v1 = self;
  v8[1] = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FEE8);
  v8[0] = ((uint32_t)(uintptr_t)&off_209FEA8);
  v2 = *((uint32_t *)self + 85) - 1;
  v3 = 8 * v2;
  if ( v2 >= 0 )
  {
    do
    {
      v6 = v1;
      --v2;
      v4 = *(uint32_t *)(*((uint32_t *)v1 + 84) + v3);
      v3 -= 8;
      G4_VCALL<void>(v4, 36, v8);
      v1 = v6;
    }
    while ( v2 != -1 );
  }
  v5 = *((uint32_t *)v1 + 86);
  *((uint32_t *)v1 + 85) = 0;
  if ( v5 >= 0 )
  {
    v7 = v1;
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 84),
      8 * v5);
    v1 = v7;
  }
  *((uint32_t *)v1 + 84) = 0;
  *((uint32_t *)v1 + 86) = 0x80000000;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20A0B88);
  hkpPhantom::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::setPositionAndLinearCast  (binary VA: 0x1762580)
// Original: hkpCachingShapePhantom::setPositionAndLinearCast
// ----------------------------------------------------------------------------
int * hkpCachingShapePhantom::setPositionAndLinearCast(hkpPhantom::Self *a1, float *a2, int a3, int a4, int a5, const hkAabb::Self *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, unsigned int a36, float a37, float a38, float a39, int a40, float a41, int a42)
{
  unsigned int v43; // xmm3_4
  float v44; // xmm1_4
  float v45; // xmm4_4
  int *v46;
  float v47; // xmm0_4
  int v48;
  int v49;
  int v50; // xmm5_4
  __m128i v51;
  int v52;
  float v53; // xmm2_4
  float v54; // xmm1_4
  int v55; // xmm0_4
  int v56;
  int *result;
  int v58;
  int v59;
  int *v60;
  int *savedregs;
  int retaddr;
  float v70;
  int v71;
  char *v72;
  int v73;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint8_t _g4_t_v67[156];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v61)) > _g4_s0 ? (0u + sizeof(_g4_t_v61)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v62)) > _g4_s1 ? (4u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v63)) > _g4_s2 ? (8u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v64)) > _g4_s3 ? (12u + sizeof(_g4_t_v64)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v65)) > _g4_s4 ? (16u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v66)) > _g4_s5 ? (20u + sizeof(_g4_t_v66)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v67)) > _g4_s6 ? (32u + sizeof(_g4_t_v67)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 0u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);

  *((float *)a1 + 52) = *a2;
  *((float *)a1 + 53) = a2[1];
  *((float *)a1 + 54) = a2[2];
  *((float *)a1 + 55) = a2[3];
  (*(void (**)(uint32_t, char *, uint32_t, uint8_t *, int, int, int, int, int, int, uint8_t *, uint32_t))(**((uint32_t **)a1 + 4) + 24))(
    *((uint32_t *)a1 + 4),
    (char *)a1 + 160,
    (float)(0.5 * *(float *)(*(uint32_t *)(*((uint32_t *)a1 + 2) + 112) + 12)) + *(float *)(a3 + 20),
    v67,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    **((uint32_t **)a1 + 4));
  *(float *)&v43 = *(float *)a3 - *a2;
  v44 = *(float *)(a3 + 8) - a2[2];
  v45 = *(float *)(a3 + 12) - a2[3];
  v70 = *(float *)(a3 + 4) - a2[1];
  v71 = LODWORD(v44);
  hkpPhantom::updateBroadPhase(a1, a6);
  a40 = 872415232;
  a18 = 0;
  v46 = *(int **)(*((uint32_t *)a1 + 2) + 112);
  a16 = *v46;
  a17 = v46[1];
  a18 = v46[2];
  a20 = v46[4];
  a21 = v46[5];
  a22 = v46[6];
  a24 = v46[8];
  a25 = v46[9];
  a26 = v46[10];
  a27 = v46[11];
  a28 = v46[12];
  a29 = v46[13];
  a30 = v46[14];
  a31 = v46[15];
  a32 = v46[16];
g4_m128_raw(v51) = v43;
  a33 = v46[17];
  a34 = v46[18];
  v47 = 0.0;
  v48 = v46[19];
  a36 = v43;
  v49 = v46[28];
  a37 = v70;
  a35 = v48;
  a42 = v49;
  a38 = v44;
  v50 = *(uint32_t *)(a3 + 20);
  a39 = v45;
  *(float *)g4_m128_ptr<int32_t>(v51) = (float)((float)(*(float *)&v43 * *(float *)&v43) + (float)(a37 * a37)) + (float)(a38 * a38);
  if ( *(float *)g4_m128_ptr<int32_t>(v51) > 0.0 )
  {
    v52 = ((_mm_cvtsi128_si32(v51) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v51) >> 1));
    v53 = (float)(*(float *)&v52 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v51)) * *(float *)&v52)
                * (float)(*(float *)&v52 * *(float *)&v52));
    v54 = (float)(v53 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v51)) * v53) * (float)(v53 * v53));
    v47 = (float)((float)(1.5 * v54)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v51)) * v54) * (float)(v54 * v54)))
        * *(float *)g4_m128_ptr<int32_t>(v51);
  }
  a41 = v47;
  v55 = *(uint32_t *)(a3 + 16);
  a19 = v50;
  a40 = v55;
  v56 = *((uint32_t *)a1 + 85) - 1;
  v72 = (char *)a1 + 16;
  result = &a16;
  v58 = 8 * v56;
  if ( v56 >= 0 )
  {
    do
    {
      --v56;
      v59 = *((uint32_t *)a1 + 84) + v58;
      v58 -= 8;
      v60 = *(int **)v59;
      v73 = **(uint32_t **)v59;
      a1 = (hkpPhantom::Self *)&a16;
      retaddr = v71;
      savedregs = &a16;
      result = (int *)(*(int (**)(int *, char *, uint32_t, int *))(v73 + 28))(
                        v60,
                        v72,
                        *(uint32_t *)(v59 + 4),
                        &a16);
    }
    while ( v56 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::Destroy_ea1762980  (binary VA: 0x1762980)
// Original: hkpCachingShapePhantom::~hkpCachingShapePhantom
// ----------------------------------------------------------------------------
void hkpCachingShapePhantom::Destroy_ea1762980(hkpCachingShapePhantom::Self *self)
{
  int v1;
  int v2;

  hkpCachingShapePhantom::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 352;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::addOverlappingCollidable  (binary VA: 0x1762b00)
// Original: hkpCachingShapePhantom::addOverlappingCollidable
// ----------------------------------------------------------------------------
hkpCollidable::Self * hkpCachingShapePhantom::addOverlappingCollidable(hkpCachingShapePhantom::Self *self, hkpCollidable::Self *a2)
{
  hkpCollidable::Self *result;
  hkpCachingShapePhantom::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12;
  int address;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef hkpCachingShapePhantom::Self *_g4_t_v18;
  typedef hkpCachingShapePhantom::Self *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef hkpCachingShapePhantom::Self *_g4_t_v21;
  typedef uint32_t _g4_t_v22[20];
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
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v21)) > _g4_s7 ? (28u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v22)) > _g4_s8 ? (32u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v23)) > _g4_s9 ? (112u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (116u + sizeof(_g4_t_v24)) > _g4_s10 ? (116u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v25)) > _g4_s11 ? (120u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v26)) > _g4_s12 ? (124u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v27)) > _g4_s13 ? (128u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (132u + sizeof(_g4_t_v28)) > _g4_s14 ? (132u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v29)) > _g4_s15 ? (136u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (140u + sizeof(_g4_t_v30)) > _g4_s16 ? (140u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v31)) > _g4_s17 ? (144u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (148u + sizeof(_g4_t_v32)) > _g4_s18 ? (148u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v33)) > _g4_s19 ? (152u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (156u + sizeof(_g4_t_v34)) > _g4_s20 ? (156u + sizeof(_g4_t_v34)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 120u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 124u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 128u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 132u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 136u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 140u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 144u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 148u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 152u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 156u);

  result = a2;
  v3 = self;
  if ( *(uint32_t *)a2 != 0 )
  {
    v4 = *((uint32_t *)self + 35);
    v22[1] = (uint32_t)(uintptr_t)(a2);
    v5 = v4 - 1;
    v22[0] = (uint32_t)(uintptr_t)(self);
    v22[2] = 0;
    if ( v5 < 0 )
      goto LABEL_9;
    v6 = 4 * v5;
    do
    {
      result = *(hkpCollidable::Self **)(*((uint32_t *)v3 + 34) + v6);
      if ( result != nullptr )
      {
        v19 = v3;
        result = (hkpCollidable::Self *)(**(int (***)(hkpCollidable::Self *, uint32_t *))result)(result, v22);
        v3 = v19;
      }
      --v5;
      v6 -= 4;
    }
    while ( v5 != -1 );
    if ( v22[2] == 0 )
    {
LABEL_9:
      v7 = *((uint32_t *)v3 + 85);
      if ( v7 == (*((uint32_t *)v3 + 86) & 0x3FFFFFFF) )
      {
        v21 = v3;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpCachingShapePhantom::Self *)((char *)v3 + 336),
          8,
          v14);
        v3 = v21;
        v7 = *((uint32_t *)v21 + 85);
      }
      v8 = *((uint32_t *)v3 + 84);
      *((uint32_t *)v3 + 85) = v7 + 1;
      v20 = (uint32_t *)(v8 + 8 * v7);
      v9 = *(uint32_t *)(*((uint32_t *)v3 + 2) + 112);
      std::memcpy(v22, (const void *)v9, sizeof(v22));
      v28 = 0;
      std::memcpy(v22, (const void *)v9, 24);
      v22[8] = *(uint32_t *)(v9 + 32);
      v22[9] = *(uint32_t *)(v9 + 36);
      v22[10] = *(uint32_t *)(v9 + 40);
      v22[11] = *(uint32_t *)(v9 + 44);
      v22[12] = *(uint32_t *)(v9 + 48);
      v22[13] = *(uint32_t *)(v9 + 52);
      v22[14] = *(uint32_t *)(v9 + 56);
      v22[15] = *(uint32_t *)(v9 + 60);
      v22[16] = *(uint32_t *)(v9 + 64);
      v22[17] = *(uint32_t *)(v9 + 68);
      v22[18] = *(uint32_t *)(v9 + 72);
      v22[19] = *(uint32_t *)(v9 + 76);
      v23 = *(uint32_t *)(v9 + 80);
      v24 = *(uint32_t *)(v9 + 84);
      v25 = *(uint32_t *)(v9 + 88);
      v26 = *(uint32_t *)(v9 + 92);
      v29 = *(uint32_t *)(v9 + 104);
      LOWORD(v30) = *(uint16_t *)(v9 + 108);
      v31 = *(uint32_t *)(v9 + 112);
      v27 = v22[0] + 7952;
      v10 = *((uint32_t *)v3 + 4);
      v22[6] = 0;
      v18 = v3;
      *v20 = (*(int (**)(int, hkpCollidable::Self *, uint32_t *, uint32_t))(v22[0]
                                                                        + 20
                                                                        * *(uint8_t *)(*(uint8_t *)(*(uint32_t *)a2 + 8)
                                                                                             + 35
                                                                                             * *(uint8_t *)(v10 + 8)
                                                                                             + v22[0]
                                                                                             + 416)
                                                                        + 2868))(
               (int)(uintptr_t)(v3) + 16,
               a2,
               v22,
               0);
      result = a2;
      v20[1] = (uint32_t)(uintptr_t)(a2);
      v11 = v28;
      v12 = v28 == 0;
      *((uint8_t *)v18 + 348) = 1;
      if ( !v12 )
      {
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        return (hkpCollidable::Self *)(*(int (**)(uint32_t, int, int, int, int, int, hkpCachingShapePhantom::Self *, uint32_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
                                  *(uint32_t *)(*(uint32_t *)address + 44),
                                  v11,
                                  512,
                                  v15,
                                  v16,
                                  v17,
                                  v18,
                                  v20,
                                  v22[0],
                                  v22[1],
                                  v22[2],
                                  v22[3],
                                  v22[4],
                                  v22[5],
                                  v22[6],
                                  v22[7],
                                  v22[8],
                                  v22[9],
                                  v22[10],
                                  v22[11],
                                  v22[12],
                                  v22[13],
                                  v22[14],
                                  v22[15],
                                  v22[16],
                                  v22[17],
                                  v22[18],
                                  v22[19],
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
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::deallocateInternalArrays  (binary VA: 0x1762d90)
// Original: hkpCachingShapePhantom::deallocateInternalArrays
// ----------------------------------------------------------------------------
int hkpCachingShapePhantom::deallocateInternalArrays(hkpCachingShapePhantom::Self *self)
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
      8 * v2);
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 86) = 0x80000000;
  return hkpShapePhantom::deallocateInternalArrays(self);
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::removeOverlappingCollidable  (binary VA: 0x1762e20)
// Original: hkpCachingShapePhantom::removeOverlappingCollidable
// ----------------------------------------------------------------------------
hkpCachingShapePhantom::Self * hkpCachingShapePhantom::removeOverlappingCollidable(hkpCachingShapePhantom::Self *self, hkpCollidable::Self *a2)
{
  hkpCachingShapePhantom::Self *result;
  int v3;
  int v4;
  hkpCollidable::Self **v5;
  hkpCollidable::Self **v6;
  int v7;
  int v8;
  hkpCachingShapePhantom::Self *v9;
  int v10;
  int v11;
  hkpCachingShapePhantom::Self *v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef hkpCachingShapePhantom::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef hkpCachingShapePhantom::Self *_g4_t_v21;
  typedef uint32_t _g4_t_v22[4];
  typedef uint32_t _g4_t_v23[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v20)) > _g4_s3 ? (12u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v21)) > _g4_s4 ? (12u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);

  v23[1] = -65535;
  v23[0] = ((uint32_t)(uintptr_t)&off_209FEA8);
  result = *(hkpCachingShapePhantom::Self **)a2;
  if ( *(uint32_t *)a2 == 0 )
    return result;
  v3 = *((uint32_t *)self + 85) - 1;
  if ( v3 >= 0 )
  {
    v4 = *((uint32_t *)self + 84);
    v20 = 8 * v3;
    v5 = (hkpCollidable::Self **)(v4 + 8 * v3);
    v6 = v5 - 2;
    if ( a2 == v5[1] )
    {
LABEL_13:
      v22[1] = (uint32_t)(uintptr_t)(a2);
      v22[0] = (uint32_t)(uintptr_t)(self);
      LOBYTE(v22[2]) = 1;
      v18 = *((uint32_t *)self + 35);
      if ( v18 - 1 >= 0 )
      {
        v17 = v3;
        v10 = 4 * (v18 - 1);
        v11 = v18 - 1;
        v12 = self;
        do
        {
          v13 = *(uint32_t *)(*((uint32_t *)v12 + 34) + v10);
          if ( v13 != 0 )
          {
            v19 = v12;
            G4_VCALL<void>(v13, 4, v22);
            v12 = v19;
          }
          --v11;
          v10 -= 4;
        }
        while ( v11 != -1 );
        v3 = v17;
        v4 = *((uint32_t *)self + 84);
        v5 = (hkpCollidable::Self **)(v4 + v20);
      }
      if ( *v5 != nullptr )
      {
        G4_VCALL<void>(*v5, 36, v23);
        v4 = *((uint32_t *)self + 84);
      }
      v14 = *((uint32_t *)self + 85) - 1;
      *((uint32_t *)self + 85) = v14;
      if ( v3 != v14 )
      {
        v15 = (uint32_t *)(v4 + 8 * v14);
        v16 = (uint32_t *)(v20 + v4);
        *v16 = *v15;
        v16[1] = v15[1];
      }
      *((uint8_t *)self + 348) = 1;
      return self;
    }
    while ( --v3 != -1 )
    {
      v20 = (int)(uintptr_t)(v6) - v4;
      v5 = v6;
      v6 -= 2;
      if ( a2 == v6[3] )
        goto LABEL_13;
    }
  }
  v22[1] = (uint32_t)(uintptr_t)(a2);
  v22[0] = (uint32_t)(uintptr_t)(self);
  LOBYTE(v22[2]) = 0;
  v7 = *((uint32_t *)self + 35) - 1;
  result = (hkpCachingShapePhantom::Self *)v22;
  v8 = 4 * v7;
  if ( v7 >= 0 )
  {
    v9 = self;
    do
    {
      result = *(hkpCachingShapePhantom::Self **)(*((uint32_t *)v9 + 34) + v8);
      if ( result != nullptr )
      {
        v21 = v9;
        result = (hkpCachingShapePhantom::Self *)G4_VCALL<int>(result, 4, v22);
        v9 = v21;
      }
      --v7;
      v8 -= 4;
    }
    while ( v7 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::Construct  (binary VA: 0x1763010)
// Original: hkpCachingShapePhantom::hkpCachingShapePhantom
// ----------------------------------------------------------------------------
void hkpCachingShapePhantom::Construct(hkpCachingShapePhantom::Self *self, const hkpShape::Self *a2, const hkTransformf::Self *a3, unsigned int a4)
{
  hkpShapePhantom::Construct(self, a2, a3);
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 85) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FEE8);
  *((uint32_t *)self + 86) = 0x80000000;
  *((uint8_t *)self + 348) = 0;
  *((uint32_t *)self + 11) = a4;
}

// ----------------------------------------------------------------------------
// Function: hkpCachingShapePhantom::clone  (binary VA: 0x1763080)
// Original: hkpCachingShapePhantom::clone
// ----------------------------------------------------------------------------
int * hkpCachingShapePhantom::clone(hkpCachingShapePhantom::Self *self)
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
  typedef hkpCachingShapePhantom::Self *_g4_t_v55;
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
  v3 = (int *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, unsigned int, hkpCachingShapePhantom::Self *, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
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
  hkpCachingShapePhantom::Construct(
    (hkpCachingShapePhantom::Self *)v3,
    v1,
    (const hkTransformf::Self *)(v56 + 40),
    v51);
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
// Function: hkpCachingShapePhantom::ensureDeterministicOrder  (binary VA: 0x1763660)
// Original: hkpCachingShapePhantom::ensureDeterministicOrder
// ----------------------------------------------------------------------------
void hkpCachingShapePhantom::ensureDeterministicOrder(hkpCachingShapePhantom::Self *self)
{
  int v1;

  if ( *((uint8_t *)self + 348) != 0 )
  {
    v1 = *((uint32_t *)self + 85);
    if ( v1 > 1 )
      hkAlgorithm::quickSortRecursive_099293(
        *((uint32_t *)self + 84),
        0,
        v1 - 1);
    *((uint8_t *)self + 348) = 0;
  }
}


