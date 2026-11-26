#include "Core/Utils/DecompTypes.h"
#include "vox_NativeSubDecoderState.h"

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderState::Destroy  (binary VA: 0xff4d30)
// Original: vox::NativeSubDecoderState::~NativeSubDecoderState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderState::Destroy(vox::NativePlaylistsManager::Self **self)
{
  *self = (vox::NativePlaylistsManager::Self *)((uint32_t)(uintptr_t)&off_208D1A8);
  if ( *(self + 1) != nullptr )
  {
    vox::NativePlaylistsManager::Destroy(*(self + 1));
    VoxFreeInternal(*(self + 1));
    *(self + 1) = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderState::Destroy_eaff4d90  (binary VA: 0xff4d90)
// Original: vox::NativeSubDecoderState::~NativeSubDecoderState
// ----------------------------------------------------------------------------
void vox::NativeSubDecoderState::Destroy_eaff4d90(vox::NativePlaylistsManager::Self **self)
{
  vox::NativeSubDecoderState::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::NativeSubDecoderState::Construct  (binary VA: 0xff50b0)
// Original: vox::NativeSubDecoderState::NativeSubDecoderState
// ----------------------------------------------------------------------------
vox::NativeSubDecoderState::Self * vox::NativeSubDecoderState::Construct(vox::NativeSubDecoderState::Self *self, vox::NativePlaylistsManager::Self *a2)
{
  vox::NativePlaylistsManager::Self *v2;
  vox::NativeSubDecoderState::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D1A8);
  vox::PlaylistElement::Construct((vox::NativeSubDecoderState::Self *)((char *)self + 36));
  vox::PlaylistElement::Construct((vox::NativeSubDecoderState::Self *)((char *)self + 56));
  vox::PlaylistElement::Construct((vox::NativeSubDecoderState::Self *)((char *)self + 76));
  *((uint32_t *)self + 27) = -1;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 1;
  *((uint32_t *)self + 34) = 1;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 2;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = -1;
  *((uint8_t *)self + 172) = 0;
  *((uint8_t *)self + 173) = 0;
  *((uint32_t *)self + 44) = -1;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 1;
  *((uint32_t *)self + 51) = 1;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 2;
  *((uint32_t *)self + 54) = 0;
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 58) = 0;
  *((uint32_t *)self + 59) = -1;
  *((uint8_t *)self + 240) = 0;
  *((uint8_t *)self + 241) = 0;
  *((uint32_t *)self + 61) = -1;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 1;
  *((uint32_t *)self + 68) = 1;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 70) = 2;
  *((uint32_t *)self + 71) = 0;
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint32_t *)self + 76) = -1;
  *((uint8_t *)self + 308) = 0;
  *((uint8_t *)self + 309) = 0;
  v2 = (vox::NativePlaylistsManager::Self *)VoxAllocInternal(
                                        0x10u,
                                        0,
                                        (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder.cpp"),
                                        (int)(uintptr_t)("NativeSubDecoderState"),
                                        19);
  vox::NativePlaylistsManager::Construct(v2, a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v2);
  return result;
}


