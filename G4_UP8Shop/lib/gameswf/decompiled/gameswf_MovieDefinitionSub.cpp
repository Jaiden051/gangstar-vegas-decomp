#include "Core/Utils/DecompTypes.h"
#include "gameswf_MovieDefinitionSub.h"

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefinitionSub::Destroy  (binary VA: 0x109da00)
// Original: gameswf::MovieDefinitionSub::~MovieDefinitionSub
// ----------------------------------------------------------------------------
void gameswf::MovieDefinitionSub::Destroy(gameswf::MovieDefinitionSub::Self *self)
{
  int SoundHandler;
  gameswf::Self *v2;
  int v3;
  int v4;
  int i;
  uint32_t *v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  int j;
  uint32_t *v11;
  gameswf::Self *v12;
  bool v13;
  gameswf::Self *v14;
  glf::Mutex::Self *v15;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E7A8);
  *((uint8_t *)self + 68) = 1;
  SoundHandler = gameswf::getSoundHandler(v15);
  if ( SoundHandler != 0 )
    G4_VCALL<void>(SoundHandler, 28, *((uint32_t *)self + 7));
  glf::Condition::Destroy((gameswf::MovieDefinitionSub::Self *)((char *)self + 64));
  glf::Mutex::Destroy((pthread_mutex_t **)self + 15);
  v2 = *((gameswf::Self **)self + 12);
  if ( v2 != nullptr )
  {
    v3 = *((uint32_t *)v2 + 1);
    if ( v3 >= 0 )
    {
      v4 = 8;
      for ( i = 0; i <= v3; ++i )
      {
        v6 = (uint32_t *)((char *)v2 + v4);
        if ( *(uint32_t *)((char *)v2 + v4) != -2 )
        {
          *v6 = -2;
          v6[1] = 0;
          v2 = *((gameswf::Self **)self + 12);
        }
        v4 += 16;
      }
    }
    gameswf::free_internal(v2);
    *((uint32_t *)self + 12) = 0;
  }
  v7 = *((gameswf::Self **)self + 11);
  if ( v7 != nullptr )
  {
    v8 = *((uint32_t *)v7 + 1);
    if ( v8 >= 0 )
    {
      v9 = 8;
      for ( j = 0; j <= v8; ++j )
      {
        v11 = (uint32_t *)((char *)v7 + v9);
        if ( *(uint32_t *)((char *)v7 + v9) != -2 )
        {
          *v11 = -2;
          v11[1] = 0;
          v7 = *((gameswf::Self **)self + 11);
        }
        v9 += 16;
      }
    }
    gameswf::free_internal(v7);
    *((uint32_t *)self + 11) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v12 = *((gameswf::Self **)self + 5);
  if ( v12 != nullptr )
  {
    v13 = (*(uint16_t *)v12)-- == 1;
    if ( v13 )
      gameswf::free_internal(v12);
  }
  v14 = *((gameswf::Self **)self + 3);
  if ( v14 != nullptr )
  {
    v13 = (*(uint16_t *)v14)-- == 1;
    if ( v13 )
      gameswf::free_internal(v14);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefinitionSub::Destroy_ea109db80  (binary VA: 0x109db80)
// Original: gameswf::MovieDefinitionSub::~MovieDefinitionSub
// ----------------------------------------------------------------------------
void gameswf::MovieDefinitionSub::Destroy_ea109db80(gameswf::MovieDefinitionSub::Self *self)
{
  gameswf::MovieDefinitionSub::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefinitionSub::createFrameLabels  (binary VA: 0x10a1ee0)
// Original: gameswf::MovieDefinitionSub::createFrameLabels
// ----------------------------------------------------------------------------
gameswf::ASArray::Self * gameswf::MovieDefinitionSub::createFrameLabels(int a1, int *a2)
{
  gameswf::Player::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::ASValue::Self *v7;
  gameswf::ASValue::Self *v8;
  int v9;
  unsigned int v10;
  const gameswf::ASValue::Self *v11;
  const gameswf::ASValue::Self *v12;
  int v13;
  int v15;
  int v16;
  int v17;
  gameswf::Self *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v24;
  int v25;
  typedef const gameswf::String::Self *_g4_t_v26;
  typedef gameswf::ASFrameLabel::Self *_g4_t_v27;
  typedef gameswf::ASArray::Self *_g4_t_v28;
  typedef gameswf::ASValue::Self *_g4_t_v29;
  typedef gameswf::Player::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef gameswf::ASValue::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint8_t _g4_t_v35[4];
  typedef int _g4_t_v36;
  typedef uint32_t _g4_t_v37[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v27)) > _g4_s1 ? (28u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v28)) > _g4_s2 ? (32u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v29)) > _g4_s3 ? (36u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v30)) > _g4_s4 ? (36u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v31)) > _g4_s5 ? (40u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v32)) > _g4_s6 ? (44u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v33)) > _g4_s7 ? (44u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v34)) > _g4_s8 ? (44u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v35)) > _g4_s9 ? (48u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v36)) > _g4_s10 ? (52u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v37)) > _g4_s11 ? (68u + sizeof(_g4_t_v37)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);

  v2 = *(gameswf::Player::Self **)(a1 + 24);
  if ( v2 != nullptr && *(uint8_t *)(*(uint32_t *)(a1 + 20) + 2) == 0 )
  {
    v2 = nullptr;
    sub_7E5ED0((gameswf::Self **)(a1 + 20), nullptr);
    *(uint32_t *)(a1 + 24) = 0;
  }
  v28 = (gameswf::ASArray::Self *)opNew(0x4Cu);
  gameswf::ASArray::Construct(v28, v2);
  v3 = *a2;
  if ( *a2 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 4);
    v5 = 0;
    if ( v4 >= 0 && *(uint32_t *)(v3 + 8) == -2 )
    {
      v15 = 24;
      while ( ++v5 <= v4 )
      {
        v16 = *(uint32_t *)(v3 + v15);
        v15 += 16;
        if ( v16 != -2 )
        {
          if ( a2 == nullptr )
            goto LABEL_7;
          goto LABEL_26;
        }
      }
    }
    if ( a2 != nullptr )
    {
LABEL_26:
      v33 = v5;
      v17 = *a2;
      while ( v17 != 0 && *(uint32_t *)(v17 + 4) >= v33 )
      {
        v30 = *(gameswf::Player::Self **)(a1 + 24);
        if ( v30 != nullptr )
        {
          v18 = *(gameswf::Self **)(a1 + 20);
          if ( *((uint8_t *)v18 + 2) == 0 )
          {
            if ( (*(uint16_t *)v18)-- == 1 )
              gameswf::free_internal(v18);
            v30 = nullptr;
            *(uint32_t *)(a1 + 20) = 0;
            *(uint32_t *)(a1 + 24) = 0;
            v17 = *a2;
          }
        }
        v19 = v17 + 16 * v33 + 8;
        v20 = *(uint32_t *)(v19 + 12);
        v26 = *(const gameswf::String::Self **)(v19 + 8);
        v27 = (gameswf::ASFrameLabel::Self *)opNew(0x30u);
        gameswf::ASFrameLabel::Construct(v27, v30, v20, v26);
        LOWORD(v37[0]) = 5;
        v37[1] = (uint32_t)(uintptr_t)(v27);
        if ( v27 != nullptr )
          gameswf::RefCounted::addRef(v27);
        gameswf::ASArray::push(v28, (const gameswf::ASValue::Self *)v37);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v37);
        v17 = *a2;
        v21 = *(uint32_t *)(*a2 + 4);
        if ( v33 > v21 )
          break;
        v22 = v33 + 1;
        if ( v21 >= v33 + 1 && *(uint32_t *)(v17 + 16 * v22 + 8) == -2 )
        {
          v24 = v33 + 2;
          v34 = 16 * (v33 + 2) + 8;
          do
          {
            v22 = v24;
            if ( *(uint32_t *)(*a2 + 4) < v24 )
              break;
            v25 = v34;
            ++v24;
            v34 += 16;
          }
          while ( *(uint32_t *)(v17 + v25) == -2 );
        }
        v33 = v22;
      }
    }
  }
