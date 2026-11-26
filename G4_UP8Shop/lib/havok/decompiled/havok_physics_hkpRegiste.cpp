#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpRegiste.h"

// ----------------------------------------------------------------------------
// Function: hkpRegisterAlternateShapeTypes  (binary VA: 0x16c1900)
// Original: hkpRegisterAlternateShapeTypes
// ----------------------------------------------------------------------------
int hkpRegisterAlternateShapeTypes(hkpCollisionDispatcher::Self *a1)
{
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 0, 23);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 2, 23);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 3, 23);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 4, 23);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 1, 23);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 5, 23);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 10, 23);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 11, 23);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 24, 23);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 27, 18);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 8, 18);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 13, 18);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 15, 18);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 6, 18);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 9, 22);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 16, 22);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 17, 22);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 7, 22);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 23, 29);
  hkpCollisionDispatcher::registerAlternateShapeType(a1, 31, 28);
  return (int)(uintptr_t)(hkpCollisionDispatcher::registerAlternateShapeType(a1, 12, 28));
}


