#include "Core/Utils/DecompTypes.h"
#include "gameswf_stringi_hash_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::stringi_hash_gameswf_ASColorTransform_86052b::Destroy  (binary VA: 0x11907c0)
// Original: gameswf::stringi_hash<gameswf::ASColorTransformMember>::~stringi_hash
// ----------------------------------------------------------------------------
void gameswf::stringi_hash_gameswf_ASColorTransform_86052b::Destroy(gameswf::stringi_hash<gameswf::ASColorTransformMember> *self)
{
  gameswf::stringi_hash<gameswf::ASColorTransformMember> *v1;
  gameswf::Self *v2;
  int v3;
  int i;
  uint32_t *v5;
  gameswf::stringi_hash<gameswf::ASColorTransformMember> *v6;
  gameswf::stringi_hash<gameswf::ASColorTransformMember> *v7;

  v1 = self;
  v2 = *(gameswf::Self **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v3 = *((uint32_t *)v2 + 1);
    if ( v3 >= 0 )
    {
      for ( i = 0; i <= v3; ++i )
      {
        v5 = (uint32_t *)((char *)v2 + 32 * i + 8);
        if ( *v5 != -2 )
        {
          if ( *((uint8_t *)v2 + 32 * i + 16) == 0xFF && (*((uint8_t *)v2 + 32 * i + 35) & 1) != 0 )
          {
            v6 = v1;
            gameswf::free_internal(*((gameswf::Self **)v2 + 8 * i + 7));
            v1 = v6;
          }
          *v5 = -2;
          v5[1] = 0;
          v2 = *(gameswf::Self **)v1;
        }
      }
    }
    v7 = v1;
    gameswf::free_internal(v2);
    *(uint32_t *)v7 = 0;
  }
}


