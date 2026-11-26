#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBvShape.h"

// ----------------------------------------------------------------------------
// Function: hkpBvShape::staticClass  (binary VA: 0x16b6690)
// Original: hkpBvShape::staticClass
// ----------------------------------------------------------------------------
void * hkpBvShape::staticClass()
{
  return &hkpBvShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBvShape::getAabb  (binary VA: 0x16f47a0)
// Original: hkpBvShape::getAabb
// ----------------------------------------------------------------------------
int hkpBvShape::getAabb(hkpBvShape::Self *self, const hkTransformf::Self *a2, int64_t a3)
{
  return (*(int (**)(uint32_t, const hkTransformf::Self *, uint32_t, uint32_t))(**((uint32_t **)self + 4) + 24))(
           *((uint32_t *)self + 4),
           a2,
           a3,
           HIDWORD(a3));
}

// ----------------------------------------------------------------------------
// Function: hkpBvShape::getContainer  (binary VA: 0x16f47e0)
// Original: hkpBvShape::getContainer
// ----------------------------------------------------------------------------
char * hkpBvShape::getContainer(hkpBvShape::Self *self)
{
  return (char *)self + 20;
}

// ----------------------------------------------------------------------------
// Function: hkpBvShape::castRayWithCollector  (binary VA: 0x16f47f0)
// Original: hkpBvShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpBvShape::castRayWithCollector(int a1, int a2, int a3, int a4)
{
  int *address;
  int v5;
  int *v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint64_t v9; // rax
  int v10;
  uint32_t *v11;
  uint32_t v13[11];

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v6 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtrcBvShape");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v13[2] = *(uint32_t *)(a3 + 8);
  v13[3] = a3;
  v13[1] = 0;
  v13[0] = *(uint32_t *)(a1 + 24);
  LODWORD(v9) = G4_VCALL<int>(v13[0], 32, a2, v13, a4);
  v10 = *v6;
  v11 = *(uint32_t **)(*v6 + 4);
  if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*v6 + 12) )
  {
    *v11 = (uint32_t)(uintptr_t)("Et");
    v9 = __rdtsc();
    v11[1] = v9;
    *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkpBvShape::castRay  (binary VA: 0x16f48a0)
// Original: hkpBvShape::castRay
// ----------------------------------------------------------------------------
uint8_t * hkpBvShape::castRay(uint8_t *a1, int a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  uint32_t *v10;
  uint64_t v11; // rax
  int v13;
  int v14;
  int v15;
  int *v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v16 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcBvShape");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  ++*(uint32_t *)(a4 + 64);
  (*(void (**)(uint8_t *, uint32_t, int, int, int, int, int, int *, int, int, int, int))(**(uint32_t **)(a2 + 24)
                                                                                             + 28))(
    a1,
    *(uint32_t *)(a2 + 24),
    a3,
    a4,
    v13,
    v14,
    v15,
    v16,
    v18,
    v19,
    v20,
    v21);
  v8 = *(uint32_t *)(a4 + 64);
  *(uint32_t *)(a4 + 64) = v8 - 1;
  if ( *a1 != 0 )
    *(uint32_t *)(a4 + 4 * v8 + 28) = 0;
  v9 = *v17;
  v10 = *(uint32_t **)(*v17 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v17 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("Et");
    v11 = __rdtsc();
    v10[1] = v11;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpBvShape::Destroy  (binary VA: 0x16f4960)
// Original: hkpBvShape::~hkpBvShape
// ----------------------------------------------------------------------------
void hkpBvShape::Destroy(hkpBvShape::Self *self)
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

  v1 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209BBA8);
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
  v6 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBvShape::Destroy_ea16f4a30  (binary VA: 0x16f4a30)
// Original: hkpBvShape::~hkpBvShape
// ----------------------------------------------------------------------------
void hkpBvShape::Destroy_ea16f4a30(hkpBvShape::Self *self)
{
  int v1;
  int v2;

  hkpBvShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBvShape::Construct  (binary VA: 0x16f4a90)
// Original: hkpBvShape::hkpBvShape
// ----------------------------------------------------------------------------
void hkpBvShape::Construct(hkpBvShape::Self *self, const hkpShape::Self *a2, const hkpShape::Self *a3)
{
  const hkpShape::Self *v3;
  int v4;
  int32_t v5; // kr00_4
  int v6;
  int32_t v7; // kr04_4

  v3 = a2;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209BBA8);
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 30;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994E8);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a3);
  if ( *((uint16_t *)a3 + 3) != 0 )
  {
    do
    {
      v7 = *((uint32_t *)a3 + 1);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
    }
    while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)a3 + 1, v7, v6 | (uint16_t)(v7 + 1)) );
    v3 = *((const hkpShape::Self **)self + 4);
  }
  if ( *((uint16_t *)v3 + 3) != 0 )
  {
    do
    {
      v5 = *((uint32_t *)v3 + 1);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)v3 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
  }
}



// ============================================================================
// Address:   0x16f4b40 (size: 71 bytes)
// Symbol:    _ZN10hkpBvShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpBvShape::hkpBvShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN10hkpBvShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpBvShape::Construct(int a1, int a2))(hkpSingleShapeContainer::Self * self)
{
  hkpShape::hkpShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 30;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209BBA8);
  *(uint32_t *)(a1 + 20) = ((uint32_t)(uintptr_t)&off_20994E8);
  return (void (**)(hkpSingleShapeContainer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20994E8));
}

