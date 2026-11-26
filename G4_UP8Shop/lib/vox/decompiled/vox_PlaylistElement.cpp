#include "Core/Utils/DecompTypes.h"
#include "vox_PlaylistElement.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_PlaylistElement.cpp
// Library: vox | Module: vox_PlaylistElement
// Binary Address Span: 0xff1f30 .. 0xff1f90 (3 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xff1f30 (size: 39 bytes)
// Symbol:    _ZN3vox15PlaylistElementC2Ev
// Demangled: vox::PlaylistElement::PlaylistElement(void)
// ============================================================================
// Alternative name is '_ZN3vox15PlaylistElementC1Ev'
struct vox::PlaylistElement::Self *vox::PlaylistElement::Construct(vox::PlaylistElement::Self *self)
{
  *(uint32_t *)self = -1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::PlaylistElement::Construct  (binary VA: 0xff1f60)
// Original: vox::PlaylistElement::PlaylistElement
// ----------------------------------------------------------------------------
vox::PlaylistElement::Self * vox::PlaylistElement::Construct(vox::PlaylistElement::Self *self, vox::PlaylistElement::Self *a2)
{
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::PlaylistElement::Reset  (binary VA: 0xff1f90)
// Original: vox::PlaylistElement::Reset
// ----------------------------------------------------------------------------
vox::PlaylistElement::Self * vox::PlaylistElement::Reset(vox::PlaylistElement::Self *self)
{
  *(uint32_t *)self = -1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1;
  return self;
}


