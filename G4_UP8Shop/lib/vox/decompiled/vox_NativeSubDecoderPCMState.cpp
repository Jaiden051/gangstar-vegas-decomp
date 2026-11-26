#include "Core/Utils/DecompTypes.h"
#include "vox_NativeSubDecoderPCMState.h"

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderPCMState::Destroy  (binary VA: 0xffd8c0)
// Original: vox::NativeSubDecoderPCMState::~NativeSubDecoderPCMState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderPCMState::Destroy(vox::NativePlaylistsManager::Self **self)
{
  *self = (vox::NativePlaylistsManager::Self *)((uint32_t)(uintptr_t)&off_208D3A8);
  vox::NativeSubDecoderState::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderPCMState::Destroy_eaffd8f0  (binary VA: 0xffd8f0)
// Original: vox::NativeSubDecoderPCMState::~NativeSubDecoderPCMState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderPCMState::Destroy_eaffd8f0(vox::NativePlaylistsManager::Self **self)
{
  vox::NativeSubDecoderPCMState::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0xffe500 (size: 67 bytes)
// Symbol:    _ZN3vox24NativeSubDecoderPCMStateC1EPNS_22NativePlaylistsManagerE
// Demangled: vox::NativeSubDecoderPCMState::NativeSubDecoderPCMState(vox::NativePlaylistsManager *)
// ============================================================================
// Alternative name is '_ZN3vox24NativeSubDecoderPCMStateC2EPNS_22NativePlaylistsManagerE'
void (**vox::NativeSubDecoderPCMState::NativeSubDecoderPCMState(
        vox::NativeSubDecoderPCMState::Self *self,
        vox::NativePlaylistsManager::Self *a2))(vox::NativeSubDecoderPCMState::Self * self)
{
  vox::NativeSubDecoderState::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D3A8);
  return (void (**)(vox::NativeSubDecoderPCMState::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208D3A8));
}

