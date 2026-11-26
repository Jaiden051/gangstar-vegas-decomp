#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPrismat.h"

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::Atoms::staticClass  (binary VA: 0x171ddd0)
// Original: hkpPrismaticConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpPrismaticConstraintData::Atoms::staticClass()
{
  return &hkpPrismaticConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::staticClass  (binary VA: 0x171ddf0)
// Original: hkpPrismaticConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpPrismaticConstraintData::staticClass()
{
  return &hkpPrismaticConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::getRuntimeInfo  (binary VA: 0x1727c90)
// Original: hkpPrismaticConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpPrismaticConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = 10;
  *a3 = 88;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::getType  (binary VA: 0x1727cb0)
// Original: hkpPrismaticConstraintData::getType
// ----------------------------------------------------------------------------
int hkpPrismaticConstraintData::getType()
{
  return 6;
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::getConstraintInfo  (binary VA: 0x1727cc0)
// Original: hkpPrismaticConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpPrismaticConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 240, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::isValid  (binary VA: 0x1727d00)
// Original: hkpPrismaticConstraintData::isValid
// ----------------------------------------------------------------------------
hkpPrismaticConstraintData::Self * hkpPrismaticConstraintData::isValid(hkpPrismaticConstraintData::Self *self, float *a2)
{
  if ( hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 8), 0.00001f)
    && hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 24), 0.00001f) )
  {
    *(uint8_t *)self = a2[62] >= a2[61];
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::Destroy  (binary VA: 0x1727d80)
// Original: hkpPrismaticConstraintData::~hkpPrismaticConstraintData
// ----------------------------------------------------------------------------
void hkpPrismaticConstraintData::Destroy(hkpPrismaticConstraintData::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 43);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209DC08);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
      v4 = v2 | (uint16_t)(v3 - 1);
      v5 = v3;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
    if ( (uint16_t)v4 == 0 )
      G4_VCALL<void>(v1, 16);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::Destroy_ea1727e00  (binary VA: 0x1727e00)
