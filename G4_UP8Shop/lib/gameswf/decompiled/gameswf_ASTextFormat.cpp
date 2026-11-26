#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASTextFormat.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASTextFormat.cpp
// Library: gameswf | Module: gameswf_ASTextFormat
// Binary Address Span: 0x1149780 .. 0x1149b40 (5 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1149780 (size: 67 bytes)
// Symbol:    _ZN7gameswf12ASTextFormatC2EPNS_6PlayerE
// Demangled: gameswf::ASTextFormat::ASTextFormat(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf12ASTextFormatC1EPNS_6PlayerE'
void (**gameswf::ASTextFormat::ASTextFormat(
        gameswf::ASTextFormat::Self *self,
        gameswf::Player::Self *a2))(gameswf::ASTextFormat::Self * self)
{
  gameswf::ASObject::ASObject(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090288);
  return (void (**)(gameswf::ASTextFormat::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2090288));
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASTextFormat::ctor  (binary VA: 0x11497d0)
// Original: gameswf::ASTextFormat::ctor
// ----------------------------------------------------------------------------
int gameswf::ASTextFormat::ctor(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  int StandardMemberID;
  int *v12;
  int v13;
  int v14;
  char *v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int result;
  typedef gameswf::ASTextFormat::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef gameswf::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v23)) > _g4_s1 ? (16u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v24)) > _g4_s2 ? (20u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v25)) > _g4_s3 ? (24u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v27)) > _g4_s5 ? (33u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v28)) > _g4_s6 ? (36u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v29)) > _g4_s7 ? (44u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v30)) > _g4_s8 ? (48u + sizeof(_g4_t_v30)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 33u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);

  v1 = *(uint32_t *)(a1 + 12);
  v2 = *(gameswf::Player::Self **)(v1 + 212);
  if ( v2 != nullptr )
  {
    v3 = *(gameswf::Self **)(v1 + 208);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
      *(uint32_t *)(v1 + 208) = 0;
      *(uint32_t *)(v1 + 212) = 0;
      v2 = nullptr;
    }
  }
  v22 = (gameswf::ASTextFormat::Self *)opNew(0x28u);
  gameswf::ASTextFormat::ASTextFormat(v22, v2);
  if ( v22 != nullptr )
    gameswf::RefCounted::addRef(v22);
  v4 = a1;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v25 = 0;
    v4 = a1;
    do
    {
      v12 = *(int **)(v4 + 12);
      v13 = *(uint32_t *)(v4 + 20) - v25;
      v14 = *v12;
      v26 = 1;
      v27 = 0;
      v24 = v14 + 12 * v13;
      v15 = (char *)&unk_2115620 + 20 * v25;
      if ( *v15 == -1 )
        v5 = *((uint32_t *)v15 + 1) - 1;
      else
        v5 = *v15 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v26, v5);
      v6 = (gameswf::Self *)(v15 + 1);
      if ( *v15 == -1 )
      {
        LOBYTE(v7) = v26;
        v6 = *((gameswf::Self **)v15 + 3);
        if ( v26 == -1 )
        {
LABEL_31:
          v7 = v28;
          v8 = v29;
          goto LABEL_11;
        }
      }
      else
      {
        LOBYTE(v7) = v26;
        if ( v26 == -1 )
          goto LABEL_31;
      }
      v7 = (char *)(char)(uintptr_t)v7;
      v8 = (gameswf::Self *)&v27;
LABEL_11:
      gameswf::Strcpy_s(v8, v7, v6);
      v23 = *((uint32_t *)v15 + 4);
      if ( (uint8_t *)(v23 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *v15 == -1 )
        {
          v16 = *((char **)v15 + 3);
          v17 = *((uint32_t *)v15 + 1) - 1;
        }
        else
        {
          v16 = v15 + 1;
          v17 = *v15 - 1;
        }
        v9 = 5381;
        if ( v17 > 0 )
        {
          do
          {
            --v17;
            v18 = 33 * v9;
            v19 = (uint8_t)v16[v17] + 32;
            if ( (uint8_t)(v16[v17] - 65) > 0x19u )
              v19 = (uint8_t)v16[v17];
            v9 = v18 ^ v19;
          }
          while ( v17 != 0 );
          v15 = (char *)&unk_2115620 + 20 * v25;
          v9 = v9 << 9 >> 9;
        }
        *((uint32_t *)v15 + 4) = v9 & 0x7FFFFF | v23 & 0xFF800000;
      }
      else
      {
        v9 = v23 << 9 >> 9;
      }
      v10 = v9 & 0x7FFFFF | v30 & 0xFF800000;
      LOWORD(v30) = v9;
      BYTE2(v30) = BYTE2(v10) & 0x7F;
      HIBYTE(v30) = HIBYTE(v10) | 1;
      StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v26);
      if ( StandardMemberID == -1
        || G4_VCALL<uint8_t>(v22, 32, StandardMemberID, v24) == 0 )
      {
        G4_VCALL<void>(v22, 48, &v26, v24);
      }
      if ( v26 == -1 && (v30 & 0x1000000) != 0 )
        gameswf::free_internal(v29);
      v4 = a1;
      ++v25;
    }
    while ( *(uint32_t *)(a1 + 16) > v25 );
  }
  gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)v4, v22);
  result = (int)(uintptr_t)(v22);
  if ( v22 != nullptr )
    return gameswf::RefCounted::dropRef(v22);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextFormat::is  (binary VA: 0x1149af0)
// Original: gameswf::ASTextFormat::is
// ----------------------------------------------------------------------------
bool gameswf::ASTextFormat::is(gameswf::ASTextFormat::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 40 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextFormat::Destroy  (binary VA: 0x1149b10)
// Original: gameswf::ASTextFormat::~ASTextFormat
// ----------------------------------------------------------------------------
void gameswf::ASTextFormat::Destroy(gameswf::ASTextFormat::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090288);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextFormat::Destroy_ea1149b40  (binary VA: 0x1149b40)
// Original: gameswf::ASTextFormat::~ASTextFormat
// ----------------------------------------------------------------------------
void gameswf::ASTextFormat::Destroy_ea1149b40(gameswf::ASTextFormat::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090288);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


