#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpRackAnd.h"

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::Atoms::staticClass  (binary VA: 0x1715b60)
// Original: hkpRackAndPinionConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpRackAndPinionConstraintData::Atoms::staticClass()
{
  return &hkpRackAndPinionConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::staticClass  (binary VA: 0x1715b80)
// Original: hkpRackAndPinionConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpRackAndPinionConstraintData::staticClass()
{
  return &hkpRackAndPinionConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintAtom::staticClass  (binary VA: 0x1719ad0)
// Original: hkpRackAndPinionConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpRackAndPinionConstraintAtom::staticClass()
{
  return &hkpRackAndPinionConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::getType  (binary VA: 0x17245c0)
// Original: hkpRackAndPinionConstraintData::getType
// ----------------------------------------------------------------------------
int hkpRackAndPinionConstraintData::getType()
{
  return 21;
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::getRuntimeInfo  (binary VA: 0x17245d0)
// Original: hkpRackAndPinionConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpRackAndPinionConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = 1;
  *a3 = 20;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::Destroy  (binary VA: 0x17245f0)
// Original: hkpRackAndPinionConstraintData::~hkpRackAndPinionConstraintData
// ----------------------------------------------------------------------------
void hkpRackAndPinionConstraintData::Destroy(hkpRackAndPinionConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::isValid  (binary VA: 0x1724610)
// Original: hkpRackAndPinionConstraintData::isValid
// ----------------------------------------------------------------------------
hkpRackAndPinionConstraintData::Self * hkpRackAndPinionConstraintData::isValid(hkpRackAndPinionConstraintData::Self *self, float *a2)
{
  if ( hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 8), 0.00001f)
    && hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 24), 0.00001f) )
  {
    *(uint8_t *)self = fabs(0.0 - a2[41]) > 0.00000011920929f;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::getConstraintInfo  (binary VA: 0x17246b0)
// Original: hkpRackAndPinionConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpRackAndPinionConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 160, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::Destroy_ea17246f0  (binary VA: 0x17246f0)
// Original: hkpRackAndPinionConstraintData::~hkpRackAndPinionConstraintData
// ----------------------------------------------------------------------------
void hkpRackAndPinionConstraintData::Destroy_ea17246f0(hkpRackAndPinionConstraintData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 176;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::Construct  (binary VA: 0x1724750)
// Original: hkpRackAndPinionConstraintData::hkpRackAndPinionConstraintData
// ----------------------------------------------------------------------------
void hkpRackAndPinionConstraintData::Construct(hkpRackAndPinionConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209DA08);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 21;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 41) = 1065353216;
  *((uint32_t *)self + 38) = 0;
  *((uint8_t *)self + 168) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint8_t *)self + 169) = 8;
  *((uint8_t *)self + 170) = 12;
  *((uint8_t *)self + 171) = 16;
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::setInWorldSpace  (binary VA: 0x17248d0)
// Original: hkpRackAndPinionConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpRackAndPinionConstraintData::setInWorldSpace(int a1, hkTransformf::Self *a2, hkTransformf::Self *a3, hkVector4f::Self *a4, int a5, int a6, int a7, int a8)
{
  float v8; // xmm2_4
  int v9;
  float v10; // xmm1_4
  int v11;
  float v12; // xmm3_4
  int v13;
  int v14;
  unsigned int v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  int v21;
  int v22;
  bool v23; // cc
  float v24; // xmm1_4
  int v25; // xmm0_4
  __m128i v26;
  __m128i v27;
  float v28; // xmm5_4
  int v29;
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm6_4
  float v33; // xmm7_4
  float v34; // xmm5_4
  __m128i v35;
  int v36;
  float v37; // xmm4_4
  float v38; // xmm3_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm4_4
  float v44; // xmm7_4
  float v45; // xmm5_4
  float v46; // xmm4_4
  float v47; // xmm3_4
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm5_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm5_4
  float v57; // xmm1_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  float v60; // xmm5_4
  float v61; // xmm4_4
  float v62; // xmm3_4
  float v63; // xmm0_4
  float v64; // xmm2_4
  float v65; // xmm4_4
  float v66; // xmm5_4
  float v67; // xmm6_4
  float v68; // xmm4_4
  float v69; // xmm3_4
  float v70; // xmm0_4
  float v71; // xmm1_4
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm0_4
  float v75; // xmm6_4
  float v76; // xmm4_4
  float v77; // xmm2_4
  float v78; // xmm3_4
  float v79; // xmm6_4
  float v80; // xmm0_4
  float v81; // xmm4_4
  const hkTransformf::Self *result;
  float v83;
  float v84;
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
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  int v112;
  unsigned int v113;
  float v114;
  float v115;
  int v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  int v123;
  float v124;
  float v125;
  float v126;
  int v127;
  float v128;
  float v129;
  float v130;

  v109 = *(float *)a5;
  v110 = *(float *)(a5 + 4);
  v99 = v109;
  v8 = fabs(v109);
  v9 = *(uint32_t *)(a5 + 12);
  v111 = *(float *)(a5 + 8);
  v10 = fabs(v110);
  v112 = v9;
  v120 = *(float *)a6;
  v121 = *(float *)(a6 + 4);
  v11 = *(uint32_t *)(a6 + 12);
  v122 = *(float *)(a6 + 8);
  v123 = v11;
  v96 = v110;
  v12 = fabs(v111);
  v93 = v111;
  if ( v8 > v10 )
  {
    v13 = 0;
    v14 = 1;
  }
  else
  {
    v10 = v8;
    v13 = 1;
    v14 = 0;
  }
  *(float *)&v113 = 0.0;
  if ( v10 <= v12 )
    v14 = 2;
  v114 = 0.0;
  v15 = *((uint32_t *)&v109 + v14);
  v115 = 0.0;
  v16 = v120;
  v116 = 0;
  *(&v113 + v13) = v15;
  v17 = fabs(v16);
  v18 = v121;
  *((float *)&v113 + v14) = -*(&v109 + v13);
  v19 = fabs(v18);
  v90 = v16;
  v20 = fabs(v122);
  v88 = v18;
  v86 = v122;
  if ( v17 > v19 )
  {
    v21 = 0;
    v22 = 1;
  }
  else
  {
    v19 = v17;
    v21 = 1;
    v22 = 0;
  }
  v23 = v19 <= v20;
  v24 = 0.0;
  v124 = 0.0;
  if ( v23 )
    v22 = 2;
  v25 = *((uint32_t *)&v120 + v22);
  v125 = 0.0;
  v126 = 0.0;
  v127 = 0;
  *((uint32_t *)&v124 + v21) = v25;
g4_m128_raw(v26) = v113;
  *(&v124 + v22) = -*(&v120 + v21);
  v27 = v26;
  *(float *)g4_m128_ptr<int32_t>(v27) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)g4_m128_ptr<int32_t>(v26)) + (float)(v114 * v114))
                          + (float)(v115 * v115);
  if ( *(float *)g4_m128_ptr<int32_t>(v27) <= 0.0 )
  {
    v32 = 0.0;
  }
  else
  {
    v28 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v27);
    v29 = ((_mm_cvtsi128_si32(v27) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v27) >> 1));
    v30 = (float)(*(float *)&v29 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v27)) * *(float *)&v29)
                * (float)(*(float *)&v29 * *(float *)&v29));
    v31 = (float)(v30 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v27)) * v30) * (float)(v30 * v30));
    v32 = (float)(1.5 * v31) - (float)((float)(v28 * v31) * (float)(v31 * v31));
  }
  v33 = v125;
  v102 = v114 * v32;
  v114 = v114 * v32;
  v107 = *(float *)g4_m128_ptr<int32_t>(v26) * v32;