LABEL_7:
  v6 = *((uint32_t *)v28 + 16);
  if ( v6 <= 0 )
    return v28;
  v7 = *((gameswf::ASValue::Self **)v28 + 15);
  v8 = (gameswf::ASValue::Self *)((char *)v7 + 12 * v6);
  v31 = (int)(uintptr_t)(v8);
  if ( v8 == v7 )
    return v28;
  v9 = v8 - v7;
  _BitScanReverse(&v10, -1431655765 * ((v8 - v7) >> 2));
  g4_std::introsort_loop_gameswf_ASValue_int_game_6cd4a4((int)(uintptr_t)(v7), v8, 2 * (31 - (v10 ^ 0x1F)));
  if ( v9 > 203 )
  {
    v32 = (gameswf::ASValue::Self *)((char *)v7 + 192);
    g4_std::insertion_sort_gameswf_ASValue_gameswf_7f8acd(v7, (int)(uintptr_t)(v7) + 192);
    if ( (gameswf::ASValue::Self *)v31 == (gameswf::ASValue::Self *)((char *)v7 + 192) )
      return v28;
    v11 = (gameswf::ASValue::Self *)((char *)v7 + 192);
    while ( 1 )
    {
      v35[0] = 0;
      v35[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v35, v11);
      v12 = (gameswf::ASValue::Self *)((char *)v32 - 12);
      v29 = v32;
      while ( 1 )
      {
        v13 = 0;
        if ( v35[0] == 5 )
          v13 = v36;
        if ( *(uint8_t *)v12 == 5 )
          break;
        if ( *(int *)(v13 + 40) >= 2097204 )
          goto LABEL_19;
LABEL_14:
        gameswf::ASValue::opAssign(v29, v12);
        v29 = (gameswf::ASValue::Self *)(v12);
        v12 = (const gameswf::ASValue::Self *)((char *)v12 - 12);
      }
      if ( *(uint32_t *)(v13 + 40) < *(uint32_t *)(*((uint32_t *)v12 + 1) + 40) )
        goto LABEL_14;
LABEL_19:
      gameswf::ASValue::opAssign(v29, (const gameswf::ASValue::Self *)v35);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v35);
      v32 = (gameswf::ASValue::Self *)((char *)v32 + 12);
      v11 = v32;
      if ( (gameswf::ASValue::Self *)v31 == v32 )
        return v28;
    }
  }
  g4_std::insertion_sort_gameswf_ASValue_gameswf_7f8acd(v7, v31);
  return v28;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefinitionSub::is  (binary VA: 0x10a4050)
// Original: gameswf::MovieDefinitionSub::is
// ----------------------------------------------------------------------------
bool gameswf::MovieDefinitionSub::is(gameswf::MovieDefinitionSub::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 13 )
    return a2 == 14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefinitionSub::getFrameCount  (binary VA: 0x10a4070)
// Original: gameswf::MovieDefinitionSub::getFrameCount
// ----------------------------------------------------------------------------
int gameswf::MovieDefinitionSub::getFrameCount(gameswf::MovieDefinitionSub::Self *self)
{
  return *((uint32_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefinitionSub::isMultiThread  (binary VA: 0x10a4080)
// Original: gameswf::MovieDefinitionSub::isMultiThread
// ----------------------------------------------------------------------------
int gameswf::MovieDefinitionSub::isMultiThread()
{
  return 0;
}


