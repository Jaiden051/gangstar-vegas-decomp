#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpTrigger.h"

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::triggerEventCallback  (binary VA: 0x1823d50)
// Original: hkpTriggerVolume::triggerEventCallback
// ----------------------------------------------------------------------------
void hkpTriggerVolume::triggerEventCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::bodyOrderForQueues  (binary VA: 0x1823d60)
// Original: hkpTriggerVolume::bodyOrderForQueues
// ----------------------------------------------------------------------------
hkpTriggerVolume::Self * hkpTriggerVolume::bodyOrderForQueues(hkpTriggerVolume::Self *self, const hkpTriggerVolume::EventInfo::Self *a2, const hkpTriggerVolume::EventInfo::Self *a3)
{
  char v3;
  hkpTriggerVolume::Self *result;
  unsigned int v5;

  v3 = 1;
  result = self;
  v5 = *((uint32_t *)a3 + 1);
  if ( *((uint32_t *)a2 + 1) < v5 )
    goto LABEL_4;
  if ( *((uint32_t *)a2 + 1) > v5 || *(uint32_t *)a2 >= *(uint32_t *)a3 )
  {
    v3 = 0;
LABEL_4:
    *(uint8_t *)self = v3;
    return result;
  }
  *(uint8_t *)self = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::bodyOrderForArrays  (binary VA: 0x1823da0)
// Original: hkpTriggerVolume::bodyOrderForArrays
// ----------------------------------------------------------------------------
hkpTriggerVolume::Self * hkpTriggerVolume::bodyOrderForArrays(hkpTriggerVolume::Self *self, const hkpRigidBody::Self *a2, const hkpRigidBody::Self *a3)
{
  *(uint8_t *)self = *((uint32_t *)a2 + 52) < *((uint32_t *)a3 + 52);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::collisionRemovedCallback  (binary VA: 0x1823df0)
// Original: hkpTriggerVolume::collisionRemovedCallback
// ----------------------------------------------------------------------------
int32_t hkpTriggerVolume::collisionRemovedCallback(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int32_t result;
  int v7;
  int32_t v8; // kr00_4
  int v9;
  int32_t v10;

  v2 = a1[9];
  v3 = a2[1 - *a2 + 1];
  if ( v2 == (a1[10] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 8), 16, v9);
    v2 = a1[9];
  }
  v4 = v2;
  v5 = (uint32_t *)(a1[8] + 16 * v2);
  a1[9] = v4 + 1;
  v5[2] = v3;
  v5[3] = 1;
  v10 = *(uint32_t *)(v3 + 208);
  *v5 = a1[12];
  result = v10;
  v5[1] = v10;
  ++a1[12];
  if ( *(uint16_t *)(v3 + 6) != 0 )
  {
    do
    {
      v8 = *(uint32_t *)(v3 + 4);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v7 | (uint16_t)(v8 + 1));
    }
    while ( v8 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::collisionAddedCallback  (binary VA: 0x1823ed0)
// Original: hkpTriggerVolume::collisionAddedCallback
// ----------------------------------------------------------------------------
int32_t hkpTriggerVolume::collisionAddedCallback(__m128i a1, uint32_t *a2, int a3)
{
  hkpConstraintOwner::Self **v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int32_t result;
  int v9;
  int32_t v10; // kr00_4
  int v11;
  int32_t v12;

  v3 = (hkpConstraintOwner::Self **)(*(int (**)(uint32_t))(**(uint32_t **)(a3 + 12) + 72))(*(uint32_t *)(a3 + 12));
  hkpResponseModifier::disableConstraint(a1, v3, v3[2]);
  v4 = a2[9];
  v5 = *(uint32_t *)(a3 + 4 * (1 - *(uint32_t *)a3) + 4);
  if ( v4 == (a2[10] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a2 + 8), 16, v11);
    v4 = a2[9];
  }
  v6 = v4;
  v7 = (uint32_t *)(a2[8] + 16 * v4);
  a2[9] = v6 + 1;
  v7[2] = v5;
  v7[3] = 0;
  v12 = *(uint32_t *)(v5 + 208);
  *v7 = a2[12];
  result = v12;
  v7[1] = v12;
  ++a2[12];
  if ( *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v5 + 4);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::contactPointCallback  (binary VA: 0x1823fd0)
// Original: hkpTriggerVolume::contactPointCallback
// ----------------------------------------------------------------------------
int32_t hkpTriggerVolume::contactPointCallback(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int32_t result;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int32_t v8; // kr00_4
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int32_t v13; // kr04_4
  int v14;
  int32_t v15;
  int32_t v16;

  *(uint8_t *)(a2[6] + 15) |= 8u;
  v2 = a2[1 - *a2 + 1];
  result = a2[4];
  if ( result != 0 )
  {
    if ( result == 1 )
    {
      v9 = a1[9];
      if ( v9 == (a1[10] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(a1 + 8),
          16,
          v14);
        v9 = a1[9];
      }
      v10 = v9;
      v11 = (uint32_t *)(a1[8] + 16 * v9);
      a1[9] = v10 + 1;
      v11[2] = v2;
      v11[3] = 2;
      v16 = *(uint32_t *)(v2 + 208);
      *v11 = a1[12];
      result = v16;
      v11[1] = v16;
      ++a1[12];
      if ( *(uint16_t *)(v2 + 6) != 0 )
      {
        do
        {
          v13 = *(uint32_t *)(v2 + 4);
          HIWORD(v12) = HIWORD(v13);
          LOWORD(v12) = 0;
          result = __sync_val_compare_and_swap(
                     (volatile int32_t *)(v2 + 4),
                     v13,
                     v12 | (uint16_t)(v13 + 1));
        }
        while ( v13 != result );
      }
    }
  }
  else
  {
    v4 = a1[9];
    if ( v4 == (a1[10] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a1 + 8),
        16,
        v14);
      v4 = a1[9];
    }
    v5 = v4;
    v6 = (uint32_t *)(a1[8] + 16 * v4);
    a1[9] = v5 + 1;
    v6[2] = v2;
    v6[3] = 3;
    v15 = *(uint32_t *)(v2 + 208);
    *v6 = a1[12];
    result = v15;
    v6[1] = v15;
    ++a1[12];
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v8 = *(uint32_t *)(v2 + 4);
        HIWORD(v7) = HIWORD(v8);
        LOWORD(v7) = 0;
        result = __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v8, v7 | (uint16_t)(v8 + 1));
      }
      while ( v8 != result );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::Destroy  (binary VA: 0x1824160)
// Original: hkpTriggerVolume::~hkpTriggerVolume
// ----------------------------------------------------------------------------
void hkpTriggerVolume::Destroy(hkpTriggerVolume::Self *self)
{
  unsigned int v1;
  const hkReferencedObject::Self *const *v2;
  unsigned int v3;
  hkReferencedObject::Self *v4;
  int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[32];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1788);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A17CC);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20A180C);
  v1 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A17F4);
  if ( v1 != 0 )
  {
    hkpWorldObject::removeProperty((hkpWorldObject::Self *)v16, v1, 4400);
    hkpWorldObject::removeProperty((hkpWorldObject::Self *)v16, *((uint32_t *)self + 11), 4880);
    hkpEntity::removeEntityListener(*((uint32_t *)self + 11), (int)(uintptr_t)(self) + 16);
    hkpEntity::removeContactListener(*((uint32_t *)self + 11), (int)(uintptr_t)(self) + 8);
  }
  v2 = *((const hkReferencedObject::Self *const **)self + 6);
  v3 = *((uint32_t *)self + 5);
  if ( v3 >= v3 + 4 * (uint32_t)(uintptr_t)(v2) )
  {
    v4 = *((hkReferencedObject::Self **)self + 5);
  }
  else
  {
    do
    {
      v3 += 4;
      hkpEntity::removeEntityListener(*(uint32_t *)(v3 - 4), (int)(uintptr_t)(self) + 16);
      v2 = *((const hkReferencedObject::Self *const **)self + 6);
      v4 = *((hkReferencedObject::Self **)self + 5);
    }
    while ( v3 < (unsigned int)(uintptr_t)(v4) + 4 * (uint32_t)(uintptr_t)(v2) );
  }
  v5 = 0;
  hkReferencedObject::removeReferences(v4, v2, 4);
  v14 = *((uint32_t *)self + 9);
  if ( v14 > 0 )
  {
    do
    {
      v6 = *(uint32_t *)(*((uint32_t *)self + 8) + 16 * v5 + 8);
      if ( *(uint16_t *)(v6 + 6) != 0 )
      {
        v15 = v5;
        do
        {
          v8 = *(uint32_t *)(v6 + 4);
          HIWORD(v7) = HIWORD(v8);
          LOWORD(v7) = 0;
          v9 = v7 | (uint16_t)(v8 - 1);
          v10 = v8;
        }
        while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
        v5 = v15;
        if ( (uint16_t)v9 == 0 )
          G4_VCALL<void>(v6, 16);
      }
      ++v5;
    }
    while ( v5 != v14 );
  }
  v11 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 15) = 0;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      4 * v11);
  v12 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v12 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      16 * v12);
  v13 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v13 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v13);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054DE8);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054FC8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::Destroy_ea18243e0  (binary VA: 0x18243e0)
// Original: hkpTriggerVolume::~hkpTriggerVolume
// ----------------------------------------------------------------------------
void hkpTriggerVolume::Destroy_ea18243e0(hkpTriggerVolume::Self *self)
{
  int v1;
  int v2;

  hkpTriggerVolume::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 68;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::Construct  (binary VA: 0x1824470)
// Original: hkpTriggerVolume::hkpTriggerVolume
// ----------------------------------------------------------------------------
uint32_t * hkpTriggerVolume::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A1788);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A17CC);
  a1[3] = ((uint32_t)(uintptr_t)&off_20A17F4);
  a1[4] = ((uint32_t)(uintptr_t)&off_20A180C);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::triggerBodyEnteredWorld  (binary VA: 0x18244b0)