// Original: hkpPrismaticConstraintData::~hkpPrismaticConstraintData
// ----------------------------------------------------------------------------
void hkpPrismaticConstraintData::Destroy_ea1727e00(hkpPrismaticConstraintData::Self *self)
{
  int v1;
  int v2;

  hkpPrismaticConstraintData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 256;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::Construct  (binary VA: 0x1727e60)
// Original: hkpPrismaticConstraintData::hkpPrismaticConstraintData
// ----------------------------------------------------------------------------
void hkpPrismaticConstraintData::Construct(hkpPrismaticConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209DC08);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 11;
  *((uint16_t *)self + 88) = 10;
  *((uint8_t *)self + 178) = 1;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint16_t *)self + 96) = 13;
  *((uint16_t *)self + 104) = 7;
  *((uint16_t *)self + 112) = 7;
  *((uint16_t *)self + 120) = 9;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 61) = -8388626;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 62) = 2139095022;
  *((uint32_t *)self + 38) = 0;
  *((uint8_t *)self + 242) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint8_t *)self + 179) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint8_t *)self + 163) = 0;
  *((uint8_t *)self + 162) = 0;
  *((uint64_t *)self + 21) = 0;
  *((uint16_t *)self + 82) = 80;
  *((uint16_t *)self + 83) = 84;
  *((uint8_t *)self + 194) = 0;
  *((uint8_t *)self + 195) = 3;
  *((uint8_t *)self + 210) = 1;
  *((uint8_t *)self + 226) = 2;
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::Atoms::Construct  (binary VA: 0x1728070)
// Original: hkpPrismaticConstraintData::Atoms::Atoms
// ----------------------------------------------------------------------------
int hkpPrismaticConstraintData::Atoms::Construct(int a1, int a2)
{
  int result;

  result = a1;
  *(uint16_t *)(a1 + 148) = -1;
  *(uint16_t *)(a1 + 150) = -1;
  if ( a2 != 0 )
  {
    *(uint16_t *)(a1 + 148) = 80;
    *(uint16_t *)(a1 + 150) = 84;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::setInWorldSpace  (binary VA: 0x17280b0)
// Original: hkpPrismaticConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpPrismaticConstraintData::setInWorldSpace(hkpPrismaticConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5)
{
  __m128i v5;
  float v6; // xmm0_4
  float v7; // xmm6_4
  int v8;
  float v9; // xmm2_4
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  int v16;
  int v17; // xmm1_4
  float v18; // xmm2_4
  __m128i v19;
  int v20;
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm7_4
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30; // xmm4_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  float v36; // xmm4_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm7_4
  float v44; // xmm4_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm6_4
  float v50; // xmm2_4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm7_4
  float v54; // xmm1_4
  float v55; // xmm2_4
  float v56; // xmm0_4
  float v58;
  float v59;
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
  int v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  int v85;
  float v86;
  float v87;
  float v88;

  v78 = *(float *)a5;
  v79 = *((float *)a5 + 1);
g4_m128_raw(v5) = LODWORD(v78);
  v80 = *((float *)a5 + 2);
  v81 = *((float *)a5 + 3);
  *(float *)g4_m128_ptr<int32_t>(v5) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)g4_m128_ptr<int32_t>(v5)) + (float)(v79 * v79))
                         + (float)(v80 * v80);
  v6 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v5) <= 0.0 )
  {
    v10 = 0.0;
  }
  else
  {
    v7 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v5);
    v8 = ((_mm_cvtsi128_si32(v5) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v5) >> 1));
    v9 = (float)(1.5 * *(float *)&v8)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v5)) * *(float *)&v8) * (float)(*(float *)&v8 * *(float *)&v8));
    v10 = (float)(1.5 * (float)((float)(1.5 * v9) - (float)((float)(v7 * v9) * (float)(v9 * v9))))
        - (float)((float)(v7 * (float)((float)(1.5 * v9) - (float)((float)(v7 * v9) * (float)(v9 * v9))))
                * (float)((float)((float)(1.5 * v9) - (float)((float)(v7 * v9) * (float)(v9 * v9)))
                        * (float)((float)(1.5 * v9) - (float)((float)(v7 * v9) * (float)(v9 * v9)))));
  }
  v78 = v78 * v10;
  v11 = v78;
  v79 = v79 * v10;
  v12 = v79;
  v14 = fabs(v78);
  v80 = v80 * v10;
  v13 = v80;
  v81 = v10 * v81;
  v15 = fabs(v79);
  if ( v14 > fabs(v79) )
  {
    v75 = 0;
    v16 = 1;
  }
  else
  {
    v15 = v14;
    v75 = 1;
    v16 = 0;
  }
  v82 = 0.0;
  v83 = 0.0;
  if ( v15 <= fabs(v80) )
    v16 = 2;
  v17 = *((uint32_t *)&v78 + v16);
  v84 = 0.0;
  v85 = 0;
  *((uint32_t *)&v82 + v75) = v17;
  *(&v82 + v16) = -*(&v78 + v75);
  v18 = v83;
