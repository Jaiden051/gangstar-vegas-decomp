#include "Core/Utils/DecompTypes.h"
#include "vox_Ambience.h"

// ----------------------------------------------------------------------------
// Function: vox::Ambience::Construct  (binary VA: 0xfd1ad0)
// Original: vox::Ambience::Ambience
// ----------------------------------------------------------------------------
int * vox::Ambience::Construct(int *a1, int a2)
{
  int v2;

  v2 = VoxAllocInternal(
         0x54u,
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
         (int)(uintptr_t)("Ambience"),
         1024);
  vox::AmbienceInternal::Construct(v2, a2);
  *a1 = v2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::GetLastPositionOffset  (binary VA: 0xfd1b40)
// Original: vox::Ambience::GetLastPositionOffset
// ----------------------------------------------------------------------------
float * vox::Ambience::GetLastPositionOffset(float **self, float *a2, float *a3, float *a4)
{
  float *result;

  result = *self;
  if ( *self != nullptr )
    return vox::AmbienceInternal::GetLastPositionOffset((vox::AmbienceInternal::Self *)result, a2, a3, a4);
  *a2 = 0.0;
  *a3 = 0.0;
  *a4 = 0.0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::IsValid  (binary VA: 0xfd1bb0)
// Original: vox::Ambience::IsValid
// ----------------------------------------------------------------------------
int vox::Ambience::IsValid(vox::AmbienceInternal::Self **self)
{
  int result;

  result = 0;
  if ( *self != nullptr )
    return vox::AmbienceInternal::IsValid(*self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::Pause  (binary VA: 0xfd1be0)
// Original: vox::Ambience::Pause
// ----------------------------------------------------------------------------
vox::AmbienceInternal::Self * vox::Ambience::Pause(long double a1, vox::AmbienceInternal::Self **self)
{
  vox::AmbienceInternal::Self *result;

  result = *self;
  if ( *self != nullptr )
    return (vox::AmbienceInternal::Self *)vox::AmbienceInternal::Pause(a1, *self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::Play  (binary VA: 0xfd1c10)
// Original: vox::Ambience::Play
// ----------------------------------------------------------------------------
vox::AmbienceInternal::Self * vox::Ambience::Play(long double a1, vox::AmbienceInternal::Self **self)
{
  vox::AmbienceInternal::Self *result;

  result = *self;
  if ( *self != nullptr )
    return (vox::AmbienceInternal::Self *)vox::AmbienceInternal::Play(a1, *self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::Play  (binary VA: 0xfd1c40)
// Original: vox::Ambience::Play
// ----------------------------------------------------------------------------
vox::AmbienceInternal::Self * vox::Ambience::Play(long double a1, vox::AmbienceInternal::Self **a2, uint8_t *a3)
{
  vox::AmbienceInternal::Self *result;

  result = *a2;
  if ( *a2 != nullptr )
    return (vox::AmbienceInternal::Self *)vox::AmbienceInternal::Play(a1, *a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::Stop  (binary VA: 0xfd1c70)
// Original: vox::Ambience::Stop
// ----------------------------------------------------------------------------
vox::AmbienceInternal::Self * vox::Ambience::Stop(vox::AmbienceInternal::Self **self)
{
  vox::AmbienceInternal::Self *result;

  result = *self;
  if ( *self != nullptr )
    return (vox::AmbienceInternal::Self *)vox::AmbienceInternal::Stop(*self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::Resume  (binary VA: 0xfd1ca0)
// Original: vox::Ambience::Resume
// ----------------------------------------------------------------------------
vox::AmbienceInternal::Self * vox::Ambience::Resume(long double a1, vox::AmbienceInternal::Self **self)
{
  vox::AmbienceInternal::Self *result;

  result = *self;
  if ( *self != nullptr )
    return (vox::AmbienceInternal::Self *)vox::AmbienceInternal::Resume(a1, *self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::Update  (binary VA: 0xfd1cd0)
// Original: vox::Ambience::Update
// ----------------------------------------------------------------------------
vox::AmbienceInternal::Self * vox::Ambience::Update(long double a1, vox::AmbienceInternal::Self **self)
{
  vox::AmbienceInternal::Self *result;

  result = *self;
  if ( *self != nullptr )
    return (vox::AmbienceInternal::Self *)vox::AmbienceInternal::Update(a1, *self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::Destroy  (binary VA: 0xfd2210)
// Original: vox::Ambience::~Ambience
// ----------------------------------------------------------------------------
void vox::Ambience::Destroy(vox::AmbienceInternal::Self **self)
{
  if ( *self != nullptr )
  {
    vox::AmbienceInternal::Destroy(*self);
    VoxFreeInternal(*self);
  }
  *self = nullptr;
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::UnloadAmbiences  (binary VA: 0xfd2680)
// Original: vox::Ambience::UnloadAmbiences
// ----------------------------------------------------------------------------
int vox::Ambience::UnloadAmbiences()
{
  return vox::AmbienceInternal::UnloadAmbiences();
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::LoadAmbiences  (binary VA: 0xfd30f0)
// Original: vox::Ambience::LoadAmbiences
// ----------------------------------------------------------------------------
int vox::Ambience::LoadAmbiences(vox::Ambience::Self *self)
{
  return vox::AmbienceInternal::LoadAmbiences(self);
}

// ----------------------------------------------------------------------------
// Function: vox::Ambience::AddAmbiences  (binary VA: 0xfd31b0)
// Original: vox::Ambience::AddAmbiences
// ----------------------------------------------------------------------------
int vox::Ambience::AddAmbiences(vox::Ambience::Self *self)
{
  return vox::AmbienceInternal::AddAmbiences(self);
}


