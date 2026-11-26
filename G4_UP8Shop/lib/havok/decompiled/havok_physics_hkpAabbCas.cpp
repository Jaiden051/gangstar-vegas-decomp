#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpAabbCas.h"

// ----------------------------------------------------------------------------
// Function: hkpAabbCastCollector::Destroy  (binary VA: 0x16ee5a0)
// Original: hkpAabbCastCollector::~hkpAabbCastCollector
// ----------------------------------------------------------------------------
void hkpAabbCastCollector::Destroy(hkpAabbCastCollector::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_209B900);
}

// ----------------------------------------------------------------------------
// Function: hkpAabbCastCollector::Destroy_ea16eeab0  (binary VA: 0x16eeab0)
// Original: hkpAabbCastCollector::~hkpAabbCastCollector
// ----------------------------------------------------------------------------
void hkpAabbCastCollector::Destroy_ea16eeab0(hkpAabbCastCollector::Self *self)
{
  int address;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_209B900);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpAabbCastCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    8);
}


