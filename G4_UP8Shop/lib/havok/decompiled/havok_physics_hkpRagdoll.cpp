#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpRagdoll.h"

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::Atoms::staticClass  (binary VA: 0x1712050)
// Original: hkpRagdollLimitsData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpRagdollLimitsData::Atoms::staticClass()
{
  return &hkpRagdollLimitsDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::staticClass  (binary VA: 0x1712070)
// Original: hkpRagdollLimitsData::staticClass
// ----------------------------------------------------------------------------
void * hkpRagdollLimitsData::staticClass()
{
  return &hkpRagdollLimitsDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::getRuntimeInfo  (binary VA: 0x1714640)
// Original: hkpRagdollLimitsData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpRagdollLimitsData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = 3;
  *a3 = 28;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::getType  (binary VA: 0x1714660)
// Original: hkpRagdollLimitsData::getType
// ----------------------------------------------------------------------------
int hkpRagdollLimitsData::getType()
{
  return 19;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::Destroy  (binary VA: 0x1714670)
// Original: hkpRagdollLimitsData::~hkpRagdollLimitsData
// ----------------------------------------------------------------------------
void hkpRagdollLimitsData::Destroy(hkpRagdollLimitsData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::getConstraintInfo  (binary VA: 0x1714690)
// Original: hkpRagdollLimitsData::getConstraintInfo
// ----------------------------------------------------------------------------
int hkpRagdollLimitsData::getConstraintInfo(int a1, int a2)
{
  return (int)(uintptr_t)(hkpConstraintData::getConstraintInfoUtil(a1 + 16, 208, a2));
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::isValid  (binary VA: 0x17146d0)
// Original: hkpRagdollLimitsData::isValid
// ----------------------------------------------------------------------------
hkpRagdollLimitsData::Self * hkpRagdollLimitsData::isValid(hkpRagdollLimitsData::Self *self, float *a2)
{
  float v2; // xmm0_4
  char v3;

  *(uint8_t *)self = 1;
  if ( !hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 8), 0.00001f)
    || !hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 20), 0.00001f)
    || a2[42] != -100.0
    || (v2 = a2[43]) < 0.0
    || v2 >= 3.1415927f
    || a2[51] < a2[50]
    || (v3 = 1, a2[35] < a2[34]) )
  {
    v3 = 0;
  }
  *(uint8_t *)self = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::Destroy_ea1714790  (binary VA: 0x1714790)
// Original: hkpRagdollLimitsData::~hkpRagdollLimitsData
// ----------------------------------------------------------------------------
void hkpRagdollLimitsData::Destroy_ea1714790(hkpRagdollLimitsData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 224;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::setInWorldSpace  (binary VA: 0x17147f0)
// Original: hkpRagdollLimitsData::setInWorldSpace
// ----------------------------------------------------------------------------
hkpRagdollLimitsData::Self * hkpRagdollLimitsData::setInWorldSpace(hkpRagdollLimitsData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5)
{
  hkpRagdollLimitsData::Self *result;
  __m128i v6;
  float v7; // xmm3_4
  float v8; // xmm2_4
  __m128i v9;
  float v10; // xmm5_4
  int v11;
  int v12;
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm6_4
  __m128i v19;
  float v20; // xmm2_4
  __m128i v21;
  float v22; // xmm1_4
  int v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm5_4
  float v28; // xmm1_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm5_4
  float v39; // xmm1_4
  float v40; // xmm3_4
  float v41; // xmm0_4
  float v42; // xmm3_4
  float v43; // xmm1_4
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;

  result = self;
g4_m128_raw(v6) = *(unsigned int *)a4;
  v7 = *((float *)a4 + 1);
  v9 = v6;
  v8 = *((float *)a4 + 2);
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v6) * *(float *)g4_m128_ptr<int32_t>(v6)) + (float)(v7 * v7))
                         + (float)(v8 * v8);
  if ( *(float *)g4_m128_ptr<int32_t>(v9) <= 0.0 )
  {
    v15 = 0.0;
  }
  else
  {
    v10 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v9);
    v11 = _mm_cvtsi128_si32(v9) >> 1;
    v12 = (_mm_cvtsi128_si32(v9) + 2139095040) >> 31;
    v13 = (float)(COERCE_FLOAT(v12 & (1597463174 - v11)) * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * COERCE_FLOAT(v12 & (1597463174 - v11)))
                * (float)(COERCE_FLOAT(v12 & (1597463174 - v11)) * COERCE_FLOAT(v12 & (1597463174 - v11))));
    v14 = (float)(v13 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * v13) * (float)(v13 * v13));
    v15 = (float)(1.5 * v14) - (float)((float)(v10 * v14) * (float)(v14 * v14));
  }
  v16 = *(float *)g4_m128_ptr<int32_t>(v6) * v15;
  v17 = v7 * v15;
  v18 = v15 * v8;
  v64 = v16;
  v65 = v17;
g4_m128_raw(v19) = *(unsigned int *)a5;
  v21 = v19;
  v20 = *((float *)a5 + 1);
  v61 = *((float *)a5 + 2);
  v66 = v18;
  *(float *)g4_m128_ptr<int32_t>(v21) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v20 * v20))
                          + (float)(v61 * v61);
  v22 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v21) > 0.0 )
  {
    v62 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v21);
    v23 = ((_mm_cvtsi128_si32(v21) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v21) >> 1));
    v24 = (float)(1.5 * *(float *)&v23)
        - (float)((float)(v62 * *(float *)&v23) * (float)(*(float *)&v23 * *(float *)&v23));
    v25 = (float)(1.5 * v24) - (float)((float)(v62 * v24) * (float)(v24 * v24));
    v22 = (float)(1.5 * v25) - (float)((float)(v62 * v25) * (float)(v25 * v25));
  }
  v26 = v20 * v22;
  v27 = *(float *)g4_m128_ptr<int32_t>(v19) * v22;
  v28 = v22 * v61;
  v29 = v27;
  v63 = v27;
  v30 = (float)(v28 * v17) - (float)(v26 * v18);
  v60 = v28;
  v31 = *(float *)a2;
  v32 = (float)(v18 * v63) - (float)(v28 * v16);
  v33 = (float)(v16 * v26) - (float)(v17 * v63);
  v50 = *((float *)a2 + 2);
  v48 = *((float *)a2 + 1);
  v44 = *((float *)a2 + 4);
  v56 = *((float *)a2 + 6);
  v58 = *((float *)a2 + 8);
  v52 = *((float *)a2 + 9);
  v54 = *((float *)a2 + 10);
  v46 = *((float *)a2 + 5);
  v34 = (float)((float)(v58 * v30) + (float)(v52 * v32)) + (float)(v54 * v33);
  v35 = (float)((float)(v30 * *(float *)a2) + (float)(v48 * v32)) + (float)(v50 * v33);
  *((float *)self + 18) = v34;
  *((float *)self + 19) = v34;
  *((float *)self + 16) = v35;
  *((float *)self + 17) = (float)((float)(v44 * v30) + (float)(v46 * v32)) + (float)(v56 * v33);
  v36 = (float)((float)(v58 * v29) + (float)(v26 * v52)) + (float)(v54 * v60);
  *((float *)self + 12) = (float)((float)(v29 * v31) + (float)(v48 * v26)) + (float)(v60 * v50);
  *((float *)self + 14) = v36;
  *((float *)self + 15) = v36;
  *((float *)self + 13) = (float)((float)(v44 * v29) + (float)(v46 * v26)) + (float)(v56 * v60);
  v37 = (float)((float)(v58 * v64) + (float)(v52 * v65)) + (float)(v54 * v66);
  *((float *)self + 10) = v37;
  *((float *)self + 11) = v37;
  *((float *)self + 8) = (float)((float)(v31 * v64) + (float)(v48 * v65)) + (float)(v50 * v66);
  *((float *)self + 9) = (float)((float)(v44 * v64) + (float)(v46 * v65)) + (float)(v56 * v66);
  v47 = *((float *)a3 + 2);
  v59 = *((float *)a3 + 4);
  v38 = *(float *)a3;
  v57 = *((float *)a3 + 5);
  v45 = *((float *)a3 + 6);
  v51 = *((float *)a3 + 9);
  v53 = *((float *)a3 + 8);
  v55 = *((float *)a3 + 10);
  v49 = *((float *)a3 + 1);
  v39 = (float)(v59 * v30) + (float)(v57 * v32);
  v40 = (float)((float)(*(float *)a3 * v30) + (float)(v49 * v32)) + (float)(v47 * v33);
  v41 = (float)((float)(v30 * v53) + (float)(v32 * v51)) + (float)(v55 * v33);
  *((float *)self + 28) = v40;
  *((float *)self + 30) = v41;
  *((float *)self + 29) = v39 + (float)(v33 * v45);
  *((float *)self + 31) = v41;
  v42 = (float)((float)(v63 * v53) + (float)(v51 * v26)) + (float)(v55 * v60);
  *((float *)self + 26) = v42;
  *((float *)self + 27) = v42;
  *((float *)self + 24) = (float)((float)(v63 * v38) + (float)(v49 * v26)) + (float)(v47 * v60);
  *((float *)self + 25) = (float)((float)(v59 * v63) + (float)(v57 * v26)) + (float)(v60 * v45);
  v43 = (float)((float)(v53 * v64) + (float)(v51 * v65)) + (float)(v55 * v66);
  *((float *)self + 20) = (float)((float)(v38 * v64) + (float)(v49 * v65)) + (float)(v66 * v47);
  *((float *)self + 22) = v43;
  *((float *)self + 23) = v43;
  *((float *)self + 21) = (float)((float)(v59 * v64) + (float)(v57 * v65)) + (float)(v66 * v45);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::setInBodySpace  (binary VA: 0x1714e40)
