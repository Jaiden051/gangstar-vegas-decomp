#include "Core/Utils/DecompTypes.h"
#include "gameswf_ExecuteTag.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::Destroy  (binary VA: 0x106db70)
// Original: gameswf::ExecuteTag::~ExecuteTag
// ----------------------------------------------------------------------------
void gameswf::ExecuteTag::Destroy(gameswf::ExecuteTag::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::execute  (binary VA: 0x106db90)
// Original: gameswf::ExecuteTag::execute
// ----------------------------------------------------------------------------
void gameswf::ExecuteTag::execute()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::executeState  (binary VA: 0x106dba0)
// Original: gameswf::ExecuteTag::executeState
// ----------------------------------------------------------------------------
void gameswf::ExecuteTag::executeState()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::executeStateReverse  (binary VA: 0x106dbb0)
// Original: gameswf::ExecuteTag::executeStateReverse
// ----------------------------------------------------------------------------
int gameswf::ExecuteTag::executeStateReverse(gameswf::ExecuteTag::Self *self, gameswf::Character::Self *a2)
{
  return G4_VCALL<int>(self, 12, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::isRemoveTag  (binary VA: 0x106dbd0)
// Original: gameswf::ExecuteTag::isRemoveTag
// ----------------------------------------------------------------------------
int gameswf::ExecuteTag::isRemoveTag()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::isActionTag  (binary VA: 0x106dbe0)
// Original: gameswf::ExecuteTag::isActionTag
// ----------------------------------------------------------------------------
int gameswf::ExecuteTag::isActionTag()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::getDepthIdOfReplaceOrAddTag  (binary VA: 0x106dbf0)
// Original: gameswf::ExecuteTag::getDepthIdOfReplaceOrAddTag
// ----------------------------------------------------------------------------
int gameswf::ExecuteTag::getDepthIdOfReplaceOrAddTag()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::getDepth  (binary VA: 0x106dc00)
// Original: gameswf::ExecuteTag::getDepth
// ----------------------------------------------------------------------------
int gameswf::ExecuteTag::getDepth()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::getActionOffset  (binary VA: 0x106dc10)
// Original: gameswf::ExecuteTag::getActionOffset
// ----------------------------------------------------------------------------
int gameswf::ExecuteTag::getActionOffset()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::isPlaceTag  (binary VA: 0x106dc20)
// Original: gameswf::ExecuteTag::isPlaceTag
// ----------------------------------------------------------------------------
int gameswf::ExecuteTag::isPlaceTag()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ExecuteTag::Destroy_ea106dc80  (binary VA: 0x106dc80)
// Original: gameswf::ExecuteTag::~ExecuteTag
// ----------------------------------------------------------------------------
void gameswf::ExecuteTag::Destroy_ea106dc80(gameswf::ExecuteTag::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
  opDelete(self);
}


