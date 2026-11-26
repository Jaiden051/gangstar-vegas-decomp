#include "Core/Utils/DecompTypes.h"
#include "vox_emitter.h"

// ----------------------------------------------------------------------------
// Function: vox::emitter::CreationSettings::Construct  (binary VA: 0xfdabe0)
// Original: vox::emitter::CreationSettings::CreationSettings
// ----------------------------------------------------------------------------
vox::emitter::CreationSettings::Self * vox::emitter::CreationSettings::Construct(vox::emitter::CreationSettings::Self *self)
{
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 1) = 1065353216;
  *((uint32_t *)self + 2) = 1065353216;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint8_t *)self + 12) = 0;
  *((uint8_t *)self + 28) = 0;
  *((uint8_t *)self + 29) = 0;
  *((uint8_t *)self + 30) = 0;
  *((uint32_t *)self + 9) = -1;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint8_t *)self + 48) = 1;
  vox::Vox3DEmitterParameters::Construct((vox::emitter::CreationSettings::Self *)((char *)self + 52));
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint8_t *)self + 120) = 1;
  *((uint32_t *)self + 32) = 1028443341;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = -1;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  return (vox::emitter::CreationSettings::Self *)(uintptr_t)(vox::DriverSourceParam::DriverSourceParam((vox::emitter::CreationSettings::Self *)((char *)self + 160)));
}

// ----------------------------------------------------------------------------
// Function: vox::emitter::CreationSettings::Construct  (binary VA: 0xfdace0)
// Original: vox::emitter::CreationSettings::CreationSettings
// ----------------------------------------------------------------------------
vox::emitter::CreationSettings::Self * vox::emitter::CreationSettings::Construct(vox::emitter::CreationSettings::Self *self, float a2, float a3, unsigned int a4, int a5, unsigned int a6)
{
  *(float *)self = a2;
  *((uint32_t *)self + 1) = 1065353216;
  *((uint32_t *)self + 2) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((float *)self + 4) = a3;
  *((uint32_t *)self + 9) = a4;
  *((uint32_t *)self + 10) = a6;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 11) = a5;
  *((uint8_t *)self + 12) = 0;
  *((uint8_t *)self + 28) = 0;
  *((uint8_t *)self + 29) = 0;
  *((uint8_t *)self + 30) = 0;
  *((uint8_t *)self + 48) = 1;
  vox::Vox3DEmitterParameters::Construct((vox::emitter::CreationSettings::Self *)((char *)self + 52));
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint8_t *)self + 120) = 1;
  *((uint32_t *)self + 32) = 1028443341;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = -1;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  return (vox::emitter::CreationSettings::Self *)(uintptr_t)(vox::DriverSourceParam::DriverSourceParam((vox::emitter::CreationSettings::Self *)((char *)self + 160)));
}

// ----------------------------------------------------------------------------
// Function: vox::emitter::CreationSettings::SetRandomGain  (binary VA: 0xfdade0)
// Original: vox::emitter::CreationSettings::SetRandomGain
// ----------------------------------------------------------------------------
vox::emitter::CreationSettings::Self * vox::emitter::CreationSettings::SetRandomGain(vox::emitter::CreationSettings::Self *self, float a2, float a3, bool a4)
{
  *((float *)self + 1) = a2;
  *((float *)self + 2) = a3;
  *((uint8_t *)self + 12) = a4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::emitter::CreationSettings::SetRandomPitch  (binary VA: 0xfdae00)
// Original: vox::emitter::CreationSettings::SetRandomPitch
// ----------------------------------------------------------------------------
vox::emitter::CreationSettings::Self * vox::emitter::CreationSettings::SetRandomPitch(vox::emitter::CreationSettings::Self *self, float a2, float a3, bool a4)
{
  *((float *)self + 5) = a2;
  *((float *)self + 6) = a3;
  *((uint8_t *)self + 28) = a4;
  return self;
}


