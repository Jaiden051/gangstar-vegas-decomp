#include "Core/Utils/DecompTypes.h"
#include "gameswf_PermanentString.h"

// ----------------------------------------------------------------------------
// Function: gameswf::PermanentString::Destroy  (binary VA: 0x1081dd0)
// Original: gameswf::PermanentString::~PermanentString
// ----------------------------------------------------------------------------
void gameswf::PermanentString::Destroy(gameswf::Self **self)
{
  if ( *(uint8_t *)self == 0xFF && (*((uint8_t *)self + 19) & 1) != 0 )
    gameswf::free_internal(*(self + 3));
}


