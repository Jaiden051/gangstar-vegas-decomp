#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpStiffSp.h"

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringConstraintData::Atoms::staticClass  (binary VA: 0x1712a70)
// Original: hkpStiffSpringConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpStiffSpringConstraintData::Atoms::staticClass()
{
  return &hkpStiffSpringConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringConstraintData::staticClass  (binary VA: 0x1712a90)
// Original: hkpStiffSpringConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpStiffSpringConstraintData::staticClass()
{
  return &hkpStiffSpringConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringConstraintData::getRuntimeInfo  (binary VA: 0x1715fa0)
// Original: hkpStiffSpringConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
int64_t hkpStiffSpringConstraintData::getRuntimeInfo(int a1, char a2, uint64_t *a3)
{
  int64_t result; // rax

  LODWORD(result) = a2 != 0 ? 8 : 0;
  HIDWORD(result) = a2 != 0;
  *a3 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringConstraintData::isValid  (binary VA: 0x1715fd0)
// Original: hkpStiffSpringConstraintData::isValid
// ----------------------------------------------------------------------------
hkpStiffSpringConstraintData::Self * hkpStiffSpringConstraintData::isValid(hkpStiffSpringConstraintData::Self *self, int a2)
{
  hkpStiffSpringConstraintData::Self *result;
  float v3; // xmm0_4

  result = self;
  v3 = *(float *)(a2 + 84);
  *(uint8_t *)self = v3 > 0.0 && *(float *)(a2 + 88) >= v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringConstraintData::getType  (binary VA: 0x1716010)
// Original: hkpStiffSpringConstraintData::getType
// ----------------------------------------------------------------------------
int hkpStiffSpringConstraintData::getType()
{
  return 8;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringConstraintData::Destroy  (binary VA: 0x1716020)
// Original: hkpStiffSpringConstraintData::~hkpStiffSpringConstraintData
// ----------------------------------------------------------------------------
void hkpStiffSpringConstraintData::Destroy(hkpStiffSpringConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringConstraintData::getConstraintInfo  (binary VA: 0x1716040)
// Original: hkpStiffSpringConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
int hkpStiffSpringConstraintData::getConstraintInfo(int a1, int a2)
{
  return (int)(uintptr_t)(hkpConstraintData::getConstraintInfoUtil(a1 + 16, 76, a2));
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringConstraintData::Destroy_ea1716080  (binary VA: 0x1716080)
// Original: hkpStiffSpringConstraintData::~hkpStiffSpringConstraintData
// ----------------------------------------------------------------------------
void hkpStiffSpringConstraintData::Destroy_ea1716080(hkpStiffSpringConstraintData::Self *self)
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
// Function: hkpStiffSpringConstraintData::Construct  (binary VA: 0x17160e0)
// Original: hkpStiffSpringConstraintData::hkpStiffSpringConstraintData
// ----------------------------------------------------------------------------
void hkpStiffSpringConstraintData::Construct(hkpStiffSpringConstraintData::Self *self)
{
  *((uint32_t *)self + 17) = 2139095022;
  *((uint32_t *)self + 18) = 2139095022;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209CAC8);
  *((uint16_t *)self + 8) = 3;
  *((uint16_t *)self + 32) = 23;
  *((uint32_t *)self + 19) = 1602224112;
  *((uint16_t *)self + 40) = 6;
  *((uint32_t *)self + 8) = 0;
  *((uint8_t *)self + 66) = 1;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringConstraintAtom::staticClass  (binary VA: 0x1719b90)
// Original: hkpStiffSpringConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpStiffSpringConstraintAtom::staticClass()
{
  return &hkpStiffSpringConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::ConstraintInfo::staticClass  (binary VA: 0x1751fe0)
// Original: hkpStiffSpringChainData::ConstraintInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpStiffSpringChainData::ConstraintInfo::staticClass()
{
  return &hkpStiffSpringChainDataConstraintInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::staticClass  (binary VA: 0x1752000)
// Original: hkpStiffSpringChainData::staticClass
// ----------------------------------------------------------------------------
void * hkpStiffSpringChainData::staticClass()
{
  return &hkpStiffSpringChainDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::isValid  (binary VA: 0x1773e10)
// Original: hkpStiffSpringChainData::isValid
// ----------------------------------------------------------------------------
hkpStiffSpringChainData::Self * hkpStiffSpringChainData::isValid(hkpStiffSpringChainData::Self *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::getNumConstraintInfos  (binary VA: 0x1773e20)
// Original: hkpStiffSpringChainData::getNumConstraintInfos
// ----------------------------------------------------------------------------
int hkpStiffSpringChainData::getNumConstraintInfos(hkpStiffSpringChainData::Self *self)
{
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::getType  (binary VA: 0x1773e30)
// Original: hkpStiffSpringChainData::getType
// ----------------------------------------------------------------------------
int hkpStiffSpringChainData::getType()
{
  return 100;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::getConstraintInfo  (binary VA: 0x1773e40)
// Original: hkpStiffSpringChainData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpStiffSpringChainData::getConstraintInfo(int a1, uint32_t *a2)
{
  int v3;

  a2[4] = a1 + 16;
  a2[5] = 16;
  a2[2] = 0;
  a2[3] = 0;
  a2[1] = 16;
  *a2 = 0;
  v3 = *(uint32_t *)(a1 + 36);
  a2[2] = v3;
  a2[3] = v3;
  a2[1] = ((60 * v3 + 4 * (5 * v3 + 5) + 47) & 0xFFFFFFF0) + 16;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::getRuntimeInfo  (binary VA: 0x1773ea0)
// Original: hkpStiffSpringChainData::getRuntimeInfo
// ----------------------------------------------------------------------------
int hkpStiffSpringChainData::getRuntimeInfo(int a1, char a2, int *a3)
{
  int v3;
  int64_t v4; // rax

  v3 = 0;
  v4 = (unsigned int)(uintptr_t)(a3);
  if ( a2 != 0 )
  {
    HIDWORD(v4) = *(uint32_t *)(a1 + 36);
    v3 = 8 * HIDWORD(v4);
  }
  *a3 = v3;
  *(uint32_t *)(v4 + 4) = HIDWORD(v4);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::Destroy  (binary VA: 0x1773ed0)
// Original: hkpStiffSpringChainData::~hkpStiffSpringChainData
// ----------------------------------------------------------------------------
void hkpStiffSpringChainData::Destroy(hkpStiffSpringChainData::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A05C8);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      48 * v1);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::Destroy_ea1773f40  (binary VA: 0x1773f40)
// Original: hkpStiffSpringChainData::~hkpStiffSpringChainData
// ----------------------------------------------------------------------------
void hkpStiffSpringChainData::Destroy_ea1773f40(hkpStiffSpringChainData::Self *self)
{
  int v1;
  int v2;

  hkpStiffSpringChainData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::Construct  (binary VA: 0x1773fa0)
// Original: hkpStiffSpringChainData::hkpStiffSpringChainData
// ----------------------------------------------------------------------------
void hkpStiffSpringChainData::Construct(hkpStiffSpringChainData::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A05C8);
  *((uint16_t *)self + 8) = 1;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 11) = 1058642330;
  *((uint32_t *)self + 12) = 1065353216;
  *((uint32_t *)self + 13) = 843893965;
  hkpBridgeConstraintAtom::init((hkpStiffSpringChainData::Self *)((char *)self + 16), self);
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::Construct  (binary VA: 0x1774660)
// Original: hkpStiffSpringChainData::hkpStiffSpringChainData
// ----------------------------------------------------------------------------
hkpBridgeConstraintAtom::Self * hkpStiffSpringChainData::Construct(hkpConstraintData::Self **a1, int a2)
{
  hkpBridgeConstraintAtom::Self *result;

  hkpConstraintData::Construct(a1);
  result = (hkpBridgeConstraintAtom::Self *)((uint32_t)(uintptr_t)&off_20A05C8);
  *a1 = (hkpConstraintData::Self *)((uint32_t)(uintptr_t)&off_20A05C8);
  if ( a2 != 0 )
  {
    hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), a1[6]);
    return hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), (hkpConstraintData::Self *)a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringChainData::addConstraintInfoInBodySpace  (binary VA: 0x17746d0)
// Original: hkpStiffSpringChainData::addConstraintInfoInBodySpace
// ----------------------------------------------------------------------------
int hkpStiffSpringChainData::addConstraintInfoInBodySpace(hkpStiffSpringChainData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v4 = *((uint32_t *)self + 9);
  if ( v4 == (*((uint32_t *)self + 10) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpStiffSpringChainData::Self *)((char *)self + 32),
      48,
      v8);
    v4 = *((uint32_t *)self + 9);
  }
  v5 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 9) = v4 + 1;
  result = v5 + 48 * v4;
  *(uint32_t *)result = *(uint32_t *)a2;
  *(uint32_t *)(result + 4) = *((uint32_t *)a2 + 1);
  *(uint32_t *)(result + 8) = *((uint32_t *)a2 + 2);
  *(uint32_t *)(result + 12) = *((uint32_t *)a2 + 3);
  *(uint32_t *)(result + 16) = *(uint32_t *)a3;
  *(uint32_t *)(result + 20) = *((uint32_t *)a3 + 1);
  *(uint32_t *)(result + 24) = *((uint32_t *)a3 + 2);
  v7 = *((uint32_t *)a3 + 3);
  *(float *)(result + 32) = a4;
  *(uint32_t *)(result + 28) = v7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStiffSpringDrawer::drawConstraint  (binary VA: 0x1aed5d0)
// Original: hkpStiffSpringDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpStiffSpringDrawer::drawConstraint(hkpStiffSpringDrawer::Self *self, const hkpStiffSpringConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  hkpStiffSpringDrawer::Self *v7;
  hkDebugDisplayHandler::Self *v8;
  __m128 v9;
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  __m128 v14;
  __m128 v15;
  int v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm4_4
  __m128i m128_i128;
  float v20;
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm1_4
  float v25; // xmm5_4
  float v26; // xmm2_4
  float v27; // xmm4_4
  float v28; // xmm0_4
  void (*v29)(uint8_t *, hkDebugDisplayHandler::Self *, char *, float *, int, int, int, int, uint32_t, uint32_t, char *, char *, uint32_t, uint32_t, float *, uint32_t, uint32_t, int, int);
  int v30;
  int v31;
  int v32;
  int savedregs;
  void *retaddr;
  typedef int _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float *_g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef hkTransformf::Self *_g4_t_v40;
  typedef hkTransformf::Self *_g4_t_v41;
  typedef hkTransformf::Self *_g4_t_v42;
  typedef hkTransformf::Self *_g4_t_v43;
  typedef float _g4_t_v44;
  typedef float *_g4_t_v45;
  typedef void (*_g4_t_v46)(uint8_t *, hkDebugDisplayHandler::Self *, char *, float *, int, int, int, int, uint32_t, uint32_t, char *, char *, uint32_t, uint32_t, float *, uint32_t, uint32_t, int, int);
  typedef void (*_g4_t_v47)(uint8_t *);
  typedef int _g4_t_v48;
  typedef void *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52[4];
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57[6];
  typedef hkpStiffSpringDrawer::Self **_g4_t_v58;
  typedef float *_g4_t_v59;
  typedef float *_g4_t_v60;
  typedef int _g4_t_v61;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v35)) > _g4_s1 ? (16u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v36)) > _g4_s2 ? (20u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v37)) > _g4_s3 ? (28u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v38)) > _g4_s4 ? (32u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v39)) > _g4_s5 ? (36u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v40)) > _g4_s6 ? (40u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v41)) > _g4_s7 ? (40u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v42)) > _g4_s8 ? (40u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v43)) > _g4_s9 ? (44u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v44)) > _g4_s10 ? (44u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v45)) > _g4_s11 ? (48u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v46)) > _g4_s12 ? (48u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v47)) > _g4_s13 ? (48u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v48)) > _g4_s14 ? (52u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v49)) > _g4_s15 ? (52u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v50)) > _g4_s16 ? (56u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v51)) > _g4_s17 ? (56u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v52)) > _g4_s18 ? (60u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v53)) > _g4_s19 ? (64u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v54)) > _g4_s20 ? (68u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v55)) > _g4_s21 ? (72u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v56)) > _g4_s22 ? (76u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v57)) > _g4_s23 ? (80u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v58)) > _g4_s24 ? (104u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v59)) > _g4_s25 ? (108u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v60)) > _g4_s26 ? (112u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v61)) > _g4_s27 ? (116u + sizeof(_g4_t_v61)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 104u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 108u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 112u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 116u);

  v58 = &self;
  v7 = self;
  v43 = (hkTransformf::Self *)(a3);
  v40 = (hkTransformf::Self *)(a4);
  v8 = a5;
  v50 = a6;
  v48 = a7;
  v45 = (float *)a2;
  hkpPrimitiveDrawer::setDisplayHandler((hkpStiffSpringDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters(v7, v43, v40);
  hkVector4f::setTransformedPos((hkpStiffSpringDrawer::Self *)((char *)v7 + 80), v40, (const hkVector4f::Self *)(v45 + 12));
  hkVector4f::setTransformedPos((hkpStiffSpringDrawer::Self *)((char *)v7 + 64), v43, (const hkVector4f::Self *)(v45 + 8));
  hkpConstraintDrawer::drawPivots(v7, v50, v48);
  hkpConstraintDrawer::drawBodyFrames(v7, v50, v48);
g4_m128_raw(v9) = *((unsigned int *)v7 + 20);
g4_m128_lane<float>(v9, 0) =g4_m128_lane<float>(v9, 0) - *((float *)v7 + 16);
  v10 = *((float *)v7 + 21);
  v44 = *((float *)v7 + 16);
  v38 = *((float *)v7 + 18);
  v14 = v9;
  v11 = *((float *)v7 + 22) - v38;
  v41 = (hkTransformf::Self *)g4_m128_lane<int32_t>(v9, 0);
  v53 =g4_m128_lane<float>(v9, 0);
  v12 = v10 - *((float *)v7 + 17);
  v39 = *((float *)v7 + 17);
g4_m128_lane<int32_t>(v9, 0) = *((uint32_t *)v7 + 19);
  v13 = *((float *)v7 + 23) -g4_m128_lane<float>(v9, 0);
  v54 = v12;
  v55 = v11;
  v36 =g4_m128_lane<float>(v9, 0);
  v35 = v13;
g4_m128_lane<float>(v14, 0) = (float)((float)(g4_m128_lane<float>(v14, 0) *g4_m128_lane<float>(v14, 0)) + (float)(v12 * v12)) + (float)(v11 * v11);
  if (g4_m128_lane<float>(v14, 0) <= 0.0 )
  {
    v20 = 0.0;
    v21 = 0.0;
  }
  else
  {
g4_m128_raw(v15) = 0x3FC00000u;
    v16 = ((_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v14))) + 2139095040) >> 31)
        & (1597463174 - (_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v14))) >> 1));
    v17 = (float)(*(float *)&v16 * 1.5)
        - (float)((float)((float)(0.5 *g4_m128_lane<float>(v14, 0)) * *(float *)&v16) * (float)(*(float *)&v16 * *(float *)&v16));
    v18 = (float)(v17 * 1.5) - (float)((float)((float)(0.5 *g4_m128_lane<float>(v14, 0)) * v17) * (float)(v17 * v17));
    m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v14));
