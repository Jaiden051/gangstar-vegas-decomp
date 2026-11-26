#include "Core/Utils/DecompTypes.h"
#include "vox_DriverSourceParam.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_DriverSourceParam.cpp
// Library: vox | Module: vox_DriverSourceParam
// Binary Address Span: 0x1034d80 .. 0x1037fd0 (3 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1034d80 (size: 41 bytes)
// Symbol:    _ZN3vox17DriverSourceParamC1Ev
// Demangled: vox::DriverSourceParam::DriverSourceParam(void)
// ============================================================================
// Alternative name is '_ZN3vox17DriverSourceParamC2Ev'
struct vox::DriverSourceParam::Self *vox::DriverSourceParam::DriverSourceParam(vox::DriverSourceParam::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D968);
  *((uint32_t *)self + 1) = 3;
  *((uint32_t *)self + 2) = 250;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::DriverSourceParam::Destroy  (binary VA: 0x1037f00)
// Original: vox::DriverSourceParam::~DriverSourceParam
// ----------------------------------------------------------------------------
void vox::DriverSourceParam::Destroy(vox::DriverSourceParam::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D968);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverSourceParam::Destroy_ea1037fd0  (binary VA: 0x1037fd0)
// Original: vox::DriverSourceParam::~DriverSourceParam
// ----------------------------------------------------------------------------
void vox::DriverSourceParam::Destroy_ea1037fd0(vox::DriverSourceParam::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D968);
  opDelete(self);
}


