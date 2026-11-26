#include "Core/Utils/DecompTypes.h"
#include "gameswf_inst_info_avm2.h"

// ----------------------------------------------------------------------------
// Function: gameswf::inst_info_avm2::Construct  (binary VA: 0x108ce50)
// Original: gameswf::inst_info_avm2::inst_info_avm2
// ----------------------------------------------------------------------------
void gameswf::inst_info_avm2::Construct(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;

  *a1 = a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 1;
  v3 = gameswf::malloc_internal(4u);
  v4 = a1[2];
  a1[1] = v3;
  v5 = (uint32_t *)(v3 + 4 * v4);
  if ( v5 != nullptr )
    *v5 = a3;
  a1[2] = 1;
  __builtin_trap();
}

// ----------------------------------------------------------------------------
// Function: gameswf::inst_info_avm2::Destroy  (binary VA: 0x108cec0)
// Original: gameswf::inst_info_avm2::~inst_info_avm2
// ----------------------------------------------------------------------------
void gameswf::inst_info_avm2::Destroy(gameswf::inst_info_avm2::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  gameswf::Self *v5;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
  {
    v2 = 4 * v1;
    do
    {
      v3 = (uint32_t *)(*((uint32_t *)self + 1) + v2);
      if ( v3 != nullptr )
        *v3 = 0;
      v2 += 4;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 2) = 0;
  if ( v4 == 0 )
  {
    v5 = *((gameswf::Self **)self + 1);
    *((uint32_t *)self + 3) = 0;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 1) = 0;
  }
}


