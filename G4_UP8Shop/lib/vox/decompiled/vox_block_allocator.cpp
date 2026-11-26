#include "Core/Utils/DecompTypes.h"
#include "vox_block_allocator.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_block_allocator.cpp
// Library: vox | Module: vox_block_allocator
// Binary Address Span: 0x1040f60 .. 0x1041090 (5 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1040f60 (size: 18 bytes)
// Symbol:    _ZN3vox15block_allocatorC1Ej
// Demangled: vox::block_allocator::block_allocator(unsigned int)
// ============================================================================
// Alternative name is '_ZN3vox15block_allocatorC2Ej'
struct vox::block_allocator::Self *vox::block_allocator::block_allocator(vox::block_allocator::Self *self, unsigned int a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = a2;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::block_allocator::Destroy  (binary VA: 0x1040f80)
// Original: vox::block_allocator::~block_allocator
// ----------------------------------------------------------------------------
void vox::block_allocator::Destroy(vox::block_allocator::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;

  v1 = *(uint32_t **)self;
  if ( *(uint32_t *)self != 0 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)v1[3];
      VoxFreeInternal(v1);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
      if ( v2 == nullptr )
        break;
      v1 = v2;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: vox::block_allocator::swap  (binary VA: 0x1040fc0)
// Original: vox::block_allocator::swap
// ----------------------------------------------------------------------------
vox::block_allocator::Self * vox::block_allocator::swap(vox::block_allocator::Self *self, vox::block_allocator::Self *a2)
{
  int v3;
  int v4;

  v3 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a2 + 1) = v3;
  v4 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: vox::block_allocator::malloc  (binary VA: 0x1040fe0)
// Original: vox::block_allocator::malloc
// ----------------------------------------------------------------------------
size_t vox::block_allocator::malloc(vox::block_allocator::Self *self, unsigned int a2)
{
  size_t *v2;
  size_t v3;
  size_t v4;
  size_t v5;

  v2 = *(size_t **)self;
  if ( *(uint32_t *)self == 0 || (v3 = v2[1], v4 = a2 + v3, a2 + v3 > *v2) )
  {
    v5 = a2 + 16;
    if ( a2 + 16 < *((uint32_t *)self + 1) )
      v5 = *((uint32_t *)self + 1);
    v2 = (size_t *)VoxAllocInternal(
                     v5,
                     0,
                     (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_json_block_allocator.cpp"),
                     (int)(uintptr_t)("malloc"),
                     41);
    *v2 = v5;
    v2[1] = 16;
    v2[2] = (size_t)v2;
    v2[3] = *(uint32_t *)self;
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
    v3 = v2[1];
    v4 = a2 + v3;
  }
  v2[1] = v4;
  return v2[2] + v3;
}

// ----------------------------------------------------------------------------
// Function: vox::block_allocator::free  (binary VA: 0x1041090)
// Original: vox::block_allocator::free
// ----------------------------------------------------------------------------
void vox::block_allocator::free(vox::block_allocator::Self *self)
{
  uint8_t v1[12];

  vox::block_allocator::block_allocator((vox::block_allocator::Self *)v1, 0);
  vox::block_allocator::swap((vox::block_allocator::Self *)v1, self);
  vox::block_allocator::Destroy((vox::block_allocator::Self *)v1);
}


