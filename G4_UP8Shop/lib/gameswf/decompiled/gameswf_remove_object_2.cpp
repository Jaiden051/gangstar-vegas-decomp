#include "Core/Utils/DecompTypes.h"
#include "gameswf_remove_object_2.h"

// ----------------------------------------------------------------------------
// Function: gameswf::remove_object_2::execute  (binary VA: 0x10a41b0)
// Original: gameswf::remove_object_2::execute
// ----------------------------------------------------------------------------
int gameswf::remove_object_2::execute(gameswf::remove_object_2::Self *self, gameswf::Character::Self *a2)
{
  return G4_VCALL<int>(a2, 204, *((uint32_t *)self + 1), *((uint32_t *)self + 2));
}

// ----------------------------------------------------------------------------
// Function: gameswf::remove_object_2::executeState  (binary VA: 0x10a41e0)
// Original: gameswf::remove_object_2::executeState
// ----------------------------------------------------------------------------
int gameswf::remove_object_2::executeState(gameswf::remove_object_2::Self *self, gameswf::Character::Self *a2)
{
  return G4_VCALL<int>(self, 8, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::remove_object_2::isRemoveTag  (binary VA: 0x10a4200)
// Original: gameswf::remove_object_2::isRemoveTag
// ----------------------------------------------------------------------------
int gameswf::remove_object_2::isRemoveTag()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::remove_object_2::Destroy  (binary VA: 0x10a4210)
// Original: gameswf::remove_object_2::~remove_object_2
// ----------------------------------------------------------------------------
void gameswf::remove_object_2::Destroy(gameswf::remove_object_2::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
}

// ----------------------------------------------------------------------------
// Function: gameswf::remove_object_2::Destroy_ea10a4280  (binary VA: 0x10a4280)
// Original: gameswf::remove_object_2::~remove_object_2
// ----------------------------------------------------------------------------
void gameswf::remove_object_2::Destroy_ea10a4280(gameswf::remove_object_2::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::remove_object_2::executeStateReverse  (binary VA: 0x10a4300)
// Original: gameswf::remove_object_2::executeStateReverse
// ----------------------------------------------------------------------------
int gameswf::remove_object_2::executeStateReverse(gameswf::remove_object_2::Self *self, gameswf::Character::Self *a2, char *a3)
{
  int v3;

  v3 = G4_VCALL<int>(a2, 168, a3, *((uint32_t *)self + 1), *((uint32_t *)self + 2));
  if ( v3 != 0 )
    return G4_VCALL<int>(v3, 12, a2);
  else
    return gameswf::logError(
             (gameswf::Self *)"reverse REMOVE can't find previous replace or add tag(%d, %d)\n",
             a3,
             *((uint32_t *)self + 1));
}


