#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASColorMatrixFilter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorMatrixFilter::newOp  (binary VA: 0x114d970)
// Original: gameswf::ASColorMatrixFilter::newOp
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::ASColorMatrixFilter::newOp(gameswf::ASColorMatrixFilter::Self *self)
{
  gameswf::ASObject::Self *v1;

  v1 = (gameswf::ASObject::Self *)opNew(0x98u);
  gameswf::ASObject::ASObject(v1, self);
  *((uint32_t *)v1 + 34) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2090D08);
  *((uint32_t *)v1 + 35) = 0;
  *((uint32_t *)v1 + 36) = 0;
  *((uint32_t *)v1 + 37) = 0;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorMatrixFilter::setMatrix  (binary VA: 0x1159ed0)
// Original: gameswf::ASColorMatrixFilter::setMatrix
// ----------------------------------------------------------------------------
void gameswf::ASColorMatrixFilter::setMatrix(gameswf::ASColorMatrixFilter::Self *self, gameswf::ASArray::Self *a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4

  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)*((uint32_t *)a2 + 15));
  *((float *)self + 11) = v2;
  v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 12));
  *((float *)self + 15) = v3;
  v4 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 24));
  *((float *)self + 19) = v4;
  v5 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 36));
  *((float *)self + 23) = v5;
  v6 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 48));
  *((float *)self + 27) = v6 * 0.00390625;
  v7 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 60));
  *((float *)self + 12) = v7;
  v8 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 72));
  *((float *)self + 16) = v8;
  v9 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 84));
  *((float *)self + 20) = v9;
  v10 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 96));
  *((float *)self + 24) = v10;
  v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 108));
  *((float *)self + 28) = v11 * 0.00390625;
  v12 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 120));
  *((float *)self + 13) = v12;
  v13 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 132));
  *((float *)self + 17) = v13;
  v14 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 144));
  *((float *)self + 21) = v14;
  v15 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 156));
  *((float *)self + 25) = v15;
  v16 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 168));
  *((float *)self + 29) = v16 * 0.00390625;
  v17 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 180));
  *((float *)self + 14) = v17;
  v18 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 192));
  *((float *)self + 18) = v18;
  v19 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 204));
  *((float *)self + 22) = v19;
  v20 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 216));
  *((float *)self + 26) = v20;
  v21 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 15) + 228));
  *((float *)self + 30) = v21 * 0.00390625;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorMatrixFilter::setStandardMember  (binary VA: 0x115a170)