// Original: hkpTriggerVolume::triggerBodyEnteredWorld
// ----------------------------------------------------------------------------
int hkpTriggerVolume::triggerBodyEnteredWorld(hkpTriggerVolume::Self *self, hkpWorld::Self *a2)
{
  int result;
  int v3;
  int address;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett

  hkpWorld::addWorldPostSimulationListener(a2, (hkpTriggerVolume::Self *)((char *)self + 12));
  result = hkpWorld::findWorldExtension(a2, 1001);
  v3 = result;
  if ( result == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v3 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           80);
    hkpWorldExtension::Construct((hkpWorldExtension::Self *)v3, 1001);
    *(uint32_t *)(v3 + 20) = ((uint32_t)(uintptr_t)&off_20A09F4);
    *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_20A09C8);
    hkpEndOfStepCallbackUtil::Construct((hkpEndOfStepCallbackUtil::Self *)(v3 + 24));
    result = hkpWorld::addWorldExtension(a2, (hkpWorldExtension::Self *)v3);
    if ( *(uint16_t *)(v3 + 6) != 0 )
    {
      do
      {
        v6 = *(uint32_t *)(v3 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
        result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v7);
      }
      while ( v8 != result );
      if ( (uint16_t)v7 == 0 )
        result = G4_VCALL<int>(v3, 16);
    }
  }
  ++*(uint16_t *)(v3 + 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::entityAddedCallback  (binary VA: 0x18245a0)
// Original: hkpTriggerVolume::entityAddedCallback
// ----------------------------------------------------------------------------
int hkpTriggerVolume::entityAddedCallback(hkpTriggerVolume::Self *self, hkpWorld::Self **a2)
{
  return hkpTriggerVolume::triggerBodyEnteredWorld(self, a2[2]);
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::Construct  (binary VA: 0x18245e0)
// Original: hkpTriggerVolume::hkpTriggerVolume
// ----------------------------------------------------------------------------
void hkpTriggerVolume::Construct(hkpTriggerVolume::Self *self, hkpWorld::Self **a2)
{
  int v2;
  int32_t v3; // kr00_4

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1788);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A17CC);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A17F4);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20A180C);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 12) = 0;
  *((uint8_t *)self + 52) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  hkpEntity::addContactListener((int)(uintptr_t)(a2), (int)(uintptr_t)(self) + 8);
  hkpEntity::addEntityListener((int)(uintptr_t)(a2), (int)(uintptr_t)(self) + 16);
  hkpWorldObject::addProperty(a2, 4880, (int)(uintptr_t)(self), 0);
  hkpWorldObject::addProperty(a2, 4400, dword_2136970, dword_2136970 >> 31);
  if ( a2[2] != nullptr )
    hkpTriggerVolume::triggerBodyEnteredWorld(self, a2[2]);
  if ( *((uint16_t *)self + 3) != 0 )
  {
    do
    {
      v3 = *((uint32_t *)self + 1);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)self + 1, v3, v2 | (uint16_t)(v3 + 1)) );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::triggerBodyLeftBroadphase  (binary VA: 0x1824720)
// Original: hkpTriggerVolume::triggerBodyLeftBroadphase
// ----------------------------------------------------------------------------
int hkpTriggerVolume::triggerBodyLeftBroadphase(hkpTriggerVolume::Self *self)
{
  int v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int result;
  int v8;
  int v9;
  int v10;
  int32_t v11; // kr04_4
  int32_t v12;
  int32_t v13; // ett
  int v14;
  volatile int32_t *v15;
  int v16;
  int v17;

  v1 = 0;
  v16 = *((uint32_t *)self + 6);
  if ( v16 > 0 )
  {
    do
    {
      hkpEntity::removeEntityListener(*(uint32_t *)(*((uint32_t *)self + 5) + 4 * v1), (int)(uintptr_t)(self) + 16);
      G4_VCALL<void>(self, 20, *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v1), 6);
      v2 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v1);
      if ( *(uint16_t *)(v2 + 6) != 0 )
      {
        v14 = v1;
        do
        {
          v4 = *(uint32_t *)(v2 + 4);
          HIWORD(v3) = HIWORD(v4);
          LOWORD(v3) = 0;
          v5 = v3 | (uint16_t)(v4 - 1);
          v6 = v4;
        }
        while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
        v1 = v14;
        if ( (uint16_t)v5 == 0 )
          G4_VCALL<void>(v2, 16);
      }
      ++v1;
    }
    while ( v1 != v16 );
  }
  result = *((uint32_t *)self + 9);
  v8 = 0;
  v17 = result;
  if ( result > 0 )
  {
    do
    {
      result = *((uint32_t *)self + 8) + 16 * v8;
      v9 = *(uint32_t *)(result + 8);
      if ( *(uint16_t *)(v9 + 6) != 0 )
      {
        v15 = (volatile int32_t *)(*(uint32_t *)(result + 8) + 4);
        do
        {
          v11 = *(uint32_t *)(v9 + 4);
          HIWORD(v10) = HIWORD(v11);
          LOWORD(v10) = 0;
          v12 = v10 | (uint16_t)(v11 - 1);
          v13 = v11;
          result = __sync_val_compare_and_swap(v15, v13, v12);
        }
        while ( v13 != result );
        if ( (uint16_t)v12 == 0 )
          result = G4_VCALL<int>(v9, 16);
      }
      ++v8;
    }
    while ( v8 != v17 );
  }
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 6) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::triggerBodyLeftWorld  (binary VA: 0x1824850)
// Original: hkpTriggerVolume::triggerBodyLeftWorld
// ----------------------------------------------------------------------------
int hkpTriggerVolume::triggerBodyLeftWorld(hkpTriggerVolume::Self *self)
{
  hkpWorld::Self *v1;
  hkpWorldExtension::Self *WorldExtension;

  v1 = *(hkpWorld::Self **)(*((uint32_t *)self + 11) + 8);
  hkpWorld::removeWorldPostSimulationListener(v1, (hkpTriggerVolume::Self *)((char *)self + 12));
  WorldExtension = (hkpWorldExtension::Self *)hkpWorld::findWorldExtension(v1, 1001);
  if ( (*((uint16_t *)WorldExtension + 8))-- == 1 )
    hkpWorld::removeWorldExtension(v1, WorldExtension);
  return hkpTriggerVolume::triggerBodyLeftBroadphase(self);
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::entityDeletedCallback  (binary VA: 0x18248c0)
// Original: hkpTriggerVolume::entityDeletedCallback
// ----------------------------------------------------------------------------
uint32_t * hkpTriggerVolume::entityDeletedCallback(hkpTriggerVolume::Self *self, hkpEntity::Self *a2)
{
  uint32_t *result;
  bool v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett

  if ( *(uint32_t *)(*((uint32_t *)self + 11) + 8) != 0 )
    hkpTriggerVolume::triggerBodyLeftWorld(self);
  hkpEntity::removeEntityListener((int)(uintptr_t)(a2), (int)(uintptr_t)(self) + 16);
  result = hkpEntity::removeContactListener((int)(uintptr_t)(a2), (int)(uintptr_t)(self) + 8);
  v3 = *((uint16_t *)self + 3) == 0;
  *((uint32_t *)self + 11) = 0;
  if ( !v3 )
  {
    do
    {
      v5 = *((uint32_t *)self + 1);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
      v6 = v4 | (uint16_t)(v5 - 1);
      v7 = v5;
      result = (uint32_t *)__sync_val_compare_and_swap((volatile int32_t *)self + 1, v7, v6);
    }
    while ( (uint32_t *)v7 != result );
    if ( (uint16_t)v6 == 0 )
      return (uint32_t *)G4_VCALL<int>(self, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::entityRemovedCallback  (binary VA: 0x1824960)
// Original: hkpTriggerVolume::entityRemovedCallback
// ----------------------------------------------------------------------------
int hkpTriggerVolume::entityRemovedCallback(hkpRigidBody::Self **self, hkpEntity::Self *a2)
{
  hkpEntity::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpRigidBody::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int j;
  hkpRigidBody::Self *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int32_t v27; // kr00_4
  int32_t v28;
  int32_t v29; // ett
  int v30;
  int v31;
  int n;
  int v33;
  hkpRigidBody::Self *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char *v41;
  char *v42;
  int i;
  int v44;
  hkpRigidBody::Self *v45;
  int v46;
  int result;
  int v48;
  int32_t v49; // kr04_4
  int32_t v50;
  int32_t v51; // ett
  int v52;
  int32_t v53; // kr08_4
  int32_t v54;
  int32_t v55; // ett
  bool v56;
  int v57;
  int v58;
  uint32_t *v59;
  uint32_t *v60;
  int v61;
  hkpTriggerVolume::Self *v62;
  int m;
  int v64;
  int32_t v65; // kr0C_4
  int32_t v66;
  int32_t v67; // ett
  hkpRigidBody::Self *v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int k;
  int v74;
  const hkpRigidBody::Self **v75;
  const hkpRigidBody::Self **v76;
  int v77;
  int v78;
  int v79;
  char *v80;
  int v81;
  char *v82;
  int v83;
  const hkpRigidBody::Self **v84;
  typedef hkpRigidBody::Self *_g4_t_v85;
  typedef hkpRigidBody::Self *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef hkpRigidBody::Self *_g4_t_v90;
  typedef hkpRigidBody::Self *_g4_t_v91;
  typedef hkpRigidBody::Self *_g4_t_v92;
  typedef hkpRigidBody::Self *_g4_t_v93;
  typedef hkpRigidBody::Self *_g4_t_v94;
  typedef hkpTriggerVolume::Self *_g4_t_v95;
  typedef hkpRigidBody::Self *_g4_t_v96;
  typedef hkpRigidBody::Self *_g4_t_v97;
  typedef hkpRigidBody::Self *_g4_t_v98;
  typedef hkpRigidBody::Self *_g4_t_v99;
  typedef hkpRigidBody::Self *_g4_t_v100;
  typedef hkpRigidBody::Self *_g4_t_v101;
  typedef hkpRigidBody::Self *_g4_t_v102;
  typedef hkpRigidBody::Self *_g4_t_v103;
  typedef hkpRigidBody::Self *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef hkpTriggerVolume::Self *_g4_t_v114;
  typedef hkpTriggerVolume::Self *_g4_t_v115;
  typedef hkpTriggerVolume::Self *_g4_t_v116;
  typedef uint8_t _g4_t_v117[9];
  typedef hkpTriggerVolume::Self **_g4_t_v118;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v85)) > _g4_s0 ? (0u + sizeof(_g4_t_v85)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v86)) > _g4_s1 ? (4u + sizeof(_g4_t_v86)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v87)) > _g4_s2 ? (8u + sizeof(_g4_t_v87)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v88)) > _g4_s3 ? (8u + sizeof(_g4_t_v88)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v89)) > _g4_s4 ? (12u + sizeof(_g4_t_v89)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v90)) > _g4_s5 ? (16u + sizeof(_g4_t_v90)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v91)) > _g4_s6 ? (16u + sizeof(_g4_t_v91)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v92)) > _g4_s7 ? (16u + sizeof(_g4_t_v92)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v93)) > _g4_s8 ? (16u + sizeof(_g4_t_v93)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v94)) > _g4_s9 ? (16u + sizeof(_g4_t_v94)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v95)) > _g4_s10 ? (20u + sizeof(_g4_t_v95)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v96)) > _g4_s11 ? (24u + sizeof(_g4_t_v96)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v97)) > _g4_s12 ? (24u + sizeof(_g4_t_v97)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v98)) > _g4_s13 ? (24u + sizeof(_g4_t_v98)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v99)) > _g4_s14 ? (24u + sizeof(_g4_t_v99)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v100)) > _g4_s15 ? (24u + sizeof(_g4_t_v100)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v101)) > _g4_s16 ? (24u + sizeof(_g4_t_v101)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v102)) > _g4_s17 ? (24u + sizeof(_g4_t_v102)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v103)) > _g4_s18 ? (24u + sizeof(_g4_t_v103)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v104)) > _g4_s19 ? (24u + sizeof(_g4_t_v104)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v105)) > _g4_s20 ? (28u + sizeof(_g4_t_v105)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v106)) > _g4_s21 ? (28u + sizeof(_g4_t_v106)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v107)) > _g4_s22 ? (28u + sizeof(_g4_t_v107)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v108)) > _g4_s23 ? (28u + sizeof(_g4_t_v108)) : _g4_s23,
    _g4_s25 = (28u + sizeof(_g4_t_v109)) > _g4_s24 ? (28u + sizeof(_g4_t_v109)) : _g4_s24,
    _g4_s26 = (28u + sizeof(_g4_t_v110)) > _g4_s25 ? (28u + sizeof(_g4_t_v110)) : _g4_s25,
    _g4_s27 = (28u + sizeof(_g4_t_v111)) > _g4_s26 ? (28u + sizeof(_g4_t_v111)) : _g4_s26,
    _g4_s28 = (28u + sizeof(_g4_t_v112)) > _g4_s27 ? (28u + sizeof(_g4_t_v112)) : _g4_s27,
    _g4_s29 = (28u + sizeof(_g4_t_v113)) > _g4_s28 ? (28u + sizeof(_g4_t_v113)) : _g4_s28,
    _g4_s30 = (32u + sizeof(_g4_t_v114)) > _g4_s29 ? (32u + sizeof(_g4_t_v114)) : _g4_s29,
    _g4_s31 = (32u + sizeof(_g4_t_v115)) > _g4_s30 ? (32u + sizeof(_g4_t_v115)) : _g4_s30,
    _g4_s32 = (32u + sizeof(_g4_t_v116)) > _g4_s31 ? (32u + sizeof(_g4_t_v116)) : _g4_s31,
    _g4_s33 = (39u + sizeof(_g4_t_v117)) > _g4_s32 ? (39u + sizeof(_g4_t_v117)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v118)) > _g4_s33 ? (48u + sizeof(_g4_t_v118)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 0u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 4u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 8u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 16u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 16u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 16u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 16u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 16u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 20u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 24u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 24u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 24u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 24u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 24u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 24u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 24u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 24u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 24u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 28u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 28u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 28u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 28u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 28u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 28u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 28u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 28u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 28u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 32u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 32u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 32u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 39u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 48u);

  v118 = (hkpTriggerVolume::Self **)&self;
  v2 = a2;
  v95 = (hkpTriggerVolume::Self *)self;
  if ( *(self + 11) == (hkpRigidBody::Self *)(a2) )
    return hkpTriggerVolume::triggerBodyLeftWorld((hkpTriggerVolume::Self *)self);
  v87 = (int)(uintptr_t)(*(self + 9));
  v89 = v87 - 1;
  if ( *((uint8_t *)self + 52) == 0 )
  {
    v33 = (int)(uintptr_t)(*(self + 6)) - 1;
    v34 = nullptr;
    v92 = *(self + 5);
    if ( v33 > 0 )
    {
      v99 = (hkpRigidBody::Self *)(a2);
      v35 = 0;
      v36 = (int)(uintptr_t)(*(self + 6)) - 1;
      do
      {
        while ( 1 )
        {
          v108 = (v36 + v35) >> 1;
          hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)v117, *((const hkpRigidBody::Self **)v92 + v108), v99);
          if ( v117[0] == 0 )
            break;
          v35 = v108 + 1;
          if ( v36 <= v108 + 1 )
            goto LABEL_41;
        }
        v36 = (v36 + v35) >> 1;
      }
      while ( v108 > v35 );
