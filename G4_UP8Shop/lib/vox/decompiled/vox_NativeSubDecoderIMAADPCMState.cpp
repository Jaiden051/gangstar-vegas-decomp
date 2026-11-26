#include "Core/Utils/DecompTypes.h"
#include "vox_NativeSubDecoderIMAADPCMState.h"

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderIMAADPCMState::Destroy  (binary VA: 0xff81a0)
// Original: vox::NativeSubDecoderIMAADPCMState::~NativeSubDecoderIMAADPCMState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderIMAADPCMState::Destroy(vox::NativePlaylistsManager::Self **self)
{
  *self = (vox::NativePlaylistsManager::Self *)((uint32_t)(uintptr_t)&off_208D220);
  vox::NativeSubDecoderState::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderIMAADPCMState::Destroy_eaff81d0  (binary VA: 0xff81d0)
// Original: vox::NativeSubDecoderIMAADPCMState::~NativeSubDecoderIMAADPCMState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderIMAADPCMState::Destroy_eaff81d0(vox::NativePlaylistsManager::Self **self)
{
  vox::NativeSubDecoderIMAADPCMState::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0xff8490 (size: 67 bytes)
// Symbol:    _ZN3vox29NativeSubDecoderIMAADPCMStateC1EPNS_22NativePlaylistsManagerE
// Demangled: vox::NativeSubDecoderIMAADPCMState::NativeSubDecoderIMAADPCMState(vox::NativePlaylistsManager *)
// ============================================================================
// Alternative name is '_ZN3vox29NativeSubDecoderIMAADPCMStateC2EPNS_22NativePlaylistsManagerE'
void (**vox::NativeSubDecoderIMAADPCMState::NativeSubDecoderIMAADPCMState(
        vox::NativeSubDecoderIMAADPCMState::Self *self,
        vox::NativePlaylistsManager::Self *a2))(vox::NativeSubDecoderIMAADPCMState::Self * self)
{
  vox::NativeSubDecoderState::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D220);
  return (void (**)(vox::NativeSubDecoderIMAADPCMState::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208D220));
}