g4_m128_raw(v35) = LODWORD(v124);
  *(float *)&v113 = *(float *)g4_m128_ptr<int32_t>(v26) * v32;
  v34 = v115 * v32;
  *(float *)g4_m128_ptr<int32_t>(v35) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v35) * *(float *)g4_m128_ptr<int32_t>(v35)) + (float)(v33 * v33))
                          + (float)(v126 * v126);
  v115 = v115 * v32;
  if ( *(float *)g4_m128_ptr<int32_t>(v35) > 0.0 )
  {
    v36 = ((_mm_cvtsi128_si32(v35) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v35) >> 1));
    v37 = (float)(*(float *)&v36 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * *(float *)&v36)
                * (float)(*(float *)&v36 * *(float *)&v36));
    v38 = (float)(v37 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * v37) * (float)(v37 * v37));
    v24 = (float)(1.5 * v38) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * v38) * (float)(v38 * v38));
  }
  v125 = v125 * v24;
  v39 = v33 * v24;
  v40 = v96 * v107;
  v106 = v24 * v126;
  v126 = v106;
  v105 = v124 * v24;
  v41 = v107 * v93;
  v124 = v105;
  v108 = v39;
  v117 = (float)(v96 * v34) - (float)(v102 * v93);
  v118 = v41 - (float)(v34 * v99);
  v42 = (float)(v102 * v99) - v40;
  v43 = v88;
  v119 = v42;
  v89 = (float)(v106 * v88) - (float)(v86 * v39);
  v128 = v89;
  v44 = (float)(v86 * v105) - (float)(v106 * v90);
  v129 = v44;
  v45 = *((float *)a2 + 2);
  v46 = (float)(v39 * v90) - (float)(v43 * v105);
  v47 = *((float *)a2 + 1);
  v87 = v46;
  v130 = v46;
  v48 = *(float *)a2;
  v83 = v45;
  v85 = v47;
  v91 = *((float *)a2 + 5);
  v100 = *((float *)a2 + 6);
  v103 = *((float *)a2 + 8);
  v97 = *((float *)a2 + 9);
  v94 = *((float *)a2 + 10);
  v84 = *((float *)a2 + 4);
  v49 = (float)(v117 * *(float *)a2) + (float)(v47 * v118);
  v50 = (float)(v84 * v117) + (float)(v91 * v118);
  v51 = (float)((float)(v117 * v103) + (float)(v118 * v97)) + (float)(v94 * v42);
  *(float *)(a1 + 72) = v51;
  *(float *)(a1 + 76) = v51;
  *(float *)(a1 + 64) = v49 + (float)(v83 * v42);
  v52 = *(float *)&v113;
  *(float *)(a1 + 68) = v50 + (float)(v42 * v100);
  v53 = (float)(v52 * v48) + (float)(v85 * v114);
  v54 = v115;
  v55 = (float)(v84 * v52) + (float)(v91 * v114);
  v56 = (float)((float)(v52 * v103) + (float)(v114 * v97)) + (float)(v94 * v115);
  *(float *)(a1 + 48) = v53 + (float)(v83 * v115);
  *(float *)(a1 + 56) = v56;
  *(float *)(a1 + 60) = v56;
  v57 = v110;
  v58 = v55 + (float)(v54 * v100);
  v59 = v85 * v110;
  v60 = v91 * v110;
  *(float *)(a1 + 52) = v58;
  v61 = (float)(v48 * v109) + v59;
  v62 = (float)(v84 * v109) + v60;
  v63 = (float)((float)(v109 * v103) + (float)(v57 * v97)) + (float)(v94 * v111);
  v64 = v111 * v100;
  v65 = v61 + (float)(v83 * v111);
  *(float *)(a1 + 40) = v63;
  *(float *)(a1 + 44) = v63;
  *(float *)(a1 + 32) = v65;
  *(float *)(a1 + 36) = v62 + v64;
  v66 = *((float *)a3 + 1);
  v104 = *((float *)a3 + 2);
  v67 = *(float *)a3;
  v95 = *((float *)a3 + 9);
  v92 = *((float *)a3 + 6);
  v101 = *((float *)a3 + 5);
  v68 = *((float *)a3 + 4);
  v98 = *((float *)a3 + 8);
  v69 = *((float *)a3 + 10);
  v70 = (float)((float)(v89 * v98) + (float)(v44 * v95)) + (float)(v87 * v69);
  *(float *)(a1 + 128) = (float)((float)(v89 * *(float *)a3) + (float)(v66 * v44)) + (float)(v104 * v87);
  *(float *)(a1 + 136) = v70;
  *(float *)(a1 + 140) = v70;
  *(float *)(a1 + 132) = (float)((float)(v89 * v68) + (float)(v101 * v44)) + (float)(v87 * v92);
  v71 = (float)(v105 * v68) + (float)(v101 * v108);
  v72 = (float)((float)(v98 * v105) + (float)(v108 * v95)) + (float)(v106 * v69);
  v73 = (float)((float)(v105 * v67) + (float)(v108 * v66)) + (float)(v104 * v106);
  *(float *)(a1 + 120) = v72;
  *(float *)(a1 + 124) = v72;
  v74 = v120;
  v75 = v67 * v120;
  *(float *)(a1 + 112) = v73;
  v76 = v68 * v74;
  v77 = v122;
  v78 = v69 * v122;
  *(float *)(a1 + 116) = v71 + (float)(v106 * v92);
  v79 = v75 + (float)(v66 * v121);
  v80 = (float)((float)(v74 * v98) + (float)(v121 * v95)) + v78;
  v81 = (float)(v76 + (float)(v101 * v121)) + (float)(v77 * v92);
  *(float *)(a1 + 104) = v80;
  *(float *)(a1 + 108) = v80;
  *(float *)(a1 + 96) = v79 + (float)(v104 * v77);
  *(float *)(a1 + 100) = v81;
  hkVector4f::setTransformedInversePos((hkVector4f::Self *)(a1 + 80), a2, a4);
  result = hkVector4f::setTransformedInversePos((hkVector4f::Self *)(a1 + 144), a3, a4);
  *(uint32_t *)(a1 + 164) = a7;
  *(uint8_t *)(a1 + 168) = a8 == 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionConstraintData::setInBodySpace  (binary VA: 0x1725180)