g4_m128_raw(v19) = LODWORD(v82);
  v76 = v84;
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v18 * v18))
                          + (float)(v76 * v76);
  if ( *(float *)g4_m128_ptr<int32_t>(v19) > 0.0 )
  {
    v73 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v19);
    v20 = ((_mm_cvtsi128_si32(v19) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v19) >> 1));
    v21 = (float)(1.5 * *(float *)&v20)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * *(float *)&v20)
                * (float)(*(float *)&v20 * *(float *)&v20));
    v22 = (float)(1.5 * v21) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v21) * (float)(v21 * v21));
    v6 = (float)(1.5 * v22) - (float)((float)(v73 * v22) * (float)(v22 * v22));
  }
  v23 = v82 * v6;
  v83 = v83 * v6;
  v84 = v6 * v84;
  v72 = v6 * v76;
  v24 = (float)((float)(v6 * v76) * v12) - (float)((float)(v18 * v6) * v13);
  v74 = v83;
  v25 = *((float *)a2 + 1);
  v26 = (float)(v13 * v23) - (float)(v72 * v11);
  v27 = *((float *)a2 + 4);
  v28 = (float)(v11 * v83) - (float)(v12 * v23);
  v70 = *((float *)a2 + 5);
  v64 = *((float *)a2 + 6);
  v77 = v24;
  v68 = *((float *)a2 + 8);
  v86 = v24;
  v62 = *((float *)a2 + 2);
  v29 = *((float *)a2 + 9);
  v66 = *((float *)a2 + 10);
  v58 = *(float *)a2;
  v59 = v27;
  v30 = (float)(*(float *)a2 * v77) + (float)(v25 * v26);
  v82 = v23;
  v87 = v26;
  v88 = v28;
  v31 = (float)((float)(v68 * v77) + (float)(v29 * v26)) + (float)(v66 * v28);
  *((float *)self + 16) = v30 + (float)(v62 * v28);
  *((float *)self + 18) = v31;
  *((float *)self + 19) = v31;
  *((float *)self + 17) = (float)((float)(v77 * v27) + (float)(v70 * v26)) + (float)(v64 * v28);
  v32 = (float)((float)(v68 * v23) + (float)(v29 * v74)) + (float)(v66 * v72);
  *((float *)self + 14) = v32;
  *((float *)self + 15) = v32;
  v33 = v25 * v79;
  *((float *)self + 12) = (float)((float)(v58 * v23) + (float)(v25 * v74)) + (float)(v62 * v72);
  v34 = v62 * v80;
  v35 = v29 * v79;
  v36 = v58 * v78;
  *((float *)self + 13) = (float)((float)(v59 * v23) + (float)(v70 * v74)) + (float)(v64 * v72);
  v37 = v36 + v33;
  v38 = (float)(v59 * v78) + (float)(v70 * v79);
  v39 = (float)(v68 * v78) + v35;
  v40 = v66 * v80;
  *((float *)self + 8) = v37 + v34;
  v41 = v39 + v40;
  v42 = v38 + (float)(v64 * v80);
  *((float *)self + 10) = v41;
  *((float *)self + 11) = v41;
  *((float *)self + 9) = v42;
  v71 = *((float *)a3 + 4);
  v63 = *((float *)a3 + 6);
  v60 = *((float *)a3 + 9);
  v61 = *(float *)a3;
  v65 = *((float *)a3 + 1);
  v69 = *((float *)a3 + 5);
  v67 = *((float *)a3 + 8);
  v43 = *((float *)a3 + 10);
  v44 = *((float *)a3 + 2);
  v45 = (float)((float)(v77 * v67) + (float)(v26 * v60)) + (float)(v43 * v28);
  v46 = (float)((float)(v77 * *(float *)a3) + (float)(v65 * v26)) + (float)(v44 * v28);
  *((float *)self + 34) = v45;
  *((float *)self + 35) = v45;
  *((float *)self + 32) = v46;
  *((float *)self + 33) = (float)((float)(v71 * v77) + (float)(v69 * v26)) + (float)(v28 * v63);
  v47 = (float)(v61 * v23) + (float)(v65 * v74);
  v48 = (float)(v71 * v23) + (float)(v69 * v74);
  v49 = (float)((float)(v23 * v67) + (float)(v74 * v60)) + (float)(v72 * v43);
  *((float *)self + 28) = v47 + (float)(v72 * v44);
  v50 = v69 * v79;
  v51 = v60 * v79;
  v52 = v61 * v78;
  v53 = v43 * v80;
  *((float *)self + 30) = v49;
  *((float *)self + 31) = v49;
  *((float *)self + 29) = v48 + (float)(v72 * v63);
  v54 = (float)(v71 * v78) + v50;
  v55 = (float)((float)(v67 * v78) + v51) + v53;
  *((float *)self + 24) = (float)(v52 + (float)(v65 * v79)) + (float)(v80 * v44);
  v56 = v80 * v63;
  *((float *)self + 26) = v55;
  *((float *)self + 27) = v55;
  *((float *)self + 25) = v54 + v56;
  hkVector4f::setTransformedInversePos((hkpPrismaticConstraintData::Self *)((char *)self + 80), a2, a4);
  return hkVector4f::setTransformedInversePos((hkpPrismaticConstraintData::Self *)((char *)self + 144), a3, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::setInBodySpace  (binary VA: 0x1728800)
// Original: hkpPrismaticConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkpPrismaticConstraintData::Self * hkpPrismaticConstraintData::setInBodySpace(hkpPrismaticConstraintData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6, const hkVector4f::Self *a7)
{
  hkpPrismaticConstraintData::Self *result;
  __m128i v8;
  float v9; // xmm5_4
  float v10; // xmm2_4
  __m128i v11;
  int v12;
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  __m128i v20;
  float v21; // xmm4_4
  float v22; // xmm3_4
  __m128i v23;
  float v24; // xmm1_4
  float v25; // xmm6_4
  int v26;
  float v27; // xmm1_4
  float v28; // xmm5_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  __m128i v32;
  float v33; // xmm5_4
  float v34; // xmm2_4
  __m128i v35;
  int v36;
  float v37; // xmm3_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  __m128i v44;
  float v45; // xmm4_4
  float v46; // xmm3_4
  __m128i v47;
  float v48; // xmm1_4
  float v49; // xmm6_4
  int v50;
  float v51; // xmm1_4
  float v52; // xmm5_4
  float v53; // xmm4_4
  float v54; // xmm3_4
  float v55; // xmm1_4
  float v56;
  float v57;
  float v58;
  float v59;

  result = self;
  *((uint32_t *)self + 20) = *(uint32_t *)a2;
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 36) = *(uint32_t *)a3;
  *((uint32_t *)self + 37) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 38) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 39) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 8) = *(uint32_t *)a4;
  *((uint32_t *)self + 9) = *((uint32_t *)a4 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a4 + 2);
  *((uint32_t *)self + 11) = *((uint32_t *)a4 + 3);
