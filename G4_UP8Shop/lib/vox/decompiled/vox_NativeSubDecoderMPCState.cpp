#include "Core/Utils/DecompTypes.h"
#include "vox_NativeSubDecoderMPCState.h"

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderMPCState::Destroy  (binary VA: 0xffa1e0)
// Original: vox::NativeSubDecoderMPCState::~NativeSubDecoderMPCState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderMPCState::Destroy(vox::NativePlaylistsManager::Self **self)
{
  *self = (vox::NativePlaylistsManager::Self *)((uint32_t)(uintptr_t)&off_208D2A8);
  vox::NativeSubDecoderState::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderMPCState::Destroy_eaffa210  (binary VA: 0xffa210)
// Original: vox::NativeSubDecoderMPCState::~NativeSubDecoderMPCState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderMPCState::Destroy_eaffa210(vox::NativePlaylistsManager::Self **self)
{
  vox::NativeSubDecoderMPCState::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0xffa710 (size: 67 bytes)
// Symbol:    _ZN3vox24NativeSubDecoderMPCStateC1EPNS_22NativePlaylistsManagerE
// Demangled: vox::NativeSubDecoderMPCState::NativeSubDecoderMPCState(vox::NativePlaylistsManager *)
// ============================================================================
// Alternative name is '_ZN3vox24NativeSubDecoderMPCStateC2EPNS_22NativePlaylistsManagerE'
void (**vox::NativeSubDecoderMPCState::NativeSubDecoderMPCState(
        vox::NativeSubDecoderMPCState::Self *self,
        vox::NativePlaylistsManager::Self *a2))(vox::NativeSubDecoderMPCState::Self * self)
{
  vox::NativeSubDecoderState::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D2A8);
  return (void (**)(vox::NativeSubDecoderMPCState::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208D2A8));
}

