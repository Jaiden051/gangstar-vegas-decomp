#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpUnaryAc.h"

// ----------------------------------------------------------------------------
// Function: hkpUnaryAction::staticClass  (binary VA: 0x172f390)
// Original: hkpUnaryAction::staticClass
// ----------------------------------------------------------------------------
void * hkpUnaryAction::staticClass()
{
  return &hkpUnaryActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpUnaryAction::entityRemovedCallback  (binary VA: 0x1747cc0)
// Original: hkpUnaryAction::entityRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpUnaryAction::entityRemovedCallback(hkpUnaryAction::Self *self)
{
  hkpWorld::Self *result;
  int v2;
  int v3;
  int v4;
  int v5;

  result = *((hkpWorld::Self **)self + 2);
  if ( result != nullptr )
    return hkpWorld::removeActionImmediately(result, self, v2, v3, v4, v5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpUnaryAction::getEntities  (binary VA: 0x1747cf0)
// Original: hkpUnaryAction::getEntities
// ----------------------------------------------------------------------------
int hkpUnaryAction::getEntities(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)a2 + 1);
  if ( v2 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v4);
    v2 = *((uint32_t *)a2 + 1);
  }
  result = *(uint32_t *)a2;
  *(uint32_t *)(*(uint32_t *)a2 + 4 * v2) = *(uint32_t *)(a1 + 24);
  ++*((uint32_t *)a2 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpUnaryAction::Destroy  (binary VA: 0x1747d50)
// Original: hkpUnaryAction::~hkpUnaryAction
// ----------------------------------------------------------------------------
void hkpUnaryAction::Destroy(hkpUnaryAction::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F388);
  if ( v1 != 0 )
  {
    if ( *(uint16_t *)(v1 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v1 + 4);
        HIWORD(v2) = HIWORD(v3);
        LOWORD(v2) = 0;
        v4 = v2 | (uint16_t)(v3 - 1);
        v5 = v3;
      }
      while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
      if ( (uint16_t)v4 == 0 )
        G4_VCALL<void>(v1, 16);
    }
    *((uint32_t *)self + 6) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkpUnaryAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpUnaryAction::Destroy_ea1747df0  (binary VA: 0x1747df0)
// Original: hkpUnaryAction::~hkpUnaryAction
// ----------------------------------------------------------------------------
void hkpUnaryAction::Destroy_ea1747df0(hkpUnaryAction::Self *self)
{
  int v1;
  int v2;

  hkpUnaryAction::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpUnaryAction::Construct  (binary VA: 0x1747e50)
// Original: hkpUnaryAction::hkpUnaryAction
// ----------------------------------------------------------------------------
void hkpUnaryAction::Construct(hkpUnaryAction::Self *self, hkpEntity::Self *a2, unsigned int a3)
{
  int v3;
  int32_t v4; // kr00_4

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  *((uint32_t *)self + 4) = a3;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  hkStringPtr::Construct((hkpUnaryAction::Self *)((char *)self + 20));
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F388);
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
    }
    while ( v4 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v4, v3 | (uint16_t)(v4 + 1)) );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpUnaryAction::setEntity  (binary VA: 0x1747ef0)
// Original: hkpUnaryAction::setEntity
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpUnaryAction::setEntity(hkpWorld::Self **self, hkpEntity::Self *a2)
{
  hkpUnaryAction::Self *v2;
  int v3;
  hkpWorld::Self *v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  hkpWorld::Self *result;
  int v10;
  int32_t v11; // kr04_4
  int v12;
  int v13;
  int v14;

  v2 = (hkpUnaryAction::Self *)self;
  v3 = (int)(uintptr_t)(*(self + 6));
  if ( v3 != 0 )
  {
    v4 = *(self + 2);
    if ( v4 != nullptr )
    {
      hkpWorld::detachActionFromEntity(v4, self, *(self + 6), v12, v13, v14);
      v3 = (int)(uintptr_t)(*(self + 6));
    }
    if ( *(uint16_t *)(v3 + 6) != 0 )
    {
      do
      {
        v6 = *(uint32_t *)(v3 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v7) );
      v2 = (hkpUnaryAction::Self *)self;
      if ( (uint16_t)v7 == 0 )
      {
        G4_VCALL<void>(v3, 16);
        *(self + 6) = (hkpWorld::Self *)(a2);
        if ( *((uint16_t *)a2 + 3) != 0 )
          goto LABEL_12;
LABEL_8:
        result = *((hkpWorld::Self **)v2 + 2);
        if ( result != nullptr )
          return (hkpWorld::Self *)hkpWorld::attachActionToEntity(result, v2, *((hkpEntity::Self **)v2 + 6));
        return result;
      }
    }
  }
  *((uint32_t *)v2 + 6) = (uint32_t)(uintptr_t)(a2);
  if ( *((uint16_t *)a2 + 3) == 0 )
    goto LABEL_8;
  do
  {
LABEL_12:
    v11 = *((uint32_t *)a2 + 1);
    HIWORD(v10) = HIWORD(v11);
    LOWORD(v10) = 0;
  }
  while ( v11 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v11, v10 | (uint16_t)(v11 + 1)) );
  goto LABEL_8;
}


