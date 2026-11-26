#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpUserCon.h"

// ----------------------------------------------------------------------------
// Function: hkpUserConvexRadiusBuilder::Destroy  (binary VA: 0x1854450)
// Original: hkpUserConvexRadiusBuilder::~hkpUserConvexRadiusBuilder
// ----------------------------------------------------------------------------
void hkpUserConvexRadiusBuilder::Destroy(hkpUserConvexRadiusBuilder::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A43E8);
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
// Function: hkpUserConvexRadiusBuilder::Destroy_ea1854630  (binary VA: 0x1854630)
// Original: hkpUserConvexRadiusBuilder::~hkpUserConvexRadiusBuilder
// ----------------------------------------------------------------------------
void hkpUserConvexRadiusBuilder::Destroy_ea1854630(hkpUserConvexRadiusBuilder::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A43E8);
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
// Function: hkpUserConvexRadiusBuilder::registerUserConvexRadiusDisplayBuilder  (binary VA: 0x1856680)
// Original: hkpUserConvexRadiusBuilder::registerUserConvexRadiusDisplayBuilder
// ----------------------------------------------------------------------------
void hkpUserConvexRadiusBuilder::registerUserConvexRadiusDisplayBuilder(uint32_t *a1, int a2, int a3)
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


