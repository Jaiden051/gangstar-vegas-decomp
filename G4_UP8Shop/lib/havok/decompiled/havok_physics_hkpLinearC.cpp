#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpLinearC.h"

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::Atoms::staticClass  (binary VA: 0x1712d60)
// Original: hkpLinearClearanceConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpLinearClearanceConstraintData::Atoms::staticClass()
{
  return &hkpLinearClearanceConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::staticClass  (binary VA: 0x1712d80)
// Original: hkpLinearClearanceConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpLinearClearanceConstraintData::staticClass()
{
  return &hkpLinearClearanceConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::getRuntimeInfo  (binary VA: 0x171dfc0)
// Original: hkpLinearClearanceConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpLinearClearanceConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = 14;
  *a3 = 120;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::getType  (binary VA: 0x171dfe0)
// Original: hkpLinearClearanceConstraintData::getType
// ----------------------------------------------------------------------------
int hkpLinearClearanceConstraintData::getType()
{
  return 25;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::getConstraintInfo  (binary VA: 0x171dff0)
// Original: hkpLinearClearanceConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpLinearClearanceConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 272, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::isValid  (binary VA: 0x171e030)
// Original: hkpLinearClearanceConstraintData::isValid
// ----------------------------------------------------------------------------
hkpLinearClearanceConstraintData::Self * hkpLinearClearanceConstraintData::isValid(hkpLinearClearanceConstraintData::Self *self, int a2)
{
  bool v2;

  v2 = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 32), 0.00001f)
    && hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 96), 0.00001f)
    && *(float *)(a2 + 248) >= *(float *)(a2 + 244)
    && *(float *)(a2 + 264) >= *(float *)(a2 + 260)
    && *(float *)(a2 + 280) >= *(float *)(a2 + 276)
    && *(uint8_t *)(a2 + 227) <= 3u;
  *(uint8_t *)self = v2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::Destroy  (binary VA: 0x171e0d0)
// Original: hkpLinearClearanceConstraintData::~hkpLinearClearanceConstraintData
// ----------------------------------------------------------------------------
void hkpLinearClearanceConstraintData::Destroy(hkpLinearClearanceConstraintData::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 43);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D688);
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
// Function: hkpLinearClearanceConstraintData::Destroy_ea171e150  (binary VA: 0x171e150)
// Original: hkpLinearClearanceConstraintData::~hkpLinearClearanceConstraintData
// ----------------------------------------------------------------------------
void hkpLinearClearanceConstraintData::Destroy_ea171e150(hkpLinearClearanceConstraintData::Self *self)
{
  int v1;
  int v2;

  hkpLinearClearanceConstraintData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 288;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::Construct  (binary VA: 0x171e1b0)
// Original: hkpLinearClearanceConstraintData::hkpLinearClearanceConstraintData
// ----------------------------------------------------------------------------
void hkpLinearClearanceConstraintData::Construct(hkpLinearClearanceConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D688);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 11;
  *((uint16_t *)self + 88) = 10;
  *((uint8_t *)self + 178) = 1;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint16_t *)self + 96) = 10;
  *((uint8_t *)self + 194) = 1;
  *((uint16_t *)self + 104) = 10;
  *((uint8_t *)self + 210) = 1;
  *((uint16_t *)self + 112) = 13;
  *((uint16_t *)self + 120) = 9;
  *((uint16_t *)self + 128) = 9;
  *((uint16_t *)self + 136) = 9;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint8_t *)self + 242) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint8_t *)self + 258) = 1;
  *((uint32_t *)self + 38) = 0;
  *((uint8_t *)self + 274) = 2;
  *((uint32_t *)self + 39) = 0;
  *((uint8_t *)self + 179) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint8_t *)self + 195) = 1;
  *((uint32_t *)self + 62) = 0;
  *((uint8_t *)self + 211) = 2;
  *((uint32_t *)self + 65) = 0;
  *((uint8_t *)self + 163) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint8_t *)self + 162) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 70) = 0;
  *((uint16_t *)self + 82) = 112;
  *((uint32_t *)self + 45) = 0;
  *((uint16_t *)self + 83) = 116;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint8_t *)self + 226) = 0;
  *((uint8_t *)self + 227) = 3;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::Atoms::Construct  (binary VA: 0x171e410)
