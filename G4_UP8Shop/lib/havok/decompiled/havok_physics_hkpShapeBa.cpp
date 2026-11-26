#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShapeBa.h"

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::Destroy  (binary VA: 0x16bbd00)
// Original: hkpShapeBase::~hkpShapeBase
// ----------------------------------------------------------------------------
void hkpShapeBase::Destroy(hkpShapeBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::getAabb  (binary VA: 0x16bbd20)
// Original: hkpShapeBase::getAabb
// ----------------------------------------------------------------------------
void hkpShapeBase::getAabb()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::castRay  (binary VA: 0x16bbd30)
// Original: hkpShapeBase::castRay
// ----------------------------------------------------------------------------
uint8_t * hkpShapeBase::castRay(uint8_t *a1)
{
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::castRayWithCollector  (binary VA: 0x16bbd40)
// Original: hkpShapeBase::castRayWithCollector
// ----------------------------------------------------------------------------
void hkpShapeBase::castRayWithCollector()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::castRayBundle  (binary VA: 0x16bbd50)
// Original: hkpShapeBase::castRayBundle
// ----------------------------------------------------------------------------
uint32_t * hkpShapeBase::castRayBundle(uint32_t *a1)
{
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::getSupportingVertex  (binary VA: 0x16bbd60)
// Original: hkpShapeBase::getSupportingVertex
// ----------------------------------------------------------------------------
void hkpShapeBase::getSupportingVertex()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::convertVertexIdsToVertices  (binary VA: 0x16bbd70)
// Original: hkpShapeBase::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
void hkpShapeBase::convertVertexIdsToVertices()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::getCentre  (binary VA: 0x16bbd80)
// Original: hkpShapeBase::getCentre
// ----------------------------------------------------------------------------
void hkpShapeBase::getCentre()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::getNumCollisionSpheres  (binary VA: 0x16bbd90)
// Original: hkpShapeBase::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpShapeBase::getNumCollisionSpheres()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::getCollisionSpheres  (binary VA: 0x16bbda0)
// Original: hkpShapeBase::getCollisionSpheres
// ----------------------------------------------------------------------------
int hkpShapeBase::getCollisionSpheres()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::weldContactPoint  (binary VA: 0x16bbdb0)
// Original: hkpShapeBase::weldContactPoint
// ----------------------------------------------------------------------------
int hkpShapeBase::weldContactPoint()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeBase::Destroy_ea16bbdc0  (binary VA: 0x16bbdc0)
// Original: hkpShapeBase::~hkpShapeBase
// ----------------------------------------------------------------------------
void hkpShapeBase::Destroy_ea16bbdc0(hkpShapeBase::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}



// ============================================================================
// Address:   0x16bbe20 (size: 65 bytes)
// Symbol:    _ZN12hkpShapeBaseC2E24hkFinishLoadedObjectFlag
// Demangled: hkpShapeBase::hkpShapeBase(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN12hkpShapeBaseC1E24hkFinishLoadedObjectFlag'
void (**hkpShapeBase::hkpShapeBase(int a1, int a2))(hkpShapeBase::Self * self)
{
  void (**result)(hkpShapeBase::Self *);

  hkcdShape::Construct((uint32_t *)a1);
  result = (void (**)(hkpShapeBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209A5C8));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209A5C8);
  if ( a2 != 0 )
    *(uint8_t *)(a1 + 8) = 34;
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpShapeBase::staticClass  (binary VA: 0x16bffe0)
// Original: hkpShapeBase::staticClass
// ----------------------------------------------------------------------------
void * hkpShapeBase::staticClass()
{
  return &hkpShapeBaseClass;
}


