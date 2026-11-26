#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpFlagCdB.h"

// ----------------------------------------------------------------------------
// Function: hkpFlagCdBodyPairCollector::Destroy  (binary VA: 0x1711ab0)
// Original: hkpFlagCdBodyPairCollector::~hkpFlagCdBodyPairCollector
// ----------------------------------------------------------------------------
void hkpFlagCdBodyPairCollector::Destroy(hkpFlagCdBodyPairCollector::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055268);
}

// ----------------------------------------------------------------------------
// Function: hkpFlagCdBodyPairCollector::addCdBodyPair  (binary VA: 0x1711ad0)
// Original: hkpFlagCdBodyPairCollector::addCdBodyPair
// ----------------------------------------------------------------------------
hkpFlagCdBodyPairCollector::Self * hkpFlagCdBodyPairCollector::addCdBodyPair(hkpFlagCdBodyPairCollector::Self *self)
{
  *((uint8_t *)self + 4) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpFlagCdBodyPairCollector::Destroy_ea1711ae0  (binary VA: 0x1711ae0)
// Original: hkpFlagCdBodyPairCollector::~hkpFlagCdBodyPairCollector
// ----------------------------------------------------------------------------
void hkpFlagCdBodyPairCollector::Destroy_ea1711ae0(hkpFlagCdBodyPairCollector::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055268);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpFlagCdBodyPairCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    8);
}


