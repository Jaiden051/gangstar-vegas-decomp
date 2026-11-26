#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASDisplacementMapFilter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplacementMapFilter::newOp  (binary VA: 0x114d8f0)
// Original: gameswf::ASDisplacementMapFilter::newOp
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::ASDisplacementMapFilter::newOp(gameswf::ASDisplacementMapFilter::Self *self)
{
  gameswf::ASObject::Self *v1;

  v1 = (gameswf::ASObject::Self *)opNew(0x94u);
  gameswf::ASObject::ASObject(v1, self);
  *((uint32_t *)v1 + 34) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2090D88);
  *((uint32_t *)v1 + 35) = 0;
  *((uint32_t *)v1 + 36) = 0;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplacementMapFilter::setStandardMember  (binary VA: 0x11588e0)
// Original: gameswf::ASDisplacementMapFilter::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASDisplacementMapFilter::setStandardMember(int a1, int a2, gameswf::RefCounted::Self **a3)
{
  gameswf::RefCounted::Self *v3;
  gameswf::RefCounted::Self *v4;
  int v5;
  float v7; // xmm0_4
  gameswf::ASBitmapDataChannel::Self *v8;
  float v9; // xmm0_4
  gameswf::ASBitmapDataChannel::Self *v10;
  float v11; // xmm0_4
  gameswf::RefCounted::Self *v12;
  int v13;
  gameswf::RefCounted::Self *v14;
  float v15; // xmm0_4

  if ( a2 == 80 )
  {
    v10 = (gameswf::ASBitmapDataChannel::Self *)gameswf::ASValue::toInt((gameswf::ASValue::Self *)a3);
    *(uint16_t *)(a1 + 46) = gameswf::ASBitmapDataChannel::channelToIndex(v10);
    return 1;
  }
  if ( a2 <= 80 )
  {
    switch ( a2 )
    {
      case 2:
        v9 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a3);
        *(float *)(a1 + 60) = v9;
        return 1;
      case 3:
        v15 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a3);
        *(float *)(a1 + 64) = v15;
        return 1;
      case 79:
        v8 = (gameswf::ASBitmapDataChannel::Self *)gameswf::ASValue::toInt((gameswf::ASValue::Self *)a3);
        *(uint16_t *)(a1 + 44) = gameswf::ASBitmapDataChannel::channelToIndex(v8);
        return 1;
      default:
        return 0;
    }
  }
  if ( a2 != 82 )
  {
    if ( a2 < 82 )
    {
      v3 = nullptr;
      if ( *(uint8_t *)a3 == 5 )
      {
        v3 = a3[1];
        if ( v3 != nullptr
          && (*(uint8_t (**)(gameswf::RefCounted::Self *, int))(*(uint32_t *)v3 + 8))(a3[1], 65) == 0 )
        {
          v3 = nullptr;
        }
      }
      v4 = *(gameswf::RefCounted::Self **)(a1 + 140);
      if ( v3 != v4 )
      {
        if ( v4 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(a1 + 140));
        v5 = 0;
        *(uint32_t *)(a1 + 140) = (uint32_t)(uintptr_t)(v3);
        if ( v3 == nullptr )
          goto LABEL_13;
        gameswf::RefCounted::addRef(v3);
        v4 = *(gameswf::RefCounted::Self **)(a1 + 140);
      }
      if ( v4 != nullptr )
        v5 = *((uint32_t *)v4 + 16);
      else
        v5 = 0;
LABEL_13:
      *(uint32_t *)(a1 + 48) = v5;
      return 1;
    }
    if ( a2 == 107 )
    {
      v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a3);
      *(float *)(a1 + 68) = v11;
      return 1;
    }
    if ( a2 == 108 )
    {
      v7 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a3);
      *(float *)(a1 + 72) = v7;
      return 1;
    }
    return 0;
  }
  v12 = nullptr;
  if ( *(uint8_t *)a3 == 5 )
  {
    v12 = a3[1];
    if ( v12 != nullptr
      && (*(uint8_t (**)(gameswf::RefCounted::Self *, int))(*(uint32_t *)v12 + 8))(a3[1], 29) == 0 )
    {
      v12 = nullptr;
    }
  }
  v13 = *((uint32_t *)v12 + 10);
  v14 = nullptr;
  *(uint32_t *)(a1 + 52) = v13;
  if ( *(uint8_t *)a3 == 5 )
  {
    v14 = a3[1];
    if ( v14 != nullptr
      && (*(uint8_t (**)(gameswf::RefCounted::Self *, int))(*(uint32_t *)v14 + 8))(a3[1], 29) == 0 )
    {
      v14 = nullptr;
    }
  }
  *(uint32_t *)(a1 + 56) = *((uint32_t *)v14 + 11);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplacementMapFilter::init  (binary VA: 0x1158b50)
