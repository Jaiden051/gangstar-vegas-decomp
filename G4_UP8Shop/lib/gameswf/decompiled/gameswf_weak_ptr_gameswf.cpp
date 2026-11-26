#include "Core/Utils/DecompTypes.h"
#include "gameswf_weak_ptr_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy  (binary VA: 0x1082310)
// Original: gameswf::weak_ptr<gameswf::Character>::check_proxy
// ----------------------------------------------------------------------------
void gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(gameswf::Self **self)
{
  gameswf::Self *v1;

  if ( *(self + 1) != nullptr )
  {
    v1 = *self;
    if ( *((uint8_t *)*self + 2) == 0 )
    {
      if ( (*(uint16_t *)v1)-- == 1 )
        gameswf::free_internal(v1);
      *self = nullptr;
      *(self + 1) = nullptr;
    }
  }
}


