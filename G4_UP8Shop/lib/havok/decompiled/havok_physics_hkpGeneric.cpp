#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpGeneric.h"

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::staticClass  (binary VA: 0x1730960)
// Original: hkpGenericConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpGenericConstraintData::staticClass()
{
  return &hkpGenericConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintDataScheme::ConstraintInfo::staticClass  (binary VA: 0x17314c0)
// Original: hkpGenericConstraintDataScheme::ConstraintInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpGenericConstraintDataScheme::ConstraintInfo::staticClass()
{
  return &hkpGenericConstraintDataSchemeConstraintInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintDataScheme::staticClass  (binary VA: 0x17314e0)
// Original: hkpGenericConstraintDataScheme::staticClass
// ----------------------------------------------------------------------------
void * hkpGenericConstraintDataScheme::staticClass()
{
  return &hkpGenericConstraintDataSchemeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintDataScheme::Construct  (binary VA: 0x17636c0)
// Original: hkpGenericConstraintDataScheme::hkpGenericConstraintDataScheme
// ----------------------------------------------------------------------------
int hkpGenericConstraintDataScheme::Construct(uint32_t *a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 )
  {
    *a1 = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[1] = 16;
    hkpConstraintConstructionKit::computeConstraintInfo(a1 + 7, a1);
    result = a1[1];
    *a1 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::getConstraintInfo  (binary VA: 0x1781b60)
// Original: hkpGenericConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
__m128i * hkpGenericConstraintData::getConstraintInfo(uint32_t *a1, __m128i *a2)
{
  *a2 = g4_m128_from<__m128i>(0LL);
g4_m128_lane<int32_t>(a2[1], 0) = (int32_t)(uintptr_t)(a1 + 4);
g4_m128_lane<int32_t>(a2[1], 1) = 16;
g4_m128_lane<int32_t>(*(a2), 0) = a1[8];
g4_m128_lane<int32_t>(*(a2), 1) = a1[9];
g4_m128_lane<int32_t>(*(a2), 2) = a1[10];
g4_m128_lane<int32_t>(*(a2), 3) = a1[11];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::getRuntimeInfo  (binary VA: 0x1781ba0)
// Original: hkpGenericConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpGenericConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  int v4;

  v4 = *(uint32_t *)(a1 + 40);
  a3[1] = v4;
  *a3 = 8 * v4;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::isValid  (binary VA: 0x1781bc0)
// Original: hkpGenericConstraintData::isValid
// ----------------------------------------------------------------------------
hkpGenericConstraintData::Self * hkpGenericConstraintData::isValid(hkpGenericConstraintData::Self *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::getType  (binary VA: 0x1781bd0)
// Original: hkpGenericConstraintData::getType
// ----------------------------------------------------------------------------
int hkpGenericConstraintData::getType()
{
  return 10;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::Destroy  (binary VA: 0x1781be0)
// Original: hkpGenericConstraintData::~hkpGenericConstraintData
// ----------------------------------------------------------------------------
void hkpGenericConstraintData::Destroy(hkpGenericConstraintData::Self *self)
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
  int v10;
  int v11;
  int v12;

  v1 = 0;
  v2 = *((uint32_t *)self + 22);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0A28);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 21) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v12 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v12;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 22);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 22) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 21),
      4 * v8);
  v9 = *((uint32_t *)self + 20);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  *((uint32_t *)self + 19) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 18),
      4 * v9);
  v10 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 20) = 0x80000000;
  *((uint32_t *)self + 16) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 15),
      4 * v10);
  v11 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0x80000000;
  *((uint32_t *)self + 13) = 0;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      16 * v11);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::Destroy_ea1781d50  (binary VA: 0x1781d50)
