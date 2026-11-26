#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASBlurFilter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASBlurFilter::newOp  (binary VA: 0x114d9f0)
// Original: gameswf::ASBlurFilter::newOp
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::ASBlurFilter::newOp(gameswf::ASBlurFilter::Self *self)
{
  gameswf::ASObject::Self *v1;

  v1 = (gameswf::ASObject::Self *)opNew(0x94u);
  gameswf::ASObject::ASObject(v1, self);
  *((uint32_t *)v1 + 34) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2090C88);
  *((uint32_t *)v1 + 35) = 0;
  *((uint32_t *)v1 + 36) = 0;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBlurFilter::getStandardMember  (binary VA: 0x114e710)
// Original: gameswf::ASBlurFilter::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASBlurFilter::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  if ( a2 == 51 )
  {
    gameswf::ASValue::setDouble(a3, *(float *)(a1 + 124));
    return 1;
  }
  else if ( a2 == 52 )
  {
    gameswf::ASValue::setDouble(a3, *(float *)(a1 + 128));
    return 1;
  }
  else
  {
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBlurFilter::setStandardMember  (binary VA: 0x114fc60)
// Original: gameswf::ASBlurFilter::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASBlurFilter::setStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  float v4; // xmm0_4
  float v5; // xmm0_4

  if ( a2 == 51 )
  {
    v4 = gameswf::ASValue::toNumber(a3);
    *(float *)(a1 + 124) = v4;
    return 1;
  }
  else if ( a2 == 52 )
  {
    v5 = gameswf::ASValue::toNumber(a3);
    *(float *)(a1 + 128) = v5;
    return 1;
  }
  else
  {
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBlurFilter::init  (binary VA: 0x114fd00)
// Original: gameswf::ASBlurFilter::init
// ----------------------------------------------------------------------------
int gameswf::ASBlurFilter::init(int a1)
{
  int v1;
  int v2;
  int v3;
  float v4; // xmm0_4
  float v5; // xmm0_4
  int result;
  long double v7; // fst7
  long double v8; // fst7

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 66) == 0 )
    v1 = 0;
  *(uint32_t *)(v1 + 40) = 1;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v2 = 2;
    v8 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v3 = 1;
    v4 = v8;
  }
  else
  {
    v2 = 1;
    v3 = 0;
    v4 = 4.0;
  }
  *(float *)(v1 + 124) = v4;
  v5 = 4.0;
  if ( *(uint32_t *)(a1 + 16) > v3 )
  {
    v7 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v3)));
    v3 = v2;
    v5 = v7;
  }
  *(float *)(v1 + 128) = v5;
  result = 1;
  if ( *(uint32_t *)(a1 + 16) > v3 )
    result = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v3)));
  *(uint32_t *)(v1 + 132) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBlurFilter::Destroy  (binary VA: 0x1162560)
// Original: gameswf::ASBlurFilter::~ASBlurFilter
// ----------------------------------------------------------------------------
void gameswf::ASBlurFilter::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090C08);
  if ( *(self + 36) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 36));
  if ( *(self + 35) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 35));
  if ( *(self + 34) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 34));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBlurFilter::Destroy_ea1162740  (binary VA: 0x1162740)
// Original: gameswf::ASBlurFilter::~ASBlurFilter
// ----------------------------------------------------------------------------
void gameswf::ASBlurFilter::Destroy_ea1162740(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090C08);
  if ( *(self + 36) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 36));
  if ( *(self + 35) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 35));
  if ( *(self + 34) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 34));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}


