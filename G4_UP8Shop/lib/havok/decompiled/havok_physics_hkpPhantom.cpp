#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPhantom.h"

// ----------------------------------------------------------------------------
// Function: hkpPhantomCallbackShape::staticClass  (binary VA: 0x169b060)
// Original: hkpPhantomCallbackShape::staticClass
// ----------------------------------------------------------------------------
void * hkpPhantomCallbackShape::staticClass()
{
  return &hkpPhantomCallbackShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::cleanup  (binary VA: 0x16b61a0)
// Original: hkpPhantomAgent::cleanup
// ----------------------------------------------------------------------------
int hkpPhantomAgent::cleanup(hkpPhantomAgent::Self *self)
{
  if ( *((uint32_t *)self + 7) == 32 )
  {
    (*(void (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 5) + 80))(
      *((uint32_t *)self + 5),
      *((uint32_t *)self + 3),
      *((uint32_t *)self + 4));
    if ( *((uint32_t *)self + 8) != 32 )
      return G4_VCALL<int>(self, 4);
  }
  else if ( *((uint32_t *)self + 8) != 32 )
  {
    return G4_VCALL<int>(self, 4);
  }
  (*(void (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 6) + 80))(
    *((uint32_t *)self + 6),
    *((uint32_t *)self + 4),
    *((uint32_t *)self + 3));
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::processCollision  (binary VA: 0x16b6220)
// Original: hkpPhantomAgent::processCollision
// ----------------------------------------------------------------------------
void hkpPhantomAgent::processCollision()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::getPenetrations  (binary VA: 0x16b6230)
// Original: hkpPhantomAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpPhantomAgent::getPenetrations(int a1, int a2, int a3, int a4, int a5)
{
  return G4_VCALL<int>(a5, 8, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::staticGetPenetrations  (binary VA: 0x16b6260)
// Original: hkpPhantomAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpPhantomAgent::staticGetPenetrations(int a1, int a2, int a3, int a4)
{
  return G4_VCALL<int>(a4, 8, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::getClosestPoints  (binary VA: 0x16b6290)
// Original: hkpPhantomAgent::getClosestPoints
// ----------------------------------------------------------------------------
void hkpPhantomAgent::getClosestPoints()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::staticGetClosestPoints  (binary VA: 0x16b62a0)
// Original: hkpPhantomAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
void hkpPhantomAgent::staticGetClosestPoints()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::linearCast  (binary VA: 0x16b62b0)
// Original: hkpPhantomAgent::linearCast
// ----------------------------------------------------------------------------
void hkpPhantomAgent::linearCast()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::staticLinearCast  (binary VA: 0x16b62c0)
// Original: hkpPhantomAgent::staticLinearCast
// ----------------------------------------------------------------------------
void hkpPhantomAgent::staticLinearCast()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::Destroy  (binary VA: 0x16b62d0)
// Original: hkpPhantomAgent::~hkpPhantomAgent
// ----------------------------------------------------------------------------
void hkpPhantomAgent::Destroy(hkpPhantomAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::Destroy_ea16b62f0  (binary VA: 0x16b62f0)
// Original: hkpPhantomAgent::~hkpPhantomAgent
// ----------------------------------------------------------------------------
void hkpPhantomAgent::Destroy_ea16b62f0(hkpPhantomAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 36;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::registerAgent  (binary VA: 0x16b6350)
// Original: hkpPhantomAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpPhantomAgent::registerAgent(hkpPhantomAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpPhantomAgent::createPhantomAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpPhantomAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpPhantomAgent::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpPhantomAgent::staticLinearCast);
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 32, -1);
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, -1, 32);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::Construct  (binary VA: 0x16b63f0)
// Original: hkpPhantomAgent::hkpPhantomAgent
// ----------------------------------------------------------------------------
void hkpPhantomAgent::Construct(hkpPhantomAgent::Self *self, const hkpCdBody::Self *a2, const hkpCdBody::Self *a3, hkpContactMgr::Self *a4)
{
  const hkpCdBody::Self *v4;
  const hkpCdBody::Self *i;

  v4 = a2;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A408);
  while ( *((uint32_t *)v4 + 3) != 0 )
    v4 = *((const hkpCdBody::Self **)v4 + 3);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v4);
  for ( i = a3; *((uint32_t *)i + 3) != 0; i = *((const hkpCdBody::Self **)i + 3) )
    ;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(i);
  *((uint32_t *)self + 7) = *(uint8_t *)(*(uint32_t *)a2 + 8);
  *((uint32_t *)self + 8) = *(uint8_t *)(*(uint32_t *)a3 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::createPhantomAgent  (binary VA: 0x16b6460)
// Original: hkpPhantomAgent::createPhantomAgent
// ----------------------------------------------------------------------------
hkpPhantomAgent::Self * hkpPhantomAgent::createPhantomAgent(const hkpCdBody::Self *a1, const hkpCdBody::Self *a2, int a3, hkpContactMgr::Self *a4)
{
  const hkpCdBody::Self *v4;
  int address;
  hkpPhantomAgent::Self *v6;
  int v8;
  const hkpCdBody::Self *k;
  const hkpCdBody::Self *m;
  const hkpCdBody::Self *i;
  const hkpCdBody::Self *j;
  int v13;

  v4 = a2;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v6 = (hkpPhantomAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                            *(uint32_t *)(*(uint32_t *)address + 44),
                            36);
  hkpPhantomAgent::Construct(v6, a1, a2, a4);
  if ( *((uint32_t *)v6 + 7) == 32 )
  {
    for ( i = a2; *((uint32_t *)i + 3) != 0; i = *((const hkpCdBody::Self **)i + 3) )
      ;
    for ( j = a1; *((uint32_t *)j + 3) != 0; j = *((const hkpCdBody::Self **)j + 3) )
      ;
    v13 = *(uint32_t *)a1;
    (*(void (**)(uint32_t, const hkpCdBody::Self *, const hkpCdBody::Self *, int))(**(uint32_t **)a1 + 76))(
      *(uint32_t *)a1,
      j,
      i,
      a3);
    *((uint32_t *)v6 + 5) = v13;
  }
  if ( *((uint32_t *)v6 + 8) != 32 )
    return v6;
  v8 = *(uint32_t *)a2;
  for ( k = a1; *((uint32_t *)k + 3) != 0; k = *((const hkpCdBody::Self **)k + 3) )
    ;
  for ( m = *((const hkpCdBody::Self **)a2 + 3); m != nullptr; m = *((const hkpCdBody::Self **)m + 3) )
    v4 = m;
  (*(void (**)(int, const hkpCdBody::Self *, const hkpCdBody::Self *, int))(**(uint32_t **)a2 + 76))(v8, v4, k, a3);
  *((uint32_t *)v6 + 6) = v8;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomAgent::createNoPhantomAgent  (binary VA: 0x16b6580)
// Original: hkpPhantomAgent::createNoPhantomAgent
// ----------------------------------------------------------------------------
int hkpPhantomAgent::createNoPhantomAgent(uint32_t *a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  uint32_t *k;
  uint32_t *i;
  uint32_t *j;

  v3 = a1;
  if ( *(uint8_t *)(*a1 + 8) == 32 )
  {
    for ( i = a2; i[3] != 0; i = (uint32_t *)i[3] )
      ;
    for ( j = a1; j[3] != 0; j = (uint32_t *)j[3] )
      ;
    G4_VCALL<void>(*a1, 76, j, i, a3);
  }
  if ( *(uint8_t *)(*a2 + 8) != 32 )
    return 0;
  while ( v3[3] != 0 )
    v3 = (uint32_t *)v3[3];
  for ( k = a2; k[3] != 0; k = (uint32_t *)k[3] )
    ;
  G4_VCALL<void>(*a2, 76, k, v3, a3);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomOverlapListener::Destroy  (binary VA: 0x172baa0)
// Original: hkpPhantomOverlapListener::~hkpPhantomOverlapListener
// ----------------------------------------------------------------------------
void hkpPhantomOverlapListener::Destroy(hkpPhantomOverlapListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209E838);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomOverlapListener::Destroy_ea172bc20  (binary VA: 0x172bc20)
// Original: hkpPhantomOverlapListener::~hkpPhantomOverlapListener
// ----------------------------------------------------------------------------
void hkpPhantomOverlapListener::Destroy_ea172bc20(hkpPhantomOverlapListener::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209E838);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpPhantomOverlapListener::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::updateShapeCollectionFilter  (binary VA: 0x172dd80)
// Original: hkpPhantom::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpPhantom::updateShapeCollectionFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::deallocateInternalArrays  (binary VA: 0x172dd90)
// Original: hkpPhantom::deallocateInternalArrays
// ----------------------------------------------------------------------------
int hkpPhantom::deallocateInternalArrays(hkpPhantom::Self *self)
{
  int result;
  int v2;

  if ( *((uint32_t *)self + 35) == 0 )
  {
    v2 = *((uint32_t *)self + 36);
    *((uint32_t *)self + 35) = 0;
    if ( v2 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 34),
        4 * v2);
    *((uint32_t *)self + 34) = 0;
    *((uint32_t *)self + 36) = 0x80000000;
  }
  result = *((uint32_t *)self + 38);
  if ( result == 0 )
  {
    result = *((uint32_t *)self + 39);
    *((uint32_t *)self + 38) = 0;
    if ( result >= 0 )
      result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 *((uint32_t *)self + 37),
                 4 * result);
    *((uint32_t *)self + 37) = 0;
    *((uint32_t *)self + 39) = 0x80000000;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::removeNullOverlapListeners  (binary VA: 0x172de60)
// Original: hkpPhantom::removeNullOverlapListeners
// ----------------------------------------------------------------------------
int hkpPhantom::removeNullOverlapListeners(hkpPhantom::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int i;
  uint32_t *v9;

  result = 4 * *((uint32_t *)self + 35);
  v2 = *((uint32_t *)self + 35) - 1;
  if ( v2 >= 0 )
  {
    do
    {
      v3 = result - 4;
      v4 = *((uint32_t *)self + 34);
      v9 = (uint32_t *)(v4 + result - 4);
      if ( *v9 == 0 )
      {
        v5 = *((uint32_t *)self + 35) - 1;
        v6 = result + v4;
        *((uint32_t *)self + 35) = v5;
        v7 = 4 * (v5 - v2);
        if ( v7 > 0 )
        {
          for ( i = 0; i < v7; i += 4 )
            v9[i / 4u] = *(uint32_t *)(v6 + i);
        }
      }
      --v2;
      result = v3;
    }
    while ( v2 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::removeNullPhantomListeners  (binary VA: 0x172df00)
// Original: hkpPhantom::removeNullPhantomListeners
// ----------------------------------------------------------------------------
int hkpPhantom::removeNullPhantomListeners(hkpPhantom::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int i;
  uint32_t *v9;

  result = 4 * *((uint32_t *)self + 38);
  v2 = *((uint32_t *)self + 38) - 1;
  if ( v2 >= 0 )
  {
    do
    {
      v3 = result - 4;
      v4 = *((uint32_t *)self + 37);
      v9 = (uint32_t *)(v4 + result - 4);
      if ( *v9 == 0 )
      {
        v5 = *((uint32_t *)self + 38) - 1;
        v6 = result + v4;
        *((uint32_t *)self + 38) = v5;
        v7 = 4 * (v5 - v2);
        if ( v7 > 0 )
        {
          for ( i = 0; i < v7; i += 4 )
            v9[i / 4u] = *(uint32_t *)(v6 + i);
        }
      }
      --v2;
      result = v3;
    }
    while ( v2 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::firePhantomDeleted  (binary VA: 0x172dfa0)
// Original: hkpPhantom::firePhantomDeleted
// ----------------------------------------------------------------------------
int hkpPhantom::firePhantomDeleted(hkpPhantom::Self *self)
{
  int result;
  int v2;
  int v3;

  result = *((uint32_t *)self + 38);
  v2 = result - 1;
  v3 = 4 * (result - 1);
  if ( result - 1 >= 0 )
  {
    do
    {
      result = *(uint32_t *)(*((uint32_t *)self + 37) + v3);
      if ( result != 0 )
        result = G4_VCALL<int>(result, 20, self);
      --v2;
      v3 -= 4;
    }
    while ( v2 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::Destroy  (binary VA: 0x172dff0)
// Original: hkpPhantom::~hkpPhantom
// ----------------------------------------------------------------------------
void hkpPhantom::Destroy(hkpPhantom::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EAA8);
  hkpPhantom::firePhantomDeleted(self);
  v1 = *((uint32_t *)self + 39);
  *((uint32_t *)self + 38) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 37),
      4 * v1);
  v2 = *((uint32_t *)self + 36);
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 39) = 0x80000000;
  *((uint32_t *)self + 35) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 34),
      4 * v2);
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 36) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F3C8);
  if ( v3 != 0 && *(uint16_t *)(v3 + 6) != 0 )
  {
    do
    {
      v5 = *(uint32_t *)(v3 + 4);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
      v6 = v4 | (uint16_t)(v5 - 1);
      v7 = v5;
    }
    while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
    if ( (uint16_t)v6 == 0 )
      G4_VCALL<void>(v3, 16);
  }
  v8 = *((uint32_t *)self + 33);
  *((uint32_t *)self + 32) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 31),
      16 * v8);
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 33) = 0x80000000;
  hkStringPtr::Destroy((hkpPhantom::Self *)((char *)self + 120));
  v9 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 25) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 24),
      8 * v9);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::Destroy_ea172e190  (binary VA: 0x172e190)
// Original: hkpPhantom::~hkpPhantom
// ----------------------------------------------------------------------------
void hkpPhantom::Destroy_ea172e190(hkpPhantom::Self *self)
{
  int v1;
  int v2;

  hkpPhantom::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 160;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::firePhantomRemoved  (binary VA: 0x172e1f0)
// Original: hkpPhantom::firePhantomRemoved
// ----------------------------------------------------------------------------
int hkpPhantom::firePhantomRemoved(hkpPhantom::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = *((uint32_t *)self + 38) - 1;
  v2 = 4 * v1;
  if ( v1 >= 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 37) + v2);
      if ( v3 != 0 )
        G4_VCALL<void>(v3, 12, self);
      --v1;
      v2 -= 4;
    }
    while ( v1 != -1 );
  }
  return hkpPhantom::removeNullPhantomListeners(self);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::firePhantomAdded  (binary VA: 0x172e260)
// Original: hkpPhantom::firePhantomAdded
// ----------------------------------------------------------------------------
int hkpPhantom::firePhantomAdded(hkpPhantom::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = *((uint32_t *)self + 38) - 1;
  v2 = 4 * v1;
  if ( v1 >= 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 37) + v2);
      if ( v3 != 0 )
        G4_VCALL<void>(v3, 8, self);
      --v1;
      v2 -= 4;
    }
    while ( v1 != -1 );
  }
  return hkpPhantom::removeNullPhantomListeners(self);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::firePhantomShapeSet  (binary VA: 0x172e2d0)
// Original: hkpPhantom::firePhantomShapeSet
// ----------------------------------------------------------------------------
int hkpPhantom::firePhantomShapeSet(hkpPhantom::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = *((uint32_t *)self + 38) - 1;
  v2 = 4 * v1;
  if ( v1 >= 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 37) + v2);
      if ( v3 != 0 )
        G4_VCALL<void>(v3, 16, self);
      --v1;
      v2 -= 4;
    }
    while ( v1 != -1 );
  }
  return hkpPhantom::removeNullPhantomListeners(self);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::setBoundingVolumeData  (binary VA: 0x172e340)
