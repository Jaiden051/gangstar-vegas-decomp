#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPulleyC.h"

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintData::Atoms::staticClass  (binary VA: 0x1712fa0)
// Original: hkpPulleyConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpPulleyConstraintData::Atoms::staticClass()
{
  return &hkpPulleyConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintData::staticClass  (binary VA: 0x1712fc0)
// Original: hkpPulleyConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpPulleyConstraintData::staticClass()
{
  return &hkpPulleyConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintAtom::staticClass  (binary VA: 0x1719ab0)
// Original: hkpPulleyConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpPulleyConstraintAtom::staticClass()
{
  return &hkpPulleyConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintData::getRuntimeInfo  (binary VA: 0x171b620)
// Original: hkpPulleyConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
int64_t hkpPulleyConstraintData::getRuntimeInfo(int a1, char a2, uint64_t *a3)
{
  int64_t result; // rax

  LODWORD(result) = a2 != 0 ? 8 : 0;
  HIDWORD(result) = a2 != 0;
  *a3 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintData::isValid  (binary VA: 0x171b650)
// Original: hkpPulleyConstraintData::isValid
// ----------------------------------------------------------------------------
hkpPulleyConstraintData::Self * hkpPulleyConstraintData::isValid(hkpPulleyConstraintData::Self *self, int a2)
{
  hkpPulleyConstraintData::Self *result;

  result = self;
  *(uint8_t *)self = *(float *)(a2 + 112) > 0.0 && *(float *)(a2 + 116) > 0.0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintData::getType  (binary VA: 0x171b680)
// Original: hkpPulleyConstraintData::getType
// ----------------------------------------------------------------------------
int hkpPulleyConstraintData::getType()
{
  return 15;
}

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintData::Destroy  (binary VA: 0x171b690)
// Original: hkpPulleyConstraintData::~hkpPulleyConstraintData
// ----------------------------------------------------------------------------
void hkpPulleyConstraintData::Destroy(hkpPulleyConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintData::getConstraintInfo  (binary VA: 0x171b6b0)
// Original: hkpPulleyConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
int hkpPulleyConstraintData::getConstraintInfo(int a1, int a2)
{
  return (int)(uintptr_t)(hkpConstraintData::getConstraintInfoUtil(a1 + 16, 112, a2));
}

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintData::Destroy_ea171b6f0  (binary VA: 0x171b6f0)
// Original: hkpPulleyConstraintData::~hkpPulleyConstraintData
// ----------------------------------------------------------------------------
void hkpPulleyConstraintData::Destroy_ea171b6f0(hkpPulleyConstraintData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPulleyConstraintData::Construct  (binary VA: 0x171b750)
// Original: hkpPulleyConstraintData::hkpPulleyConstraintData
// ----------------------------------------------------------------------------
void hkpPulleyConstraintData::Construct(hkpPulleyConstraintData::Self *self)
{
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D228);
  *((uint16_t *)self + 8) = 3;
  *((uint16_t *)self + 32) = 20;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
}