// Original: hkpRagdollLimitsData::setInBodySpace
// ----------------------------------------------------------------------------
hkpRagdollLimitsData::Self * hkpRagdollLimitsData::setInBodySpace(hkpRagdollLimitsData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5)
{
  hkpRagdollLimitsData::Self *result;
  __m128i v6;
  float v7; // xmm5_4
  float v8; // xmm2_4
  __m128i v9;
  int v10;
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  __m128i v18;
  float v19; // xmm4_4
  float v20; // xmm3_4
  __m128i v21;
  float v22; // xmm1_4
  float v23; // xmm6_4
  int v24;
  int v25;
  float v26; // xmm1_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  __m128i v31;
  float v32; // xmm5_4
  float v33; // xmm2_4
  __m128i v34;
  int v35;
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  __m128i v43;
  float v44; // xmm4_4
  float v45; // xmm3_4
  __m128i v46;
  float v47; // xmm1_4
  float v48; // xmm6_4
  int v49;
  int v50;
  float v51; // xmm1_4
  float v52; // xmm5_4
  float v53; // xmm4_4
  float v54; // xmm3_4
  float v55; // xmm1_4
  int v56;
  float v57;
  float v58;
  float v59;
  float v60;

  result = self;
  *((uint32_t *)self + 8) = *(uint32_t *)a4;
g4_m128_raw(v6) = *((unsigned int *)self + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a4 + 1);
  v7 = *((float *)self + 9);
  v9 = v6;
  *((uint32_t *)self + 10) = *((uint32_t *)a4 + 2);
  v8 = *((float *)self + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a4 + 3);
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v6) * *(float *)g4_m128_ptr<int32_t>(v6)) + (float)(v7 * v7))
                         + (float)(v8 * v8);
  if ( *(float *)g4_m128_ptr<int32_t>(v9) <= 0.0 )
  {
    v13 = 0.0;
  }
  else
  {
    v10 = (_mm_cvtsi128_si32(v9) + 2139095040) >> 31;
    v56 = _mm_cvtsi128_si32(v9) >> 1;
    v11 = (float)(COERCE_FLOAT(v10 & (1597463174 - v56)) * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * COERCE_FLOAT(v10 & (1597463174 - v56)))
                * (float)(COERCE_FLOAT(v10 & (1597463174 - v56)) * COERCE_FLOAT(v10 & (1597463174 - v56))));
    v12 = (float)(v11 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * v11) * (float)(v11 * v11));
    v13 = (float)(1.5 * v12) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * v12) * (float)(v12 * v12));
  }
  v14 = *(float *)g4_m128_ptr<int32_t>(v6) * v13;
  v15 = v7 * v13;
  v16 = v8 * v13;
  v17 = v13 * *((float *)self + 11);
  *((float *)self + 8) = v14;
  *((float *)self + 9) = v15;
  *((float *)self + 10) = v16;
  *((float *)self + 11) = v17;
  v57 = v14;
  *((uint32_t *)self + 12) = *(uint32_t *)a2;
  v59 = v15;
g4_m128_raw(v18) = *((unsigned int *)self + 12);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 1);
  v19 = *((float *)self + 13);
  v21 = v18;
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 2);
  v20 = *((float *)self + 14);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 3);
  *(float *)g4_m128_ptr<int32_t>(v21) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)g4_m128_ptr<int32_t>(v18)) + (float)(v19 * v19))
                          + (float)(v20 * v20);
  v22 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v21) > 0.0 )
  {
    v23 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v21);
    v24 = _mm_cvtsi128_si32(v21) >> 1;
    v25 = (_mm_cvtsi128_si32(v21) + 2139095040) >> 31;
    v26 = (float)(1.5 * COERCE_FLOAT(v25 & (1597463174 - v24)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v21)) * COERCE_FLOAT(v25 & (1597463174 - v24)))
                * (float)(COERCE_FLOAT(v25 & (1597463174 - v24)) * COERCE_FLOAT(v25 & (1597463174 - v24))));
    v22 = (float)(1.5 * (float)((float)(1.5 * v26) - (float)((float)(v23 * v26) * (float)(v26 * v26))))
        - (float)((float)(v23 * (float)((float)(1.5 * v26) - (float)((float)(v23 * v26) * (float)(v26 * v26))))
                * (float)((float)((float)(1.5 * v26) - (float)((float)(v23 * v26) * (float)(v26 * v26)))
                        * (float)((float)(1.5 * v26) - (float)((float)(v23 * v26) * (float)(v26 * v26)))));
  }
  v27 = *(float *)g4_m128_ptr<int32_t>(v18) * v22;
  v28 = v19 * v22;
  *((uint32_t *)self + 19) = 0;
  v29 = v20 * v22;
  v30 = v22 * *((float *)self + 15);
  *((float *)self + 12) = v27;
  *((float *)self + 15) = v30;
  *((float *)self + 13) = v28;
  *((float *)self + 14) = v29;
  *((float *)self + 16) = (float)(v59 * v29) - (float)(v16 * v28);
  *((float *)self + 17) = (float)(v16 * v27) - (float)(v29 * v57);
  *((float *)self + 18) = (float)(v28 * v57) - (float)(v27 * v59);
  *((uint32_t *)self + 20) = *(uint32_t *)a5;
g4_m128_raw(v31) = *((unsigned int *)self + 20);
  *((uint32_t *)self + 21) = *((uint32_t *)a5 + 1);
  v32 = *((float *)self + 21);
  v34 = v31;
  *((uint32_t *)self + 22) = *((uint32_t *)a5 + 2);
  v33 = *((float *)self + 22);
  *((uint32_t *)self + 23) = *((uint32_t *)a5 + 3);
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v31) * *(float *)g4_m128_ptr<int32_t>(v31)) + (float)(v32 * v32))
                          + (float)(v33 * v33);
  if ( *(float *)g4_m128_ptr<int32_t>(v34) <= 0.0 )
  {
    v38 = 0.0;
  }
  else
  {
    v35 = ((_mm_cvtsi128_si32(v34) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v34) >> 1));
    v36 = (float)(*(float *)&v35 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v34)) * *(float *)&v35)
                * (float)(*(float *)&v35 * *(float *)&v35));
    v37 = (float)(v36 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v34)) * v36) * (float)(v36 * v36));
    v38 = (float)(1.5 * v37) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v34)) * v37) * (float)(v37 * v37));
  }
  v39 = *(float *)g4_m128_ptr<int32_t>(v31) * v38;
  v40 = v32 * v38;
  v41 = v33 * v38;
  v42 = v38 * *((float *)self + 23);
  *((float *)self + 20) = v39;
  *((float *)self + 21) = v40;
  *((float *)self + 22) = v41;
  *((float *)self + 23) = v42;
  v58 = v39;
  *((uint32_t *)self + 24) = *(uint32_t *)a3;
  v60 = v40;
g4_m128_raw(v43) = *((unsigned int *)self + 24);
  *((uint32_t *)self + 25) = *((uint32_t *)a3 + 1);
  v44 = *((float *)self + 25);
  v46 = v43;
  *((uint32_t *)self + 26) = *((uint32_t *)a3 + 2);
  v45 = *((float *)self + 26);
  *((uint32_t *)self + 27) = *((uint32_t *)a3 + 3);
  *(float *)g4_m128_ptr<int32_t>(v46) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v43) * *(float *)g4_m128_ptr<int32_t>(v43)) + (float)(v44 * v44))
                          + (float)(v45 * v45);
  v47 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v46) > 0.0 )
  {
    v48 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v46);
    v49 = _mm_cvtsi128_si32(v46) >> 1;
    v50 = (_mm_cvtsi128_si32(v46) + 2139095040) >> 31;
    v51 = (float)(1.5 * COERCE_FLOAT(v50 & (1597463174 - v49)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v46)) * COERCE_FLOAT(v50 & (1597463174 - v49)))
                * (float)(COERCE_FLOAT(v50 & (1597463174 - v49)) * COERCE_FLOAT(v50 & (1597463174 - v49))));
    v47 = (float)(1.5 * (float)((float)(1.5 * v51) - (float)((float)(v48 * v51) * (float)(v51 * v51))))
        - (float)((float)(v48 * (float)((float)(1.5 * v51) - (float)((float)(v48 * v51) * (float)(v51 * v51))))
                * (float)((float)((float)(1.5 * v51) - (float)((float)(v48 * v51) * (float)(v51 * v51)))
                        * (float)((float)(1.5 * v51) - (float)((float)(v48 * v51) * (float)(v51 * v51)))));
  }
  v52 = *(float *)g4_m128_ptr<int32_t>(v43) * v47;
  *((uint32_t *)self + 31) = 0;
  v53 = v44 * v47;
  v54 = v45 * v47;
  v55 = v47 * *((float *)self + 27);
  *((float *)self + 24) = v52;
  *((float *)self + 27) = v55;
  *((float *)self + 25) = v53;
  *((float *)self + 26) = v54;
  *((float *)self + 28) = (float)(v60 * v54) - (float)(v41 * v53);
  *((float *)self + 29) = (float)(v41 * v52) - (float)(v54 * v58);
  *((float *)self + 30) = (float)(v53 * v58) - (float)(v52 * v60);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::setConeLimitStabilization  (binary VA: 0x1715310)
// Original: hkpRagdollLimitsData::setConeLimitStabilization
// ----------------------------------------------------------------------------
int hkpRagdollLimitsData::setConeLimitStabilization(int a1, int a2, char a3)
{
  int result;

  LOBYTE(a1) = a3 != 0;
  result = 16 * a1;
  *(uint8_t *)(a2 + 166) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::Construct  (binary VA: 0x1715330)
// Original: hkpRagdollLimitsData::hkpRagdollLimitsData
// ----------------------------------------------------------------------------
void hkpRagdollLimitsData::Construct(hkpRagdollLimitsData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C868);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 4;
  *((uint16_t *)self + 64) = 15;
  *((uint8_t *)self + 130) = 1;
  *((uint16_t *)self + 80) = 16;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint8_t *)self + 162) = 1;
  *((uint8_t *)self + 166) = 0;
  *((uint16_t *)self + 96) = 16;
  *((uint8_t *)self + 194) = 1;
  *((uint8_t *)self + 198) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 20) = 1065353216;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 1065353216;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 1065353216;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 36) = 1061997773;
  *((uint8_t *)self + 131) = 0;
  *((uint32_t *)self + 44) = 1061997773;
  *((uint8_t *)self + 132) = 1;
  *((uint32_t *)self + 34) = -1090123098;
  *((uint32_t *)self + 35) = 1057360550;
  *((uint8_t *)self + 163) = 0;
  *((uint8_t *)self + 164) = 0;
  *((uint8_t *)self + 165) = 0;
  *((uint32_t *)self + 42) = -1027080192;
  *((uint32_t *)self + 43) = 1065353216;
  hkpRagdollLimitsData::setConeLimitStabilization(0, (int)(uintptr_t)(self), 1);
  *((uint8_t *)self + 195) = 0;
  *((uint8_t *)self + 196) = 1;
  *((uint8_t *)self + 197) = 1;
  *((uint32_t *)self + 50) = -1127428915;
  *((uint32_t *)self + 51) = 1020054733;
  *((uint32_t *)self + 52) = 1061997773;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::getConstraintFrameA  (binary VA: 0x1715530)