g4_m128_raw(v8) = *((unsigned int *)self + 8);
  v9 = *((float *)self + 9);
  v11 = v8;
  v10 = *((float *)self + 10);
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)g4_m128_ptr<int32_t>(v8)) + (float)(v9 * v9))
                          + (float)(v10 * v10);
  if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
  {
    v15 = 0.0;
  }
  else
  {
    v12 = ((_mm_cvtsi128_si32(v11) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v11) >> 1));
    v13 = (float)(*(float *)&v12 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * *(float *)&v12)
                * (float)(*(float *)&v12 * *(float *)&v12));
    v14 = (float)(v13 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v13) * (float)(v13 * v13));
    v15 = (float)(1.5 * v14) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v14) * (float)(v14 * v14));
  }
  v16 = *(float *)g4_m128_ptr<int32_t>(v8) * v15;
  v17 = v9 * v15;
  v18 = v10 * v15;
  v19 = v15 * *((float *)self + 11);
  *((float *)self + 8) = v16;
  *((float *)self + 9) = v17;
  *((float *)self + 10) = v18;
  *((float *)self + 11) = v19;
  v56 = v16;
  *((uint32_t *)self + 12) = *(uint32_t *)a6;
  v58 = v17;
g4_m128_raw(v20) = *((unsigned int *)self + 12);
  *((uint32_t *)self + 13) = *((uint32_t *)a6 + 1);
  v21 = *((float *)self + 13);
  v23 = v20;
  *((uint32_t *)self + 14) = *((uint32_t *)a6 + 2);
  v22 = *((float *)self + 14);
  *((uint32_t *)self + 15) = *((uint32_t *)a6 + 3);
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20)) + (float)(v21 * v21))
                          + (float)(v22 * v22);
  v24 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v23) > 0.0 )
  {
    v25 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v23);
    v26 = ((_mm_cvtsi128_si32(v23) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v23) >> 1));
    v27 = (float)(1.5 * *(float *)&v26)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v26)
                * (float)(*(float *)&v26 * *(float *)&v26));
    v24 = (float)(1.5 * (float)((float)(1.5 * v27) - (float)((float)(v25 * v27) * (float)(v27 * v27))))
        - (float)((float)(v25 * (float)((float)(1.5 * v27) - (float)((float)(v25 * v27) * (float)(v27 * v27))))
                * (float)((float)((float)(1.5 * v27) - (float)((float)(v25 * v27) * (float)(v27 * v27)))
                        * (float)((float)(1.5 * v27) - (float)((float)(v25 * v27) * (float)(v27 * v27)))));
  }
  v28 = *(float *)g4_m128_ptr<int32_t>(v20) * v24;
  v29 = v21 * v24;
  v30 = v22 * v24;
  *((uint32_t *)self + 19) = 0;
  v31 = v24 * *((float *)self + 15);
  *((float *)self + 12) = v28;
  *((float *)self + 15) = v31;
  *((float *)self + 13) = v29;
  *((float *)self + 14) = v30;
  *((float *)self + 16) = (float)(v58 * v30) - (float)(v18 * v29);
  *((float *)self + 17) = (float)(v18 * v28) - (float)(v30 * v56);
  *((float *)self + 18) = (float)(v29 * v56) - (float)(v28 * v58);
  *((uint32_t *)self + 24) = *(uint32_t *)a5;