// Original: hkpRackAndPinionConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
int hkpRackAndPinionConstraintData::setInBodySpace(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, int a6, int a7)
{
  int result;
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  int v13;
  int v14;
  int v15;
  float v16; // xmm2_4
  int v17;
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  int v21;
  int v22;
  bool v23; // cc
  int v24;
  float v25; // xmm0_4
  int v26;
  __m128i v27;
  float v28; // xmm3_4
  __m128i v29;
  float v30; // xmm5_4
  int v31;
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm6_4
  __m128i v35;
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm7_4
  float v39; // xmm6_4
  __m128i v40;
  float v41; // xmm6_4
  int v42;
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm5_4
  float v46; // xmm4_4
  float v47; // xmm3_4
  int v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;

  result = a1;
  *(uint32_t *)(a1 + 32) = *a4;
  v8 = *(float *)(a1 + 32);
  *(uint32_t *)(a1 + 36) = a4[1];
  v9 = *(float *)(a1 + 36);
  v10 = fabs(v8);
  v11 = fabs(v9);
  v55 = v8;
  *(uint32_t *)(a1 + 40) = a4[2];
  v53 = *(float *)(a1 + 40);
  *(uint32_t *)(a1 + 44) = a4[3];
  v12 = fabs(v53);
  v54 = v9;
  *(uint32_t *)(a1 + 96) = *a5;
  *(uint32_t *)(a1 + 100) = a5[1];
  *(uint32_t *)(a1 + 104) = a5[2];
  *(uint32_t *)(a1 + 108) = a5[3];
  if ( v10 > v11 )
  {
    v13 = 0;
    v14 = 1;
  }
  else
  {
    v11 = v10;
    v13 = 1;
    v14 = 0;
  }
  *(uint32_t *)(a1 + 48) = 0;
  if ( v11 <= v12 )
    v14 = 2;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  v15 = a1 + 4 * v13;
  v16 = *(float *)(v15 + 32);
  v17 = a1 + 4 * v14;
  *(uint32_t *)(v15 + 48) = *(uint32_t *)(v17 + 32);
  *(float *)(v17 + 48) = -v16;
  v18 = fabs(*(float *)(a1 + 96));
  v19 = fabs(*(float *)(a1 + 100));
  v52 = *(float *)(a1 + 96);
  v20 = fabs(*(float *)(a1 + 104));
  v51 = *(float *)(a1 + 100);
  v50 = *(float *)(a1 + 104);
  if ( v18 > v19 )
  {
    v21 = 0;
    v22 = 1;
  }
  else
  {
    v19 = v18;
    v21 = 1;
    v22 = 0;
  }
  v23 = v19 <= v20;
  v24 = a1 + 4 * v21;
  v25 = 0.0;
  if ( v23 )
    v22 = 2;
  *(uint32_t *)(a1 + 112) = 0;
  *(uint32_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  v26 = a1 + 4 * v22;
  *(uint32_t *)(v24 + 112) = *(uint32_t *)(v26 + 96);
  *(float *)(v26 + 112) = -*(float *)(v24 + 96);
g4_m128_raw(v27) = *(unsigned int *)(a1 + 48);
  v29 = v27;
  v28 = *(float *)(a1 + 56);
  v56 = *(float *)(a1 + 52);
  *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)g4_m128_ptr<int32_t>(v27)) + (float)(v56 * v56))
                          + (float)(v28 * v28);
  if ( *(float *)g4_m128_ptr<int32_t>(v29) <= 0.0 )
  {
    v34 = 0.0;
  }
  else
  {
    v30 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v29);
    v31 = ((_mm_cvtsi128_si32(v29) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v29) >> 1));
    v32 = (float)(*(float *)&v31 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * *(float *)&v31)
                * (float)(*(float *)&v31 * *(float *)&v31));
    v33 = (float)(v32 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v32) * (float)(v32 * v32));
    v34 = (float)(1.5 * v33) - (float)((float)(v30 * v33) * (float)(v33 * v33));
  }