// Original: hkpRagdollLimitsData::getConstraintFrameA
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpRagdollLimitsData::getConstraintFrameA(hkpRagdollLimitsData::Self *self, hkMatrix3f::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 11);
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 15);
  *((uint32_t *)a2 + 8) = *((uint32_t *)self + 16);
  *((uint32_t *)a2 + 9) = *((uint32_t *)self + 17);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 18);
  *((uint32_t *)a2 + 11) = *((uint32_t *)self + 19);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsData::getConstraintFrameB  (binary VA: 0x1715580)
// Original: hkpRagdollLimitsData::getConstraintFrameB
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpRagdollLimitsData::getConstraintFrameB(hkpRagdollLimitsData::Self *self, hkMatrix3f::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 20);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 21);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 22);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 23);
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 24);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 25);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 26);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 27);
  *((uint32_t *)a2 + 8) = *((uint32_t *)self + 28);
  *((uint32_t *)a2 + 9) = *((uint32_t *)self + 29);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 30);
  *((uint32_t *)a2 + 11) = *((uint32_t *)self + 31);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollMotorConstraintAtom::staticClass  (binary VA: 0x1719af0)
// Original: hkpRagdollMotorConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpRagdollMotorConstraintAtom::staticClass()
{
  return &hkpRagdollMotorConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::Construct  (binary VA: 0x171bdc0)
// Original: hkpRagdollConstraintData::hkpRagdollConstraintData
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::Construct(int a1, int a2)
{
  int result;

  hkpConstraintData::Construct((uint32_t *)a1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209DB88);
  result = hkpRagdollConstraintData::Atoms::Construct(a1 + 16, a2);
  if ( a2 != 0 && *(uint8_t *)(a1 + 310) != 0 )
    return hkpRagdollConstraintData::setConeLimitStabilization(a1, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::Atoms::staticClass  (binary VA: 0x171be70)
// Original: hkpRagdollConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpRagdollConstraintData::Atoms::staticClass()
{
  return &hkpRagdollConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::staticClass  (binary VA: 0x171be90)
// Original: hkpRagdollConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpRagdollConstraintData::staticClass()
{
  return &hkpRagdollConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setBreachImpulse  (binary VA: 0x1726380)
// Original: hkpRagdollConstraintData::setBreachImpulse
// ----------------------------------------------------------------------------
hkpRagdollConstraintData::Self * hkpRagdollConstraintData::setBreachImpulse(hkpRagdollConstraintData::Self *self, float a2)
{
  *((float *)self + 94) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getBreachImpulse  (binary VA: 0x17263a0)
// Original: hkpRagdollConstraintData::getBreachImpulse
// ----------------------------------------------------------------------------
long double hkpRagdollConstraintData::getBreachImpulse(hkpRagdollConstraintData::Self *self)
{
  return *((float *)self + 94);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setBodyToNotify  (binary VA: 0x17263c0)
// Original: hkpRagdollConstraintData::setBodyToNotify
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::setBodyToNotify(hkpRagdollConstraintData::Self *self, char a2)
{
  *((uint8_t *)self + 371) = 1 << a2;
  return 1 << a2;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getNotifiedBodyIndex  (binary VA: 0x17263e0)
// Original: hkpRagdollConstraintData::getNotifiedBodyIndex
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::getNotifiedBodyIndex(hkpRagdollConstraintData::Self *self)
{
  return (int)*((uint8_t *)self + 371) >> 1;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getRuntimeInfo  (binary VA: 0x17263f0)
// Original: hkpRagdollConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpRagdollConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = 18;
  *a3 = 176;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getType  (binary VA: 0x1726410)
// Original: hkpRagdollConstraintData::getType
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::getType()
{
  return 7;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setSolvingMethod  (binary VA: 0x1726420)
// Original: hkpRagdollConstraintData::setSolvingMethod
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::setSolvingMethod(int a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      *(uint8_t *)(a1 + 162) = 0;
      *(uint8_t *)(a1 + 370) = 1;
    }
  }
  else
  {
    *(uint8_t *)(a1 + 162) = 1;
    *(uint8_t *)(a1 + 370) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getInertiaStabilizationFactor  (binary VA: 0x1726460)
// Original: hkpRagdollConstraintData::getInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpRagdollConstraintData::Self * hkpRagdollConstraintData::getInertiaStabilizationFactor(hkpRagdollConstraintData::Self *self, float *a2, float *a3)
{
  *a3 = a2[95];
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setInertiaStabilizationFactor  (binary VA: 0x1726490)
// Original: hkpRagdollConstraintData::setInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpRagdollConstraintData::Self * hkpRagdollConstraintData::setInertiaStabilizationFactor(hkpRagdollConstraintData::Self *self, float a2, float a3)
{
  hkpRagdollConstraintData::Self *result;
  float v4; // xmm0_4

  result = self;
  v4 = 0.0;
  if ( a3 >= 0.0 )
    v4 = fminf(1.0, a3);
  *(uint32_t *)self = 0;
  *(float *)(LODWORD(a2) + 380) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getConstraintInfo  (binary VA: 0x17264d0)
// Original: hkpRagdollConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpRagdollConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 368, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::isValid  (binary VA: 0x1726510)
// Original: hkpRagdollConstraintData::isValid
// ----------------------------------------------------------------------------
hkpRagdollConstraintData::Self * hkpRagdollConstraintData::isValid(hkpRagdollConstraintData::Self *self, int a2)
{
  float v3; // xmm0_4
  char v4;

  if ( *(uint8_t *)(a2 + 370) != 0 || *(uint8_t *)(a2 + 162) != 0 )
  {
    if ( !hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 32), 0.00001f)
      || !hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 96), 0.00001f)
      || *(float *)(a2 + 312) != -100.0
      || (v3 = *(float *)(a2 + 316)) < 0.0
      || v3 > 3.1415927f
      || *(float *)(a2 + 348) < *(float *)(a2 + 344)
      || (v4 = 1, *(float *)(a2 + 284) < *(float *)(a2 + 280)) )
    {
      v4 = 0;
    }
    *(uint8_t *)self = v4;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::Destroy  (binary VA: 0x1726600)
// Original: hkpRagdollConstraintData::~hkpRagdollConstraintData
// ----------------------------------------------------------------------------
void hkpRagdollConstraintData::Destroy(hkpRagdollConstraintData::Self *self)
{
  int v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;

  v1 = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209DB88);
  do
  {
    v2 = *((uint32_t *)self + v1 + 60);
    if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
    {
      v7 = v1;
      do
      {
        v4 = *(uint32_t *)(v2 + 4);
        HIWORD(v3) = HIWORD(v4);
        LOWORD(v3) = 0;
        v5 = v3 | (uint16_t)(v4 - 1);
        v6 = v4;
      }
      while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
      v1 = v7;
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(v2, 16);
    }
    ++v1;
  }
  while ( v1 != 3 );
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::Destroy_ea1726690  (binary VA: 0x1726690)
// Original: hkpRagdollConstraintData::~hkpRagdollConstraintData
// ----------------------------------------------------------------------------
void hkpRagdollConstraintData::Destroy_ea1726690(hkpRagdollConstraintData::Self *self)
{
  int v1;
  int v2;

  hkpRagdollConstraintData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 384;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::Atoms::Construct  (binary VA: 0x17266f0)
// Original: hkpRagdollConstraintData::Atoms::Atoms
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::Atoms::Construct(int a1, int a2)
{
  int result;

  result = a1;
  *(uint16_t *)(a1 + 164) = -1;
  *(uint16_t *)(a1 + 166) = -1;
  if ( a2 != 0 )
  {
    *(uint16_t *)(a1 + 164) = 144;
    *(uint16_t *)(a1 + 166) = 148;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setInWorldSpace  (binary VA: 0x1726730)
// Original: hkpRagdollConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::setInWorldSpace(hkpRagdollConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6)
{
  float v6; // xmm6_4
  __m128i v7;
  float v8; // xmm3_4
  float v9; // xmm2_4
  __m128i v10;
  float v11; // xmm5_4
  int v12;
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  __m128i v18;
  float v19; // xmm2_4
  __m128i v20;
  float v21; // xmm1_4
  int v22;
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  float v31; // xmm5_4
  float v32; // xmm2_4
  int result;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  int v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;

  v6 = 0.0;
g4_m128_raw(v7) = *(unsigned int *)a5;
  v8 = *((float *)a5 + 1);
  v10 = v7;
  v9 = *((float *)a5 + 2);
  *(float *)g4_m128_ptr<int32_t>(v10) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v8 * v8))
                          + (float)(v9 * v9);
  if ( *(float *)g4_m128_ptr<int32_t>(v10) > 0.0 )
  {
    v11 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v10);
    v52 = 1597463174 - (_mm_cvtsi128_si32(v10) >> 1);
    v12 = (_mm_cvtsi128_si32(v10) + 2139095040) >> 31;
    v13 = (float)(COERCE_FLOAT(v12 & v52) * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * COERCE_FLOAT(v12 & v52))
                * (float)(COERCE_FLOAT(v12 & v52) * COERCE_FLOAT(v12 & v52)));
    v14 = (float)(v13 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v13) * (float)(v13 * v13));
    v6 = (float)(1.5 * v14) - (float)((float)(v11 * v14) * (float)(v14 * v14));
  }
  v15 = *(float *)g4_m128_ptr<int32_t>(v7) * v6;
  v16 = v8 * v6;
  v17 = v6 * v9;
g4_m128_raw(v18) = *(unsigned int *)a6;
  v20 = v18;
  v19 = *((float *)a6 + 1);
  v50 = *((float *)a6 + 2);
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)g4_m128_ptr<int32_t>(v18)) + (float)(v19 * v19))
                          + (float)(v50 * v50);
  v21 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v20) > 0.0 )
  {
    v53 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v20);
    v22 = ((_mm_cvtsi128_si32(v20) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v20) >> 1));
    v23 = (float)(1.5 * *(float *)&v22)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * *(float *)&v22)
                * (float)(*(float *)&v22 * *(float *)&v22));
    v24 = (float)(1.5 * v23) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * v23) * (float)(v23 * v23));
    v21 = (float)(1.5 * v24) - (float)((float)(v53 * v24) * (float)(v24 * v24));
  }
  v55 = *(float *)g4_m128_ptr<int32_t>(v18) * v21;
  v51 = v21 * v50;
  v54 = v19 * v21;
  v38 = *((float *)a2 + 1);
  v56 = (float)(v51 * v16) - (float)((float)(v19 * v21) * v17);
  v46 = *((float *)a2 + 6);
  v40 = *((float *)a2 + 2);
  v48 = *((float *)a2 + 8);
  v42 = *((float *)a2 + 5);
  v25 = *((float *)a2 + 9);
  v44 = *((float *)a2 + 10);
  v36 = *((float *)a2 + 4);
  v57 = (float)(v17 * (float)(*(float *)g4_m128_ptr<int32_t>(v18) * v21)) - (float)(v51 * v15);
  v34 = *(float *)a2;
  v58 = (float)(v15 * (float)(v19 * v21)) - (float)(v16 * (float)(*(float *)g4_m128_ptr<int32_t>(v18) * v21));
  v26 = (float)((float)(v48 * v56) + (float)(v25 * v57)) + (float)(v44 * v58);
  *((float *)self + 16) = (float)((float)(*(float *)a2 * v56) + (float)(v38 * v57)) + (float)(v40 * v58);
  *((float *)self + 18) = v26;
  *((float *)self + 19) = v26;
  *((float *)self + 17) = (float)((float)(v56 * v36) + (float)(v42 * v57)) + (float)(v46 * v58);
  v27 = (float)((float)(v48 * v55) + (float)(v25 * v54)) + (float)(v44 * v51);
  *((float *)self + 14) = v27;
  *((float *)self + 15) = v27;
  *((float *)self + 12) = (float)((float)(v34 * v55) + (float)(v38 * v54)) + (float)(v40 * v51);
  *((float *)self + 13) = (float)((float)(v36 * v55) + (float)(v42 * v54)) + (float)(v46 * v51);
  v28 = (float)((float)(v48 * v15) + (float)(v25 * v16)) + (float)(v44 * v17);
  *((float *)self + 8) = (float)((float)(v34 * v15) + (float)(v38 * v16)) + (float)(v40 * v17);
  *((float *)self + 10) = v28;
  *((float *)self + 11) = v28;
  *((float *)self + 9) = (float)((float)(v36 * v15) + (float)(v42 * v16)) + (float)(v46 * v17);
  v43 = *((float *)a3 + 2);
  v49 = *((float *)a3 + 5);
  v39 = *((float *)a3 + 6);
  v45 = *((float *)a3 + 9);
  v35 = *(float *)a3;
  v37 = *((float *)a3 + 1);
  v41 = *((float *)a3 + 4);
  v47 = *((float *)a3 + 8);
  v29 = *((float *)a3 + 10);
  v30 = (float)((float)(v56 * v47) + (float)(v57 * v45)) + (float)(v29 * v58);
  *((float *)self + 32) = (float)((float)(*(float *)a3 * v56) + (float)(v37 * v57)) + (float)(v43 * v58);
  *((float *)self + 34) = v30;
  *((float *)self + 33) = (float)((float)(v41 * v56) + (float)(v49 * v57)) + (float)(v58 * v39);
  *((float *)self + 35) = v30;
  v31 = (float)((float)(v55 * v47) + (float)(v45 * v54)) + (float)(v51 * v29);
  *((float *)self + 28) = (float)((float)(v35 * v55) + (float)(v37 * v54)) + (float)(v43 * v51);
  *((float *)self + 30) = v31;
  *((float *)self + 31) = v31;
  *((float *)self + 29) = (float)((float)(v41 * v55) + (float)(v49 * v54)) + (float)(v51 * v39);
  v32 = (float)((float)(v47 * v15) + (float)(v45 * v16)) + (float)(v29 * v17);
  *((float *)self + 24) = (float)((float)(v15 * v35) + (float)(v37 * v16)) + (float)(v17 * v43);
  *((float *)self + 26) = v32;
  *((float *)self + 27) = v32;
  *((float *)self + 25) = (float)((float)(v41 * v15) + (float)(v49 * v16)) + (float)(v17 * v39);
  hkVector4f::setTransformedInversePos((hkpRagdollConstraintData::Self *)((char *)self + 80), a2, a4);
  hkVector4f::setTransformedInversePos((hkpRagdollConstraintData::Self *)((char *)self + 144), a3, a4);
  *((uint32_t *)self + 48) = *((uint32_t *)self + 24);
  *((uint32_t *)self + 49) = *((uint32_t *)self + 25);
  *((uint32_t *)self + 50) = *((uint32_t *)self + 26);
  *((uint32_t *)self + 51) = *((uint32_t *)self + 27);
  *((uint32_t *)self + 52) = *((uint32_t *)self + 28);
  *((uint32_t *)self + 53) = *((uint32_t *)self + 29);
  *((uint32_t *)self + 54) = *((uint32_t *)self + 30);
  *((uint32_t *)self + 55) = *((uint32_t *)self + 31);
  *((uint32_t *)self + 56) = *((uint32_t *)self + 32);
  *((uint32_t *)self + 57) = *((uint32_t *)self + 33);
  *((uint32_t *)self + 58) = *((uint32_t *)self + 34);
  result = *((uint32_t *)self + 35);
  *((uint32_t *)self + 59) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setInBodySpace  (binary VA: 0x1726e80)