LABEL_41:
      v33 = v36;
      v34 = (hkpRigidBody::Self *)v35;
      v2 = (hkpEntity::Self *)(v99);
    }
    if ( v34 != (hkpRigidBody::Self *)v33
      || (v75 = (const hkpRigidBody::Self **)((char *)v92 + 4 * (uint32_t)(uintptr_t)(v34)),
          v102 = v34,
          v111 = 4 * (uint32_t)(uintptr_t)(v34),
          hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)v117, *v75, (const hkpRigidBody::Self *)(v2)),
          v117[0] != 0)
      || (hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)v117, (const hkpRigidBody::Self *)(v2), *v75), v117[0] != 0) )
    {
      v37 = -4;
      v38 = 0;
      v39 = -1;
    }
    else
    {
      v37 = v111;
      v39 = (int)(uintptr_t)(v102);
      v38 = v111 + 4;
    }
    v116 = *((hkpTriggerVolume::Self **)v95 + 5);
    v109 = *((uint32_t *)v95 + 6);
    *((uint32_t *)v95 + 6) = v109 - 1;
    v40 = 4 * (v109 - 1 - v39);
    v41 = (char *)v116 + v38;
    v42 = (char *)v116 + v37;
    for ( i = 0; i < v40; i += 4 )
      *(uint32_t *)&v42[i] = *(uint32_t *)&v41[i];
    v44 = 16 * v89;
    if ( v89 >= 0 )
    {
      v45 = (hkpRigidBody::Self *)(v87 - 1);
      do
      {
        v46 = *((uint32_t *)v95 + 8);
        if ( v2 == *(hkpEntity::Self **)(v46 + v44 + 8) )
        {
          if ( *((uint16_t *)v2 + 3) != 0 )
          {
            v93 = v45;
            do
            {
              v53 = *((uint32_t *)v2 + 1);
              HIWORD(v52) = HIWORD(v53);
              LOWORD(v52) = 0;
              v54 = v52 | (uint16_t)(v53 - 1);
              v55 = v53;
            }
            while ( v55 != __sync_val_compare_and_swap((volatile int32_t *)v2 + 1, v55, v54) );
            v56 = (uint16_t)v54 == 0;
            v45 = v93;
            if ( v56 )
            {
              G4_VCALL<void>(v2, 16);
              v45 = v93;
            }
            v46 = *((uint32_t *)v95 + 8);
          }
          v57 = *((uint32_t *)v95 + 9) - 1;
          *((uint32_t *)v95 + 9) = v57;
          if ( v45 != (hkpRigidBody::Self *)v57 )
          {
            v100 = v45;
            v58 = 16 * v57;
            v59 = (uint32_t *)(v46 + v44);
            v60 = (uint32_t *)(v58 + v46);
            *v59 = *v60;
            v59[1] = v60[1];
            v59[2] = v60[2];
            v59[3] = v60[3];
            v45 = v100;
          }
        }
        v45 = (hkpRigidBody::Self *)((char *)v45 - 1);
        v44 -= 16;
      }
      while ( v45 != (hkpRigidBody::Self *)-1 );
    }
    v115 = (hkpTriggerVolume::Self *)(v2);
    goto LABEL_51;
  }
  v3 = (int)(uintptr_t)(*(self + 14));
  v4 = (int)(uintptr_t)(*(self + 15)) - 1;
  v5 = 0;
  if ( v4 > 0 )
  {
    v90 = (hkpRigidBody::Self *)(a2);
    v6 = (int)(uintptr_t)(*(self + 14));
    do
    {
      while ( 1 )
      {
        v105 = v5;
        v7 = (v4 + v5) >> 1;
        v96 = (hkpRigidBody::Self *)v4;
        hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)v117, *(const hkpRigidBody::Self **)(v6 + 4 * v7), v90);
        v5 = v105;
        v4 = (int)(uintptr_t)(v96);
        if ( v117[0] == 0 )
          break;
        v5 = v7 + 1;
        if ( v7 + 1 >= (int)(uintptr_t)(v96) )
          goto LABEL_8;
      }
      v4 = v7;
    }
    while ( v105 < v7 );