// Original: hkpLinearClearanceConstraintData::Atoms::Atoms
// ----------------------------------------------------------------------------
int hkpLinearClearanceConstraintData::Atoms::Construct(int a1, int a2)
{
  int result;

  result = a1;
  *(uint16_t *)(a1 + 148) = -1;
  *(uint16_t *)(a1 + 150) = -1;
  if ( a2 != 0 )
  {
    *(uint16_t *)(a1 + 148) = 112;
    *(uint16_t *)(a1 + 150) = 116;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::setInBodySpace  (binary VA: 0x171e450)
// Original: hkpLinearClearanceConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
int hkpLinearClearanceConstraintData::setInBodySpace(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8)
{
  int result;
  __m128i v9;
  float v10; // xmm5_4
  float v11; // xmm2_4
  __m128i v12;
  int v13;
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  __m128i v21;
  float v22; // xmm4_4
  float v23; // xmm3_4
  __m128i v24;
  float v25; // xmm1_4
  float v26; // xmm6_4
  int v27;
  float v28; // xmm1_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm1_4
  __m128i v33;
  float v34; // xmm5_4
  float v35; // xmm2_4
  __m128i v36;
  int v37;
  float v38; // xmm3_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm2_4
  float v44; // xmm0_4
  __m128i v45;
  float v46; // xmm4_4
  float v47; // xmm3_4
  __m128i v48;
  float v49; // xmm1_4
  float v50; // xmm6_4
  int v51;
  int v52;
  float v53; // xmm1_4
  float v54; // xmm5_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm1_4
  float v58;
  float v59;
  float v60;
  float v61;
  uint8_t v62[19];

  result = a1;
  *(uint32_t *)(a1 + 80) = *a3;
  *(uint32_t *)(a1 + 84) = a3[1];
  *(uint32_t *)(a1 + 88) = a3[2];
  *(uint32_t *)(a1 + 92) = a3[3];
  *(uint32_t *)(a1 + 144) = *a4;
  *(uint32_t *)(a1 + 148) = a4[1];
  *(uint32_t *)(a1 + 152) = a4[2];
  *(uint32_t *)(a1 + 156) = a4[3];
  *(uint32_t *)(a1 + 32) = *a5;
  *(uint32_t *)(a1 + 36) = a5[1];
  *(uint32_t *)(a1 + 40) = a5[2];
  *(uint32_t *)(a1 + 44) = a5[3];
g4_m128_raw(v9) = *(unsigned int *)(a1 + 32);
  v10 = *(float *)(a1 + 36);
  v12 = v9;
  v11 = *(float *)(a1 + 40);
  *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)g4_m128_ptr<int32_t>(v9)) + (float)(v10 * v10))
                          + (float)(v11 * v11);
  if ( *(float *)g4_m128_ptr<int32_t>(v12) <= 0.0 )
  {
    v16 = 0.0;
  }
  else
  {
    v13 = ((_mm_cvtsi128_si32(v12) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v12) >> 1));
    v14 = (float)(*(float *)&v13 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * *(float *)&v13)
                * (float)(*(float *)&v13 * *(float *)&v13));
    v15 = (float)(v14 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * v14) * (float)(v14 * v14));
    v16 = (float)(1.5 * v15) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * v15) * (float)(v15 * v15));
  }
  v17 = *(float *)g4_m128_ptr<int32_t>(v9) * v16;
  v18 = v10 * v16;
  v19 = v11 * v16;
  v20 = v16 * *(float *)(a1 + 44);
  *(float *)(a1 + 32) = v17;
  *(float *)(a1 + 36) = v18;
  *(float *)(a1 + 40) = v19;
  *(float *)(a1 + 44) = v20;
  v58 = v17;
  *(uint32_t *)(a1 + 48) = *a7;
  v60 = v18;
