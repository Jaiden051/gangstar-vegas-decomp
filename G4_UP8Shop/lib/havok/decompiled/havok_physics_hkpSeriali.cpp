#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSeriali.h"

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayRbTransforms::DisplayTransformPair::staticClass  (binary VA: 0x18236e0)
// Original: hkpSerializedDisplayRbTransforms::DisplayTransformPair::staticClass
// ----------------------------------------------------------------------------
void * hkpSerializedDisplayRbTransforms::DisplayTransformPair::staticClass()
{
  return &hkpSerializedDisplayRbTransformsDisplayTransformPairClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayRbTransforms::staticClass  (binary VA: 0x1823700)
// Original: hkpSerializedDisplayRbTransforms::staticClass
// ----------------------------------------------------------------------------
void * hkpSerializedDisplayRbTransforms::staticClass()
{
  return &hkpSerializedDisplayRbTransformsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayMarker::Destroy  (binary VA: 0x1828740)
// Original: hkpSerializedDisplayMarker::~hkpSerializedDisplayMarker
// ----------------------------------------------------------------------------
void hkpSerializedDisplayMarker::Destroy(hkpSerializedDisplayMarker::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayMarker::Destroy_ea1828760  (binary VA: 0x1828760)
// Original: hkpSerializedDisplayMarker::~hkpSerializedDisplayMarker
// ----------------------------------------------------------------------------
void hkpSerializedDisplayMarker::Destroy_ea1828760(hkpSerializedDisplayMarker::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayMarker::staticClass  (binary VA: 0x18287c0)
// Original: hkpSerializedDisplayMarker::staticClass
// ----------------------------------------------------------------------------
void * hkpSerializedDisplayMarker::staticClass()
{
  return &hkpSerializedDisplayMarkerClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedAgentNnEntry::staticClass  (binary VA: 0x1828b80)
// Original: hkpSerializedAgentNnEntry::staticClass
// ----------------------------------------------------------------------------
void * hkpSerializedAgentNnEntry::staticClass()
{
  return &hkpSerializedAgentNnEntryClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedSubTrack1nInfo::staticClass  (binary VA: 0x1828ba0)
// Original: hkpSerializedSubTrack1nInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpSerializedSubTrack1nInfo::staticClass()
{
  return &hkpSerializedSubTrack1nInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedTrack1nInfo::staticClass  (binary VA: 0x1828bc0)
// Original: hkpSerializedTrack1nInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpSerializedTrack1nInfo::staticClass()
{
  return &hkpSerializedTrack1nInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedTrack1nInfo::Destroy  (binary VA: 0x182bfd0)
// Original: hkpSerializedTrack1nInfo::~hkpSerializedTrack1nInfo
// ----------------------------------------------------------------------------
void hkpSerializedTrack1nInfo::Destroy(hkpSerializedTrack1nInfo::Self *self)
{
  int v1;
  int i;
  int v3;
  int address;
  int v5;
  int v6;
  int j;
  int v8;
  int v9;
  int v10;
  int v11;

  if ( *((int *)self + 2) >= 0 )
  {
    v1 = *((uint32_t *)self + 1);
    if ( v1 > 0 )
    {
      for ( i = 0; i < v1; ++i )
      {
        v3 = *(uint32_t *)(*(uint32_t *)self + 4 * i);
        if ( v3 != 0 )
        {
          address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
            *(uint32_t *)(*(uint32_t *)address + 44),
            v3,
            512);
          v1 = *((uint32_t *)self + 1);
        }
      }
    }
  }
  v5 = *((uint32_t *)self + 5);
  if ( v5 < 0 )
  {
    *((uint32_t *)self + 4) = 0;
  }
  else
  {
    v6 = *((uint32_t *)self + 4);
    if ( v6 <= 0 )
    {
      *((uint32_t *)self + 4) = 0;
LABEL_14:
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 3),
        4 * v5);
      goto LABEL_15;
    }
    for ( j = 0; j < v6; ++j )
    {
      v8 = *((uint32_t *)self + 3);
      v9 = *(uint32_t *)(v8 + 4 * j);
      if ( v9 != 0 )
      {
        hkpSerializedTrack1nInfo::Destroy(*(hkpSerializedTrack1nInfo::Self **)(v8 + 4 * j));
        v10 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v10 + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)v10 + 44),
          v9,
          32);
        v6 = *((uint32_t *)self + 4);
      }
    }
    v5 = *((uint32_t *)self + 5);
    *((uint32_t *)self + 4) = 0;
    if ( v5 >= 0 )
      goto LABEL_14;
  }
LABEL_15:
  v11 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *((uint32_t *)self + 1) = 0;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)self,
      4 * v11);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedAgentNnEntry::Destroy  (binary VA: 0x182c140)
// Original: hkpSerializedAgentNnEntry::~hkpSerializedAgentNnEntry
// ----------------------------------------------------------------------------
void hkpSerializedAgentNnEntry::Destroy(hkpSerializedAgentNnEntry::Self *self)
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
  int v13;

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1B48);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
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
  v6 = *((uint32_t *)self + 3);
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
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
  hkpSerializedTrack1nInfo::Destroy((hkpSerializedAgentNnEntry::Self *)((char *)self + 308));
  v11 = *((uint32_t *)self + 28);
  *((uint32_t *)self + 27) = 0;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 26),
      v11 & 0x3FFFFFFF);
  v12 = *((uint32_t *)self + 25);
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 28) = 0x80000000;
  *((uint32_t *)self + 24) = 0;
  if ( v12 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 23),
      32 * v12);
  v13 = *((uint32_t *)self + 22);
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 25) = 0x80000000;
  *((uint32_t *)self + 21) = 0;
  if ( v13 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 20),
      v13 & 0x3FFFFFFF);
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 22) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedAgentNnEntry::Destroy_ea182c2c0  (binary VA: 0x182c2c0)
// Original: hkpSerializedAgentNnEntry::~hkpSerializedAgentNnEntry
// ----------------------------------------------------------------------------
void hkpSerializedAgentNnEntry::Destroy_ea182c2c0(hkpSerializedAgentNnEntry::Self *self)
{
  int v1;
  int v2;

  hkpSerializedAgentNnEntry::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 352;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayRbTransforms::Destroy  (binary VA: 0x1831250)
// Original: hkpSerializedDisplayRbTransforms::~hkpSerializedDisplayRbTransforms
// ----------------------------------------------------------------------------
void hkpSerializedDisplayRbTransforms::Destroy(hkpSerializedDisplayRbTransforms::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  volatile int32_t *v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;
  int v11;

  v1 = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A2168);
  v11 = *((uint32_t *)self + 3);
  if ( v11 > 0 )
  {
    do
    {
      v2 = *((uint32_t *)self + 2) + 80 * v1;
      v3 = *(uint32_t **)v2;
      v4 = (volatile int32_t *)(*(uint32_t *)v2 + 4);
      if ( *(uint16_t *)(*(uint32_t *)v2 + 6) != 0 )
      {
        v10 = v1;
        do
        {
          v6 = v3[1];
          HIWORD(v5) = HIWORD(v6);
          LOWORD(v5) = 0;
          v7 = v5 | (uint16_t)(v6 - 1);
          v8 = v6;
        }
        while ( v8 != __sync_val_compare_and_swap(v4, v8, v7) );
        v1 = v10;
        if ( (uint16_t)v7 == 0 )
          G4_VCALL<void>(v3, 16);
      }
      ++v1;
    }
    while ( v1 != v11 );
  }
  v9 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      80 * v9);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayRbTransforms::Destroy_ea1831330  (binary VA: 0x1831330)