// Original: hkpRagdollConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkpRagdollConstraintData::Self * hkpRagdollConstraintData::setInBodySpace(hkpRagdollConstraintData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6, const hkVector4f::Self *a7)
{
  hkpRagdollConstraintData::Self *result;
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
  int v56;
  float v57;
  float v58;
  float v59;
  float v60;

  result = self;
  *((uint32_t *)self + 8) = *(uint32_t *)a6;
g4_m128_raw(v8) = *((unsigned int *)self + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a6 + 1);
  v9 = *((float *)self + 9);
  v11 = v8;
  *((uint32_t *)self + 10) = *((uint32_t *)a6 + 2);
  v10 = *((float *)self + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a6 + 3);
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)g4_m128_ptr<int32_t>(v8)) + (float)(v9 * v9))
                          + (float)(v10 * v10);
  if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
  {
    v15 = 0.0;
  }
  else
  {
    v56 = 1597463174 - (_mm_cvtsi128_si32(v11) >> 1);
    v12 = _mm_cvtsi128_si32(v11);
    v13 = (float)(COERCE_FLOAT(((v12 + 2139095040) >> 31) & v56) * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * COERCE_FLOAT(((v12 + 2139095040) >> 31) & v56))
                * (float)(COERCE_FLOAT(((v12 + 2139095040) >> 31) & v56) * COERCE_FLOAT(((v12 + 2139095040) >> 31) & v56)));
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
  v57 = v16;
  *((uint32_t *)self + 12) = *(uint32_t *)a4;
  v59 = v17;
g4_m128_raw(v20) = *((unsigned int *)self + 12);
  *((uint32_t *)self + 13) = *((uint32_t *)a4 + 1);
  v21 = *((float *)self + 13);
  v23 = v20;
  *((uint32_t *)self + 14) = *((uint32_t *)a4 + 2);
  v22 = *((float *)self + 14);
  *((uint32_t *)self + 15) = *((uint32_t *)a4 + 3);
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
  *((float *)self + 16) = (float)(v59 * v30) - (float)(v18 * v29);
  *((float *)self + 17) = (float)(v18 * v28) - (float)(v30 * v57);
  *((float *)self + 18) = (float)(v29 * v57) - (float)(v28 * v59);
  *((uint32_t *)self + 20) = *(uint32_t *)a2;
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 24) = *(uint32_t *)a7;
g4_m128_raw(v32) = *((unsigned int *)self + 24);
  *((uint32_t *)self + 25) = *((uint32_t *)a7 + 1);
  v33 = *((float *)self + 25);
  v35 = v32;
  *((uint32_t *)self + 26) = *((uint32_t *)a7 + 2);
  v34 = *((float *)self + 26);
  *((uint32_t *)self + 27) = *((uint32_t *)a7 + 3);
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
  v58 = v40;
  *((uint32_t *)self + 28) = *(uint32_t *)a5;
  v60 = v41;
g4_m128_raw(v44) = *((unsigned int *)self + 28);
  *((uint32_t *)self + 29) = *((uint32_t *)a5 + 1);
  v45 = *((float *)self + 29);
  v47 = v44;
  *((uint32_t *)self + 30) = *((uint32_t *)a5 + 2);
  v46 = *((float *)self + 30);
  *((uint32_t *)self + 31) = *((uint32_t *)a5 + 3);
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
  *((float *)self + 32) = (float)(v60 * v54) - (float)(v42 * v53);
  *((float *)self + 33) = (float)(v42 * v52) - (float)(v54 * v58);
  *((float *)self + 34) = (float)(v53 * v58) - (float)(v52 * v60);
  *((uint32_t *)self + 36) = *(uint32_t *)a3;
  *((uint32_t *)self + 37) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 38) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 39) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 48) = *((uint32_t *)self + 24);
  *((uint32_t *)self + 49) = *((uint32_t *)self + 25);
  *((uint32_t *)self + 50) = *((uint32_t *)self + 26);
  *((uint32_t *)self + 51) = *((uint32_t *)self + 27);
  *((uint32_t *)self + 52) = *((uint32_t *)self + 28);
  *((uint32_t *)self + 53) = *((uint32_t *)self + 29);
  *((uint32_t *)self + 54) = *((uint32_t *)self + 30);
  *((uint32_t *)self + 55) = *((uint32_t *)self + 31);
  *((uint32_t *)self + 56) = *((uint32_t *)self + 32);
  *((uint32_t *)self + 57) = *((uint32_t *)self + 33);
  *((uint32_t *)self + 58) = *((uint32_t *)self + 34);
  *((uint32_t *)self + 59) = *((uint32_t *)self + 35);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setMaxFrictionTorque  (binary VA: 0x1727420)
