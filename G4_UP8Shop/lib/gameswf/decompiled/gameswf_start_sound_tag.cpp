#include "Core/Utils/DecompTypes.h"
#include "gameswf_start_sound_tag.h"

// ----------------------------------------------------------------------------
// Function: gameswf::start_sound_tag::execute  (binary VA: 0x10e1cb0)
// Original: gameswf::start_sound_tag::execute
// ----------------------------------------------------------------------------
int gameswf::start_sound_tag::execute(gameswf::start_sound_tag::Self *self)
{
  int result;
  int v2;

  result = dword_20E5580;
  if ( dword_20E5580 != 0 )
  {
    v2 = *(uint32_t *)dword_20E5580;
    if ( *((uint8_t *)self + 12) != 0 )
      return (*(int (**)(int, uint32_t))(v2 + 20))(dword_20E5580, *((uint16_t *)self + 2));
    else
      return (*(int (**)(int, uint32_t, uint32_t))(v2 + 12))(
               dword_20E5580,
               *((uint16_t *)self + 2),
               *((uint32_t *)self + 2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::start_sound_tag::Destroy  (binary VA: 0x10e1d20)
// Original: gameswf::start_sound_tag::~start_sound_tag
// ----------------------------------------------------------------------------
void gameswf::start_sound_tag::Destroy(gameswf::start_sound_tag::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  gameswf::Self *v5;

  v1 = *((uint32_t *)self + 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F3E8);
  if ( v1 < 0 )
  {
    v2 = 8 * v1;
    do
    {
      v3 = *((uint32_t *)self + 4) + v2;
      if ( v3 != 0 )
      {
        *(uint32_t *)v3 = 0;
        *(uint16_t *)(v3 + 4) = 0;
        *(uint16_t *)(v3 + 6) = 0;
      }
      v2 += 8;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 5) = 0;
  if ( v4 == 0 )
  {
    v5 = *((gameswf::Self **)self + 4);
    *((uint32_t *)self + 6) = 0;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 4) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
}

// ----------------------------------------------------------------------------
// Function: gameswf::start_sound_tag::Destroy_ea10e1dc0  (binary VA: 0x10e1dc0)
// Original: gameswf::start_sound_tag::~start_sound_tag
// ----------------------------------------------------------------------------
void gameswf::start_sound_tag::Destroy_ea10e1dc0(gameswf::start_sound_tag::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  gameswf::Self *v5;

  v1 = *((uint32_t *)self + 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F3E8);
  if ( v1 < 0 )
  {
    v2 = 8 * v1;
    do
    {
      v3 = *((uint32_t *)self + 4) + v2;
      if ( v3 != 0 )
      {
        *(uint32_t *)v3 = 0;
        *(uint16_t *)(v3 + 4) = 0;
        *(uint16_t *)(v3 + 6) = 0;
      }
      v2 += 8;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 5) = 0;
  if ( v4 == 0 )
  {
    v5 = *((gameswf::Self **)self + 4);
    *((uint32_t *)self + 6) = 0;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 4) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
  opDelete(self);
}