// Original: hkpPhantom::setBoundingVolumeData
// ----------------------------------------------------------------------------
unsigned int hkpPhantom::setBoundingVolumeData(hkpPhantom::Self *self, const hkAabb::Self *a2)
{
  float v2; // xmm7_4
  float v3; // xmm6_4
  float v4; // xmm5_4
  float *v5;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  int v27;
  int v28;
  unsigned int result;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned int v40;
  float v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;

  v2 = hkAabbUtil::hkAabbUint32MaxVal[0];
  v3 = hkAabbUtil::hkAabbUint32MaxVal[1];
  v4 = hkAabbUtil::hkAabbUint32MaxVal[2];
g4_m128_raw(v6) = *(unsigned int *)a2;
g4_m128_raw(v7) = *((unsigned int *)a2 + 3);
  v41 = hkAabbUtil::hkAabbUint32MaxVal[3];
  v5 = *(float **)(*((uint32_t *)self + 2) + 112);
g4_m128_raw(v8) = *((unsigned int *)a2 + 1);
g4_m128_raw(v9) = *((unsigned int *)a2 + 2);
  *(float *)g4_m128_ptr<int32_t>(v6) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v6) + v5[8]) * v5[16], hkAabbUtil::hkAabbUint32MaxVal[0]);
  *(float *)g4_m128_ptr<int32_t>(v7) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v7) + v5[11]) * v5[19], v41);
  *(float *)g4_m128_ptr<int32_t>(v8) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v8) + v5[9]) * v5[17], v3);
  *(float *)g4_m128_ptr<int32_t>(v9) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v9) + v5[10]) * v5[18], v4);
  if ( *(float *)g4_m128_ptr<int32_t>(v6) <= 0.0 )
  {
    v10 = 0;
    v11 = -127;
    LOBYTE(v55) = 0;
    if ( *(float *)g4_m128_ptr<int32_t>(v8) > 0.0 )
    {
LABEL_3:
      v39 = _mm_cvtsi128_si32(v8);
      v53 = (v39 & 0x7F800000u) >> 23;
      v45 = v53 - 127;
      if ( *(float *)g4_m128_ptr<int32_t>(v9) > 0.0 )
        goto LABEL_4;
      goto LABEL_44;
    }
  }
  else
  {
    v10 = _mm_cvtsi128_si32(v6);
    v55 = (v10 & 0x7F800000u) >> 23;
    v11 = v55 - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v8) > 0.0 )
      goto LABEL_3;
  }
  v45 = -127;
  LOBYTE(v53) = 0;
  v39 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v9) > 0.0 )
  {
LABEL_4:
    v38 = _mm_cvtsi128_si32(v9);
    v49 = (v38 & 0x7F800000u) >> 23;
    v43 = v49 - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v7) > 0.0 )
      goto LABEL_5;
