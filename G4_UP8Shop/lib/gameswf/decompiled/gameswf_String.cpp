#include "Core/Utils/DecompTypes.h"
#include "gameswf_String.h"

// ----------------------------------------------------------------------------
// Function: gameswf::String::resize  (binary VA: 0x1066f40)
// Original: gameswf::String::resize
// ----------------------------------------------------------------------------
int gameswf::String::resize(gameswf::String::Self *self, int a2)
{
  int result;
  int v3;
  size_t v4;
  unsigned int v5;
  char *v6;
  const char *v7;
  gameswf::Self *s;

  result = *(uint8_t *)self;
  v3 = (char)result - 1;
  if ( (uint8_t)result == 0xFF )
    v3 = *((uint32_t *)self + 1) - 1;
  if ( a2 != v3 )
  {
    if ( (uint8_t)result == 0xFF )
    {
      if ( a2 <= 14 )
      {
        v6 = *((char **)self + 3);
        *(uint8_t *)self = a2 + 1;
        strncpy((char *)self + 1, v6, 0xFu);
        *((uint8_t *)self + a2 + 1) = 0;
        return gameswf::free_internal((gameswf::Self *)v6);
      }
      else
      {
        v4 = *((uint32_t *)self + 2);
        v5 = (a2 + 16) & 0xFFFFFFF0;
        if ( v4 != v5 )
        {
          *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*((gameswf::Self **)self + 3), (a2 + 16) & 0xFFFFFFF0, v4));
          *((uint32_t *)self + 2) = v5;
        }
        *((uint32_t *)self + 1) = a2 + 1;
        result = *((uint32_t *)self + 3);
        *(uint8_t *)(result + a2) = 0;
      }
    }
    else if ( a2 > 14 )
    {
      s = (gameswf::Self *)gameswf::malloc_internal((a2 + 16) & 0xFFFFFFF0);
      memset(s, 0, (a2 + 16) & 0xFFFFFFF0);
      result = gameswf::Strcpy_s(s, (char *)((a2 + 16) & 0xFFFFFFF0), (gameswf::String::Self *)((char *)self + 1), v7);
      *(uint8_t *)self = -1;
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(s);
      *((uint32_t *)self + 1) = a2 + 1;
      *((uint32_t *)self + 2) = (a2 + 16) & 0xFFFFFFF0;
    }
    else
    {
      result = a2 + 1;
      *(uint8_t *)self = a2 + 1;
      *((uint8_t *)self + a2 + 1) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::appendWideChar  (binary VA: 0x10670a0)
// Original: gameswf::String::appendWideChar
// ----------------------------------------------------------------------------
int gameswf::String::appendWideChar(gameswf::String::Self *self, uint16_t a2)
{
  char *v2; // kr00_4
  int v3;
  char *v4;
  char *v5;
  int result;
  typedef unsigned int _g4_t_v7;
  typedef const char *_g4_t_v8;
  typedef char _g4_t_v9[4];
  typedef char _g4_t_v10[20];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  *(uint32_t *)v9 = 0;
  gameswf::encodeUnicodeCharacter((gameswf::Self *)v10, v9, (int *)a2, v7);
  v10[*(uint32_t *)v9] = 0;
  v2 = &v10[strlen(v10)];
  v3 = *(char *)self - 1;
  if ( *(uint8_t *)self == 0xFF )
    v3 = *((uint32_t *)self + 1) - 1;
  gameswf::String::resize(self, v3 + v2 - v10);
  LOBYTE(v4) = *(uint8_t *)self;
  if ( *(uint8_t *)self == 0xFF )
  {
    v4 = *((char **)self + 1);
    v5 = *((char **)self + 3);
  }
  else
  {
    v4 = (char *)(char)(uintptr_t)v4;
    v5 = (char *)self + 1;
  }
  result = gameswf::Strcpy_s((gameswf::Self *)&v5[v3], v4, (gameswf::Self *)v10, v8);
  *((uint32_t *)self + 4) |= 0x7FFFFFu;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::appendWideChar  (binary VA: 0x1067190)
// Original: gameswf::String::appendWideChar
// ----------------------------------------------------------------------------
int gameswf::String::appendWideChar(gameswf::String::Self *self, int *a2)
{
  char *v2; // kr00_4
  int v3;
  char *v4;
  char *v5;
  int result;
  typedef unsigned int _g4_t_v7;
  typedef const char *_g4_t_v8;
  typedef char _g4_t_v9[4];
  typedef char _g4_t_v10[20];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  *(uint32_t *)v9 = 0;
  gameswf::encodeUnicodeCharacter((gameswf::Self *)v10, v9, a2, v7);
  v10[*(uint32_t *)v9] = 0;
  v2 = &v10[strlen(v10)];
  v3 = *(char *)self - 1;
  if ( *(uint8_t *)self == 0xFF )
    v3 = *((uint32_t *)self + 1) - 1;
  gameswf::String::resize(self, v3 + v2 - v10);
  LOBYTE(v4) = *(uint8_t *)self;
  if ( *(uint8_t *)self == 0xFF )
  {
    v4 = *((char **)self + 1);
    v5 = *((char **)self + 3);
  }
  else
  {
    v4 = (char *)(char)(uintptr_t)v4;
    v5 = (char *)self + 1;
  }
  result = gameswf::Strcpy_s((gameswf::Self *)&v5[v3], v4, (gameswf::Self *)v10, v8);
  *((uint32_t *)self + 4) |= 0x7FFFFFu;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::encodeUTF8FromWchar  (binary VA: 0x1067280)
// Original: gameswf::String::encodeUTF8FromWchar
// ----------------------------------------------------------------------------
int gameswf::String::encodeUTF8FromWchar(gameswf::Self **self, int **a2)
{
  int v2;
  int **v3;
  int *v4;
  int **v5;
  gameswf::Self *v6;
  int *v7;
  int result;
  typedef unsigned int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef gameswf::Self *_g4_t_v11;
  typedef char _g4_t_v12[6];
  typedef char _g4_t_v13[22];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (38u + sizeof(_g4_t_v13)) > _g4_s4 ? (38u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 38u);

  v2 = 0;
  v3 = a2;
  do
  {
    v4 = *v3;
    v10 = v2;
    ++v3;
    *(uint32_t *)v12 = 0;
    gameswf::encodeUnicodeCharacter((gameswf::Self *)v13, v12, v4, v9);
    v2 = *(uint32_t *)v12 + v10;
  }
  while ( v4 != nullptr );
  v5 = a2;
  gameswf::String::resize((gameswf::String::Self *)self, v2 - 1);
  if ( *(uint8_t *)self == 0xFF )
    v6 = *(self + 3);
  else
    v6 = (gameswf::Self *)((char *)self + 1);
  v11 = v6;
  *(uint32_t *)v12 = 0;
  do
  {
    v7 = *v5;
    result = gameswf::encodeUnicodeCharacter(v11, v12, *v5++, v9);
  }
  while ( v7 != nullptr );
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::encodeUTF8FromWchar  (binary VA: 0x1067350)
// Original: gameswf::String::encodeUTF8FromWchar
// ----------------------------------------------------------------------------
int gameswf::String::encodeUTF8FromWchar(gameswf::Self **self, gameswf::String::Self *a2)
{
  int v2;
  gameswf::String::Self *v3;
  int *v4;
  gameswf::String::Self *v5;
  gameswf::Self *v6;
  int *v7;
  int result;
  typedef unsigned int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef gameswf::Self *_g4_t_v11;
  typedef char _g4_t_v12[6];
  typedef char _g4_t_v13[22];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (38u + sizeof(_g4_t_v13)) > _g4_s4 ? (38u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 38u);

  v2 = 0;
  v3 = a2;
  do
  {
    v4 = (int *)*(uint16_t *)v3;
    v10 = v2;
    v3 = (gameswf::String::Self *)((char *)v3 + 2);
    *(uint32_t *)v12 = 0;
    gameswf::encodeUnicodeCharacter((gameswf::Self *)v13, v12, v4, v9);
    v2 = *(uint32_t *)v12 + v10;
  }
  while ( v4 != nullptr );
  v5 = a2;
  gameswf::String::resize((gameswf::String::Self *)self, v2 - 1);
  if ( *(uint8_t *)self == 0xFF )
    v6 = *(self + 3);
  else
    v6 = (gameswf::Self *)((char *)self + 1);
  v11 = v6;
  *(uint32_t *)v12 = 0;
  do
  {
    v7 = (int *)*(uint16_t *)v5;
    result = gameswf::encodeUnicodeCharacter(v11, v12, v7, v9);
    v5 = (gameswf::String::Self *)((char *)v5 + 2);
  }
  while ( v7 != nullptr );
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::decodeUTF8ToWchar  (binary VA: 0x1067420)
// Original: gameswf::String::decodeUTF8ToWchar
// ----------------------------------------------------------------------------
char gameswf::String::decodeUTF8ToWchar(gameswf::String::Self *self, const gameswf::String::Self *a2)
{
  int v2;
  int v3;
  uint16_t *v4;
  int16_t UnicodeCharacter;
  int v6;
  char *v7;
  int16_t v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  typedef const char **_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int16_t _g4_t_v17;
  typedef int16_t _g4_t_v18;
  typedef char *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v16)) > _g4_s1 ? (20u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  v2 = *((uint32_t *)a2 + 1);
  if ( v2 < 0 )
  {
    v3 = 2 * v2;
    do
    {
      v4 = (uint16_t *)(*(uint32_t *)a2 + v3);
      if ( v4 != nullptr )
        *v4 = 0;
      v3 += 2;
      ++v2;
    }
    while ( v2 != 0 );
  }
  *((uint32_t *)a2 + 1) = 0;
  LOBYTE(UnicodeCharacter) = *(uint8_t *)self;
  v6 = *(char *)self - 1;
  if ( *(uint8_t *)self == 0xFF )
    v6 = *((uint32_t *)self + 1) - 1;
  if ( v6 > 0 )
  {
    if ( (uint8_t)UnicodeCharacter == 0xFF )
      v7 = *((char **)self + 3);
    else
      v7 = (char *)self + 1;
    v19 = v7;
    while ( 1 )
    {
      UnicodeCharacter = gameswf::decodeNextUnicodeCharacter((gameswf::Self *)&v19, v15);
      v8 = UnicodeCharacter;
      if ( UnicodeCharacter == 0 )
        break;
      v9 = *((uint32_t *)a2 + 1);
      v16 = *((uint32_t *)a2 + 2);
      v10 = v9 + 1;
      if ( v9 + 1 <= v16 || *((uint32_t *)a2 + 3) != 0 )
      {
        v11 = *(char **)a2;
      }
      else
      {
        v13 = v10 + (v10 >> 1);
        *((uint32_t *)a2 + 2) = v13;
        if ( v13 != 0 )
        {
          v18 = v8;
          if ( *(uint32_t *)a2 != 0 )
          {
            v11 = (char *)gameswf::realloc_internal(*(gameswf::Self **)a2, 2 * v13, 2 * v16);
          }
          else
          {
            v15 = nullptr;
            v11 = (char *)gameswf::malloc_internal(2 * v13);
          }
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v11);
          v9 = *((uint32_t *)a2 + 1);
          v8 = v18;
        }
        else
        {
          if ( *(uint32_t *)a2 != 0 )
          {
            v17 = v8;
            v15 = (const char **)(2 * v16);
            gameswf::free_internal(*(gameswf::Self **)a2);
            v9 = *((uint32_t *)a2 + 1);
            v8 = v17;
          }
          *(uint32_t *)a2 = 0;
          v11 = nullptr;
        }
      }
      v12 = &v11[2 * v9];
      if ( v12 != nullptr )
        *(uint16_t *)v12 = v8;
      *((uint32_t *)a2 + 1) = v10;
    }
  }
  return UnicodeCharacter;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::stricmp  (binary VA: 0x10675a0)
// Original: gameswf::String::stricmp
// ----------------------------------------------------------------------------
int gameswf::String::stricmp(gameswf::String::Self *self, char *s2)
{
  return strcasecmp((const char *)self, s2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::charAtUTF8  (binary VA: 0x10675d0)
// Original: gameswf::String::charAtUTF8
// ----------------------------------------------------------------------------
int gameswf::String::charAtUTF8(gameswf::String::Self *self, int a2)
{
  char *v3;
  int result;
  typedef const char **_g4_t_v5;
  typedef char *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  if ( *(uint8_t *)self == 0xFF )
    v3 = *((char **)self + 3);
  else
    v3 = (char *)self + 1;
  v6 = v3;
  do
  {
    result = gameswf::decodeNextUnicodeCharacter((gameswf::Self *)&v6, v5);
    if ( result == 0 )
      break;
    --a2;
  }
  while ( a2 >= 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::toUpperUTF8  (binary VA: 0x1067630)
// Original: gameswf::String::toUpperUTF8
// ----------------------------------------------------------------------------
gameswf::String::Self * gameswf::String::toUpperUTF8(gameswf::String::Self *self, int a2)
{
  int v2;
  int v3;
  int *UnicodeCharacter;
  typedef char **_g4_t_v6;
  typedef uint32_t _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  if ( *(uint8_t *)a2 == 0xFF )
    v2 = *(uint32_t *)(a2 + 12);
  else
    v2 = a2 + 1;
  v7[0] = v2;
  v3 = *((uint32_t *)self + 4) | 0x7FFFFF;
  *(uint8_t *)self = 1;
  *((uint32_t *)self + 4) = v3;
  *((uint8_t *)self + 1) = 0;
  *((uint8_t *)self + 18) = BYTE2(v3) & 0x7F;
  *((uint8_t *)self + 19) = HIBYTE(v3) | 1;
  while ( 1 )
  {
    UnicodeCharacter = (int *)gameswf::decodeNextUnicodeCharacter((gameswf::Self *)v7, (const char **)v6);
    if ( UnicodeCharacter == nullptr )
      break;
    if ( (unsigned int)(uintptr_t)(UnicodeCharacter) <= 0xFF )
      UnicodeCharacter = (int *)*(int16_t *)(toupper_tab_ + 2 * (uint32_t)(uintptr_t)(UnicodeCharacter) + 2);
    gameswf::String::appendWideChar(self, UnicodeCharacter);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::toLowerUTF8  (binary VA: 0x10676d0)
// Original: gameswf::String::toLowerUTF8
// ----------------------------------------------------------------------------
gameswf::String::Self * gameswf::String::toLowerUTF8(gameswf::String::Self *self, int a2)
{
  int v2;
  int v3;
  int *UnicodeCharacter;
  typedef char **_g4_t_v6;
  typedef uint32_t _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  if ( *(uint8_t *)a2 == 0xFF )
    v2 = *(uint32_t *)(a2 + 12);
  else
    v2 = a2 + 1;
  v7[0] = v2;
  v3 = *((uint32_t *)self + 4) | 0x7FFFFF;
  *(uint8_t *)self = 1;
  *((uint32_t *)self + 4) = v3;
  *((uint8_t *)self + 1) = 0;
  *((uint8_t *)self + 18) = BYTE2(v3) & 0x7F;
  *((uint8_t *)self + 19) = HIBYTE(v3) | 1;
  while ( 1 )
  {
    UnicodeCharacter = (int *)gameswf::decodeNextUnicodeCharacter((gameswf::Self *)v7, (const char **)v6);
    if ( UnicodeCharacter == nullptr )
      break;
    if ( (unsigned int)(uintptr_t)(UnicodeCharacter) <= 0xFF )
      UnicodeCharacter = (int *)*(int16_t *)(tolower_tab_ + 2 * (uint32_t)(uintptr_t)(UnicodeCharacter) + 2);
    gameswf::String::appendWideChar(self, UnicodeCharacter);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::charCountUTF8  (binary VA: 0x1067770)
// Original: gameswf::String::charCountUTF8
// ----------------------------------------------------------------------------
int gameswf::String::charCountUTF8(gameswf::String::Self *self, const char *a2)
{
  int v2;
  typedef const char **_g4_t_v4;
  typedef gameswf::String::Self *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  v2 = 0;
  v5 = self;
  if ( (int)(uintptr_t)(a2) > 0 )
  {
    do
    {
      if ( gameswf::decodeNextUnicodeCharacter((gameswf::Self *)&v5, v4) == 0 )
        break;
      ++v2;
    }
    while ( v5 - self < (int)(uintptr_t)(a2) );
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::substringUTF8  (binary VA: 0x10677d0)
// Original: gameswf::String::substringUTF8
// ----------------------------------------------------------------------------
gameswf::String::Self * gameswf::String::substringUTF8(gameswf::String::Self *self, int a2, int a3, int a4)
{
  gameswf::String::Self *v4;
  uint8_t *v5;
  int v6;
  int UnicodeCharacter;
  bool v8; // cc
  uint8_t *v9;
  size_t v10;
  void *v11;
  char *v12;
  int v13;
  typedef const char **_g4_t_v15;
  typedef uint8_t *_g4_t_v16;
  typedef uint8_t *_g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v16)) > _g4_s1 ? (24u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v18)) > _g4_s3 ? (32u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  v4 = self;
  if ( a3 == a4 )
  {
    *(uint8_t *)self = 1;
    *((uint8_t *)self + 1) = 0;
  }
  else
  {
    if ( *(uint8_t *)a2 == 0xFF )
      v5 = *(uint8_t **)(a2 + 12);
    else
      v5 = (uint8_t *)(a2 + 1);
    v16 = v5;
    v18 = v5;
    v17 = v5;
    v6 = 0;
    do
    {
      if ( v6 == a3 )
        v17 = v18;
      ++v6;
      UnicodeCharacter = gameswf::decodeNextUnicodeCharacter((gameswf::Self *)&v18, v15);
      if ( v6 == a4 )
      {
        v4 = self;
        v9 = v18;
        goto LABEL_11;
      }
    }
    while ( UnicodeCharacter != 0 );
    v8 = a4 <= v6;
    v4 = self;
    v9 = v16;
    if ( !v8 )
      v9 = v18;
LABEL_11:
    *(uint8_t *)v4 = 1;
    *((uint8_t *)v4 + 1) = 0;
    if ( v17 != nullptr )
    {
      if ( v17 >= v9 )
        v9 = v17;
      v10 = v9 - v17;
      gameswf::String::resize(v4, v10);
      v11 = (char *)v4 + 1;
      if ( *(uint8_t *)v4 == 0xFF )
        v11 = *((void **)v4 + 3);
      memcpy(v11, v17, v10);
      v12 = (char *)v4 + 1;
      if ( *(uint8_t *)v4 == 0xFF )
        v12 = *((char **)v4 + 3);
      v12[v10] = 0;
    }
  }
  v13 = *((uint32_t *)v4 + 4) | 0x7FFFFF;
  *((uint32_t *)v4 + 4) = v13;
  *((uint8_t *)v4 + 18) = BYTE2(v13) & 0x7F;
  *((uint8_t *)v4 + 19) = HIBYTE(v13) | 1;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::formatUnicodeText  (binary VA: 0x1067920)
// Original: gameswf::String::formatUnicodeText
// ----------------------------------------------------------------------------
int gameswf::String::formatUnicodeText(gameswf::String::Self *self, gameswf::Self *a2, char *a3)
{
  char *i;
  int result;
  char v6;
  char v7;
  uint8_t v8;
  typedef unsigned int _g4_t_v9;
  typedef char _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  for ( i = (char *)self + 1; ; ++i )
  {
    v6 = *(i - 1);
    if ( v6 == 0 )
      break;
    if ( v6 == 32 )
    {
      v7 = *i;
      *(uint32_t *)v10 = 0;
      v8 = v7 - 33;
      if ( v8 > 0x1Eu || (result = 1 << v8, ((1 << v8) & 0x46001419) == 0) )
      {
LABEL_3:
        *(uint8_t *)a2 = v6;
        a2 = (gameswf::Self *)((char *)a2 + 1);
        continue;
      }
      result = gameswf::encodeUnicodeCharacter(a2, v10, (int *)&dword_A0, v9);
      a2 = (gameswf::Self *)((char *)a2 + *(uint32_t *)v10);
    }
    else
    {
      result = v6;
      if ( (char *)v6 != a3 )
        goto LABEL_3;
      *(uint8_t *)a2 = 17;
      a2 = (gameswf::Self *)((char *)a2 + 1);
    }
  }
  *(uint8_t *)a2 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::formatUnicodeText  (binary VA: 0x10679c0)
// Original: gameswf::String::formatUnicodeText
// ----------------------------------------------------------------------------
gameswf::String::Self * gameswf::String::formatUnicodeText(gameswf::String::Self *self, int a2, char *a3)
{
  gameswf::String::Self *v3;
  char *v4; // kr00_4
  gameswf::Self *v5;
  int v6;
  typedef const char *_g4_t_v8;
  typedef char _g4_t_v9[2060];
  enum : size_t {
    _g4_s0 = 2160u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  if ( *(uint8_t *)a2 == 0xFF )
    v3 = *(gameswf::String::Self **)(a2 + 12);
  else
    v3 = (gameswf::String::Self *)(a2 + 1);
  gameswf::String::formatUnicodeText(v3, (gameswf::Self *)v9, a3);
  *(uint8_t *)self = 1;
  *((uint8_t *)self + 1) = 0;
  v4 = &v9[strlen(v9)];
  gameswf::String::resize(self, v4 - v9);
  v5 = (gameswf::Self *)((gameswf::String::Self *)((char *)self + 1));
  if ( *(uint8_t *)self == 0xFF )
    v5 = *((gameswf::Self **)self + 3);
  gameswf::Strcpy_s(v5, (char *)(v4 - v9 + 1), (gameswf::Self *)v9, v8);
  v6 = *((uint32_t *)self + 4) | 0x7FFFFF;
  *((uint32_t *)self + 4) = v6;
  *((uint8_t *)self + 18) = BYTE2(v6) & 0x7F;
  *((uint8_t *)self + 19) = HIBYTE(v6) | 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::opAssign  (binary VA: 0x1079ea0)
// Original: gameswf::String::operator=
// ----------------------------------------------------------------------------
void gameswf::String::opAssign(gameswf::Self **self, gameswf::Self **a2)
{
  int v2;
  gameswf::Self *v3;
  char *v4;
  gameswf::Self *v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  int v10;
  gameswf::Self *v11;

  if ( self != a2 )
  {
    if ( *(uint8_t *)a2 == 0xFF )
      v2 = (int)(uintptr_t)(a2[1]) - 1;
    else
      v2 = *(char *)a2 - 1;
    gameswf::String::resize((gameswf::String::Self *)self, v2);
    v3 = (gameswf::Self *)((char *)a2 + 1);
    if ( *(uint8_t *)a2 == 0xFF )
      v3 = a2[3];
    LOBYTE(v4) = *(uint8_t *)self;
    if ( *(uint8_t *)self == 0xFF )
    {
      v4 = (char *)*(self + 1);
      v5 = *(self + 3);
    }
    else
    {
      v4 = (char *)(char)(uintptr_t)v4;
      v5 = (gameswf::Self *)((char *)self + 1);
    }
    gameswf::Strcpy_s(v5, v4, v3);
    v11 = a2[4];
    if ( (uint8_t *)((unsigned int)(uintptr_t)(v11) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v7 = a2[3];
        v8 = (int)(uintptr_t)(a2[1]) - 1;
      }
      else
      {
        v7 = (gameswf::Self *)((char *)a2 + 1);
        v8 = *(char *)a2 - 1;
      }
      v6 = 5381;
      if ( v8 > 0 )
      {
        do
        {
          --v8;
          v9 = 33 * v6;
          v10 = *((uint8_t *)v7 + v8) + 32;
          if ( (uint8_t)(*((uint8_t *)v7 + v8) - 65) > 0x19u )
            v10 = *((uint8_t *)v7 + v8);
          v6 = v9 ^ v10;
        }
        while ( v8 != 0 );
        v6 = v6 << 9 >> 9;
      }
      a2[4] = (gameswf::Self *)(v6 & 0x7FFFFF | (unsigned int)(uintptr_t)(v11) & 0xFF800000);
    }
    else
    {
      v6 = (int)((uint32_t)(uintptr_t)(v11) << 9) >> 9;
    }
    *(self + 4) = (gameswf::Self *)(v6 & 0x7FFFFF | (unsigned int)(uintptr_t)(*(self + 4)) & 0xFF800000);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::opAddAssign  (binary VA: 0x107a010)
// Original: gameswf::String::operator+=
// ----------------------------------------------------------------------------
int gameswf::String::opAddAssign(gameswf::String::Self *self, const gameswf::String::Self *a2)
{
  int v2;
  int v3;
  gameswf::Self *v4;
  char *v5;
  char *v6;
  int result;

  if ( *(uint8_t *)a2 == 0xFF )
  {
    v2 = *((uint32_t *)a2 + 1) - 1;
    v3 = *(char *)self - 1;
    if ( *(uint8_t *)self != 0xFF )
      goto LABEL_3;
  }
  else
  {
    v2 = *(char *)a2 - 1;
    v3 = *(char *)self - 1;
    if ( *(uint8_t *)self != 0xFF )
      goto LABEL_3;
  }
  v3 = *((uint32_t *)self + 1) - 1;
LABEL_3:
  gameswf::String::resize(self, v2 + v3);
  if ( *(uint8_t *)a2 == 0xFF )
    v4 = *((gameswf::Self **)a2 + 3);
  else
    v4 = (gameswf::Self *)((const gameswf::String::Self *)((char *)a2 + 1));
  LOBYTE(v5) = *(uint8_t *)self;
  if ( *(uint8_t *)self == 0xFF )
  {
    v5 = *((char **)self + 1);
    v6 = *((char **)self + 3);
  }
  else
  {
    v5 = (char *)(char)(uintptr_t)(v5);
    v6 = (char *)self + 1;
  }
  result = gameswf::Strcpy_s((gameswf::Self *)&v6[v3], v5, v4);
  *((uint32_t *)self + 4) |= 0x7FFFFFu;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::getHash  (binary VA: 0x1082170)
// Original: gameswf::String::getHash
// ----------------------------------------------------------------------------
int gameswf::String::getHash(gameswf::String::Self *self)
{
  int result;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v7 = *((uint32_t *)self + 4);
  if ( (uint8_t *)(v7 & 0x7FFFFF) != ((uint8_t *)(uintptr_t)0x7FFFFF) )
    return v7 << 9 >> 9;
  if ( *(uint8_t *)self == 0xFF )
  {
    v3 = *((char **)self + 3);
    v2 = *((uint32_t *)self + 1) - 1;
  }
  else
  {
    v2 = *(char *)self - 1;
    v3 = (char *)self + 1;
  }
  result = 5381;
  v4 = 5381;
  if ( v2 > 0 )
  {
    do
    {
      --v2;
      v5 = 33 * result;
      v6 = (uint8_t)v3[v2] + 32;
      if ( (uint8_t)(v3[v2] - 65) > 0x19u )
        v6 = (uint8_t)v3[v2];
      result = v5 ^ v6;
    }
    while ( v2 != 0 );
    v4 = result << 9 >> 9;
    result = v4;
  }
  *((uint32_t *)self + 4) = v4 & 0x7FFFFF | v7 & 0xFF800000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::String::opAddAssign  (binary VA: 0x1107a00)
// Original: gameswf::String::operator+=
// ----------------------------------------------------------------------------
int gameswf::String::opAddAssign(gameswf::String::Self *self, gameswf::Self *s)
{
  size_t v2;
  int v3;
  char *v4;
  char *v5;
  int result;

  v2 = strlen((const char *)s);
  v3 = *(char *)self - 1;
  if ( *(uint8_t *)self == 0xFF )
    v3 = *((uint32_t *)self + 1) - 1;
  gameswf::String::resize(self, v3 + v2);
  LOBYTE(v4) = *(uint8_t *)self;
  if ( *(uint8_t *)self == 0xFF )
  {
    v4 = *((char **)self + 1);
    v5 = *((char **)self + 3);
  }
  else
  {
    v4 = (char *)(char)(uintptr_t)(v4);
    v5 = (char *)self + 1;
  }
  result = gameswf::Strcpy_s((gameswf::Self *)&v5[v3], v4, s);
  *((uint32_t *)self + 4) |= 0x7FFFFFu;
  return result;
}


