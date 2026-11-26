#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpClosest.h"

// ----------------------------------------------------------------------------
// Function: hkpClosestRayHitCollector::Destroy  (binary VA: 0x1690a30)
// Original: hkpClosestRayHitCollector::~hkpClosestRayHitCollector
// ----------------------------------------------------------------------------
void hkpClosestRayHitCollector::Destroy(hkpClosestRayHitCollector::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20551F0);
}

// ----------------------------------------------------------------------------
// Function: hkpClosestRayHitCollector::addRayHit  (binary VA: 0x1690a80)
// Original: hkpClosestRayHitCollector::addRayHit
// ----------------------------------------------------------------------------
int hkpClosestRayHitCollector::addRayHit(float *a1, int a2, float *a3)
{
  int v3;
  int i;
  int result;

  if ( a1[8] > a3[4] )
  {
    a1[4] = *a3;
    a1[5] = a3[1];
    a1[6] = a3[2];
    a1[7] = a3[3];
    a1[8] = a3[4];
    a1[9] = a3[5];
    v3 = *((uint32_t *)a3 + 7);
    a1[10] = a3[6];
    *((uint32_t *)a1 + 11) = v3;
    hkpRayHitCollector::shapeKeysFromCdBody((hkpRayHitCollector::Self *)(a1 + 12), (unsigned int *)byte_8, a2);
    for ( i = a2; ; i = *(uint32_t *)(i + 12) )
    {
      result = *(uint32_t *)(i + 12);
      if ( result == 0 )
        break;
    }
    *((uint32_t *)a1 + 21) = i;
    a1[1] = a3[4];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpClosestRayHitCollector::Destroy_ea1690b30  (binary VA: 0x1690b30)
// Original: hkpClosestRayHitCollector::~hkpClosestRayHitCollector
// ----------------------------------------------------------------------------
void hkpClosestRayHitCollector::Destroy_ea1690b30(hkpClosestRayHitCollector::Self *self)
{
  int address;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20551F0);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpClosestRayHitCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    96);
}

// ----------------------------------------------------------------------------
// Function: hkpClosestCdPointCollector::reset  (binary VA: 0x169a230)
// Original: hkpClosestCdPointCollector::reset
// ----------------------------------------------------------------------------
hkpClosestCdPointCollector::Self * hkpClosestCdPointCollector::reset(hkpClosestCdPointCollector::Self *self)
{
  *(uint64_t *)((char *)self + 44) = 2139095022;
  *((uint32_t *)self + 1) = 2139095022;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpClosestCdPointCollector::Destroy  (binary VA: 0x169a270)
// Original: hkpClosestCdPointCollector::~hkpClosestCdPointCollector
// ----------------------------------------------------------------------------
void hkpClosestCdPointCollector::Destroy(hkpClosestCdPointCollector::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
}

// ----------------------------------------------------------------------------
// Function: hkpClosestCdPointCollector::addCdPoint  (binary VA: 0x169a290)
// Original: hkpClosestCdPointCollector::addCdPoint
// ----------------------------------------------------------------------------
int hkpClosestCdPointCollector::addCdPoint(int a1, int a2)
{
  float v2; // xmm0_4
  int result;
  int i;
  int j;
  int v6;

  v2 = *(float *)(a2 + 28);
  result = *(uint32_t *)(a1 + 48);
  if ( result == 0 || *(float *)(a1 + 44) > v2 )
  {
    *(uint32_t *)(a1 + 16) = *(uint32_t *)a2;
    *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 4);
    *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 8);
    *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 12);
    *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 16);
    *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 20);
    *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 24);
    *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 28);
    for ( i = *(uint32_t *)(a2 + 48); *(uint32_t *)(i + 12) != 0; i = *(uint32_t *)(i + 12) )
      ;
    *(uint32_t *)(a1 + 48) = i;
    *(uint32_t *)(a1 + 52) = *(uint32_t *)(*(uint32_t *)(a2 + 48) + 4);
    for ( j = *(uint32_t *)(a2 + 52); *(uint32_t *)(j + 12) != 0; j = *(uint32_t *)(j + 12) )
      ;
    *(uint32_t *)(a1 + 56) = j;
    v6 = *(uint32_t *)(*(uint32_t *)(a2 + 52) + 4);
    *(float *)(a1 + 4) = v2;
    *(uint32_t *)(a1 + 60) = v6;
    *(uint32_t *)(a1 + 64) = *(uint32_t *)(a2 + 32);
    *(uint32_t *)(a1 + 68) = *(uint32_t *)(a2 + 36);
    *(uint32_t *)(a1 + 72) = *(uint32_t *)(a2 + 40);
    result = *(uint32_t *)(a2 + 44);
    *(uint32_t *)(a1 + 76) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpClosestCdPointCollector::Destroy_ea169a340  (binary VA: 0x169a340)
// Original: hkpClosestCdPointCollector::~hkpClosestCdPointCollector
// ----------------------------------------------------------------------------
void hkpClosestCdPointCollector::Destroy_ea169a340(hkpClosestCdPointCollector::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpClosestCdPointCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    80);
}


