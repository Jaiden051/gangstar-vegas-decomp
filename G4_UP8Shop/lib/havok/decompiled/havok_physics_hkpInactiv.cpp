#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpInactiv.h"

// ----------------------------------------------------------------------------
// Function: hkpInactiveContactPointViewer::getProcessTag  (binary VA: 0x183ab60)
// Original: hkpInactiveContactPointViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpInactiveContactPointViewer::getProcessTag()
{
  return hkpInactiveContactPointViewer::s_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpInactiveContactPointViewer::getIslands  (binary VA: 0x183ab90)
// Original: hkpInactiveContactPointViewer::getIslands
// ----------------------------------------------------------------------------
char * hkpInactiveContactPointViewer::getIslands(hkpInactiveContactPointViewer::Self *self, hkpWorld::Self *a2)
{
  return (char *)a2 + 52;
}

// ----------------------------------------------------------------------------
// Function: hkpInactiveContactPointViewer::Destroy  (binary VA: 0x183aba0)
// Original: hkpInactiveContactPointViewer::~hkpInactiveContactPointViewer
// ----------------------------------------------------------------------------
void hkpInactiveContactPointViewer::Destroy(hkpInactiveContactPointViewer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3168);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A31A8);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A31D4);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A31EC);
  hkpContactPointViewer::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpInactiveContactPointViewer::Destroy_ea183ac20  (binary VA: 0x183ac20)
// Original: hkpInactiveContactPointViewer::~hkpInactiveContactPointViewer
// ----------------------------------------------------------------------------
void hkpInactiveContactPointViewer::Destroy_ea183ac20(hkpInactiveContactPointViewer::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3168);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A31A8);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A31D4);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A31EC);
  hkpContactPointViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 52;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpInactiveContactPointViewer::registerViewer  (binary VA: 0x183acd0)
// Original: hkpInactiveContactPointViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpInactiveContactPointViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Contact Points (Inactive)",
             hkpInactiveContactPointViewer::create);
  hkpInactiveContactPointViewer::s_tag = result;
  return result;
}



// ============================================================================
// Address:   0x183ad20 (size: 89 bytes)
// Symbol:    _ZN29hkpInactiveContactPointViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpInactiveContactPointViewer::hkpInactiveContactPointViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN29hkpInactiveContactPointViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpInactiveContactPointViewer::hkpInactiveContactPointViewer(
        uint32_t *a1,
        int a2))(hkpInactiveContactPointViewer::Self * self)
{
  hkpContactPointViewer::Construct(a1, a2, -16744448);
  *a1 = ((uint32_t)(uintptr_t)&off_20A3168);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A31A8);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A31D4);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A31EC);
  return (void (**)(hkpInactiveContactPointViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A31EC));
}
// ----------------------------------------------------------------------------
// Function: hkpInactiveContactPointViewer::create  (binary VA: 0x183ad80)
// Original: hkpInactiveContactPointViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpInactiveContactPointViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   52);
  hkpInactiveContactPointViewer::hkpInactiveContactPointViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}