// Original: hkpSerializedDisplayRbTransforms::~hkpSerializedDisplayRbTransforms
// ----------------------------------------------------------------------------
void hkpSerializedDisplayRbTransforms::Destroy_ea1831330(hkpSerializedDisplayRbTransforms::Self *self)
{
  int v1;
  int v2;

  hkpSerializedDisplayRbTransforms::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayMarkerList::Destroy  (binary VA: 0x1839010)
// Original: hkpSerializedDisplayMarkerList::~hkpSerializedDisplayMarkerList
// ----------------------------------------------------------------------------
void hkpSerializedDisplayMarkerList::Destroy(hkpSerializedDisplayMarkerList::Self *self)
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

  v1 = 0;
  v2 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3018);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 2) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v9 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v9;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 3);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v8);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayMarkerList::Destroy_ea18390e0  (binary VA: 0x18390e0)
// Original: hkpSerializedDisplayMarkerList::~hkpSerializedDisplayMarkerList
// ----------------------------------------------------------------------------
void hkpSerializedDisplayMarkerList::Destroy_ea18390e0(hkpSerializedDisplayMarkerList::Self *self)
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
  int v10;
  int v11;

  v1 = 0;
  v2 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3018);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 2) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v11 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v11;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 3);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v8);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v9 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v10 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v10 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v9, 12, self, v10);
}

// ----------------------------------------------------------------------------
// Function: hkpSerializedDisplayMarkerList::staticClass  (binary VA: 0x18391e0)
// Original: hkpSerializedDisplayMarkerList::staticClass
// ----------------------------------------------------------------------------
void * hkpSerializedDisplayMarkerList::staticClass()
{
  return &hkpSerializedDisplayMarkerListClass;
}