// Original: hkpRagdollConstraintData::setMaxFrictionTorque
// ----------------------------------------------------------------------------
hkpRagdollConstraintData::Self * hkpRagdollConstraintData::setMaxFrictionTorque(hkpRagdollConstraintData::Self *self, float a2)
{
  *((float *)self + 66) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setConeLimitStabilization  (binary VA: 0x1727440)
// Original: hkpRagdollConstraintData::setConeLimitStabilization
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::setConeLimitStabilization(int a1, int a2, char a3)
{
  int result;

  LOBYTE(a1) = a3 != 0;
  result = 56 * a1;
  *(uint8_t *)(a2 + 310) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::Construct  (binary VA: 0x1727460)
// Original: hkpRagdollConstraintData::hkpRagdollConstraintData
// ----------------------------------------------------------------------------
void hkpRagdollConstraintData::Construct(hkpRagdollConstraintData::Self *self)
{
  float v1[8];

  *((uint32_t *)self + 41) = 2139095022;
  *((uint32_t *)self + 42) = 2139095022;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209DB88);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 23;
  *((uint8_t *)self + 162) = 0;
  *((uint32_t *)self + 43) = 1602224112;
  *((uint16_t *)self + 88) = 19;
  *((uint8_t *)self + 178) = 1;
  *((uint16_t *)self + 90) = -1;
  *((uint16_t *)self + 91) = -1;
  *((uint16_t *)self + 128) = 17;
  *((uint8_t *)self + 258) = 1;
  *((uint8_t *)self + 260) = 1;
  *((uint16_t *)self + 136) = 15;
  *((uint8_t *)self + 274) = 1;
  *((uint16_t *)self + 152) = 16;
  *((uint8_t *)self + 306) = 1;
  *((uint8_t *)self + 310) = 0;
  *((uint16_t *)self + 168) = 16;
  *((uint8_t *)self + 338) = 1;
  *((uint8_t *)self + 342) = 0;
  *((uint16_t *)self + 184) = 5;
  *((uint8_t *)self + 370) = 1;
  *((uint8_t *)self + 371) = 0;
  v1[0] = 1.0;
  hkUFloat8::opAssign((hkpRagdollConstraintData::Self *)((char *)self + 372), v1);
  *((uint8_t *)self + 373) = 0;
  *((uint32_t *)self + 94) = 2139095022;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 95) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint8_t *)self + 259) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 48) = 1065353216;
  *((uint32_t *)self + 53) = 1065353216;
  *((uint32_t *)self + 54) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 58) = 1065353216;
  *((uint32_t *)self + 59) = 0;
  *((uint8_t *)self + 260) = 3;
  *((uint8_t *)self + 178) = 0;
  *((uint16_t *)self + 90) = 144;
  *((uint16_t *)self + 91) = 148;
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0;
  *((uint8_t *)self + 275) = 0;
  *((uint8_t *)self + 276) = 1;
  *((uint32_t *)self + 70) = -1090123098;
  *((uint32_t *)self + 71) = 1057360550;
  *((uint32_t *)self + 72) = 1061997773;
  *((uint8_t *)self + 307) = 0;
  *((uint32_t *)self + 80) = 1061997773;
  *((uint8_t *)self + 308) = 0;
  *((uint8_t *)self + 309) = 0;
  *((uint32_t *)self + 78) = -1027080192;
  *((uint32_t *)self + 79) = 1065353216;
  hkpRagdollConstraintData::setConeLimitStabilization(0, (int)(uintptr_t)(self), 1);
  *((uint8_t *)self + 339) = 0;
  *((uint8_t *)self + 340) = 1;
  *((uint8_t *)self + 341) = 1;
  *((uint32_t *)self + 86) = -1127428915;
  *((uint32_t *)self + 87) = 1020054733;
  *((uint32_t *)self + 88) = 1061997773;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setAsymmetricConeAngle  (binary VA: 0x1727830)
// Original: hkpRagdollConstraintData::setAsymmetricConeAngle
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpRagdollConstraintData::setAsymmetricConeAngle(hkpRagdollConstraintData::Self *self, float a2, float a3)
{
  hkVector4f::Self *result;
  float v4; // xmm4_4
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm7_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  uint8_t v10[28];

  hkQuaternionf::setAxisAngle(
    (hkQuaternionf::Self *)v10,
    (hkpRagdollConstraintData::Self *)((char *)self + 112),
    -(float)((float)(a3 + a2) * 0.5));
  result = hkVector4f::setRotatedDir(
             (hkpRagdollConstraintData::Self *)((char *)self + 96),
             (const hkQuaternionf::Self *)v10,
             (hkpRagdollConstraintData::Self *)((char *)self + 96));
  v4 = *((float *)self + 25);
  *((uint32_t *)self + 35) = 0;
  v5 = *((float *)self + 30);
  v6 = *((float *)self + 29);
  v7 = *((float *)self + 26);
  v8 = *((float *)self + 28);
  v9 = *((float *)self + 24);
  *((float *)self + 33) = (float)(v7 * v8) - (float)(v5 * v9);
  *((float *)self + 34) = (float)(v9 * v6) - (float)(v8 * v4);
  *((float *)self + 32) = (float)(v4 * v5) - (float)(v7 * v6);
  *((float *)self + 79) = (float)(a3 - a2) * 0.5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getConstraintFrameA  (binary VA: 0x1727920)
// Original: hkpRagdollConstraintData::getConstraintFrameA
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpRagdollConstraintData::getConstraintFrameA(hkpRagdollConstraintData::Self *self, hkMatrix3f::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 11);
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 15);
  *((uint32_t *)a2 + 8) = *((uint32_t *)self + 16);
  *((uint32_t *)a2 + 9) = *((uint32_t *)self + 17);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 18);
  *((uint32_t *)a2 + 11) = *((uint32_t *)self + 19);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getConstraintFrameB  (binary VA: 0x1727970)
// Original: hkpRagdollConstraintData::getConstraintFrameB
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpRagdollConstraintData::getConstraintFrameB(hkpRagdollConstraintData::Self *self, hkMatrix3f::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 24);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 25);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 26);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 27);
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 28);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 29);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 30);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 31);
  *((uint32_t *)a2 + 8) = *((uint32_t *)self + 32);
  *((uint32_t *)a2 + 9) = *((uint32_t *)self + 33);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 34);
  *((uint32_t *)a2 + 11) = *((uint32_t *)self + 35);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setTarget  (binary VA: 0x17279d0)