LABEL_8:
    v3 = v6;
    v2 = (hkpEntity::Self *)(v90);
  }
  if ( v5 != v4
    || (v103 = (hkpRigidBody::Self *)(4 * v5),
        v76 = (const hkpRigidBody::Self **)(v3 + 4 * v5),
        v112 = v5,
        hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)v117, *v76, (const hkpRigidBody::Self *)(v2)),
        v117[0] != 0)
    || (hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)v117, (const hkpRigidBody::Self *)(v2), *v76), v117[0] != 0)
    || v112 < 0 )
  {
    v8 = nullptr;
    v9 = *((uint32_t *)v95 + 5);
    v10 = *((uint32_t *)v95 + 6) - 1;
    if ( v10 > 0 )
    {
      v91 = (hkpRigidBody::Self *)(v2);
      v11 = *((uint32_t *)v95 + 5);
      do
      {
        while ( 1 )
        {
          v97 = (hkpRigidBody::Self *)v10;
          v12 = ((int)(uintptr_t)(v8) + v10) >> 1;
          v106 = (int)(uintptr_t)(v8);
          hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)v117, *(const hkpRigidBody::Self **)(v11 + 4 * v12), v91);
          v8 = (hkpRigidBody::Self *)v106;
          v10 = (int)(uintptr_t)(v97);
          if ( v117[0] == 0 )
            break;
          v8 = (hkpRigidBody::Self *)(v12 + 1);
          if ( (int)(uintptr_t)(v97) <= v12 + 1 )
            goto LABEL_15;
        }
        v10 = v12;
      }
      while ( v12 > v106 );
LABEL_15:
      v9 = v11;
      v2 = (hkpEntity::Self *)(v91);
    }
    if ( v8 != (hkpRigidBody::Self *)v10
      || (v84 = (const hkpRigidBody::Self **)(v9 + 4 * (uint32_t)(uintptr_t)(v8)),
          v113 = 4 * (uint32_t)(uintptr_t)(v8),
          v104 = v8,
          hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)v117, *v84, (const hkpRigidBody::Self *)(v2)),
          v117[0] != 0)
      || (hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)v117, (const hkpRigidBody::Self *)(v2), *v84), v117[0] != 0) )
    {
      v13 = -4;
      v14 = 0;
      v15 = -1;
    }
    else
    {
      v13 = v113;
      v15 = (int)(uintptr_t)(v104);
      v14 = v113 + 4;
    }
    v114 = *((hkpTriggerVolume::Self **)v95 + 5);
    v16 = *((uint32_t *)v95 + 6) - 1;
    *((uint32_t *)v95 + 6) = v16;
    v17 = 4 * (v16 - v15);
    v18 = (char *)v114 + v14;
    v19 = (char *)v114 + v13;
    for ( j = 0; v17 > j; j += 4 )
      *(uint32_t *)&v19[j] = *(uint32_t *)&v18[j];
    v21 = (hkpRigidBody::Self *)(v87 - 2);
    if ( v87 - 2 < 0 )
      goto LABEL_84;
    v88 = 16 * (uint32_t)(uintptr_t)(v21);
    v22 = 16 * (uint32_t)(uintptr_t)(v21) - 16;
    v23 = *((uint32_t *)v95 + 8);
    if ( *(hkpEntity::Self **)(v23 + 16 * (uint32_t)(uintptr_t)(v21) + 8) != v2 )
    {
      while ( 1 )
      {
        v21 = (hkpRigidBody::Self *)((char *)v21 - 1);
        if ( v21 == (hkpRigidBody::Self *)-1 )
        {
          v115 = (hkpTriggerVolume::Self *)(v2);
          goto LABEL_27;
        }
        if ( *(hkpEntity::Self **)(v23 + v22 + 8) == v2 )
          break;
        v22 -= 16;
      }
      v88 = v22;
    }
    v86 = v21;
    if ( v21 != nullptr && (v61 = 16 * ((uint32_t)(uintptr_t)(v21) - 1), (v62 = *(hkpTriggerVolume::Self **)(v23 + v61 + 8)) == (hkpTriggerVolume::Self *)(v2)) )
    {
      v74 = v23 + v61 - 8;
      v101 = v21;
      do
      {
        v101 = (hkpRigidBody::Self *)((char *)v101 - 1);
        if ( v101 == nullptr )
          break;
        v74 -= 16;
      }
      while ( *(hkpTriggerVolume::Self **)(v74 + 16) == v62 );
      v110 = v21 - v101 + 1;
      if ( v110 <= 0 )
      {
        v115 = v62;
        v94 = (hkpRigidBody::Self *)(v21 - v101 + 1);
        v68 = v101;
        v86 = v101;
        v88 = 16 * (uint32_t)(uintptr_t)(v101);
LABEL_75:
        v69 = *((uint32_t *)v95 + 9) - v110;
        *((uint32_t *)v95 + 9) = v69;
        v70 = v23 + v88;
        v71 = 16 * (v69 - (uint32_t)(uintptr_t)(v68));
        v72 = v23 + 16 * ((int)(uintptr_t)(v86) + (uint32_t)(uintptr_t)(v94));
        if ( v71 > 0 )
        {
          for ( k = 0; k < v71; k += 4 )
            *(uint32_t *)(v70 + k) = *(uint32_t *)(v72 + k);
          v23 = *((uint32_t *)v95 + 8);
        }
        goto LABEL_27;
      }
      v94 = (hkpRigidBody::Self *)(v21 - v101 + 1);
      v21 = v101;
      v86 = v101;
      v88 = 16 * (uint32_t)(uintptr_t)(v101);
    }
    else
    {
      v94 = (hkpRigidBody::Self *)(&dword_0 + 1);
      v110 = 1;
    }
    v85 = v21;
    v115 = (hkpTriggerVolume::Self *)(v2);
    for ( m = 0; m < v110; ++m )
    {
      if ( *((uint16_t *)v2 + 3) != 0 )
      {
        do
        {
          v65 = *((uint32_t *)v2 + 1);
          HIWORD(v64) = HIWORD(v65);
          LOWORD(v64) = 0;
          v66 = v64 | (uint16_t)(v65 - 1);
          v67 = v65;
        }
        while ( v67 != __sync_val_compare_and_swap((volatile int32_t *)v2 + 1, v67, v66) );
        if ( (uint16_t)v66 == 0 )
          G4_VCALL<void>(v2, 16);
      }
    }
    v68 = v85;
    v23 = *((uint32_t *)v95 + 8);
    goto LABEL_75;
  }
  v77 = *((uint32_t *)v95 + 14);
  v78 = *((uint32_t *)v95 + 15) - 1;
  *((uint32_t *)v95 + 15) = v78;
  v79 = v77 + 4;
  v80 = (char *)v103 + v77;
  v81 = 4 * (v78 - v112);
  v82 = (char *)v103 + v79;
  v83 = 0;
  if ( v81 > 0 )
  {
    v115 = (hkpTriggerVolume::Self *)(v2);
    do
    {
      *(uint32_t *)&v80[v83] = *(uint32_t *)&v82[v83];
      v83 += 4;
    }
    while ( v81 > v83 );
    v23 = *((uint32_t *)v95 + 8);
    goto LABEL_27;
  }
LABEL_84:
  v115 = (hkpTriggerVolume::Self *)(v2);
  v23 = *((uint32_t *)v95 + 8);
LABEL_27:
  v24 = 16 * v89;
  v107 = v23 + 16 * v89;
  v25 = *(uint32_t *)(v107 + 8);
  if ( *(uint16_t *)(v25 + 6) != 0 )
  {
    do
    {
      v27 = *(uint32_t *)(v25 + 4);
      HIWORD(v26) = HIWORD(v27);
      LOWORD(v26) = 0;
      v28 = v26 | (uint16_t)(v27 - 1);
      v29 = v27;
    }
    while ( v29 != __sync_val_compare_and_swap((volatile int32_t *)(v25 + 4), v29, v28) );
    v24 = 16 * v89;
    if ( (uint16_t)v28 == 0 )
      G4_VCALL<void>(v25, 16);
    v23 = *((uint32_t *)v95 + 8);
    v107 = 16 * v89 + v23;
  }
  v30 = v23 + v24 + 16;
  v98 = *((hkpRigidBody::Self **)v95 + 9);
  *((uint32_t *)v95 + 9) = (uint32_t)(uintptr_t)((char *)v98 - 1);
  v31 = 16 * (uint32_t)(uintptr_t)((char *)v98 - v89 - 1);
  if ( v31 > 0 )
  {
    for ( n = 0; n < v31; n += 4 )
      *(uint32_t *)(v107 + n) = *(uint32_t *)(v30 + n);
  }
