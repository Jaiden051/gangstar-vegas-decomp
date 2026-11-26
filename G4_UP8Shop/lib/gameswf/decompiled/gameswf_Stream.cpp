#include "Core/Utils/DecompTypes.h"
#include "gameswf_Stream.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::Construct  (binary VA: 0x10ec8b0)
// Original: gameswf::Stream::Stream
// ----------------------------------------------------------------------------
gameswf::Stream::Self * gameswf::Stream::Construct(gameswf::Stream::Self *self, gameswf::File::Self *a2, bool a3)
{
  gameswf::Stream::Self *result;

  *(uint8_t *)self = a3;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  *((uint8_t *)self + 8) = 0;
  *((uint8_t *)self + 9) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 9) = 256;
  result = (gameswf::Stream::Self *)gameswf::malloc_internal(0x100u);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::Destroy  (binary VA: 0x10ec940)
// Original: gameswf::Stream::~Stream
// ----------------------------------------------------------------------------
void gameswf::Stream::Destroy(gameswf::Stream::Self *self)
{
  int v1;
  uint8_t *v2;
  int v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  gameswf::Self *v9;

  v1 = *((uint32_t *)self + 8);
  if ( v1 < 0 )
  {
    do
    {
      v2 = (uint8_t *)(*((uint32_t *)self + 7) + v1);
      if ( v2 != nullptr )
        *v2 = 0;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v3 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 8) = 0;
  if ( v3 == 0 )
  {
    v4 = *((gameswf::Self **)self + 7);
    *((uint32_t *)self + 9) = 0;
    if ( v4 != nullptr )
      gameswf::free_internal(v4);
    *((uint32_t *)self + 7) = 0;
  }
  v5 = *((uint32_t *)self + 4);
  if ( v5 < 0 )
  {
    v6 = 4 * v5;
    do
    {
      v7 = (uint32_t *)(*((uint32_t *)self + 3) + v6);
      if ( v7 != nullptr )
        *v7 = 0;
      v6 += 4;
      ++v5;
    }
    while ( v5 != 0 );
  }
  v8 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 4) = 0;
  if ( v8 == 0 )
  {
    v9 = *((gameswf::Self **)self + 3);
    *((uint32_t *)self + 5) = 0;
    if ( v9 != nullptr )
      gameswf::free_internal(v9);
    *((uint32_t *)self + 3) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readUInt  (binary VA: 0x10eca10)
// Original: gameswf::Stream::readUInt
// ----------------------------------------------------------------------------
int gameswf::Stream::readUInt(gameswf::Stream::Self *self, int a2)
{
  int result;
  int v3;
  uint8_t v4;
  int v5;
  int v6;
  char v7;
  typedef uint8_t _g4_t_v8;
  typedef uint8_t _g4_t_v9[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  result = 0;
  v3 = a2;
  if ( a2 > 0 )
  {
    v4 = *((uint8_t *)self + 9);
    v5 = 0;
    while ( 1 )
    {
      if ( v4 != 0 )
      {
        if ( v4 > v3 )
        {
          v8 = *((uint8_t *)self + 8);
          *((uint8_t *)self + 8) = v8 & ((1 << (v4 - v3)) - 1);
          *((uint8_t *)self + 9) = v4 - v3;
          return v5 | ((int)v8 >> (v4 - v3));
        }
        v3 -= v4;
        *((uint8_t *)self + 9) = 0;
        v6 = *((uint8_t *)self + 8);
        *((uint8_t *)self + 8) = 0;
        v5 |= v6 << v3;
        v4 = 0;
      }
      else
      {
        (*(void (**)(uint8_t *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(v9, 1, **((uint32_t **)self + 1));
        v7 = v9[0];
        *((uint8_t *)self + 9) = 8;
        *((uint8_t *)self + 8) = v7;
        v4 = 8;
      }
      if ( v3 <= 0 )
        return v5;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readBool  (binary VA: 0x10ecad0)
// Original: gameswf::Stream::readBool
// ----------------------------------------------------------------------------
bool gameswf::Stream::readBool(gameswf::Stream::Self *self)
{
  return gameswf::Stream::readUInt(self, 1) != 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readSInt  (binary VA: 0x10ecb00)
// Original: gameswf::Stream::readSInt
// ----------------------------------------------------------------------------
int gameswf::Stream::readSInt(gameswf::Stream::Self *self, int a2)
{
  int result;

  result = gameswf::Stream::readUInt(self, a2);
  if ( _bittest(&result, (uint8_t)(a2 - 1)) )
    return (-1 << a2) | result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readFixed  (binary VA: 0x10ecb50)
// Original: gameswf::Stream::readFixed
// ----------------------------------------------------------------------------
long double gameswf::Stream::readFixed(gameswf::Stream::Self *self)
{
  int v2[4];

  *((uint8_t *)self + 9) = 0;
  (*(void (**)(int *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(v2, 4, **((uint32_t **)self + 1));
  return (float)((float)v2[0] * 0.000015258789f);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readFloat16  (binary VA: 0x10ecbb0)
// Original: gameswf::Stream::readFloat16
// ----------------------------------------------------------------------------
long double gameswf::Stream::readFloat16(gameswf::Stream::Self *self)
{
  int v1;
  int v2;
  uint16_t v4[7];

  *((uint8_t *)self + 9) = 0;
  (*(void (**)(uint16_t *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(v4, 2, **((uint32_t **)self + 1));
  v1 = (v4[0] & 0x8000) << 16;
  v2 = (v4[0] & 0x7C00) >> 10;
  if ( v2 != 0 )
    v1 |= (v2 + 111) << 23;
  return COERCE_FLOAT(v1 | ((v4[0] & 0x3FF) << 13));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readFloat  (binary VA: 0x10ecc20)
// Original: gameswf::Stream::readFloat
// ----------------------------------------------------------------------------
long double gameswf::Stream::readFloat(gameswf::Stream::Self *self)
{
  float v2[4];

  *((uint8_t *)self + 9) = 0;
  (*(void (**)(float *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(v2, 4, **((uint32_t **)self + 1));
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readDouble  (binary VA: 0x10ecc50)
// Original: gameswf::Stream::readDouble
// ----------------------------------------------------------------------------
long double gameswf::Stream::readDouble(gameswf::Stream::Self *self)
{
  double v2[2];

  *((uint8_t *)self + 9) = 0;
  (*(void (**)(double *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(v2, 8, **((uint32_t **)self + 1));
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::align  (binary VA: 0x10ecc80)
// Original: gameswf::Stream::align
// ----------------------------------------------------------------------------
gameswf::Stream::Self * gameswf::Stream::align(gameswf::Stream::Self *self)
{
  *((uint8_t *)self + 9) = 0;
  *((uint8_t *)self + 8) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readU8  (binary VA: 0x10ecc90)
// Original: gameswf::Stream::readU8
// ----------------------------------------------------------------------------
int gameswf::Stream::readU8(gameswf::Stream::Self *self)
{
  uint8_t v2[5];

  gameswf::Stream::align(self);
  (*(void (**)(uint8_t *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(v2, 1, **((uint32_t **)self + 1));
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readVU32  (binary VA: 0x10ecce0)
// Original: gameswf::Stream::readVU32
// ----------------------------------------------------------------------------
int gameswf::Stream::readVU32(gameswf::Stream::Self *self)
{
  int result;

  result = (uint8_t)gameswf::Stream::readU8(self);
  if ( (result & 0x80u) != 0 )
  {
    result = result & 0x7F | ((uint8_t)gameswf::Stream::readU8(self) << 7);
    if ( (result & 0x4000) != 0 )
    {
      result = result & 0x3FFF | ((uint8_t)gameswf::Stream::readU8(self) << 14);
      if ( (result & 0x200000) != 0 )
      {
        result = result & 0x1FFFFF | ((uint8_t)gameswf::Stream::readU8(self) << 21);
        if ( (result & 0x10000000) != 0 )
          return result & 0xFFFFFFF | (gameswf::Stream::readU8(self) << 28);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readS8  (binary VA: 0x10ecda0)
// Original: gameswf::Stream::readS8
// ----------------------------------------------------------------------------
int gameswf::Stream::readS8(gameswf::Stream::Self *self)
{
  uint8_t v2[5];

  gameswf::Stream::align(self);
  (*(void (**)(uint8_t *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(v2, 1, **((uint32_t **)self + 1));
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readU16  (binary VA: 0x10ecdf0)
// Original: gameswf::Stream::readU16
// ----------------------------------------------------------------------------
int gameswf::Stream::readU16(gameswf::Stream::Self *self)
{
  uint16_t v2[3];

  gameswf::Stream::align(self);
  (*(void (**)(uint16_t *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(v2, 2, **((uint32_t **)self + 1));
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readS16  (binary VA: 0x10ece40)
// Original: gameswf::Stream::readS16
// ----------------------------------------------------------------------------
int gameswf::Stream::readS16(gameswf::Stream::Self *self)
{
  uint16_t v2[3];

  gameswf::Stream::align(self);
  (*(void (**)(uint16_t *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(v2, 2, **((uint32_t **)self + 1));
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readU32  (binary VA: 0x10ece90)
// Original: gameswf::Stream::readU32
// ----------------------------------------------------------------------------
int gameswf::Stream::readU32(gameswf::Stream::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  gameswf::Stream::align(self);
  (*(void (**)(int *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(&v2, 4, **((uint32_t **)self + 1));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readS32  (binary VA: 0x10ecee0)
// Original: gameswf::Stream::readS32
// ----------------------------------------------------------------------------
int gameswf::Stream::readS32(gameswf::Stream::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  gameswf::Stream::align(self);
  (*(void (**)(int *, int, uint32_t))(*((uint32_t *)self + 1) + 8))(&v2, 4, **((uint32_t **)self + 1));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readString  (binary VA: 0x10ecf30)
// Original: gameswf::Stream::readString
// ----------------------------------------------------------------------------
char * gameswf::Stream::readString(gameswf::Self **self, gameswf::Self **a2)
{
  int v2;
  uint8_t *v3;
  gameswf::Self *v4;
  uint8_t *v5;
  char U8;
  int v7;
  signed int v8;
  int v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  int v12;
  signed int v13;
  int v14;
  char *s;
  char *result;
  size_t v17;
  char *v18;
  gameswf::Self *v19;
  gameswf::Self *v20;
  gameswf::Self *v21;
  gameswf::Self *v22;
  char v23;
  char v24;

  gameswf::Stream::align((gameswf::Stream::Self *)self);
  v2 = (int)(uintptr_t)(*(self + 8));
  if ( v2 < 0 )
  {
    do
    {
      v3 = (uint8_t *)((char *)*(self + 7) + v2);
      if ( v3 != nullptr )
        *v3 = 0;
      ++v2;
    }
    while ( v2 != 0 );
  }
  for ( *(self + 8) = nullptr; ; *(self + 8) = (gameswf::Self *)v9 )
  {
    U8 = gameswf::Stream::readU8((gameswf::Stream::Self *)self);
    if ( U8 == 0 )
      break;
    v7 = (int)(uintptr_t)(*(self + 8));
    v8 = (signed int)(uintptr_t)(*(self + 9));
    v9 = v7 + 1;
    if ( v7 + 1 <= v8 || *(self + 10) != nullptr )
    {
      v4 = *(self + 7);
    }
    else
    {
      v10 = (gameswf::Self *)(v9 + (v9 >> 1));
      *(self + 9) = v10;
      if ( v10 != nullptr )
      {
        v24 = U8;
        if ( *(self + 7) != nullptr )
          v4 = (gameswf::Self *)gameswf::realloc_internal(*(self + 7), v9 + (v9 >> 1), v8);
        else
          v4 = (gameswf::Self *)gameswf::malloc_internal(v9 + (v9 >> 1));
        *(self + 7) = v4;
        v7 = (int)(uintptr_t)(*(self + 8));
        U8 = v24;
      }
      else
      {
        v11 = *(self + 7);
        if ( v11 != nullptr )
        {
          v23 = U8;
          gameswf::free_internal(v11);
          v7 = (int)(uintptr_t)(*(self + 8));
          U8 = v23;
        }
        *(self + 7) = nullptr;
        v4 = nullptr;
      }
    }
    v5 = (uint8_t *)((char *)v4 + v7);
    if ( v5 != nullptr )
      *v5 = U8;
  }
  v12 = (int)(uintptr_t)(*(self + 8));
  v13 = (signed int)(uintptr_t)(*(self + 9));
  v14 = v12 + 1;
  if ( v12 + 1 <= v13 || *(self + 10) != nullptr )
  {
    s = (char *)*(self + 7);
  }
  else
  {
    v20 = (gameswf::Self *)(v14 + (v14 >> 1));
    *(self + 9) = v20;
    if ( v20 != nullptr )
    {
      v22 = *(self + 7);
      if ( v22 != nullptr )
        s = (char *)gameswf::realloc_internal(v22, v14 + (v14 >> 1), v13);
      else
        s = (char *)gameswf::malloc_internal(v14 + (v14 >> 1));
      *(self + 7) = (gameswf::Self *)s;
      v12 = (int)(uintptr_t)(*(self + 8));
    }
    else
    {
      v21 = *(self + 7);
      if ( v21 != nullptr )
      {
        gameswf::free_internal(v21);
        v12 = (int)(uintptr_t)(*(self + 8));
      }
      *(self + 7) = nullptr;
      s = nullptr;
    }
  }
  result = &s[v12];
  if ( result != nullptr )
  {
    *result = 0;
    s = (char *)*(self + 7);
  }
  *(self + 8) = (gameswf::Self *)v14;
  if ( s != nullptr )
  {
    v17 = strlen(s);
    gameswf::String::resize((gameswf::String::Self *)a2, v17);
    LOBYTE(v18) = *(uint8_t *)a2;
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v18 = (char *)a2[1];
      v19 = a2[3];
    }
    else
    {
      v18 = (char *)(char)(uintptr_t)v18;
      v19 = (gameswf::Self *)((char *)a2 + 1);
    }
    result = (char *)gameswf::Strcpy_s(v19, v18, (gameswf::Self *)s);
    a2[4] = (gameswf::Self *)((unsigned int)(uintptr_t)(a2[4]) | 0x7FFFFF);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readStringWithLength  (binary VA: 0x10ed160)
// Original: gameswf::Stream::readStringWithLength
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::Stream::readStringWithLength(gameswf::Self **self, gameswf::Self **a2)
{
  int v2;
  uint8_t *v3;
  uint8_t U8;
  int v5;
  gameswf::Self *v6;
  uint8_t *v7;
  char v8;
  int v9;
  char v10;
  size_t v11;
  gameswf::Self *v12;
  int v13;
  int v14;
  gameswf::Self *result;
  char *s;
  char *v17;
  size_t v18;
  char *v19;
  gameswf::Self *v20;
  gameswf::Self *v21;
  gameswf::Self *v22;
  signed int v23;
  char v24;
  char v25;
  int v26;
  int v27;
  int v28;

  gameswf::Stream::align((gameswf::Stream::Self *)self);
  v2 = (int)(uintptr_t)(*(self + 8));
  if ( v2 < 0 )
  {
    do
    {
      v3 = (uint8_t *)((char *)*(self + 7) + v2);
      if ( v3 != nullptr )
        *v3 = 0;
      ++v2;
    }
    while ( v2 != 0 );
  }
  *(self + 8) = nullptr;
  U8 = gameswf::Stream::readU8((gameswf::Stream::Self *)self);
  v5 = 0;
  v28 = U8;
  if ( U8 != 0 )
  {
    do
    {
      v8 = gameswf::Stream::readU8((gameswf::Stream::Self *)self);
      v9 = (int)(uintptr_t)(*(self + 8));
      v10 = v8;
      v23 = (signed int)(uintptr_t)(*(self + 9));
      v13 = v9 + 1;
      if ( v9 + 1 <= v23 || *(self + 10) != nullptr )
      {
        v6 = *(self + 7);
      }
      else
      {
        v11 = v13 + (v13 >> 1);
        *(self + 9) = (gameswf::Self *)v11;
        if ( v11 != 0 )
        {
          v25 = v10;
          if ( *(self + 7) != nullptr )
            v6 = (gameswf::Self *)gameswf::realloc_internal(*(self + 7), v11, v23);
          else
            v6 = (gameswf::Self *)gameswf::malloc_internal(v11);
          *(self + 7) = v6;
          v9 = (int)(uintptr_t)(*(self + 8));
          v10 = v25;
        }
        else
        {
          v12 = *(self + 7);
          if ( v12 != nullptr )
          {
            v24 = v10;
            gameswf::free_internal(v12);
            v9 = (int)(uintptr_t)(*(self + 8));
            v10 = v24;
          }
          *(self + 7) = nullptr;
          v6 = nullptr;
        }
      }
      v7 = (uint8_t *)((char *)v6 + v9);
      if ( v7 != nullptr )
        *v7 = v10;
      ++v5;
      *(self + 8) = (gameswf::Self *)v13;
    }
    while ( v28 > v5 );
  }
  else
  {
    v13 = (int)(uintptr_t)(*(self + 8));
  }
  v14 = v13 + 1;
  result = *(self + 9);
  if ( v13 + 1 <= (int)(uintptr_t)(result) || *(self + 10) != nullptr )
  {
    s = (char *)*(self + 7);
  }
  else
  {
    v21 = (gameswf::Self *)(v14 + (v14 >> 1));
    *(self + 9) = v21;
    if ( v21 != nullptr )
    {
      v27 = v13 + 1;
      if ( *(self + 7) != nullptr )
        result = (gameswf::Self *)gameswf::realloc_internal(*(self + 7), v14 + (v14 >> 1), (size_t)result);
      else
        result = (gameswf::Self *)gameswf::malloc_internal(v14 + (v14 >> 1));
      *(self + 7) = result;
      s = (char *)result;
      v13 = (int)(uintptr_t)(*(self + 8));
      v14 = v27;
    }
    else
    {
      v22 = *(self + 7);
      if ( v22 != nullptr )
      {
        v26 = v13 + 1;
        result = (gameswf::Self *)gameswf::free_internal(v22);
        v13 = (int)(uintptr_t)(*(self + 8));
        v14 = v26;
      }
      *(self + 7) = nullptr;
      s = nullptr;
    }
  }
  v17 = &s[v13];
  if ( v17 != nullptr )
  {
    *v17 = 0;
    s = (char *)*(self + 7);
  }
  *(self + 8) = (gameswf::Self *)v14;
  if ( s != nullptr )
  {
    v18 = strlen(s);
    gameswf::String::resize((gameswf::String::Self *)a2, v18);
    LOBYTE(v19) = *(uint8_t *)a2;
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v19 = (char *)a2[1];
      v20 = a2[3];
    }
    else
    {
      v19 = (char *)(char)(uintptr_t)v19;
      v20 = (gameswf::Self *)((char *)a2 + 1);
    }
    result = (gameswf::Self *)gameswf::Strcpy_s(v20, v19, (gameswf::Self *)s);
    a2[4] = (gameswf::Self *)((unsigned int)(uintptr_t)(a2[4]) | 0x7FFFFF);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::readStringWithLength  (binary VA: 0x10ed3e0)
// Original: gameswf::Stream::readStringWithLength
// ----------------------------------------------------------------------------
int gameswf::Stream::readStringWithLength(gameswf::Stream::Self *self, int a2, gameswf::String::Self *a3)
{
  gameswf::String::Self *v3;
  int v4;
  uint32_t *v5;
  uint8_t *v6;
  int v7;
  signed int v8;
  int i;
  uint8_t *v10;
  int v11;
  int v12;
  int result;
  size_t v14;
  bool v15;
  gameswf::Self *v16;
  size_t v17;
  gameswf::String::Self *v18;

  v3 = a3;
  v4 = *((uint32_t *)self + 8);
  v5 = (uint32_t *)((char *)self + 28);
  if ( v4 < 0 )
  {
    do
    {
      v6 = (uint8_t *)(*v5 + v4);
      if ( v6 != nullptr )
        *v6 = 0;
      ++v4;
    }
    while ( v4 != 0 );
  }
  *((uint32_t *)self + 8) = 0;
  v7 = a2 + 1;
  if ( a2 != -1 )
  {
    v8 = *((uint32_t *)self + 9);
    if ( v7 > v8 && *((uint32_t *)self + 10) == 0 )
    {
      v14 = v7 + (v7 >> 1);
      v15 = v14 == 0;
      v17 = v14;
      *((uint32_t *)self + 9) = v14;
      v16 = *((gameswf::Self **)self + 7);
      if ( v15 )
      {
        if ( v16 != nullptr )
        {
          gameswf::free_internal(v16);
          v3 = a3;
        }
        *((uint32_t *)self + 7) = 0;
      }
      else
      {
        if ( v16 != nullptr )
          *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v16, v17, v8));
        else
          *((uint32_t *)self + 7) = gameswf::malloc_internal(v17);
        v3 = a3;
      }
    }
    if ( v7 > 0 )
    {
      for ( i = 0; i < v7; ++i )
      {
        v10 = (uint8_t *)(*v5 + i);
        if ( v10 != nullptr )
          *v10 = 0;
      }
    }
  }
  *((uint32_t *)self + 8) = v7;
  v18 = v3;
  gameswf::Stream::align(self);
  gameswf::File::readFully(*((gameswf::File::Self **)self + 1), *((void **)self + 7), a2);
  *(uint8_t *)(*((uint32_t *)self + 7) + a2) = 0;
  v11 = *((uint32_t *)self + 8);
  v12 = *((uint32_t *)self + 7);
  result = gameswf::String::resize(v18, 0);
  *((uint32_t *)v18 + 3) = v12;
  *(uint8_t *)v18 = -1;
  *((uint32_t *)v18 + 1) = v11;
  *((uint32_t *)v18 + 2) = v11;
  *((uint8_t *)v18 + 19) &= ~1u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::getPosition  (binary VA: 0x10ed560)
// Original: gameswf::Stream::getPosition
// ----------------------------------------------------------------------------
int gameswf::Stream::getPosition(gameswf::Stream::Self *self)
{
  return (*(int (**)(uint32_t))(*((uint32_t *)self + 1) + 24))(**((uint32_t **)self + 1));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::setPosition  (binary VA: 0x10ed580)
// Original: gameswf::Stream::setPosition
// ----------------------------------------------------------------------------
int gameswf::Stream::setPosition(gameswf::Stream::Self *self, int a2)
{
  gameswf::Stream::align(self);
  return (*(int (**)(int, uint32_t))(*((uint32_t *)self + 1) + 16))(a2, **((uint32_t **)self + 1));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::getTagEndPosition  (binary VA: 0x10ed5d0)
// Original: gameswf::Stream::getTagEndPosition
// ----------------------------------------------------------------------------
int gameswf::Stream::getTagEndPosition(gameswf::Stream::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 3) + 4 * *((uint32_t *)self + 4) - 4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::openTag  (binary VA: 0x10ed5e0)
// Original: gameswf::Stream::openTag
// ----------------------------------------------------------------------------
int gameswf::Stream::openTag(gameswf::Self **self)
{
  uint16_t U16;
  int v2;
  int Position;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  uint32_t *v8;
  gameswf::Self *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v13)) > _g4_s2 ? (4u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v14)) > _g4_s3 ? (8u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  gameswf::Stream::align((gameswf::Stream::Self *)self);
  U16 = gameswf::Stream::readU16((gameswf::Stream::Self *)self);
  v2 = U16 & 0x3F;
  v14 = (int)U16 >> 6;
  if ( v2 == 63 )
  {
    (*((void (**)(int *, int, uint32_t))*(self + 1) + 2))(v15, 4, *(uint32_t *)*(self + 1));
    v2 = v15[0];
  }
  Position = gameswf::Stream::getPosition((gameswf::Stream::Self *)self);
  v4 = (int)(uintptr_t)(*(self + 4));
  v5 = Position;
  v11 = (int)(uintptr_t)(*(self + 5));
  v6 = v4 + 1;
  if ( v4 + 1 <= v11 || *(self + 6) != nullptr )
  {
    v7 = *(self + 3);
  }
  else
  {
    v10 = (gameswf::Self *)(v6 + (v6 >> 1));
    *(self + 5) = v10;
    if ( v10 != nullptr )
    {
      v13 = v5;
      if ( *(self + 3) != nullptr )
        v7 = (gameswf::Self *)gameswf::realloc_internal(*(self + 3), 4 * (uint32_t)(uintptr_t)(v10), 4 * v11);
      else
        v7 = (gameswf::Self *)gameswf::malloc_internal(4 * (uint32_t)(uintptr_t)(v10));
      *(self + 3) = v7;
      v4 = (int)(uintptr_t)(*(self + 4));
      v5 = v13;
    }
    else
    {
      if ( *(self + 3) != nullptr )
      {
        v12 = v5;
        gameswf::free_internal(*(self + 3));
        v4 = (int)(uintptr_t)(*(self + 4));
        v5 = v12;
      }
      *(self + 3) = nullptr;
      v7 = nullptr;
    }
  }
  v8 = (uint32_t *)((char *)v7 + 4 * v4);
  if ( v8 != nullptr )
    *v8 = v5 + v2;
  *(self + 4) = (gameswf::Self *)v6;
  return v14;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Stream::closeTag  (binary VA: 0x10ed760)
// Original: gameswf::Stream::closeTag
// ----------------------------------------------------------------------------
int gameswf::Stream::closeTag(gameswf::Stream::Self *self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v1 = *((gameswf::Self **)self + 3);
  v2 = *((uint32_t *)self + 4) - 1;
  v3 = *((uint32_t *)v1 + v2);
  if ( *((uint32_t *)self + 4) != 1 )
  {
    v4 = *((uint32_t *)self + 5);
    if ( v2 > v4 && *((uint32_t *)self + 6) == 0 )
    {
      v6 = v2 + (v2 >> 1);
      *((uint32_t *)self + 5) = v6;
      if ( v6 != 0 )
      {
        if ( v1 != nullptr )
          *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v1, 4 * v6, 4 * v4));
        else
          *((uint32_t *)self + 3) = gameswf::malloc_internal(4 * v6);
      }
      else
      {
        if ( v1 != nullptr )
          gameswf::free_internal(v1);
        *((uint32_t *)self + 3) = 0;
      }
    }
  }
  *((uint32_t *)self + 4) = v2;
  gameswf::Stream::getPosition(self);
  result = (*(int (**)(int, uint32_t))(*((uint32_t *)self + 1) + 16))(v3, **((uint32_t **)self + 1));
  *((uint8_t *)self + 9) = 0;
  return result;
}