LABEL_45:
    v47 = -127;
    LOBYTE(v51) = 0;
    v37 = 0;
    if ( v11 < 0 )
      goto LABEL_46;
    goto LABEL_6;
  }
LABEL_44:
  v43 = -127;
  LOBYTE(v49) = 0;
  v38 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v7) <= 0.0 )
    goto LABEL_45;
LABEL_5:
  v37 = _mm_cvtsi128_si32(v7);
  v51 = (v37 & 0x7F800000u) >> 23;
  v47 = v51 - 127;
  if ( v11 < 0 )
    goto LABEL_46;
LABEL_6:
  if ( v10 >= 0 )
  {
    v12 = v10 & 0x7FFFFF | 0x800000;
    if ( v11 > 23 )
    {
      v13 = -1;
      if ( v11 <= 31 )
        v13 = v12 << (v55 + 106);
    }
    else
    {
      v13 = v12 >> (-106 - v55);
    }
    v57 = v13;
    v14 = v45;
    if ( v45 < 0 )
      goto LABEL_47;
    goto LABEL_10;
  }
LABEL_46:
  v57 = 0;
  v14 = v45;
  if ( v45 < 0 )
    goto LABEL_47;
LABEL_10:
  if ( v39 >= 0 )
  {
    v15 = v39 & 0x7FFFFF | 0x800000;
    if ( v14 > 23 )
    {
      v16 = -1;
      if ( v45 <= 31 )
        v16 = v15 << (v53 + 106);
    }
    else
    {
      v16 = v15 >> (-106 - v53);
    }
    v17 = v43;
    v59 = v16;
    if ( v43 < 0 )
      goto LABEL_48;
    goto LABEL_14;
  }
LABEL_47:
  v17 = v43;
  v59 = 0;
  if ( v43 < 0 )
    goto LABEL_48;
LABEL_14:
  if ( v38 >= 0 )
  {
    v18 = v38 & 0x7FFFFF | 0x800000;
    if ( v17 > 23 )
    {
      v19 = -1;
      if ( v43 <= 31 )
        v19 = v18 << (v49 + 106);
    }
    else
    {
      v19 = v18 >> (-106 - v49);
    }
    v20 = v47;
    v61 = v19;
    if ( v47 < 0 )
      goto LABEL_49;
    goto LABEL_18;
  }
LABEL_48:
  v20 = v47;
  v61 = 0;
  if ( v47 < 0 )
    goto LABEL_49;
LABEL_18:
  if ( v37 < 0 )
  {
LABEL_49:
    v22 = 0;
    goto LABEL_21;
  }
  v21 = v37 & 0x7FFFFF | 0x800000;
  if ( v20 > 23 )
  {
    v22 = -1;
    if ( v47 <= 31 )
      v22 = v21 << (v51 + 106);
  }
  else
  {
    v22 = v21 >> (-106 - v51);
  }
LABEL_21:
  *((uint32_t *)self + 12) = v57;
  *((uint32_t *)self + 13) = v59;
  *((uint32_t *)self + 14) = v61;
  *((uint32_t *)self + 15) = v22;
g4_m128_raw(v23) = *((unsigned int *)a2 + 4);
g4_m128_raw(v24) = *((unsigned int *)a2 + 5);
g4_m128_raw(v25) = *((unsigned int *)a2 + 6);
g4_m128_raw(v26) = *((unsigned int *)a2 + 7);
  *(float *)g4_m128_ptr<int32_t>(v23) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v23) + v5[12]) * v5[16], v2);
  *(float *)g4_m128_ptr<int32_t>(v24) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v24) + v5[13]) * v5[17], v3);
  *(float *)g4_m128_ptr<int32_t>(v25) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v25) + v5[14]) * v5[18], v4);
  *(float *)g4_m128_ptr<int32_t>(v26) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v26) + v5[15]) * v5[19], v41);
  if ( *(float *)g4_m128_ptr<int32_t>(v23) <= 0.0 )
  {
    v27 = 0;
    v28 = -127;
    LOBYTE(v54) = 0;
    if ( *(float *)g4_m128_ptr<int32_t>(v24) > 0.0 )
    {
LABEL_23:
      result = _mm_cvtsi128_si32(v24);
      v52 = (result & 0x7F800000) >> 23;
      v48 = v52 - 127;
      if ( *(float *)g4_m128_ptr<int32_t>(v25) > 0.0 )
        goto LABEL_24;
      goto LABEL_54;
    }
  }
  else
  {
    v27 = _mm_cvtsi128_si32(v23);
    v54 = (v27 & 0x7F800000u) >> 23;
    v28 = v54 - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v24) > 0.0 )
      goto LABEL_23;
  }
  result = 0;
  v48 = -127;
  LOBYTE(v52) = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v25) > 0.0 )
  {
LABEL_24:
    v44 = _mm_cvtsi128_si32(v25);
    v50 = (v44 & 0x7F800000u) >> 23;
    v46 = v50 - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v26) > 0.0 )
      goto LABEL_25;
LABEL_55:
    v30 = -127;
    LOBYTE(v56) = 0;
    v42 = 0;
    if ( v28 < 0 )
      goto LABEL_56;
    goto LABEL_26;
  }
LABEL_54:
  v46 = -127;
  LOBYTE(v50) = 0;
  v44 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v26) <= 0.0 )
    goto LABEL_55;
LABEL_25:
  v42 = _mm_cvtsi128_si32(v26);
  v56 = (v42 & 0x7F800000u) >> 23;
  v30 = v56 - 127;
  if ( v28 < 0 )
    goto LABEL_56;
LABEL_26:
  if ( v27 >= 0 )
  {
    v40 = v27 & 0x7FFFFF | 0x800000;
    if ( v28 > 23 )
    {
      v31 = -1;
      if ( v28 <= 31 )
        v31 = v40 << (v54 + 106);
    }
    else
    {
      v31 = v40 >> (-106 - v54);
    }
    v58 = v31;
    v32 = v48;
    if ( v48 < 0 )
      goto LABEL_57;
    goto LABEL_30;
  }
LABEL_56:
  v58 = 0;
  v32 = v48;
  if ( v48 < 0 )
    goto LABEL_57;
LABEL_30:
  if ( (result & 0x80000000) == 0 )
  {
    result = result & 0x7FFFFF | 0x800000;
    if ( v32 > 23 )
    {
      v33 = -1;
      if ( v48 <= 31 )
      {
        result <<= v52 + 106;
        v33 = result;
      }
    }
    else
    {
      result >>= -106 - v52;
      v33 = result;
    }
    v34 = v46;
    v60 = v33;
    if ( v46 < 0 )
      goto LABEL_58;
    goto LABEL_34;
  }
LABEL_57:
  v34 = v46;
  v60 = 0;
  if ( v46 < 0 )
    goto LABEL_58;
LABEL_34:
  result = v44;
  if ( v44 >= 0 )
  {
    result = v44 & 0x7FFFFF | 0x800000;
    if ( v34 > 23 )
    {
      v35 = -1;
      if ( v46 <= 31 )
      {
        result <<= v50 + 106;
        v35 = result;
      }
    }
    else
    {
      result >>= -106 - v50;
      v35 = result;
    }
    v62 = v35;
    if ( v30 < 0 )
      goto LABEL_59;
    goto LABEL_38;
  }
LABEL_58:
  v62 = 0;
  if ( v30 < 0 )
    goto LABEL_59;
