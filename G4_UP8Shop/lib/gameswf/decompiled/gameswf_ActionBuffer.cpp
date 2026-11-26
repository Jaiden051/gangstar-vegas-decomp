#include "Core/Utils/DecompTypes.h"
#include "gameswf_ActionBuffer.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ActionBuffer::Construct  (binary VA: 0x106cb70)
// Original: gameswf::ActionBuffer::ActionBuffer
// ----------------------------------------------------------------------------
gameswf::ActionBuffer::Self * gameswf::ActionBuffer::Construct(gameswf::ActionBuffer::Self *self)
{
  gameswf::MemBuf::Self *v1;
  gameswf::ActionBuffer::Self *result;

  v1 = (gameswf::MemBuf::Self *)opNew(0x24u);
  result = (gameswf::ActionBuffer::Self *)(gameswf::MemBuf::Construct(v1));
  *((uint32_t *)v1 + 4) = 0;
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 6) = 0;
  *((uint32_t *)v1 + 7) = 0;
  *((uint32_t *)v1 + 8) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v1);
  ++*((uint32_t *)v1 + 4);
  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 2) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ActionBuffer::read  (binary VA: 0x106cc00)
// Original: gameswf::ActionBuffer::read
// ----------------------------------------------------------------------------
gameswf::MemBuf::Self * gameswf::ActionBuffer::read(gameswf::MemBuf::Self ***self, gameswf::Stream::Self *a2)
{
  gameswf::MemBuf::Self **v2;
  int TagEndPosition;
  int Position;
  int v5;
  uint8_t U8;
  gameswf::MemBuf::Self *v7;
  uint8_t v8;
  int v9;
  gameswf::MemBuf::Self *v10;
  gameswf::MemBuf::Self *result;
  uint16_t U16;
  gameswf::MemBuf::Self *v13;
  unsigned int v14;
  char v15;
  gameswf::MemBuf::Self *v16;
  gameswf::MemBuf::Self *v17;
  gameswf::MemBuf::Self *v18;
  unsigned int v19;
  gameswf::MemBuf::Self *v20;
  gameswf::MemBuf::Self *v21;
  int v22;
  char v23;
  gameswf::MemBuf::Self *v24;
  char v25;
  gameswf::MemBuf::Self *v26;
  gameswf::MemBuf::Self *v27;
  size_t v28;
  size_t v29;
  size_t v30;
  size_t v31;
  size_t v32;
  gameswf::MemBuf::Self *v33;
  int v34;
  gameswf::MemBuf::Self *v35;
  gameswf::MemBuf::Self *v36;
  char v37;
  uint8_t v38;
  char v39;
  unsigned int v40;

  v2 = *self;
  TagEndPosition = gameswf::Stream::getTagEndPosition(a2);
  Position = gameswf::Stream::getPosition(a2);
  gameswf::MemBuf::reserve((gameswf::MemBuf::Self *)v2, (size_t)*v2 + TagEndPosition - Position);
  if ( *(uint8_t *)a2 != 0 )
    v5 = gameswf::Stream::getPosition(a2) + 8;
  else
    v5 = gameswf::Stream::getPosition(a2);
  *(self + 2) = (gameswf::MemBuf::Self **)v5;
  do
  {
    while ( 1 )
    {
      U8 = gameswf::Stream::readU8(a2);
      v7 = *v2;
      v8 = U8;
      v9 = U8;
      v10 = (gameswf::MemBuf::Self *)((char *)*v2 + 1);
      if ( (int)(uintptr_t)(v10) > (int)(uintptr_t)(v2[1]) )
      {
        v34 = U8;
        v38 = U8;
        v29 = gameswf::MemBuf::capacity(v10, v32);
        gameswf::MemBuf::reserve((gameswf::MemBuf::Self *)v2, v29);
        v8 = v38;
        v9 = v34;
      }
      result = v2[2];
      *v2 = v10;
      *((uint8_t *)v7 + (uint32_t)(uintptr_t)(result)) = v8;
      if ( (v9 & 0x80u) == 0 )
        break;
      U16 = gameswf::Stream::readU16(a2);
      v13 = *v2;
      v14 = U16;
      v15 = U16;
      v16 = (gameswf::MemBuf::Self *)((char *)*v2 + 1);
      if ( (int)(uintptr_t)(v16) > (int)(uintptr_t)(v2[1]) )
      {
        v35 = *v2;
        v39 = U16;
        v30 = gameswf::MemBuf::capacity(v16, v32);
        gameswf::MemBuf::reserve((gameswf::MemBuf::Self *)v2, v30);
        v15 = v39;
        v13 = v35;
      }
      v17 = v2[2];
      *v2 = v16;
      *((uint8_t *)v13 + (uint32_t)(uintptr_t)(v17)) = v15;
      v18 = *v2;
      v19 = v14 >> 8;
      v20 = (gameswf::MemBuf::Self *)((char *)*v2 + 1);
      if ( (int)(uintptr_t)(v20) > (int)(uintptr_t)(v2[1]) )
      {
        v36 = *v2;
        v31 = gameswf::MemBuf::capacity(v20, v32);
        gameswf::MemBuf::reserve((gameswf::MemBuf::Self *)v2, v31);
        LOBYTE(v19) = BYTE1(v14);
        v18 = v36;
      }
      v21 = v2[2];
      *v2 = v20;
      *((uint8_t *)v18 + (uint32_t)(uintptr_t)(v21)) = v19;
      if ( v14 != 0 )
      {
        v40 = v14 + 1;
        v22 = 1;
        do
        {
          v23 = gameswf::Stream::readU8(a2);
          v24 = *v2;
          v25 = v23;
          v26 = (gameswf::MemBuf::Self *)((char *)*v2 + 1);
          if ( (int)(uintptr_t)(v26) > (int)(uintptr_t)(v2[1]) )
          {
            v33 = *v2;
            v37 = v23;
            v28 = gameswf::MemBuf::capacity(v26, v32);
            gameswf::MemBuf::reserve((gameswf::MemBuf::Self *)v2, v28);
            v25 = v37;
            v24 = v33;
          }
          v27 = v2[2];
          ++v22;
          *v2 = v26;
          *((uint8_t *)v24 + (uint32_t)(uintptr_t)(v27)) = v25;
        }
        while ( v22 != v40 );
      }
    }
  }
  while ( v9 != 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ActionBuffer::enumerate  (binary VA: 0x106cfd0)
// Original: gameswf::ActionBuffer::enumerate
// ----------------------------------------------------------------------------
int gameswf::ActionBuffer::enumerate(gameswf::ActionBuffer::Self *self, gameswf::ASEnvironment::Self *a2)
{
  int v2;
  int v3;
  char *v4;
  gameswf::ASValue::Self *v5;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[24];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v11)) > _g4_s3 ? (8u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v12)) > _g4_s4 ? (20u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);

  v12[0] = 0;
  v12[1] = 0;
  gameswf::ASValue::setObject((gameswf::ASValue::Self *)v12, nullptr);
  v2 = *((uint32_t *)self + 1);
  v8 = *((uint32_t *)self + 2);
  v3 = v2 + 1;
  if ( v2 + 1 <= v8 || *((uint32_t *)self + 3) != 0 )
  {
    v4 = *(char **)self;
  }
  else
  {
    v7 = v3 + (v3 >> 1);
    *((uint32_t *)self + 2) = v7;
    if ( v7 != 0 )
    {
      v11 = v2 + 1;
      if ( *(uint32_t *)self != 0 )
        v4 = (char *)gameswf::realloc_internal(*(gameswf::Self **)self, 12 * v7, 12 * v8);
      else
        v4 = (char *)gameswf::malloc_internal(12 * v7);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v4);
      v2 = *((uint32_t *)self + 1);
      v3 = v11;
    }
    else
    {
      if ( *(uint32_t *)self != 0 )
      {
        v10 = v2 + 1;
        gameswf::free_internal(*(gameswf::Self **)self);
        v2 = *((uint32_t *)self + 1);
        v3 = v10;
      }
      *(uint32_t *)self = 0;
      v4 = nullptr;
    }
  }
  v5 = (gameswf::ASValue::Self *)&v4[12 * v2];
  if ( v5 != nullptr )
  {
    *(uint8_t *)v5 = 0;
    *((uint8_t *)v5 + 1) = 0;
    v9 = v3;
    gameswf::ASValue::opAssign(v5, (const gameswf::ASValue::Self *)v12);
    v3 = v9;
  }
  *((uint32_t *)self + 1) = v3;
  if ( a2 != nullptr )
    G4_VCALL<void>(a2, 68, self);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ActionBuffer::opAssign  (binary VA: 0x106d170)