LABEL_51:
  G4_VCALL<void>(v95, 20, v2, 2);
  result = hkpEntity::removeEntityListener((int)(uintptr_t)(v115), (int)(uintptr_t)(v95) + 16);
  if ( *((uint16_t *)v2 + 3) != 0 )
  {
    do
    {
      v49 = *((uint32_t *)v2 + 1);
      HIWORD(v48) = HIWORD(v49);
      LOWORD(v48) = 0;
      v50 = v48 | (uint16_t)(v49 - 1);
      v51 = v49;
      result = __sync_val_compare_and_swap((volatile int32_t *)v2 + 1, v51, v50);
    }
    while ( v51 != result );
    if ( (uint16_t)v50 == 0 )
      return (*(int (**)(hkpTriggerVolume::Self *))(*(uint32_t *)v2 + 16))(v115);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::entityShapeSetCallback  (binary VA: 0x18250f0)
// Original: hkpTriggerVolume::entityShapeSetCallback
// ----------------------------------------------------------------------------
hkpTriggerVolume::Self * hkpTriggerVolume::entityShapeSetCallback(hkpTriggerVolume::Self *self, hkpEntity::Self *a2)
{
  hkpTriggerVolume::Self *result;
  int v3;

  result = self;
  v3 = *((uint32_t *)self + 9);
  if ( v3 != 0 && *(uint32_t *)(*((uint32_t *)self + 8) + 16 * (v3 - 1) + 12) == 1 )
  {
    if ( *((hkpEntity::Self **)self + 11) == a2 )
      return (hkpTriggerVolume::Self *)hkpTriggerVolume::triggerBodyLeftBroadphase(self);
    else
      return (hkpTriggerVolume::Self *)G4_VCALL<int>(self, 52, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::postSimulationCallback  (binary VA: 0x1825320)
// Original: hkpTriggerVolume::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpTriggerVolume::postSimulationCallback(hkpTriggerVolume::Self *self)
{
  hkpTriggerVolume::Self *v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  const hkpTriggerVolume::EventInfo::Self *v9;
  int v10;
  int v11;
  uint32_t *v12;
  const hkpTriggerVolume::EventInfo::Self *v13;
  int i;
  const hkpTriggerVolume::EventInfo::Self *v15;
  int v16;
  int v17;
  int v18;
  const hkpRigidBody::Self **v19;
  int v20;
  unsigned int v21;
  int v22;
  int32_t v23; // kr00_4
  int32_t v24;
  int32_t v25; // ett
  int v26;
  int v27;
  int v28;
  int32_t v29; // kr04_4
  int32_t v30;
  int32_t v31; // ett
  const hkpRigidBody::Self **v32;
  int v33;
  int v34;
  int v35;
  int32_t v36; // kr08_4
  int32_t v37; // ett
  int v38;
  int v39;
  int32_t v40; // kr0C_4
  int32_t v41; // ett
  int v42;
  int v43;
  const hkpRigidBody::Self *v44;
  int v45;
  int32_t v46; // kr10_4
  int v47;
  int v48;
  int result;
  int v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef hkpTriggerVolume::Self *_g4_t_v53;
  typedef hkMemoryAllocator::Self *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef const hkpTriggerVolume::EventInfo::Self *_g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef const hkpRigidBody::Self **_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef const hkpTriggerVolume::EventInfo::Self *_g4_t_v70;
  typedef const hkpTriggerVolume::EventInfo::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef hkpRigidBody::Self *_g4_t_v73;
  typedef hkpRigidBody::Self *_g4_t_v74;
  typedef unsigned int _g4_t_v75;
  typedef const hkpRigidBody::Self **_g4_t_v76;
  typedef char _g4_t_v77;
  typedef int _g4_t_v78;
  typedef g4_int128_t _g4_t_v79;
  typedef uint32_t _g4_t_v80[10];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v51)) > _g4_s0 ? (12u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v52)) > _g4_s1 ? (20u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v53)) > _g4_s2 ? (24u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v54)) > _g4_s3 ? (28u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v55)) > _g4_s4 ? (32u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v56)) > _g4_s5 ? (36u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v57)) > _g4_s6 ? (40u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v58)) > _g4_s7 ? (44u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v59)) > _g4_s8 ? (48u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v60)) > _g4_s9 ? (52u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v61)) > _g4_s10 ? (56u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v62)) > _g4_s11 ? (60u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v63)) > _g4_s12 ? (60u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v64)) > _g4_s13 ? (60u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v65)) > _g4_s14 ? (60u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v66)) > _g4_s15 ? (64u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v67)) > _g4_s16 ? (64u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v68)) > _g4_s17 ? (64u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v69)) > _g4_s18 ? (68u + sizeof(_g4_t_v69)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v70)) > _g4_s19 ? (72u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v71)) > _g4_s20 ? (72u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v72)) > _g4_s21 ? (72u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v73)) > _g4_s22 ? (80u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v74)) > _g4_s23 ? (80u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v75)) > _g4_s24 ? (84u + sizeof(_g4_t_v75)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v76)) > _g4_s25 ? (84u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (91u + sizeof(_g4_t_v77)) > _g4_s26 ? (91u + sizeof(_g4_t_v77)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v78)) > _g4_s27 ? (92u + sizeof(_g4_t_v78)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v79)) > _g4_s28 ? (96u + sizeof(_g4_t_v79)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v80)) > _g4_s29 ? (112u + sizeof(_g4_t_v80)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 64u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 80u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 84u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 84u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 91u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 92u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 96u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 112u);

  v80[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  v53 = self;
  v2 = *((uint32_t *)self + 6);
  v3 = (int *)((char *)self + 56);
  *((uint8_t *)self + 52) = 1;
  v4 = *((uint32_t *)v1 + 16) & 0x3FFFFFFF;
  v54 = (hkMemoryAllocator::Self *)v3;
  if ( v2 > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < v2 )
      v5 = v2;
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v78, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v3, v5, 4);
  }
  v6 = *((uint32_t *)v53 + 9);
  v61 = *((uint32_t *)v53 + 8);
  v60 = v61;
  if ( v6 > 1 )
  {
    v56 = 0;
    v52 = v6 - 1;
    v7 = 0;
    while ( 2 )
    {
      v58 = v7;
      v8 = v52;
      v79 = *(g4_int128_t *)(v61 + 16 * ((v7 + v52) >> 1));
      do
      {
        while ( 1 )
        {
          v70 = (const hkpTriggerVolume::EventInfo::Self *)(v61 + 16 * v58);
          hkpTriggerVolume::bodyOrderForQueues((hkpTriggerVolume::Self *)&v77, v70, (const hkpTriggerVolume::EventInfo::Self *)&v79);
          if ( v77 == 0 )
            break;
          ++v58;
        }
        v9 = (const hkpTriggerVolume::EventInfo::Self *)(16 * v8 + v61);
        while ( 1 )
        {
          v73 = (hkpRigidBody::Self *)(v9);
          hkpTriggerVolume::bodyOrderForQueues((hkpTriggerVolume::Self *)&v77, (const hkpTriggerVolume::EventInfo::Self *)&v79, v9);
          v9 = (const hkpTriggerVolume::EventInfo::Self *)((char *)v9 - 16);
          if ( v77 == 0 )
            break;
          --v8;
        }
        if ( v58 > v8 )
        {
          v55 = v8;
          if ( v56 >= v8 )
            goto LABEL_14;
          goto LABEL_21;
        }
        if ( v58 != v8 )
        {
          v69 = *((uint32_t *)v73 + 1);
          v66 = *(uint32_t *)v73;
          *(uint32_t *)v73 = *(uint32_t *)v70;
          v10 = *((uint32_t *)v73 + 2);
          *((uint32_t *)v73 + 1) = *((uint32_t *)v70 + 1);
          *((uint32_t *)v73 + 2) = *((uint32_t *)v70 + 2);
          v62 = *((uint32_t *)v73 + 3);
          *((uint32_t *)v73 + 3) = *((uint32_t *)v70 + 3);
          *(uint32_t *)v70 = v66;
          *((uint32_t *)v70 + 1) = v69;
          *((uint32_t *)v70 + 3) = v62;
          *((uint32_t *)v70 + 2) = v10;
        }
        --v8;
        ++v58;
      }
      while ( v58 <= v8 );
      v55 = v8;
      if ( v56 >= v8 )
        goto LABEL_14;
LABEL_21:
      v11 = v56;
      while ( 2 )
      {
        v67 = v11;
        v63 = v55;
        v12 = (uint32_t *)(v61 + 16 * ((v11 + v55) >> 1));
        v80[0] = *v12;
        v80[1] = v12[1];
        v80[2] = v12[2];
        v80[3] = v12[3];
        do
        {
          while ( 1 )
          {
            v59 = (const hkpTriggerVolume::EventInfo::Self *)(v61 + 16 * v67);
            hkpTriggerVolume::bodyOrderForQueues(
              (hkpTriggerVolume::Self *)&v77,
              v59,
              (const hkpTriggerVolume::EventInfo::Self *)v80);
            if ( v77 == 0 )
              break;
            ++v67;
          }
          v13 = (const hkpTriggerVolume::EventInfo::Self *)(16 * v63 + v61);
          for ( i = v63; ; --i )
          {
            v71 = v13;
            hkpTriggerVolume::bodyOrderForQueues(
              (hkpTriggerVolume::Self *)&v77,
              (const hkpTriggerVolume::EventInfo::Self *)v80,
              v13);
            v13 = (const hkpTriggerVolume::EventInfo::Self *)((char *)v13 - 16);
            if ( v77 == 0 )
              break;
          }
          v64 = i;
          if ( v67 > i )
          {
            if ( v56 >= i )
              goto LABEL_29;
            goto LABEL_36;
          }
          if ( v67 != i )
          {
            v15 = v71;
            v16 = *((uint32_t *)v71 + 1);
            v72 = *(uint32_t *)v71;
            *(uint32_t *)v15 = *(uint32_t *)v59;
            *((uint32_t *)v15 + 1) = *((uint32_t *)v59 + 1);
            v17 = *((uint32_t *)v15 + 2);
            *((uint32_t *)v15 + 2) = *((uint32_t *)v59 + 2);
            v57 = v17;
            v18 = *((uint32_t *)v15 + 3);
            *((uint32_t *)v15 + 3) = *((uint32_t *)v59 + 3);
            *(uint32_t *)v59 = v72;
            *((uint32_t *)v59 + 1) = v16;
            *((uint32_t *)v59 + 2) = v57;
            *((uint32_t *)v59 + 3) = v18;
          }
          v63 = v64 - 1;
          ++v67;
        }
        while ( v67 <= v63 );
        i = v63;
        if ( v56 < v63 )
LABEL_36:
          hkAlgorithm::quickSortRecursive_13ead0(
            v61,
            v56,
            i,
            (void (*)(char *))hkpTriggerVolume::bodyOrderForQueues);
LABEL_29:
        if ( v67 < v55 )
        {
          v56 = v67;
          v11 = v67;
          continue;
        }
        break;
      }
LABEL_14:
      if ( v52 > v58 )
      {
        v56 = v58;
        v7 = v58;
        continue;
      }
      break;
    }
    v6 = *((uint32_t *)v53 + 9);
    v60 = *((uint32_t *)v53 + 8);
  }
  v65 = *((const hkpRigidBody::Self ***)v53 + 5);
  v68 = (unsigned int)(uintptr_t)(&v65[*((uint32_t *)v53 + 6)]);
  if ( v60 < 16 * v6 + v60 )
  {
    do
    {
      v19 = v65;
      v74 = *(hkpRigidBody::Self **)(v60 + 8);
      while ( (unsigned int)(uintptr_t)(v19) < v68 )
      {
        hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)&v77, *v19, v74);
        if ( v77 == 0 )
          break;
        v43 = *((uint32_t *)v53 + 15);
        if ( v43 == (*((uint32_t *)v53 + 16) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v54, 4, v51);
          v43 = *((uint32_t *)v53 + 15);
        }
        v44 = *v19++;
        *(uint32_t *)(*((uint32_t *)v53 + 14) + 4 * v43) = (uint32_t)(uintptr_t)(v44);
        ++*((uint32_t *)v53 + 15);
      }
      v65 = v19;
      if ( v19 == (const hkpRigidBody::Self **)v68
        || (hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)&v77, v74, *v19), v77 != 0) )
      {
        v21 = *((uint32_t *)v74 + 1);
        if ( HIWORD(v21) != 0 )
        {
          do
          {
            v46 = *((uint32_t *)v74 + 1);
            HIWORD(v45) = HIWORD(v46);
            LOWORD(v45) = 0;
          }
          while ( v46 != __sync_val_compare_and_swap(
                           (volatile int32_t *)v74 + 1,
                           v46,
                           v45 | (uint16_t)(v46 + 1)) );
          v21 = *((uint32_t *)v74 + 1);
        }
        v20 = 2;
      }
      else
      {
        v65 = v19 + 1;
        v20 = 1;
        v21 = *((uint32_t *)v74 + 1);
      }
      v75 = v60;
      while ( 1 )
      {
        v20 = dword_1D1AA20[4 * v20 + *(uint32_t *)(v75 + 12)];
        if ( HIWORD(v21) != 0 )
        {
          do
          {
            v23 = *((uint32_t *)v74 + 1);
            HIWORD(v22) = HIWORD(v23);
            LOWORD(v22) = 0;
            v24 = v22 | (uint16_t)(v23 - 1);
            v25 = v23;
          }
          while ( v25 != __sync_val_compare_and_swap((volatile int32_t *)v74 + 1, v25, v24) );
          if ( (uint16_t)v24 == 0 )
            G4_VCALL<void>(v74, 16);
        }
        v26 = *((uint32_t *)v53 + 9);
        v75 += 16;
        if ( v75 >= *((uint32_t *)v53 + 8) + 16 * v26 || v74 != *(hkpRigidBody::Self **)(v75 + 8) )
          break;
        v21 = *((uint32_t *)v74 + 1);
      }
      v27 = *((uint32_t *)v53 + 8);
      switch ( v20 )
      {
        case 1:
          v42 = *((uint32_t *)v53 + 15);
          if ( v42 == (*((uint32_t *)v53 + 16) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v54, 4, v51);
            v42 = *((uint32_t *)v53 + 15);
          }
          *(uint32_t *)(*((uint32_t *)v53 + 14) + 4 * v42) = (uint32_t)(uintptr_t)(v74);
          ++*((uint32_t *)v53 + 15);
          v27 = *((uint32_t *)v53 + 8);
          v26 = *((uint32_t *)v53 + 9);
          break;
        case 2:
          if ( *((uint16_t *)v74 + 3) != 0 )
          {
            do
            {
              v40 = *((uint32_t *)v74 + 1);
              HIWORD(v39) = HIWORD(v40);
              LOWORD(v39) = 0;
              v30 = v39 | (uint16_t)(v40 - 1);
              v41 = v40;
            }
            while ( v41 != __sync_val_compare_and_swap((volatile int32_t *)v74 + 1, v41, v30) );
            goto LABEL_54;
          }
          break;
        case 3:
        case 4:
          v38 = *((uint32_t *)v53 + 15);
          if ( v38 == (*((uint32_t *)v53 + 16) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v54, 4, v51);
            v38 = *((uint32_t *)v53 + 15);
          }
          *(uint32_t *)(*((uint32_t *)v53 + 14) + 4 * v38) = (uint32_t)(uintptr_t)(v74);
          ++*((uint32_t *)v53 + 15);
          hkpEntity::addEntityListener((int)(uintptr_t)(v74), (int)(uintptr_t)(v53) + 16);
          G4_VCALL<void>(v53, 20, v74, 1);
          v26 = *((uint32_t *)v53 + 9);
          v68 = *((uint32_t *)v53 + 5) + 4 * *((uint32_t *)v53 + 6);
          v27 = *((uint32_t *)v53 + 8);
          break;
        case 5:
          G4_VCALL<void>(v53, 20, v74, 3);
          v68 = *((uint32_t *)v53 + 5) + 4 * *((uint32_t *)v53 + 6);
          if ( *((uint16_t *)v74 + 3) == 0 )
            goto LABEL_56;
          do
          {
            v36 = *((uint32_t *)v74 + 1);
            HIWORD(v35) = HIWORD(v36);
            LOWORD(v35) = 0;
            v30 = v35 | (uint16_t)(v36 - 1);
            v37 = v36;
          }
          while ( v37 != __sync_val_compare_and_swap((volatile int32_t *)v74 + 1, v37, v30) );
          goto LABEL_54;
        case 6:
          hkpEntity::removeEntityListener((int)(uintptr_t)(v74), (int)(uintptr_t)(v53) + 16);
          G4_VCALL<void>(v53, 20, v74, 2);
          v68 = *((uint32_t *)v53 + 5) + 4 * *((uint32_t *)v53 + 6);
          if ( *((uint16_t *)v74 + 3) != 0 )
          {
            do
            {
              v29 = *((uint32_t *)v74 + 1);
              HIWORD(v28) = HIWORD(v29);
              LOWORD(v28) = 0;
              v30 = v28 | (uint16_t)(v29 - 1);
              v31 = v29;
            }
            while ( v31 != __sync_val_compare_and_swap((volatile int32_t *)v74 + 1, v31, v30) );
LABEL_54:
            if ( (uint16_t)v30 == 0 )
              G4_VCALL<void>(v74, 16);
          }
LABEL_56:
          v27 = *((uint32_t *)v53 + 8);
          v26 = *((uint32_t *)v53 + 9);
          break;
        default:
          break;
      }
      v60 = v75;
    }
    while ( v75 < 16 * v26 + v27 );
  }
  if ( v68 <= (unsigned int)(uintptr_t)(v65) )
  {
    v33 = *((uint32_t *)v53 + 15);
  }
  else
  {
    v32 = v65;
    v33 = *((uint32_t *)v53 + 15);
    do
    {
      if ( (*((uint32_t *)v53 + 16) & 0x3FFFFFFF) == v33 )
      {
        v76 = v32;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v54, 4, v51);
        v33 = *((uint32_t *)v53 + 15);
        v32 = v76;
      }
      v34 = (int)(uintptr_t)(*v32++);
      *(uint32_t *)(*((uint32_t *)v53 + 14) + 4 * v33) = v34;
      v33 = *((uint32_t *)v53 + 15) + 1;
      *((uint32_t *)v53 + 15) = v33;
    }
    while ( (unsigned int)(uintptr_t)(v32) < v68 );
  }
  v47 = *((uint32_t *)v53 + 5);
  *((uint32_t *)v53 + 6) = v33;
  v48 = *((uint32_t *)v53 + 14);
  result = *((uint32_t *)v53 + 7);
  *((uint32_t *)v53 + 14) = v47;
  v50 = *((uint32_t *)v53 + 16);
  *((uint32_t *)v53 + 9) = 0;
  *((uint32_t *)v53 + 12) = 0;
  *((uint32_t *)v53 + 5) = v48;
  *((uint32_t *)v53 + 7) = v50;
  *((uint32_t *)v53 + 16) = result;
  *((uint32_t *)v53 + 15) = 0;
  *((uint8_t *)v53 + 52) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::updateOverlaps  (binary VA: 0x1825c80)