LABEL_38:
  result = v42;
  if ( v42 < 0 )
  {
LABEL_59:
    v36 = 0;
    goto LABEL_41;
  }
  result = v42 & 0x7FFFFF | 0x800000;
  if ( v30 > 23 )
  {
    v36 = -1;
    if ( v30 <= 31 )
    {
      result <<= v56 + 106;
      v36 = result;
    }
  }
  else
  {
    result >>= -106 - v56;
    v36 = result;
  }
LABEL_41:
  *((uint32_t *)self + 16) = v58;
  *((uint32_t *)self + 17) = v60;
  *((uint32_t *)self + 18) = v62;
  *((uint32_t *)self + 19) = v36;
  *((uint8_t *)self + 63) = 0;
  *((uint8_t *)self + 60) = 0;
  *((uint8_t *)self + 61) = 0;
  *((uint8_t *)self + 62) = 0;
  *((uint8_t *)self + 76) = 0;
  *((uint8_t *)self + 77) = 0;
  *((uint8_t *)self + 78) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::updateBroadPhase  (binary VA: 0x172ea90)
// Original: hkpPhantom::updateBroadPhase
// ----------------------------------------------------------------------------
int hkpPhantom::updateBroadPhase(hkpPhantom::Self *self, const hkAabb::Self *a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  char *v6;
  hkpBroadPhase::Self *v7;
  int v8;
  bool v9;
  hkpPhantom::Self *v10;
  hkLifoAllocator::Self *v11;
  signed int v12;
  int v13;
  hkLifoAllocator::Self *v14;
  signed int v15;
  int v16;
  hkLifoAllocator::Self *v17;
  signed int v18;
  int v19;
  char *v20;
  hkLifoAllocator::Self *v21;
  signed int v22;
  int v23;
  int v24;
  int v25;
  typedef int _g4_t_v26;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef char *_g4_t_v28;
  typedef hkLifoAllocator::Self **_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef signed int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef char *_g4_t_v38;
  typedef hkpPhantom::Self *_g4_t_v39;
  typedef signed int _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef int _g4_t_v42;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_address)) > _g4_s1 ? (36u + sizeof(_g4_t_address)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v28)) > _g4_s2 ? (40u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v29)) > _g4_s3 ? (44u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v30)) > _g4_s4 ? (44u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v31)) > _g4_s5 ? (44u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v32)) > _g4_s6 ? (48u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v33)) > _g4_s7 ? (64u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v34)) > _g4_s8 ? (68u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v35)) > _g4_s9 ? (72u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v36)) > _g4_s10 ? (76u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v37)) > _g4_s11 ? (80u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v38)) > _g4_s12 ? (96u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v39)) > _g4_s13 ? (100u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v40)) > _g4_s14 ? (104u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v41)) > _g4_s15 ? (108u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v42)) > _g4_s16 ? (112u + sizeof(_g4_t_v42)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);

  result = *((uint32_t *)self + 2);
  if ( result != 0 )
  {
    v3 = *(uint32_t *)(result + 140);
    if ( v3 + *(uint32_t *)(result + 144) != 0 )
    {
      v26 = *((uint32_t *)self + 2);
      v39 = self;
      v40 = (signed int)(uintptr_t)(a2);
      LOBYTE(v38) = 18;
      return hkpWorld::queueOperation(v26, &v38);
    }
    else
    {
      v33 = nullptr;
      *(uint32_t *)(result + 140) = v3 + 1;
      v4 = *((uint32_t *)self + 2);
      v34 = 0;
      v35 = 0x80000000;
      v37 = *(uint32_t *)(v4 + 876);
      if ( v37 != 0 )
      {
        address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v16 = v37;
        v17 = *address;
        v18 = (8 * v37 + 127) & 0xFFFFFF80;
        v30 = *((char **)*address + 3);
        if ( v18 <= *((uint32_t *)*address + 2)
          && (unsigned int)(v19 = v18 + *((uint32_t *)*address + 3)) <= *((uint32_t *)v17 + 4) )
        {
          *((uint32_t *)v17 + 3) = v19;
          v20 = v30;
        }
        else
        {
          v20 = (char *)hkLifoAllocator::allocateFromNewSlab(v17, v18);
          v16 = v37;
        }
        v4 = *((uint32_t *)self + 2);
        v33 = v20;
        v36 = v20;
        v35 = v16 | 0x80000000;
        v5 = *(uint32_t *)(v4 + 876);
        v38 = nullptr;
        v39 = nullptr;
        v40 = 0x80000000;
        v42 = v5;
        if ( v5 != 0 )
        {
          v21 = *address;
          v22 = (8 * v5 + 127) & 0xFFFFFF80;
          v28 = *((char **)*address + 3);
          if ( v22 <= *((uint32_t *)*address + 2)
            && (unsigned int)(v23 = v22 + *((uint32_t *)*address + 3)) <= *((uint32_t *)v21 + 4) )
          {
            *((uint32_t *)v21 + 3) = v23;
            v6 = v28;
          }
          else
          {
            v31 = v5;
            v6 = (char *)hkLifoAllocator::allocateFromNewSlab(v21, (8 * v5 + 127) & 0xFFFFFF80);
            v5 = v31;
          }
          v4 = *((uint32_t *)self + 2);
          v29 = address;
        }
        else
        {
          v29 = address;
          v6 = nullptr;
        }
      }
      else
      {
        v29 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v33 = nullptr;
        v35 = 0x80000000;
        v36 = nullptr;
        v39 = nullptr;
        v42 = 0;
        v5 = 0;
        v6 = nullptr;
      }
      v38 = v6;
      v41 = v6;
      v40 = v5 | 0x80000000;
      v32 = (char *)self + 36;
      v7 = *(hkpBroadPhase::Self **)(v4 + 88);
      if ( *((uint32_t *)v7 + 7) != 0 )
      {
        hkpBroadPhase::lockImplementation(v7);
        v7 = *(hkpBroadPhase::Self **)(*((uint32_t *)self + 2) + 88);
      }
      G4_VCALL<void>(v7, 52, &v32, a2, 1, &v33, &v38);
      if ( v34 != 0 || v39 != nullptr )
      {
        hkpTypedBroadPhaseDispatcher::removeDuplicates(&v33, &v38);
        hkpTypedBroadPhaseDispatcher::removePairs(*(uint32_t *)(*((uint32_t *)self + 2) + 92), v38, v39);
        v24 = *((uint32_t *)self + 2);
        v25 = 0;
        if ( *(uint32_t *)(v24 + 116) != 0 )
          v25 = *(uint32_t *)(v24 + 116) + 8;
        hkpTypedBroadPhaseDispatcher::addPairs(*(uint32_t *)(v24 + 92), v33, v34, v25);
        hkpPhantom::removeNullOverlapListeners(self);
      }
      if ( *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 2) + 88) + 28) != 0 )
        hkpBroadPhase::unlockImplementation(*(pthread_mutex_t ***)(*((uint32_t *)self + 2) + 88));
      hkpPhantom::setBoundingVolumeData(self, a2);
      v8 = *((uint32_t *)self + 2);
      v9 = (*(uint32_t *)(v8 + 140))-- == 1;
      if ( v9 && *(uint8_t *)(v8 + 148) == 0 )
      {
        if ( *(uint32_t *)(v8 + 132) != 0 )
          hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v8);
        if ( *(uint32_t *)(v8 + 156) == 1 && *(uint32_t *)(v8 + 136) != 0 )
          hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v8);
      }
      v10 = nullptr;
      if ( v38 != v41 )
        v10 = v39;
      v39 = v10;
      v11 = *v29;
      v12 = (8 * v42 + 127) & 0xFFFFFF80;
      if ( v12 > *((uint32_t *)*v29 + 2) || *((char **)v11 + 3) != &v41[v12] || v41 == *((char **)v11 + 5) )
        hkLifoAllocator::slowBlockFree(v11, v41, (8 * v42 + 127) & 0xFFFFFF80);
      else
        *((uint32_t *)v11 + 3) = (uint32_t)(uintptr_t)(v41);
      v39 = nullptr;
      if ( v40 >= 0 )
        (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v38,
          8 * v40);
      v13 = 0;
      if ( v33 != v36 )
        v13 = v34;
      v38 = nullptr;
      v14 = *v29;
      v34 = v13;
      v40 = 0x80000000;
      v15 = (8 * v37 + 127) & 0xFFFFFF80;
      if ( v15 > *((uint32_t *)v14 + 2) || *((char **)v14 + 3) != &v36[v15] || v36 == *((char **)v14 + 5) )
        hkLifoAllocator::slowBlockFree(v14, v36, v15);
      else
        *((uint32_t *)v14 + 3) = (uint32_t)(uintptr_t)(v36);
      result = v35;
      v34 = 0;
      if ( v35 >= 0 )
        return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v33,
                 8 * v35);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::addPhantomListener  (binary VA: 0x172ef30)