// Original: hkpGenericConstraintData::~hkpGenericConstraintData
// ----------------------------------------------------------------------------
void hkpGenericConstraintData::Destroy_ea1781d50(hkpGenericConstraintData::Self *self)
{
  int v1;
  int v2;

  hkpGenericConstraintData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::Construct  (binary VA: 0x1781db0)
// Original: hkpGenericConstraintData::hkpGenericConstraintData
// ----------------------------------------------------------------------------
void hkpGenericConstraintData::Construct(hkpGenericConstraintData::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0A28);
  *((uint16_t *)self + 8) = 1;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0x80000000;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0x80000000;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 9) = 16;
  hkpBridgeConstraintAtom::init((hkpGenericConstraintData::Self *)((char *)self + 16), self);
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::Construct  (binary VA: 0x1781e70)
// Original: hkpGenericConstraintData::hkpGenericConstraintData
// ----------------------------------------------------------------------------
hkpBridgeConstraintAtom::Self * hkpGenericConstraintData::Construct(hkpConstraintData::Self *a1, int a2)
{
  hkpConstraintData::Construct(a1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A0A28);
  if ( a2 == 0 )
    return (hkpBridgeConstraintAtom::Self *)hkpGenericConstraintDataScheme::Construct(
                                        (uint32_t *)a1 + 8,
                                        0);
  hkpBridgeConstraintAtom::init((hkpConstraintData::Self *)((char *)a1 + 16), *((hkpConstraintData::Self **)a1 + 6));
  hkpGenericConstraintDataScheme::Construct((uint32_t *)a1 + 8, a2);
  return hkpBridgeConstraintAtom::init((hkpConstraintData::Self *)((char *)a1 + 16), a1);
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::getParameters  (binary VA: 0x1781f00)
// Original: hkpGenericConstraintData::getParameters
// ----------------------------------------------------------------------------
int hkpGenericConstraintData::getParameters(hkpGenericConstraintData::Self *self, int a2)
{
  return *((uint32_t *)self + 12) + 16 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::setParameters  (binary VA: 0x1781f10)
// Original: hkpGenericConstraintData::setParameters
// ----------------------------------------------------------------------------
int hkpGenericConstraintData::setParameters(hkpGenericConstraintData::Self *self, int a2, int a3, const hkVector4f::Self *a4)
{
  int v4;
  int result;
  char *v6;
  int v7;

  v4 = a2;
  result = 16 * a2;
  v6 = (char *)a4 - 16 * a2;
  if ( a2 < a2 + a3 )
  {
    do
    {
      v7 = *((uint32_t *)self + 12);
      ++v4;
      *(uint32_t *)(v7 + result) = *(uint32_t *)&v6[result];
      *(uint32_t *)(v7 + result + 4) = *(uint32_t *)&v6[result + 4];
      *(uint32_t *)(v7 + result + 8) = *(uint32_t *)&v6[result + 8];
      *(uint32_t *)(v7 + result + 12) = *(uint32_t *)&v6[result + 12];
      result += 16;
    }
    while ( v4 != a2 + a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::constrainAllLinearW  (binary VA: 0x1781f80)
// Original: hkpGenericConstraintData::constrainAllLinearW
// ----------------------------------------------------------------------------
int hkpGenericConstraintData::constrainAllLinearW(int a1, int a2, int a3, int a4, uint32_t *a5, int a6, int *a7)
{
  int v7;
  int v8;
  int result;
  uint32_t v10[15];

  v10[0] = *a5;
  v10[1] = a5[1];
  v10[2] = a5[2];
  v10[3] = a5[3];
  v10[4] = a5[4];
  v7 = a5[5];
  v10[8] = 1065353216;
  v10[5] = v7;
  v8 = a5[6];
  memset(&v10[9], 0, 12);
  v10[6] = v8;
  v10[7] = a5[7];
  hk1dLinearBilateralConstraintBuildJacobian((int)(uintptr_t)(v10), a6, a7);
  v10[8] = 0;
  v10[9] = 1065353216;
  v10[10] = 0;
  v10[11] = 0;
  hk1dLinearBilateralConstraintBuildJacobian((int)(uintptr_t)(v10), a6, a7);
  v10[8] = 0;
  v10[9] = 0;
  v10[10] = 1065353216;
  v10[11] = 0;
  result = hk1dLinearBilateralConstraintBuildJacobian((int)(uintptr_t)(v10), a6, a7);
  a5[46] += 3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::setLinearFrictionW  (binary VA: 0x17820b0)
// Original: hkpGenericConstraintData::setLinearFrictionW
// ----------------------------------------------------------------------------
int hkpGenericConstraintData::setLinearFrictionW(int a1, int *a2, float **a3, int a4, int a5, int a6, int *a7)
{
  int v8;
  int v9;
  int v10;
  float v11; // xmm0_4
  float v12;
  float *v13;
  float *v14;
  float v15; // xmm0_4
  int v16;
  int result;
  float v18[15];

  v8 = a7[1];
  v9 = *a2;
  *a2 += 4;
  v10 = 16 * *(uint32_t *)(v9 + 4);
  v18[0] = *(float *)a5 - *(float *)(a5 + 16);
  v11 = *(float *)(a5 + 4) - *(float *)(a5 + 20);
  v18[4] = *(float *)(v10 + a5 + 32);
  v18[5] = *(float *)(v10 + a5 + 36);
  v12 = *(float *)(v10 + a5 + 44);
  v18[6] = *(float *)(v10 + a5 + 40);
  v18[1] = v11;
  v18[7] = v12;
  v13 = *a3;
  v14 = *a3;
  v18[2] = *(float *)(a5 + 8) - *(float *)(a5 + 24);
  v18[3] = *(float *)(a5 + 12) - *(float *)(a5 + 28);
  *a3 = v14 + 4;
  v15 = *v13;
  v16 = 8 * *(uint32_t *)(a5 + 184);
  v18[8] = v15;
  LODWORD(v18[9]) = v8 + v16;
  result = hk1dLinearFrictionBuildJacobian((int)(uintptr_t)(v18), a6, a7);
  ++*(uint32_t *)(a5 + 184);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::hatchScheme  (binary VA: 0x17821a0)
// Original: hkpGenericConstraintData::hatchScheme
// ----------------------------------------------------------------------------
char * hkpGenericConstraintData::hatchScheme(int a1, int a2, float *a3, int *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  char *result;
  float *v7;
  int v8;
  float *v9;
  float v10; // xmm0_4
  int v11;
  int v12;
  float *v13;
  int v14;
  float *v15;
  float *v16;
  float v17; // xmm4_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm3_4
  __m128i v21;
  float v22; // xmm1_4
  float v23; // xmm0_4
  __m128i v24;
  int v25;
  float *v26;
  float v27;
  float v28;
  int v29;
  float *v30;
  float *v31;
  float v32; // xmm0_4
  float v33; // xmm1_4
  float *v34;
  float *v35;
  float *v36;
  int v37;
  unsigned int v38;
  char v39; // si
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  float *v46;
  float v47;
  float *v48;
  unsigned int v49;
  char v50;
  int v51;
  int v52;
  int v53;
  float *v54;
  float v55; // xmm2_4
  float v56; // xmm1_4
  int v57;
  float *v58;
  float v59;
  int v60;
  float *v61;
  int v62;
  float *v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  int v69;
  float *v70;
  float *v71;
  uint32_t *v72;
  int v73;
  float *v74;
  float *v75;
  float *v76;
  float v77; // xmm1_4
  float *v78;
  float v79; // xmm2_4
  float v80; // xmm0_4
  float v81; // xmm4_4
  float v82; // xmm7_4
  float v83; // xmm6_4
  float v84; // xmm5_4
  float v85; // xmm3_4
  float v86; // xmm2_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  int v89;
  int v90;
  int v91;
  float v92; // xmm0_4
  float v93; // xmm0_4
  float v94; // xmm4_4
  float v95; // xmm5_4
  float *v96;
  typedef const hkMatrix3f::Self *_g4_t_v97;
  typedef const hkMatrix3f::Self *_g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef int _g4_t_v103;
  typedef uint32_t *_g4_t_v104;
  typedef float _g4_t_v105;
  typedef int _g4_t_v106;
  typedef char _g4_t_v107;
  typedef float _g4_t_v108;
  typedef int _g4_t_v109;
  typedef float _g4_t_v110;
  typedef int _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef signed int _g4_t_v114;
  typedef float _g4_t_v115;
  typedef char _g4_t_v116;
  typedef char _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119[4];
  typedef float *_g4_t_v120[4];
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float *_g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef float _g4_t_v151[24];
  typedef float _g4_t_v152[4];
  typedef float _g4_t_v153[16];
  typedef float _g4_t_v154;
  typedef float *_g4_t_v155;
  typedef float _g4_t_v156;
  typedef float _g4_t_v157;
  typedef float _g4_t_v158;
  typedef float _g4_t_v159;
  typedef float _g4_t_v160;
  typedef float _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef float _g4_t_v164;
  typedef float _g4_t_v165;
  typedef float _g4_t_v166;
  typedef float _g4_t_v167;
  typedef float _g4_t_v168;
  typedef float _g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef float _g4_t_v174;
  typedef float _g4_t_v175;
  typedef float _g4_t_v176;
  typedef float _g4_t_v177;
  typedef float _g4_t_v178;
  typedef const hkTransformf::Self *_g4_t_v179;
  typedef int _g4_t_v180;
  enum : size_t {
    _g4_s0 = 592u,
    _g4_s1 = (8u + sizeof(_g4_t_v97)) > _g4_s0 ? (8u + sizeof(_g4_t_v97)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v98)) > _g4_s1 ? (8u + sizeof(_g4_t_v98)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v99)) > _g4_s2 ? (28u + sizeof(_g4_t_v99)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v100)) > _g4_s3 ? (28u + sizeof(_g4_t_v100)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v101)) > _g4_s4 ? (36u + sizeof(_g4_t_v101)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v102)) > _g4_s5 ? (36u + sizeof(_g4_t_v102)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v103)) > _g4_s6 ? (40u + sizeof(_g4_t_v103)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v104)) > _g4_s7 ? (44u + sizeof(_g4_t_v104)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v105)) > _g4_s8 ? (48u + sizeof(_g4_t_v105)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v106)) > _g4_s9 ? (48u + sizeof(_g4_t_v106)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v107)) > _g4_s10 ? (48u + sizeof(_g4_t_v107)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v108)) > _g4_s11 ? (48u + sizeof(_g4_t_v108)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v109)) > _g4_s12 ? (48u + sizeof(_g4_t_v109)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v110)) > _g4_s13 ? (52u + sizeof(_g4_t_v110)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v111)) > _g4_s14 ? (52u + sizeof(_g4_t_v111)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v112)) > _g4_s15 ? (56u + sizeof(_g4_t_v112)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v113)) > _g4_s16 ? (56u + sizeof(_g4_t_v113)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v114)) > _g4_s17 ? (56u + sizeof(_g4_t_v114)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v115)) > _g4_s18 ? (56u + sizeof(_g4_t_v115)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v116)) > _g4_s19 ? (56u + sizeof(_g4_t_v116)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v117)) > _g4_s20 ? (56u + sizeof(_g4_t_v117)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v118)) > _g4_s21 ? (56u + sizeof(_g4_t_v118)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v119)) > _g4_s22 ? (64u + sizeof(_g4_t_v119)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v120)) > _g4_s23 ? (80u + sizeof(_g4_t_v120)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v121)) > _g4_s24 ? (96u + sizeof(_g4_t_v121)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v122)) > _g4_s25 ? (100u + sizeof(_g4_t_v122)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v123)) > _g4_s26 ? (104u + sizeof(_g4_t_v123)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v124)) > _g4_s27 ? (108u + sizeof(_g4_t_v124)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v125)) > _g4_s28 ? (112u + sizeof(_g4_t_v125)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v126)) > _g4_s29 ? (116u + sizeof(_g4_t_v126)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v127)) > _g4_s30 ? (120u + sizeof(_g4_t_v127)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v128)) > _g4_s31 ? (124u + sizeof(_g4_t_v128)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v129)) > _g4_s32 ? (128u + sizeof(_g4_t_v129)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v130)) > _g4_s33 ? (132u + sizeof(_g4_t_v130)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v131)) > _g4_s34 ? (136u + sizeof(_g4_t_v131)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v132)) > _g4_s35 ? (140u + sizeof(_g4_t_v132)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v133)) > _g4_s36 ? (144u + sizeof(_g4_t_v133)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v134)) > _g4_s37 ? (148u + sizeof(_g4_t_v134)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v135)) > _g4_s38 ? (152u + sizeof(_g4_t_v135)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v136)) > _g4_s39 ? (156u + sizeof(_g4_t_v136)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v137)) > _g4_s40 ? (160u + sizeof(_g4_t_v137)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v138)) > _g4_s41 ? (164u + sizeof(_g4_t_v138)) : _g4_s41,
    _g4_s43 = (168u + sizeof(_g4_t_v139)) > _g4_s42 ? (168u + sizeof(_g4_t_v139)) : _g4_s42,
    _g4_s44 = (172u + sizeof(_g4_t_v140)) > _g4_s43 ? (172u + sizeof(_g4_t_v140)) : _g4_s43,
    _g4_s45 = (176u + sizeof(_g4_t_v141)) > _g4_s44 ? (176u + sizeof(_g4_t_v141)) : _g4_s44,
    _g4_s46 = (180u + sizeof(_g4_t_v142)) > _g4_s45 ? (180u + sizeof(_g4_t_v142)) : _g4_s45,
    _g4_s47 = (184u + sizeof(_g4_t_v143)) > _g4_s46 ? (184u + sizeof(_g4_t_v143)) : _g4_s46,
    _g4_s48 = (188u + sizeof(_g4_t_v144)) > _g4_s47 ? (188u + sizeof(_g4_t_v144)) : _g4_s47,
    _g4_s49 = (192u + sizeof(_g4_t_v145)) > _g4_s48 ? (192u + sizeof(_g4_t_v145)) : _g4_s48,
    _g4_s50 = (196u + sizeof(_g4_t_v146)) > _g4_s49 ? (196u + sizeof(_g4_t_v146)) : _g4_s49,
    _g4_s51 = (200u + sizeof(_g4_t_v147)) > _g4_s50 ? (200u + sizeof(_g4_t_v147)) : _g4_s50,
    _g4_s52 = (204u + sizeof(_g4_t_v148)) > _g4_s51 ? (204u + sizeof(_g4_t_v148)) : _g4_s51,
    _g4_s53 = (208u + sizeof(_g4_t_v149)) > _g4_s52 ? (208u + sizeof(_g4_t_v149)) : _g4_s52,
    _g4_s54 = (212u + sizeof(_g4_t_v150)) > _g4_s53 ? (212u + sizeof(_g4_t_v150)) : _g4_s53,
    _g4_s55 = (224u + sizeof(_g4_t_v151)) > _g4_s54 ? (224u + sizeof(_g4_t_v151)) : _g4_s54,
    _g4_s56 = (320u + sizeof(_g4_t_v152)) > _g4_s55 ? (320u + sizeof(_g4_t_v152)) : _g4_s55,
    _g4_s57 = (336u + sizeof(_g4_t_v153)) > _g4_s56 ? (336u + sizeof(_g4_t_v153)) : _g4_s56,
    _g4_s58 = (400u + sizeof(_g4_t_v154)) > _g4_s57 ? (400u + sizeof(_g4_t_v154)) : _g4_s57,
    _g4_s59 = (404u + sizeof(_g4_t_v155)) > _g4_s58 ? (404u + sizeof(_g4_t_v155)) : _g4_s58,
    _g4_s60 = (408u + sizeof(_g4_t_v156)) > _g4_s59 ? (408u + sizeof(_g4_t_v156)) : _g4_s59,
    _g4_s61 = (412u + sizeof(_g4_t_v157)) > _g4_s60 ? (412u + sizeof(_g4_t_v157)) : _g4_s60,
    _g4_s62 = (416u + sizeof(_g4_t_v158)) > _g4_s61 ? (416u + sizeof(_g4_t_v158)) : _g4_s61,
    _g4_s63 = (420u + sizeof(_g4_t_v159)) > _g4_s62 ? (420u + sizeof(_g4_t_v159)) : _g4_s62,
    _g4_s64 = (424u + sizeof(_g4_t_v160)) > _g4_s63 ? (424u + sizeof(_g4_t_v160)) : _g4_s63,
    _g4_s65 = (428u + sizeof(_g4_t_v161)) > _g4_s64 ? (428u + sizeof(_g4_t_v161)) : _g4_s64,
    _g4_s66 = (432u + sizeof(_g4_t_v162)) > _g4_s65 ? (432u + sizeof(_g4_t_v162)) : _g4_s65,
    _g4_s67 = (436u + sizeof(_g4_t_v163)) > _g4_s66 ? (436u + sizeof(_g4_t_v163)) : _g4_s66,
    _g4_s68 = (440u + sizeof(_g4_t_v164)) > _g4_s67 ? (440u + sizeof(_g4_t_v164)) : _g4_s67,
    _g4_s69 = (444u + sizeof(_g4_t_v165)) > _g4_s68 ? (444u + sizeof(_g4_t_v165)) : _g4_s68,
    _g4_s70 = (448u + sizeof(_g4_t_v166)) > _g4_s69 ? (448u + sizeof(_g4_t_v166)) : _g4_s69,
    _g4_s71 = (452u + sizeof(_g4_t_v167)) > _g4_s70 ? (452u + sizeof(_g4_t_v167)) : _g4_s70,
    _g4_s72 = (456u + sizeof(_g4_t_v168)) > _g4_s71 ? (456u + sizeof(_g4_t_v168)) : _g4_s71,
    _g4_s73 = (460u + sizeof(_g4_t_v169)) > _g4_s72 ? (460u + sizeof(_g4_t_v169)) : _g4_s72,
    _g4_s74 = (464u + sizeof(_g4_t_v170)) > _g4_s73 ? (464u + sizeof(_g4_t_v170)) : _g4_s73,
    _g4_s75 = (468u + sizeof(_g4_t_v171)) > _g4_s74 ? (468u + sizeof(_g4_t_v171)) : _g4_s74,
    _g4_s76 = (472u + sizeof(_g4_t_v172)) > _g4_s75 ? (472u + sizeof(_g4_t_v172)) : _g4_s75,
    _g4_s77 = (476u + sizeof(_g4_t_v173)) > _g4_s76 ? (476u + sizeof(_g4_t_v173)) : _g4_s76,
    _g4_s78 = (480u + sizeof(_g4_t_v174)) > _g4_s77 ? (480u + sizeof(_g4_t_v174)) : _g4_s77,
    _g4_s79 = (484u + sizeof(_g4_t_v175)) > _g4_s78 ? (484u + sizeof(_g4_t_v175)) : _g4_s78,
    _g4_s80 = (488u + sizeof(_g4_t_v176)) > _g4_s79 ? (488u + sizeof(_g4_t_v176)) : _g4_s79,
    _g4_s81 = (492u + sizeof(_g4_t_v177)) > _g4_s80 ? (492u + sizeof(_g4_t_v177)) : _g4_s80,
    _g4_s82 = (496u + sizeof(_g4_t_v178)) > _g4_s81 ? (496u + sizeof(_g4_t_v178)) : _g4_s81,
    _g4_s83 = (500u + sizeof(_g4_t_v179)) > _g4_s82 ? (500u + sizeof(_g4_t_v179)) : _g4_s82,
    _g4_s84 = (504u + sizeof(_g4_t_v180)) > _g4_s83 ? (504u + sizeof(_g4_t_v180)) : _g4_s83
  };
  alignas(16) uint8_t _g4_sf[_g4_s84];
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 8u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 8u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 28u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 28u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 36u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 36u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 40u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 44u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 48u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 48u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 52u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 52u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 56u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 56u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 56u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 56u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 56u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 56u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 56u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 64u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 80u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 96u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 100u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 104u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 108u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 112u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 116u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 120u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 124u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 128u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 132u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 136u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 140u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 144u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 148u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 152u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 156u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 160u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 164u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 168u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 172u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 176u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 180u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 184u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 188u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 192u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 196u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 200u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 204u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 208u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 212u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 224u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 320u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 336u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 400u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 404u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 408u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 412u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 416u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 420u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 424u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 428u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 432u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 436u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 440u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 444u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 448u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 452u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 456u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 460u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 464u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 468u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 472u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 476u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 480u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 484u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 488u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 492u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 496u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 500u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 504u);

  std::memcpy(v151, a3, sizeof(v151));
  v178 = v151[14];
  v179 = (const hkTransformf::Self *)LODWORD(v151[15]);
  v180 = 0;
  v4 = *(uint32_t **)(a2 + 40);
  v120[0] = *(float **)(a2 + 16);
  v104 = v4;
  v119[0] = *(uint32_t *)(a2 + 28);
  v5 = (uint32_t *)v119[0];
  while ( 1 )
  {
    result = (char *)dword_20B9FF4 + (uint32_t)jpt_1782230[*v5];
    switch ( *v5 )
    {
      case 0:
        return result;
      case 1:
        hkVector4f::setTransformedPos(
          (hkVector4f::Self *)v152,
          (const hkTransformf::Self *)LODWORD(v178),
          (const hkVector4f::Self *)v120[0]);
        v120[0] += 4;
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 2:
        hkVector4f::setTransformedPos((hkVector4f::Self *)v153, v179, (const hkVector4f::Self *)v120[0]);
        v120[0] += 4;
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 3:
        v72 = v5 + 1;
        v89 = 4 * v5[1];
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v74 = v120[0];
        v75 = &v153[v89 + 4];
        v76 = (float *)LODWORD(v178);
        goto LABEL_35;
      case 4:
        v72 = v5 + 1;
        v73 = 4 * v5[1];
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v74 = v120[0];
        v75 = &v153[v73 + 4];
        v76 = (float *)v179;
LABEL_35:
        v77 = *v74;
        v78 = v74 + 4;
        v5 = v72;
        v79 = *v76 * v77;
        v80 = *(v78 - 3);
        v81 = *(v78 - 2);
        *v75 = v79;
        v82 = v76[1] * v77;
        v75[1] = v82;
        v83 = v76[2] * v77;
        v75[2] = v83;
        v84 = v76[3] * v77;
        v75[3] = v84;
        v85 = (float)(v76[4] * v80) + v79;
        *v75 = v85;
        v86 = (float)(v76[5] * v80) + v82;
        v75[1] = v86;
        v87 = (float)(v76[6] * v80) + v83;
        v75[2] = v87;
        v88 = (float)(v80 * v76[7]) + v84;
        v75[3] = v88;
        *v75 = (float)(v76[8] * v81) + v85;
        v75[1] = (float)(v76[9] * v81) + v86;
        v75[2] = (float)(v76[10] * v81) + v87;
        v75[3] = (float)(v81 * v76[11]) + v88;
        v120[0] = v78;
        goto LABEL_4;
      case 5:
        v70 = &v153[4 * v5[1] + 4];
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v71 = v120[0] + 4;
        *v70 = *v120[0];
        v70[1] = *(v71 - 3);
        v70[2] = *(v71 - 2);
        v70[3] = *(v71 - 1);
        v120[0] = v71;
        ++v5;
        goto LABEL_4;
      case 6:
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v69 = 4 * v5[1];
        v145 = v153[v69 + 4];
        v146 = v153[v69 + 5];
        v147 = v153[v69 + 6];
        v148 = v153[v69 + 7];
        v137 = v152[0];
        v138 = v152[1];
        v139 = v152[2];
        v140 = v152[3];
        v141 = v153[0];
        v142 = v153[1];
        v143 = v153[2];
        v144 = v153[3];
        hk1dLinearBilateralConstraintBuildJacobian((int)(uintptr_t)(&v137), (int)(uintptr_t)(v151), a4);
        ++v180;
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 7:
        hkpGenericConstraintData::constrainAllLinearW(a1, (int)(uintptr_t)(v119), (int)(uintptr_t)(v120), a2, (uint32_t *)(v152), (int)(uintptr_t)(v151), a4);
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 8:
        v98 = (const hkMatrix3f::Self *)v120[0];
        v120[0] += 12;
        hkMatrix3f::setMul((hkMatrix3f::Self *)&v154, (const hkMatrix3f::Self *)LODWORD(v178), v98);
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 9:
        v97 = (const hkMatrix3f::Self *)v120[0];
        v120[0] += 12;
        hkMatrix3f::setMul((hkMatrix3f::Self *)&v166, v179, v97);
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 0xA:
        v154 = *(float *)LODWORD(v178);
        v155 = *(float **)(LODWORD(v178) + 4);
        v156 = *(float *)(LODWORD(v178) + 8);
        v157 = *(float *)(LODWORD(v178) + 12);
        v158 = *(float *)(LODWORD(v178) + 16);
        v159 = *(float *)(LODWORD(v178) + 20);
        v160 = *(float *)(LODWORD(v178) + 24);
        v161 = *(float *)(LODWORD(v178) + 28);
        v162 = *(float *)(LODWORD(v178) + 32);
        v163 = *(float *)(LODWORD(v178) + 36);
        v164 = *(float *)(LODWORD(v178) + 40);
        v165 = *(float *)(LODWORD(v178) + 44);
        goto LABEL_4;
      case 0xB:
        v166 = *(float *)v179;
        v167 = *((float *)v179 + 1);
        v168 = *((float *)v179 + 2);
        v169 = *((float *)v179 + 3);
        v170 = *((uint32_t *)v179 + 4);
        v171 = *((uint32_t *)v179 + 5);
        v172 = *((uint32_t *)v179 + 6);
        v173 = *((uint32_t *)v179 + 7);
        v174 = *((float *)v179 + 8);
        v175 = *((float *)v179 + 9);
        v176 = *((float *)v179 + 10);
        v177 = *((float *)v179 + 11);
        goto LABEL_4;
      case 0xC:
        v60 = v5[1];
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v61 = &v154 + 4 * dword_1D18508[v60];
        v141 = *v61;
        v142 = v61[1];
        v143 = v61[2];
        v144 = v61[3];
        v62 = 16 * dword_1D1850C[v60];
        v137 = *(float *)((char *)&v154 + v62);
        v138 = *(float *)((char *)&v154 + v62 + 4);
        v139 = *(float *)((char *)&v156 + v62);
        v140 = *(float *)((char *)&v157 + v62);
        v63 = &v166 + 4 * v60;
        v145 = *v63;
        v146 = v63[1];
        v64 = v63[2];
        v148 = v63[3];
        v147 = v64;
        hk1dAngularBilateralConstraintBuildJacobian(&v137, (int)(uintptr_t)(v151), (float **)a4);
        v65 = v137;
        v137 = -v141;
        v141 = v65;
        v66 = v138;
        v138 = -v142;
        v142 = v66;
        v67 = v139;
        v139 = -v143;
        v143 = v67;
        v68 = v140;
        v140 = -v144;
        v144 = v68;
        hk1dAngularBilateralConstraintBuildJacobian(&v137, (int)(uintptr_t)(v151), (float **)a4);
        v180 += 2;
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 0xD:
        v125 = v154;
        v126 = v155;
        v127 = v156;
        v128 = v157;
        v133 = v170;
        v134 = v171;
        v135 = v172;
        v136 = v173;
        v129 = v162;
        v130 = v163;
        v131 = v164;
        v132 = v165;
        hk1dAngularBilateralConstraintBuildJacobian(&v125, (int)(uintptr_t)(v151), (float **)a4);
        v137 = v158;
        v138 = v159;
        v139 = v160;
        v140 = v161;
        v145 = v174;
        v146 = v175;
        v147 = v176;
        v148 = v177;
        v141 = v125;
        v142 = *(float *)&v126;
        v143 = v127;
        v144 = v128;
        hk1dAngularBilateralConstraintBuildJacobian(&v137, (int)(uintptr_t)(v151), (float **)a4);
        v145 = v166;
        v146 = v167;
        v147 = v168;
        v148 = v169;
        v141 = v137;
        v142 = v138;
        v143 = v139;
        v144 = v140;
        v137 = v129;
        v138 = v130;
        v139 = v131;
        v140 = v132;
        hk1dAngularBilateralConstraintBuildJacobian(&v137, (int)(uintptr_t)(v151), (float **)a4);
        v180 += 3;
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 0xE:
        v48 = v120[0];
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v120[0] += 4;
        v103 = *(uint32_t *)v48;
        v49 = (*(uint32_t *)v48 & 0x7F800000u) >> 23;
        v116 = 23 - (v49 - 127);
        v50 = v49 + 106;
        v51 = (int)(v49 - 151) >> 31;
        v107 = v50;
        v117 = v51 & v116;
        v52 = (v103 & ~(((v103 & 0x7FFFFFFF) - 1) >> 31) & 0x7FFFFF | 0x800000)
            & (~v51 | (-8388608 >> ((v51 & 0x17) - v117)));
        v111 = *(uint32_t *)(*(uint32_t *)(a2 + 52)
                         + 4
                         * ((~((int)(((v103 & 0x7F800000u) >> 23) - 127) >> 31)
                           & ((((v103 & ~(((v103 & 0x7FFFFFFF) - 1) >> 31)) >> 31) | (v52 + v52 - 1)) - v52 + 1)) >> v117 << (~(uint8_t)v51 & v107)));
        if ( v111 != 0 )
        {
          v53 = v5[1];
          v108 = v48[1];
          v118 = 16 * dword_1D18508[v53];
          v99 = v48[2];
          v54 = &v166 + 4 * dword_1D1850C[v53];
          v101 = atan2f(
                   -(float)((float)((float)(*v54 * *(float *)((char *)&v154 + v118))
                                  + (float)(v54[1] * *(float *)((char *)&v154 + v118 + 4)))
                          + (float)(*(float *)((char *)&v154 + v118 + 8) * v54[2])),
                   -(float)((float)((float)(*(float *)((char *)&v154 + v118) * *(float *)((char *)&v166 + v118))
                                  + (float)(*(float *)((char *)&v154 + v118 + 4) * *(float *)((char *)&v166 + v118 + 4)))
                          + (float)(*(float *)((char *)&v166 + v118 + 8) * *(float *)((char *)&v154 + v118 + 8))));
          v55 = v99;
          v56 = (float)(v101 + 3.1415927f) - v108;
          if ( v56 < -3.1415927f )
          {
            v55 = v99 + 1.0;
          }
          else if ( v56 > 3.1415927f )
          {
            v55 = v99 - 1.0;
          }
          v48[1] = v101 + 3.1415927f;
          v48[2] = v55;
          v127 = 0.0;
          v57 = *a4;
          v109 = a4[1];
          v128 = 0.0;
          hk1dAngularVelocityMotorBeginJacobian(&v154 + 4 * v53, v151, v57, &v125);
          *(float *)&v126 = COERCE_FLOAT(v151);
          v58 = (float *)(v109 + 8 * v180);
          v59 = *v58;
          v128 = v58[1];
          v127 = v59;
          v130 = -(float)((float)(v101 + 3.1415927f) + (float)(6.2831855f * v55));
          v129 = 0.0;
          hkCalcMotorData(v111, &v125, &v137);
          hk1dAngularVelocityMotorCommitJacobian(&v137, v151, v57, a4);
          v5 = (uint32_t *)v119[0];
        }
        else
        {
          ++v5;
        }
        goto LABEL_19;
      case 0xF:
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v36 = v120[0];
        v120[0] += 4;
        v37 = *(uint32_t *)v36;
        v38 = (v37 & 0x7F800000u) >> 23;
        v39 = v38 + 106;
        v40 = (int)(v38 - 151) >> 31;
        v114 = ((v37 & 0x7F800000u) >> 23) - 127;
        v41 = v37 & ~(((v37 & 0x7FFFFFFF) - 1) >> 31);
        v42 = (v41 & 0x7FFFFF | 0x800000) & (~v40 | (-8388608 >> ((v40 & 0x17) - (v40 & (23 - v114)))));
        v43 = *(uint32_t *)(*(uint32_t *)(a2 + 52)
                        + 4
                        * ((~(v114 >> 31) & (((v41 >> 31) | (v42 + v42 - 1)) - v42 + 1)) >> (v40 & (23 - v114)) << (~(uint8_t)v40 & v39)));
        if ( v43 != 0 )
        {
          v44 = 4 * v5[1];
          v106 = a4[1];
          v127 = 0.0;
          v128 = 0.0;
          v121 = v153[v44 + 4];
          v122 = v153[v44 + 5];
          v123 = v153[v44 + 6];
          v124 = v153[v44 + 7];
          v45 = *a4;
          v115 = (float)((float)((float)(v152[0] - v153[0]) * v121) + (float)((float)(v152[1] - v153[1]) * v122))
               + (float)((float)(v152[2] - v153[2]) * v123);
          hk1dLinearVelocityMotorBeginJacobian(&v121, v153, v151, *a4, &v125);
          v46 = (float *)(v106 + 8 * v180);
          v47 = *v46;
          v128 = v46[1];
          *(float *)&v126 = COERCE_FLOAT(v151);
          v127 = v47;
          v130 = -v115;
          v129 = 0.0;
          hkCalcMotorData(v43, &v125, &v137);
          hk1dLinearVelocityMotorCommitJacobian(&v137, v151, v45, a4);
          v5 = (uint32_t *)v119[0];
        }
        else
        {
          ++v5;
        }
LABEL_19:
        ++v180;
        goto LABEL_4;
      case 0x10:
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v34 = &v153[4 * v5[1] + 4];
        v145 = *v34;
        v146 = v34[1];
        v147 = v34[2];
        v148 = v34[3];
        v137 = v152[0];
        v138 = v152[1];
        v139 = v152[2];
        v140 = v152[3];
        v141 = v153[0];
        v142 = v153[1];
        v143 = v153[2];
        v144 = v153[3];
        v35 = v120[0];
        v120[0] += 4;
        v149 = *(uint32_t *)v35;
        v150 = *((uint32_t *)v35 + 1);
        hk1dLinearLimitBuildJacobian((int)(uintptr_t)(&v137), (int)(uintptr_t)(v151), a4);
        ++v180;
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 0x11:
        v25 = v5[1];
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v144 = 0.5;
        v26 = &v154 + 4 * v25;
        v137 = *v26;
        v138 = v26[1];
        v27 = v26[2];
        v28 = v26[3];
        v139 = v27;
        v140 = v28;
        v29 = 16 * dword_1D18508[v25];
        v30 = &v166 + 4 * dword_1D1850C[v25];
        v113 = atan2f(
                 (float)((float)(*v30 * *(float *)((char *)&v154 + v29))
                       + (float)(v30[1] * *(float *)((char *)&v154 + v29 + 4)))
               + (float)(*(float *)((char *)&v154 + v29 + 8) * v30[2]),
                 (float)((float)(*(float *)((char *)&v154 + v29) * *(float *)((char *)&v166 + v29))
                       + (float)(*(float *)((char *)&v154 + v29 + 4) * *(float *)((char *)&v166 + v29 + 4)))
               + (float)(*(float *)((char *)&v166 + v29 + 8) * *(float *)((char *)&v154 + v29 + 8)));
        v31 = v120[0];
        v32 = v113;
        v143 = v113;
        v120[0] += 4;
        v141 = *v31;
        v142 = v31[1];
        v33 = v31[2];
        if ( v113 < 0.0 && v33 > 0.0 && (float)(v33 - v113) > 3.1415927f )
        {
          v32 = v113 + 6.2831855f;
          v143 = v113 + 6.2831855f;
        }
        if ( v32 > 0.0 && v33 < 0.0 && (float)(v32 - v33) > 3.1415927f )
        {
          v32 = v32 - 6.2831855f;
          v143 = v32;
        }
        v31[2] = v32;
        goto LABEL_15;
      case 0x12:
        v14 = 16 * v5[1];
        v119[0] = (int)(uintptr_t)(v5 + 1);
        v144 = 0.5;
        v140 = 0.0;
        v15 = (float *)((char *)&v154 + v14);
        v16 = (float *)((char *)&v166 + v14);
        v110 = *v15;
        v17 = v15[1];
g4_m128_raw(v21) = LODWORD(v17);
        v105 = v17;
        v18 = v15[2];
        v19 = v16[2];
        v112 = v16[1];
        v20 = *v16;
        *(float *)g4_m128_ptr<int32_t>(v21) = (float)(v17 * v19) - (float)(v112 * v18);
        v22 = (float)(v18 * *v16) - (float)(*v15 * v19);
        v137 = *(float *)g4_m128_ptr<int32_t>(v21);
        v23 = (float)(v112 * v110) - (float)(v17 * v20);
        v24 = v21;
        v138 = (float)(v18 * v20) - (float)(v110 * v19);
        v139 = v23;
        *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v21) * *(float *)g4_m128_ptr<int32_t>(v21)) + (float)(v22 * v22))
                                + (float)(v23 * v23);
        if ( *(float *)g4_m128_ptr<int32_t>(v24) >= 0.00000011920929f )
        {
          if ( *(float *)g4_m128_ptr<int32_t>(v24) <= 0.0 )
          {
            v94 = 0.0;
            v95 = 0.0;
          }
          else
          {
            v90 = _mm_cvtsi128_si32(v24) >> 1;
            v91 = (_mm_cvtsi128_si32(v24) + 2139095040) >> 31;
            v100 = v23;
            v92 = (float)(1.5 * COERCE_FLOAT(v91 & (1597463174 - v90)))
                - (float)((float)(COERCE_FLOAT(v91 & (1597463174 - v90)) * COERCE_FLOAT(v91 & (1597463174 - v90)))
                        * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * COERCE_FLOAT(v91 & (1597463174 - v90))));
            v102 = (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * v92;
            v93 = (float)(1.5 * (float)((float)(1.5 * v92) - (float)(v102 * (float)(v92 * v92))))
                - (float)((float)((float)((float)(1.5 * v92) - (float)(v102 * (float)(v92 * v92)))
                                * (float)((float)(1.5 * v92) - (float)(v102 * (float)(v92 * v92))))
                        * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24))
                                * (float)((float)(1.5 * v92) - (float)(v102 * (float)(v92 * v92)))));
            v94 = 0.0 * v93;
            v95 = v93;
            v23 = v100;
          }
          v96 = v120[0];
          v120[0] += 4;
          v137 = *(float *)g4_m128_ptr<int32_t>(v21) * v95;
          v138 = v22 * v95;
          v139 = v95 * v23;
          v140 = v94;
          v143 = (float)((float)(v20 * v110) + (float)(v105 * v112)) + (float)(v18 * v19);
          v141 = *v96;
          v142 = v96[1];
