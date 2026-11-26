#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWheelFr.h"

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::Runtime::staticClass  (binary VA: 0x1713250)
// Original: hkpWheelFrictionConstraintData::Runtime::staticClass
// ----------------------------------------------------------------------------
void * hkpWheelFrictionConstraintData::Runtime::staticClass()
{
  return &hkpWheelFrictionConstraintDataRuntimeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::Atoms::staticClass  (binary VA: 0x1713270)
// Original: hkpWheelFrictionConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpWheelFrictionConstraintData::Atoms::staticClass()
{
  return &hkpWheelFrictionConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::staticClass  (binary VA: 0x1713290)
// Original: hkpWheelFrictionConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpWheelFrictionConstraintData::staticClass()
{
  return &hkpWheelFrictionConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintAtom::Axle::staticClass  (binary VA: 0x1719bd0)
// Original: hkpWheelFrictionConstraintAtom::Axle::staticClass
// ----------------------------------------------------------------------------
void * hkpWheelFrictionConstraintAtom::Axle::staticClass()
{
  return &hkpWheelFrictionConstraintAtomAxleClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintAtom::staticClass  (binary VA: 0x1719bf0)
// Original: hkpWheelFrictionConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpWheelFrictionConstraintAtom::staticClass()
{
  return &hkpWheelFrictionConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::isValid  (binary VA: 0x1722eb0)
// Original: hkpWheelFrictionConstraintData::isValid
// ----------------------------------------------------------------------------
hkpWheelFrictionConstraintData::Self * hkpWheelFrictionConstraintData::isValid(hkpWheelFrictionConstraintData::Self *self, int a2)
{
  *(uint8_t *)self = *(uint32_t *)(a2 + 196) != 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::getType  (binary VA: 0x1722ed0)
// Original: hkpWheelFrictionConstraintData::getType
// ----------------------------------------------------------------------------
int hkpWheelFrictionConstraintData::getType()
{
  return 20;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::getRuntimeInfo  (binary VA: 0x1722ee0)
// Original: hkpWheelFrictionConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
int64_t hkpWheelFrictionConstraintData::getRuntimeInfo(int a1, char a2, uint32_t *a3)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(a3);
  HIDWORD(result) = a2 != 0;
  a3[1] = 0;
  *a3 = HIDWORD(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::Destroy  (binary VA: 0x1722f00)
// Original: hkpWheelFrictionConstraintData::~hkpWheelFrictionConstraintData
// ----------------------------------------------------------------------------
void hkpWheelFrictionConstraintData::Destroy(hkpWheelFrictionConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::getConstraintInfo  (binary VA: 0x1722f20)
// Original: hkpWheelFrictionConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpWheelFrictionConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 184, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::Destroy_ea1722f60  (binary VA: 0x1722f60)
// Original: hkpWheelFrictionConstraintData::~hkpWheelFrictionConstraintData
// ----------------------------------------------------------------------------
void hkpWheelFrictionConstraintData::Destroy_ea1722f60(hkpWheelFrictionConstraintData::Self *self)
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
// Function: hkpWheelFrictionConstraintData::init  (binary VA: 0x1722fc0)
// Original: hkpWheelFrictionConstraintData::init
// ----------------------------------------------------------------------------
hkpWheelFrictionConstraintData::Self * hkpWheelFrictionConstraintData::init(hkpWheelFrictionConstraintData::Self *self, hkpWheelFrictionConstraintAtom::Axle::Self *a2, float a3)
{
  *((float *)self + 44) = a3;
  *((uint32_t *)self + 49) = (uint32_t)(uintptr_t)(a2);
  *((uint8_t *)self + 163) = 1;
  *((uint8_t *)self + 164) = 2;
  *((uint32_t *)self + 42) = 2139095022;
  *((uint8_t *)self + 162) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::setInWorldSpace  (binary VA: 0x1723000)
// Original: hkpWheelFrictionConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpWheelFrictionConstraintData::setInWorldSpace(hkpWheelFrictionConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6)
{
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v13[7];

  v6 = *((float *)a6 + 1);
  v7 = *((float *)a6 + 2);
  v8 = *(float *)a5;
  v9 = *((float *)a5 + 2) * *(float *)a6;
  v10 = *(float *)a6 * *((float *)a5 + 1);
  v11 = (float)(*((float *)a5 + 1) * v7) - (float)(*((float *)a5 + 2) * v6);
  v13[3] = 0.0;
  v13[0] = v11;
  v13[1] = v9 - (float)(v7 * v8);
  v13[2] = (float)(v8 * v6) - v10;
  hkVector4f::setRotatedInverseDir((hkpWheelFrictionConstraintData::Self *)((char *)self + 32), a2, (const hkVector4f::Self *)v13);
  hkVector4f::setRotatedInverseDir((hkpWheelFrictionConstraintData::Self *)((char *)self + 48), a2, a5);
  hkVector4f::setRotatedInverseDir((hkpWheelFrictionConstraintData::Self *)((char *)self + 64), a2, a6);
  hkVector4f::setTransformedInversePos((hkpWheelFrictionConstraintData::Self *)((char *)self + 80), a2, a4);
  hkVector4f::setRotatedInverseDir((hkpWheelFrictionConstraintData::Self *)((char *)self + 96), a3, (const hkVector4f::Self *)v13);
  hkVector4f::setRotatedInverseDir((hkpWheelFrictionConstraintData::Self *)((char *)self + 112), a3, a5);
  hkVector4f::setRotatedInverseDir((hkpWheelFrictionConstraintData::Self *)((char *)self + 128), a3, a6);
  return hkVector4f::setTransformedInversePos((hkpWheelFrictionConstraintData::Self *)((char *)self + 144), a3, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::setMaxFrictionForce  (binary VA: 0x1723160)
// Original: hkpWheelFrictionConstraintData::setMaxFrictionForce
// ----------------------------------------------------------------------------
hkpWheelFrictionConstraintData::Self * hkpWheelFrictionConstraintData::setMaxFrictionForce(hkpWheelFrictionConstraintData::Self *self, float a2)
{
  *((float *)self + 42) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::setTorque  (binary VA: 0x1723180)
// Original: hkpWheelFrictionConstraintData::setTorque
// ----------------------------------------------------------------------------
hkpWheelFrictionConstraintData::Self * hkpWheelFrictionConstraintData::setTorque(hkpWheelFrictionConstraintData::Self *self, float a2)
{
  *((float *)self + 43) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::getSpinVelocity  (binary VA: 0x17231a0)
// Original: hkpWheelFrictionConstraintData::getSpinVelocity
// ----------------------------------------------------------------------------
long double hkpWheelFrictionConstraintData::getSpinVelocity(float **self)
{
  return **(self + 49);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::setSpinVelocity  (binary VA: 0x17231c0)
// Original: hkpWheelFrictionConstraintData::setSpinVelocity
// ----------------------------------------------------------------------------
float * hkpWheelFrictionConstraintData::setSpinVelocity(hkpWheelFrictionConstraintData::Self *self, float a2)
{
  float *result;

  result = *((float **)self + 49);
  *result = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::setInvInertia  (binary VA: 0x17231e0)
// Original: hkpWheelFrictionConstraintData::setInvInertia
// ----------------------------------------------------------------------------
int hkpWheelFrictionConstraintData::setInvInertia(hkpWheelFrictionConstraintData::Self *self, float a2)
{
  int result;

  result = *((uint32_t *)self + 49);
  *(float *)(result + 20) = a2;
  if ( a2 == 0.0 )
    *(uint32_t *)(result + 24) = 0;
  else
    *(float *)(result + 24) = 1.0 / a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::setImpulseScaling  (binary VA: 0x1723230)
// Original: hkpWheelFrictionConstraintData::setImpulseScaling
// ----------------------------------------------------------------------------
int hkpWheelFrictionConstraintData::setImpulseScaling(hkpWheelFrictionConstraintData::Self *self, float a2, float a3)
{
  int result;

  result = *((uint32_t *)self + 49);
  *(float *)(result + 28) = a2;
  *(float *)(result + 32) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::getForwardFrictionImpulse  (binary VA: 0x1723260)
// Original: hkpWheelFrictionConstraintData::getForwardFrictionImpulse
// ----------------------------------------------------------------------------
long double hkpWheelFrictionConstraintData::getForwardFrictionImpulse(hkpWheelFrictionConstraintData::Self *self)
{
  return *((float *)self + 45);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::getSideFrictionImpulse  (binary VA: 0x1723280)
// Original: hkpWheelFrictionConstraintData::getSideFrictionImpulse
// ----------------------------------------------------------------------------
long double hkpWheelFrictionConstraintData::getSideFrictionImpulse(hkpWheelFrictionConstraintData::Self *self)
{
  return *((float *)self + 46);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::getForwardSlipImpulse  (binary VA: 0x17232a0)
// Original: hkpWheelFrictionConstraintData::getForwardSlipImpulse
// ----------------------------------------------------------------------------
long double hkpWheelFrictionConstraintData::getForwardSlipImpulse(hkpWheelFrictionConstraintData::Self *self)
{
  return *((float *)self + 47);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::getSideSlipImpulse  (binary VA: 0x17232c0)
// Original: hkpWheelFrictionConstraintData::getSideSlipImpulse
// ----------------------------------------------------------------------------
long double hkpWheelFrictionConstraintData::getSideSlipImpulse(hkpWheelFrictionConstraintData::Self *self)
{
  return *((float *)self + 48);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelFrictionConstraintData::resetSolverData  (binary VA: 0x17232e0)
// Original: hkpWheelFrictionConstraintData::resetSolverData
// ----------------------------------------------------------------------------
hkpWheelFrictionConstraintData::Self * hkpWheelFrictionConstraintData::resetSolverData(hkpWheelFrictionConstraintData::Self *self)
{
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 0;
  return self;
}


