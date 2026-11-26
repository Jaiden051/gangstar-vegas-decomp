#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWrapped.h"

// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::staticClass  (binary VA: 0x17163d0)
// Original: hkpWrappedConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpWrappedConstraintData::staticClass()
{
  return &hkpWrappedConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::getConstraintInfo  (binary VA: 0x1af4010)
// Original: hkpWrappedConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
int hkpWrappedConstraintData::getConstraintInfo(int a1, int a2)
{
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 12) + 24))(*(uint32_t *)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::isValid  (binary VA: 0x1af4030)
// Original: hkpWrappedConstraintData::isValid
// ----------------------------------------------------------------------------
hkpWrappedConstraintData::Self * hkpWrappedConstraintData::isValid(hkpWrappedConstraintData::Self *self, int a2)
{
  (*(void (**)(hkpWrappedConstraintData::Self *))(**(uint32_t **)(a2 + 12) + 28))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::getRuntimeInfo  (binary VA: 0x1af4060)
// Original: hkpWrappedConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
int hkpWrappedConstraintData::getRuntimeInfo(int a1, char a2, int a3)
{
  return (*(int (**)(uint32_t, char, int))(**(uint32_t **)(a1 + 12) + 76))(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::getSolverResults  (binary VA: 0x1af4090)
// Original: hkpWrappedConstraintData::getSolverResults
// ----------------------------------------------------------------------------
int hkpWrappedConstraintData::getSolverResults(int a1, int a2)
{
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 12) + 80))(*(uint32_t *)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::getWrappedConstraintData  (binary VA: 0x1af40b0)
// Original: hkpWrappedConstraintData::getWrappedConstraintData
// ----------------------------------------------------------------------------
int hkpWrappedConstraintData::getWrappedConstraintData(hkpWrappedConstraintData::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::accessWrappedConstraintData  (binary VA: 0x1af40c0)
// Original: hkpWrappedConstraintData::accessWrappedConstraintData
// ----------------------------------------------------------------------------
int hkpWrappedConstraintData::accessWrappedConstraintData(hkpWrappedConstraintData::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::Destroy  (binary VA: 0x1af40d0)
// Original: hkpWrappedConstraintData::~hkpWrappedConstraintData
// ----------------------------------------------------------------------------
void hkpWrappedConstraintData::Destroy(hkpWrappedConstraintData::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;

  v1 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1F88);
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
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v6 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v7 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v7 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v6, 12, self, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::Destroy_ea1af4190  (binary VA: 0x1af4190)
// Original: hkpWrappedConstraintData::~hkpWrappedConstraintData
// ----------------------------------------------------------------------------
void hkpWrappedConstraintData::Destroy_ea1af4190(hkpWrappedConstraintData::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1F88);
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
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}



// ============================================================================
// Address:   0x1af4210 (size: 55 bytes)
// Symbol:    _ZN24hkpWrappedConstraintDataC2E24hkFinishLoadedObjectFlag
// Demangled: hkpWrappedConstraintData::hkpWrappedConstraintData(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN24hkpWrappedConstraintDataC1E24hkFinishLoadedObjectFlag'
void (**hkpWrappedConstraintData::Construct(
        uint32_t *a1))(hkpWrappedConstraintData::Self * self)
{
  hkpConstraintData::Construct(a1);
  *a1 = ((uint32_t)(uintptr_t)&off_20B1F88);
  return (void (**)(hkpWrappedConstraintData::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20B1F88));
}
// ----------------------------------------------------------------------------
// Function: hkpWrappedConstraintData::Construct  (binary VA: 0x1af4250)
// Original: hkpWrappedConstraintData::hkpWrappedConstraintData
// ----------------------------------------------------------------------------
void hkpWrappedConstraintData::Construct(hkpWrappedConstraintData::Self *self, hkpConstraintData::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4

  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1F88);
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v3 = *((uint32_t *)a2 + 1);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
  }
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
}


