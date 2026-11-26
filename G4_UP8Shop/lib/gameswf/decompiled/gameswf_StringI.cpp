#include "Core/Utils/DecompTypes.h"
#include "gameswf_StringI.h"

// ----------------------------------------------------------------------------
// Function: gameswf::StringI::opEq  (binary VA: 0x1107aa0)
// Original: gameswf::StringI::operator==
// ----------------------------------------------------------------------------
bool gameswf::StringI::opEq(gameswf::StringI::Self *self, char *a2)
{
  gameswf::String::Self *v2;

  if ( *(uint8_t *)self == 0xFF )
    v2 = *((gameswf::String::Self **)self + 3);
  else
    v2 = (gameswf::String::Self *)((gameswf::StringI::Self *)((char *)self + 1));
  return gameswf::String::stricmp(v2, a2) == 0;
}


