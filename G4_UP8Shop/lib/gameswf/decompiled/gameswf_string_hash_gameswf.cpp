#include "Core/Utils/DecompTypes.h"
#include "gameswf_string_hash_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::string_hash_gameswf_as_standard_memb_7ad87c::Destroy  (binary VA: 0x10bce70)
// Original: gameswf::string_hash<gameswf::as_standard_member>::~string_hash
// ----------------------------------------------------------------------------
void gameswf::string_hash_gameswf_as_standard_memb_7ad87c::Destroy(gameswf::Self **self)
{
  gameswf::Self *v1;
  int v2;
  int i;
  uint32_t *v4;

  v1 = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)v1 + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (uint32_t *)((char *)v1 + 32 * i + 8);
        if ( *v4 != -2 )
        {
          sub_59CE50((int)(uintptr_t)(v1) + 32 * i + 16);
          *v4 = -2;
          v4[1] = 0;
          v1 = *self;
        }
      }
    }
    gameswf::free_internal(v1);
    *self = nullptr;
  }
}


