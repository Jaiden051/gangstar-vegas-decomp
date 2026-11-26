#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCogWhee.h"

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::Atoms::staticClass  (binary VA: 0x1715650)
// Original: hkpCogWheelConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpCogWheelConstraintData::Atoms::staticClass()
{
  return &hkpCogWheelConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::staticClass  (binary VA: 0x1715670)
// Original: hkpCogWheelConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpCogWheelConstraintData::staticClass()
{
  return &hkpCogWheelConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintAtom::staticClass  (binary VA: 0x1719950)
// Original: hkpCogWheelConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpCogWheelConstraintAtom::staticClass()
{
  return &hkpCogWheelConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::getType  (binary VA: 0x1723310)
// Original: hkpCogWheelConstraintData::getType
// ----------------------------------------------------------------------------
int hkpCogWheelConstraintData::getType()
{
  return 22;
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::getRuntimeInfo  (binary VA: 0x1723320)
// Original: hkpCogWheelConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpCogWheelConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = 1;
  *a3 = 32;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::Destroy  (binary VA: 0x1723340)
// Original: hkpCogWheelConstraintData::~hkpCogWheelConstraintData
// ----------------------------------------------------------------------------
void hkpCogWheelConstraintData::Destroy(hkpCogWheelConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::isValid  (binary VA: 0x1723360)
// Original: hkpCogWheelConstraintData::isValid
// ----------------------------------------------------------------------------
hkpCogWheelConstraintData::Self * hkpCogWheelConstraintData::isValid(hkpCogWheelConstraintData::Self *self, float *a2)
{
  if ( hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 8), 0.00001f)
    && hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 24), 0.00001f)
    && fabs(0.0 - a2[41]) > 0.00000011920929f )
  {
    *(uint8_t *)self = fabs(0.0 - a2[42]) > 0.00000011920929f;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::getConstraintInfo  (binary VA: 0x1723410)
// Original: hkpCogWheelConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpCogWheelConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 160, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::Destroy_ea1723450  (binary VA: 0x1723450)
// Original: hkpCogWheelConstraintData::~hkpCogWheelConstraintData
// ----------------------------------------------------------------------------
void hkpCogWheelConstraintData::Destroy_ea1723450(hkpCogWheelConstraintData::Self *self)
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
// Function: hkpCogWheelConstraintData::Construct  (binary VA: 0x17234b0)
// Original: hkpCogWheelConstraintData::hkpCogWheelConstraintData
// ----------------------------------------------------------------------------
void hkpCogWheelConstraintData::Construct(hkpCogWheelConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D948);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 22;
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
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint8_t *)self + 172) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint8_t *)self + 173) = 8;
  *((uint32_t *)self + 39) = 0;
  *((uint8_t *)self + 174) = 16;
  *((uint8_t *)self + 175) = 24;
  *((uint32_t *)self + 41) = 1065353216;
  *((uint32_t *)self + 42) = 1065353216;
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::setInWorldSpace  (binary VA: 0x1723640)
// Original: hkpCogWheelConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
hkpCogWheelConstraintData::Self * hkpCogWheelConstraintData::setInWorldSpace(hkpCogWheelConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, float a6, const hkVector4f::Self *a7, const hkVector4f::Self *a8, float a9)
{
  hkpCogWheelConstraintData::Self *result;
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  int v13;
  int v14;
  unsigned int v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  int v22;
  float v23; // xmm2_4
  unsigned int v24; // xmm0_4
  __m128i v25;
  float v26; // xmm1_4
  __m128i v27;
  float v28; // xmm5_4
  int v29;
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm6_4
  __m128i v33;
  float v34; // xmm4_4
  float v35; // xmm5_4
  int v36;
  float v37; // xmm3_4
  float v38; // xmm1_4
  float v39; // xmm6_4
  float v40; // xmm4_4
  float v41; // xmm1_4
  float v42; // xmm3_4
  float v43; // xmm1_4
  float v44; // xmm7_4
  float v45; // xmm4_4
  float v46; // xmm5_4
  float v47; // xmm4_4
  float v48; // xmm0_4
  float v49; // xmm6_4
  float v50; // xmm2_4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  float v55; // xmm6_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  float v60; // xmm6_4
  float v61; // xmm3_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  float v64; // xmm6_4
  float v65; // xmm5_4
  float v66; // xmm4_4
  float v67; // xmm3_4
  float v68; // xmm0_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  float v71; // xmm6_4
  float v72; // xmm4_4
  float v73; // xmm0_4
  float v74; // xmm2_4
  float v75; // xmm3_4
  float v76; // xmm0_4
  float v77; // xmm4_4
  float v78; // xmm6_4
  float v79; // xmm0_4
  float v80; // xmm4_4
  float v81; // xmm3_4
  float v82; // xmm2_4
  float v83; // xmm1_4
  float v84; // xmm5_4
  float v85; // xmm0_4
  float v86; // xmm0_4
  float v87; // xmm4_4
  float v88; // xmm3_4
  float v89; // xmm2_4
  float v90; // xmm1_4
  float v91; // xmm5_4
  float v92; // xmm0_4
  float v93; // xmm2_4
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
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  int v119;
  int v120;
  float v121;
  float v122;
  float v123;
  float v124;
  int v125;
  unsigned int v126;
  float v127;
  float v128;
  int v129;
  float v130;
  float v131;
  float v132;
  int v133;
  unsigned int v134;
  float v135;
  float v136;
  int v137;

  result = self;
  v122 = *(float *)a5;
  v123 = *((float *)a5 + 1);
  v10 = fabs(v122);
  v11 = fabs(v123);
  v124 = *((float *)a5 + 2);
  v117 = v122;
  v125 = *((uint32_t *)a5 + 3);
  v113 = v123;
  v12 = fabs(v124);
  v110 = v124;
  v130 = *(float *)a8;
  v131 = *((float *)a8 + 1);
  v13 = *((uint32_t *)a8 + 3);
  v132 = *((float *)a8 + 2);
  v133 = v13;
  if ( v10 > v11 )
  {
    v119 = 0;
    v14 = 1;
  }
  else
  {
    v11 = v10;
    v119 = 1;
    v14 = 0;
  }
  *(float *)&v126 = 0.0;
  if ( v11 <= v12 )
    v14 = 2;
  v15 = *((uint32_t *)&v122 + v14);
  v127 = 0.0;
  v128 = 0.0;
  v129 = 0;
  *(&v126 + v119) = v15;
  v16 = v130;
  v17 = v131;
  v18 = v130;
  *((float *)&v126 + v14) = -*(&v122 + v119);
  v19 = fabs(v18);
  v20 = fabs(v17);
  v107 = v16;
  v21 = fabs(v132);
  v104 = v17;
  v101 = v132;
  if ( v19 > v20 )
  {
    v120 = 0;
    v22 = 1;
  }
  else
  {
    v20 = v19;
    v120 = 1;
    v22 = 0;
  }
  v23 = 0.0;
  *(float *)&v134 = 0.0;
  if ( v20 <= v21 )
    v22 = 2;
  v24 = *((uint32_t *)&v130 + v22);
  v135 = 0.0;
  v136 = 0.0;
  v137 = 0;
  *(&v134 + v120) = v24;
g4_m128_raw(v25) = v126;
  v26 = v127;
  *((float *)&v134 + v22) = -*(&v130 + v120);
  v27 = v25;
  *(float *)g4_m128_ptr<int32_t>(v27) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)g4_m128_ptr<int32_t>(v25)) + (float)(v26 * v26))
                          + (float)(v128 * v128);
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
  v97 = v26 * v32;
  v127 = v26 * v32;
