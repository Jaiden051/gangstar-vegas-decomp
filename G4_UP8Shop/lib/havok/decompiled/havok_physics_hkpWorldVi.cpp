#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldVi.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldViewerBase::getConsumableCommands  (binary VA: 0x182db10)
// Original: hkpWorldViewerBase::getConsumableCommands
// ----------------------------------------------------------------------------
int * hkpWorldViewerBase::getConsumableCommands(hkpWorldViewerBase::Self *self, uint8_t **a2, int *a3)
{
  *a2 = nullptr;
  *a3 = 0;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldViewerBase::consumeCommand  (binary VA: 0x182db40)
// Original: hkpWorldViewerBase::consumeCommand
// ----------------------------------------------------------------------------
void hkpWorldViewerBase::consumeCommand()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldViewerBase::step  (binary VA: 0x182db60)
// Original: hkpWorldViewerBase::step
// ----------------------------------------------------------------------------
void hkpWorldViewerBase::step()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldViewerBase::worldRemovedCallback  (binary VA: 0x18308f0)
// Original: hkpWorldViewerBase::worldRemovedCallback
// ----------------------------------------------------------------------------
void hkpWorldViewerBase::worldRemovedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldViewerBase::worldAddedCallback  (binary VA: 0x1830910)
// Original: hkpWorldViewerBase::worldAddedCallback
// ----------------------------------------------------------------------------
void hkpWorldViewerBase::worldAddedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldViewerBase::Destroy  (binary VA: 0x1846900)
// Original: hkpWorldViewerBase::~hkpWorldViewerBase
// ----------------------------------------------------------------------------
void hkpWorldViewerBase::Destroy(hkpWorldViewerBase::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3A88);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3AB8);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A3AE4);
  if ( *((uint32_t *)self + 9) != 0 )
  {
    hkpPhysicsContext::removeWorldAddedListener(
      *((hkpPhysicsContext::Self **)self + 9),
      (hkpWorldViewerBase::Self *)((char *)self + 32));
    v1 = *((uint32_t *)self + 9);
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
    *((uint32_t *)self + 9) = 0;
  }
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A3A30);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3A48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldViewerBase::Destroy_ea18469e0  (binary VA: 0x18469e0)
// Original: hkpWorldViewerBase::~hkpWorldViewerBase
// ----------------------------------------------------------------------------
void hkpWorldViewerBase::Destroy_ea18469e0(hkpWorldViewerBase::Self *self)
{
  int v1;
  int v2;

  hkpWorldViewerBase::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 40;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldViewerBase::Construct  (binary VA: 0x1846a60)
// Original: hkpWorldViewerBase::hkpWorldViewerBase
// ----------------------------------------------------------------------------
hkpPhysicsContext::Self * hkpWorldViewerBase::Construct(int a1, uint32_t *a2)
{
  int v2;
  hkpPhysicsContext::Self *result;
  char *v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  hkpPhysicsContext::Self *v8;

  v2 = 0;
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint8_t *)(a1 + 12) = 1;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A3A88);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20A3AB8);
  *(uint32_t *)(a1 + 32) = ((uint32_t)(uintptr_t)&off_20A3AE4);
  result = (hkpPhysicsContext::Self *)a2[1];
  v8 = result;
  if ( (int)(uintptr_t)(result) > 0 )
  {
    while ( 1 )
    {
      v4 = (char *)(*(int (**)(uint32_t))(**(uint32_t **)(*a2 + 4 * v2) + 8))(*(uint32_t *)(*a2 + 4 * v2));
      result = (hkpPhysicsContext::Self *)hkString::strCmp((hkString::Self *)"Physics 2012", v4);
      if ( result == nullptr )
        break;
      if ( (hkpPhysicsContext::Self *)++v2 == v8 )
      {
        result = *(hkpPhysicsContext::Self **)(a1 + 36);
        goto LABEL_8;
      }
    }
    if ( *(uint32_t *)(*a2 + 4 * v2) != 0 )
      result = (hkpPhysicsContext::Self *)(*(uint32_t *)(*a2 + 4 * v2) - 8);
    *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(result);
LABEL_8:
    if ( result != nullptr )
    {
      hkpPhysicsContext::addWorldAddedListener(result, (hkpPhysicsContextWorldListener::Self *)(a1 + 32));
      result = (hkpPhysicsContext::Self *)a1;
      v5 = *(uint32_t *)(a1 + 36);
      if ( *(uint16_t *)(v5 + 6) != 0 )
      {
        do
        {
          v7 = *(uint32_t *)(v5 + 4);
          HIWORD(v6) = HIWORD(v7);
          LOWORD(v6) = 0;
          result = (hkpPhysicsContext::Self *)__sync_val_compare_and_swap(
                                          (volatile int32_t *)(v5 + 4),
                                          v7,
                                          v6 | (uint16_t)(v7 + 1));
        }
        while ( (hkpPhysicsContext::Self *)v7 != result );
      }
    }
  }
  return result;
}


