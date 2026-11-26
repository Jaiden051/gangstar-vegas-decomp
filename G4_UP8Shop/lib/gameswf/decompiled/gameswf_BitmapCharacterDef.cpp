#include "Core/Utils/DecompTypes.h"
#include "gameswf_BitmapCharacterDef.h"

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapCharacterDef::Destroy  (binary VA: 0x10946b0)
// Original: gameswf::BitmapCharacterDef::~BitmapCharacterDef
// ----------------------------------------------------------------------------
void gameswf::BitmapCharacterDef::Destroy(gameswf::BitmapCharacterDef::Self *self)
{
  gameswf::Self *v1;
  bool v2;
  gameswf::Self *v3;

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
// Function: gameswf::BitmapCharacterDef::Destroy_ea1094740  (binary VA: 0x1094740)
// Original: gameswf::BitmapCharacterDef::~BitmapCharacterDef
// ----------------------------------------------------------------------------
void gameswf::BitmapCharacterDef::Destroy_ea1094740(gameswf::BitmapCharacterDef::Self *self)
{
  gameswf::Self *v1;
  bool v2;
  gameswf::Self *v3;

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
  opDelete(self);
}


