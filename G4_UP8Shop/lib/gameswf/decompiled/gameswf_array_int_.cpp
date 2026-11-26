#include "Core/Utils/DecompTypes.h"
#include "gameswf_array_int_.h"

// ----------------------------------------------------------------------------
// Function: gameswf::array_int_id_284e7f::resize  (binary VA: 0x1108960)
// Original: gameswf::array<int>::resize
// ----------------------------------------------------------------------------
int gameswf::array_int_id_284e7f::resize(gameswf::array<int> *self, int a2)
{
  int v2;
  int v3;
  int result;
  uint32_t *v5;
  int v6;

  v2 = *((uint32_t *)self + 1);
  if ( a2 != 0 )
  {
    v3 = *((uint32_t *)self + 2);
    if ( a2 > v3 && *((uint32_t *)self + 3) == 0 )
    {
      v6 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v6;
      if ( v6 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 4 * v6, 4 * v3));
        else
          *(uint32_t *)self = gameswf::malloc_internal(4 * v6);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  result = 4 * v2;
  if ( v2 < a2 )
  {
    do
    {
      v5 = (uint32_t *)(*(uint32_t *)self + result);
      if ( v5 != nullptr )
        *v5 = 0;
      ++v2;
      result += 4;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
  return result;
}


