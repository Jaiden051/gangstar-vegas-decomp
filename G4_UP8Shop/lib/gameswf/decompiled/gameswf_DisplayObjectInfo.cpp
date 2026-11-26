#include "Core/Utils/DecompTypes.h"
#include "gameswf_DisplayObjectInfo.h"

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayObjectInfo::compare  (binary VA: 0x108dbb0)
// Original: gameswf::DisplayObjectInfo::compare
// ----------------------------------------------------------------------------
int gameswf::DisplayObjectInfo::compare(gameswf::DisplayObjectInfo::Self *self, const void *a2)
{
  uint16_t v2;
  bool v3;
  bool v4;
  int result;

  v2 = *(uint16_t *)(*(uint32_t *)a2 + 140);
  v3 = *(uint16_t *)(*(uint32_t *)self + 140) < v2;
  v4 = *(uint16_t *)(*(uint32_t *)self + 140) != v2;
  result = -1;
  if ( !v3 )
    return v4;
  return result;
}