g4_m128_lane<float>(v15, 0) = (float)(1.5 * v18) - (float)((float)((float)(0.5 *g4_m128_lane<float>(v14, 0)) * v18) * (float)(v18 * v18));
    *(float *)g4_m128_ptr<int32_t>(m128_i128) =g4_m128_lane<float>(v14, 0) *g4_m128_lane<float>(v15, 0);
    v20 = COERCE_FLOAT(_mm_cvtsi128_si32(m128_i128));
    v21 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmple_ss(v14, g4_m128_from<__m128>(0LL)), v15), 0);
  }
  v22 = *(float *)&v41 * v21;
  v23 = v12 * v21;
  v24 = v45[21];
  v25 = v11 * v21;
  v26 = v24 * (float)(*(float *)&v41 * v21);
  v27 = v35 * v21;
  v28 = fmaxf(fminf(v20, v45[22]), v24);
  v29 = *(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, char *, float *, int, int, int, int, uint32_t, uint32_t, char *, char *, uint32_t, uint32_t, float *, uint32_t, uint32_t, int, int))(*(uint32_t *)v8 + 72);
  v57[0] = v26 + v44;
  v46 = v29;
  v57[1] = (float)(v24 * v23) + v39;
  v53 = (float)(v22 * v28) + v44;
  v54 = (float)(v23 * v28) + v39;
  v57[2] = (float)(v24 * v25) + v38;
  v57[3] = (float)(v24 * v27) + v36;
  v55 = (float)(v25 * v28) + v38;
  v56 = (float)(v27 * v28) + v36;
  v30 = hkColor::rgbFromFloats(nullptr, 0x3F000000u, 1.0, 0x3F800000u);
  v46(
    v52,
    v8,
    (char *)v7 + 64,
    v57,
    v30,
    v50,
    v48,
    v34,
    LODWORD(v35),
    LODWORD(v36),
    (char *)v7 + 64,
    (char *)v7 + 80,
    LODWORD(v38),
    LODWORD(v39),
    v57,
    LODWORD(v44),
    (uint32_t)(uintptr_t)(v46),
    v48,
    v50);
  v47 = *(void (**)(uint8_t *))(*(uint32_t *)v8 + 72);
  v31 = hkColor::rgbFromFloats(nullptr, 0x3F800000u, 0.4f, 0x3F800000u);
  savedregs = v51;
  v61 = v31;
  v59 = (float *)v42;
  v58 = (hkpStiffSpringDrawer::Self **)v8;
  v60 = &v53;
  v47(v52);
  v32 = *(uint32_t *)v8;
  retaddr = v49;
  savedregs = v51;
  v60 = v37;
  v58 = (hkpStiffSpringDrawer::Self **)v8;
  LODWORD(v57[5]) = (uint32_t)(uintptr_t)(v52);
  v59 = &v53;
  v61 = -65536;
  return (*(int (**)(uint8_t *))(v32 + 72))(v52);
}


