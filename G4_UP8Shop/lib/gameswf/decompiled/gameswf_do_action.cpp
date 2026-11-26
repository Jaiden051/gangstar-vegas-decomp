#include "Core/Utils/DecompTypes.h"
#include "gameswf_do_action.h"

// ----------------------------------------------------------------------------
// Function: gameswf::do_action::execute  (binary VA: 0x106dc30)
// Original: gameswf::do_action::execute
// ----------------------------------------------------------------------------
int gameswf::do_action::execute(gameswf::do_action::Self *self, gameswf::Character::Self *a2)
{
  return G4_VCALL<int>(a2, 212, (char *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::do_action::isActionTag  (binary VA: 0x106dc60)
// Original: gameswf::do_action::isActionTag
// ----------------------------------------------------------------------------
int gameswf::do_action::isActionTag()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::do_action::getActionOffset  (binary VA: 0x106dc70)
// Original: gameswf::do_action::getActionOffset
// ----------------------------------------------------------------------------
int gameswf::do_action::getActionOffset(gameswf::do_action::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::do_action::Destroy  (binary VA: 0x106ddb0)
// Original: gameswf::do_action::~do_action
// ----------------------------------------------------------------------------
void gameswf::do_action::Destroy(gameswf::do_action::Self *self)
{
  gameswf::MemBuf::Self *v1;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  gameswf::Self *v7;

  v1 = *((gameswf::MemBuf::Self **)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E0C8);
  if ( v1 != nullptr && (*((uint32_t *)v1 + 4))-- == 1 )
  {
    v3 = *((uint32_t *)v1 + 6);
    if ( v3 < 0 )
    {
      v4 = 4 * v3;
      do
      {
        v5 = (uint32_t *)(*((uint32_t *)v1 + 5) + v4);
        if ( v5 != nullptr )
          *v5 = 0;
        v4 += 4;
        ++v3;
      }
      while ( v3 != 0 );
    }
    v6 = *((uint32_t *)v1 + 8);
    *((uint32_t *)v1 + 6) = 0;
    if ( v6 == 0 )
    {
      v7 = *((gameswf::Self **)v1 + 5);
      *((uint32_t *)v1 + 7) = 0;
      if ( v7 != nullptr )
        gameswf::free_internal(v7);
      *((uint32_t *)v1 + 5) = 0;
    }
    gameswf::MemBuf::Destroy(v1);
    gameswf::free_internal(v1);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
}

// ----------------------------------------------------------------------------
// Function: gameswf::do_action::Destroy_ea106de90  (binary VA: 0x106de90)
// Original: gameswf::do_action::~do_action
// ----------------------------------------------------------------------------
void gameswf::do_action::Destroy_ea106de90(gameswf::do_action::Self *self)
{
  gameswf::MemBuf::Self *v1;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  gameswf::Self *v7;

  v1 = *((gameswf::MemBuf::Self **)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E0C8);
  if ( v1 != nullptr && (*((uint32_t *)v1 + 4))-- == 1 )
  {
    v3 = *((uint32_t *)v1 + 6);
    if ( v3 < 0 )
    {
      v4 = 4 * v3;
      do
      {
        v5 = (uint32_t *)(*((uint32_t *)v1 + 5) + v4);
        if ( v5 != nullptr )
          *v5 = 0;
        v4 += 4;
        ++v3;
      }
      while ( v3 != 0 );
    }
    v6 = *((uint32_t *)v1 + 8);
    *((uint32_t *)v1 + 6) = 0;
    if ( v6 == 0 )
    {
      v7 = *((gameswf::Self **)v1 + 5);
      *((uint32_t *)v1 + 7) = 0;
      if ( v7 != nullptr )
        gameswf::free_internal(v7);
      *((uint32_t *)v1 + 5) = 0;
    }
    gameswf::MemBuf::Destroy(v1);
    gameswf::free_internal(v1);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
  opDelete(self);
}


