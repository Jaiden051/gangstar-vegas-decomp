#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpDisable.h"

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::staticClass  (binary VA: 0x1822470)
// Original: hkpDisableEntityCollisionFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpDisableEntityCollisionFilter::staticClass()
{
  return &hkpDisableEntityCollisionFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::isCollisionEnabled  (binary VA: 0x1822560)
// Original: hkpDisableEntityCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpDisableEntityCollisionFilter::Self * hkpDisableEntityCollisionFilter::isCollisionEnabled(hkpDisableEntityCollisionFilter::Self *self, const hkpCollidable::Self *a2, const hkpCollidable::Self *a3, const hkpCollidable::Self *a4)
{
  int v4;
  uint32_t *v5;
  const hkpCollidable::Self *v6;
  int v7;
  const hkpCollidable::Self *v8;

  v4 = *((uint32_t *)a2 + 14);
  if ( v4 <= 0 )
  {
LABEL_8:
    *(uint8_t *)self = 1;
    return self;
  }
  v5 = *((uint32_t **)a2 + 13);
  v6 = (const hkpCollidable::Self *)(*v5 + 16);
  if ( v6 != a3 && v6 != a4 )
  {
    v7 = 0;
    while ( ++v7 != v4 )
    {
      v8 = (const hkpCollidable::Self *)(v5[v7] + 16);
      if ( v8 == a3 || v8 == a4 )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::isCollisionEnabled  (binary VA: 0x18225e0)
// Original: hkpDisableEntityCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpDisableEntityCollisionFilter::isCollisionEnabled(uint8_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::isCollisionEnabled_ea1822600  (binary VA: 0x1822600)
// Original: hkpDisableEntityCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpDisableEntityCollisionFilter::isCollisionEnabled_ea1822600(uint8_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::isCollisionEnabled_ea1822620  (binary VA: 0x1822620)
// Original: hkpDisableEntityCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpDisableEntityCollisionFilter::isCollisionEnabled_ea1822620(uint8_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::isCollisionEnabled_ea1822640  (binary VA: 0x1822640)
// Original: hkpDisableEntityCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpDisableEntityCollisionFilter::isCollisionEnabled_ea1822640(uint8_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::entityDeletedCallback  (binary VA: 0x1822660)
// Original: hkpDisableEntityCollisionFilter::entityDeletedCallback
// ----------------------------------------------------------------------------
void hkpDisableEntityCollisionFilter::entityDeletedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::Destroy  (binary VA: 0x1822680)
// Original: hkpDisableEntityCollisionFilter::~hkpDisableEntityCollisionFilter
// ----------------------------------------------------------------------------
void hkpDisableEntityCollisionFilter::Destroy(hkpDisableEntityCollisionFilter::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  hkpDisableEntityCollisionFilter::Self **v6;
  int v7;
  int v8;
  int v9;
  int address;
  int v11;

  v1 = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A14A8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A14E8);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A14FC);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_20A1518);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A152C);
  v2 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20A1540);
  if ( v2 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v11 = 4 * v1;
        v3 = *(uint32_t *)(*((uint32_t *)self + 13) + 4 * v1);
        v4 = *(uint32_t *)(v3 + 532);
        if ( v4 == 0 )
        {
          address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v4 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)address + 44),
                 16);
          *(uint32_t *)v4 = 0;
          *(uint16_t *)(v4 + 4) = 0;
          *(uint16_t *)(v4 + 6) = 0x8000;
          *(uint32_t *)(v4 + 8) = 0;
          *(uint16_t *)(v4 + 12) = 0;
          *(uint16_t *)(v4 + 14) = 0x8000;
          *(uint32_t *)(v3 + 532) = v4;
        }
        v5 = *(uint16_t *)(v4 + 12);
        v6 = *(hkpDisableEntityCollisionFilter::Self ***)(v4 + 8);
        if ( (uint16_t)v5 != 0 )
          break;
LABEL_9:
        if ( *((uint32_t *)self + 14) <= ++v1 )
          goto LABEL_10;
      }
      if ( *v6 != (hkpDisableEntityCollisionFilter::Self *)((char *)self + 48) )
      {
        v7 = v5 - 1;
        v8 = 0;
        while ( v8 != v7 )
        {
          if ( v6[++v8] == (hkpDisableEntityCollisionFilter::Self *)((char *)self + 48) )
            goto LABEL_13;
        }
        goto LABEL_9;
      }
LABEL_13:
      ++v1;
      hkpEntity::removeEntityListener(*(uint32_t *)(*((uint32_t *)self + 13) + v11), (int)(uintptr_t)(self) + 48);
    }
    while ( *((uint32_t *)self + 14) > v1 );
  }
