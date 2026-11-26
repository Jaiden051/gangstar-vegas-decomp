#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASNativeEventListenerFunction.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASNativeEventListenerFunction.cpp
// Library: gameswf | Module: gameswf_ASNativeEventListenerFunction
// Binary Address Span: 0x109b2c0 .. 0x109c650 (4 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x109b2c0 (size: 1110 bytes)
// Symbol:    _ZN7gameswf29ASNativeEventListenerFunctionclERKNS_12FunctionCallE
// Demangled: gameswf::ASNativeEventListenerFunction::operator()(gameswf::FunctionCall const&)
// ============================================================================
void gameswf::ASNativeEventListenerFunction::opCall(int a1, int a2)
{
  uint32_t *v2;
  int v3;
  gameswf::Character::Self *v4;
  gameswf::Self *v5;
  char v6;
  gameswf::Character::Self *v7;
  int v8;
  gameswf::Self *v9;
  char v10;
  gameswf::Character::Self *v11;
  int v12;
  int v13;
  gameswf::Self *v14;
  int v15;
  char v16;
  int v17;
  gameswf::Self *v18;
  char *v19;
  gameswf::Self *v20;
  int v21;
  unsigned int v22;
  char v23;
  char *v24;
  int v25;
  int v26;
  int v27;
  bool v28;
  typedef gameswf::Character::Self *_g4_t_v29;
  typedef gameswf::Character::Self *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t _g4_t_v35[3];
  typedef gameswf::Self *_g4_t_v36[9];
  typedef gameswf::Self *_g4_t_v37[9];
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef gameswf::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef gameswf::Self **_g4_t_v43;
  typedef gameswf::Self **_g4_t_v44;
  typedef uint32_t _g4_t_v45[8];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v30)) > _g4_s1 ? (12u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v31)) > _g4_s2 ? (16u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v32)) > _g4_s3 ? (20u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v33)) > _g4_s4 ? (24u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v34)) > _g4_s5 ? (28u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v35)) > _g4_s6 ? (48u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v36)) > _g4_s7 ? (60u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v37)) > _g4_s8 ? (96u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (132u + sizeof(_g4_t_v38)) > _g4_s9 ? (132u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (133u + sizeof(_g4_t_v39)) > _g4_s10 ? (133u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (136u + sizeof(_g4_t_v40)) > _g4_s11 ? (136u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v41)) > _g4_s12 ? (144u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (148u + sizeof(_g4_t_v42)) > _g4_s13 ? (148u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (152u + sizeof(_g4_t_v43)) > _g4_s14 ? (152u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (156u + sizeof(_g4_t_v44)) > _g4_s15 ? (156u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (160u + sizeof(_g4_t_v45)) > _g4_s16 ? (160u + sizeof(_g4_t_v45)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 133u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 136u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 144u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 148u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 152u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 156u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 160u);

  if ( *(uint32_t *)(a1 + 44) == 0 )
    return;
  v2 = nullptr;
  v3 = **(uint32_t **)(a2 + 12) + 12 * *(uint32_t *)(a2 + 20);
  if ( *(uint8_t *)v3 == 5 && (v2 = *(uint32_t **)(v3 + 4)) != nullptr )
  {
    if ( G4_VCALL<uint8_t>(v2, 8, 51) == 0 )
      v2 = nullptr;
    v4 = (gameswf::Character::Self *)v2[20];
    if ( v4 == nullptr )
      goto LABEL_39;
  }
  else
  {
    v4 = (gameswf::Character::Self *)v2[20];
    if ( v4 == nullptr )
    {
LABEL_39:
      v7 = nullptr;
      goto LABEL_7;
    }
  }
  v5 = (gameswf::Self *)v2[19];
  if ( *((uint8_t *)v5 + 2) != 0 )
  {
    v29 = v4;
    v6 = G4_VCALL<int>(v4, 8, 1);
    v7 = v29;
    if ( v6 == 0 )
      v7 = nullptr;
  }
  else
  {
    v28 = (*(uint16_t *)v5)-- == 1;
    if ( v28 )
      gameswf::free_internal(v5);
    v2[19] = 0;
    v2[20] = 0;
    v7 = nullptr;
  }
LABEL_7:
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v36, v7);
  v8 = v2[18];
  if ( v8 != 0 )
  {
    v9 = (gameswf::Self *)v2[17];
    if ( *((uint8_t *)v9 + 2) != 0 )
    {
      v30 = (gameswf::Character::Self *)v2[18];
      v10 = (*(int (**)(gameswf::Character::Self *, int))(*(uint32_t *)v8 + 8))(v30, 1);
      v11 = v30;
      if ( v10 == 0 )
        v11 = nullptr;
      goto LABEL_11;
    }
    v28 = (*(uint16_t *)v9)-- == 1;
    if ( v28 )
      gameswf::free_internal(v9);
    v2[17] = 0;
    v2[18] = 0;
  }
  v11 = nullptr;
LABEL_11:
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v37, v11);
  v12 = *(uint32_t *)(a2 + 12);
  v13 = *(uint32_t *)(v12 + 212);
  v33 = *(uint32_t *)(a1 + 48);
  if ( v13 != 0 )
  {
    v14 = *(gameswf::Self **)(v12 + 208);
    if ( *((uint8_t *)v14 + 2) == 0 )
    {
      v28 = (*(uint16_t *)v14)-- == 1;
      if ( v28 )
        gameswf::free_internal(v14);
      *(uint32_t *)(v12 + 208) = 0;
      *(uint32_t *)(v12 + 212) = 0;
      v13 = 0;
    }
  }
  v15 = *(uint32_t *)(v13 + 208);
  LOWORD(v35[0]) = 5;
  v32 = v15;
  v35[1] = (uint32_t)(uintptr_t)(v2);
  gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v2);
  v16 = *((uint8_t *)v2 + 40);
  v38 = 1;
  v39 = 0;
  if ( v16 == -1 )
    v17 = v2[11] - 1;
  else
    v17 = v16 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v38, v17);
  v18 = (gameswf::Self *)((char *)v2 + 41);
  if ( *((uint8_t *)v2 + 40) == 0xFF )
    v18 = (gameswf::Self *)v2[13];
  if ( v38 == -1 )
  {
    v19 = v40;
    v20 = v41;
  }
  else
  {
    v19 = (char *)v38;
    v20 = (gameswf::Self *)&v39;
  }
  gameswf::Strcpy_s(v20, v19, v18);
  v34 = v2[14];
  if ( (uint8_t *)(v34 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v23 = *((uint8_t *)v2 + 40);
    if ( v23 == -1 )
    {
      v24 = (char *)v2[13];
      v25 = v2[11] - 1;
    }
    else
    {
      v24 = (char *)v2 + 41;
      v25 = v23 - 1;
    }
    v21 = 5381;
    if ( v25 > 0 )
    {
      v31 = v2;
      do
      {
        --v25;
        v26 = 33 * v21;
        v27 = (uint8_t)v24[v25] + 32;
        if ( (uint8_t)(v24[v25] - 65) > 0x19u )
          v27 = (uint8_t)v24[v25];
        v21 = v26 ^ v27;
      }
      while ( v25 != 0 );
      v2 = v31;
      v21 = v21 << 9 >> 9;
    }
    v2[14] = v21 & 0x7FFFFF | v34 & 0xFF800000;
  }
  else
  {
    v21 = v34 << 9 >> 9;
  }
  v22 = v21 & 0x7FFFFF | v42 & 0xFF800000;
  v44 = v37;
  LOWORD(v42) = v21;
  BYTE2(v42) = BYTE2(v22) & 0x7F;
  HIBYTE(v42) = HIBYTE(v22) | 1;
  v43 = v36;
  LOWORD(v45[0]) = 0;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v45, (const gameswf::ASValue::Self *)v35);
  v45[3] = v32;
  v45[4] = v33;
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v35);
  (*(void (**)(char *))(a1 + 44))(&v38);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v45);
  if ( v38 == -1 && (v42 & 0x1000000) != 0 )
    gameswf::free_internal(v41);
  gameswf::CharacterHandle::Destroy(v37);
  gameswf::CharacterHandle::Destroy(v36);
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASNativeEventListenerFunction::is  (binary VA: 0x109c4f0)
// Original: gameswf::ASNativeEventListenerFunction::is
// ----------------------------------------------------------------------------
bool gameswf::ASNativeEventListenerFunction::is(gameswf::ASNativeEventListenerFunction::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 11 && a2 != 6 && a2 != 5 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNativeEventListenerFunction::Destroy  (binary VA: 0x109c5f0)
// Original: gameswf::ASNativeEventListenerFunction::~ASNativeEventListenerFunction
// ----------------------------------------------------------------------------
void gameswf::ASNativeEventListenerFunction::Destroy(gameswf::ASNativeEventListenerFunction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNativeEventListenerFunction::Destroy_ea109c650  (binary VA: 0x109c650)
// Original: gameswf::ASNativeEventListenerFunction::~ASNativeEventListenerFunction
// ----------------------------------------------------------------------------
void gameswf::ASNativeEventListenerFunction::Destroy_ea109c650(gameswf::ASNativeEventListenerFunction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


