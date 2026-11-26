#include "Core/Utils/DecompTypes.h"
#include "havok_internal_6_part01.h"

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::Destroy  (binary VA: 0x1846000)
// Original: VecArrayImplementation::~VecArrayImplementation
// ----------------------------------------------------------------------------
void VecArrayImplementation::Destroy(VecArrayImplementation::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7728);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::getType  (binary VA: 0x18a6e00)
// Original: VecArrayImplementation::getType
// ----------------------------------------------------------------------------
int VecArrayImplementation::getType(VecArrayImplementation::Self *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::getWorld  (binary VA: 0x18a6e10)
// Original: VecArrayImplementation::getWorld
// ----------------------------------------------------------------------------
int VecArrayImplementation::getWorld(VecArrayImplementation::Self *self)
{
  return *((uint32_t *)self + 6);
}


