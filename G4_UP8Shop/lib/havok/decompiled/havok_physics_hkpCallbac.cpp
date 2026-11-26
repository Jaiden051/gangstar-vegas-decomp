#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCallbac.h"

// ----------------------------------------------------------------------------
// Function: hkpCallbackConstraintMotor::staticClass  (binary VA: 0x1714540)
// Original: hkpCallbackConstraintMotor::staticClass
// ----------------------------------------------------------------------------
void * hkpCallbackConstraintMotor::staticClass()
{
  return &hkpCallbackConstraintMotorClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCallbackConstraintMotor::Destroy  (binary VA: 0x1724450)
// Original: hkpCallbackConstraintMotor::~hkpCallbackConstraintMotor
// ----------------------------------------------------------------------------
void hkpCallbackConstraintMotor::Destroy(hkpCallbackConstraintMotor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCallbackConstraintMotor::Destroy_ea1724470  (binary VA: 0x1724470)
// Original: hkpCallbackConstraintMotor::~hkpCallbackConstraintMotor
// ----------------------------------------------------------------------------
void hkpCallbackConstraintMotor::Destroy_ea1724470(hkpCallbackConstraintMotor::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 40;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCallbackConstraintMotor::clone  (binary VA: 0x17244d0)
// Original: hkpCallbackConstraintMotor::clone
// ----------------------------------------------------------------------------
int hkpCallbackConstraintMotor::clone(hkpCallbackConstraintMotor::Self *self)
{
  int address;
  int result;
  int v3; // xmm0_4

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             40);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209C2C8);
  *(uint8_t *)(result + 8) = *((uint8_t *)self + 8);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209C2E8);
  *(uint32_t *)(result + 12) = *((uint32_t *)self + 3);
  v3 = *((uint32_t *)self + 4);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209D9C8);
  *(uint32_t *)(result + 16) = v3;
  *(uint32_t *)(result + 20) = *((uint32_t *)self + 5);
  *(uint32_t *)(result + 24) = *((uint32_t *)self + 6);
  *(uint32_t *)(result + 28) = *((uint32_t *)self + 7);
  *(uint32_t *)(result + 32) = *((uint32_t *)self + 8);
  *(uint32_t *)(result + 36) = *((uint32_t *)self + 9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCallbackConstraintMotor::Construct  (binary VA: 0x1724570)
// Original: hkpCallbackConstraintMotor::hkpCallbackConstraintMotor
// ----------------------------------------------------------------------------
int hkpCallbackConstraintMotor::Construct(int a1, int a2, int a3)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209D9C8);
  *(uint32_t *)(a1 + 24) = a2;
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)(a1 + 12) = -915135488;
  *(uint32_t *)(a1 + 16) = 1232348160;
  *(uint8_t *)(a1 + 8) = 4;
  *(uint32_t *)(a1 + 20) = a3;
  return a1;
}


