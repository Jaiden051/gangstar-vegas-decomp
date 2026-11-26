#include "Core/Utils/DecompTypes.h"
#include "gameswf_TextCharacterDef.h"

// ----------------------------------------------------------------------------
// Function: gameswf::TextCharacterDef::getBoundInternal  (binary VA: 0x10f9120)
// Original: gameswf::TextCharacterDef::getBoundInternal
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::TextCharacterDef::getBoundInternal(gameswf::TextCharacterDef::Self *self, gameswf::Rect::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 11);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextCharacterDef::csmTextSetting  (binary VA: 0x10f9350)
// Original: gameswf::TextCharacterDef::csmTextSetting
// ----------------------------------------------------------------------------
int gameswf::TextCharacterDef::csmTextSetting(gameswf::TextCharacterDef::Self *self, gameswf::Stream::Self *a2)
{
  *((uint8_t *)self + 88) = gameswf::Stream::readUInt(a2, 2) != 0;
  *((uint32_t *)self + 23) = gameswf::Stream::readUInt(a2, 3);
  gameswf::Stream::readUInt(a2, 3);
  *((float *)self + 24) = gameswf::Stream::readFixed(a2);
  *((float *)self + 25) = gameswf::Stream::readFixed(a2);
  return gameswf::Stream::readU8(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextCharacterDef::display  (binary VA: 0x10fc480)
// Original: gameswf::TextCharacterDef::display
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::TextCharacterDef::display(long double a1, gameswf::TextCharacterDef::Self *self, gameswf::Character::Self *a3)
{
  gameswf::Self *result;
  int v4;
  float v5[3];

  result = (gameswf::Self *)(a3);
  if ( *((uint8_t *)a3 + 148) != 0 )
  {
    v4 = *((uint32_t *)self + 7);
    v5[0] = 0.0;
    v5[1] = 0.0;
    return sub_10F9C70(a3, (uint32_t *)self + 18, a1, v4, v5, nullptr, 0, 0, 0, nullptr, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextCharacterDef::Construct  (binary VA: 0x10fc6f0)
// Original: gameswf::TextCharacterDef::TextCharacterDef
// ----------------------------------------------------------------------------
gameswf::TextCharacterDef::Self * gameswf::TextCharacterDef::Construct(gameswf::Self **self, gameswf::Player::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v4;
  char *v6;
  unsigned int v7;
  gameswf::TextCharacterDef::Self *result;
  char *v9;
  gameswf::Self *v10;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E728);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *(self + 5) = nullptr;
  *(self + 6) = (gameswf::Self *)(a2);
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v4 = *(self + 5);
    if ( WeakProxy != v4 )
    {
      if ( v4 != nullptr && (*(uint16_t *)v4)-- == 1 )
      {
        v10 = WeakProxy;
        gameswf::free_internal(v4);
        WeakProxy = v10;
      }
      *(self + 5) = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  else
  {
    sub_7E5ED0(self + 5, nullptr);
  }
  v6 = (char *)(self + 12);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208F6A8);
  *(self + 7) = (gameswf::Self *)(a3);
  v7 = 24;
  if ( ((unsigned int)(uintptr_t)(self + 12) & 1) != 0 )
  {
    *((uint8_t *)self + 48) = 0;
    v6 = (char *)self + 49;
    LOBYTE(v7) = 23;
  }
  if ( ((uint8_t)(uintptr_t)v6 & 2) != 0 )
  {
    *(uint16_t *)v6 = 0;
    v7 -= 2;
    v6 += 2;
  }
  result = nullptr;
  memset(v6, 0, 4 * (v7 >> 2));
  v9 = &v6[4 * (v7 >> 2)];
  if ( (v7 & 2) != 0 )
  {
    *(uint16_t *)v9 = 0;
    v9 += 2;
  }
  if ( (v7 & 1) != 0 )
    *v9 = 0;
  *(self + 12) = (gameswf::Self *)1065353216;
  *(self + 16) = (gameswf::Self *)1065353216;
  *(self + 18) = nullptr;
  *(self + 19) = nullptr;
  *(self + 20) = nullptr;
  *(self + 21) = nullptr;
  *((uint8_t *)self + 88) = 0;
  *(self + 23) = nullptr;
  *(self + 24) = nullptr;
  *(self + 25) = nullptr;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextCharacterDef::read  (binary VA: 0x10fe160)
// Original: gameswf::TextCharacterDef::read
// ----------------------------------------------------------------------------
int gameswf::TextCharacterDef::read(__m128 a1, gameswf::TextCharacterDef::Self *self, gameswf::Stream::Self *a3, int a4)
{
  char v4; // si
  uint8_t v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float *v18;
  int v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_U8;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef bool _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_i;
  typedef int _g4_t_v30;
  typedef int _g4_t_U16;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  typedef float _g4_t_S16;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef int _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v22)) > _g4_s1 ? (19u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v23)) > _g4_s2 ? (20u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_U8)) > _g4_s3 ? (24u + sizeof(_g4_t_U8)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v25)) > _g4_s4 ? (28u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v26)) > _g4_s5 ? (28u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v28)) > _g4_s7 ? (32u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_i)) > _g4_s8 ? (32u + sizeof(_g4_t_i)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v30)) > _g4_s9 ? (36u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_U16)) > _g4_s10 ? (40u + sizeof(_g4_t_U16)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v32)) > _g4_s11 ? (48u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v33)) > _g4_s12 ? (52u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_S16)) > _g4_s13 ? (56u + sizeof(_g4_t_S16)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v35)) > _g4_s14 ? (60u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v36)) > _g4_s15 ? (64u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v37)) > _g4_s16 ? (68u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v38)) > _g4_s17 ? (72u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (73u + sizeof(_g4_t_v39)) > _g4_s18 ? (73u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (74u + sizeof(_g4_t_v40)) > _g4_s19 ? (74u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (75u + sizeof(_g4_t_v41)) > _g4_s20 ? (75u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v42)) > _g4_s21 ? (76u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v43)) > _g4_s22 ? (80u + sizeof(_g4_t_v43)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 19u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_U8 &U8 = *reinterpret_cast<_g4_t_U8 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_U16 &U16 = *reinterpret_cast<_g4_t_U16 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_S16 &S16 = *reinterpret_cast<_g4_t_S16 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 73u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 74u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 75u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);

  v4 = 0;
  gameswf::Rect::read((gameswf::TextCharacterDef::Self *)((char *)self + 32), a3);
  gameswf::Matrix::read(a1, (gameswf::TextCharacterDef::Self *)((char *)self + 48), a3);
  U8 = (uint8_t)gameswf::Stream::readU8(a3);
  U16 = -1;
  v23 = (uint8_t)gameswf::Stream::readU8(a3);
  v32 = -1;
  v33 = 0;
  S16 = 0.0;
  v35 = 0.0;
  v36 = 1.0;
  v37 = 1065353216;
  v38 = 0;
  v39 = 0;
  v40 = 1;
  v41 = 1;
  v42 = 0;
  v43 = 0;
  while ( 1 )
  {
    v5 = gameswf::Stream::readU8(a3);
    v22 = v5;
    v30 = v5;
    if ( v5 == 0 )
      break;
    if ( v4 != 0 )
    {
      gameswf::array_gameswf_TextGlyphRecord_2b5322::resize(
        (gameswf::TextCharacterDef::Self *)((char *)self + 72),
        *((uint32_t *)self + 19) + 1);
      v7 = *((uint32_t *)self + 18) + 60 * (*((uint32_t *)self + 19) - 1);
      *(uint32_t *)v7 = U16;
      if ( *(uint32_t *)(v7 + 4) != 0 )
      {
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v7 + 4));
        *(uint32_t *)(v7 + 4) = 0;
      }
      *(uint32_t *)(v7 + 8) = v32;
      *(uint8_t *)(v7 + 12) = v33;
      *(float *)(v7 + 16) = S16;
      *(float *)(v7 + 20) = v35;
      *(float *)(v7 + 24) = v36;
      *(uint32_t *)(v7 + 28) = v37;
      *(uint8_t *)(v7 + 32) = v38;
      *(uint8_t *)(v7 + 33) = v39;
      *(uint8_t *)(v7 + 34) = v40;
      *(uint8_t *)(v7 + 35) = v41;
      *(uint32_t *)(v7 + 36) = v42;
      *(uint32_t *)(v7 + 40) = v43;
      v8 = (uint32_t *)(*((uint32_t *)self + 18) + 60 * (*((uint32_t *)self + 19) - 1));
      v9 = v8[12];
      v21 = v9;
      v10 = (gameswf::Self *)v8[11];
      if ( v30 < v9 )
      {
        v26 = *((uint32_t *)self + 18) + 60 * (*((uint32_t *)self + 19) - 1);
        v28 = v9 + 1;
        v11 = 44 * v22;
        v12 = v30 + 1;
        do
        {
          if ( *(uint32_t *)((char *)v10 + v11 + 4) != 0 )
          {
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)((char *)v10 + v11 + 4));
            v10 = *(gameswf::Self **)(v26 + 44);
          }
          ++v12;
          v11 += 44;
        }
        while ( v12 != v28 );
        v8 = (uint32_t *)v26;
      }
      v13 = v8[13];
      if ( v30 > v13 && v8[14] == 0 )
      {
        v20 = v30 + (v30 >> 1);
        v8[13] = v20;
        if ( v20 != 0 )
        {
          if ( v10 != nullptr )
            v10 = (gameswf::Self *)gameswf::realloc_internal(v10, 44 * v20, 44 * v13);
          else
            v10 = (gameswf::Self *)gameswf::malloc_internal(44 * v20);
          v8[11] = (uint32_t)(uintptr_t)(v10);
        }
        else
        {
          if ( v10 != nullptr )
            gameswf::free_internal(v10);
          v8[11] = 0;
          v10 = nullptr;
        }
      }
      if ( v30 > v21 )
      {
        v14 = v21;
        v15 = 44 * v21;
        do
        {
          v16 = (char *)v10 + v15;
          if ( (gameswf::Self *)((char *)v10 + v15) != nullptr )
          {
            *(uint32_t *)v16 = 1140850688;
            *((uint32_t *)v16 + 1) = 0;
            *((uint32_t *)v16 + 6) = 0;
            *((uint16_t *)v16 + 14) = 0;
            *((uint16_t *)v16 + 15) = -1;
            *((uint16_t *)v16 + 16) = 0;
            v16[34] = 0;
            *((uint32_t *)v16 + 9) = 0;
            *((uint32_t *)v16 + 10) = 0;
            v10 = (gameswf::Self *)v8[11];
          }
          ++v14;
          v15 += 44;
        }
        while ( v30 > v14 );
      }
      v17 = 0;
      v8[12] = v30;
      for ( i = v8; ; v10 = (gameswf::Self *)i[11] )
      {
        *((uint16_t *)v10 + 22 * v17 + 15) = gameswf::Stream::readUInt(a3, U8);
        v18 = (float *)(i[11] + 44 * v17);
        *v18 = (float)gameswf::Stream::readSInt(a3, v23);
        if ( v17 == v22 - 1 )
          break;
        ++v17;
      }
      v4 = 0;
    }
    else
    {
      v27 = (v5 & 8) != 0;
      v6 = v5 & 4;
      v25 = v5 & 2;
      if ( (v5 & 8) != 0 )
        U16 = (uint16_t)gameswf::Stream::readU16(a3);
      if ( v6 != 0 )
      {
        if ( a4 == 11 )
          gameswf::Color::read_rgb((gameswf::Color::Self *)&v32, a3);
        else
          gameswf::Color::read_rgba((gameswf::Color::Self *)&v32, a3);
      }
      if ( (v30 & 1) != 0 )
      {
        v38 = 1;
        S16 = (float)(int16_t)gameswf::Stream::readS16(a3);
      }
      else
      {
        v38 = 0;
        S16 = 0.0;
      }
      if ( v25 != 0 )
      {
        v39 = 1;
        v35 = (float)(int16_t)gameswf::Stream::readS16(a3);
      }
      else
      {
        v39 = 0;
        v35 = 0.0;
      }
      v4 = 1;
      if ( v27 )
        v36 = (float)((float)0 * 65536.0) + (float)(uint16_t)gameswf::Stream::readU16(a3);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextCharacterDef::Destroy  (binary VA: 0x11087b0)
// Original: gameswf::TextCharacterDef::~TextCharacterDef
// ----------------------------------------------------------------------------
void gameswf::TextCharacterDef::Destroy(gameswf::TextCharacterDef::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  bool v3;
  gameswf::Self *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F6A8);
  gameswf::array_gameswf_TextGlyphRecord_2b5322::resize((gameswf::TextCharacterDef::Self *)((char *)self + 72), 0);
  if ( *((uint32_t *)self + 21) == 0 )
  {
    v1 = *((gameswf::Self **)self + 18);
    *((uint32_t *)self + 20) = 0;
    if ( v1 != nullptr )
      gameswf::free_internal(v1);
    *((uint32_t *)self + 18) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v2 = *((gameswf::Self **)self + 5);
  if ( v2 != nullptr )
  {
    v3 = (*(uint16_t *)v2)-- == 1;
    if ( v3 )
      gameswf::free_internal(v2);
  }
  v4 = *((gameswf::Self **)self + 3);
  if ( v4 != nullptr )
  {
    v3 = (*(uint16_t *)v4)-- == 1;
    if ( v3 )
      gameswf::free_internal(v4);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextCharacterDef::Destroy_ea1108890  (binary VA: 0x1108890)
// Original: gameswf::TextCharacterDef::~TextCharacterDef
// ----------------------------------------------------------------------------
void gameswf::TextCharacterDef::Destroy_ea1108890(gameswf::TextCharacterDef::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  bool v3;
  gameswf::Self *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F6A8);
  gameswf::array_gameswf_TextGlyphRecord_2b5322::resize((gameswf::TextCharacterDef::Self *)((char *)self + 72), 0);
  if ( *((uint32_t *)self + 21) == 0 )
  {
    v1 = *((gameswf::Self **)self + 18);
    *((uint32_t *)self + 20) = 0;
    if ( v1 != nullptr )
      gameswf::free_internal(v1);
    *((uint32_t *)self + 18) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v2 = *((gameswf::Self **)self + 5);
  if ( v2 != nullptr )
  {
    v3 = (*(uint16_t *)v2)-- == 1;
    if ( v3 )
      gameswf::free_internal(v2);
  }
  v4 = *((gameswf::Self **)self + 3);
  if ( v4 != nullptr )
  {
    v3 = (*(uint16_t *)v4)-- == 1;
    if ( v3 )
      gameswf::free_internal(v4);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
}


