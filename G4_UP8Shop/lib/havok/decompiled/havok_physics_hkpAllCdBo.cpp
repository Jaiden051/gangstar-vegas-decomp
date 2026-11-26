#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpAllCdBo.h"

// ----------------------------------------------------------------------------
// Function: hkpAllCdBodyPairCollector::reset  (binary VA: 0x16bbe70)
// Original: hkpAllCdBodyPairCollector::reset
// ----------------------------------------------------------------------------
hkpAllCdBodyPairCollector::Self * hkpAllCdBodyPairCollector::reset(hkpAllCdBodyPairCollector::Self *self)
{
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 4) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpAllCdBodyPairCollector::addCdBodyPair  (binary VA: 0x16bbe90)
// Original: hkpAllCdBodyPairCollector::addCdBodyPair
// ----------------------------------------------------------------------------
const hkpCdBody::Self * hkpAllCdBodyPairCollector::addCdBodyPair(hkpAllCdBodyPairCollector::Self *self, const hkpCdBody::Self *a2, const hkpCdBody::Self **a3)
{
  int v3;
  int v4;
  const hkpCdBody::Self **v5;
  const hkpCdBody::Self *i;
  const hkpCdBody::Self *j;
  const hkpCdBody::Self *result;
  int v9;

  v3 = *((uint32_t *)self + 3);
  if ( v3 == (*((uint32_t *)self + 4) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpAllCdBodyPairCollector::Self *)((char *)self + 8),
      16,
      v9);
    v3 = *((uint32_t *)self + 3);
  }
  v4 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 3) = v3 + 1;
  v5 = (const hkpCdBody::Self **)(16 * v3 + v4);
  for ( i = a2; *((uint32_t *)i + 3) != 0; i = *((const hkpCdBody::Self **)i + 3) )
    ;
  *v5 = i;
  v5[1] = *((const hkpCdBody::Self **)a2 + 1);
  for ( j = (const hkpCdBody::Self *)a3; *((uint32_t *)j + 3) != 0; j = *((const hkpCdBody::Self **)j + 3) )
    ;
  v5[2] = j;
  result = a3[1];
  v5[3] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpAllCdBodyPairCollector::Destroy  (binary VA: 0x16bbf40)
// Original: hkpAllCdBodyPairCollector::~hkpAllCdBodyPairCollector
// ----------------------------------------------------------------------------
void hkpAllCdBodyPairCollector::Destroy(hkpAllCdBodyPairCollector::Self *self)
{
  int v1;
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A620);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      16 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055268);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpAllCdBodyPairCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    276);
}

// ----------------------------------------------------------------------------
// Function: hkpAllCdBodyPairCollector::Destroy_ea16bbfe0  (binary VA: 0x16bbfe0)
// Original: hkpAllCdBodyPairCollector::~hkpAllCdBodyPairCollector
// ----------------------------------------------------------------------------
void hkpAllCdBodyPairCollector::Destroy_ea16bbfe0(hkpAllCdBodyPairCollector::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A620);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      16 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055268);
}


