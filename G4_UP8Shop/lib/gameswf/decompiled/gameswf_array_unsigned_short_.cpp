#include "Core/Utils/DecompTypes.h"
#include "gameswf_array_unsigned_short_.h"

// ----------------------------------------------------------------------------
// Function: gameswf::array_unsigned_short_f9a054::Destroy  (binary VA: 0x1108fc0)
// Original: gameswf::array<unsigned short>::~array
// ----------------------------------------------------------------------------
void gameswf::array_unsigned_short_f9a054::Destroy(gameswf::Self **self)
{
  gameswf::Self *v1;
  bool v2;

  sub_777050((int)(uintptr_t)(self), 0);
  if ( *(self + 3) == nullptr )
  {
    v1 = *self;
    v2 = *self == nullptr;
    *(self + 2) = nullptr;
    if ( !v2 )
      gameswf::free_internal(v1);
    *self = nullptr;
  }
}