// Original: hkpPhantom::addPhantomListener
// ----------------------------------------------------------------------------
int hkpPhantom::addPhantomListener(hkpPhantom::Self *self, hkpPhantomListener::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 38);
  if ( v2 == (*((uint32_t *)self + 39) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpPhantom::Self *)((char *)self + 148),
      4,
      v4);
    v2 = *((uint32_t *)self + 38);
  }
  result = *((uint32_t *)self + 37);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 38);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::removePhantomListener  (binary VA: 0x172efa0)
// Original: hkpPhantom::removePhantomListener
// ----------------------------------------------------------------------------
int hkpPhantom::removePhantomListener(hkpPhantom::Self *self, hkpPhantomListener::Self *a2)
{
  int v2;
  hkpPhantomListener::Self **v3;
  int v4;
  hkpPhantomListener::Self **v5;
  hkpPhantomListener::Self **v6;
  int v7;
  int v8;
  char *v9;
  int v10;
  int result;

  v2 = *((uint32_t *)self + 38);
  v3 = *((hkpPhantomListener::Self ***)self + 37);
  if ( v2 <= 0 )
  {
    v7 = 0;
    v6 = v3 - 1;
    v4 = -1;
  }
  else if ( *v3 == a2 )
  {
    v6 = *((hkpPhantomListener::Self ***)self + 37);
    v7 = 4;
    v4 = 0;
  }
  else
  {
    v4 = 0;
    v5 = v3 + 1;
    do
    {
      if ( ++v4 == v2 )
      {
        v6 = v3 - 1;
        v7 = 0;
        v4 = -1;
        goto LABEL_7;
      }
      v6 = v5++;
    }
    while ( *(v5 - 1) != a2 );
    v7 = 4 * v4 + 4;
  }
LABEL_7:
  v8 = v2 - 1;
  v9 = (char *)v3 + v7;
  *((uint32_t *)self + 38) = v8;
  v10 = 4 * (v8 - v4);
  for ( result = 0; result < v10; result += 4 )
    v6[result / 4u] = *(hkpPhantomListener::Self **)&v9[result];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::addPhantomOverlapListener  (binary VA: 0x172f050)
// Original: hkpPhantom::addPhantomOverlapListener
// ----------------------------------------------------------------------------
int hkpPhantom::addPhantomOverlapListener(hkpPhantom::Self *self, hkpPhantomOverlapListener::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 35);
  if ( v2 == (*((uint32_t *)self + 36) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpPhantom::Self *)((char *)self + 136),
      4,
      v4);
    v2 = *((uint32_t *)self + 35);
  }
  result = *((uint32_t *)self + 34);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 35);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::removePhantomOverlapListener  (binary VA: 0x172f0c0)