g4_m128_raw(v35) = *(unsigned int *)(a1 + 112);
  v40 = v35;
  v57 = *(float *)g4_m128_ptr<int32_t>(v27) * v34;
  *(float *)(a1 + 48) = *(float *)g4_m128_ptr<int32_t>(v27) * v34;
  v36 = *(float *)(a1 + 116);
  v49 = v28 * v34;
  *(float *)(a1 + 56) = v28 * v34;
  v37 = *(float *)(a1 + 120);
  v38 = v56 * v34;
  v39 = v34 * *(float *)(a1 + 60);
  *(float *)g4_m128_ptr<int32_t>(v40) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v35) * *(float *)g4_m128_ptr<int32_t>(v35)) + (float)(v36 * v36))
                          + (float)(v37 * v37);
  *(float *)(a1 + 52) = v38;
  *(float *)(a1 + 60) = v39;
  if ( *(float *)g4_m128_ptr<int32_t>(v40) > 0.0 )
  {
    v41 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v40);
    v42 = ((_mm_cvtsi128_si32(v40) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v40) >> 1));
    v43 = (float)(*(float *)&v42 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v40)) * *(float *)&v42)
                * (float)(*(float *)&v42 * *(float *)&v42));
    v44 = (float)(v43 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v40)) * v43) * (float)(v43 * v43));
    v25 = (float)(1.5 * v44) - (float)((float)(v41 * v44) * (float)(v44 * v44));
  }
  v45 = *(float *)g4_m128_ptr<int32_t>(v35) * v25;
  *(uint32_t *)(a1 + 76) = 0;
  v46 = v36 * v25;
  *(uint32_t *)(a1 + 140) = 0;
  v47 = v37 * v25;
  *(float *)(a1 + 124) = v25 * *(float *)(a1 + 124);
  *(float *)(a1 + 112) = v45;
  *(float *)(a1 + 116) = v46;
  *(float *)(a1 + 120) = v47;
  *(float *)(a1 + 64) = (float)(v54 * v49) - (float)(v38 * v53);
  *(float *)(a1 + 68) = (float)(v57 * v53) - (float)(v49 * v55);
  *(float *)(a1 + 72) = (float)(v38 * v55) - (float)(v57 * v54);
  *(float *)(a1 + 128) = (float)(v51 * v47) - (float)(v50 * v46);
  *(float *)(a1 + 132) = (float)(v50 * v45) - (float)(v47 * v52);
  *(float *)(a1 + 136) = (float)(v46 * v52) - (float)(v45 * v51);
  *(uint32_t *)(a1 + 80) = *a2;
  *(uint32_t *)(a1 + 84) = a2[1];
  *(uint32_t *)(a1 + 88) = a2[2];
  *(uint32_t *)(a1 + 92) = a2[3];
  *(uint32_t *)(a1 + 144) = *a3;
  *(uint32_t *)(a1 + 148) = a3[1];
  *(uint32_t *)(a1 + 152) = a3[2];
  v48 = a3[3];
  *(uint32_t *)(a1 + 164) = a6;
  *(uint32_t *)(a1 + 156) = v48;
  *(uint8_t *)(a1 + 168) = a7 == 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRackAndPinionDrawer::drawConstraint  (binary VA: 0x1af16a0)