g4_m128_raw(v33) = v134;
  v99 = *(float *)g4_m128_ptr<int32_t>(v25) * v32;
  *(float *)&v126 = *(float *)g4_m128_ptr<int32_t>(v25) * v32;
  *(float *)g4_m128_ptr<int32_t>(v33) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v33) * *(float *)g4_m128_ptr<int32_t>(v33)) + (float)(v135 * v135))
                          + (float)(v136 * v136);
  v34 = v128 * v32;
  v128 = v128 * v32;
  if ( *(float *)g4_m128_ptr<int32_t>(v33) > 0.0 )
  {
    v35 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v33);
    v36 = ((_mm_cvtsi128_si32(v33) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v33) >> 1));
    v37 = (float)(*(float *)&v36 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v33)) * *(float *)&v36)
                * (float)(*(float *)&v36 * *(float *)&v36));
    v38 = (float)(v37 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v33)) * v37) * (float)(v37 * v37));
    v23 = (float)(1.5 * v38) - (float)((float)(v35 * v38) * (float)(v38 * v38));
  }
  v121 = v135 * v23;
  v116 = *(float *)&v134 * v23;
  v39 = (float)(v113 * v34) - (float)(v110 * v97);
  v40 = v34 * v117;
  v41 = v117 * v97;
  v118 = v23 * v136;
  v98 = v39;
  v42 = (float)(v110 * v99) - v40;
  v43 = v41 - (float)(v113 * v99);
  v96 = (float)(v104 * (float)(v23 * v136)) - (float)((float)(v135 * v23) * v101);
  v44 = (float)(v101 * (float)(*(float *)&v134 * v23)) - (float)((float)(v23 * v136) * v107);
  v114 = *((float *)a2 + 4);
  v45 = (float)((float)(v135 * v23) * v107) - (float)(v104 * (float)(*(float *)&v134 * v23));
  v102 = *((float *)a2 + 6);
  v105 = *((float *)a2 + 2);
  v111 = *((float *)a2 + 9);
  v46 = *(float *)a2;
  v95 = v45;
  v100 = *((float *)a2 + 8);
  v47 = *((float *)a2 + 1);
  v108 = *((float *)a2 + 10);
  v94 = *((float *)a2 + 5);
  v48 = (float)(v114 * v39) + (float)(v94 * v42);
  v49 = (float)((float)(v39 * v100) + (float)(v42 * v111)) + (float)(v108 * v43);
  v50 = (float)((float)(v98 * *(float *)a2) + (float)(v47 * v42)) + (float)(v105 * v43);
  v51 = v127;
  v52 = v48 + (float)(v43 * v102);
  v53 = *(float *)&v126 * *(float *)a2;
  *((float *)self + 18) = v49;
  *((float *)self + 19) = v49;
  *((float *)self + 17) = v52;
  *((float *)self + 16) = v50;
  v54 = (float)(v114 * *(float *)&v126) + (float)(v94 * v51);
  v55 = (float)((float)(v100 * *(float *)&v126) + (float)(v51 * v111)) + (float)(v108 * v128);
  v56 = v128 * v102;
  v57 = (float)(v53 + (float)(v47 * v51)) + (float)(v105 * v128);
  *((float *)self + 14) = v55;
  v58 = v54 + v56;
  *((float *)self + 15) = v55;
  v59 = v124;
  v60 = v105 * v124;
  *((float *)self + 12) = v57;
  *((float *)self + 13) = v58;
  v61 = (float)(v114 * v122) + (float)(v94 * v123);
  v62 = (float)(v122 * v100) + (float)(v123 * v111);
  *((float *)self + 8) = (float)((float)(v46 * v122) + (float)(v47 * v123)) + v60;
  v63 = v62 + (float)(v108 * v59);
  *((float *)self + 10) = v63;
  *((float *)self + 11) = v63;
  *((float *)self + 9) = v61 + (float)(v59 * v102);
  v115 = *((float *)a3 + 8);
  v64 = *(float *)a3;
  v65 = *((float *)a3 + 1);
  v112 = *((float *)a3 + 9);
  v103 = *((float *)a3 + 6);
  v109 = *((float *)a3 + 2);
  v106 = *((float *)a3 + 5);
  v66 = *((float *)a3 + 4);
  v67 = *((float *)a3 + 10);
  v68 = (float)((float)(v96 * v115) + (float)(v44 * v112)) + (float)(v95 * v67);
  *((float *)self + 34) = v68;
  *((float *)self + 35) = v68;
  *((float *)self + 32) = (float)((float)(v96 * v64) + (float)(v44 * v65)) + (float)(v95 * v109);
  *((float *)self + 33) = (float)((float)(v96 * v66) + (float)(v106 * v44)) + (float)(v95 * v103);
  v69 = (float)((float)(v115 * v116) + (float)(v121 * v112)) + (float)(v118 * v67);
  *((float *)self + 28) = (float)((float)(v116 * v64) + (float)(v121 * v65)) + (float)(v118 * v109);
  *((float *)self + 30) = v69;
  *((float *)self + 31) = v69;
  v70 = (float)((float)(v116 * v66) + (float)(v121 * v106)) + (float)(v118 * v103);
  v71 = v64 * v130;
  v72 = v66 * v130;
  v73 = v130 * v115;
  v74 = v132;
  v75 = v67 * v132;
  *((float *)self + 29) = v70;
  v76 = (float)(v73 + (float)(v131 * v112)) + v75;
  v77 = (float)(v72 + (float)(v106 * v131)) + (float)(v74 * v103);
  v78 = (float)(v71 + (float)(v65 * v131)) + (float)(v109 * v74);
  *((float *)self + 26) = v76;
  *((float *)self + 25) = v77;
  *((float *)self + 24) = v78;
  *((float *)self + 27) = v76;
  v79 = *(float *)a4 - *((float *)a2 + 12);
  v80 = *((float *)a4 + 1) - *((float *)a2 + 13);
  v81 = *((float *)a4 + 2) - *((float *)a2 + 14);
  v82 = (float)(*(float *)a2 * v79) + (float)(*((float *)a2 + 1) * v80);
  v83 = (float)(*((float *)a2 + 4) * v79) + (float)(*((float *)a2 + 5) * v80);
  v84 = *((float *)a2 + 6) * v81;
  v85 = (float)((float)(v79 * *((float *)a2 + 8)) + (float)(v80 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v81);
  *((float *)self + 20) = v82 + (float)(v81 * *((float *)a2 + 2));
  *((float *)self + 21) = v83 + v84;
  *((float *)self + 22) = v85;
  *((float *)self + 23) = v85;
  v86 = *(float *)a7 - *((float *)a3 + 12);
  v87 = *((float *)a7 + 1) - *((float *)a3 + 13);
  v88 = *((float *)a7 + 2) - *((float *)a3 + 14);
  v89 = (float)(*(float *)a3 * v86) + (float)(*((float *)a3 + 1) * v87);
  v90 = (float)(*((float *)a3 + 4) * v86) + (float)(*((float *)a3 + 5) * v87);
  v91 = *((float *)a3 + 6) * v88;
  v92 = (float)((float)(v86 * *((float *)a3 + 8)) + (float)(v87 * *((float *)a3 + 9)))
      + (float)(*((float *)a3 + 10) * v88);
  v93 = v89 + (float)(v88 * *((float *)a3 + 2));
  *((float *)self + 38) = v92;
  *((float *)self + 39) = v92;
  *((float *)self + 41) = a6;
  *((float *)self + 36) = v93;
  *((float *)self + 37) = v90 + v91;
  *((float *)self + 42) = a9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelConstraintData::setInBodySpace  (binary VA: 0x1723fc0)
// Original: hkpCogWheelConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkpCogWheelConstraintData::Self * hkpCogWheelConstraintData::setInBodySpace(hkpCogWheelConstraintData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6, float a7)
{
  hkpCogWheelConstraintData::Self *result;
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  int v13;
  int v14;
  float *v15;
  float v16; // xmm2_4
  float *v17;
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  int v21;
  int v22;
  bool v23; // cc
  char *v24;
  float v25; // xmm0_4
  char *v26;
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

  result = self;
  *((uint32_t *)self + 8) = *(uint32_t *)a3;
  v8 = *((float *)self + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a3 + 1);
  v9 = *((float *)self + 9);
  v10 = fabs(v8);
  v11 = fabs(v9);
  v55 = v8;
  *((uint32_t *)self + 10) = *((uint32_t *)a3 + 2);
  v53 = *((float *)self + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a3 + 3);
  v12 = fabs(v53);
  v54 = v9;
  *((uint32_t *)self + 24) = *(uint32_t *)a6;
  *((uint32_t *)self + 25) = *((uint32_t *)a6 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a6 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a6 + 3);
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
  *((uint32_t *)self + 12) = 0;
  if ( v11 <= v12 )
    v14 = 2;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  v15 = (float *)((char *)self + 4 * v13);
  v16 = v15[8];
  v17 = (float *)((char *)self + 4 * v14);
  v15[12] = v17[8];
  v17[12] = -v16;
  v18 = fabs(*((float *)self + 24));
  v19 = fabs(*((float *)self + 25));
  v52 = *((float *)self + 24);
  v20 = fabs(*((float *)self + 26));
  v51 = *((float *)self + 25);
  v50 = *((float *)self + 26);
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
  v24 = (char *)self + 4 * v21;
  v25 = 0.0;
  if ( v23 )
    v22 = 2;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  v26 = (char *)self + 4 * v22;
  *((uint32_t *)v24 + 28) = *((uint32_t *)v26 + 24);
  *((float *)v26 + 28) = -*((float *)v24 + 24);
g4_m128_raw(v27) = *((unsigned int *)self + 12);
  v29 = v27;
  v28 = *((float *)self + 14);
  v56 = *((float *)self + 13);
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
g4_m128_raw(v35) = *((unsigned int *)self + 28);
  v40 = v35;
  v57 = *(float *)g4_m128_ptr<int32_t>(v27) * v34;
  *((float *)self + 12) = *(float *)g4_m128_ptr<int32_t>(v27) * v34;
  v36 = *((float *)self + 29);
  v49 = v28 * v34;
  *((float *)self + 14) = v28 * v34;
  v37 = *((float *)self + 30);
  v38 = v56 * v34;
  v39 = v34 * *((float *)self + 15);
  *(float *)g4_m128_ptr<int32_t>(v40) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v35) * *(float *)g4_m128_ptr<int32_t>(v35)) + (float)(v36 * v36))
                          + (float)(v37 * v37);
  *((float *)self + 13) = v38;
  *((float *)self + 15) = v39;
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
  *((uint32_t *)self + 19) = 0;
  v46 = v36 * v25;
  *((uint32_t *)self + 35) = 0;
  v47 = v37 * v25;
  *((float *)self + 31) = v25 * *((float *)self + 31);
  *((float *)self + 28) = v45;
  *((float *)self + 29) = v46;
  *((float *)self + 30) = v47;
  *((float *)self + 16) = (float)(v54 * v49) - (float)(v38 * v53);
  *((float *)self + 17) = (float)(v57 * v53) - (float)(v49 * v55);
  *((float *)self + 18) = (float)(v38 * v55) - (float)(v57 * v54);
  *((float *)self + 32) = (float)(v51 * v47) - (float)(v50 * v46);
  *((float *)self + 33) = (float)(v50 * v45) - (float)(v47 * v52);
  *((float *)self + 34) = (float)(v46 * v52) - (float)(v45 * v51);
  *((uint32_t *)self + 20) = *(uint32_t *)a2;
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 36) = *(uint32_t *)a5;
  *((uint32_t *)self + 37) = *((uint32_t *)a5 + 1);
  *((uint32_t *)self + 38) = *((uint32_t *)a5 + 2);
  v48 = *((uint32_t *)a5 + 3);
  *((float *)self + 41) = a4;
  *((uint32_t *)self + 39) = v48;
  *((float *)self + 42) = a7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCogWheelDrawer::drawConstraint  (binary VA: 0x1af5630)
