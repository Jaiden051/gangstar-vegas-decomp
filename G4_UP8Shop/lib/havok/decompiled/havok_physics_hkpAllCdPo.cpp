#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpAllCdPo.h"

// ----------------------------------------------------------------------------
// Function: hkpAllCdPointCollector::reset  (binary VA: 0x169e5e0)
// Original: hkpAllCdPointCollector::reset
// ----------------------------------------------------------------------------
hkpAllCdPointCollector::Self * hkpAllCdPointCollector::reset(hkpAllCdPointCollector::Self *self)
{
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 1) = 2139095022;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpAllCdPointCollector::addCdPoint  (binary VA: 0x169e600)
// Original: hkpAllCdPointCollector::addCdPoint
// ----------------------------------------------------------------------------
int hkpAllCdPointCollector::addCdPoint(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int i;
  int j;
  int result;
  int v8;

  v2 = a1[5];
  if ( v2 == (a1[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 4), 48, v8);
    v2 = a1[5];
  }
  v3 = a1[4];
  a1[5] = v2 + 1;
  v4 = (uint32_t *)(48 * v2 + v3);
  *v4 = *a2;
  v4[1] = a2[1];
  v4[2] = a2[2];
  v4[3] = a2[3];
  v4[4] = a2[4];
  v4[5] = a2[5];
  v4[6] = a2[6];
  v4[7] = a2[7];
  for ( i = a2[12]; *(uint32_t *)(i + 12) != 0; i = *(uint32_t *)(i + 12) )
    ;
  v4[8] = i;
  v4[9] = *(uint32_t *)(a2[12] + 4);
  for ( j = a2[13]; *(uint32_t *)(j + 12) != 0; j = *(uint32_t *)(j + 12) )
    ;
  v4[10] = j;
  result = *(uint32_t *)(a2[13] + 4);
  v4[11] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpAllCdPointCollector::Destroy  (binary VA: 0x169e6e0)
// Original: hkpAllCdPointCollector::~hkpAllCdPointCollector
// ----------------------------------------------------------------------------
void hkpAllCdPointCollector::Destroy(hkpAllCdPointCollector::Self *self)
{
  int v1;
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099D40);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      48 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpAllCdPointCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    416);
}

// ----------------------------------------------------------------------------
// Function: hkpAllCdPointCollector::Destroy_ea169e780  (binary VA: 0x169e780)
// Original: hkpAllCdPointCollector::~hkpAllCdPointCollector
// ----------------------------------------------------------------------------
void hkpAllCdPointCollector::Destroy_ea169e780(hkpAllCdPointCollector::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099D40);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      48 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
}

// ----------------------------------------------------------------------------
// Function: hkpAllCdPointCollector::sortHits  (binary VA: 0x169ea60)
// Original: hkpAllCdPointCollector::sortHits
// ----------------------------------------------------------------------------
int hkpAllCdPointCollector::sortHits(hkpAllCdPointCollector::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 5);
  result = *((uint32_t *)self + 4);
  if ( v1 > 1 )
    return ((hkAlgorithm::quickSortRecursive_6204ce(result, 0, v1 - 1)), (int)0);
  return result;
}