// Original: hkpRackAndPinionDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpRackAndPinionDrawer::drawConstraint(hkpRackAndPinionDrawer::Self *self, const hkpRackAndPinionConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  float *v7;
  const hkTransformf::Self *v8;
  float v9; // xmm0_4
  int v10;
  float v11; // xmm1_4
  float v12; // xmm0_4
  __m128i v13;
  float v14; // xmm2_4
  float v15; // xmm1_4
  __m128i v16;
  int v17;
  int result;
  float v19; // xmm6_4
  int v20; // xmm4_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float *savedregs;
  int retaddr;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef hkVector4f::Self *_g4_t_v40;
  typedef hkVector4f::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef const hkpRackAndPinionConstraintData::Self *_g4_t_v43;
  typedef hkTransformf::Self *_g4_t_v44;
  typedef hkTransformf::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef hkpRackAndPinionDrawer::Self *_g4_t_v47;
  typedef hkVector4f::Self *_g4_t_v48;
  typedef hkVector4f::Self *_g4_t_v49;
  typedef hkDebugDisplayHandler::Self *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef hkpRackAndPinionDrawer::Self **_g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef hkVector4f::Self *_g4_t_v78;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v36)) > _g4_s0 ? (0u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v37)) > _g4_s1 ? (4u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v38)) > _g4_s2 ? (8u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v39)) > _g4_s3 ? (12u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v40)) > _g4_s4 ? (20u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v41)) > _g4_s5 ? (28u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v42)) > _g4_s6 ? (32u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v43)) > _g4_s7 ? (32u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v44)) > _g4_s8 ? (36u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v45)) > _g4_s9 ? (36u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v46)) > _g4_s10 ? (40u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v47)) > _g4_s11 ? (40u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v48)) > _g4_s12 ? (44u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v49)) > _g4_s13 ? (44u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v50)) > _g4_s14 ? (48u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v51)) > _g4_s15 ? (48u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v52)) > _g4_s16 ? (52u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v53)) > _g4_s17 ? (56u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v54)) > _g4_s18 ? (60u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v55)) > _g4_s19 ? (64u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v56)) > _g4_s20 ? (68u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v57)) > _g4_s21 ? (72u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v58)) > _g4_s22 ? (76u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v59)) > _g4_s23 ? (80u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v60)) > _g4_s24 ? (84u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v61)) > _g4_s25 ? (88u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v62)) > _g4_s26 ? (92u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v63)) > _g4_s27 ? (96u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v64)) > _g4_s28 ? (100u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v65)) > _g4_s29 ? (104u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v66)) > _g4_s30 ? (108u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v67)) > _g4_s31 ? (112u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v68)) > _g4_s32 ? (116u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v69)) > _g4_s33 ? (120u + sizeof(_g4_t_v69)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v70)) > _g4_s34 ? (124u + sizeof(_g4_t_v70)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v71)) > _g4_s35 ? (128u + sizeof(_g4_t_v71)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v72)) > _g4_s36 ? (132u + sizeof(_g4_t_v72)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v73)) > _g4_s37 ? (136u + sizeof(_g4_t_v73)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v74)) > _g4_s38 ? (140u + sizeof(_g4_t_v74)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v75)) > _g4_s39 ? (144u + sizeof(_g4_t_v75)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v76)) > _g4_s40 ? (148u + sizeof(_g4_t_v76)) : _g4_s40,
    _g4_s42 = (152u + sizeof(_g4_t_v77)) > _g4_s41 ? (152u + sizeof(_g4_t_v77)) : _g4_s41,
    _g4_s43 = (156u + sizeof(_g4_t_v78)) > _g4_s42 ? (156u + sizeof(_g4_t_v78)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 84u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 104u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 108u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 112u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 116u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 120u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 124u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 128u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 132u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 136u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 140u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 144u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 148u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 152u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 156u);

  v75 = &self;
  v7 = (float *)self;
  v48 = (hkVector4f::Self *)(a2);
  v44 = (hkTransformf::Self *)(a4);
  v46 = a6;
  v8 = a3;
  v42 = a7;
  v50 = a5;
  hkpPrimitiveDrawer::setDisplayHandler((hkpRackAndPinionDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters((hkpConstraintDrawer::Self *)v7, v8, v44);
  hkVector4f::setTransformedPos((hkVector4f::Self *)(v7 + 20), v44, (hkVector4f::Self *)((char *)v48 + 144));
  hkVector4f::setTransformedPos((hkVector4f::Self *)(v7 + 16), v8, (hkVector4f::Self *)((char *)v48 + 80));
  v57 = *((float *)v48 + 8);
  v58 = *((float *)v48 + 9);
  v59 = *((float *)v48 + 10);
  v60 = *((uint32_t *)v48 + 11);
  v61 = *((float *)v48 + 12);
  v62 = *((float *)v48 + 13);
  v63 = *((float *)v48 + 14);
  v64 = *((float *)v48 + 15);
  v65 = *((float *)v48 + 24);
  v66 = *((float *)v48 + 25);
  v67 = *((float *)v48 + 26);
  v68 = *((uint32_t *)v48 + 27);
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v57, v8, (const hkVector4f::Self *)&v57);
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v61, v8, (const hkVector4f::Self *)&v61);
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v65, v44, (const hkVector4f::Self *)&v65);
  hkDisplaySemiCircle::setParameters(
    (hkDisplaySemiCircle::Self *)(v7 + 52),
    *((float *)v48 + 41),
    0.0,
    6.2831855f,
    18,
    (const hkVector4f::Self *)(v7 + 16),
    (const hkVector4f::Self *)&v57,
    (const hkVector4f::Self *)&v61);
  v53 = nullptr;
  v54 = 0;
  v55 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)&v52, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)&v53, 1, 4);
  v54 = 1;
  *v53 = (uint32_t)(uintptr_t)(v7 + 52);
  (*(void (**)(int *, hkDebugDisplayHandler::Self *, uint32_t **, int, int, int, int, int, int, int, hkVector4f::Self *, hkVector4f::Self *, uint32_t **, float *, int, int *, int, float *, hkDebugDisplayHandler::Self *, int, uint32_t *, int, int, int, float, float, float, int, float, float, float, float, float, float, float, int, float, float, float, float, int, int, hkpRackAndPinionDrawer::Self **, int))(*(uint32_t *)v50 + 116))(
    &v52,
    v50,
    &v53,
    -1,
    v46,
    v42,
    v36,
    v37,
    v38,
    v39,
    v48,
    v48,
    &v53,
    v7 + 20,
    v42,
    &v52,
    v46,
    v7 + 16,
    v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    COERCE_FLOAT(LODWORD(v57)),
    COERCE_FLOAT(LODWORD(v58)),
    COERCE_FLOAT(LODWORD(v59)),
    v60,
    COERCE_FLOAT(LODWORD(v61)),
    COERCE_FLOAT(LODWORD(v62)),
    COERCE_FLOAT(LODWORD(v63)),
    COERCE_FLOAT(LODWORD(v64)),
    COERCE_FLOAT(LODWORD(v65)),
    COERCE_FLOAT(LODWORD(v66)),
    COERCE_FLOAT(LODWORD(v67)),
    v68,
    COERCE_FLOAT(LODWORD(v69)),
    COERCE_FLOAT(LODWORD(v70)),
    COERCE_FLOAT(LODWORD(v71)),
    COERCE_FLOAT(LODWORD(v72)),
    v73,
    v74,
    v75,
    v76);
  v9 = *((float *)v40 + 41);
  v10 = *v51;
  v69 = (float)(v61 * v9) + v7[16];
  v70 = (float)(v62 * v9) + v7[17];
  v11 = (float)(v63 * v9) + v7[18];
  v12 = (float)(v9 * v64) + v7[19];
  a2 = v43;
  self = v47;
  savedregs = &v69;
  v78 = v49;
  v77 = v51;
  retaddr = -1;
  v71 = v11;
  v72 = v12;
  (*(void (**)(hkTransformf::Self *))(v10 + 72))(v45);
  if ( *((uint8_t *)v40 + 168) == 0 )
  {
g4_m128_raw(v13) = LODWORD(v66);
    *(float *)g4_m128_ptr<int32_t>(v13) = (float)(v66 * v59) - (float)(v67 * v58);
    v14 = (float)(v67 * v57) - (float)(v59 * v65);
    v15 = (float)(v65 * v58) - (float)(v57 * v66);
    v16 = v13;
    *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13)) + (float)(v14 * v14))
                            + (float)(v15 * v15);
    if ( *(float *)g4_m128_ptr<int32_t>(v16) > 1.4210855e-14f )
    {
      if ( *(float *)g4_m128_ptr<int32_t>(v16) <= 0.0 )
      {
        v23 = 0.0;
        v22 = 0.0;
      }
      else
      {
        v19 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v16);
        v20 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
        v21 = (float)(*(float *)&v20 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v20)
                    * (float)(*(float *)&v20 * *(float *)&v20));
        v22 = (float)(1.5 * (float)((float)(v21 * 1.5) - (float)((float)(v19 * v21) * (float)(v21 * v21))))
            - (float)((float)(v19 * (float)((float)(v21 * 1.5) - (float)((float)(v19 * v21) * (float)(v21 * v21))))
                    * (float)((float)((float)(v21 * 1.5) - (float)((float)(v19 * v21) * (float)(v21 * v21)))
                            * (float)((float)(v21 * 1.5) - (float)((float)(v19 * v21) * (float)(v21 * v21)))));
        v23 = 0.0 * v22;
      }
      v24 = *((float *)v40 + 41);
      v25 = (float)(*(float *)g4_m128_ptr<int32_t>(v13) * v22) * v24;
      v26 = (float)(v14 * v22) * v24;
      v27 = (float)(v15 * v22) * v24;
      v28 = v24 * v23;
      v29 = v7[22] + v27;
      v30 = v7[23] + v28;
      v7[20] = v7[20] + v25;
      v31 = v7[21] + v26;
      v32 = v25 + v7[16];
      v33 = v26 + v7[17];
      v34 = v27 + v7[18];
      v35 = v28 + v7[19];
      v7[21] = v31;
      v7[22] = v29;
      v7[23] = v30;
      v7[16] = v32;
      v7[17] = v33;
      v7[18] = v34;
      v7[19] = v35;
    }
  }
  hkpConstraintDrawer::drawPivots((hkpConstraintDrawer::Self *)v7, (int)(uintptr_t)(v47), (int)(uintptr_t)(v43));
  v17 = *v51;
  a2 = v43;
  self = v47;
  retaddr = -65536;
  (*(void (**)(hkTransformf::Self *, uint32_t *, hkVector4f::Self *, hkVector4f::Self *))(v17 + 72))(v45, v51, v49, v41);
  result = v55;
  v54 = 0;
  if ( v55 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v53,
             4 * v55);
  return result;
}


