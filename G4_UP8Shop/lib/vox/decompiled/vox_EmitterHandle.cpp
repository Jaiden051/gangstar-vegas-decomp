#include "Core/Utils/DecompTypes.h"
#include "vox_EmitterHandle.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_EmitterHandle.cpp
// Library: vox | Module: vox_EmitterHandle
// Binary Address Span: 0x1025bf0 .. 0x1025e80 (5 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1025bf0 (size: 142 bytes)
// Symbol:    _ZN3vox13EmitterHandleC1ExPPNS_17VoxEngineInternalEPNS_9HandlableEjj
// Demangled: vox::EmitterHandle::EmitterHandle(long long,vox::VoxEngineInternal **,vox::Handlable *,unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN3vox13EmitterHandleC2ExPPNS_17VoxEngineInternalEPNS_9HandlableEjj'
struct vox::EmitterHandle::Self *vox::EmitterHandle::Construct(
        vox::EmitterHandle::Self *self,
        int64_t a2,
        vox::VoxEngineInternal::Self **a3,
        vox::Handlable::Self *a4,
        unsigned int a5,
        unsigned int a6)
{
  struct vox::EmitterHandle::Self *result;

  result = self;
  *((uint32_t *)self + 1) = a2;
  *((uint32_t *)self + 3) = a5;
  *((uint32_t *)self + 4) = a6;
  *((uint32_t *)self + 2) = HIDWORD(a2);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D8A8);
  if ( a3 != nullptr && *a3 != nullptr )
  {
    if ( a4 != nullptr )
      return (struct vox::EmitterHandle::Self *)G4_VCALL<int>(a4, 8);
    else
      return (struct vox::EmitterHandle::Self *)vox::VoxEngineInternal::IncreaseEmitterObjectRefCount(*a3, self);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: vox::EmitterHandle::Construct  (binary VA: 0x1025c80)
// Original: vox::EmitterHandle::EmitterHandle
// ----------------------------------------------------------------------------
vox::EmitterHandle::Self * vox::EmitterHandle::Construct(vox::EmitterHandle::Self *self, const vox::EmitterHandle::Self *a2)
{
  vox::EmitterHandle::Self *result;
  int v3;
  vox::VoxEngineInternal::Self **v4;

  result = self;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204A0C8);
  v3 = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 1) = v3;
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  v4 = *((vox::VoxEngineInternal::Self ***)a2 + 6);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D8A8);
  if ( v4 != nullptr && *v4 != nullptr )
    return (vox::EmitterHandle::Self *)vox::VoxEngineInternal::IncreaseEmitterObjectRefCount(*v4, self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterHandle::opAssign  (binary VA: 0x1025d80)
// Original: vox::EmitterHandle::operator=
// ----------------------------------------------------------------------------
vox::EmitterHandle::Self * vox::EmitterHandle::opAssign(vox::EmitterHandle::Self *self, const vox::EmitterHandle::Self *a2)
{
  vox::VoxEngineInternal::Self **v2;
  vox::VoxEngineInternal::Self *v3;
  vox::VoxEngineInternal::Self **v4;
  int v5;
  vox::VoxEngineInternal::Self *v6;

  if ( self != a2 )
  {
    v2 = *((vox::VoxEngineInternal::Self ***)self + 6);
    if ( v2 != nullptr )
    {
      v3 = *v2;
      if ( v3 != nullptr )
        vox::VoxEngineInternal::DecreaseEmitterObjectRefCount(v3, self);
    }
    v4 = *((vox::VoxEngineInternal::Self ***)a2 + 6);
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v4);
    v5 = *((uint32_t *)a2 + 2);
    *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
    *((uint32_t *)self + 2) = v5;
    *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
    *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
    *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
    *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
    if ( v4 != nullptr )
    {
      v6 = *v4;
      if ( v6 != nullptr )
        vox::VoxEngineInternal::IncreaseEmitterObjectRefCount(v6, self);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterHandle::Destroy  (binary VA: 0x1025e20)
// Original: vox::EmitterHandle::~EmitterHandle
// ----------------------------------------------------------------------------
void vox::EmitterHandle::Destroy(vox::EmitterHandle::Self *self)
{
  vox::VoxEngineInternal::Self **v1;
  vox::VoxEngineInternal::Self *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D8A8);
  v1 = *((vox::VoxEngineInternal::Self ***)self + 6);
  if ( v1 != nullptr )
  {
    v2 = *v1;
    if ( v2 != nullptr )
      vox::VoxEngineInternal::DecreaseEmitterObjectRefCount(v2, self);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204A0C8);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterHandle::Destroy_ea1025e80  (binary VA: 0x1025e80)
// Original: vox::EmitterHandle::~EmitterHandle
// ----------------------------------------------------------------------------
void vox::EmitterHandle::Destroy_ea1025e80(vox::EmitterHandle::Self *self)
{
  vox::EmitterHandle::Destroy(self);
  opDelete(self);
}