// Original: gameswf::ASDisplacementMapFilter::init
// ----------------------------------------------------------------------------
void gameswf::ASDisplacementMapFilter::init(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  gameswf::RefCounted::Self *v5;
  gameswf::RefCounted::Self *v6;
  int v7;
  int v8;
  int v9;
  gameswf::ASBitmapDataChannel::Self *v10;
  gameswf::ASBitmapDataChannel::Self *v11;
  float v12; // xmm0_4
  float v13; // xmm0_4
  long double v14; // fst7
  char v15;
  int v16;
  int v17;
  int v18;
  gameswf::RefCounted::Self *v19;
  gameswf::RefCounted::Self *v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 66) == 0 )
    v1 = 0;
  *(uint32_t *)(v1 + 40) = 8;
  if ( *(int *)(a1 + 16) <= 0 )
  {
    v24 = 4;
    v23 = 3;
    v22 = 2;
    v3 = 1;
    v4 = 0;
    v5 = nullptr;
  }
  else
  {
    v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v2 == 5 )
    {
      v5 = *(gameswf::RefCounted::Self **)(v2 + 4);
      if ( v5 != nullptr )
      {
        v20 = *(gameswf::RefCounted::Self **)(v2 + 4);
        v15 = G4_VCALL<int>(v5, 8, 65);
        v5 = v20;
        v24 = 5;
        v23 = 4;
        v22 = 3;
        v3 = 2;
        v4 = 1;
        if ( v15 == 0 )
          v5 = nullptr;
      }
      else
      {
        v24 = 5;
        v23 = 4;
        v22 = 3;
        v3 = 2;
        v4 = 1;
      }
    }
    else
    {
      v24 = 5;
      v23 = 4;
      v22 = 3;
      v3 = 2;
      v4 = 1;
      v5 = nullptr;
    }
  }
  v6 = *(gameswf::RefCounted::Self **)(v1 + 140);
  if ( v5 == v6 )
    goto LABEL_13;
  if ( v6 != nullptr )
  {
    v19 = v5;
    v17 = v4;
    gameswf::RefCounted::dropRef(v6);
    v4 = v17;
    v5 = v19;
  }
  v7 = 0;
  *(uint32_t *)(v1 + 140) = (uint32_t)(uintptr_t)(v5);
  if ( v5 != nullptr )
  {
    v18 = v4;
    gameswf::RefCounted::addRef(v5);
    v6 = *(gameswf::RefCounted::Self **)(v1 + 140);
    v4 = v18;
LABEL_13:
    if ( v6 != nullptr )
      v7 = *((uint32_t *)v6 + 16);
    else
      v7 = 0;
  }
  *(uint32_t *)(v1 + 48) = v7;
  if ( *(uint32_t *)(a1 + 16) <= v4 )
  {
    v24 = v23;
    v23 = v22;
    v22 = v3;
    v3 = v4;
LABEL_17:
    v9 = 0;
    *(uint32_t *)(v1 + 52) = 0;
    goto LABEL_18;
  }
  v8 = **(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v4);
  if ( *(uint8_t *)v8 != 5 )
    goto LABEL_17;
  v16 = *(uint32_t *)(v8 + 4);
  if ( v16 == 0 )
    goto LABEL_17;
  v21 = *(uint32_t *)(v8 + 4);
  if ( G4_VCALL<uint8_t>(v16, 8, 29) == 0 )
    goto LABEL_17;
  *(uint32_t *)(v1 + 52) = *(uint32_t *)(v21 + 40);
  v9 = *(uint32_t *)(v21 + 44);
