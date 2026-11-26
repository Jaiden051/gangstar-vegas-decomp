#include "Core/Utils/DecompTypes.h"
#include "vox_DataHandle.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_DataHandle.cpp
// Library: vox | Module: vox_DataHandle
// Binary Address Span: 0x10263c0 .. 0x10267f0 (5 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x10263c0 (size: 142 bytes)
// Symbol:    _ZN3vox10DataHandleC1ExPPNS_17VoxEngineInternalEPNS_9HandlableEjj
// Demangled: vox::DataHandle::DataHandle(long long,vox::VoxEngineInternal **,vox::Handlable *,unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN3vox10DataHandleC2ExPPNS_17VoxEngineInternalEPNS_9HandlableEjj'
struct vox::DataHandle::Self *vox::DataHandle::Construct(
        vox::DataHandle::Self *self,
        int64_t a2,
        vox::VoxEngineInternal::Self **a3,
        vox::Handlable::Self *a4,
        unsigned int a5,
        unsigned int a6)
{
  struct vox::DataHandle::Self *result;

  result = self;
  *((uint32_t *)self + 1) = a2;
  *((uint32_t *)self + 3) = a5;
  *((uint32_t *)self + 4) = a6;
  *((uint32_t *)self + 2) = HIDWORD(a2);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D888);
  if ( a3 != nullptr && *a3 != nullptr )
  {
    if ( a4 != nullptr )
      return (struct vox::DataHandle::Self *)G4_VCALL<int>(a4, 8);
    else
      return (struct vox::DataHandle::Self *)vox::VoxEngineInternal::IncreaseDataObjectRefCount(*a3, (int *)self);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: vox::DataHandle::Construct  (binary VA: 0x1026560)
// Original: vox::DataHandle::DataHandle
// ----------------------------------------------------------------------------
vox::DataHandle::Self * vox::DataHandle::Construct(vox::DataHandle::Self *self, const vox::DataHandle::Self *a2)
{
  vox::DataHandle::Self *result;
  int v3;
  vox::HandlableContainer::Self **v4;

  result = self;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204A0C8);
  v3 = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 1) = v3;
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  v4 = *((vox::HandlableContainer::Self ***)a2 + 6);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D888);
  if ( v4 != nullptr && *v4 != nullptr )
    return (vox::DataHandle::Self *)vox::VoxEngineInternal::IncreaseDataObjectRefCount(*v4, (int *)self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DataHandle::opAssign  (binary VA: 0x10266f0)
// Original: vox::DataHandle::operator=
// ----------------------------------------------------------------------------
vox::DataHandle::Self * vox::DataHandle::opAssign(vox::DataHandle::Self *self, const vox::DataHandle::Self *a2)
{
  vox::VoxEngineInternal::Self **v2;
  vox::VoxEngineInternal::Self *v3;
  vox::HandlableContainer::Self **v4;
  int v5;
  vox::HandlableContainer::Self *v6;

  if ( self != a2 )
  {
    v2 = *((vox::VoxEngineInternal::Self ***)self + 6);
    if ( v2 != nullptr )
    {
      v3 = *v2;
      if ( v3 != nullptr )
        vox::VoxEngineInternal::DecreaseDataObjectRefCount(v3, self);
    }
    v4 = *((vox::HandlableContainer::Self ***)a2 + 6);
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
        vox::VoxEngineInternal::IncreaseDataObjectRefCount(v6, (int *)self);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::DataHandle::Destroy  (binary VA: 0x1026790)
// Original: vox::DataHandle::~DataHandle
// ----------------------------------------------------------------------------
void vox::DataHandle::Destroy(vox::DataHandle::Self *self)
{
  vox::VoxEngineInternal::Self **v1;
  vox::VoxEngineInternal::Self *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D888);
  v1 = *((vox::VoxEngineInternal::Self ***)self + 6);
  if ( v1 != nullptr )
  {
    v2 = *v1;
    if ( v2 != nullptr )
      vox::VoxEngineInternal::DecreaseDataObjectRefCount(v2, self);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204A0C8);
}

// ----------------------------------------------------------------------------
// Function: vox::DataHandle::Destroy_ea10267f0  (binary VA: 0x10267f0)
// Original: vox::DataHandle::~DataHandle
// ----------------------------------------------------------------------------
void vox::DataHandle::Destroy_ea10267f0(vox::DataHandle::Self *self)
{
  vox::DataHandle::Destroy(self);
  opDelete(self);
}