// Original: hkpPhantom::removePhantomOverlapListener
// ----------------------------------------------------------------------------
int hkpPhantom::removePhantomOverlapListener(hkpPhantom::Self *self, hkpPhantomOverlapListener::Self *a2)
{
  int v2;
  hkpPhantomOverlapListener::Self **v3;
  int v4;
  hkpPhantomOverlapListener::Self **v5;
  hkpPhantomOverlapListener::Self **v6;
  int v7;
  int v8;
  char *v9;
  int v10;
  int result;

  v2 = *((uint32_t *)self + 35);
  v3 = *((hkpPhantomOverlapListener::Self ***)self + 34);
  if ( v2 <= 0 )
  {
    v7 = 0;
    v6 = v3 - 1;
    v4 = -1;
  }
  else if ( *v3 == a2 )
  {
    v6 = *((hkpPhantomOverlapListener::Self ***)self + 34);
    v7 = 4;
    v4 = 0;
  }
  else
  {
    v4 = 0;
    v5 = v3 + 1;
    do
    {
      if ( ++v4 == v2 )
      {
        v6 = v3 - 1;
        v7 = 0;
        v4 = -1;
        goto LABEL_7;
      }
      v6 = v5++;
    }
    while ( *(v5 - 1) != a2 );
    v7 = 4 * v4 + 4;
  }
LABEL_7:
  v8 = v2 - 1;
  v9 = (char *)v3 + v7;
  *((uint32_t *)self + 35) = v8;
  v10 = 4 * (v8 - v4);
  for ( result = 0; result < v10; result += 4 )
    v6[result / 4u] = *(hkpPhantomOverlapListener::Self **)&v9[result];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantom::staticClass  (binary VA: 0x1730a70)
// Original: hkpPhantom::staticClass
// ----------------------------------------------------------------------------
void * hkpPhantom::staticClass()
{
  return &hkpPhantomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomBroadPhaseListener::addCollisionPair  (binary VA: 0x1775ec0)
// Original: hkpPhantomBroadPhaseListener::addCollisionPair
// ----------------------------------------------------------------------------
int hkpPhantomBroadPhaseListener::addCollisionPair(int a1, uint32_t *a2)
{
  int result;
  int v3;

  if ( *(uint8_t *)(*a2 + 4) == 2 )
    G4_VCALL<void>(*a2 + *(char *)(*a2 + 5) + *(char *)(*a2 + *(char *)(*a2 + 5) + 16), 40, *(char *)(a2[1] + 5) + a2[1]);
  result = a2[1];
  if ( *(uint8_t *)(result + 4) == 2 )
  {
    v3 = result + *(char *)(result + 5) + *(char *)(result + *(char *)(result + 5) + 16);
    return G4_VCALL<int>(v3, 40, *(char *)(*a2 + 5) + *a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomBroadPhaseListener::removeCollisionPair  (binary VA: 0x1775f50)
// Original: hkpPhantomBroadPhaseListener::removeCollisionPair
// ----------------------------------------------------------------------------
int hkpPhantomBroadPhaseListener::removeCollisionPair(int a1, uint32_t *a2)
{
  int result;
  int v3;

  if ( *(uint8_t *)(*a2 + 4) == 2 )
    G4_VCALL<void>(*a2 + *(char *)(*a2 + 5) + *(char *)(*a2 + *(char *)(*a2 + 5) + 16), 48, *(char *)(a2[1] + 5) + a2[1]);
  result = a2[1];
  if ( *(uint8_t *)(result + 4) == 2 )
  {
    v3 = result + *(char *)(result + 5) + *(char *)(result + *(char *)(result + 5) + 16);
    return G4_VCALL<int>(v3, 48, *(char *)(*a2 + 5) + *a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomBroadPhaseListener::Destroy  (binary VA: 0x1775fe0)
// Original: hkpPhantomBroadPhaseListener::~hkpPhantomBroadPhaseListener
// ----------------------------------------------------------------------------
void hkpPhantomBroadPhaseListener::Destroy(hkpPhantomBroadPhaseListener::Self *self)
{
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209F128);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomBroadPhaseListener::Destroy_ea1776020  (binary VA: 0x1776020)
// Original: hkpPhantomBroadPhaseListener::~hkpPhantomBroadPhaseListener
// ----------------------------------------------------------------------------
void hkpPhantomBroadPhaseListener::Destroy_ea1776020(hkpPhantomBroadPhaseListener::Self *self)
{
  int v1;
  int v2;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209F128);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomListener::Destroy  (binary VA: 0x182c890)
// Original: hkpPhantomListener::~hkpPhantomListener
// ----------------------------------------------------------------------------
void hkpPhantomListener::Destroy(hkpPhantomListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1C28);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomListener::phantomAddedCallback  (binary VA: 0x182c8b0)
// Original: hkpPhantomListener::phantomAddedCallback
// ----------------------------------------------------------------------------
void hkpPhantomListener::phantomAddedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomListener::phantomRemovedCallback  (binary VA: 0x182c8c0)
// Original: hkpPhantomListener::phantomRemovedCallback
// ----------------------------------------------------------------------------
void hkpPhantomListener::phantomRemovedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomListener::phantomShapeSetCallback  (binary VA: 0x182c8d0)
// Original: hkpPhantomListener::phantomShapeSetCallback
// ----------------------------------------------------------------------------
int hkpPhantomListener::phantomShapeSetCallback(hkpPhantomListener::Self *self, hkpPhantom::Self *a2)
{
  int result;

  if ( *((uint32_t *)a2 + 2) != 0 )
  {
    G4_VCALL<void>(self, 12, a2);
    return G4_VCALL<int>(self, 8, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomListener::phantomDeletedCallback  (binary VA: 0x182c910)
// Original: hkpPhantomListener::phantomDeletedCallback
// ----------------------------------------------------------------------------
void hkpPhantomListener::phantomDeletedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomListener::Destroy_ea182c980  (binary VA: 0x182c980)
// Original: hkpPhantomListener::~hkpPhantomListener
// ----------------------------------------------------------------------------
void hkpPhantomListener::Destroy_ea182c980(hkpPhantomListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1C28);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::getProcessTag  (binary VA: 0x184a280)
// Original: hkpPhantomDisplayViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpPhantomDisplayViewer::getProcessTag()
{
  return hkpPhantomDisplayViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::phantomRemovedCallback  (binary VA: 0x184a2b0)
// Original: hkpPhantomDisplayViewer::phantomRemovedCallback
// ----------------------------------------------------------------------------
int hkpPhantomDisplayViewer::phantomRemovedCallback(hkpPhantomDisplayViewer::Self *self, hkpPhantom::Self *a2)
{
  int result;
  int v3;
  hkpPhantom::Self **v4;
  int v5;
  int v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);

  result = (int)(uintptr_t)(self);
  v3 = *((uint32_t *)self + 13);
  if ( v3 > 0 )
  {
    v4 = *((hkpPhantom::Self ***)self + 12);
    if ( a2 == *v4 )
    {
      v5 = 0;
      v8 = 0;
LABEL_8:
      v6 = v3 - 1;
      *((uint32_t *)self + 13) = v6;
      if ( v8 != v6 )
        v4[v5] = v4[v6];
      return (*(int (**)(uint8_t *, uint32_t, char *, uint32_t, uint32_t, int, int))(**((uint32_t **)self + 6) + 60))(
               v9,
               *((uint32_t *)self + 6),
               (char *)a2 + 16,
               hkpPhantomDisplayViewer::m_tag,
               *((uint32_t *)a2 + 4),
               v7,
               v8);
    }
    else
    {
      result = 0;
      while ( ++result != v3 )
      {
        v5 = result;
        if ( a2 == v4[result] )
        {
          v8 = result;
          goto LABEL_8;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::postSimulationCallback  (binary VA: 0x184a4f0)
// Original: hkpPhantomDisplayViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpPhantomDisplayViewer::postSimulationCallback(hkpPhantomDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  int *address;
  int v3;
  uint32_t *v4;
  uint64_t v5; // rax
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  void (**v12)(char *);
  int v13;
  hkDisplayAABB::Self *v14;
  int v15;
  int v16;
  signed int v17;
  hkLifoAllocator::Self *v18;
  char *v19;
  int v20;
  hkpPhantomDisplayViewer::Self **v21;
  hkpPhantomDisplayViewer::Self *v22;
  hkLifoAllocator::Self *v23;
  int v24;
  hkpPhantomDisplayViewer::Self **v25;
  hkpPhantomDisplayViewer::Self *v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  uint64_t v31; // rax
  int v32;
  uint32_t *v33;
  hkLifoAllocator::Self *v34;
  int v35;
  char *v36;
  int v37;
  int v38;
  int v39;
  hkLifoAllocator::Self *v40;
  signed int v41;
  char *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  hkpWorld::Self *v49;
  int savedregs;
  typedef char *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int *_g4_t_v53;
  typedef int *_g4_t_v54;
  typedef hkLifoAllocator::Self **_g4_t_v55;
  typedef hkLifoAllocator::Self **_g4_t_v56;
  typedef hkpPhantomDisplayViewer::Self *_g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef hkpWorld::Self *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef hkLifoAllocator::Self **_g4_t_v64;
  typedef int _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef signed int _g4_t_v68;
  typedef void *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef signed int _g4_t_v76;
  typedef void *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t _g4_t_v82[4];
  typedef uint32_t _g4_t_v83[6];
  typedef hkpPhantomDisplayViewer::Self **_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef int _g4_t_v86;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v51)) > _g4_s0 ? (4u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v52)) > _g4_s1 ? (28u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v53)) > _g4_s2 ? (32u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v54)) > _g4_s3 ? (32u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v55)) > _g4_s4 ? (40u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v56)) > _g4_s5 ? (40u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v57)) > _g4_s6 ? (44u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v58)) > _g4_s7 ? (44u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v59)) > _g4_s8 ? (48u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v60)) > _g4_s9 ? (52u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v61)) > _g4_s10 ? (56u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v62)) > _g4_s11 ? (60u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v63)) > _g4_s12 ? (60u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v64)) > _g4_s13 ? (60u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v65)) > _g4_s14 ? (64u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v66)) > _g4_s15 ? (68u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v67)) > _g4_s16 ? (72u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v68)) > _g4_s17 ? (76u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v69)) > _g4_s18 ? (80u + sizeof(_g4_t_v69)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v70)) > _g4_s19 ? (84u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v71)) > _g4_s20 ? (88u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v72)) > _g4_s21 ? (92u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v73)) > _g4_s22 ? (96u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v74)) > _g4_s23 ? (100u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v75)) > _g4_s24 ? (104u + sizeof(_g4_t_v75)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v76)) > _g4_s25 ? (108u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v77)) > _g4_s26 ? (112u + sizeof(_g4_t_v77)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v78)) > _g4_s27 ? (116u + sizeof(_g4_t_v78)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v79)) > _g4_s28 ? (120u + sizeof(_g4_t_v79)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v80)) > _g4_s29 ? (124u + sizeof(_g4_t_v80)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v81)) > _g4_s30 ? (128u + sizeof(_g4_t_v81)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v82)) > _g4_s31 ? (132u + sizeof(_g4_t_v82)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v83)) > _g4_s32 ? (148u + sizeof(_g4_t_v83)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v84)) > _g4_s33 ? (172u + sizeof(_g4_t_v84)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v85)) > _g4_s34 ? (176u + sizeof(_g4_t_v85)) : _g4_s34,
    _g4_s36 = (180u + sizeof(_g4_t_v86)) > _g4_s35 ? (180u + sizeof(_g4_t_v86)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 84u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 88u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 92u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 96u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 100u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 104u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 108u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 112u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 116u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 120u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 124u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 128u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 132u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 148u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 172u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 176u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 180u);

  v84 = &self;
  v57 = self;
  v61 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v53 = address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TthkpPhantomDisplayViewer");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v66 = nullptr;
  v67 = 0;
  v68 = 0x80000000;
  v70 = *((uint32_t *)v61 + 70);
  v6 = v70;
  if ( v70 != 0 )
  {
    v64 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v34 = *v64;
    v35 = v70 << 7;
    v36 = *((char **)*v64 + 3);
    if ( v70 << 7 <= *((uint32_t *)*v64 + 2) && (unsigned int)(uintptr_t)(&v36[v35]) <= *((uint32_t *)v34 + 4) )
      *((uint32_t *)v34 + 3) = (uint32_t)(uintptr_t)(&v36[v35]);
    else
      v36 = (char *)hkLifoAllocator::allocateFromNewSlab(v34, v70 << 7);
    v66 = v36;
    v69 = v36;
    v59 = *((uint32_t *)v61 + 70);
    v37 = v6;
    v38 = v6 & 0x3FFFFFFF;
    v68 = v37 | 0x80000000;
    if ( v38 >= v59 )
    {
      v7 = v36;
      v55 = v64;
    }
    else
    {
      v39 = 2 * v38;
      if ( v39 < v59 )
        v39 = v59;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)&v65,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)&v66,
        v39,
        128);
      v7 = v66;
      v55 = v64;
    }
  }
  else
  {
    v55 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v69 = nullptr;
    v59 = 0;
    v7 = nullptr;
  }
  v8 = v59;
  v9 = v67;
  v10 = v67 - v59 - 1;
  if ( v10 >= 0 )
  {
    v11 = &v7[128 * v59 + 128 * v10];
    do
    {
      v12 = *(void (***)(char *))v11;
      --v10;
      v51 = v11;
      v11 -= 128;
      (*v12)(v51);
    }
    while ( v10 != -1 );
    v9 = v67;
    v7 = v66;
    v8 = v59;
  }
  v62 = v8 - v9;
  v13 = 0;
  v14 = (hkDisplayAABB::Self *)&v7[128 * v9];
  if ( v62 > 0 )
  {
    do
    {
      ++v13;
      hkDisplayAABB::Construct(v14);
      v14 = (hkDisplayAABB::Self *)((char *)v14 + 128);
    }
    while ( v13 != v62 );
  }
  v74 = nullptr;
  v67 = v59;
  v75 = 0;
  v76 = 0x80000000;
  v78 = *((uint32_t *)v61 + 70);
  v15 = v78;
  if ( v78 != 0 )
  {
    v40 = *v55;
    v41 = (4 * v78 + 127) & 0xFFFFFF80;
    v42 = *((char **)*v55 + 3);
    if ( v41 <= *((uint32_t *)*v55 + 2) && (unsigned int)(uintptr_t)(&v42[v41]) <= *((uint32_t *)v40 + 4) )
      *((uint32_t *)v40 + 3) = (uint32_t)(uintptr_t)(&v42[v41]);
    else
      v42 = (char *)hkLifoAllocator::allocateFromNewSlab(v40, (4 * v78 + 127) & 0xFFFFFF80);
    v43 = v15;
    v44 = v15 & 0x3FFFFFFF;
    v74 = (uint32_t *)(v42);
    v76 = v43 | 0x80000000;
    v77 = v42;
    v45 = *((uint32_t *)v61 + 70);
    if ( v44 >= v45 )
    {
      v47 = *((uint32_t *)v61 + 70);
    }
    else
    {
      v46 = 2 * v44;
      v62 = *((uint32_t *)v61 + 70);
      if ( v46 < v45 )
        v46 = *((uint32_t *)v61 + 70);
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)&v65,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)&v74,
        v46,
        4);
      v45 = v62;
      v47 = *((uint32_t *)v61 + 70);
    }
    v75 = v45;
    if ( v47 > 0 )
    {
      v48 = 0;
      v59 = (int)(uintptr_t)(v83);
      v49 = v61;
      do
      {
        v61 = v49;
        (*(void (**)(uint32_t, uint32_t *))(**(uint32_t **)(*((uint32_t *)v49 + 69) + 4 * v48) + 36))(
          *(uint32_t *)(*((uint32_t *)v49 + 69) + 4 * v48),
          v82);
        v62 = v48 << 7;
        hkDisplayAABB::setExtents((hkDisplayAABB::Self *)&v66[128 * v48], (const hkVector4f::Self *)v82, (const hkVector4f::Self *)v83);
        v49 = v61;
        v74[v48] = (uint32_t)(uintptr_t)(&v66[128 * v48]);
        ++v48;
      }
      while ( *((uint32_t *)v61 + 70) > v48 );
    }
  }
  else
  {
    v74 = nullptr;
    v76 = 0x80000000;
    v77 = nullptr;
    v75 = 0;
  }
  (*(void (**)(int *, uint32_t, uint32_t **, int, uint32_t, uint32_t, int, int *, uint32_t **, hkLifoAllocator::Self **, hkpPhantomDisplayViewer::Self *, int, int *, hkpWorld::Self *, int, int, char *, int, signed int, void *, int, int, int, int, uint32_t *, int, signed int, void *, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, hkpPhantomDisplayViewer::Self **))(**((uint32_t **)v57 + 6) + 116))(
    &v65,
    *((uint32_t *)v57 + 6),
    &v74,
    dword_21377B0,
    0,
    hkpPhantomDisplayViewer::m_tag,
    v52,
    v53,
    &v74,
    v55,
    v57,
    v59,
    &v65,
    v61,
    v62,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82[0],
    v82[1],
    v82[2],
    v82[3],
    v83[0],
    v83[1],
    v83[2],
    v83[3],
    v83[4],
    v83[5],
    v84);
  v16 = 0;
  if ( v74 != v77 )
    v16 = v75;
  v75 = v16;
  v17 = (4 * v78 + 127) & 0xFFFFFF80;
  v18 = *v56;
  if ( v17 > *((uint32_t *)*v56 + 2) || *((void **)v18 + 3) != (char *)v77 + v17 || v77 == *((void **)v18 + 5) )
    hkLifoAllocator::slowBlockFree(v18, (char *)v77, (4 * v78 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v18 + 3) = (uint32_t)(uintptr_t)(v77);
  v75 = 0;
  if ( v76 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v74,
      4 * v76);
  v19 = (char *)v69;
  v74 = nullptr;
  v76 = 0x80000000;
  if ( v66 == v69 )
  {
    v20 = v67 - 1;
    if ( v67 - 1 >= 0 )
    {
      v21 = (hkpPhantomDisplayViewer::Self **)&v66[128 * v20];
      do
      {
        v22 = *v21;
        --v20;
        v84 = v21;
        v21 -= 32;
        (*(void (**)(hkpPhantomDisplayViewer::Self **))v22)(v84);
      }
      while ( v20 != -1 );
      v19 = (char *)v69;
    }
    v67 = 0;
  }
  v23 = *v56;
  if ( v70 << 7 > *((uint32_t *)*v56 + 2) || *((char **)v23 + 3) != &v19[128 * v70] || *((char **)v23 + 5) == v19 )
    hkLifoAllocator::slowBlockFree(v23, v19, v70 << 7);
  else
    *((uint32_t *)v23 + 3) = (uint32_t)(uintptr_t)(v19);
  v24 = v67 - 1;
  v25 = (hkpPhantomDisplayViewer::Self **)&v66[128 * v67 - 128];
  if ( v67 - 1 >= 0 )
  {
    do
    {
      v26 = *v25;
      --v24;
      v84 = v25;
      v25 -= 32;
      (*(void (**)(hkpPhantomDisplayViewer::Self **))v26)(v84);
    }
    while ( v24 != -1 );
  }
  v67 = 0;
  if ( v68 >= 0 )
    (*(void (**)(uint32_t *, char *, signed int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v66,
      v68 << 7);
  v27 = 0;
  while ( v58[13] > v27 )
  {
    v28 = *(uint32_t *)(v58[12] + 4 * v27);
    v29 = (uint32_t *)v58[6];
    ++v27;
    v63 = *v29;
    savedregs = hkpPhantomDisplayViewer::m_tag;
    v30 = *(uint32_t *)(v28 + 24);
    v85 = v29;
    v86 = v30;
    (*(void (**)(int))(v63 + 36))(v60);
  }
  LODWORD(v31) = (uint32_t)(uintptr_t)(v54);
  v32 = *v54;
  v33 = *(uint32_t **)(*v54 + 4);
  if ( (unsigned int)(uintptr_t)(v33) < *(uint32_t *)(*v54 + 12) )
  {
    *v33 = (uint32_t)(uintptr_t)("Et");
    v31 = __rdtsc();
    v33[1] = v31;
    *(uint32_t *)(v32 + 4) = (uint32_t)(uintptr_t)(v33 + 3);
  }
  return v31;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::registerViewer  (binary VA: 0x184ab10)
// Original: hkpPhantomDisplayViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpPhantomDisplayViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Phantoms",
             hkpPhantomDisplayViewer::create);
  hkpPhantomDisplayViewer::m_tag = result;
  return result;
}



// ============================================================================
// Address:   0x184ab60 (size: 107 bytes)
// Symbol:    _ZN23hkpPhantomDisplayViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpPhantomDisplayViewer::hkpPhantomDisplayViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN23hkpPhantomDisplayViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpPhantomDisplayViewer::hkpPhantomDisplayViewer(
        uint32_t *a1,
        uint32_t *a2))(hkpPhantomDisplayViewer::Self * self)
{
  hkpWorldViewerBase::Construct((int)(uintptr_t)(a1), a2);
  a1[12] = 0;
  a1[13] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A3D68);
  a1[14] = 0x80000000;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A3DAC);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A3DD8);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A3DF0);
  a1[11] = ((uint32_t)(uintptr_t)&off_20A3E10);
  return (void (**)(hkpPhantomDisplayViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A3E10));
}
// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::create  (binary VA: 0x184abd0)
// Original: hkpPhantomDisplayViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpPhantomDisplayViewer::create(uint32_t *a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   60);
  hkpPhantomDisplayViewer::hkpPhantomDisplayViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::removeWorld  (binary VA: 0x184ac30)