// Original: hkpRagdollConstraintData::setTarget
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpRagdollConstraintData::setTarget(hkpRagdollConstraintData::Self *self, const hkMatrix3f::Self *a2)
{
  return hkMatrix3f::setMul(
           (hkpRagdollConstraintData::Self *)((char *)self + 192),
           (hkpRagdollConstraintData::Self *)((char *)self + 96),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setTargetRelativeOrientationOfBodies  (binary VA: 0x1727a10)
// Original: hkpRagdollConstraintData::setTargetRelativeOrientationOfBodies
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpRagdollConstraintData::setTargetRelativeOrientationOfBodies(hkpRagdollConstraintData::Self *self, const hkRotationf::Self *a2)
{
  return hkMatrix3f::setMul(
           (hkpRagdollConstraintData::Self *)((char *)self + 192),
           a2,
           (hkpRagdollConstraintData::Self *)((char *)self + 32));
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getTarget  (binary VA: 0x1727a50)
// Original: hkpRagdollConstraintData::getTarget
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpRagdollConstraintData::getTarget(hkpRagdollConstraintData::Self *self, hkMatrix3f::Self *a2)
{
  return hkMatrix3f::setMulInverseMul(
           a2,
           (hkpRagdollConstraintData::Self *)((char *)self + 96),
           (hkpRagdollConstraintData::Self *)((char *)self + 192));
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getTwistMotor  (binary VA: 0x1727a90)
// Original: hkpRagdollConstraintData::getTwistMotor
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::getTwistMotor(hkpRagdollConstraintData::Self *self)
{
  return *((uint32_t *)self + 60);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setMotor  (binary VA: 0x1727aa0)
// Original: hkpRagdollConstraintData::setMotor
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::setMotor(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int result;
  int v7;
  int v8;
  int v9;
  int32_t v10; // kr04_4
  int32_t v11;
  int32_t v12; // ett

  v3 = a3;
  if ( a3 != 0 && *(uint16_t *)(a3 + 6) != 0 )
  {
    do
    {
      v5 = *(uint32_t *)(a3 + 4);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(a3 + 4), v5, v4 | (uint16_t)(v5 + 1)) );
  }
  result = a1;
  v7 = a1 + 4 * a2;
  v8 = *(uint32_t *)(v7 + 240);
  if ( v8 == 0 || *(uint16_t *)(v8 + 6) == 0 )
    goto LABEL_8;
  do
  {
    v10 = *(uint32_t *)(v8 + 4);
    HIWORD(v9) = HIWORD(v10);
    LOWORD(v9) = 0;
    v11 = v9 | (uint16_t)(v10 - 1);
    v12 = v10;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v12, v11);
  }
  while ( v12 != result );
  v3 = a3;
  if ( (uint16_t)v11 == 0 )
  {
    result = G4_VCALL<int>(v8, 16);
    *(uint32_t *)(v7 + 240) = a3;
  }
  else
  {
LABEL_8:
    *(uint32_t *)(v7 + 240) = v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setTwistMotor  (binary VA: 0x1727b40)
// Original: hkpRagdollConstraintData::setTwistMotor
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::setTwistMotor(hkpRagdollConstraintData::Self *self, hkpConstraintMotor::Self *a2)
{
  return hkpRagdollConstraintData::setMotor((int)(uintptr_t)(self), 0, (int)(uintptr_t)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getConeMotor  (binary VA: 0x1727b80)
// Original: hkpRagdollConstraintData::getConeMotor
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::getConeMotor(hkpRagdollConstraintData::Self *self)
{
  return *((uint32_t *)self + 62);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setConeMotor  (binary VA: 0x1727b90)
// Original: hkpRagdollConstraintData::setConeMotor
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::setConeMotor(hkpRagdollConstraintData::Self *self, hkpConstraintMotor::Self *a2)
{
  return hkpRagdollConstraintData::setMotor((int)(uintptr_t)(self), 2, (int)(uintptr_t)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::getPlaneMotor  (binary VA: 0x1727bd0)
// Original: hkpRagdollConstraintData::getPlaneMotor
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::getPlaneMotor(hkpRagdollConstraintData::Self *self)
{
  return *((uint32_t *)self + 61);
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setPlaneMotor  (binary VA: 0x1727be0)
// Original: hkpRagdollConstraintData::setPlaneMotor
// ----------------------------------------------------------------------------
int hkpRagdollConstraintData::setPlaneMotor(hkpRagdollConstraintData::Self *self, hkpConstraintMotor::Self *a2)
{
  return hkpRagdollConstraintData::setMotor((int)(uintptr_t)(self), 1, (int)(uintptr_t)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollConstraintData::setMotorsEnabled  (binary VA: 0x1727c20)
// Original: hkpRagdollConstraintData::setMotorsEnabled
// ----------------------------------------------------------------------------
uint32_t * hkpRagdollConstraintData::setMotorsEnabled(int a1, uint32_t *a2, char a3)
{
  uint32_t *result;

  result = a2;
  *(uint8_t *)(a1 + 258) = a3 == 0;
  *(uint8_t *)(a1 + 178) = a3;
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
    a2[8] = 0;
    a2[9] = 0;
    a2[10] = 0;
    a2[11] = 0;
    a2[12] = 0;
    a2[13] = 0;
    a2[14] = 0;
    a2[15] = 0;
    a2[16] = 0;
    a2[17] = 0;
    a2[18] = 0;
    a2[19] = 0;
    a2[20] = 0;
    a2[21] = 0;
    a2[22] = 0;
    a2[23] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollDrawer::drawConstraint  (binary VA: 0x1af0b80)
// Original: hkpRagdollDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpRagdollDrawer::drawConstraint(hkpRagdollDrawer::Self *self, const hkpRagdollConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, void *a7)
{
  hkpRagdollDrawer::Self *v7;
  const hkpRagdollConstraintData::Self *v8;
  float *v9;
  float v10; // xmm5_4
  int v11;
  float v12; // xmm6_4
  __m128i v13;
  float v14; // xmm1_4
  float v15; // xmm0_4
  __m128i v16;
  float v17; // xmm5_4
  int v18;
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm6_4
  float v22; // xmm3_4
  float *v23;
  float v24; // xmm6_4
  int v25;
  float v26; // xmm5_4
  __m128i v27;
  float v28; // xmm1_4
  float v29; // xmm0_4
  __m128i v30;
  float v31; // xmm5_4
  int v32;
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm6_4
  float v36; // xmm3_4
  unsigned int v37;
  int v38;
  float v39; // xmm0_4
  int v40;
  int v41;
  int result;
  int savedregs;
  void *retaddr;
  typedef hkVector4f::Self *_g4_t_v43;
  typedef hkTransformf::Self *_g4_t_v44;
  typedef hkTransformf::Self *_g4_t_v45;
  typedef hkTransformf::Self *_g4_t_v46;
  typedef float _g4_t_v47;
  typedef hkpPrimitiveDrawer::Self *_g4_t_v48;
  typedef hkVector4f::Self *_g4_t_v49;
  typedef hkVector4f::Self *_g4_t_v50;
  typedef void *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef hkDebugDisplayHandler::Self *_g4_t_v53;
  typedef uint8_t _g4_t_v54[4];
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint8_t _g4_t_v64[16];
  typedef float _g4_t_v65[4];
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70[4];
  typedef uint8_t _g4_t_v71[16];
  typedef uint8_t _g4_t_v72[16];
  typedef float _g4_t_v73[6];
  typedef hkpRagdollDrawer::Self **_g4_t_v74;
  typedef hkDebugDisplayHandler::Self *_g4_t_v75;
  typedef uint32_t **_g4_t_v76;
  typedef int _g4_t_v77;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (4u + sizeof(_g4_t_v43)) > _g4_s0 ? (4u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v44)) > _g4_s1 ? (12u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v45)) > _g4_s2 ? (16u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v46)) > _g4_s3 ? (16u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v47)) > _g4_s4 ? (16u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v48)) > _g4_s5 ? (20u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v49)) > _g4_s6 ? (24u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v50)) > _g4_s7 ? (28u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v51)) > _g4_s8 ? (32u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v52)) > _g4_s9 ? (36u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v53)) > _g4_s10 ? (40u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v54)) > _g4_s11 ? (44u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v55)) > _g4_s12 ? (48u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v56)) > _g4_s13 ? (52u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v57)) > _g4_s14 ? (56u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v58)) > _g4_s15 ? (64u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v59)) > _g4_s16 ? (68u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v60)) > _g4_s17 ? (72u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v61)) > _g4_s18 ? (80u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v62)) > _g4_s19 ? (84u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v63)) > _g4_s20 ? (88u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v64)) > _g4_s21 ? (96u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v65)) > _g4_s22 ? (112u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v66)) > _g4_s23 ? (128u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v67)) > _g4_s24 ? (132u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v68)) > _g4_s25 ? (136u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v69)) > _g4_s26 ? (140u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v70)) > _g4_s27 ? (144u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v71)) > _g4_s28 ? (160u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (176u + sizeof(_g4_t_v72)) > _g4_s29 ? (176u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (192u + sizeof(_g4_t_v73)) > _g4_s30 ? (192u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (216u + sizeof(_g4_t_v74)) > _g4_s31 ? (216u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (220u + sizeof(_g4_t_v75)) > _g4_s32 ? (220u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (224u + sizeof(_g4_t_v76)) > _g4_s33 ? (224u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (228u + sizeof(_g4_t_v77)) > _g4_s34 ? (228u + sizeof(_g4_t_v77)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 72u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 84u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 112u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 128u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 132u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 136u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 140u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 144u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 160u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 176u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 192u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 216u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 220u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 224u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 228u);

  v74 = &self;
  v7 = self;
  v45 = (hkTransformf::Self *)(a3);
  v44 = (hkTransformf::Self *)(a4);
  v8 = a2;
  v52 = a6;
  v51 = a7;
  v53 = a5;
  v48 = (hkpPrimitiveDrawer::Self *)((hkpRagdollDrawer::Self *)((char *)self + 192));
  hkpPrimitiveDrawer::setDisplayHandler((hkpRagdollDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters(v7, v45, v44);
  v50 = (hkVector4f::Self *)((hkpRagdollDrawer::Self *)((char *)v7 + 80));
  hkVector4f::setTransformedPos(
    (hkpRagdollDrawer::Self *)((char *)v7 + 80),
    v44,
    (const hkpRagdollConstraintData::Self *)((char *)v8 + 144));
  hkVector4f::setTransformedPos(
    (hkpRagdollDrawer::Self *)((char *)v7 + 64),
    v45,
    (const hkpRagdollConstraintData::Self *)((char *)v8 + 80));
  hkpConstraintDrawer::drawPivots(v7, v52, (int)(uintptr_t)(v51));
  v46 = (hkTransformf::Self *)((hkpRagdollDrawer::Self *)((char *)v7 + 144));
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)v64,
    (hkpRagdollDrawer::Self *)((char *)v7 + 144),
    (const hkpRagdollConstraintData::Self *)((char *)v8 + 16 * *((uint8_t *)v8 + 275) + 96));
  v9 = (float *)((char *)v8 + 16 * *((uint8_t *)v8 + 340) + 96);
  v10 = v9[1];
  v11 = (int)(uintptr_t)(v8) + 16 * *((uint8_t *)v8 + 339) + 96;
g4_m128_raw(v13) = *(unsigned int *)(v11 + 4);
  v12 = v9[2];
  *(float *)g4_m128_ptr<int32_t>(v13) = (float)(*(float *)g4_m128_ptr<int32_t>(v13) * v12) - (float)(*(float *)(v11 + 8) * v10);
  v14 = (float)(*(float *)(v11 + 8) * *v9) - (float)(v12 * *(float *)v11);
  v15 = (float)(*(float *)v11 * v10) - (float)(*v9 * *(float *)(v11 + 4));
  v16 = v13;
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13)) + (float)(v14 * v14))
                          + (float)(v15 * v15);
  if ( *(float *)g4_m128_ptr<int32_t>(v16) <= 0.0 )
  {
    v22 = 0.0;
    v21 = 0.0;
  }
  else
  {
    v17 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v16);
    v18 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
    v19 = (float)(*(float *)&v18 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v18)
                * (float)(*(float *)&v18 * *(float *)&v18));
    v20 = (float)((float)((float)(*(float *)&v18 * 1.5)
                        - (float)((float)(v17 * *(float *)&v18) * (float)(*(float *)&v18 * *(float *)&v18)))
                * 1.5)
        - (float)((float)(v17 * v19) * (float)(v19 * v19));
    v21 = (float)(1.5 * v20) - (float)((float)(v17 * v20) * (float)(v20 * v20));
    v22 = 0.0 * v21;
  }
  v65[0] = *(float *)g4_m128_ptr<int32_t>(v13) * v21;
  v65[1] = v14 * v21;
  v65[2] = v21 * v15;
  v65[3] = v22;
  hkVector4f::setRotatedDir((hkVector4f::Self *)v65, v46, (const hkVector4f::Self *)v65);
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)&v66,
    v46,
    (const hkpRagdollConstraintData::Self *)((char *)v8 + 16 * *((uint8_t *)v8 + 340) + 96));
  v23 = (float *)((char *)v8 + 16 * *((uint8_t *)v8 + 339) + 32);
  v24 = v23[2];
  v25 = (int)(uintptr_t)(v8) + 16 * *((uint8_t *)v8 + 340) + 32;
