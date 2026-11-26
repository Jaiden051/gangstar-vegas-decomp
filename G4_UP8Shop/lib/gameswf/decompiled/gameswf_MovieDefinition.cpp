#include "Core/Utils/DecompTypes.h"
#include "gameswf_MovieDefinition.h"

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefinition::Destroy  (binary VA: 0x10a4600)
// Original: gameswf::MovieDefinition::~MovieDefinition
// ----------------------------------------------------------------------------
void gameswf::MovieDefinition::Destroy(gameswf::MovieDefinition::Self *self)
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
// Function: gameswf::MovieDefinition::Destroy_ea10a4690  (binary VA: 0x10a4690)
// Original: gameswf::MovieDefinition::~MovieDefinition
// ----------------------------------------------------------------------------
void gameswf::MovieDefinition::Destroy_ea10a4690(gameswf::MovieDefinition::Self *self)
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