// Original: hkpCogWheelDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpCogWheelDrawer::drawConstraint(hkpCogWheelDrawer::Self *self, const hkpCogWheelConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  float *v7;
  const hkpCogWheelConstraintData::Self *v8;
  float v9; // xmm0_4
  int v10;
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14;
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  __m128i v22;
  float v23; // xmm2_4
  float v24; // xmm6_4
  float v25; // xmm5_4
  __m128i v26;
  int v27;
  int result;
  float v29; // xmm5_4
  __m128i v30;
  float v31; // xmm3_4
  int v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm4_4
  float v36; // xmm2_4
  int v37; // xmm0_4
  float v38; // xmm4_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm3_4
  float v45; // xmm0_4
  float *savedregs;
  int retaddr;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef float _g4_t_v53;
  typedef int _g4_t_v54;
  typedef float _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef float _g4_t_v68;
  typedef int _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef hkVector4f::Self *_g4_t_v74;
  typedef hkVector4f::Self *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef const hkpCogWheelConstraintData::Self *_g4_t_v77;
  typedef hkTransformf::Self *_g4_t_v78;
  typedef hkTransformf::Self *_g4_t_v79;
  typedef hkTransformf::Self *_g4_t_v80;
  typedef hkTransformf::Self *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef hkpCogWheelDrawer::Self *_g4_t_v83;
  typedef hkDebugDisplayHandler::Self *_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef int _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef int _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef hkpCogWheelDrawer::Self **_g4_t_v113;
  typedef int _g4_t_v114;
  typedef uint32_t *_g4_t_v115;
  typedef hkVector4f::Self *_g4_t_v116;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v47)) > _g4_s1 ? (4u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v48)) > _g4_s2 ? (8u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v49)) > _g4_s3 ? (12u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v50)) > _g4_s4 ? (16u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v51)) > _g4_s5 ? (16u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v52)) > _g4_s6 ? (20u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v53)) > _g4_s7 ? (20u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v54)) > _g4_s8 ? (24u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v55)) > _g4_s9 ? (24u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v56)) > _g4_s10 ? (28u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v57)) > _g4_s11 ? (28u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v58)) > _g4_s12 ? (32u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v59)) > _g4_s13 ? (32u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v60)) > _g4_s14 ? (36u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v61)) > _g4_s15 ? (36u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v62)) > _g4_s16 ? (40u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v63)) > _g4_s17 ? (40u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v64)) > _g4_s18 ? (44u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v65)) > _g4_s19 ? (44u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v66)) > _g4_s20 ? (48u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v67)) > _g4_s21 ? (52u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v68)) > _g4_s22 ? (52u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v69)) > _g4_s23 ? (56u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v70)) > _g4_s24 ? (56u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v71)) > _g4_s25 ? (60u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v72)) > _g4_s26 ? (64u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v73)) > _g4_s27 ? (68u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v74)) > _g4_s28 ? (72u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v75)) > _g4_s29 ? (76u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v76)) > _g4_s30 ? (80u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v77)) > _g4_s31 ? (80u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (84u + sizeof(_g4_t_v78)) > _g4_s32 ? (84u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v79)) > _g4_s33 ? (84u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v80)) > _g4_s34 ? (88u + sizeof(_g4_t_v80)) : _g4_s34,
    _g4_s36 = (88u + sizeof(_g4_t_v81)) > _g4_s35 ? (88u + sizeof(_g4_t_v81)) : _g4_s35,
    _g4_s37 = (92u + sizeof(_g4_t_v82)) > _g4_s36 ? (92u + sizeof(_g4_t_v82)) : _g4_s36,
    _g4_s38 = (92u + sizeof(_g4_t_v83)) > _g4_s37 ? (92u + sizeof(_g4_t_v83)) : _g4_s37,
    _g4_s39 = (96u + sizeof(_g4_t_v84)) > _g4_s38 ? (96u + sizeof(_g4_t_v84)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v85)) > _g4_s39 ? (96u + sizeof(_g4_t_v85)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_v86)) > _g4_s40 ? (100u + sizeof(_g4_t_v86)) : _g4_s40,
    _g4_s42 = (104u + sizeof(_g4_t_v87)) > _g4_s41 ? (104u + sizeof(_g4_t_v87)) : _g4_s41,
    _g4_s43 = (108u + sizeof(_g4_t_v88)) > _g4_s42 ? (108u + sizeof(_g4_t_v88)) : _g4_s42,
    _g4_s44 = (112u + sizeof(_g4_t_v89)) > _g4_s43 ? (112u + sizeof(_g4_t_v89)) : _g4_s43,
    _g4_s45 = (116u + sizeof(_g4_t_v90)) > _g4_s44 ? (116u + sizeof(_g4_t_v90)) : _g4_s44,
    _g4_s46 = (120u + sizeof(_g4_t_v91)) > _g4_s45 ? (120u + sizeof(_g4_t_v91)) : _g4_s45,
    _g4_s47 = (124u + sizeof(_g4_t_v92)) > _g4_s46 ? (124u + sizeof(_g4_t_v92)) : _g4_s46,
    _g4_s48 = (128u + sizeof(_g4_t_v93)) > _g4_s47 ? (128u + sizeof(_g4_t_v93)) : _g4_s47,
    _g4_s49 = (132u + sizeof(_g4_t_v94)) > _g4_s48 ? (132u + sizeof(_g4_t_v94)) : _g4_s48,
    _g4_s50 = (136u + sizeof(_g4_t_v95)) > _g4_s49 ? (136u + sizeof(_g4_t_v95)) : _g4_s49,
    _g4_s51 = (140u + sizeof(_g4_t_v96)) > _g4_s50 ? (140u + sizeof(_g4_t_v96)) : _g4_s50,
    _g4_s52 = (144u + sizeof(_g4_t_v97)) > _g4_s51 ? (144u + sizeof(_g4_t_v97)) : _g4_s51,
    _g4_s53 = (148u + sizeof(_g4_t_v98)) > _g4_s52 ? (148u + sizeof(_g4_t_v98)) : _g4_s52,
    _g4_s54 = (152u + sizeof(_g4_t_v99)) > _g4_s53 ? (152u + sizeof(_g4_t_v99)) : _g4_s53,
    _g4_s55 = (156u + sizeof(_g4_t_v100)) > _g4_s54 ? (156u + sizeof(_g4_t_v100)) : _g4_s54,
    _g4_s56 = (160u + sizeof(_g4_t_v101)) > _g4_s55 ? (160u + sizeof(_g4_t_v101)) : _g4_s55,
    _g4_s57 = (164u + sizeof(_g4_t_v102)) > _g4_s56 ? (164u + sizeof(_g4_t_v102)) : _g4_s56,
    _g4_s58 = (168u + sizeof(_g4_t_v103)) > _g4_s57 ? (168u + sizeof(_g4_t_v103)) : _g4_s57,
    _g4_s59 = (172u + sizeof(_g4_t_v104)) > _g4_s58 ? (172u + sizeof(_g4_t_v104)) : _g4_s58,
    _g4_s60 = (176u + sizeof(_g4_t_v105)) > _g4_s59 ? (176u + sizeof(_g4_t_v105)) : _g4_s59,
    _g4_s61 = (180u + sizeof(_g4_t_v106)) > _g4_s60 ? (180u + sizeof(_g4_t_v106)) : _g4_s60,
    _g4_s62 = (184u + sizeof(_g4_t_v107)) > _g4_s61 ? (184u + sizeof(_g4_t_v107)) : _g4_s61,
    _g4_s63 = (188u + sizeof(_g4_t_v108)) > _g4_s62 ? (188u + sizeof(_g4_t_v108)) : _g4_s62,
    _g4_s64 = (192u + sizeof(_g4_t_v109)) > _g4_s63 ? (192u + sizeof(_g4_t_v109)) : _g4_s63,
    _g4_s65 = (196u + sizeof(_g4_t_v110)) > _g4_s64 ? (196u + sizeof(_g4_t_v110)) : _g4_s64,
    _g4_s66 = (200u + sizeof(_g4_t_v111)) > _g4_s65 ? (200u + sizeof(_g4_t_v111)) : _g4_s65,
    _g4_s67 = (204u + sizeof(_g4_t_v112)) > _g4_s66 ? (204u + sizeof(_g4_t_v112)) : _g4_s66,
    _g4_s68 = (208u + sizeof(_g4_t_v113)) > _g4_s67 ? (208u + sizeof(_g4_t_v113)) : _g4_s67,
    _g4_s69 = (212u + sizeof(_g4_t_v114)) > _g4_s68 ? (212u + sizeof(_g4_t_v114)) : _g4_s68,
    _g4_s70 = (216u + sizeof(_g4_t_v115)) > _g4_s69 ? (216u + sizeof(_g4_t_v115)) : _g4_s69,
    _g4_s71 = (220u + sizeof(_g4_t_v116)) > _g4_s70 ? (220u + sizeof(_g4_t_v116)) : _g4_s70
  };
  alignas(16) uint8_t _g4_sf[_g4_s71];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 64u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 68u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 76u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 80u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 80u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 84u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 84u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 88u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 88u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 92u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 92u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 96u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 96u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 100u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 104u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 108u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 112u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 116u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 120u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 124u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 128u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 132u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 136u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 140u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 144u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 148u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 152u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 156u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 160u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 164u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 168u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 172u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 176u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 180u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 184u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 188u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 192u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 196u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 200u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 204u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 208u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 212u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 216u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 220u);

  v113 = &self;
  v7 = (float *)self;
  v80 = (hkTransformf::Self *)(a3);
  v8 = a2;
  v78 = (hkTransformf::Self *)(a4);
  v84 = a5;
  v82 = a6;
  v76 = a7;
  hkpPrimitiveDrawer::setDisplayHandler((hkpCogWheelDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters((hkpConstraintDrawer::Self *)v7, v80, v78);
  hkVector4f::setTransformedPos((hkVector4f::Self *)(v7 + 20), v78, (const hkpCogWheelConstraintData::Self *)((char *)v8 + 144));
  hkVector4f::setTransformedPos((hkVector4f::Self *)(v7 + 16), v80, (const hkpCogWheelConstraintData::Self *)((char *)v8 + 80));
  v91 = *((float *)v8 + 8);
  v92 = *((float *)v8 + 9);
  v93 = *((float *)v8 + 10);
  v94 = *((uint32_t *)v8 + 11);
  v95 = *((float *)v8 + 12);
  v96 = *((float *)v8 + 13);
  v97 = *((float *)v8 + 14);
  v98 = *((float *)v8 + 15);
  v99 = *((float *)v8 + 24);
  v100 = *((float *)v8 + 25);
  v101 = *((float *)v8 + 26);
  v102 = *((uint32_t *)v8 + 27);
  v103 = *((float *)v8 + 28);
  v104 = *((float *)v8 + 29);
  v105 = *((float *)v8 + 30);
  v106 = *((float *)v8 + 31);
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v91, v80, (const hkVector4f::Self *)&v91);
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v95, v80, (const hkVector4f::Self *)&v95);
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v99, v78, (const hkVector4f::Self *)&v99);
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v103, v78, (const hkVector4f::Self *)&v103);
  hkDisplaySemiCircle::setParameters(
    (hkDisplaySemiCircle::Self *)(v7 + 52),
    *((float *)v8 + 41),
    0.0,
    6.2831855f,
    18,
    (const hkVector4f::Self *)(v7 + 16),
    (const hkVector4f::Self *)&v91,
    (const hkVector4f::Self *)&v95);
  hkDisplaySemiCircle::setParameters(
    (hkDisplaySemiCircle::Self *)(v7 + 92),
    *((float *)v8 + 42),
    0.0,
    6.2831855f,
    18,
    (const hkVector4f::Self *)(v7 + 20),
    (const hkVector4f::Self *)&v99,
    (const hkVector4f::Self *)&v103);
  v87 = nullptr;
  v88 = 0;
  v89 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)&v86, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)&v87, 2, 4);
  v88 = 2;
  *v87 = (uint32_t)(uintptr_t)(v7 + 52);
  v87[1] = (uint32_t)(uintptr_t)(v7 + 92);
  (*(void (**)(int *, hkDebugDisplayHandler::Self *, uint32_t **, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, float *, float *, uint32_t **, float *, float *, int, int, int *, int, hkDebugDisplayHandler::Self *, int, uint32_t *, int, int, int, float, float, float, int, float, float, float, float, float, float, float, int, float, float, float, float, float, float, float, float, int, int, hkpCogWheelDrawer::Self **, int))(*(uint32_t *)v84 + 116))(
    &v86,
    v84,
    &v87,
    -1,
    v82,
    v76,
    v46,
    v47,
    v48,
    v49,
    v50,
    v52,
    v54,
    v56,
    v58,
    v60,
    v62,
    v64,
    v66,
    v67,
    v69,
    &v91,
    v7 + 92,
    &v87,
    v7 + 16,
    v7 + 20,
    v76,
    -1,
    &v86,
    v82,
    v84,
    v86,
    v87,
    v88,
    v89,
    v90,
    COERCE_FLOAT(LODWORD(v91)),
    COERCE_FLOAT(LODWORD(v92)),
    COERCE_FLOAT(LODWORD(v93)),
    v94,
    COERCE_FLOAT(LODWORD(v95)),
    COERCE_FLOAT(LODWORD(v96)),
    COERCE_FLOAT(LODWORD(v97)),
    COERCE_FLOAT(LODWORD(v98)),
    COERCE_FLOAT(LODWORD(v99)),
    COERCE_FLOAT(LODWORD(v100)),
    COERCE_FLOAT(LODWORD(v101)),
    v102,
    COERCE_FLOAT(LODWORD(v103)),
    COERCE_FLOAT(LODWORD(v104)),
    COERCE_FLOAT(LODWORD(v105)),
    COERCE_FLOAT(LODWORD(v106)),
    COERCE_FLOAT(LODWORD(v107)),
    COERCE_FLOAT(LODWORD(v108)),
    COERCE_FLOAT(LODWORD(v109)),
    COERCE_FLOAT(LODWORD(v110)),
    v111,
    v112,
    v113,
    v114);
  v9 = *((float *)v8 + 41);
  v10 = *v85;
  v107 = (float)(v95 * v9) + v7[16];
  v108 = (float)(v96 * v9) + v7[17];
  v11 = (float)(v97 * v9) + v7[18];
  v12 = (float)(v9 * v98) + v7[19];
  a2 = v77;
  self = v83;
  v115 = v85;
  savedregs = &v107;
  v109 = v11;
  v116 = v74;
  v110 = v12;
  (*(void (**)(hkTransformf::Self *))(v10 + 72))(v81);
  v13 = *((float *)v8 + 42);
  v14 = *v85;
  v107 = (float)(v103 * v13) + v7[20];
  v108 = (float)(v104 * v13) + v7[21];
  v15 = (float)(v105 * v13) + v7[22];
  v16 = (float)(v13 * v106) + v7[23];
  a2 = v77;
  self = v83;
  retaddr = (int)(uintptr_t)(v79);
  savedregs = &v107;
  v115 = v85;
  v109 = v15;
  v116 = v75;
  v110 = v16;
  (*(void (**)(hkTransformf::Self *))(v14 + 72))(v81);
  v17 = v7[20] - v7[16];
  v18 = v7[21] - v7[17];
  v68 = v7[20];
  v19 = v7[22] - v7[18];
  v63 = v7[17];
  v59 = v7[18];
  v61 = v7[22];
  v57 = v7[23];
  v65 = v7[21];
  v55 = v7[19];
  if ( (float)((float)((float)(v17 * v17) + (float)(v18 * v18)) + (float)(v19 * v19)) >= 1.4210855e-14f )
  {
    v20 = (float)(v91 * v19) - (float)(v17 * v93);
    v21 = (float)(v92 * v17) - (float)(v91 * v18);
g4_m128_raw(v22) = LODWORD(v92);
    *(float *)g4_m128_ptr<int32_t>(v22) = (float)(v92 * v21) - (float)(v93 * v20);
    v23 = (float)(v18 * v93) - (float)(v92 * v19);
    v24 = (float)(v93 * v23) - (float)(v21 * v91);
    v25 = (float)(v91 * v20) - (float)(v23 * v92);
    v26 = v22;
    v73 = v25;
    *(float *)g4_m128_ptr<int32_t>(v26) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)g4_m128_ptr<int32_t>(v22)) + (float)(v24 * v24))
                            + (float)(v25 * v25);
    if ( *(float *)g4_m128_ptr<int32_t>(v26) >= 1.4210855e-14f )
    {
      v29 = (float)(v100 * v19) - (float)(v101 * v18);
      v51 = (float)(v101 * v17) - (float)(v19 * v99);
      v53 = (float)(v18 * v99) - (float)(v17 * v100);
      v71 = (float)(v100 * v53) - (float)(v101 * v51);
      v70 = (float)(v101 * v29) - (float)(v53 * v99);
      v72 = (float)(v99 * v51) - (float)(v100 * v29);
g4_m128_raw(v30) = LODWORD(v71);
      *(float *)g4_m128_ptr<int32_t>(v30) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v30) * *(float *)g4_m128_ptr<int32_t>(v30)) + (float)(v70 * v70))
                              + (float)(v72 * v72);
      if ( *(float *)g4_m128_ptr<int32_t>(v30) >= 1.4210855e-14f )
      {
        v31 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v26);
        v32 = ((_mm_cvtsi128_si32(v26) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v26) >> 1));
        v33 = (float)(1.5 * *(float *)&v32)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v26)) * *(float *)&v32)
                    * (float)(*(float *)&v32 * *(float *)&v32));
        v34 = 1.5 * v33;
        v35 = (float)(v31 * v33) * (float)(v33 * v33);
        v36 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v30);
        v37 = ((_mm_cvtsi128_si32(v30) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v30) >> 1));
        v38 = (float)(1.5 * (float)(v34 - v35))
            - (float)((float)(v31 * (float)(v34 - v35)) * (float)((float)(v34 - v35) * (float)(v34 - v35)));
        v39 = (float)(1.5 * *(float *)&v37)
            - (float)((float)(v36 * *(float *)&v37) * (float)(*(float *)&v37 * *(float *)&v37));
        v40 = (float)(1.5 * v39) - (float)((float)(v36 * v39) * (float)(v39 * v39));
        v41 = 1.5 * v40;
        v42 = (float)(v36 * v40) * (float)(v40 * v40);
        v43 = *((float *)v8 + 41);
        v44 = v41 - v42;
        v7[16] = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) * v38) * v43) + v7[16];
        v7[17] = (float)((float)(v24 * v38) * v43) + v63;
        v7[18] = (float)((float)(v73 * v38) * v43) + v59;
        v7[19] = (float)((float)(0.0 * v38) * v43) + v55;
        v45 = *((float *)v8 + 42);
        v7[22] = (float)((float)(v72 * v44) * v45) + v61;
        v7[20] = (float)((float)(v71 * v44) * v45) + v68;
        v7[21] = (float)((float)(v70 * v44) * v45) + v65;
        v7[23] = (float)((float)(0.0 * v44) * v45) + v57;
      }
    }
  }
  hkpConstraintDrawer::drawPivots((hkpConstraintDrawer::Self *)v7, (int)(uintptr_t)(v83), (int)(uintptr_t)(v77));
  v27 = *v85;
  self = v83;
  a2 = v77;
  retaddr = -65536;
  (*(void (**)(hkTransformf::Self *, uint32_t *, hkVector4f::Self *, hkVector4f::Self *))(v27 + 72))(v81, v85, v74, v75);
  result = v89;
  v88 = 0;
  if ( v89 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v87,
             4 * v89);
  return result;
}