// Original: hkpTriggerVolume::updateOverlaps
// ----------------------------------------------------------------------------
int hkpTriggerVolume::updateOverlaps(hkpTriggerVolume::Self *self)
{
  hkpTriggerVolume::Self *v1;
  hkpTriggerVolume::Self *v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  const hkpRigidBody::Self *v15;
  int i;
  int v17;
  int v18;
  const hkpRigidBody::Self **v19;
  const hkpRigidBody::Self *v20;
  int v21;
  const hkpRigidBody::Self **v22;
  const hkpRigidBody::Self *v23;
  const hkpRigidBody::Self *v24;
  const hkpRigidBody::Self *v25;
  int v26;
  int v27;
  int v28;
  const hkpRigidBody::Self **v29;
  hkpRigidBody::Self *v30;
  const hkpRigidBody::Self *v31;
  int v32;
  const hkpRigidBody::Self *v33;
  int *v34;
  int *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int32_t v40; // kr04_4
  const hkpRigidBody::Self *v41;
  int v42;
  int32_t v43; // kr08_4
  int32_t v44;
  int32_t v45; // ett
  int v46;
  int32_t v47; // kr0C_4
  int v48;
  const hkpRigidBody::Self *v49;
  hkpTriggerVolume::Self *v50;
  uint32_t *v51;
  int v52;
  int32_t v53; // kr10_4
  int32_t v54;
  int32_t v55; // ett
  int v56;
  int v57;
  int result;
  int v59;
  bool v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef hkpTriggerVolume::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef const hkpRigidBody::Self **_g4_t_v67;
  typedef int _g4_t_v68;
  typedef const hkpRigidBody::Self **_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int *_g4_t_v71;
  typedef const hkpRigidBody::Self **_g4_t_v72;
  typedef int _g4_t_v73;
  typedef hkpTriggerVolume::Self *_g4_t_v74;
  typedef hkpTriggerVolume::Self *_g4_t_v75;
  typedef hkpTriggerVolume::Self *_g4_t_v76;
  typedef const hkpRigidBody::Self **_g4_t_v77;
  typedef const hkpRigidBody::Self **_g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef const hkpRigidBody::Self *_g4_t_v80;
  typedef hkpRigidBody::Self *_g4_t_v81;
  typedef hkpRigidBody::Self *_g4_t_v82;
  typedef hkpRigidBody::Self *_g4_t_v83;
  typedef hkpRigidBody::Self *_g4_t_v84;
  typedef hkpRigidBody::Self *_g4_t_v85;
  typedef hkpRigidBody::Self *_g4_t_v86;
  typedef hkpRigidBody::Self *_g4_t_v87;
  typedef hkpRigidBody::Self *_g4_t_v88;
  typedef hkpTriggerVolume::Self *_g4_t_v89;
  typedef hkpTriggerVolume::Self *_g4_t_v90;
  typedef const hkpRigidBody::Self **_g4_t_v91;
  typedef hkpTriggerVolume::Self *_g4_t_v92;
  typedef char _g4_t_v93[7];
  typedef char _g4_t_v94;
  typedef const hkpRigidBody::Self **_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef hkpTriggerVolume::Self **_g4_t_v98;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v61)) > _g4_s0 ? (0u + sizeof(_g4_t_v61)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v62)) > _g4_s1 ? (16u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v63)) > _g4_s2 ? (20u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v64)) > _g4_s3 ? (24u + sizeof(_g4_t_v64)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v65)) > _g4_s4 ? (28u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v66)) > _g4_s5 ? (32u + sizeof(_g4_t_v66)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v67)) > _g4_s6 ? (36u + sizeof(_g4_t_v67)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v68)) > _g4_s7 ? (36u + sizeof(_g4_t_v68)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v69)) > _g4_s8 ? (36u + sizeof(_g4_t_v69)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v70)) > _g4_s9 ? (40u + sizeof(_g4_t_v70)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v71)) > _g4_s10 ? (40u + sizeof(_g4_t_v71)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v72)) > _g4_s11 ? (44u + sizeof(_g4_t_v72)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v73)) > _g4_s12 ? (44u + sizeof(_g4_t_v73)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v74)) > _g4_s13 ? (44u + sizeof(_g4_t_v74)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v75)) > _g4_s14 ? (44u + sizeof(_g4_t_v75)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v76)) > _g4_s15 ? (44u + sizeof(_g4_t_v76)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v77)) > _g4_s16 ? (48u + sizeof(_g4_t_v77)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v78)) > _g4_s17 ? (48u + sizeof(_g4_t_v78)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v79)) > _g4_s18 ? (48u + sizeof(_g4_t_v79)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v80)) > _g4_s19 ? (48u + sizeof(_g4_t_v80)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v81)) > _g4_s20 ? (52u + sizeof(_g4_t_v81)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v82)) > _g4_s21 ? (52u + sizeof(_g4_t_v82)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v83)) > _g4_s22 ? (52u + sizeof(_g4_t_v83)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v84)) > _g4_s23 ? (52u + sizeof(_g4_t_v84)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v85)) > _g4_s24 ? (52u + sizeof(_g4_t_v85)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v86)) > _g4_s25 ? (52u + sizeof(_g4_t_v86)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v87)) > _g4_s26 ? (52u + sizeof(_g4_t_v87)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v88)) > _g4_s27 ? (52u + sizeof(_g4_t_v88)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v89)) > _g4_s28 ? (56u + sizeof(_g4_t_v89)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v90)) > _g4_s29 ? (56u + sizeof(_g4_t_v90)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v91)) > _g4_s30 ? (56u + sizeof(_g4_t_v91)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v92)) > _g4_s31 ? (56u + sizeof(_g4_t_v92)) : _g4_s31,
    _g4_s33 = (60u + sizeof(_g4_t_v93)) > _g4_s32 ? (60u + sizeof(_g4_t_v93)) : _g4_s32,
    _g4_s34 = (67u + sizeof(_g4_t_v94)) > _g4_s33 ? (67u + sizeof(_g4_t_v94)) : _g4_s33,
    _g4_s35 = (68u + sizeof(_g4_t_v95)) > _g4_s34 ? (68u + sizeof(_g4_t_v95)) : _g4_s34,
    _g4_s36 = (72u + sizeof(_g4_t_v96)) > _g4_s35 ? (72u + sizeof(_g4_t_v96)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v97)) > _g4_s36 ? (76u + sizeof(_g4_t_v97)) : _g4_s36,
    _g4_s38 = (92u + sizeof(_g4_t_v98)) > _g4_s37 ? (92u + sizeof(_g4_t_v98)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 0u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 44u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 48u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 48u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 52u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 52u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 52u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 52u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 52u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 52u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 56u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 56u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 56u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 67u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 68u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 72u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 76u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 92u);

  v1 = nullptr;
  v98 = &self;
  v2 = self;
  v63 = self;
  *((uint8_t *)self + 52) = 1;
  v89 = *((hkpTriggerVolume::Self **)v2 + 9);
  if ( (int)(uintptr_t)(v89) > 0 )
  {
    do
    {
      v3 = *((uint32_t *)v63 + 8) + 16 * (uint32_t)(uintptr_t)(v1);
      v4 = *(uint32_t *)(v3 + 8);
      if ( *(uint16_t *)(v4 + 6) != 0 )
      {
        v81 = (hkpRigidBody::Self *)(*(uint32_t *)(v3 + 8) + 4);
        do
        {
          v6 = *(uint32_t *)(v4 + 4);
          HIWORD(v5) = HIWORD(v6);
          LOWORD(v5) = 0;
          v7 = v5 | (uint16_t)(v6 - 1);
          v8 = v6;
        }
        while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)v81, v8, v7) );
        if ( (uint16_t)v7 == 0 )
          G4_VCALL<void>(v4, 16);
      }
      v1 = (hkpTriggerVolume::Self *)((char *)v1 + 1);
    }
    while ( v1 != v89 );
  }
  v9 = 0;
  v10 = 0;
  v95 = nullptr;
  v96 = 0;
  v97 = 0x80000000;
  *((uint32_t *)v63 + 9) = 0;
  v90 = *((hkpTriggerVolume::Self **)v63 + 11);
  v82 = *((hkpRigidBody::Self **)v90 + 25);
  if ( (int)(uintptr_t)(v82) <= 0 )
    goto LABEL_49;
  while ( 1 )
  {
    v11 = (uint32_t *)(*((uint32_t *)v90 + 24) + 8 * v10);
    v12 = *(uint32_t *)(*v11 + 8);
    v13 = v9;
    if ( *(uint32_t *)(v12 + 8) == 0 && *(uint16_t *)(*(uint32_t *)(v12 + 60) + 4) != 0 )
    {
      v14 = v11[1];
      v15 = nullptr;
      if ( *(uint8_t *)(v14 + 24) == 1 )
      {
        v15 = (const hkpRigidBody::Self *)(v14 + *(char *)(v14 + 16));
        if ( (v97 & 0x3FFFFFFF) != v9 )
          goto LABEL_15;
      }
      else if ( (v97 & 0x3FFFFFFF) != v9 )
      {
LABEL_15:
        v95[v9] = v15;
        v13 = ++v96;
        goto LABEL_16;
      }
      v80 = v15;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v95, 4, v61);
      v9 = v96;
      v15 = v80;
      goto LABEL_15;
    }