// Original: hkpPhantomDisplayViewer::removeWorld
// ----------------------------------------------------------------------------
int hkpPhantomDisplayViewer::removeWorld(hkpPhantomDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int result;
  hkpWorldPostSimulationListener::Self *v4;

  v2 = 0;
  hkpWorld::removePhantomListener(a2, (hkpPhantomDisplayViewer::Self *)((char *)self + 40));
  hkpWorld::removeWorldPostSimulationListener(a2, (hkpPhantomDisplayViewer::Self *)((char *)self + 44));
  result = *((uint32_t *)a2 + 70);
  if ( result > 0 )
  {
    do
    {
      v4 = *(hkpWorldPostSimulationListener::Self **)(*((uint32_t *)a2 + 69) + 4 * v2++);
      result = G4_VCALL<int>(self, 52, v4);
    }
    while ( *((uint32_t *)a2 + 70) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::worldRemovedCallback  (binary VA: 0x184acb0)
// Original: hkpPhantomDisplayViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
int hkpPhantomDisplayViewer::worldRemovedCallback(hkpPhantomDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpPhantomDisplayViewer::removeWorld(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::Destroy  (binary VA: 0x184acf0)
// Original: hkpPhantomDisplayViewer::~hkpPhantomDisplayViewer
// ----------------------------------------------------------------------------
void hkpPhantomDisplayViewer::Destroy(hkpPhantomDisplayViewer::Self *self)
{
  int v1;
  int v2;
  int v3;
  hkpWorld::Self *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3D68);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3DAC);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A3DD8);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A3DF0);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A3E10);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v4 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpPhantomDisplayViewer::removeWorld(self, v4);
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  v3 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v3);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A1C28);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::Destroy_ea184ae00  (binary VA: 0x184ae00)
// Original: hkpPhantomDisplayViewer::~hkpPhantomDisplayViewer
// ----------------------------------------------------------------------------
void hkpPhantomDisplayViewer::Destroy_ea184ae00(hkpPhantomDisplayViewer::Self *self)
{
  int v1;
  int v2;

  hkpPhantomDisplayViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 60;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::addWorld  (binary VA: 0x184aea0)
// Original: hkpPhantomDisplayViewer::addWorld
// ----------------------------------------------------------------------------
int hkpPhantomDisplayViewer::addWorld(hkpPhantomDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int result;
  hkpWorldPostSimulationListener::Self *v4;

  v2 = 0;
  hkpWorld::addPhantomListener(a2, (hkpPhantomDisplayViewer::Self *)((char *)self + 40));
  result = hkpWorld::addWorldPostSimulationListener(a2, (hkpPhantomDisplayViewer::Self *)((char *)self + 44));
  if ( *((int *)a2 + 70) > 0 )
  {
    do
    {
      v4 = *(hkpWorldPostSimulationListener::Self **)(*((uint32_t *)a2 + 69) + 4 * v2++);
      result = G4_VCALL<int>(self, 48, v4);
    }
    while ( *((uint32_t *)a2 + 70) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::init  (binary VA: 0x184af20)
// Original: hkpPhantomDisplayViewer::init
// ----------------------------------------------------------------------------
int hkpPhantomDisplayViewer::init(hkpPhantomDisplayViewer::Self *self)
{
  int result;
  int v2;
  hkpWorld::Self *v3;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v2++);
      hkpPhantomDisplayViewer::addWorld(self, v3);
      result = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::worldAddedCallback  (binary VA: 0x184af90)
// Original: hkpPhantomDisplayViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpPhantomDisplayViewer::worldAddedCallback(hkpPhantomDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpPhantomDisplayViewer::addWorld(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhantomDisplayViewer::phantomAddedCallback  (binary VA: 0x184b0c0)
// Original: hkpPhantomDisplayViewer::phantomAddedCallback
// ----------------------------------------------------------------------------
char hkpPhantomDisplayViewer::phantomAddedCallback(hkpPhantomDisplayViewer::Self *self, hkpPhantomDisplayViewer::Self **a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int *v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int i;
  int savedregs;
  void *retaddr;
  typedef hkpPhantom::Self *_g4_t_v19;
  typedef hkpPhantomDisplayViewer::Self *_g4_t_v20;
  typedef hkpPhantomDisplayViewer::Self *_g4_t_v21;
  typedef uint8_t _g4_t_v22[4];
  typedef uint8_t _g4_t_v23[16];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[12];
  typedef uint8_t _g4_t_v28[16];
  typedef uint32_t _g4_t_v29[133];
  typedef char *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v25)) > _g4_s6 ? (36u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v26)) > _g4_s7 ? (40u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v27)) > _g4_s8 ? (52u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v28)) > _g4_s9 ? (64u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v29)) > _g4_s10 ? (80u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (612u + sizeof(_g4_t_v30)) > _g4_s11 ? (612u + sizeof(_g4_t_v30)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 612u);

  v29[130] = (uint32_t)(uintptr_t)(&self);
  v21 = self;
  v19 = (hkpPhantom::Self *)a2;
  v20 = a2[4];
  v2 = (*((int (**)(hkpPhantomDisplayViewer::Self **))*a2 + 8))(a2);
  v24 = 0;
  v25 = 0;
  v26 = 0x80000000;
  if ( (unsigned int)(v2 - 1) <= 1 )
    goto LABEL_8;
  v3 = *(uint32_t *)(hkSingleton<hkpUserShapePhantomTypeIdentifier::Self>::s_instance + 12);
  if ( v3 <= 0 )
    return v2;
  v4 = *(uint32_t **)(hkSingleton<hkpUserShapePhantomTypeIdentifier::Self>::s_instance + 8);
  if ( v2 == *v4 )
  {
LABEL_8:
    LOBYTE(v2) = v20 != nullptr;
LABEL_9:
    if ( (uint8_t)v2 != 0 )
    {
      hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Construct((hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v23);
      hkpShapeDisplayBuilder::Construct(
        (hkpShapeDisplayBuilder::Self *)v28,
        (const hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v23);
      hkpShapeDisplayBuilder::buildDisplayGeometries(v28, v20, &v24);
      v6 = v25 - 1;
      v7 = 4 * (v25 - 1);
      if ( v25 - 1 >= 0 )
      {
        do
        {
          while ( 1 )
          {
            v8 = *(uint32_t *)(v24 + v7);
            if ( *(uint32_t *)(v8 + 80) == 6 && *(uint32_t *)(v8 + 8) == 0 )
            {
              hkErrStream::Construct((hkErrStream::Self *)v27, (hkString::Self *)v29, 512);
              hkOstream::opShl(
                (int)(uintptr_t)(v27),
                (hkString::Self *)"Unable to build display geometry from hkpShape geometry data");
              hkError::messageReport(
                (hkError::Self *)0xFFFFFFFF,
                (int)(uintptr_t)(v29),
                "VisualDebugger/Viewer/Dynamics/hkpPhantomDisplayViewer.cpp",
                dword_90,
                savedregs);
              hkErrStream::Destroy((hkErrStream::Self *)v27);
              v9 = v25 - 1;
              if ( v6 != --v25 )
                break;
            }
            --v6;
            v7 -= 4;
            if ( v6 == -1 )
              goto LABEL_17;
          }
          --v6;
          *(uint32_t *)(v24 + v7) = *(uint32_t *)(v24 + 4 * v9);
          v7 -= 4;
        }
        while ( v6 != -1 );
      }
LABEL_17:
      v11 = *((uint32_t *)v21 + 13);
      if ( v11 == (*((uint32_t *)v21 + 14) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpPhantomDisplayViewer::Self *)((char *)v21 + 48),
          &loc_4,
          v30);
        v11 = *((uint32_t *)v21 + 13);
      }
      *(uint32_t *)(*((uint32_t *)v21 + 12) + 4 * v11) = (uint32_t)(uintptr_t)(v19);
      v12 = *((int **)v21 + 6);
      ++*((uint32_t *)v21 + 13);
      v13 = *v12;
      a2 = nullptr;
      self = v20;
      retaddr = (void *)hkpPhantomDisplayViewer::m_tag;
      savedregs = (int)(uintptr_t)(v19) + 16;
      v30 = *((char **)v19 + 6);
      v29[132] = (uint32_t)(uintptr_t)(&v24);
      v29[131] = (uint32_t)(uintptr_t)(v12);
      (*(void (**)(uint8_t *))(v13 + 12))(v22);
      v14 = *((int **)v21 + 6);
      v15 = *v14;
      savedregs = hkpPhantomDisplayViewer::m_tag;
      v29[131] = (uint32_t)(uintptr_t)(v14);
      v30 = (char *)v19 + 16;
      v29[132] = dword_21377B0;
      LOBYTE(v2) = (*(int (**)(uint8_t *))(v15 + 28))(v22);
      v16 = v25;
      for ( i = 0; i < v16; ++i )
      {
        v2 = *(uint32_t *)(v24 + 4 * i);
        if ( v2 != 0 )
        {
          LOBYTE(v2) = (*(int (**)(uint32_t))(*(uint32_t *)v2 + 4))(*(uint32_t *)(v24 + 4 * i));
          v16 = v25;
        }
      }
      v25 = 0;
      if ( v26 >= 0 )
        LOBYTE(v2) = (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                       (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                       v24,
                       4 * v26);
    }
  }
  else
  {
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( v2 == v4[v5] )
      {
        LOBYTE(v2) = v20 != nullptr && v5 != -1;
        goto LABEL_9;
      }
    }
  }
  return v2;
}