g4_m128_raw(v27) = *(unsigned int *)(v25 + 4);
  v26 = v23[1];
  *(float *)g4_m128_ptr<int32_t>(v27) = (float)(*(float *)g4_m128_ptr<int32_t>(v27) * v24) - (float)(*(float *)(v25 + 8) * v26);
  v28 = (float)(*(float *)(v25 + 8) * *v23) - (float)(v24 * *(float *)v25);
  v29 = (float)(*(float *)v25 * v26) - (float)(*v23 * *(float *)(v25 + 4));
  v30 = v27;
  *(float *)g4_m128_ptr<int32_t>(v30) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)g4_m128_ptr<int32_t>(v27)) + (float)(v28 * v28))
                          + (float)(v29 * v29);
  if ( *(float *)g4_m128_ptr<int32_t>(v30) <= 0.0 )
  {
    v36 = 0.0;
    v35 = 0.0;
  }
  else
  {
    v31 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v30);
    v32 = ((_mm_cvtsi128_si32(v30) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v30) >> 1));
    v33 = (float)(*(float *)&v32 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v30)) * *(float *)&v32)
                * (float)(*(float *)&v32 * *(float *)&v32));
    v34 = (float)((float)((float)(*(float *)&v32 * 1.5)
                        - (float)((float)(v31 * *(float *)&v32) * (float)(*(float *)&v32 * *(float *)&v32)))
                * 1.5)
        - (float)((float)(v31 * v33) * (float)(v33 * v33));
    v35 = (float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34));
    v36 = 0.0 * v35;
  }
  v70[2] = v35 * v29;
  v70[1] = v28 * v35;
  v70[0] = *(float *)g4_m128_ptr<int32_t>(v27) * v35;
  v70[3] = v36;
  hkVector4f::setRotatedDir((hkVector4f::Self *)v71, (hkpRagdollDrawer::Self *)((char *)v7 + 96), (const hkVector4f::Self *)v70);
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)v72,
    (hkpRagdollDrawer::Self *)((char *)v7 + 96),
    (const hkpRagdollConstraintData::Self *)((char *)v8 + 16 * *((uint8_t *)v8 + 275) + 32));
  hkpPrimitiveDrawer::displayArrow(
    v48,
    v50,
    (const hkVector4f::Self *)v64,
    (const hkVector4f::Self *)v65,
    0xFF008000,
    *((float *)v7 + 3) * *((float *)v7 + 7),
    v52,
    (int)(uintptr_t)(v51));
  v47 = *((float *)v7 + 3) * *((float *)v7 + 7);
  v37 = hkColor::rgbFromChars((hkColor::Self *)((char *)off_FC + 3), 0xFFu, 0, 0xFFu);
  hkpPrimitiveDrawer::displayArrow(
    v48,
    (hkpRagdollDrawer::Self *)((char *)v7 + 64),
    (const hkVector4f::Self *)v72,
    (const hkVector4f::Self *)v71,
    v37,
    v47,
    v52,
    (int)(uintptr_t)(v51));
  hkDisplayCone::setParameters(
    (hkpRagdollDrawer::Self *)((char *)v7 + 208),
    *((float *)v8 + 79),
    *((float *)v7 + 4) * *((float *)v7 + 7),
    *((uint32_t *)v7 + 6),
    (const hkVector4f::Self *)v64,
    v50);
  v73[0] = *((float *)v7 + 5) * *((float *)v7 + 7);
  v73[1] = v73[0];
  v73[3] = 0.0;
  v73[2] = v73[0];
  hkDisplayPlane::setParameters(
    (hkpRagdollDrawer::Self *)((char *)v7 + 640),
    (const hkVector4f::Self *)&v66,
    (const hkVector4f::Self *)v65,
    v50,
    (const hkVector4f::Self *)v73);
  v43 = *((hkVector4f::Self **)v8 + 86);
  hkDisplayCone::setParameters(
    (hkpRagdollDrawer::Self *)((char *)v7 + 352),
    1.5707964f - fabs(*((float *)v8 + 87)),
    *((float *)v7 + 4) * *((float *)v7 + 7),
    *((uint32_t *)v7 + 6),
    (const hkVector4f::Self *)&v66,
    v50);
  v66 ^= 0x80000000;
  v38 = *((uint32_t *)v7 + 6);
  v67 ^= 0x80000000;
  v68 ^= 0x80000000;
  v39 = *((float *)v7 + 4) * *((float *)v7 + 7);
  v69 = -v69;
  hkDisplayCone::setParameters(
    (hkpRagdollDrawer::Self *)((char *)v7 + 496),
    1.5707964f - fabs(*(float *)&v43),
    v39,
    v38,
    (const hkVector4f::Self *)&v66,
    v50);
  v55 = nullptr;
  v56 = 0;
  v57 = 0x80000000;
  v58 = nullptr;
  v59 = 0;
  v60 = 0x80000000;
  v61 = nullptr;
  v62 = 0;
  v63 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v54, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)&v55, 1, 4);
  v56 = 1;
  if ( (v63 & 0x3FFFFFFF) == 0 )
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v54,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v61,
      1,
      4);
  v62 = 1;
  if ( (v60 & 0x3FFFFFFFu) <= 1 )
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v54,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v58,
      2,
      4);
  v59 = 2;
  *v55 = (uint32_t)(uintptr_t)((char *)v7 + 208);
  *v58 = (uint32_t)(uintptr_t)((char *)v7 + 352);
  v58[1] = (uint32_t)(uintptr_t)((char *)v7 + 496);
  *v61 = (uint32_t)(uintptr_t)((char *)v7 + 640);
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, uint32_t **, int, int, void *))(*(uint32_t *)v53 + 116))(
    v54,
    v53,
    &v55,
    -256,
    v52,
    v51);
  v40 = *(uint32_t *)v53;
  v75 = v53;
  savedregs = v52;
  v74 = (hkpRagdollDrawer::Self **)v54;
  v77 = -65536;
  v76 = &v58;
  (*(void (**)(uint8_t *))(v40 + 116))(v54);
  v49 = *(hkVector4f::Self **)(*(uint32_t *)v53 + 116);
  v41 = hkColor::rgbFromChars((hkColor::Self *)((char *)off_FC + 3), 0, 0xFFu, 0xFFu);
  retaddr = v51;
  savedregs = v52;
  v77 = v41;
  v76 = &v61;
  v75 = v53;
  ((void (*)(uint8_t *))v49)(v54);
  v62 = 0;
  if ( v63 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v61,
      4 * v63);
  v61 = nullptr;
  v63 = 0x80000000;
  v59 = 0;
  if ( v60 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v58,
      4 * v60);
  result = v57;
  v58 = nullptr;
  v60 = 0x80000000;
  v56 = 0;
  if ( v57 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v55,
             4 * v57);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRagdollLimitsDrawer::drawConstraint  (binary VA: 0x1af2960)