g4_m128_raw(v32) = *((unsigned int *)self + 24);
  *((uint32_t *)self + 25) = *((uint32_t *)a5 + 1);
  v33 = *((float *)self + 25);
  v35 = v32;
  *((uint32_t *)self + 26) = *((uint32_t *)a5 + 2);
  v34 = *((float *)self + 26);
  *((uint32_t *)self + 27) = *((uint32_t *)a5 + 3);
  *(float *)g4_m128_ptr<int32_t>(v35) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)g4_m128_ptr<int32_t>(v32)) + (float)(v33 * v33))
                          + (float)(v34 * v34);
  if ( *(float *)g4_m128_ptr<int32_t>(v35) <= 0.0 )
  {
    v39 = 0.0;
  }
  else
  {
    v36 = ((_mm_cvtsi128_si32(v35) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v35) >> 1));
    v37 = (float)(*(float *)&v36 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * *(float *)&v36)
                * (float)(*(float *)&v36 * *(float *)&v36));
    v38 = (float)(v37 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * v37) * (float)(v37 * v37));
    v39 = (float)(1.5 * v38) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * v38) * (float)(v38 * v38));
  }
  v40 = *(float *)g4_m128_ptr<int32_t>(v32) * v39;
  v41 = v33 * v39;
  v42 = v34 * v39;
  v43 = v39 * *((float *)self + 27);
  *((float *)self + 24) = v40;
  *((float *)self + 25) = v41;
  *((float *)self + 26) = v42;
  *((float *)self + 27) = v43;
  v57 = v40;
  *((uint32_t *)self + 28) = *(uint32_t *)a7;
  v59 = v41;
g4_m128_raw(v44) = *((unsigned int *)self + 28);
  *((uint32_t *)self + 29) = *((uint32_t *)a7 + 1);
  v45 = *((float *)self + 29);
  v47 = v44;
  *((uint32_t *)self + 30) = *((uint32_t *)a7 + 2);
  v46 = *((float *)self + 30);
  *((uint32_t *)self + 31) = *((uint32_t *)a7 + 3);
  *(float *)g4_m128_ptr<int32_t>(v47) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v44) * *(float *)g4_m128_ptr<int32_t>(v44)) + (float)(v45 * v45))
                          + (float)(v46 * v46);
  v48 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v47) > 0.0 )
  {
    v49 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v47);
    v50 = ((_mm_cvtsi128_si32(v47) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v47) >> 1));
    v51 = (float)(1.5 * *(float *)&v50)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v47)) * *(float *)&v50)
                * (float)(*(float *)&v50 * *(float *)&v50));
    v48 = (float)(1.5 * (float)((float)(1.5 * v51) - (float)((float)(v49 * v51) * (float)(v51 * v51))))
        - (float)((float)(v49 * (float)((float)(1.5 * v51) - (float)((float)(v49 * v51) * (float)(v51 * v51))))
                * (float)((float)((float)(1.5 * v51) - (float)((float)(v49 * v51) * (float)(v51 * v51)))
                        * (float)((float)(1.5 * v51) - (float)((float)(v49 * v51) * (float)(v51 * v51)))));
  }
  v52 = *(float *)g4_m128_ptr<int32_t>(v44) * v48;
  *((uint32_t *)self + 35) = 0;
  v53 = v45 * v48;
  v54 = v46 * v48;
  v55 = v48 * *((float *)self + 31);
  *((float *)self + 28) = v52;
  *((float *)self + 31) = v55;
  *((float *)self + 29) = v53;
  *((float *)self + 30) = v54;
  *((float *)self + 32) = (float)(v59 * v54) - (float)(v42 * v53);
  *((float *)self + 33) = (float)(v42 * v52) - (float)(v54 * v57);
  *((float *)self + 34) = (float)(v53 * v57) - (float)(v52 * v59);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::setMotor  (binary VA: 0x1728d20)
