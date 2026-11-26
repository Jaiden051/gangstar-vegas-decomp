#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSimpleB.h"

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::staticClass  (binary VA: 0x172dc80)
// Original: hkpSimpleBreakableMaterial::staticClass
// ----------------------------------------------------------------------------
void * hkpSimpleBreakableMaterial::staticClass()
{
  return &hkpSimpleBreakableMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::getClassType  (binary VA: 0x173fa10)
// Original: hkpSimpleBreakableMaterial::getClassType
// ----------------------------------------------------------------------------
void * hkpSimpleBreakableMaterial::getClassType()
{
  return &hkpSimpleBreakableMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::setDefaultMapping  (binary VA: 0x173fa30)
// Original: hkpSimpleBreakableMaterial::setDefaultMapping
// ----------------------------------------------------------------------------
int hkpSimpleBreakableMaterial::setDefaultMapping(hkpSimpleBreakableMaterial::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 3);
  LOBYTE(v1) = v1 & 0xF;
  result = v1 | 0x10;
  *((uint32_t *)self + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::getShapeKeyMaterial  (binary VA: 0x173fa40)
// Original: hkpSimpleBreakableMaterial::getShapeKeyMaterial
// ----------------------------------------------------------------------------
hkpSimpleBreakableMaterial::Self * hkpSimpleBreakableMaterial::getShapeKeyMaterial(hkpSimpleBreakableMaterial::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::Destroy  (binary VA: 0x173fa50)
// Original: hkpSimpleBreakableMaterial::~hkpSimpleBreakableMaterial
// ----------------------------------------------------------------------------
void hkpSimpleBreakableMaterial::Destroy(hkpSimpleBreakableMaterial::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F208);
  hkpBreakableMaterial::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::Destroy_ea173fa80  (binary VA: 0x173fa80)
// Original: hkpSimpleBreakableMaterial::~hkpSimpleBreakableMaterial
// ----------------------------------------------------------------------------
void hkpSimpleBreakableMaterial::Destroy_ea173fa80(hkpSimpleBreakableMaterial::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F208);
  hkpBreakableMaterial::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::Construct  (binary VA: 0x173faf0)
// Original: hkpSimpleBreakableMaterial::hkpSimpleBreakableMaterial
// ----------------------------------------------------------------------------
void hkpSimpleBreakableMaterial::Construct(hkpSimpleBreakableMaterial::Self *self, float a2)
{
  *((float *)self + 2) = a2;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 3) = 17;
  *((uint32_t *)self + 4) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F208);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::Construct  (binary VA: 0x173fb30)
// Original: hkpSimpleBreakableMaterial::hkpSimpleBreakableMaterial
// ----------------------------------------------------------------------------
uint32_t * hkpSimpleBreakableMaterial::Construct(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_209F208);
  if ( a2 != 0 )
    a1[3] = 17;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::Construct  (binary VA: 0x173fb60)
// Original: hkpSimpleBreakableMaterial::hkpSimpleBreakableMaterial
// ----------------------------------------------------------------------------
void hkpSimpleBreakableMaterial::Construct(hkpSimpleBreakableMaterial::Self *self, const hkpSimpleBreakableMaterial::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EDE8);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F208);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleBreakableMaterial::duplicate  (binary VA: 0x173fbb0)
// Original: hkpSimpleBreakableMaterial::duplicate
// ----------------------------------------------------------------------------
hkpSimpleBreakableMaterial::Self * hkpSimpleBreakableMaterial::duplicate(hkpSimpleBreakableMaterial::Self *self)
{
  int address;
  hkpSimpleBreakableMaterial::Self *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpSimpleBreakableMaterial::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                       *(uint32_t *)(*(uint32_t *)address + 44),
                                       20);
  hkpSimpleBreakableMaterial::Construct(v2, self);
  return v2;
}


