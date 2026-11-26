#include "Core/Utils/DecompTypes.h"
#include "gameswf_except_info.h"

// ----------------------------------------------------------------------------
// Function: gameswf::except_info::read  (binary VA: 0x1176de0)
// Original: gameswf::except_info::read
// ----------------------------------------------------------------------------
int gameswf::except_info::read(gameswf::except_info::Self *self, gameswf::Stream::Self *a2)
{
  int result;

  *(uint32_t *)self = gameswf::Stream::readVU32(a2);
  *((uint32_t *)self + 1) = gameswf::Stream::readVU32(a2);
  *((uint32_t *)self + 2) = gameswf::Stream::readVU32(a2);
  *((uint32_t *)self + 3) = gameswf::Stream::readVU32(a2);
  result = gameswf::Stream::readVU32(a2);
  *((uint32_t *)self + 4) = result;
  return result;
}