// Original: hkpPrismaticConstraintData::setMotor
// ----------------------------------------------------------------------------
int hkpPrismaticConstraintData::setMotor(hkpPrismaticConstraintData::Self *self, hkpConstraintMotor::Self *a2)
{
  hkpConstraintMotor::Self *v2;
  int v3;
  int32_t v4; // kr00_4
  int result;
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v4, v3 | (uint16_t)(v4 + 1));
    }
    while ( v4 != result );
  }
  v6 = *((uint32_t *)self + 43);
  if ( v6 == 0 || *(uint16_t *)(v6 + 6) == 0 )
    goto LABEL_8;
  do
  {
    v8 = *(uint32_t *)(v6 + 4);
    HIWORD(v7) = HIWORD(v8);
    LOWORD(v7) = 0;
    v9 = v7 | (uint16_t)(v8 - 1);
    v10 = v8;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9);
  }
  while ( v10 != result );
  v2 = a2;
  if ( (uint16_t)v9 == 0 )
  {
    result = G4_VCALL<int>(v6, 16);
    *((uint32_t *)self + 43) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_8:
    *((uint32_t *)self + 43) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticConstraintData::setMotorEnabled  (binary VA: 0x1728dc0)
// Original: hkpPrismaticConstraintData::setMotorEnabled
// ----------------------------------------------------------------------------
uint32_t * hkpPrismaticConstraintData::setMotorEnabled(int a1, uint32_t *a2, char a3)
{
  uint32_t *result;

  result = a2;
  *(uint8_t *)(a1 + 178) = a3 == 0;
  *(uint8_t *)(a1 + 162) = a3;
  if ( a2 != nullptr )
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    a2[6] = 0;
    a2[7] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPrismaticDrawer::drawConstraint  (binary VA: 0x1af50c0)
// Original: hkpPrismaticDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpPrismaticDrawer::drawConstraint(hkpPrismaticDrawer::Self *self, const hkpPrismaticConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  float *v7;
  hkDebugDisplayHandler::Self *v8;
  __m128 v9;
  float v10; // xmm0_4
  float v11; // xmm5_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm7_4
  float v24; // xmm3_4
  float v25; // xmm5_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  int v28;
  float v29; // xmm4_4
  int v30;
  float v31; // xmm5_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  float v34; // xmm4_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  float v41; // xmm4_4
  hkpPrismaticDrawer::Self *savedregs;
  const hkpPrismaticConstraintData::Self *retaddr;
  typedef int _g4_t_v42;
  typedef float _g4_t_v43;
  typedef hkTransformf::Self *_g4_t_v44;
  typedef hkTransformf::Self *_g4_t_v45;
  typedef float _g4_t_v46;
  typedef hkTransformf::Self *_g4_t_v47;
  typedef hkTransformf::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef const hkpPrismaticConstraintData::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef hkpPrismaticDrawer::Self *_g4_t_v52;
  typedef const hkpPrismaticConstraintData::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint8_t _g4_t_v55[4];
  typedef __m128 _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65[10];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v42)) > _g4_s0 ? (12u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v43)) > _g4_s1 ? (12u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v44)) > _g4_s2 ? (20u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v45)) > _g4_s3 ? (20u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v46)) > _g4_s4 ? (24u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v47)) > _g4_s5 ? (28u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v48)) > _g4_s6 ? (28u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v49)) > _g4_s7 ? (32u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v50)) > _g4_s8 ? (32u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v51)) > _g4_s9 ? (36u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v52)) > _g4_s10 ? (36u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v53)) > _g4_s11 ? (40u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v54)) > _g4_s12 ? (40u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v55)) > _g4_s13 ? (44u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v56)) > _g4_s14 ? (48u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v57)) > _g4_s15 ? (64u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v58)) > _g4_s16 ? (68u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v59)) > _g4_s17 ? (72u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v60)) > _g4_s18 ? (76u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v61)) > _g4_s19 ? (80u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v62)) > _g4_s20 ? (84u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v63)) > _g4_s21 ? (88u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v64)) > _g4_s22 ? (92u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v65)) > _g4_s23 ? (96u + sizeof(_g4_t_v65)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 84u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 92u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 96u);

  LODWORD(v65[6]) = (uint32_t)(uintptr_t)(&self);
  v7 = (float *)self;
  v47 = (hkTransformf::Self *)(a3);
  v44 = (hkTransformf::Self *)(a4);
  v8 = a5;
  v53 = a2;
  v49 = a7;
  v51 = a6;
  hkpPrimitiveDrawer::setDisplayHandler((hkpPrismaticDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters((hkpConstraintDrawer::Self *)v7, v47, v44);
  hkVector4f::setTransformedPos((hkVector4f::Self *)(v7 + 20), v44, (const hkpPrismaticConstraintData::Self *)((char *)v53 + 144));
  hkVector4f::setTransformedPos((hkVector4f::Self *)(v7 + 16), v47, (const hkpPrismaticConstraintData::Self *)((char *)v53 + 80));
  hkpConstraintDrawer::drawPivots((hkpConstraintDrawer::Self *)v7, v51, v49);
  hkpConstraintDrawer::drawBodyFrames((hkpConstraintDrawer::Self *)v7, v51, v49);
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)&v56,
    (const hkMatrix3f::Self *)(v7 + 36),
    (const hkpPrismaticConstraintData::Self *)((char *)v53 + 96));
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)&v57,
    (const hkMatrix3f::Self *)(v7 + 36),
    (const hkpPrismaticConstraintData::Self *)((char *)v53 + 112));
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int, int, int, float *, float *, uint8_t *, int, int, const hkpPrismaticConstraintData::Self *))(*(uint32_t *)v8 + 72))(
    v55,
    v8,
    v7 + 16,
    v7 + 20,
    -65536,
    v51,
    v49,
    v42,
    (int)(uintptr_t)(v53) + 96,
    v7 + 16,
    v7 + 20,
    v55,
    v49,
    v51,
    v53);