LABEL_10:
  v9 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 14) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 13),
      4 * v9);
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&off_2054DE8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::Destroy_ea1822880  (binary VA: 0x1822880)
// Original: hkpDisableEntityCollisionFilter::~hkpDisableEntityCollisionFilter
// ----------------------------------------------------------------------------
void hkpDisableEntityCollisionFilter::Destroy_ea1822880(hkpDisableEntityCollisionFilter::Self *self)
{
  int v1;
  int v2;

  hkpDisableEntityCollisionFilter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::Construct  (binary VA: 0x1822930)
// Original: hkpDisableEntityCollisionFilter::hkpDisableEntityCollisionFilter
// ----------------------------------------------------------------------------
void hkpDisableEntityCollisionFilter::Construct(hkpDisableEntityCollisionFilter::Self *self)
{
  hkpCollisionFilter::Construct(self);
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A14A8);
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A14E8);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A14FC);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_20A1518);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A152C);
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20A1540);
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::addEntityToFilter  (binary VA: 0x18229a0)
// Original: hkpDisableEntityCollisionFilter::addEntityToFilter
// ----------------------------------------------------------------------------
hkpDisableEntityCollisionFilter::Self * hkpDisableEntityCollisionFilter::addEntityToFilter(hkpDisableEntityCollisionFilter::Self *self, hkpEntity::Self *a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  char **v9;
  int v10;
  int v11;
  int address;
  int v14;
  int v15;

  if ( a3 == 0 )
    goto LABEL_18;
  v3 = *((uint32_t *)a2 + 14);
  if ( v3 <= 0 )
  {
LABEL_7:
    if ( (*((uint32_t *)a2 + 15) & 0x3FFFFFFF) == v3 )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpEntity::Self *)((char *)a2 + 52),
        4,
        v15);
      v3 = *((uint32_t *)a2 + 14);
    }
    *(uint32_t *)(*((uint32_t *)a2 + 13) + 4 * v3) = a3;
    ++*((uint32_t *)a2 + 14);
    v6 = *(uint32_t *)(a3 + 532);
    if ( v6 == 0 )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v14 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
              *(uint32_t *)(*(uint32_t *)address + 44),
              16);
      *(uint32_t *)v14 = 0;
      *(uint16_t *)(v14 + 4) = 0;
      *(uint16_t *)(v14 + 6) = 0x8000;
      *(uint32_t *)(v14 + 8) = 0;
      *(uint16_t *)(v14 + 12) = 0;
      *(uint16_t *)(v14 + 14) = 0x8000;
      v6 = v14;
      *(uint32_t *)(a3 + 532) = v14;
    }
    v7 = *(uint16_t *)(v6 + 12);
    v8 = (char *)a2 + 48;
    v9 = *(char ***)(v6 + 8);
    if ( (uint16_t)v7 != 0 )
    {
      if ( *v9 == v8 )
      {
LABEL_17:
        *(uint8_t *)self = 1;
        return self;
      }
      v10 = v7 - 1;
      v11 = 0;
      while ( v11 != v10 )
      {
        if ( v9[++v11] == v8 )
          goto LABEL_17;
      }
    }
    hkpEntity::addEntityListener(a3, (int)(uintptr_t)(v8));
    goto LABEL_17;
  }
  v4 = *((uint32_t **)a2 + 13);
  v5 = 0;
  if ( *v4 != a3 )
  {
    while ( ++v5 != v3 )
    {
      if ( v4[v5] == a3 )
        goto LABEL_18;
    }
    goto LABEL_7;
  }
LABEL_18:
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::removeEntityFromFilter  (binary VA: 0x1822ae0)
// Original: hkpDisableEntityCollisionFilter::removeEntityFromFilter
// ----------------------------------------------------------------------------
hkpDisableEntityCollisionFilter::Self * hkpDisableEntityCollisionFilter::removeEntityFromFilter(hkpDisableEntityCollisionFilter::Self *self, hkpEntity::Self *a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  uint32_t *v8;
  int v9;

  if ( a3 == 0 || (v3 = *((uint32_t *)a2 + 14)) <= 0 )
  {
LABEL_7:
    *(uint8_t *)self = 0;
    return self;
  }
  v4 = *((uint32_t **)a2 + 13);
  v5 = 0;
  v6 = v4 + 1;
  if ( *v4 != a3 )
  {
    while ( ++v5 != v3 )
    {
      v8 = v6++;
      if ( *(v6 - 1) == a3 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v8 = *((uint32_t **)a2 + 13);
  v5 = 0;
LABEL_8:
  v9 = v3 - 1;
  *((uint32_t *)a2 + 14) = v9;
  if ( v5 != v9 )
    *v8 = v4[v9];
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpDisableEntityCollisionFilter::entityRemovedCallback  (binary VA: 0x1822b60)
// Original: hkpDisableEntityCollisionFilter::entityRemovedCallback
// ----------------------------------------------------------------------------
int hkpDisableEntityCollisionFilter::entityRemovedCallback(hkpDisableEntityCollisionFilter::Self *self, hkpEntity::Self *a2)
{
  int result;
  uint8_t v3[25];

  if ( a2 != nullptr )
  {
    hkpDisableEntityCollisionFilter::removeEntityFromFilter((hkpDisableEntityCollisionFilter::Self *)v3, (hkpEntity::Self *)(self), (int)(uintptr_t)(a2));
    return hkpEntity::removeEntityListener((int)(uintptr_t)(a2), (int)(uintptr_t)(self) + 48);
  }
  return result;
}