g4_m128_raw(v21) = *(unsigned int *)(a1 + 48);
  *(uint32_t *)(a1 + 52) = a7[1];
  v22 = *(float *)(a1 + 52);
  v24 = v21;
  *(uint32_t *)(a1 + 56) = a7[2];
  v23 = *(float *)(a1 + 56);
  *(uint32_t *)(a1 + 60) = a7[3];
  *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v21) * *(float *)g4_m128_ptr<int32_t>(v21)) + (float)(v22 * v22))
                          + (float)(v23 * v23);
  v25 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v24) > 0.0 )
  {
    v26 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v24);
    v27 = ((_mm_cvtsi128_si32(v24) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v24) >> 1));
    v28 = (float)(1.5 * *(float *)&v27)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * *(float *)&v27)
                * (float)(*(float *)&v27 * *(float *)&v27));
    v25 = (float)(1.5 * (float)((float)(1.5 * v28) - (float)((float)(v26 * v28) * (float)(v28 * v28))))
        - (float)((float)(v26 * (float)((float)(1.5 * v28) - (float)((float)(v26 * v28) * (float)(v28 * v28))))
                * (float)((float)((float)(1.5 * v28) - (float)((float)(v26 * v28) * (float)(v28 * v28)))
                        * (float)((float)(1.5 * v28) - (float)((float)(v26 * v28) * (float)(v28 * v28)))));
  }
  v29 = *(float *)g4_m128_ptr<int32_t>(v21) * v25;
  v30 = v22 * v25;
  v31 = v23 * v25;
  *(uint32_t *)(a1 + 76) = 0;
  v32 = v25 * *(float *)(a1 + 60);
  *(float *)(a1 + 48) = v29;
  *(float *)(a1 + 60) = v32;
  *(float *)(a1 + 52) = v30;
  *(float *)(a1 + 56) = v31;
  *(float *)(a1 + 64) = (float)(v60 * v31) - (float)(v19 * v30);
  *(float *)(a1 + 68) = (float)(v19 * v29) - (float)(v31 * v58);
  *(float *)(a1 + 72) = (float)(v30 * v58) - (float)(v29 * v60);
  *(uint32_t *)(a1 + 96) = *a6;
g4_m128_raw(v33) = *(unsigned int *)(a1 + 96);
  *(uint32_t *)(a1 + 100) = a6[1];
  v34 = *(float *)(a1 + 100);
  v36 = v33;
  *(uint32_t *)(a1 + 104) = a6[2];
  v35 = *(float *)(a1 + 104);
  *(uint32_t *)(a1 + 108) = a6[3];
  *(float *)g4_m128_ptr<int32_t>(v36) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v33) * *(float *)g4_m128_ptr<int32_t>(v33)) + (float)(v34 * v34))
                          + (float)(v35 * v35);
  if ( *(float *)g4_m128_ptr<int32_t>(v36) <= 0.0 )
  {
    v40 = 0.0;
  }
  else
  {
    v37 = ((_mm_cvtsi128_si32(v36) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v36) >> 1));
    v38 = (float)(*(float *)&v37 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v36)) * *(float *)&v37)
                * (float)(*(float *)&v37 * *(float *)&v37));
    v39 = (float)(v38 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v36)) * v38) * (float)(v38 * v38));
    v40 = (float)(1.5 * v39) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v36)) * v39) * (float)(v39 * v39));
  }
  v41 = *(float *)g4_m128_ptr<int32_t>(v33) * v40;
  v42 = v34 * v40;
  v43 = v35 * v40;
  v44 = v40 * *(float *)(a1 + 108);
  *(float *)(a1 + 96) = v41;
  *(float *)(a1 + 100) = v42;
  *(float *)(a1 + 104) = v43;
  *(float *)(a1 + 108) = v44;
  v59 = v41;
  *(uint32_t *)(a1 + 112) = *a8;
  v61 = v42;
