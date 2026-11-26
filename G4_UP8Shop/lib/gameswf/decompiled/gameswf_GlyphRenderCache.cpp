#include "Core/Utils/DecompTypes.h"
#include "gameswf_GlyphRenderCache.h"

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphRenderCache::isValid  (binary VA: 0x10c02d0)
// Original: gameswf::GlyphRenderCache::isValid
// ----------------------------------------------------------------------------
int gameswf::GlyphRenderCache::isValid(gameswf::GlyphRenderCache::Self *self, gameswf::Character::Self *a2)
{
  int v2;
  int64_t v5; // 0:esi.4,4:ecx.4

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 4) + 12) + 12) + 36);
  if ( v2 == 0 )
    return *((uint8_t *)self + 96) ^ 1;
  v5 = *(uint64_t *)(v2 + 8);
  if ( *(uint64_t *)((char *)self + 100) == v5 )
    return *((uint8_t *)self + 96) ^ 1;
  *(uint64_t *)((char *)self + 100) = v5;
  return 0;
}


