#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpRotatio.h"

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::Atoms::staticClass  (binary VA: 0x1713570)
// Original: hkpRotationalConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpRotationalConstraintData::Atoms::staticClass()
{
  return &hkpRotationalConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::staticClass  (binary VA: 0x1713590)
// Original: hkpRotationalConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpRotationalConstraintData::staticClass()
{
  return &hkpRotationalConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::getRuntimeInfo  (binary VA: 0x171d9a0)
// Original: hkpRotationalConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
int hkpRotationalConstraintData::getRuntimeInfo(int a1, char a2, uint32_t *a3)
{
  int result;

  *a3 = a2 != 0 ? 0x18 : 0;
  result = a2 == 0 ? 0 : 3;
  a3[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::getType  (binary VA: 0x171d9d0)
// Original: hkpRotationalConstraintData::getType
// ----------------------------------------------------------------------------
int hkpRotationalConstraintData::getType()
{
  return 16;
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::Destroy  (binary VA: 0x171d9e0)
// Original: hkpRotationalConstraintData::~hkpRotationalConstraintData
// ----------------------------------------------------------------------------
void hkpRotationalConstraintData::Destroy(hkpRotationalConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::getConstraintInfo  (binary VA: 0x171da00)
// Original: hkpRotationalConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpRotationalConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 128, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::isValid  (binary VA: 0x171da40)
// Original: hkpRotationalConstraintData::isValid
// ----------------------------------------------------------------------------
hkpRotationalConstraintData::Self * hkpRotationalConstraintData::isValid(hkpRotationalConstraintData::Self *self, int a2)
{
  bool isOrthonormal;
  bool v3;

  isOrthonormal = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 32), 0.00001f);
  v3 = false;
  if ( isOrthonormal )
    v3 = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 80), 0.00001f);
  *(uint8_t *)self = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::Destroy_ea171daa0  (binary VA: 0x171daa0)
// Original: hkpRotationalConstraintData::~hkpRotationalConstraintData
// ----------------------------------------------------------------------------
void hkpRotationalConstraintData::Destroy_ea171daa0(hkpRotationalConstraintData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 144;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::Construct  (binary VA: 0x171db00)
// Original: hkpRotationalConstraintData::hkpRotationalConstraintData
// ----------------------------------------------------------------------------
void hkpRotationalConstraintData::Construct(hkpRotationalConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D528);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 4;
  *((uint16_t *)self + 64) = 13;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 20) = 1065353216;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 1065353216;
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
  *((uint8_t *)self + 130) = 0;
  *((uint8_t *)self + 131) = 3;
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::setInWorldSpace  (binary VA: 0x171dc30)
// Original: hkpRotationalConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
hkRotationf::Self * hkpRotationalConstraintData::setInWorldSpace(hkpRotationalConstraintData::Self *self, const hkQuaternionf::Self *a2, const hkQuaternionf::Self *a3)
{
  hkRotationf::set((hkpRotationalConstraintData::Self *)((char *)self + 32), a2);
  return hkRotationf::set((hkpRotationalConstraintData::Self *)((char *)self + 80), a3);
}

// ----------------------------------------------------------------------------
// Function: hkpRotationalConstraintData::setInBodySpace  (binary VA: 0x171dc80)
// Original: hkpRotationalConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkRotationf::Self * hkpRotationalConstraintData::setInBodySpace(hkpRotationalConstraintData::Self *self, const hkQuaternionf::Self *a2)
{
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  return hkRotationf::set((hkpRotationalConstraintData::Self *)((char *)self + 80), a2);
}