LABEL_16:
    if ( (hkpRigidBody::Self *)++v10 == v82 )
      break;
    v9 = v13;
  }
  v70 = (int)(uintptr_t)(v95);
  if ( v13 > 1 )
  {
    v65 = 0;
    v62 = v13 - 1;
    for ( i = 0; ; i = v66 )
    {
      v66 = i;
      v17 = i + v62;
      v18 = v62;
      v83 = *(hkpRigidBody::Self **)(v70 + 4 * (v17 >> 1));
      do
      {
        while ( 1 )
        {
          v72 = (const hkpRigidBody::Self **)(v70 + 4 * v66);
          hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)&v94, *v72, v83);
          if ( v94 == 0 )
            break;
          ++v66;
        }
        v19 = (const hkpRigidBody::Self **)(v70 + 4 * v18);
        while ( 1 )
        {
          v20 = *v19;
          v77 = v19--;
          hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)&v94, v83, v20);
          if ( v94 == 0 )
            break;
          --v18;
        }
        if ( v66 > v18 )
          break;
        if ( v66 != v18 )
        {
          v25 = *v77;
          *v77 = *v72;
          *v72 = v25;
        }
        --v18;
        ++v66;
      }
      while ( v66 <= v18 );
      v64 = v18;
      if ( v65 < v18 )
      {
        while ( 2 )
        {
          v21 = v64;
          v73 = v65;
          v84 = *(hkpRigidBody::Self **)(v70 + 4 * ((v65 + v64) >> 1));
          do
          {
            while ( 1 )
            {
              v67 = (const hkpRigidBody::Self **)(v70 + 4 * v73);
              hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)&v94, *v67, v84);
              if ( v94 == 0 )
                break;
              ++v73;
            }
            v22 = (const hkpRigidBody::Self **)(v70 + 4 * v21);
            while ( 1 )
            {
              v23 = *v22;
              v78 = v22--;
              hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)&v94, v84, v23);
              if ( v94 == 0 )
                break;
              --v21;
            }
            if ( v73 > v21 )
            {
              if ( v65 >= v21 )
                goto LABEL_30;
              goto LABEL_43;
            }
            if ( v73 != v21 )
            {
              v24 = *v78;
              *v78 = *v67;
              *v67 = v24;
            }
            --v21;
            ++v73;
          }
          while ( v73 <= v21 );
          if ( v65 < v21 )