LABEL_15:
          hk1dAngularLimitBuildJacobian(&v137, v151, a4);
          ++v180;
          v5 = (uint32_t *)v119[0];
        }
        else
        {
          v120[0] += 4;
          ++v5;
        }
LABEL_4:
        v119[0] = (int)(uintptr_t)(++v5);
        break;
      case 0x13:
        v119[0] = (int)(uintptr_t)(v5 + 2);
        v11 = 16 * v5[2];
        v12 = 16 * v5[1];
        v144 = 0.5;
        hkInternalConstraintUtils_calcRelativeAngle(
          (char *)&v154 + v12,
          (char *)&v166 + v12,
          (char *)&v154 + v11,
          (char *)&v166 + v11,
          &v137,
          &v143);
        v13 = v120[0];
        v120[0] += 4;
        v141 = *v13;
        v142 = v13[1];
        hk1dAngularLimitBuildJacobian(&v137, v151, a4);
        ++v180;
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 0x14:
        v8 = a4[1];
        v119[0] = (int)(uintptr_t)(v5 + 1);
        LODWORD(v137) = (uint32_t)(uintptr_t)(&v154 + 4 * v5[1]);
        v9 = v120[0];
        v120[0] += 4;
        v10 = *v9;
        LODWORD(v140) = 1;
        v139 = v10;
        LODWORD(v138) = v8 + 8 * v180;
        hk1dAngularFrictionBuildJacobian(&v137, v151, a4);
        ++v180;
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 0x15:
        hkpGenericConstraintData::setLinearFrictionW(a1, v119, v120, a2, (int)(uintptr_t)(v152), (int)(uintptr_t)(v151), a4);
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      case 0x16:
        v7 = v120[0];
        v120[0] += 4;
        v151[9] = v151[9] * *v7;
        goto LABEL_4;
      case 0x17:
        v151[9] = a3[9];
        goto LABEL_4;
      case 0x18:
        v119[0] = (int)(uintptr_t)(v5 + 1);
        G4_VCALL<void>(*v104, 8, v152, v5[1]);
        ++v104;
        v5 = (uint32_t *)v119[0];
        goto LABEL_4;
      default:
        goto LABEL_4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::buildJacobian  (binary VA: 0x17836d0)
// Original: hkpGenericConstraintData::buildJacobian
// ----------------------------------------------------------------------------
char * hkpGenericConstraintData::buildJacobian(int a1, int a2, int *a3)
{
  (*(void (**)(int, int *, int, int))(a2 + 92))(a2, a3, a3[1], 8);
  return hkpGenericConstraintData::hatchScheme(a1, a1 + 32, (float *)a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpGenericConstraintData::getScheme  (binary VA: 0x1783730)
// Original: hkpGenericConstraintData::getScheme
// ----------------------------------------------------------------------------
char * hkpGenericConstraintData::getScheme(hkpGenericConstraintData::Self *self)
{
  return (char *)self + 32;
}


