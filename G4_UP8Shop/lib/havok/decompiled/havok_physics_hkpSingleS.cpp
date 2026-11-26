#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSingleS.h"

// ----------------------------------------------------------------------------
// Function: hkpSingleShapeContainer::getNumChildShapes  (binary VA: 0x1697020)
// Original: hkpSingleShapeContainer::getNumChildShapes
// ----------------------------------------------------------------------------
int hkpSingleShapeContainer::getNumChildShapes()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleShapeContainer::getFirstKey  (binary VA: 0x1697030)
// Original: hkpSingleShapeContainer::getFirstKey
// ----------------------------------------------------------------------------
int hkpSingleShapeContainer::getFirstKey()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleShapeContainer::getNextKey  (binary VA: 0x1697040)
// Original: hkpSingleShapeContainer::getNextKey
// ----------------------------------------------------------------------------
int hkpSingleShapeContainer::getNextKey()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleShapeContainer::getChildShape  (binary VA: 0x16970a0)
// Original: hkpSingleShapeContainer::getChildShape
// ----------------------------------------------------------------------------
int hkpSingleShapeContainer::getChildShape(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkpSingleShapeContainer::Destroy  (binary VA: 0x1697100)
// Original: hkpSingleShapeContainer::~hkpSingleShapeContainer
// ----------------------------------------------------------------------------
void hkpSingleShapeContainer::Destroy(hkpSingleShapeContainer::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20994A8);
}

// ----------------------------------------------------------------------------
// Function: hkpSingleShapeContainer::Destroy_ea1697180  (binary VA: 0x1697180)
// Original: hkpSingleShapeContainer::~hkpSingleShapeContainer
// ----------------------------------------------------------------------------
void hkpSingleShapeContainer::Destroy_ea1697180(hkpSingleShapeContainer::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int address;

  v1 = *((uint32_t *)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20994A8);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpSingleShapeContainer::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    8);
}

// ----------------------------------------------------------------------------
// Function: hkpSingleShapeContainer::staticClass  (binary VA: 0x16b47a0)
// Original: hkpSingleShapeContainer::staticClass
// ----------------------------------------------------------------------------
void * hkpSingleShapeContainer::staticClass()
{
  return &hkpSingleShapeContainerClass;
}


