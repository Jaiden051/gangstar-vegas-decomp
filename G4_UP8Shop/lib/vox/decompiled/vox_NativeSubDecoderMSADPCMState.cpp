#include "Core/Utils/DecompTypes.h"
#include "vox_NativeSubDecoderMSADPCMState.h"

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderMSADPCMState::Destroy  (binary VA: 0xffbdb0)
// Original: vox::NativeSubDecoderMSADPCMState::~NativeSubDecoderMSADPCMState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderMSADPCMState::Destroy(vox::NativePlaylistsManager::Self **self)
{
  *self = (vox::NativePlaylistsManager::Self *)((uint32_t)(uintptr_t)&off_208D320);
  vox::NativeSubDecoderState::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderMSADPCMState::Destroy_eaffbde0  (binary VA: 0xffbde0)
// Original: vox::NativeSubDecoderMSADPCMState::~NativeSubDecoderMSADPCMState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderMSADPCMState::Destroy_eaffbde0(vox::NativePlaylistsManager::Self **self)
{
  vox::NativeSubDecoderMSADPCMState::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0xffc090 (size: 67 bytes)
// Symbol:    _ZN3vox28NativeSubDecoderMSADPCMStateC1EPNS_22NativePlaylistsManagerE
// Demangled: vox::NativeSubDecoderMSADPCMState::NativeSubDecoderMSADPCMState(vox::NativePlaylistsManager *)
// ============================================================================
// Alternative name is '_ZN3vox28NativeSubDecoderMSADPCMStateC2EPNS_22NativePlaylistsManagerE'
void (**vox::NativeSubDecoderMSADPCMState::NativeSubDecoderMSADPCMState(
        vox::NativeSubDecoderMSADPCMState::Self *self,
        vox::NativePlaylistsManager::Self *a2))(vox::NativeSubDecoderMSADPCMState::Self * self)
{
  vox::NativeSubDecoderState::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D320);
  return (void (**)(vox::NativeSubDecoderMSADPCMState::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208D320));
}

