#include "Core/Utils/DecompTypes.h"
#include "gameswf_SoundSample.h"

// ----------------------------------------------------------------------------
// Function: gameswf::SoundSample::Destroy  (binary VA: 0x10e04f0)
// Original: gameswf::SoundSample::~SoundSample
// ----------------------------------------------------------------------------
void gameswf::SoundSample::Destroy(gameswf::SoundSample::Self *self)
{
  gameswf::Self *v1;
  bool v2;
  gameswf::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F3A8);
  if ( dword_20E5580 != 0 )
    G4_VCALL<void>(dword_20E5580, 28, *((uint32_t *)self + 7));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v1 = *((gameswf::Self **)self + 5);
  if ( v1 != nullptr )
  {
    v2 = (*(uint16_t *)v1)-- == 1;
    if ( v2 )
      gameswf::free_internal(v1);
  }
  v3 = *((gameswf::Self **)self + 3);
  if ( v3 != nullptr )
  {
    v2 = (*(uint16_t *)v3)-- == 1;
    if ( v2 )
      gameswf::free_internal(v3);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SoundSample::Destroy_ea10e05a0  (binary VA: 0x10e05a0)
// Original: gameswf::SoundSample::~SoundSample
// ----------------------------------------------------------------------------
void gameswf::SoundSample::Destroy_ea10e05a0(gameswf::SoundSample::Self *self)
{
  gameswf::SoundSample::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SoundSample::is  (binary VA: 0x10e1c90)
// Original: gameswf::SoundSample::is
// ----------------------------------------------------------------------------
bool gameswf::SoundSample::is(gameswf::SoundSample::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 17 )
    return a2 == 14;
  return result;
}


