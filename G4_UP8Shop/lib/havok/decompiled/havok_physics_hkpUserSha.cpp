#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpUserSha.h"

// ----------------------------------------------------------------------------
// Function: hkpUserShapeDisplayBuilder::Destroy  (binary VA: 0x181b5e0)
// Original: hkpUserShapeDisplayBuilder::~hkpUserShapeDisplayBuilder
// ----------------------------------------------------------------------------
void hkpUserShapeDisplayBuilder::Destroy(hkpUserShapeDisplayBuilder::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A13D0);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      8 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpUserShapeDisplayBuilder::Destroy_ea181b820  (binary VA: 0x181b820)
// Original: hkpUserShapeDisplayBuilder::~hkpUserShapeDisplayBuilder
// ----------------------------------------------------------------------------
void hkpUserShapeDisplayBuilder::Destroy_ea181b820(hkpUserShapeDisplayBuilder::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A13D0);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      8 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpUserShapeDisplayBuilder::registerUserShapeDisplayBuilder  (binary VA: 0x1820ae0)
// Original: hkpUserShapeDisplayBuilder::registerUserShapeDisplayBuilder
// ----------------------------------------------------------------------------
void hkpUserShapeDisplayBuilder::registerUserShapeDisplayBuilder(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;

  v3 = a1[3];
  if ( v3 > 0 )
  {
    v4 = a1[2];
    if ( *(uint32_t *)(v4 + 4) == a3 )
      return;
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( *(uint32_t *)(v4 + 8 * v5 + 4) == a3 )
        return;
    }
  }
  if ( (a1[4] & 0x3FFFFFFF) == v3 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 2), 8, v7);
    v3 = a1[3];
  }
  v6 = (uint32_t *)(a1[2] + 8 * v3);
  *v6 = a2;
  v6[1] = a3;
  ++a1[3];
}

// ----------------------------------------------------------------------------
// Function: hkpUserShapePhantomTypeIdentifier::Destroy  (binary VA: 0x184a370)
// Original: hkpUserShapePhantomTypeIdentifier::~hkpUserShapePhantomTypeIdentifier
// ----------------------------------------------------------------------------
void hkpUserShapePhantomTypeIdentifier::Destroy(hkpUserShapePhantomTypeIdentifier::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3D48);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpUserShapePhantomTypeIdentifier::Destroy_ea184a480  (binary VA: 0x184a480)
// Original: hkpUserShapePhantomTypeIdentifier::~hkpUserShapePhantomTypeIdentifier
// ----------------------------------------------------------------------------
void hkpUserShapePhantomTypeIdentifier::Destroy_ea184a480(hkpUserShapePhantomTypeIdentifier::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3D48);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpUserShapePhantomTypeIdentifier::registerShapePhantomType  (binary VA: 0x184afd0)
// Original: hkpUserShapePhantomTypeIdentifier::registerShapePhantomType
// ----------------------------------------------------------------------------
int hkpUserShapePhantomTypeIdentifier::registerShapePhantomType(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[3];
  if ( v2 == (a1[4] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 2), 4, v4);
    v2 = a1[3];
  }
  result = a1[2];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpUserShapeHashUtil::Destroy  (binary VA: 0x184ece0)
// Original: hkpUserShapeHashUtil::~hkpUserShapeHashUtil
// ----------------------------------------------------------------------------
void hkpUserShapeHashUtil::Destroy(hkpUserShapeHashUtil::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4288);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      8 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpUserShapeHashUtil::Destroy_ea184edf0  (binary VA: 0x184edf0)
// Original: hkpUserShapeHashUtil::~hkpUserShapeHashUtil
// ----------------------------------------------------------------------------
void hkpUserShapeHashUtil::Destroy_ea184edf0(hkpUserShapeHashUtil::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4288);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      8 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpUserShapeHashUtil::registerUserShapeHashFunction  (binary VA: 0x1850340)
// Original: hkpUserShapeHashUtil::registerUserShapeHashFunction
// ----------------------------------------------------------------------------
void hkpUserShapeHashUtil::registerUserShapeHashFunction(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;

  v3 = a1[3];
  if ( v3 > 0 )
  {
    v4 = a1[2];
    if ( *(uint32_t *)(v4 + 4) == a3 )
      return;
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( *(uint32_t *)(v4 + 8 * v5 + 4) == a3 )
        return;
    }
  }
  if ( v3 == (a1[4] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 2), 8, v7);
    v3 = a1[3];
  }
  v6 = (uint32_t *)(a1[2] + 8 * v3);
  *v6 = a2;
  v6[1] = a3;
  ++a1[3];
}