g4_m128_raw(v9) = *(unsigned int *)(v54 + 248);
  if (g4_m128_lane<float>(v9, 0) == 3.40282e38f )
  {
    v10 = *v7 * v7[7];
    v11 = v7[20];
    v12 = v7[21];
    v65[0] = (float)(v10 *g4_m128_lane<float>(v56, 0)) + v11;
    v65[1] = (float)(v10 *g4_m128_lane<float>(v56, 1)) + v12;
    v13 = v7[22];
    v65[2] = (float)(v10 *g4_m128_lane<float>(v56, 2)) + v13;
    v65[3] = (float)(g4_m128_lane<float>(v56, 3) * v10) + v7[23];
    v14 = -v10;
    v15 = (float)(g4_m128_lane<float>(v56, 0) * v14) + v11;
    v16 = (float)(g4_m128_lane<float>(v56, 1) * v14) + v12;
    v17 = (float)(g4_m128_lane<float>(v56, 2) * v14) + v13;
    v18 = (float)(v14 *g4_m128_lane<float>(v56, 3)) + v7[23];
    v61 = v15;
    v62 = v16;
    v63 = v17;
    v64 = v18;
  }
  else
  {
    v38 = v7[22];
    v46 = v7[23];
    v39 = v7[20];
    *(__m128 *)v65 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v56), *(__m128 *)(v7 + 20));
    v40 = *(float *)(v54 + 244);
    v41 = v7[21] + (float)(g4_m128_lane<float>(v56, 1) * v40);
    v63 = v38 + (float)(g4_m128_lane<float>(v56, 2) * v40);
    v61 = v39 + (float)(g4_m128_lane<float>(v56, 0) * v40);
    v62 = v41;
    v64 = v46 + (float)(v40 *g4_m128_lane<float>(v56, 3));
  }
  v45 = *(hkTransformf::Self **)(*(uint32_t *)v8 + 72);
  hkColor::rgbFromFloats(nullptr, 0x3F000000u, 1.0, 0x3F800000u);
  a2 = v50;
  self = v52;
  ((void (*)(hkTransformf::Self *, hkDebugDisplayHandler::Self *, float *, float *))v45)(v48, v8, &v61, v65);
  v19 = *v7 * v7[7];
  v20 = *(float *)(v54 + 244);
  v21 = 0.5 * v19;
  v22 = (float)(g4_m128_lane<float>(v56, 0) * v20) + v7[20];
  v23 = v22 + (float)(v57 * (float)(0.5 * v19));
  v24 = (float)(g4_m128_lane<float>(v56, 1) * v20) + v7[21];
  v25 = v19 * -0.5;
  v26 = (float)(g4_m128_lane<float>(v56, 2) * v20) + v7[22];
  v27 = (float)(v20 *g4_m128_lane<float>(v56, 3)) + v7[23];
  v61 = v23;
  v43 = *(float *)(v54 + 248);
  v28 = *(uint32_t *)v8;
  v62 = (float)(v58 * v21) + v24;
  v63 = (float)(v59 * v21) + v26;
  v64 = (float)(v21 * v60) + v27;
  v65[1] = (float)(v58 * v25) + v24;
  v65[0] = (float)(v57 * v25) + v22;
  v65[2] = (float)(v59 * v25) + v26;
  v65[3] = (float)(v25 * v60) + v27;
  self = (hkpPrismaticDrawer::Self *)(v50);
  (*(void (**)(hkTransformf::Self *, hkDebugDisplayHandler::Self *, float *, float *, int))(v28 + 72))(
    v48,
    v8,
    &v61,
    v65,
    -1);
  v29 = *v7 * v7[7];
  v30 = *(uint32_t *)v8;
  v31 = 0.5 * v29;
  v32 = (float)(g4_m128_lane<float>(v56, 0) * v43) + v7[20];
  v33 = (float)(g4_m128_lane<float>(v56, 1) * v43) + v7[21];
  v34 = v29 * -0.5;
  v35 = (float)(g4_m128_lane<float>(v56, 2) * v43) + v7[22];
  v61 = v32 + (float)(v31 * v57);
  v36 = (float)(v43 *g4_m128_lane<float>(v56, 3)) + v7[23];
  retaddr = v50;
  savedregs = v52;
  v65[0] = (float)(v57 * v34) + v32;
  v62 = (float)(v58 * v31) + v33;
  v65[1] = (float)(v58 * v34) + v33;
  v63 = (float)(v59 * v31) + v35;
  v64 = (float)(v31 * v60) + v36;
  v65[2] = (float)(v59 * v34) + v35;
  v65[3] = (float)(v34 * v60) + v36;
  v65[9] = NAN;
  LODWORD(v65[7]) = (uint32_t)(uintptr_t)(&v61);
  LODWORD(v65[8]) = (uint32_t)(uintptr_t)(v65);
  LODWORD(v65[6]) = (uint32_t)(uintptr_t)(v8);
  return (*(int (**)(hkTransformf::Self *))(v30 + 72))(v48);
}


