#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpFixedCo.h"

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::Atoms::staticClass  (binary VA: 0x1712590)
// Original: hkpFixedConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpFixedConstraintData::Atoms::staticClass()
{
  return &hkpFixedConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::staticClass  (binary VA: 0x17125b0)
// Original: hkpFixedConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpFixedConstraintData::staticClass()
{
  return &hkpFixedConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::setMaximumLinearImpulse  (binary VA: 0x1713830)
// Original: hkpFixedConstraintData::setMaximumLinearImpulse
// ----------------------------------------------------------------------------
hkpFixedConstraintData::Self * hkpFixedConstraintData::setMaximumLinearImpulse(hkpFixedConstraintData::Self *self, float a2)
{
  *((float *)self + 41) = a2;
  *((uint8_t *)self + 181) = a2 < 3.40282e38f;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::setMaximumAngularImpulse  (binary VA: 0x1713860)
// Original: hkpFixedConstraintData::setMaximumAngularImpulse
// ----------------------------------------------------------------------------
hkpFixedConstraintData::Self * hkpFixedConstraintData::setMaximumAngularImpulse(hkpFixedConstraintData::Self *self, float a2)
{
  *((float *)self + 42) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::getMaximumLinearImpulse  (binary VA: 0x1713880)
// Original: hkpFixedConstraintData::getMaximumLinearImpulse
// ----------------------------------------------------------------------------
long double hkpFixedConstraintData::getMaximumLinearImpulse(hkpFixedConstraintData::Self *self)
{
  return *((float *)self + 41);
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::getMaximumAngularImpulse  (binary VA: 0x17138a0)
// Original: hkpFixedConstraintData::getMaximumAngularImpulse
// ----------------------------------------------------------------------------
long double hkpFixedConstraintData::getMaximumAngularImpulse(hkpFixedConstraintData::Self *self)
{
  return *((float *)self + 42);
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::setBodyToNotify  (binary VA: 0x17138c0)
// Original: hkpFixedConstraintData::setBodyToNotify
// ----------------------------------------------------------------------------
int hkpFixedConstraintData::setBodyToNotify(hkpFixedConstraintData::Self *self, char a2)
{
  *((uint8_t *)self + 179) = 1 << a2;
  return 1 << a2;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::getNotifiedBodyIndex  (binary VA: 0x17138e0)
// Original: hkpFixedConstraintData::getNotifiedBodyIndex
// ----------------------------------------------------------------------------
int hkpFixedConstraintData::getNotifiedBodyIndex(hkpFixedConstraintData::Self *self)
{
  return (int)*((uint8_t *)self + 179) >> 1;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::getRuntimeInfo  (binary VA: 0x17138f0)
// Original: hkpFixedConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpFixedConstraintData::getRuntimeInfo(int a1, char a2, uint32_t *a3)
{
  uint32_t *result;

  result = a3;
  if ( a2 == 0 && *(float *)(a1 + 184) == 3.40282e38f )
  {
    *a3 = 0;
    a3[1] = 0;
  }
  else
  {
    *a3 = 48;
    a3[1] = 6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::isValid  (binary VA: 0x1713940)
// Original: hkpFixedConstraintData::isValid
// ----------------------------------------------------------------------------
hkpFixedConstraintData::Self * hkpFixedConstraintData::isValid(hkpFixedConstraintData::Self *self, int a2)
{
  hkpFixedConstraintData::Self *result;
  bool v3;

  result = self;
  v3 = true;
  if ( *(uint8_t *)(a2 + 178) == 0 )
    v3 = *(uint8_t *)(a2 + 162) != 0;
  *(uint8_t *)self = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::getType  (binary VA: 0x1713970)
// Original: hkpFixedConstraintData::getType
// ----------------------------------------------------------------------------
int hkpFixedConstraintData::getType()
{
  return 23;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::setSolvingMethod  (binary VA: 0x1713980)
// Original: hkpFixedConstraintData::setSolvingMethod
// ----------------------------------------------------------------------------
int hkpFixedConstraintData::setSolvingMethod(int a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      *(uint8_t *)(a1 + 162) = 0;
      *(uint8_t *)(a1 + 178) = 1;
    }
  }
  else
  {
    *(uint8_t *)(a1 + 162) = 1;
    *(uint8_t *)(a1 + 178) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::getInertiaStabilizationFactor  (binary VA: 0x17139c0)
// Original: hkpFixedConstraintData::getInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpFixedConstraintData::Self * hkpFixedConstraintData::getInertiaStabilizationFactor(hkpFixedConstraintData::Self *self, float *a2, float *a3)
{
  *a3 = a2[47];
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::setInertiaStabilizationFactor  (binary VA: 0x17139f0)
// Original: hkpFixedConstraintData::setInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpFixedConstraintData::Self * hkpFixedConstraintData::setInertiaStabilizationFactor(hkpFixedConstraintData::Self *self, float a2, float a3)
{
  hkpFixedConstraintData::Self *result;
  float v4; // xmm0_4

  result = self;
  v4 = 0.0;
  if ( a3 >= 0.0 )
    v4 = fminf(1.0, a3);
  *(uint32_t *)self = 0;
  *(float *)(LODWORD(a2) + 188) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::Destroy  (binary VA: 0x1713a30)
// Original: hkpFixedConstraintData::~hkpFixedConstraintData
// ----------------------------------------------------------------------------
void hkpFixedConstraintData::Destroy(hkpFixedConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::getConstraintInfo  (binary VA: 0x1713a50)
// Original: hkpFixedConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
int hkpFixedConstraintData::getConstraintInfo(int a1, int a2)
{
  return (int)(uintptr_t)(hkpConstraintData::getConstraintInfoUtil(a1 + 16, 192, a2));
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::Destroy_ea1713a90  (binary VA: 0x1713a90)
// Original: hkpFixedConstraintData::~hkpFixedConstraintData
// ----------------------------------------------------------------------------
void hkpFixedConstraintData::Destroy_ea1713a90(hkpFixedConstraintData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 208;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::Construct  (binary VA: 0x1713af0)
// Original: hkpFixedConstraintData::hkpFixedConstraintData
// ----------------------------------------------------------------------------
void hkpFixedConstraintData::Construct(hkpFixedConstraintData::Self *self)
{
  float v1[8];

  v1[0] = 1.0;
  *((uint32_t *)self + 41) = 2139095022;
  *((uint32_t *)self + 42) = 2139095022;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C7A8);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 23;
  *((uint8_t *)self + 162) = 0;
  *((uint32_t *)self + 43) = 1602224112;
  *((uint16_t *)self + 88) = 5;
  *((uint8_t *)self + 178) = 1;
  *((uint8_t *)self + 179) = 0;
  hkUFloat8::opAssign((hkpFixedConstraintData::Self *)((char *)self + 180), v1);
  *((uint8_t *)self + 181) = 0;
  *((uint16_t *)self + 96) = 24;
  *((uint32_t *)self + 46) = 2139095022;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 35) = 0;
  *((uint8_t *)self + 162) = 1;
  *((uint32_t *)self + 36) = 0;
  *((uint8_t *)self + 178) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::setInWorldSpace  (binary VA: 0x1713cf0)
// Original: hkpFixedConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
float * hkpFixedConstraintData::setInWorldSpace(hkpFixedConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4)
{
  float v5; // xmm0_4
  float v6; // xmm4_4
  float *result;
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm5_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm1_4
  float v43; // xmm5_4
  float v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm3_4
  float v50; // xmm0_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  float v53; // xmm4_4
  float v54; // xmm2_4
  float v55; // xmm1_4
  float v56; // xmm3_4
  float v57; // xmm0_4
  float v58; // xmm2_4
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm0_4
  float v62; // xmm2_4
  float v63; // xmm0_4
  float v64; // xmm4_4
  float v65; // xmm3_4
  float v66; // xmm2_4
  float v67; // xmm1_4
  float v68; // xmm0_4
  float v69; // xmm2_4

  v5 = *((float *)a4 + 12);
  v6 = *((float *)a4 + 13);
  result = (float *)a3;
  v8 = (float)(*(float *)a2 * v5) + (float)(*((float *)a2 + 1) * v6);
  v9 = *((float *)a2 + 4) * v5;
  v10 = *((float *)a4 + 14);
  v11 = (float)((float)(v5 * *((float *)a2 + 8)) + (float)(v6 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v10);
  v12 = v8 + (float)(v10 * *((float *)a2 + 2));
  *((float *)self + 21) = (float)(v9 + (float)(*((float *)a2 + 5) * v6)) + (float)(*((float *)a2 + 6) * v10);
  *((float *)self + 22) = v11;
  *((float *)self + 20) = v12;
  *((float *)self + 23) = v11;
  v13 = *((float *)a4 + 8);
  v14 = *((float *)a4 + 9);
  v15 = (float)(*(float *)a2 * v13) + (float)(*((float *)a2 + 1) * v14);
  v16 = *((float *)a4 + 10);
  v17 = (float)(*((float *)a2 + 4) * v13) + (float)(*((float *)a2 + 5) * v14);
  v18 = *((float *)a2 + 6) * v16;
  v19 = (float)((float)(v13 * *((float *)a2 + 8)) + (float)(v14 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v16);
  *((float *)self + 16) = v15 + (float)(v16 * *((float *)a2 + 2));
  *((float *)self + 17) = v17 + v18;
  *((float *)self + 18) = v19;
  *((float *)self + 19) = v19;
  v20 = *((float *)a4 + 4);
  v21 = *((float *)a4 + 5);
  v22 = (float)(*(float *)a2 * v20) + (float)(*((float *)a2 + 1) * v21);
  v23 = *((float *)a2 + 4) * v20;
  v24 = *((float *)a4 + 6);
  v25 = (float)((float)(v20 * *((float *)a2 + 8)) + (float)(v21 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v24);
  v26 = v22 + (float)(v24 * *((float *)a2 + 2));
  *((float *)self + 13) = (float)(v23 + (float)(*((float *)a2 + 5) * v21)) + (float)(*((float *)a2 + 6) * v24);
  *((float *)self + 14) = v25;
  *((float *)self + 12) = v26;
  *((float *)self + 15) = v25;
  v27 = *((float *)a4 + 1);
  v28 = *((float *)a4 + 2);
  v29 = (float)((float)(*(float *)a4 * *((float *)a2 + 8)) + (float)(v27 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v28);
  v30 = (float)((float)(*(float *)a2 * *(float *)a4) + (float)(*((float *)a2 + 1) * v27))
      + (float)(v28 * *((float *)a2 + 2));
  *((float *)self + 9) = (float)((float)(*((float *)a2 + 4) * *(float *)a4) + (float)(*((float *)a2 + 5) * v27))
                       + (float)(*((float *)a2 + 6) * v28);
  *((float *)self + 8) = v30;
  *((float *)self + 10) = v29;
  *((float *)self + 11) = v29;
  v31 = *((float *)a4 + 12) - *((float *)a2 + 12);
  v32 = *((float *)a4 + 13) - *((float *)a2 + 13);
  v33 = *((float *)a4 + 14) - *((float *)a2 + 14);
  v34 = (float)(*(float *)a2 * v31) + (float)(*((float *)a2 + 1) * v32);
  v35 = *((float *)a2 + 4) * v31;
  v36 = (float)((float)(v31 * *((float *)a2 + 8)) + (float)(v32 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v33);
  v37 = v34 + (float)(v33 * *((float *)a2 + 2));
  *((float *)self + 21) = (float)(v35 + (float)(*((float *)a2 + 5) * v32)) + (float)(*((float *)a2 + 6) * v33);
  *((float *)self + 22) = v36;
  *((float *)self + 20) = v37;
  *((float *)self + 23) = v36;
  v38 = *((float *)a4 + 12);
  v39 = *((float *)a4 + 13);
  v40 = (float)(*result * v38) + (float)(result[1] * v39);
  v41 = *((float *)a4 + 14);
  v42 = (float)(result[4] * v38) + (float)(result[5] * v39);
  v43 = *((float *)a3 + 6) * v41;
  v44 = (float)((float)(v38 * result[8]) + (float)(v39 * result[9])) + (float)(result[10] * v41);
  *((float *)self + 36) = v40 + (float)(v41 * *((float *)a3 + 2));
  *((float *)self + 37) = v42 + v43;
  *((float *)self + 38) = v44;
  *((float *)self + 39) = v44;
  v45 = *((float *)a4 + 8);
  v46 = *((float *)a4 + 9);
  v47 = (float)(*result * v45) + (float)(result[1] * v46);
  v48 = *((float *)a3 + 4) * v45;
  v49 = *((float *)a4 + 10);
  v50 = (float)((float)(v45 * result[8]) + (float)(v46 * result[9])) + (float)(result[10] * v49);
  v51 = v47 + (float)(v49 * *((float *)a3 + 2));
  *((float *)self + 33) = (float)(v48 + (float)(*((float *)a3 + 5) * v46)) + (float)(*((float *)a3 + 6) * v49);
  *((float *)self + 34) = v50;
  *((float *)self + 32) = v51;
  *((float *)self + 35) = v50;
  v52 = *((float *)a4 + 4);
  v53 = *((float *)a4 + 5);
  v54 = (float)(*result * v52) + (float)(result[1] * v53);
  v55 = *((float *)a3 + 4) * v52;
  v56 = *((float *)a4 + 6);
  v57 = (float)((float)(v52 * result[8]) + (float)(v53 * result[9])) + (float)(result[10] * v56);
  v58 = v54 + (float)(v56 * *((float *)a3 + 2));
  *((float *)self + 29) = (float)(v55 + (float)(*((float *)a3 + 5) * v53)) + (float)(*((float *)a3 + 6) * v56);
  *((float *)self + 30) = v57;
  *((float *)self + 28) = v58;
  *((float *)self + 31) = v57;
  v59 = *((float *)a4 + 1);
  v60 = *((float *)a4 + 2);
  v61 = (float)((float)(*(float *)a4 * result[8]) + (float)(v59 * result[9])) + (float)(result[10] * v60);
  v62 = (float)((float)(*result * *(float *)a4) + (float)(result[1] * v59)) + (float)(v60 * result[2]);
  *((float *)self + 25) = (float)((float)(*((float *)a3 + 4) * *(float *)a4) + (float)(*((float *)a3 + 5) * v59))
                        + (float)(*((float *)a3 + 6) * v60);
  *((float *)self + 26) = v61;
  *((float *)self + 24) = v62;
  *((float *)self + 27) = v61;
  v63 = *((float *)a4 + 12) - *((float *)a3 + 12);
  v64 = *((float *)a4 + 13) - *((float *)a3 + 13);
  v65 = *((float *)a4 + 14) - *((float *)a3 + 14);
  v66 = (float)(*(float *)a3 * v63) + (float)(*((float *)a3 + 1) * v64);
  v67 = (float)(*((float *)a3 + 4) * v63) + (float)(*((float *)a3 + 5) * v64);
  v68 = (float)((float)(v63 * result[8]) + (float)(v64 * result[9])) + (float)(*((float *)a3 + 10) * v65);
  v69 = v66 + (float)(v65 * *((float *)a3 + 2));
  *((float *)self + 37) = v67 + (float)(*((float *)a3 + 6) * v65);
  *((float *)self + 36) = v69;
  *((float *)self + 38) = v68;
  *((float *)self + 39) = v68;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintData::setInBodySpace  (binary VA: 0x1714240)
// Original: hkpFixedConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkpFixedConstraintData::Self * hkpFixedConstraintData::setInBodySpace(hkpFixedConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3)
{
  *((uint32_t *)self + 8) = *(uint32_t *)a2;
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 19) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 20) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 15);
  *((uint32_t *)self + 24) = *(uint32_t *)a3;
  *((uint32_t *)self + 25) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 28) = *((uint32_t *)a3 + 4);
  *((uint32_t *)self + 29) = *((uint32_t *)a3 + 5);
  *((uint32_t *)self + 30) = *((uint32_t *)a3 + 6);
  *((uint32_t *)self + 31) = *((uint32_t *)a3 + 7);
  *((uint32_t *)self + 32) = *((uint32_t *)a3 + 8);
  *((uint32_t *)self + 33) = *((uint32_t *)a3 + 9);
  *((uint32_t *)self + 34) = *((uint32_t *)a3 + 10);
  *((uint32_t *)self + 35) = *((uint32_t *)a3 + 11);
  *((uint32_t *)self + 36) = *((uint32_t *)a3 + 12);
  *((uint32_t *)self + 37) = *((uint32_t *)a3 + 13);
  *((uint32_t *)self + 38) = *((uint32_t *)a3 + 14);
  *((uint32_t *)self + 39) = *((uint32_t *)a3 + 15);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedConstraintDrawer::drawConstraint  (binary VA: 0x1af7240)
// Original: hkpFixedConstraintDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpFixedConstraintDrawer::drawConstraint(hkpFixedConstraintDrawer::Self *self, const hkpFixedConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  uint8_t v8[28];

  hkpPrimitiveDrawer::setDisplayHandler((hkpFixedConstraintDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters(self, a3, a4);
  hkVector4f::setTransformedPos(
    (hkpFixedConstraintDrawer::Self *)((char *)self + 80),
    a4,
    (const hkpFixedConstraintData::Self *)((char *)a2 + 144));
  hkVector4f::setTransformedPos(
    (hkpFixedConstraintDrawer::Self *)((char *)self + 64),
    a3,
    (const hkpFixedConstraintData::Self *)((char *)a2 + 80));
  hkpConstraintDrawer::drawPivots(self, a6, a7);
  hkpConstraintDrawer::drawBodyFrames(self, a6, a7);
  return (*(int (**)(uint8_t *, hkDebugDisplayHandler::Self *, char *, char *, int, int, int))(*(uint32_t *)a5 + 72))(
           v8,
           a5,
           (char *)self + 64,
           (char *)self + 80,
           -65536,
           a6,
           a7);
}


