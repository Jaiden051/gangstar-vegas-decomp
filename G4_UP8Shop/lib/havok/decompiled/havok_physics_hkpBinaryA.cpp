#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBinaryA.h"

// ----------------------------------------------------------------------------
// Function: hkpBinaryAction::staticClass  (binary VA: 0x1731040)
// Original: hkpBinaryAction::staticClass
// ----------------------------------------------------------------------------
void * hkpBinaryAction::staticClass()
{
  return &hkpBinaryActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBinaryAction::getClassType  (binary VA: 0x182ada0)
// Original: hkpBinaryAction::getClassType
// ----------------------------------------------------------------------------
void * hkpBinaryAction::getClassType()
{
  return &hkpBinaryActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBinaryAction::entityRemovedCallback  (binary VA: 0x1b02f70)
// Original: hkpBinaryAction::entityRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpBinaryAction::entityRemovedCallback(hkpBinaryAction::Self *self)
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
// Function: hkpBinaryAction::getEntities  (binary VA: 0x1b02fa0)
// Original: hkpBinaryAction::getEntities
// ----------------------------------------------------------------------------
int hkpBinaryAction::getEntities(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = *((uint32_t *)a2 + 1);
  if ( v2 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v5);
    v2 = *((uint32_t *)a2 + 1);
  }
  *(uint32_t *)(*(uint32_t *)a2 + 4 * v2) = *(uint32_t *)(a1 + 24);
  result = *((uint32_t *)a2 + 1) + 1;
  v4 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
  *((uint32_t *)a2 + 1) = result;
  if ( result == v4 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v5);
    result = *((uint32_t *)a2 + 1);
  }
  *(uint32_t *)(*(uint32_t *)a2 + 4 * result) = *(uint32_t *)(a1 + 28);
  ++*((uint32_t *)a2 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBinaryAction::Destroy  (binary VA: 0x1b03040)
// Original: hkpBinaryAction::~hkpBinaryAction
// ----------------------------------------------------------------------------
void hkpBinaryAction::Destroy(hkpBinaryAction::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett

  v1 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2188);
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
  v6 = *((uint32_t *)self + 7);
  if ( v6 != 0 )
  {
    if ( *(uint16_t *)(v6 + 6) != 0 )
    {
      do
      {
        v8 = *(uint32_t *)(v6 + 4);
        HIWORD(v7) = HIWORD(v8);
        LOWORD(v7) = 0;
        v9 = v7 | (uint16_t)(v8 - 1);
        v10 = v8;
      }
      while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
      if ( (uint16_t)v9 == 0 )
        G4_VCALL<void>(v6, 16);
    }
    *((uint32_t *)self + 7) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkpBinaryAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBinaryAction::Destroy_ea1b03120  (binary VA: 0x1b03120)
// Original: hkpBinaryAction::~hkpBinaryAction
// ----------------------------------------------------------------------------
void hkpBinaryAction::Destroy_ea1b03120(hkpBinaryAction::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;

  v1 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2188);
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
  v6 = *((uint32_t *)self + 7);
  if ( v6 != 0 )
  {
    if ( *(uint16_t *)(v6 + 6) != 0 )
    {
      do
      {
        v8 = *(uint32_t *)(v6 + 4);
        HIWORD(v7) = HIWORD(v8);
        LOWORD(v7) = 0;
        v9 = v7 | (uint16_t)(v8 - 1);
        v10 = v8;
      }
      while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
      if ( (uint16_t)v9 == 0 )
        G4_VCALL<void>(v6, 16);
    }
    *((uint32_t *)self + 7) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkpBinaryAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v11 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v12 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v12 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v11, 12, self, v12);
}

// ----------------------------------------------------------------------------
// Function: hkpBinaryAction::referenceBodies  (binary VA: 0x1b03240)
// Original: hkpBinaryAction::_referenceBodies
// ----------------------------------------------------------------------------
int32_t hkpBinaryAction::referenceBodies(hkpBinaryAction::Self *self)
{
  int v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t result;
  int v6;
  int32_t v7; // kr04_4

  v1 = *((uint32_t *)self + 6);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v7 = *(uint32_t *)(v1 + 4);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v7, v6 | (uint16_t)(v7 + 1));
    }
    while ( v7 != result );
  }
  v2 = *((uint32_t *)self + 7);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v4, v3 | (uint16_t)(v4 + 1));
    }
    while ( v4 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBinaryAction::Construct  (binary VA: 0x1b032b0)
// Original: hkpBinaryAction::hkpBinaryAction
// ----------------------------------------------------------------------------
void hkpBinaryAction::Construct(hkpBinaryAction::Self *self, hkpEntity::Self *a2, hkpEntity::Self *a3, unsigned int a4)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  *((uint32_t *)self + 4) = a4;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  hkStringPtr::Construct((hkpBinaryAction::Self *)((char *)self + 20));
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2188);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a3);
  if ( a2 != nullptr || a3 != nullptr )
    hkpBinaryAction::referenceBodies(self);
}

// ----------------------------------------------------------------------------
// Function: hkpBinaryAction::setEntityA  (binary VA: 0x1b03340)
// Original: hkpBinaryAction::setEntityA
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpBinaryAction::setEntityA(hkpWorld::Self **self, hkpEntity::Self *a2)
{
  hkpBinaryAction::Self *v2;
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

  v2 = (hkpBinaryAction::Self *)self;
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v11 = *((uint32_t *)a2 + 1);
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
    }
    while ( v11 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a2 + 1,
                     v11,
                     v10 | (uint16_t)(v11 + 1)) );
  }
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
      v2 = (hkpBinaryAction::Self *)self;
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v3, 16);
    }
  }
  result = *((hkpWorld::Self **)v2 + 2);
  *((uint32_t *)v2 + 6) = (uint32_t)(uintptr_t)(a2);
  if ( result != nullptr )
    return (hkpWorld::Self *)hkpWorld::attachActionToEntity(result, v2, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBinaryAction::setEntityB  (binary VA: 0x1b03420)
// Original: hkpBinaryAction::setEntityB
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpBinaryAction::setEntityB(hkpWorld::Self **self, hkpEntity::Self *a2)
{
  hkpBinaryAction::Self *v2;
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

  v2 = (hkpBinaryAction::Self *)self;
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v11 = *((uint32_t *)a2 + 1);
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
    }
    while ( v11 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a2 + 1,
                     v11,
                     v10 | (uint16_t)(v11 + 1)) );
  }
  v3 = (int)(uintptr_t)(*(self + 7));
  if ( v3 != 0 )
  {
    v4 = *(self + 2);
    if ( v4 != nullptr )
    {
      hkpWorld::detachActionFromEntity(v4, self, *(self + 7), v12, v13, v14);
      v3 = (int)(uintptr_t)(*(self + 7));
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
      v2 = (hkpBinaryAction::Self *)self;
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v3, 16);
    }
  }
  result = *((hkpWorld::Self **)v2 + 2);
  *((uint32_t *)v2 + 7) = (uint32_t)(uintptr_t)(a2);
  if ( result != nullptr )
    return (hkpWorld::Self *)hkpWorld::attachActionToEntity(result, v2, a2);
  return result;
}