// Original: gameswf::ActionBuffer::operator=
// ----------------------------------------------------------------------------
gameswf::MemBuf::Self * gameswf::ActionBuffer::opAssign(gameswf::MemBuf::Self **self, gameswf::MemBuf::Self **a2)
{
  gameswf::MemBuf::Self *v2;
  gameswf::MemBuf::Self *v3;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  gameswf::Self *v9;
  gameswf::MemBuf::Self *result;
  gameswf::MemBuf::Self *v11;

  v2 = *a2;
  v3 = *self;
  if ( *a2 != *self )
  {
    if ( v3 != nullptr && (*((uint32_t *)v3 + 4))-- == 1 )
    {
      v5 = *((uint32_t *)v3 + 6);
      if ( v5 < 0 )
      {
        v6 = 4 * v5;
        v11 = v2;
        do
        {
          v7 = (uint32_t *)(*((uint32_t *)v3 + 5) + v6);
          if ( v7 != nullptr )
            *v7 = 0;
          v6 += 4;
          ++v5;
        }
        while ( v5 != 0 );
        v2 = v11;
      }
      v8 = *((uint32_t *)v3 + 8);
      *((uint32_t *)v3 + 6) = 0;
      if ( v8 == 0 )
      {
        v9 = *((gameswf::Self **)v3 + 5);
        *((uint32_t *)v3 + 7) = 0;
        if ( v9 != nullptr )
          gameswf::free_internal(v9);
        *((uint32_t *)v3 + 5) = 0;
      }
      gameswf::MemBuf::Destroy(v3);
      gameswf::free_internal(v3);
    }
    *self = v2;
    if ( v2 != nullptr )
      ++*((uint32_t *)v2 + 4);
  }
  *(self + 1) = a2[1];
  result = a2[2];
  *(self + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ActionBuffer::execute  (binary VA: 0x106d270)
// Original: gameswf::ActionBuffer::execute
// ----------------------------------------------------------------------------
void gameswf::ActionBuffer::execute()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ActionBuffer::execute_ea106d280  (binary VA: 0x106d280)
// Original: gameswf::ActionBuffer::execute
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ActionBuffer::execute_ea106d280()
{
  int v0;
  gameswf::Self **v1;
  int v2;
  gameswf::RefCounted::Self *v3;
  gameswf::Self *result;
  int v5;
  uint32_t *v6;
  typedef gameswf::Self **_g4_t_v7;
  typedef gameswf::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef gameswf::Self *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = nullptr;
  gameswf::ActionBuffer::execute();
  v0 = v9;
  v1 = &v8;
  if ( v9 <= 0 )
  {
    if ( v9 < 0 )
    {
      v5 = 8 * v9;
      do
      {
        v6 = (uint32_t *)((char *)v8 + v5);
        if ( (gameswf::Self *)((char *)v8 + v5) != nullptr )
        {
          *v6 = 0;
          v6[1] = 0;
        }
        v5 += 8;
        ++v0;
      }
      while ( v0 != 0 );
    }
  }
  else
  {
    v2 = 0;
    do
    {
      v3 = *((gameswf::RefCounted::Self **)*v1 + 2 * v2);
      if ( v3 != nullptr )
      {
        v7 = v1;
        gameswf::RefCounted::dropRef(v3);
        v1 = v7;
      }
      ++v2;
    }
    while ( v2 != v0 );
  }
  result = v11;
  v9 = 0;
  if ( v11 == nullptr )
  {
    result = v8;
    v10 = 0;
    if ( v8 != nullptr )
      return (gameswf::Self *)gameswf::free_internal(v8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ActionBuffer::process_decl_dict  (binary VA: 0x106d730)
// Original: gameswf::ActionBuffer::process_decl_dict
// ----------------------------------------------------------------------------
gameswf::ActionBuffer::Self * gameswf::ActionBuffer::process_decl_dict(char **self, char *a2, int a3, gameswf::Player::Self *a4)
{
  gameswf::ActionBuffer::Self *result;
  int v5;
  char *v6;
  int v7;
  uint32_t *v8;
  char *v9;
  char *v10;
  int v11;
  int v12;
  const char *v13;
  gameswf::Self *v14;
  int v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  int v19;
  gameswf::Self *v20;
  void *v21;
  typedef const char *_g4_t_v22;
  typedef size_t _g4_t_v23;
  typedef gameswf::ActionBuffer::Self **_g4_t_v24;
  typedef int _g4_t_v25;
  typedef gameswf::ActionBuffer::Self **_g4_t_v26;
  typedef int _g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef gameswf::PermanentStringCache::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef const char *_g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef int16_t _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef gameswf::Self *_g4_t_v44;
  typedef int16_t _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v23)) > _g4_s1 ? (24u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v24)) > _g4_s2 ? (24u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v25)) > _g4_s3 ? (32u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v27)) > _g4_s5 ? (32u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v28)) > _g4_s6 ? (36u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v29)) > _g4_s7 ? (40u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v30)) > _g4_s8 ? (40u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v31)) > _g4_s9 ? (44u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v32)) > _g4_s10 ? (44u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v33)) > _g4_s11 ? (48u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v34)) > _g4_s12 ? (52u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v35)) > _g4_s13 ? (64u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (65u + sizeof(_g4_t_v36)) > _g4_s14 ? (65u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v37)) > _g4_s15 ? (72u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v38)) > _g4_s16 ? (76u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v39)) > _g4_s17 ? (80u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (82u + sizeof(_g4_t_v40)) > _g4_s18 ? (82u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (83u + sizeof(_g4_t_v41)) > _g4_s19 ? (83u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v42)) > _g4_s20 ? (96u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (97u + sizeof(_g4_t_v43)) > _g4_s21 ? (97u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v44)) > _g4_s22 ? (108u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v45)) > _g4_s23 ? (112u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (114u + sizeof(_g4_t_v46)) > _g4_s24 ? (114u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (115u + sizeof(_g4_t_v47)) > _g4_s25 ? (115u + sizeof(_g4_t_v47)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 65u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 82u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 83u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 97u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 108u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 114u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 115u);

  result = (gameswf::ActionBuffer::Self *)self;
  v5 = a3;
  v34 = *self;
  v6 = *(self + 1);
  if ( v6 != a2 )
  {
    if ( v6 != (char *)-1 )
      return (gameswf::ActionBuffer::Self *)gameswf::logError(
                                        (gameswf::Self *)"error: process_decl_dict(%d, %d): decl_dict was already processed at %d\n",
                                        a2,
                                        a3,
                                        *(self + 1));
    *(self + 1) = a2;
    v33 = *(uint16_t *)&a2[*((uint32_t *)v34 + 2) + 3];
    v7 = *((uint32_t *)v34 + 6);
    if ( *(uint16_t *)&a2[*((uint32_t *)v34 + 2) + 3] != 0 )
    {
      v32 = *((uint32_t *)v34 + 7);
      if ( v33 > v32 && *((uint32_t *)v34 + 8) == 0 )
      {
        v19 = v33 + (v33 >> 1);
        *((uint32_t *)v34 + 7) = v19;
        if ( v19 != 0 )
        {
          if ( *((uint32_t *)v34 + 5) != 0 )
            v21 = gameswf::realloc_internal(*((gameswf::Self **)v34 + 5), 4 * v19, 4 * v32);
          else
            v21 = (void *)gameswf::malloc_internal(4 * v19);
          *((uint32_t *)v34 + 5) = (uint32_t)(uintptr_t)(v21);
          v5 = a3;
        }
        else
        {
          v20 = *((gameswf::Self **)v34 + 5);
          if ( v20 != nullptr )
          {
            gameswf::free_internal(v20);
            v5 = a3;
          }
          *((uint32_t *)v34 + 5) = 0;
        }
      }
    }
    result = (gameswf::ActionBuffer::Self *)(4 * v7);
    if ( v33 > v7 )
    {
      v29 = v5;
      do
      {
        v8 = (uint32_t *)((char *)result + *((uint32_t *)v34 + 5));
        if ( v8 != nullptr )
          *v8 = 0;
        ++v7;
        result = (gameswf::ActionBuffer::Self *)((char *)result + 4);
      }
      while ( v7 != v33 );
      v5 = v29;
    }
    *((uint32_t *)v34 + 6) = v33;
    if ( v33 > 0 )
    {
      v31 = 0;
      v9 = a2 + 2;
      v10 = (char *)v5;
      v30 = (gameswf::PermanentStringCache::Self *)((gameswf::Player::Self *)((char *)a4 + 48));
      v11 = *((uint32_t *)v34 + 2);
      do
      {
        v35 = 1;
        v36 = 0;
        v12 = *((uint32_t *)v34 + 5) + 4 * v31;
        v13 = &v9[v11 + 3];
        if ( v13 != nullptr )
        {
          v25 = *((uint32_t *)v34 + 5) + 4 * v31;
          v28 = (gameswf::Self *)v13;
          v23 = strlen(v13);
          gameswf::String::resize((gameswf::String::Self *)&v35, v23);
          v14 = (gameswf::Self *)&v36;
          if ( v35 == -1 )
            v14 = v38;
          gameswf::Strcpy_s(v14, (char *)(v23 + 1), v28);
          v12 = v25;
        }
        v26 = (gameswf::ActionBuffer::Self **)v12;
        v39 = -1;
        v40 = 127;
        v41 |= 1u;
        result = (gameswf::ActionBuffer::Self *)gameswf::PermanentStringCache::get(v30, (const gameswf::String::Self *)&v35);
        *v26 = result;
        if ( v35 == -1 && (v41 & 1) != 0 )
        {
          v22 = v37;
          result = (gameswf::ActionBuffer::Self *)gameswf::free_internal(v38);
        }
        v11 = *((uint32_t *)v34 + 2);
        if ( v9[v11 + 3] != 0 )
        {
          if ( (int)(uintptr_t)(v10) <= (int)(uintptr_t)(v9) )
          {
LABEL_26:
            result = (gameswf::ActionBuffer::Self *)gameswf::logError(
                                                (gameswf::Self *)"error: action buffer dict length exceeded\n",
                                                v22);
            if ( v33 > v31 )
            {
              v15 = 4 * v31;
              v16 = v31;
              do
              {
                v42 = 1;
                v43 = 0;
                v27 = v16;
                v24 = (gameswf::ActionBuffer::Self **)(v15 + *((uint32_t *)v34 + 5));
                gameswf::String::resize((gameswf::String::Self *)&v42, 9);
                v17 = (gameswf::Self *)&v43;
                if ( v42 == -1 )
                  v17 = v44;
                gameswf::Strcpy_s(v17, &byte_9[1], (gameswf::Self *)"<invalid>");
                v45 = -1;
                v46 = 127;
                v47 |= 1u;
                result = (gameswf::ActionBuffer::Self *)gameswf::PermanentStringCache::get(v30, (const gameswf::String::Self *)&v42);
                *v24 = result;
                v18 = v27;
                if ( v42 == -1 && (v47 & 1) != 0 )
                {
                  result = (gameswf::ActionBuffer::Self *)gameswf::free_internal(v44);
                  v18 = v27;
                }
                v16 = v18 + 1;
                v15 += 4;
              }
              while ( v16 != v33 );
            }
            return result;
          }
          while ( 1 )
          {
            ++v9;
            if ( v9[v11 + 3] == 0 )
              break;
            if ( v9 == v10 )
              goto LABEL_26;
          }
        }
        ++v9;
        ++v31;
      }
      while ( v31 != v33 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ActionBuffer::Destroy  (binary VA: 0x10a4d20)
// Original: gameswf::ActionBuffer::~ActionBuffer
// ----------------------------------------------------------------------------
void gameswf::ActionBuffer::Destroy(gameswf::MemBuf::Self **self)
{
  gameswf::MemBuf::Self *v1;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  gameswf::Self *v7;

  v1 = *self;
  if ( *self != nullptr && (*((uint32_t *)v1 + 4))-- == 1 )
  {
    v3 = *((uint32_t *)v1 + 6);
    if ( v3 < 0 )
    {
      v4 = 4 * v3;
      do
      {
        v5 = (uint32_t *)(*((uint32_t *)v1 + 5) + v4);
        if ( v5 != nullptr )
          *v5 = 0;
        v4 += 4;
        ++v3;
      }
      while ( v3 != 0 );
    }
    v6 = *((uint32_t *)v1 + 8);
    *((uint32_t *)v1 + 6) = 0;
    if ( v6 == 0 )
    {
      v7 = *((gameswf::Self **)v1 + 5);
      *((uint32_t *)v1 + 7) = 0;
      if ( v7 != nullptr )
        gameswf::free_internal(v7);
      *((uint32_t *)v1 + 5) = 0;
    }
    gameswf::MemBuf::Destroy(v1);
    gameswf::free_internal(v1);
  }
}