// Original: gameswf::ASColorMatrixFilter::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASColorMatrixFilter::setStandardMember(gameswf::ASColorMatrixFilter::Self *a1, int a2, int a3)
{
  gameswf::ASArray::Self *v4;

  if ( a2 != 43 )
    return 0;
  v4 = nullptr;
  if ( *(uint8_t *)a3 == 5 )
  {
    v4 = *(gameswf::ASArray::Self **)(a3 + 4);
    if ( v4 != nullptr && G4_VCALL<uint8_t>(v4, 8, 20) == 0 )
      v4 = nullptr;
  }
  gameswf::ASColorMatrixFilter::setMatrix(a1, v4);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorMatrixFilter::init  (binary VA: 0x115a200)
// Original: gameswf::ASColorMatrixFilter::init
// ----------------------------------------------------------------------------
void gameswf::ASColorMatrixFilter::init(int a1)
{
  gameswf::ASColorMatrixFilter::Self *v1;
  int v2;
  gameswf::ASArray::Self *v3;

  v1 = *(gameswf::ASColorMatrixFilter::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 66) == 0 )
    v1 = nullptr;
  *((uint32_t *)v1 + 10) = 6;
  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v2 == 5 )
    {
      v3 = *(gameswf::ASArray::Self **)(v2 + 4);
      if ( v3 != nullptr && G4_VCALL<uint8_t>(v3, 8, 20) != 0 )
        gameswf::ASColorMatrixFilter::setMatrix(v1, v3);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorMatrixFilter::getMatrix  (binary VA: 0x115a2a0)
// Original: gameswf::ASColorMatrixFilter::getMatrix
// ----------------------------------------------------------------------------
int gameswf::ASColorMatrixFilter::getMatrix(gameswf::ASColorMatrixFilter::Self *self, gameswf::ASArray::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  int v28;
  uint8_t *v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef double _g4_t_v34 __attribute__((aligned(1)));
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef double _g4_t_v37;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v30)) > _g4_s0 ? (8u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v32)) > _g4_s2 ? (24u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (25u + sizeof(_g4_t_v33)) > _g4_s3 ? (25u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v34)) > _g4_s4 ? (28u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v35)) > _g4_s5 ? (36u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (37u + sizeof(_g4_t_v36)) > _g4_s6 ? (37u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v37)) > _g4_s7 ? (40u + sizeof(_g4_t_v37)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 25u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 37u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);

  v2 = *((uint32_t *)a2 + 16);
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v28 = 12 * v2;
      do
      {
        v29 = (uint8_t *)(*((uint32_t *)a2 + 15) + v28);
        if ( v29 != nullptr )
        {
          *v29 = 0;
          v29[1] = 0;
        }
        v28 += 12;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v31 = v4;
      v30 = v3;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v3 + *((uint32_t *)a2 + 15)));
      v4 = v31 + 1;
      v3 = v30 + 12;
    }
    while ( v31 + 1 != v2 );
  }
  v5 = *((uint32_t *)a2 + 18);
  *((uint32_t *)a2 + 16) = 0;
  if ( v5 == 0 )
  {
    v6 = *((gameswf::Self **)a2 + 15);
    v7 = *((uint32_t *)a2 + 17);
    *((uint32_t *)a2 + 17) = 20;
    if ( v6 != nullptr )
      *((uint32_t *)a2 + 15) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v6, 0xF0u, 12 * v7));
    else
      *((uint32_t *)a2 + 15) = gameswf::malloc_internal(0xF0u);
  }
  v34 = *((float *)self + 11);
  v32 = 2;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v8 = *((float *)self + 15);
  v32 = 2;
  v34 = v8;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v9 = *((float *)self + 19);
  v32 = 2;
  v34 = v9;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v10 = *((float *)self + 23);
  v32 = 2;
  v34 = v10;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v11 = 256.0 * *((float *)self + 27);
  v35 = 2;
  v36 = 0;
  v37 = v11;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v35);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v35);
  v12 = *((float *)self + 12);
  v32 = 2;
  v34 = v12;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v13 = *((float *)self + 16);
  v32 = 2;
  v34 = v13;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v14 = *((float *)self + 20);
  v32 = 2;
  v34 = v14;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v15 = *((float *)self + 24);
  v32 = 2;
  v34 = v15;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v16 = 256.0 * *((float *)self + 28);
  v35 = 2;
  v36 = 0;
  v37 = v16;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v35);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v35);
  v17 = *((float *)self + 13);
  v32 = 2;
  v34 = v17;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v18 = *((float *)self + 17);
  v32 = 2;
  v34 = v18;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v19 = *((float *)self + 21);
  v32 = 2;
  v34 = v19;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v20 = *((float *)self + 25);
  v32 = 2;
  v34 = v20;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v21 = 256.0 * *((float *)self + 29);
  v35 = 2;
  v36 = 0;
  v37 = v21;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v35);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v35);
  v22 = *((float *)self + 14);
  v32 = 2;
  v34 = v22;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v23 = *((float *)self + 18);
  v32 = 2;
  v34 = v23;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v24 = *((float *)self + 22);
  v32 = 2;
  v34 = v24;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v25 = *((float *)self + 26);
  v32 = 2;
  v34 = v25;
  v33 = 0;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v32);
  v26 = 256.0 * *((float *)self + 30);
  v35 = 2;
  v36 = 0;
  v37 = v26;
  gameswf::ASArray::push(a2, (const gameswf::ASValue::Self *)&v35);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v35);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorMatrixFilter::getStandardMember  (binary VA: 0x115a760)
// Original: gameswf::ASColorMatrixFilter::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASColorMatrixFilter::getStandardMember(gameswf::ASColorMatrixFilter::Self *a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;
  gameswf::ASArray::Self *v4;
  gameswf::Player::Self *v5;
  gameswf::RefCounted::Self *v6;
  gameswf::RefCounted::Self *v7;
  gameswf::RefCounted::Self *v8;

  result = 0;
  if ( a2 == 43 )
  {
    v4 = *((gameswf::ASArray::Self **)a1 + 37);
    if ( v4 == nullptr )
    {
      v5 = *((gameswf::Player::Self **)a1 + 4);
      v8 = (gameswf::RefCounted::Self *)opNew(0x4Cu);
      gameswf::ASArray::Construct(v8, v5);
      v6 = *((gameswf::RefCounted::Self **)a1 + 37);
      v7 = v8;
      if ( v8 == v6 )
      {
        v4 = (gameswf::ASArray::Self *)(v8);
      }
      else
      {
        if ( v6 != nullptr )
        {
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)a1 + 37));
          v7 = v8;
        }
        *((uint32_t *)a1 + 37) = (uint32_t)(uintptr_t)(v7);
        if ( v7 != nullptr )
        {
          gameswf::RefCounted::addRef(v7);
          v4 = *((gameswf::ASArray::Self **)a1 + 37);
        }
      }
    }
    gameswf::ASColorMatrixFilter::getMatrix(a1, v4);
    gameswf::ASValue::setObject(a3, *((gameswf::ASObject::Self **)a1 + 37));
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorMatrixFilter::Destroy  (binary VA: 0x11624d0)
// Original: gameswf::ASColorMatrixFilter::~ASColorMatrixFilter
// ----------------------------------------------------------------------------
void gameswf::ASColorMatrixFilter::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090D08);
  if ( *(self + 37) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 37));
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
// Function: gameswf::ASColorMatrixFilter::Destroy_ea11627b0  (binary VA: 0x11627b0)
// Original: gameswf::ASColorMatrixFilter::~ASColorMatrixFilter
// ----------------------------------------------------------------------------
void gameswf::ASColorMatrixFilter::Destroy_ea11627b0(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090D08);
  if ( *(self + 37) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 37));
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


