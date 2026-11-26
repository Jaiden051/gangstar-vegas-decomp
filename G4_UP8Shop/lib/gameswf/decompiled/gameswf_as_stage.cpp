#include "Core/Utils/DecompTypes.h"
#include "gameswf_as_stage.h"

// ----------------------------------------------------------------------------
// Function: gameswf::as_stage::is  (binary VA: 0x10bccf0)
// Original: gameswf::as_stage::is
// ----------------------------------------------------------------------------
bool gameswf::as_stage::is(gameswf::as_stage::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 25 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::as_stage::Destroy  (binary VA: 0x10bcd10)
// Original: gameswf::as_stage::~as_stage
// ----------------------------------------------------------------------------
void gameswf::as_stage::Destroy(gameswf::as_stage::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208ECC8);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::as_stage::Destroy_ea10bcd40  (binary VA: 0x10bcd40)
// Original: gameswf::as_stage::~as_stage
// ----------------------------------------------------------------------------
void gameswf::as_stage::Destroy_ea10bcd40(gameswf::as_stage::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208ECC8);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::as_stage::getStandardMember  (binary VA: 0x10bcf00)
// Original: gameswf::as_stage::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::as_stage::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;
  int v4;
  gameswf::Root::Self *v5;
  gameswf::Self *v6;
  int MovieWidth;
  int v8;

  if ( a2 == 8 )
  {
    v8 = *(uint32_t *)(a1 + 16);
    if ( *(uint32_t *)(v8 + 136) != 0 && *(uint8_t *)(*(uint32_t *)(v8 + 132) + 2) == 0 )
    {
      sub_7E5ED0((gameswf::Self **)(v8 + 132), nullptr);
      *(uint32_t *)(v8 + 136) = 0;
    }
    MovieWidth = gameswf::Root::getMovieWidth(*(gameswf::Root::Self **)(v8 + 136));
  }
  else
  {
    result = 0;
    if ( a2 != 9 )
      return result;
    v4 = *(uint32_t *)(a1 + 16);
    v5 = *(gameswf::Root::Self **)(v4 + 136);
    if ( v5 != nullptr )
    {
      v6 = *(gameswf::Self **)(v4 + 132);
      if ( *((uint8_t *)v6 + 2) == 0 )
      {
        if ( (*(uint16_t *)v6)-- == 1 )
          gameswf::free_internal(v6);
        *(uint32_t *)(v4 + 132) = 0;
        *(uint32_t *)(v4 + 136) = 0;
        v5 = nullptr;
      }
    }
    MovieWidth = gameswf::Root::getMovieHeight(v5);
  }
  gameswf::ASValue::setDouble(a3, (double)MovieWidth);
  return 1;
}