// Original: hkpRagdollLimitsDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpRagdollLimitsDrawer::drawConstraint(hkpRagdollLimitsDrawer::Self *self, const hkpRagdollLimitsData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, void *a7)
{
  hkpRagdollLimitsDrawer::Self *v7;
  const hkTransformf::Self *v8;
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm3_4
  __m128i v12;
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  __m128i v16;
  float v17; // xmm5_4
  int v18;
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm6_4
  float v22; // xmm3_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm3_4
  __m128i v26;
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  __m128i v30;
  float v31; // xmm5_4
  int v32;
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm6_4
  float v36; // xmm3_4
  unsigned int v37;
  float v38;
  int v39;
  float v40; // xmm0_4
  int v41;
  int v42;
  int result;
  int savedregs;
  void *retaddr;
  typedef float _g4_t_v44;
  typedef hkVector4f::Self *_g4_t_v45;
  typedef hkDisplayCone::Self *_g4_t_v46;
  typedef hkTransformf::Self *_g4_t_v47;
  typedef hkVector4f::Self *_g4_t_v48;
  typedef hkVector4f::Self *_g4_t_v49;
  typedef void *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef hkDebugDisplayHandler::Self *_g4_t_v52;
  typedef uint8_t _g4_t_v53[4];
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint8_t _g4_t_v63[16];
  typedef float _g4_t_v64[4];
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69[4];
  typedef uint8_t _g4_t_v70[16];
  typedef uint8_t _g4_t_v71[16];
  typedef float _g4_t_v72[6];
  typedef hkpRagdollLimitsDrawer::Self **_g4_t_v73;
  typedef hkDebugDisplayHandler::Self *_g4_t_v74;
  typedef uint32_t **_g4_t_v75;
  typedef int _g4_t_v76;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v44)) > _g4_s0 ? (0u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v45)) > _g4_s1 ? (28u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v46)) > _g4_s2 ? (36u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v47)) > _g4_s3 ? (40u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v48)) > _g4_s4 ? (44u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v49)) > _g4_s5 ? (44u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v50)) > _g4_s6 ? (48u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v51)) > _g4_s7 ? (52u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v52)) > _g4_s8 ? (56u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v53)) > _g4_s9 ? (60u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v54)) > _g4_s10 ? (64u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v55)) > _g4_s11 ? (68u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v56)) > _g4_s12 ? (72u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v57)) > _g4_s13 ? (80u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v58)) > _g4_s14 ? (84u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v59)) > _g4_s15 ? (88u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v60)) > _g4_s16 ? (96u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v61)) > _g4_s17 ? (100u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v62)) > _g4_s18 ? (104u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v63)) > _g4_s19 ? (112u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v64)) > _g4_s20 ? (128u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v65)) > _g4_s21 ? (144u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v66)) > _g4_s22 ? (148u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (152u + sizeof(_g4_t_v67)) > _g4_s23 ? (152u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (156u + sizeof(_g4_t_v68)) > _g4_s24 ? (156u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (160u + sizeof(_g4_t_v69)) > _g4_s25 ? (160u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (176u + sizeof(_g4_t_v70)) > _g4_s26 ? (176u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (192u + sizeof(_g4_t_v71)) > _g4_s27 ? (192u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (208u + sizeof(_g4_t_v72)) > _g4_s28 ? (208u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (232u + sizeof(_g4_t_v73)) > _g4_s29 ? (232u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (236u + sizeof(_g4_t_v74)) > _g4_s30 ? (236u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (240u + sizeof(_g4_t_v75)) > _g4_s31 ? (240u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (244u + sizeof(_g4_t_v76)) > _g4_s32 ? (244u + sizeof(_g4_t_v76)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 96u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 100u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 104u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 128u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 144u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 148u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 152u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 156u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 160u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 176u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 192u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 208u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 232u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 236u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 240u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 244u);

  v73 = &self;
  v7 = self;
  v8 = a3;
  v45 = (hkVector4f::Self *)(a2);
  v47 = (hkTransformf::Self *)(a4);
  v50 = a7;
  v52 = a5;
  v46 = (hkDisplayCone::Self *)((hkpRagdollLimitsDrawer::Self *)((char *)self + 192));
  v51 = a6;
  hkpPrimitiveDrawer::setDisplayHandler((hkpRagdollLimitsDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters(v7, v8, v47);
  v48 = (hkVector4f::Self *)((hkpRagdollLimitsDrawer::Self *)((char *)v7 + 80));
  hkVector4f::setTransformedPos((hkpRagdollLimitsDrawer::Self *)((char *)v7 + 80), v47, (const hkVector4f::Self *)&flt_1D12E20);
  hkVector4f::setTransformedPos((hkpRagdollLimitsDrawer::Self *)((char *)v7 + 64), v8, (const hkVector4f::Self *)&flt_1D12E20);
  hkpConstraintDrawer::drawPivots(v7, v51, (int)(uintptr_t)(v50));
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)v63,
    (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 144),
    (hkVector4f::Self *)((char *)v45 + 80));
g4_m128_raw(v12) = *((unsigned int *)v45 + 21);
  v9 = *((float *)v45 + 25);
  v10 = *((float *)v45 + 26);
  v11 = *((float *)v45 + 24);
  *(float *)g4_m128_ptr<int32_t>(v12) = (float)(*(float *)g4_m128_ptr<int32_t>(v12) * v10) - (float)(*((float *)v45 + 22) * v9);
  v13 = *((float *)v45 + 20);
  v14 = (float)(*((float *)v45 + 22) * v11) - (float)(v10 * v13);
  v15 = (float)(v13 * v9) - (float)(v11 * *((float *)v45 + 21));
  v16 = v12;
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12)) + (float)(v14 * v14))
                          + (float)(v15 * v15);
  if ( *(float *)g4_m128_ptr<int32_t>(v16) <= 0.0 )
  {
    v22 = 0.0;
    v21 = 0.0;
  }
  else
  {
    v17 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v16);
    v18 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
    v19 = (float)(*(float *)&v18 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v18)
                * (float)(*(float *)&v18 * *(float *)&v18));
    v20 = (float)((float)((float)(*(float *)&v18 * 1.5)
                        - (float)((float)(v17 * *(float *)&v18) * (float)(*(float *)&v18 * *(float *)&v18)))
                * 1.5)
        - (float)((float)(v17 * v19) * (float)(v19 * v19));
    v21 = (float)(1.5 * v20) - (float)((float)(v17 * v20) * (float)(v20 * v20));
    v22 = 0.0 * v21;
  }
  v64[0] = *(float *)g4_m128_ptr<int32_t>(v12) * v21;
  v64[1] = v14 * v21;
  v64[2] = v21 * v15;
  v64[3] = v22;
  hkVector4f::setRotatedDir((hkVector4f::Self *)v64, (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 144), (const hkVector4f::Self *)v64);
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)&v65,
    (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 144),
    (hkVector4f::Self *)((char *)v45 + 96));
g4_m128_raw(v26) = *((unsigned int *)v45 + 13);
  v23 = *((float *)v45 + 9);
  v24 = *((float *)v45 + 10);
  v25 = *((float *)v45 + 8);
  *(float *)g4_m128_ptr<int32_t>(v26) = (float)(*(float *)g4_m128_ptr<int32_t>(v26) * v24) - (float)(*((float *)v45 + 14) * v23);
  v27 = *((float *)v45 + 12);
  v28 = (float)(*((float *)v45 + 14) * v25) - (float)(v24 * v27);
  v29 = (float)(v27 * v23) - (float)(v25 * *((float *)v45 + 13));
  v30 = v26;
  *(float *)g4_m128_ptr<int32_t>(v30) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)g4_m128_ptr<int32_t>(v26)) + (float)(v28 * v28))
                          + (float)(v29 * v29);
  if ( *(float *)g4_m128_ptr<int32_t>(v30) <= 0.0 )
  {
    v36 = 0.0;
    v35 = 0.0;
  }
  else
  {
    v31 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v30);
    v32 = ((_mm_cvtsi128_si32(v30) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v30) >> 1));
    v33 = (float)(*(float *)&v32 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v30)) * *(float *)&v32)
                * (float)(*(float *)&v32 * *(float *)&v32));
    v34 = (float)((float)((float)(*(float *)&v32 * 1.5)
                        - (float)((float)(v31 * *(float *)&v32) * (float)(*(float *)&v32 * *(float *)&v32)))
                * 1.5)
        - (float)((float)(v31 * v33) * (float)(v33 * v33));
    v35 = (float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34));
    v36 = 0.0 * v35;
  }
  v69[3] = v36;
  v69[2] = v35 * v29;
  v69[1] = v28 * v35;
  v69[0] = *(float *)g4_m128_ptr<int32_t>(v26) * v35;
  hkVector4f::setRotatedDir((hkVector4f::Self *)v70, (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 96), (const hkVector4f::Self *)v69);
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)v71,
    (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 96),
    (hkVector4f::Self *)((char *)v45 + 32));
  hkpPrimitiveDrawer::displayArrow(
    v46,
    v48,
    (const hkVector4f::Self *)v63,
    (const hkVector4f::Self *)v64,
    0xFF008000,
    *((float *)v7 + 3) * *((float *)v7 + 7),
    v51,
    (int)(uintptr_t)(v50));
  v44 = *((float *)v7 + 3) * *((float *)v7 + 7);
  v37 = hkColor::rgbFromChars((hkColor::Self *)((char *)off_FC + 3), 0xFFu, 0, 0xFFu);
  hkpPrimitiveDrawer::displayArrow(
    v46,
    (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 64),
    (const hkVector4f::Self *)v71,
    (const hkVector4f::Self *)v70,
    v37,
    v44,
    v51,
    (int)(uintptr_t)(v50));
  hkDisplayCone::setParameters(
    (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 208),
    *((float *)v45 + 43),
    *((float *)v7 + 4) * *((float *)v7 + 7),
    *((uint32_t *)v7 + 6),
    (const hkVector4f::Self *)v63,
    v48);
  v72[0] = *((float *)v7 + 5) * *((float *)v7 + 7);
  v72[3] = 0.0;
  v72[1] = v72[0];
  v72[2] = v72[0];
  hkDisplayPlane::setParameters(
    (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 640),
    (const hkVector4f::Self *)&v65,
    (const hkVector4f::Self *)v64,
    v48,
    (const hkVector4f::Self *)v72);
  v38 = *((float *)v45 + 50);
  hkDisplayCone::setParameters(
    (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 352),
    1.5707964f - fabs(*((float *)v45 + 51)),
    *((float *)v7 + 4) * *((float *)v7 + 7),
    *((uint32_t *)v7 + 6),
    (const hkVector4f::Self *)&v65,
    v48);
  v65 ^= 0x80000000;
  v39 = *((uint32_t *)v7 + 6);
  v66 ^= 0x80000000;
  v67 ^= 0x80000000;
  v40 = *((float *)v7 + 4) * *((float *)v7 + 7);
  v68 = -v68;
  hkDisplayCone::setParameters(
    (hkpRagdollLimitsDrawer::Self *)((char *)v7 + 496),
    1.5707964f - fabs(v38),
    v40,
    v39,
    (const hkVector4f::Self *)&v65,
    v48);
  v54 = nullptr;
  v55 = 0;
  v56 = 0x80000000;
  v57 = nullptr;
  v58 = 0;
  v59 = 0x80000000;
  v60 = nullptr;
  v61 = 0;
  v62 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v53, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)&v54, 1, 4);
  v55 = 1;
  if ( (v62 & 0x3FFFFFFF) == 0 )
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v53,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v60,
      1,
      4);
  v61 = 1;
  if ( (v59 & 0x3FFFFFFFu) <= 1 )
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v53,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v57,
      2,
      4);
  v58 = 2;
  *v54 = (uint32_t)(uintptr_t)((char *)v7 + 208);
  *v57 = (uint32_t)(uintptr_t)((char *)v7 + 352);
  v57[1] = (uint32_t)(uintptr_t)((char *)v7 + 496);
  *v60 = (uint32_t)(uintptr_t)((char *)v7 + 640);
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, uint32_t **, int, int, void *))(*(uint32_t *)v52 + 116))(
    v53,
    v52,
    &v54,
    -256,
    v51,
    v50);
  v41 = *(uint32_t *)v52;
  v74 = v52;
  savedregs = v51;
  v73 = (hkpRagdollLimitsDrawer::Self **)v53;
  v76 = -65536;
  v75 = &v57;
  (*(void (**)(uint8_t *))(v41 + 116))(v53);
  v49 = *(hkVector4f::Self **)(*(uint32_t *)v52 + 116);
  v42 = hkColor::rgbFromChars((hkColor::Self *)((char *)off_FC + 3), 0, 0xFFu, 0xFFu);
  retaddr = v50;
  savedregs = v51;
  v76 = v42;
  v75 = &v60;
  v74 = v52;
  ((void (*)(uint8_t *))v49)(v53);
  v61 = 0;
  if ( v62 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v60,
      4 * v62);
  v60 = nullptr;
  v62 = 0x80000000;
  v58 = 0;
  if ( v59 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v57,
      4 * v59);
  result = v56;
  v57 = nullptr;
  v59 = 0x80000000;
  v55 = 0;
  if ( v56 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v54,
             4 * v56);
  return result;
}


