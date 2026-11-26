#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpActiveC.h"

// ----------------------------------------------------------------------------
// Function: hkpActiveContactPointViewer::getProcessTag  (binary VA: 0x183daa0)
// Original: hkpActiveContactPointViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpActiveContactPointViewer::getProcessTag()
{
  return hkpActiveContactPointViewer::s_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpActiveContactPointViewer::getIslands  (binary VA: 0x183dad0)
// Original: hkpActiveContactPointViewer::getIslands
// ----------------------------------------------------------------------------
char * hkpActiveContactPointViewer::getIslands(hkpActiveContactPointViewer::Self *self, hkpWorld::Self *a2)
{
  return (char *)a2 + 40;
}

// ----------------------------------------------------------------------------
// Function: hkpActiveContactPointViewer::Destroy  (binary VA: 0x183dae0)
// Original: hkpActiveContactPointViewer::~hkpActiveContactPointViewer
// ----------------------------------------------------------------------------
void hkpActiveContactPointViewer::Destroy(hkpActiveContactPointViewer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3408);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3448);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A3474);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A348C);
  hkpContactPointViewer::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpActiveContactPointViewer::Destroy_ea183db60  (binary VA: 0x183db60)
// Original: hkpActiveContactPointViewer::~hkpActiveContactPointViewer
// ----------------------------------------------------------------------------
void hkpActiveContactPointViewer::Destroy_ea183db60(hkpActiveContactPointViewer::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3408);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3448);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A3474);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A348C);
  hkpContactPointViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 52;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpActiveContactPointViewer::registerViewer  (binary VA: 0x183dc10)
// Original: hkpActiveContactPointViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpActiveContactPointViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Contact Points (Active)",
             hkpActiveContactPointViewer::create);
  hkpActiveContactPointViewer::s_tag = result;
  return result;
}



// ============================================================================
// Address:   0x183dc60 (size: 89 bytes)
// Symbol:    _ZN27hkpActiveContactPointViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpActiveContactPointViewer::hkpActiveContactPointViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN27hkpActiveContactPointViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpActiveContactPointViewer::hkpActiveContactPointViewer(
        uint32_t *a1,
        int a2))(hkpActiveContactPointViewer::Self * self)
{
  hkpContactPointViewer::Construct(a1, a2, -16776961);
  *a1 = ((uint32_t)(uintptr_t)&off_20A3408);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A3448);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A3474);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A348C);
  return (void (**)(hkpActiveContactPointViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A348C));
}
// ----------------------------------------------------------------------------
// Function: hkpActiveContactPointViewer::create  (binary VA: 0x183dcc0)
// Original: hkpActiveContactPointViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpActiveContactPointViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   52);
  hkpActiveContactPointViewer::hkpActiveContactPointViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}


