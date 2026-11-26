#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorInputEvent.h"

// ============================================================================
// G4_UP8Shop/lib/grapher/decompiled/grapher_ActorInputEvent.cpp
// Library: grapher | Module: grapher_ActorInputEvent
// Binary Address Span: 0x13b8960 .. 0x13b94e0 (2 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13b8960 (size: 89 bytes)
// Symbol:    _ZN7grapher15ActorInputEventC1EPNS_9ActorBaseEi
// Demangled: grapher::ActorInputEvent::ActorInputEvent(grapher::ActorBase *,int)
// ============================================================================
// Alternative name is '_ZN7grapher15ActorInputEventC2EPNS_9ActorBaseEi'
struct grapher::ActorInputEvent::Self *grapher::ActorInputEvent::ActorInputEvent(
        grapher::ActorInputEvent::Self *self,
        grapher::ActorBase::Self *a2,
        int a3)
{
  struct grapher::ActorInputEvent::Self *result;

  result = self;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20678D0);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = a3;
  if ( a2 != nullptr )
    return (struct grapher::ActorInputEvent::Self *)(grapher::ActorBase::DBG_IncrementPinConnectionCount(a2, a3, true));
  return result;
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorInputEvent::Event  (binary VA: 0x13b94e0)
// Original: grapher::ActorInputEvent::Event
// ----------------------------------------------------------------------------
int grapher::ActorInputEvent::Event(grapher::ActorInputEvent::Self *self, grapher::ActorContext::Self *a2)
{
  int result;

  result = *((uint32_t *)self + 1);
  if ( result != 0 )
  {
    grapher::ActorBase::OnEvent(*((grapher::ActorBase::Self **)self + 1), *((uint32_t *)self + 2));
    return (*(int (**)(uint32_t, uint32_t, grapher::ActorContext::Self *))(**((uint32_t **)self + 1) + 36))(
             *((uint32_t *)self + 1),
             *((uint32_t *)self + 2),
             a2);
  }
  return result;
}


