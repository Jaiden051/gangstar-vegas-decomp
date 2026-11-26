#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASBoolean.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASBoolean::init  (binary VA: 0x1125440)
// Original: gameswf::ASBoolean::init
// ----------------------------------------------------------------------------
int gameswf::ASBoolean::init(int a1)
{
  uint8_t v2;

  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  v2 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBoolean::ctor  (binary VA: 0x11254c0)
// Original: gameswf::ASBoolean::ctor
// ----------------------------------------------------------------------------
int gameswf::ASBoolean::ctor(int a1)
{
  return gameswf::ASBoolean::init(a1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBoolean::toString  (binary VA: 0x11254f0)
// Original: gameswf::ASBoolean::toString
// ----------------------------------------------------------------------------
int gameswf::ASBoolean::toString(gameswf::ASValue::Self **a1)
{
  char v1;
  char *s;

  v1 = gameswf::ASValue::toBool(a1[2]);
  s = "true";
  if ( v1 == 0 )
    s = "false";
  return gameswf::ASValue::setString(*a1, s);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBoolean::valueOf  (binary VA: 0x1125550)
// Original: gameswf::ASBoolean::valueOf
// ----------------------------------------------------------------------------
void gameswf::ASBoolean::valueOf()
{
  ;
}


