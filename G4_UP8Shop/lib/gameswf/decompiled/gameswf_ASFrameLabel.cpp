#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASFrameLabel.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASFrameLabel::newOp  (binary VA: 0x114d5e0)
// Original: gameswf::ASFrameLabel::newOp
// ----------------------------------------------------------------------------
int gameswf::ASFrameLabel::newOp()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFrameLabel::init  (binary VA: 0x114d5f0)
// Original: gameswf::ASFrameLabel::init
// ----------------------------------------------------------------------------
void gameswf::ASFrameLabel::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFrameLabel::toString  (binary VA: 0x114e2a0)
// Original: gameswf::ASFrameLabel::toString
// ----------------------------------------------------------------------------
char * gameswf::ASFrameLabel::toString(gameswf::ASFrameLabel::Self *self)
{
  int v1;
  int v2;

  v1 = *((uint32_t *)self + 11);
  if ( *(uint8_t *)v1 == 0xFF )
    v2 = *(uint32_t *)(v1 + 12);
  else
    v2 = v1 + 1;
  sprintf(((char *)(&byte_2115740)), "[FrameLabel %d:%s]", *((uint32_t *)self + 10) + 1, v2);
  return (char *)(uintptr_t)(((char *)(&byte_2115740)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFrameLabel::getStandardMember  (binary VA: 0x114f240)
// Original: gameswf::ASFrameLabel::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASFrameLabel::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;

  if ( a2 == 87 )
  {
    gameswf::ASValue::setDouble(a3, (double)(*(uint32_t *)(a1 + 40) + 1));
    return 1;
  }
  else
  {
    result = 0;
    if ( a2 == 13 )
    {
      gameswf::ASValue::setString((const gameswf::String::Self **)a3, *(const gameswf::String::Self **)(a1 + 44));
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFrameLabel::Construct  (binary VA: 0x1160f30)
// Original: gameswf::ASFrameLabel::ASFrameLabel
// ----------------------------------------------------------------------------
gameswf::ASFrameLabel::Self * gameswf::ASFrameLabel::Construct(gameswf::ASFrameLabel::Self *self, int **a2, int a3, const gameswf::String::Self *a4)
{
  gameswf::ASFrameLabel::Self *result;

  gameswf::ASObject::ASObject(self, (gameswf::Player::Self *)a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090588);
  *((uint32_t *)self + 10) = a3;
  result = (gameswf::ASFrameLabel::Self *)gameswf::PermanentStringCache::get(a2 + 12, a4);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFrameLabel::is  (binary VA: 0x1161fe0)
// Original: gameswf::ASFrameLabel::is
// ----------------------------------------------------------------------------
bool gameswf::ASFrameLabel::is(gameswf::ASFrameLabel::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 50 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFrameLabel::Destroy  (binary VA: 0x11621d0)
// Original: gameswf::ASFrameLabel::~ASFrameLabel
// ----------------------------------------------------------------------------
void gameswf::ASFrameLabel::Destroy(gameswf::ASFrameLabel::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090588);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFrameLabel::Destroy_ea1162290  (binary VA: 0x1162290)
// Original: gameswf::ASFrameLabel::~ASFrameLabel
// ----------------------------------------------------------------------------
void gameswf::ASFrameLabel::Destroy_ea1162290(gameswf::ASFrameLabel::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090588);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