LABEL_43:
            hkAlgorithm::quickSortRecursive_8e8fcd(
              v70,
              v65,
              v21,
              (void (*)(uint8_t *))hkpTriggerVolume::bodyOrderForArrays);
LABEL_30:
          if ( v73 < v64 )
          {
            v65 = v73;
            continue;
          }
          break;
        }
      }
      if ( v62 <= v66 )
        break;
      v65 = v66;
    }
  }
LABEL_49:
  v71 = (int *)((char *)v63 + 56);
  v26 = *((uint32_t *)v63 + 6);
  v27 = *((uint32_t *)v63 + 16) & 0x3FFFFFFF;
  if ( v26 > v27 )
  {
    v28 = 2 * v27;
    if ( v28 >= v26 )
      v26 = v28;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v93, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v71, v26, 4);
    v26 = *((uint32_t *)v63 + 6);
  }
  v29 = v95;
  v79 = (unsigned int)(uintptr_t)(&v95[v96]);
  v91 = *((const hkpRigidBody::Self ***)v63 + 5);
  v30 = (hkpRigidBody::Self *)&v91[v26];
  v85 = v30;
LABEL_54:
  if ( v91 < (const hkpRigidBody::Self **)v30 )
  {
    while ( (unsigned int)(uintptr_t)(v29) < v79 )
    {
      hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)&v94, *v29, *v91);
      v31 = *v29;
      if ( v94 == 0 )
      {
        hkpTriggerVolume::bodyOrderForArrays((hkpTriggerVolume::Self *)&v94, *v91, v31);
        if ( v94 != 0 )
        {
          hkpEntity::removeEntityListener((int)(uintptr_t)(*v91), (int)(uintptr_t)(v63) + 16);
          G4_VCALL<void>(v63, 20, *v91, 2);
          v85 = (hkpRigidBody::Self *)(*((uint32_t *)v63 + 5) + 4 * *((uint32_t *)v63 + 6));
          v41 = *v91;
          v74 = (hkpTriggerVolume::Self *)((const hkpRigidBody::Self *)((char *)*v91 + 4));
          if ( *((uint16_t *)*v91 + 3) != 0 )
          {
            v69 = v29;
            do
            {
              v43 = *((uint32_t *)v41 + 1);
              HIWORD(v42) = HIWORD(v43);
              LOWORD(v42) = 0;
              v44 = v42 | (uint16_t)(v43 - 1);
              v45 = v43;
            }
            while ( v45 != __sync_val_compare_and_swap((volatile int32_t *)v74, v45, v44) );
            v29 = v69;
            if ( (uint16_t)v44 == 0 )
              G4_VCALL<void>(v41, 16);
          }
        }
        else
        {
          v48 = *((uint32_t *)v63 + 15);
          if ( v48 == (*((uint32_t *)v63 + 16) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)v71,
              4,
              v61);
            v48 = *((uint32_t *)v63 + 15);
          }
          v49 = *v29++;
          *(uint32_t *)(*((uint32_t *)v63 + 14) + 4 * v48) = (uint32_t)(uintptr_t)(v49);
          ++*((uint32_t *)v63 + 15);
        }
        ++v91;
        v30 = v85;
        goto LABEL_54;
      }
      if ( *((uint16_t *)v31 + 3) != 0 )
      {
        v75 = (hkpTriggerVolume::Self *)(*v29);
        v87 = (hkpRigidBody::Self *)((const hkpRigidBody::Self *)((char *)v31 + 4));
        do
        {
          v47 = *((uint32_t *)v75 + 1);
          HIWORD(v46) = HIWORD(v47);
          LOWORD(v46) = 0;
        }
        while ( v47 != __sync_val_compare_and_swap(
                         (volatile int32_t *)v87,
                         v47,
                         v46 | (uint16_t)(v47 + 1)) );
        v31 = *v29;
      }
      hkpEntity::addEntityListener((int)(uintptr_t)(v31), (int)(uintptr_t)(v63) + 16);
      v32 = *((uint32_t *)v63 + 15);
      if ( v32 == (*((uint32_t *)v63 + 16) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v71, 4, v61);
        v32 = *((uint32_t *)v63 + 15);
      }
      v33 = *v29++;
      *(uint32_t *)(*((uint32_t *)v63 + 14) + 4 * v32) = (uint32_t)(uintptr_t)(v33);
      ++*((uint32_t *)v63 + 15);
      G4_VCALL<void>(v63, 20, *(v29 - 1), 1);
      v85 = (hkpRigidBody::Self *)(*((uint32_t *)v63 + 5) + 4 * *((uint32_t *)v63 + 6));
      if ( v91 >= (const hkpRigidBody::Self **)v85 )
        break;
    }
  }
  v34 = (int *)v91;
  if ( v79 > (unsigned int)(uintptr_t)(v29) )
  {
    v35 = (int *)v29;
    do
    {
      v38 = *v35;
      if ( *(uint16_t *)(*v35 + 6) != 0 )
      {
        v68 = *v35;
        v86 = (hkpRigidBody::Self *)(v38 + 4);
        do
        {
          v40 = *(uint32_t *)(v68 + 4);
          HIWORD(v39) = HIWORD(v40);
          LOWORD(v39) = 0;
        }
        while ( v40 != __sync_val_compare_and_swap(
                         (volatile int32_t *)v86,
                         v40,
                         v39 | (uint16_t)(v40 + 1)) );
        v38 = *v35;
      }
      hkpEntity::addEntityListener(v38, (int)(uintptr_t)(v63) + 16);
      v36 = *((uint32_t *)v63 + 15);
      if ( v36 == (*((uint32_t *)v63 + 16) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v71, 4, v61);
        v36 = *((uint32_t *)v63 + 15);
      }
      v37 = *v35++;
      *(uint32_t *)(*((uint32_t *)v63 + 14) + 4 * v36) = v37;
      ++*((uint32_t *)v63 + 15);
      G4_VCALL<void>(v63, 20, *(v35 - 1), 1);
    }
    while ( (unsigned int)(uintptr_t)(v35) < v79 );
    v34 = (int *)v91;
    v85 = (hkpRigidBody::Self *)(*((uint32_t *)v63 + 5) + 4 * *((uint32_t *)v63 + 6));
  }
  v50 = v63;
  if ( v85 > (hkpRigidBody::Self *)v34 )
  {
    do
    {
      hkpEntity::removeEntityListener(*v34, (int)(uintptr_t)(v63) + 16);
      G4_VCALL<void>(v50, 20, *v34, 2);
      v51 = (uint32_t *)*v34;
      v92 = (hkpTriggerVolume::Self *)(*((uint32_t *)v50 + 5) + 4 * *((uint32_t *)v50 + 6));
      v88 = (hkpRigidBody::Self *)(*v34 + 4);
      if ( *(uint16_t *)(*v34 + 6) != 0 )
      {
        v76 = v50;
        do
        {
          v53 = v51[1];
          HIWORD(v52) = HIWORD(v53);
          LOWORD(v52) = 0;
          v54 = v52 | (uint16_t)(v53 - 1);
          v55 = v53;
        }
        while ( v55 != __sync_val_compare_and_swap((volatile int32_t *)v88, v55, v54) );
        v50 = v76;
        if ( (uint16_t)v54 == 0 )
          G4_VCALL<void>(v51, 16);
      }
      ++v34;
    }
    while ( v34 < (int *)v92 );
  }
  v96 = 0;
  v56 = *((uint32_t *)v63 + 5);
  *((uint32_t *)v63 + 5) = *((uint32_t *)v63 + 14);
  *((uint32_t *)v63 + 14) = v56;
  v57 = *((uint32_t *)v63 + 16);
  *((uint32_t *)v63 + 6) = *((uint32_t *)v63 + 15);
  result = *((uint32_t *)v63 + 7);
  *((uint32_t *)v63 + 7) = v57;
  v59 = v97;
  v60 = v97 < 0;
  *((uint32_t *)v63 + 16) = result;
  *((uint32_t *)v63 + 15) = 0;
  *((uint8_t *)v63 + 52) = 0;
  if ( !v60 )
    return (*(int (**)(uint32_t *, const hkpRigidBody::Self **, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v95,
             4 * v59);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::EventInfo::staticClass  (binary VA: 0x1835fc0)
// Original: hkpTriggerVolume::EventInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpTriggerVolume::EventInfo::staticClass()
{
  return &hkpTriggerVolumeEventInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpTriggerVolume::staticClass  (binary VA: 0x1835fe0)
// Original: hkpTriggerVolume::staticClass
// ----------------------------------------------------------------------------
void * hkpTriggerVolume::staticClass()
{
  return &hkpTriggerVolumeClass;
}


