#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBallAnd.h"

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::Atoms::staticClass  (binary VA: 0x17158b0)
// Original: hkpBallAndSocketConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpBallAndSocketConstraintData::Atoms::staticClass()
{
  return &hkpBallAndSocketConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::staticClass  (binary VA: 0x17158d0)
// Original: hkpBallAndSocketConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpBallAndSocketConstraintData::staticClass()
{
  return &hkpBallAndSocketConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::setBreachImpulse  (binary VA: 0x1725ea0)
// Original: hkpBallAndSocketConstraintData::setBreachImpulse
// ----------------------------------------------------------------------------
hkpBallAndSocketConstraintData::Self * hkpBallAndSocketConstraintData::setBreachImpulse(hkpBallAndSocketConstraintData::Self *self, float a2)
{
  *((float *)self + 22) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::getBreachImpulse  (binary VA: 0x1725ec0)
// Original: hkpBallAndSocketConstraintData::getBreachImpulse
// ----------------------------------------------------------------------------
long double hkpBallAndSocketConstraintData::getBreachImpulse(hkpBallAndSocketConstraintData::Self *self)
{
  return *((float *)self + 22);
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::setMaximumLinearImpulse  (binary VA: 0x1725ee0)
// Original: hkpBallAndSocketConstraintData::setMaximumLinearImpulse
// ----------------------------------------------------------------------------
hkpBallAndSocketConstraintData::Self * hkpBallAndSocketConstraintData::setMaximumLinearImpulse(hkpBallAndSocketConstraintData::Self *self, float a2)
{
  *((float *)self + 17) = a2;
  *((uint8_t *)self + 85) = a2 < 3.40282e38f;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::getMaximumLinearImpulse  (binary VA: 0x1725f10)
// Original: hkpBallAndSocketConstraintData::getMaximumLinearImpulse
// ----------------------------------------------------------------------------
long double hkpBallAndSocketConstraintData::getMaximumLinearImpulse(hkpBallAndSocketConstraintData::Self *self)
{
  return *((float *)self + 17);
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::setBodyToNotify  (binary VA: 0x1725f30)
// Original: hkpBallAndSocketConstraintData::setBodyToNotify
// ----------------------------------------------------------------------------
int hkpBallAndSocketConstraintData::setBodyToNotify(hkpBallAndSocketConstraintData::Self *self, char a2)
{
  *((uint8_t *)self + 83) = 1 << a2;
  return 1 << a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::getNotifiedBodyIndex  (binary VA: 0x1725f50)
// Original: hkpBallAndSocketConstraintData::getNotifiedBodyIndex
// ----------------------------------------------------------------------------
int hkpBallAndSocketConstraintData::getNotifiedBodyIndex(hkpBallAndSocketConstraintData::Self *self)
{
  return (int)*((uint8_t *)self + 83) >> 1;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::getRuntimeInfo  (binary VA: 0x1725f60)
// Original: hkpBallAndSocketConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpBallAndSocketConstraintData::getRuntimeInfo(int a1, char a2, uint32_t *a3)
{
  uint32_t *result;

  result = a3;
  if ( a2 == 0 && *(float *)(a1 + 88) == 3.40282e38f )
  {
    *a3 = 0;
    a3[1] = 0;
  }
  else
  {
    *a3 = 24;
    a3[1] = 3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::isValid  (binary VA: 0x1725fb0)
// Original: hkpBallAndSocketConstraintData::isValid
// ----------------------------------------------------------------------------
hkpBallAndSocketConstraintData::Self * hkpBallAndSocketConstraintData::isValid(hkpBallAndSocketConstraintData::Self *self, int a2)
{
  hkpBallAndSocketConstraintData::Self *result;
  bool v3;

  result = self;
  v3 = true;
  if ( *(uint8_t *)(a2 + 82) == 0 )
    v3 = *(uint8_t *)(a2 + 66) != 0;
  *(uint8_t *)self = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::getType  (binary VA: 0x1725fd0)
// Original: hkpBallAndSocketConstraintData::getType
// ----------------------------------------------------------------------------
int hkpBallAndSocketConstraintData::getType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::setSolvingMethod  (binary VA: 0x1725fe0)
// Original: hkpBallAndSocketConstraintData::setSolvingMethod
// ----------------------------------------------------------------------------
int hkpBallAndSocketConstraintData::setSolvingMethod(int a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      *(uint8_t *)(a1 + 66) = 0;
      *(uint8_t *)(a1 + 82) = 1;
    }
  }
  else
  {
    *(uint8_t *)(a1 + 66) = 1;
    *(uint8_t *)(a1 + 82) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::getInertiaStabilizationFactor  (binary VA: 0x1726020)
// Original: hkpBallAndSocketConstraintData::getInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpBallAndSocketConstraintData::Self * hkpBallAndSocketConstraintData::getInertiaStabilizationFactor(hkpBallAndSocketConstraintData::Self *self, float *a2, float *a3)
{
  *a3 = a2[23];
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::setInertiaStabilizationFactor  (binary VA: 0x1726040)
// Original: hkpBallAndSocketConstraintData::setInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpBallAndSocketConstraintData::Self * hkpBallAndSocketConstraintData::setInertiaStabilizationFactor(hkpBallAndSocketConstraintData::Self *self, float a2, float a3)
{
  hkpBallAndSocketConstraintData::Self *result;
  float v4; // xmm0_4

  result = self;
  v4 = 0.0;
  if ( a3 >= 0.0 )
    v4 = fminf(1.0, a3);
  *(uint32_t *)self = 0;
  *(float *)(LODWORD(a2) + 92) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::Destroy  (binary VA: 0x1726080)
// Original: hkpBallAndSocketConstraintData::~hkpBallAndSocketConstraintData
// ----------------------------------------------------------------------------
void hkpBallAndSocketConstraintData::Destroy(hkpBallAndSocketConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::getConstraintInfo  (binary VA: 0x17260a0)
// Original: hkpBallAndSocketConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpBallAndSocketConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 80, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::Destroy_ea17260e0  (binary VA: 0x17260e0)
// Original: hkpBallAndSocketConstraintData::~hkpBallAndSocketConstraintData
// ----------------------------------------------------------------------------
void hkpBallAndSocketConstraintData::Destroy_ea17260e0(hkpBallAndSocketConstraintData::Self *self)
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
// Function: hkpBallAndSocketConstraintData::Construct  (binary VA: 0x1726140)
// Original: hkpBallAndSocketConstraintData::hkpBallAndSocketConstraintData
// ----------------------------------------------------------------------------
void hkpBallAndSocketConstraintData::Construct(hkpBallAndSocketConstraintData::Self *self)
{
  float v1[4];

  v1[0] = 1.0;
  *((uint32_t *)self + 17) = 2139095022;
  *((uint32_t *)self + 18) = 2139095022;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209DB08);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 3;
  *((uint16_t *)self + 32) = 23;
  *((uint8_t *)self + 66) = 0;
  *((uint32_t *)self + 19) = 1602224112;
  *((uint16_t *)self + 40) = 5;
  *((uint8_t *)self + 82) = 1;
  *((uint8_t *)self + 83) = 0;
  hkUFloat8::opAssign((hkpBallAndSocketConstraintData::Self *)((char *)self + 84), v1);
  *((uint8_t *)self + 85) = 0;
  *((uint32_t *)self + 22) = 2139095022;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::setInWorldSpace  (binary VA: 0x1726210)
// Original: hkpBallAndSocketConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpBallAndSocketConstraintData::setInWorldSpace(hkpBallAndSocketConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4)
{
  const hkTransformf::Self *result;
  float v5; // xmm0_4
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm5_4
  float v18; // xmm0_4

  result = a3;
  v5 = *(float *)a4 - *((float *)a2 + 12);
  v6 = *((float *)a4 + 1) - *((float *)a2 + 13);
  v7 = *((float *)a4 + 2) - *((float *)a2 + 14);
  v8 = (float)(*(float *)a2 * v5) + (float)(*((float *)a2 + 1) * v6);
  v9 = *((float *)a2 + 4) * v5;
  v10 = (float)((float)(v5 * *((float *)a2 + 8)) + (float)(v6 * *((float *)a2 + 9))) + (float)(*((float *)a2 + 10) * v7);
  v11 = v8 + (float)(v7 * *((float *)a2 + 2));
  *((float *)self + 9) = (float)(v9 + (float)(*((float *)a2 + 5) * v6)) + (float)(*((float *)a2 + 6) * v7);
  *((float *)self + 10) = v10;
  *((float *)self + 8) = v11;
  *((float *)self + 11) = v10;
  v12 = *(float *)a4 - *((float *)a3 + 12);
  v13 = *((float *)a4 + 1) - *((float *)a3 + 13);
  v14 = *((float *)a4 + 2) - *((float *)a3 + 14);
  v15 = (float)(*(float *)a3 * v12) + (float)(*((float *)a3 + 1) * v13);
  v16 = (float)(*((float *)a3 + 4) * v12) + (float)(*((float *)a3 + 5) * v13);
  v17 = *((float *)a3 + 6) * v14;
  v18 = (float)((float)(v12 * *((float *)result + 8)) + (float)(v13 * *((float *)result + 9)))
      + (float)(*((float *)a3 + 10) * v14);
  *((float *)self + 12) = v15 + (float)(v14 * *((float *)a3 + 2));
  *((float *)self + 13) = v16 + v17;
  *((float *)self + 14) = v18;
  *((float *)self + 15) = v18;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBallAndSocketConstraintData::setInBodySpace  (binary VA: 0x1726340)
// Original: hkpBallAndSocketConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkpBallAndSocketConstraintData::Self * hkpBallAndSocketConstraintData::setInBodySpace(hkpBallAndSocketConstraintData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  *((uint32_t *)self + 8) = *(uint32_t *)a2;
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 12) = *(uint32_t *)a3;
  *((uint32_t *)self + 13) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 14) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 15) = *((uint32_t *)a3 + 3);
  return self;
}


