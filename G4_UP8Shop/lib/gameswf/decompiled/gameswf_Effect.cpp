#include "Core/Utils/DecompTypes.h"
#include "gameswf_Effect.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Effect::Destroy  (binary VA: 0x10872e0)
// Original: gameswf::Effect::~Effect
// ----------------------------------------------------------------------------
void gameswf::Effect::Destroy(gameswf::Effect::Self *self)
{
  int v1;
  int v2;
  void *v3;
  int v4;
  gameswf::Self *v5;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
  {
    v2 = 96 * v1;
    do
    {
      v3 = (void *)(*((uint32_t *)self + 1) + v2);
      if ( v3 != nullptr )
        memset(v3, 0, 0x60u);
      v2 += 96;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 2) = 0;
  if ( v4 == 0 )
  {
    *((uint32_t *)self + 3) = 0;
    v5 = *((gameswf::Self **)self + 1);
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 1) = 0;
  }
}