g4_m128_raw(v45) = *(unsigned int *)(a1 + 112);
  *(uint32_t *)(a1 + 116) = a8[1];
  v46 = *(float *)(a1 + 116);
  v48 = v45;
  *(uint32_t *)(a1 + 120) = a8[2];
  v47 = *(float *)(a1 + 120);
  *(uint32_t *)(a1 + 124) = a8[3];
  *(float *)g4_m128_ptr<int32_t>(v48) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v45) * *(float *)g4_m128_ptr<int32_t>(v45)) + (float)(v46 * v46))
                          + (float)(v47 * v47);
  v49 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v48) > 0.0 )
  {
    v50 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v48);
    v51 = _mm_cvtsi128_si32(v48) >> 1;
    v52 = (_mm_cvtsi128_si32(v48) + 2139095040) >> 31;
    v53 = (float)(1.5 * COERCE_FLOAT(v52 & (1597463174 - v51)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v48)) * COERCE_FLOAT(v52 & (1597463174 - v51)))
                * (float)(COERCE_FLOAT(v52 & (1597463174 - v51)) * COERCE_FLOAT(v52 & (1597463174 - v51))));
    v49 = (float)(1.5 * (float)((float)(1.5 * v53) - (float)((float)(v50 * v53) * (float)(v53 * v53))))
        - (float)((float)(v50 * (float)((float)(1.5 * v53) - (float)((float)(v50 * v53) * (float)(v53 * v53))))
                * (float)((float)((float)(1.5 * v53) - (float)((float)(v50 * v53) * (float)(v53 * v53)))
                        * (float)((float)(1.5 * v53) - (float)((float)(v50 * v53) * (float)(v53 * v53)))));
  }
  v54 = *(float *)g4_m128_ptr<int32_t>(v45) * v49;
  v55 = v46 * v49;
  v62[0] = 3;
  v56 = v47 * v49;
  v62[1] = 2;
  v57 = v49 * *(float *)(a1 + 124);
  v62[2] = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(float *)(a1 + 112) = v54;
  *(float *)(a1 + 124) = v57;
  *(float *)(a1 + 116) = v55;
  *(float *)(a1 + 120) = v56;
  *(uint8_t *)(a1 + 227) = v62[a2];
  *(float *)(a1 + 128) = (float)(v61 * v56) - (float)(v43 * v55);
  *(float *)(a1 + 132) = (float)(v43 * v54) - (float)(v56 * v59);
  *(float *)(a1 + 136) = (float)(v55 * v59) - (float)(v54 * v61);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::setInWorldSpace  (binary VA: 0x171e990)
// Original: hkpLinearClearanceConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
int hkpLinearClearanceConstraintData::setInWorldSpace(int a1, int a2, hkTransformf::Self *a3, hkTransformf::Self *a4, hkVector4f::Self *a5, const hkVector4f::Self *a6, const hkVector4f::Self *a7)
{
  __m128i v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  __m128i v12;
  int v13;
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  __m128i v17;
  int v18;
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  __m128i v22;
  int v23;
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef uint32_t _g4_t_v36[4];
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef uint32_t _g4_t_v45[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v29)) > _g4_s1 ? (4u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v32)) > _g4_s4 ? (16u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v33)) > _g4_s5 ? (20u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v34)) > _g4_s6 ? (24u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v35)) > _g4_s7 ? (28u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v36)) > _g4_s8 ? (32u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v37)) > _g4_s9 ? (48u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v38)) > _g4_s10 ? (52u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v39)) > _g4_s11 ? (56u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v40)) > _g4_s12 ? (60u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v41)) > _g4_s13 ? (64u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v42)) > _g4_s14 ? (68u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v43)) > _g4_s15 ? (72u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v44)) > _g4_s16 ? (76u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v45)) > _g4_s17 ? (80u + sizeof(_g4_t_v45)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);

  hkVector4f::setRotatedInverseDir((hkVector4f::Self *)&v28, a3, a6);
g4_m128_raw(v7) = LODWORD(v28);
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v29 * v29))
                         + (float)(v30 * v30);
  if ( *(float *)g4_m128_ptr<int32_t>(v7) <= 0.0 )
  {
    v11 = 0.0;
  }
  else
  {
    v8 = ((_mm_cvtsi128_si32(v7) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v7) >> 1));
    v9 = (float)(*(float *)&v8 * 1.5)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * *(float *)&v8) * (float)(*(float *)&v8 * *(float *)&v8));
    v10 = (float)(v9 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v9) * (float)(v9 * v9));
    v11 = (float)(1.5 * v10) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v10) * (float)(v10 * v10));
  }
  v28 = v28 * v11;
  v29 = v29 * v11;
  v30 = v30 * v11;
  v31 = v11 * v31;
  hkVector4f::setRotatedInverseDir((hkVector4f::Self *)&v32, a3, a7);