LABEL_18:
  *(uint32_t *)(v1 + 56) = v9;
  v10 = nullptr;
  if ( *(uint32_t *)(a1 + 16) > v3 )
  {
    v10 = (gameswf::ASBitmapDataChannel::Self *)gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                                     + 12 * (*(uint32_t *)(a1 + 20) - v3)));
    v3 = v22;
    v22 = v23;
    v23 = v24;
  }
  *(uint16_t *)(v1 + 44) = gameswf::ASBitmapDataChannel::channelToIndex(v10);
  v11 = nullptr;
  if ( *(uint32_t *)(a1 + 16) > v3 )
  {
    v11 = (gameswf::ASBitmapDataChannel::Self *)gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                                     + 12 * (*(uint32_t *)(a1 + 20) - v3)));
    v3 = v22;
    v22 = v23;
  }
  *(uint16_t *)(v1 + 46) = gameswf::ASBitmapDataChannel::channelToIndex(v11);
  v12 = 0.0;
  if ( *(uint32_t *)(a1 + 16) > v3 )
  {
    v14 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v3)));
    v3 = v22;
    v12 = v14;
  }
  *(float *)(v1 + 60) = v12;
  v13 = 0.0;
  if ( *(uint32_t *)(a1 + 16) > v3 )
    v13 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v3)));
  *(float *)(v1 + 64) = v13;
  *(uint32_t *)(v1 + 68) = 1065353216;
  *(uint32_t *)(v1 + 72) = 1065353216;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplacementMapFilter::getStandardMember  (binary VA: 0x1158ea0)
// Original: gameswf::ASDisplacementMapFilter::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASDisplacementMapFilter::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  gameswf::ASBitmapDataChannel::Self *v4;
  double v5; // xmm0_8
  gameswf::RefCounted::Self *v6;
  int v7;
  gameswf::RefCounted::Self *Point;
  gameswf::RefCounted::Self *v9;
  gameswf::RefCounted::Self *v10;

  if ( a2 == 80 )
  {
    v4 = (gameswf::ASBitmapDataChannel::Self *)*(int16_t *)(a1 + 46);
    goto LABEL_15;
  }
  if ( a2 <= 80 )
  {
    switch ( a2 )
    {
      case 2:
        gameswf::ASValue::setDouble(a3, *(float *)(a1 + 60));
        return 1;
      case 3:
        gameswf::ASValue::setDouble(a3, *(float *)(a1 + 64));
        return 1;
      case 79:
        v4 = (gameswf::ASBitmapDataChannel::Self *)*(int16_t *)(a1 + 44);
LABEL_15:
        v5 = (double)gameswf::ASBitmapDataChannel::indexToChannel(v4);
        gameswf::ASValue::setDouble(a3, v5);
        return 1;
      default:
        return 0;
    }
  }
  if ( a2 != 82 )
  {
    if ( a2 < 82 )
    {
      gameswf::ASValue::setObject(a3, *(gameswf::ASObject::Self **)(a1 + 140));
      return 1;
    }
    if ( a2 == 107 )
    {
      gameswf::ASValue::setDouble(a3, *(float *)(a1 + 68));
      return 1;
    }
    if ( a2 == 108 )
    {
      gameswf::ASValue::setDouble(a3, *(float *)(a1 + 72));
      return 1;
    }
    return 0;
  }
  v6 = *(gameswf::RefCounted::Self **)(a1 + 144);
  if ( v6 == nullptr )
  {
    Point = (gameswf::RefCounted::Self *)gameswf::createPoint(*(gameswf::Self **)(a1 + 16), nullptr, 0.0);
    v9 = *(gameswf::RefCounted::Self **)(a1 + 144);
    if ( Point == v9 )
    {
      v6 = Point;
    }
    else
    {
      if ( v9 != nullptr )
      {
        v10 = Point;
        gameswf::RefCounted::dropRef(v9);
        Point = v10;
      }
      *(uint32_t *)(a1 + 144) = (uint32_t)(uintptr_t)(Point);
      if ( Point != nullptr )
      {
        gameswf::RefCounted::addRef(Point);
        v6 = *(gameswf::RefCounted::Self **)(a1 + 144);
      }
    }
  }
  v7 = *(uint32_t *)(a1 + 56);
  *((uint32_t *)v6 + 10) = *(uint32_t *)(a1 + 52);
  *((uint32_t *)v6 + 11) = v7;
  gameswf::ASValue::setObject(a3, *(gameswf::ASObject::Self **)(a1 + 144));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplacementMapFilter::Destroy  (binary VA: 0x11625e0)
// Original: gameswf::ASDisplacementMapFilter::~ASDisplacementMapFilter
// ----------------------------------------------------------------------------
void gameswf::ASDisplacementMapFilter::Destroy(gameswf::RefCounted::Self **self)
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
// Function: gameswf::ASDisplacementMapFilter::Destroy_ea11626d0  (binary VA: 0x11626d0)
// Original: gameswf::ASDisplacementMapFilter::~ASDisplacementMapFilter
// ----------------------------------------------------------------------------
void gameswf::ASDisplacementMapFilter::Destroy_ea11626d0(gameswf::RefCounted::Self **self)
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


