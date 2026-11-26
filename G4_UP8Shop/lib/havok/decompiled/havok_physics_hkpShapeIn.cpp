#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShapeIn.h"

// ----------------------------------------------------------------------------
// Function: hkpShapeInfo::Destroy  (binary VA: 0x16973f0)
// Original: hkpShapeInfo::~hkpShapeInfo
// ----------------------------------------------------------------------------
void hkpShapeInfo::Destroy(hkpShapeInfo::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  hkStringPtr::Self *v6;
  int v7;
  int v8;
  int v9;
  int32_t v10; // kr00_4
  int32_t v11;
  int32_t v12; // ett
  int v13;
  int v14;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20995E8);
  v1 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 8) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 7),
      v1 << 6);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 7) = 0;
  v3 = v2;
  v4 = *((uint32_t *)self + 4);
  v5 = v3 - 1;
  *((uint32_t *)self + 9) = 0x80000000;
  v6 = (hkStringPtr::Self *)(v4 + 4 * v5);
  if ( v5 >= 0 )
  {
    do
    {
      --v5;
      hkStringPtr::Destroy(v6);
      v6 = (hkStringPtr::Self *)((char *)v6 - 4);
    }
    while ( v5 != -1 );
  }
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      4 * v7);
  v8 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  if ( v8 != 0 && *(uint16_t *)(v8 + 6) != 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v8 + 4);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      v11 = v9 | (uint16_t)(v10 - 1);
      v12 = v10;
    }
    while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v12, v11) );
    if ( (uint16_t)v11 == 0 )
      G4_VCALL<void>(v8, 16);
  }
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v13 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v14 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v14 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v13, 12, self, v14);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeInfo::Destroy_ea1697550  (binary VA: 0x1697550)
// Original: hkpShapeInfo::~hkpShapeInfo
// ----------------------------------------------------------------------------
void hkpShapeInfo::Destroy_ea1697550(hkpShapeInfo::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  hkStringPtr::Self *v5;
  int v6;
  int v7;
  int v8;
  int32_t v9; // kr00_4
  int32_t v10;
  int32_t v11; // ett

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20995E8);
  v1 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 8) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 7),
      v1 << 6);
  v2 = *((uint32_t *)self + 4);
  v3 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 7) = 0;
  v4 = v3 - 1;
  *((uint32_t *)self + 9) = 0x80000000;
  v5 = (hkStringPtr::Self *)(v2 + 4 * v4);
  if ( v4 >= 0 )
  {
    do
    {
      --v4;
      hkStringPtr::Destroy(v5);
      v5 = (hkStringPtr::Self *)((char *)v5 - 4);
    }
    while ( v4 != -1 );
  }
  v6 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      4 * v6);
  v7 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  if ( v7 != 0 && *(uint16_t *)(v7 + 6) != 0 )
  {
    do
    {
      v9 = *(uint32_t *)(v7 + 4);
      HIWORD(v8) = HIWORD(v9);
      LOWORD(v8) = 0;
      v10 = v8 | (uint16_t)(v9 - 1);
      v11 = v9;
    }
    while ( v11 != __sync_val_compare_and_swap((volatile int32_t *)(v7 + 4), v11, v10) );
    if ( (uint16_t)v10 == 0 )
      G4_VCALL<void>(v7, 16);
  }
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeInfo::staticClass  (binary VA: 0x1697680)
// Original: hkpShapeInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpShapeInfo::staticClass()
{
  return &hkpShapeInfoClass;
}