g4_m128_raw(v12) = LODWORD(v32);
  *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12)) + (float)(v33 * v33))
                          + (float)(v34 * v34);
  if ( *(float *)g4_m128_ptr<int32_t>(v12) <= 0.0 )
  {
    v16 = 0.0;
  }
  else
  {
    v13 = ((_mm_cvtsi128_si32(v12) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v12) >> 1));
    v14 = (float)(*(float *)&v13 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * *(float *)&v13)
                * (float)(*(float *)&v13 * *(float *)&v13));
    v15 = (float)(v14 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * v14) * (float)(v14 * v14));
    v16 = (float)(1.5 * v15) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * v15) * (float)(v15 * v15));
  }
  v32 = v32 * v16;
  v33 = v33 * v16;
  v34 = v34 * v16;
  v35 = v16 * v35;
  hkVector4f::setTransformedInversePos((hkVector4f::Self *)v36, a3, a5);
  hkVector4f::setRotatedInverseDir((hkVector4f::Self *)&v37, a4, a6);
g4_m128_raw(v17) = LODWORD(v37);
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)g4_m128_ptr<int32_t>(v17)) + (float)(v38 * v38))
                          + (float)(v39 * v39);
  if ( *(float *)g4_m128_ptr<int32_t>(v17) <= 0.0 )
  {
    v21 = 0.0;
  }
  else
  {
    v18 = ((_mm_cvtsi128_si32(v17) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v17) >> 1));
    v19 = (float)(*(float *)&v18 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * *(float *)&v18)
                * (float)(*(float *)&v18 * *(float *)&v18));
    v20 = (float)(v19 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v19) * (float)(v19 * v19));
    v21 = (float)(1.5 * v20) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v20) * (float)(v20 * v20));
  }
  v37 = v37 * v21;
  v38 = v38 * v21;
  v39 = v39 * v21;
  v40 = v21 * v40;
  hkVector4f::setRotatedInverseDir((hkVector4f::Self *)&v41, a4, a7);
g4_m128_raw(v22) = LODWORD(v41);
  *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)g4_m128_ptr<int32_t>(v22)) + (float)(v42 * v42))
                          + (float)(v43 * v43);
  if ( *(float *)g4_m128_ptr<int32_t>(v22) <= 0.0 )
  {
    v26 = 0.0;
  }
  else
  {
    v23 = ((_mm_cvtsi128_si32(v22) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v22) >> 1));
    v24 = (float)(*(float *)&v23 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * *(float *)&v23)
                * (float)(*(float *)&v23 * *(float *)&v23));
    v25 = (float)(v24 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * v24) * (float)(v24 * v24));
    v26 = (float)(1.5 * v25) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * v25) * (float)(v25 * v25));
  }
  v41 = v41 * v26;
  v42 = v42 * v26;
  v43 = v43 * v26;
  v44 = v26 * v44;
  hkVector4f::setTransformedInversePos((hkVector4f::Self *)v45, a4, a5);
  return hkpLinearClearanceConstraintData::setInBodySpace(a1, a2, v36, v45, (uint32_t *)(&v28), (uint32_t *)(&v37), (uint32_t *)(&v32), (uint32_t *)(&v41));
}

// ----------------------------------------------------------------------------
// Function: hkpLinearClearanceConstraintData::setMotor  (binary VA: 0x171ee40)
// Original: hkpLinearClearanceConstraintData::setMotor
// ----------------------------------------------------------------------------
int hkpLinearClearanceConstraintData::setMotor(hkpLinearClearanceConstraintData::Self *self, hkpConstraintMotor::Self *a2)
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
// Function: hkpLinearClearanceConstraintData::setMotorEnabled  (binary VA: 0x171eee0)
// Original: hkpLinearClearanceConstraintData::setMotorEnabled
// ----------------------------------------------------------------------------
uint32_t * hkpLinearClearanceConstraintData::setMotorEnabled(int a1, uint32_t *a2, char a3)
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


