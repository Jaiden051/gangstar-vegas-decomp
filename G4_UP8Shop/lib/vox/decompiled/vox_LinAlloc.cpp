#include "Core/Utils/DecompTypes.h"
#include "vox_LinAlloc.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_LinAlloc.cpp
// Library: vox | Module: vox_LinAlloc
// Binary Address Span: 0x1057770 .. 0x1057880 (5 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1057770 (size: 32 bytes)
// Symbol:    _ZN3vox8LinAllocC1Ev
// Demangled: vox::LinAlloc::LinAlloc(void)
// ============================================================================
// Alternative name is '_ZN3vox8LinAllocC2Ev'
struct vox::LinAlloc::Self *vox::LinAlloc::LinAlloc(vox::LinAlloc::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 8;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::LinAlloc::Destroy  (binary VA: 0x1057790)
// Original: vox::LinAlloc::~LinAlloc
// ----------------------------------------------------------------------------
void vox::LinAlloc::Destroy(void **self)
{
  if ( *self != nullptr )
    VoxFreeInternal(*self);
  *(self + 1) = nullptr;
  *self = nullptr;
}

// ----------------------------------------------------------------------------
// Function: vox::LinAlloc::AddSize  (binary VA: 0x10577e0)
// Original: vox::LinAlloc::AddSize
// ----------------------------------------------------------------------------
vox::LinAlloc::Self * vox::LinAlloc::AddSize(vox::LinAlloc::Self *self, int a2, int a3)
{
  vox::LinAlloc::Self *result;

  result = self;
  if ( *((uint32_t *)self + 3) < a3 )
    *((uint32_t *)self + 3) = a3;
  *((uint32_t *)self + 2) = a2 + ((*((uint32_t *)self + 2) - 1) | (a3 - 1)) + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::LinAlloc::Allocate  (binary VA: 0x1057810)
// Original: vox::LinAlloc::Allocate
// ----------------------------------------------------------------------------
bool vox::LinAlloc::Allocate(vox::LinAlloc::Self *self)
{
  size_t v1;
  int v2;

  v1 = *((uint32_t *)self + 2) + *((uint32_t *)self + 3) - 8;
  *((uint32_t *)self + 2) = v1;
  v2 = VoxAllocInternal(v1, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_linear_allocator.cpp"), (int)(uintptr_t)("Allocate"), 37);
  *(uint32_t *)self = v2;
  *((uint32_t *)self + 1) = v2;
  return v2 != 0;
}

// ----------------------------------------------------------------------------
// Function: vox::LinAlloc::GetMem  (binary VA: 0x1057880)
// Original: vox::LinAlloc::GetMem
// ----------------------------------------------------------------------------
int vox::LinAlloc::GetMem(vox::LinAlloc::Self *self, int a2, int a3)
{
  int result;
  unsigned int v4;

  result = ((*((uint32_t *)self + 1) - 1) | (a3 - 1)) + 1;
  v4 = *((uint32_t *)self + 2) + *(uint32_t *)self;
  *((uint32_t *)self + 1) = result + a2;
  if ( result + a2 > v4 )
    return 0;
  return result;
}


