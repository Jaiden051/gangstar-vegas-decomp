#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASTransform.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASTransform::setStandardMember  (binary VA: 0x114bbf0)
// Original: gameswf::ASTransform::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASTransform::setStandardMember(gameswf::Self **a1, int a2, gameswf::ASValue::Self *a3)
{
  int v3;
  uint32_t *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  gameswf::Character::Self *v10;
  gameswf::Self *v11;
  bool v12;
  uint32_t *v13;
  gameswf::Self *v14;
  gameswf::Self *v15;
  int v16;
  int v17;
  int v18;
  uint16_t *v19;
  uint16_t *v20;
  int v21;
  int v22;
  uint16_t *v23;
  uint16_t *v24;
  int v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef gameswf::Self *_g4_t_v31;
  typedef int16_t _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef gameswf::Self *_g4_t_v37;
  typedef int16_t _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (17u + sizeof(_g4_t_v30)) > _g4_s4 ? (17u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v31)) > _g4_s5 ? (28u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v32)) > _g4_s6 ? (32u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (34u + sizeof(_g4_t_v33)) > _g4_s7 ? (34u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (35u + sizeof(_g4_t_v34)) > _g4_s8 ? (35u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v35)) > _g4_s9 ? (48u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (49u + sizeof(_g4_t_v36)) > _g4_s10 ? (49u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v37)) > _g4_s11 ? (60u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v38)) > _g4_s12 ? (64u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (66u + sizeof(_g4_t_v39)) > _g4_s13 ? (66u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (67u + sizeof(_g4_t_v40)) > _g4_s14 ? (67u + sizeof(_g4_t_v40)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 17u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 34u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 35u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 49u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 66u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 67u);

  switch ( a2 )
  {
    case '+':
      v3 = 1;
      if ( *(uint8_t *)a3 != 5 )
        return v3;
      v5 = *((uint32_t **)a3 + 1);
      if ( v5 == nullptr || G4_VCALL<uint8_t>(v5, 8, 30) == 0 )
        return v3;
      v29 = 1;
      v30 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v29, 6);
      v6 = (gameswf::Self *)&v30;
      if ( v29 == -1 )
        v6 = v31;
      gameswf::Strcpy_s(v6, (char *)&loc_6 + 1, (gameswf::Self *)"matrix");
      v32 = -1;
      v33 = 127;
      v34 |= 1u;
      gameswf::ASObject::setMemberByName((gameswf::ASObject::Self *)a1, (const gameswf::StringI::Self *)&v29, a3);
      if ( v29 == -1 && (v34 & 1) != 0 )
        gameswf::free_internal(v31);
      v28 = a1[11];
      if ( v28 != nullptr )
      {
        v7 = a1[10];
        if ( *((uint8_t *)v7 + 2) == 0 )
        {
          v12 = (*(uint16_t *)v7)-- == 1;
          if ( v12 )
            gameswf::free_internal(v7);
          v28 = nullptr;
          a1[10] = nullptr;
          a1[11] = nullptr;
        }
      }
      v8 = *((uint32_t *)v28 + 19);
      if ( v8 == 0 )
      {
        v18 = opNew(0x94u);
        v19 = (uint16_t *)(v18 + 32);
        v8 = v18;
        *(uint32_t *)v18 = 1065353216;
        *(uint32_t *)(v18 + 8) = 1065353216;
        *(uint32_t *)(v18 + 16) = 1065353216;
        *(uint32_t *)(v18 + 24) = 1065353216;
        *(uint32_t *)(v18 + 4) = 0;
        *(uint32_t *)(v18 + 12) = 0;
        *(uint32_t *)(v18 + 20) = 0;
        *(uint32_t *)(v18 + 28) = 0;
        v26 = 24;
        if ( ((v18 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v18 + 32) = 0;
          v19 = (uint16_t *)(v18 + 33);
          v26 = 23;
        }
        if ( ((uint8_t)(uintptr_t)v19 & 2) != 0 )
        {
          *v19++ = 0;
          v26 -= 2;
        }
        memset(v19, 0, 4 * (v26 >> 2));
        v20 = &v19[2 * (v26 >> 2)];
        if ( (v26 & 2) != 0 )
          *v20++ = 0;
        if ( (v26 & 1) != 0 )
          *(uint8_t *)v20 = 0;
        v21 = *(uint32_t *)(v18 + 92);
        *(uint32_t *)(v8 + 32) = 1065353216;
        v21 |= 0x7FFFFFu;
        *(uint32_t *)(v8 + 48) = 1065353216;
        *(uint32_t *)(v8 + 92) = v21;
        *(uint32_t *)(v8 + 56) = 0;
        *(uint8_t *)(v8 + 94) = BYTE2(v21) & 0x7F;
        *(uint8_t *)(v8 + 95) = HIBYTE(v21) | 1;
        *(uint32_t *)(v8 + 60) = 0;
        *(uint32_t *)(v8 + 64) = 0;
        *(uint32_t *)(v8 + 68) = 0;
        *(uint32_t *)(v8 + 72) = 0;
        *(uint8_t *)(v8 + 76) = 1;
        *(uint8_t *)(v8 + 77) = 0;
        *(uint8_t *)(v8 + 96) = 0;
        *(uint8_t *)(v8 + 97) = 0;
        *(uint8_t *)(v8 + 98) = 0;
        *(uint32_t *)(v8 + 100) = 0;
        *(uint32_t *)(v8 + 104) = 1065353216;
        *(uint32_t *)(v8 + 108) = 0;
        *(uint32_t *)(v8 + 112) = 1065353216;
        *(uint32_t *)(v8 + 116) = 0;
        *(uint32_t *)(v8 + 120) = 0;
        *(uint32_t *)(v8 + 124) = 0;
        *(uint32_t *)(v8 + 128) = 0;
        *(uint32_t *)(v8 + 132) = 0;
        *(uint32_t *)(v8 + 136) = 0;
        *(uint32_t *)(v8 + 140) = 0;
        *(uint32_t *)(v8 + 144) = 0;
        *((uint32_t *)v28 + 19) = v8;
      }
      v3 = 1;
      *(uint32_t *)(v8 + 32) = v5[10];
      *(uint32_t *)(v8 + 36) = v5[11];
      *(uint32_t *)(v8 + 40) = v5[12];
      *(uint32_t *)(v8 + 44) = v5[13];
      *(uint32_t *)(v8 + 48) = v5[14];
      *(uint32_t *)(v8 + 52) = v5[15];
      v9 = *((uint32_t *)v28 + 19);
      *((uint8_t *)v28 + 145) = 1;
      *((uint8_t *)v28 + 147) = 1;
      *((uint32_t *)v28 + 17) = v9 + 32;
      v10 = *((gameswf::Character::Self **)v28 + 14);
      if ( v10 == nullptr )
        return v3;
      v11 = *((gameswf::Self **)v28 + 13);
      if ( *((uint8_t *)v11 + 2) != 0 )
        goto LABEL_34;
      goto LABEL_19;
    case ',':
    case '.':
      return 1;
    case '-':
      v3 = 1;
      if ( *(uint8_t *)a3 != 5 )
        return v3;
      v13 = *((uint32_t **)a3 + 1);
      if ( v13 == nullptr || G4_VCALL<uint8_t>(v13, 8, 32) == 0 )
        return v3;
      v35 = 1;
      v36 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v35, 14);
      v14 = (gameswf::Self *)&v36;
      if ( v35 == -1 )
        v14 = v37;
      gameswf::Strcpy_s(v14, &byte_9[6], (gameswf::Self *)"colorTransform");
      v38 = -1;
      v39 = 127;
      v40 |= 1u;
      gameswf::ASObject::setMemberByName((gameswf::ASObject::Self *)a1, (const gameswf::StringI::Self *)&v35, a3);
      if ( v35 == -1 && (v40 & 1) != 0 )
        gameswf::free_internal(v37);
      v28 = a1[11];
      if ( v28 != nullptr )
      {
        v15 = a1[10];
        if ( *((uint8_t *)v15 + 2) == 0 )
        {
          v12 = (*(uint16_t *)v15)-- == 1;
          if ( v12 )
            gameswf::free_internal(v15);
          v28 = nullptr;
          a1[10] = nullptr;
          a1[11] = nullptr;
        }
      }
      v16 = *((uint32_t *)v28 + 19);
      if ( v16 == 0 )
      {
        v22 = opNew(0x94u);
        v23 = (uint16_t *)(v22 + 32);
        v16 = v22;
        *(uint32_t *)v22 = 1065353216;
        *(uint32_t *)(v22 + 8) = 1065353216;
        *(uint32_t *)(v22 + 16) = 1065353216;
        *(uint32_t *)(v22 + 24) = 1065353216;
        *(uint32_t *)(v22 + 4) = 0;
        *(uint32_t *)(v22 + 12) = 0;
        *(uint32_t *)(v22 + 20) = 0;
        *(uint32_t *)(v22 + 28) = 0;
        v27 = 24;
        if ( ((v22 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v22 + 32) = 0;
          v23 = (uint16_t *)(v22 + 33);
          v27 = 23;
        }
        if ( ((uint8_t)(uintptr_t)v23 & 2) != 0 )
        {
          *v23++ = 0;
          v27 -= 2;
        }
        memset(v23, 0, 4 * (v27 >> 2));
        v24 = &v23[2 * (v27 >> 2)];
        if ( (v27 & 2) != 0 )
          *v24++ = 0;
        if ( (v27 & 1) != 0 )
          *(uint8_t *)v24 = 0;
        v25 = *(uint32_t *)(v22 + 92);
        *(uint32_t *)(v16 + 32) = 1065353216;
        v25 |= 0x7FFFFFu;
        *(uint32_t *)(v16 + 48) = 1065353216;
        *(uint32_t *)(v16 + 92) = v25;
        *(uint32_t *)(v16 + 56) = 0;
        *(uint8_t *)(v16 + 94) = BYTE2(v25) & 0x7F;
        *(uint8_t *)(v16 + 95) = HIBYTE(v25) | 1;
        *(uint32_t *)(v16 + 60) = 0;
        *(uint32_t *)(v16 + 64) = 0;
        *(uint32_t *)(v16 + 68) = 0;
        *(uint32_t *)(v16 + 72) = 0;
        *(uint8_t *)(v16 + 76) = 1;
        *(uint8_t *)(v16 + 77) = 0;
        *(uint8_t *)(v16 + 96) = 0;
        *(uint8_t *)(v16 + 97) = 0;
        *(uint8_t *)(v16 + 98) = 0;
        *(uint32_t *)(v16 + 100) = 0;
        *(uint32_t *)(v16 + 104) = 1065353216;
        *(uint32_t *)(v16 + 108) = 0;
        *(uint32_t *)(v16 + 112) = 1065353216;
        *(uint32_t *)(v16 + 116) = 0;
        *(uint32_t *)(v16 + 120) = 0;
        *(uint32_t *)(v16 + 124) = 0;
        *(uint32_t *)(v16 + 128) = 0;
        *(uint32_t *)(v16 + 132) = 0;
        *(uint32_t *)(v16 + 136) = 0;
        *(uint32_t *)(v16 + 140) = 0;
        *(uint32_t *)(v16 + 144) = 0;
        *((uint32_t *)v28 + 19) = v16;
      }
      v3 = 1;
      *(uint32_t *)v16 = v13[10];
      *(uint32_t *)(v16 + 4) = v13[11];
      *(uint32_t *)(v16 + 8) = v13[12];
      *(uint32_t *)(v16 + 12) = v13[13];
      *(uint32_t *)(v16 + 16) = v13[14];
      *(uint32_t *)(v16 + 20) = v13[15];
      *(uint32_t *)(v16 + 24) = v13[16];
      *(uint32_t *)(v16 + 28) = v13[17];
      v17 = *((uint32_t *)v28 + 19);
      *((uint8_t *)v28 + 146) = 1;
      *((uint32_t *)v28 + 16) = v17;
      v10 = *((gameswf::Character::Self **)v28 + 14);
      if ( v10 == nullptr )
        return v3;
      v11 = *((gameswf::Self **)v28 + 13);
      if ( *((uint8_t *)v11 + 2) == 0 )
      {
LABEL_19:
        v12 = (*(uint16_t *)v11)-- == 1;
        if ( v12 )
          gameswf::free_internal(v11);
        *((uint32_t *)v28 + 13) = 0;
        *((uint32_t *)v28 + 14) = 0;
        return 1;
      }
LABEL_34:
      gameswf::Character::invalidateBitmapCache(v10);
      return 1;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTransform::getStandardMember  (binary VA: 0x114c320)
// Original: gameswf::ASTransform::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASTransform::getStandardMember(gameswf::Character::Self **a1, int a2, gameswf::ASValue::Self *a3)
{
  int v3;
  gameswf::Self *v5;
  gameswf::Self *v6;
  char MemberByName;
  int v8;
  char v9;
  uint32_t *v10;
  gameswf::Character::Self *v11;
  gameswf::Self *v12;
  char *WorldCxForm;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef gameswf::Self *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef gameswf::Self *_g4_t_v26;
  typedef int16_t _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (17u + sizeof(_g4_t_v19)) > _g4_s4 ? (17u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (34u + sizeof(_g4_t_v22)) > _g4_s7 ? (34u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (35u + sizeof(_g4_t_v23)) > _g4_s8 ? (35u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v24)) > _g4_s9 ? (48u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (49u + sizeof(_g4_t_v25)) > _g4_s10 ? (49u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v26)) > _g4_s11 ? (60u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v27)) > _g4_s12 ? (64u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (66u + sizeof(_g4_t_v28)) > _g4_s13 ? (66u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (67u + sizeof(_g4_t_v29)) > _g4_s14 ? (67u + sizeof(_g4_t_v29)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 17u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 34u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 35u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 49u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 66u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 67u);

  if ( a2 == 44 )
  {
    v24 = 1;
    v25 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v24, 18);
    v5 = (gameswf::Self *)&v25;
    if ( v24 == -1 )
      v5 = v26;
    gameswf::Strcpy_s(v5, (char *)&word_12 + 1, (gameswf::Self *)"concatenatedMatrix");
    v27 = -1;
    v3 = 1;
    v28 = 127;
    v29 |= 1u;
    gameswf::ASObject::getMemberByName((gameswf::ASObject::Self *)a1, (const gameswf::StringI::Self *)&v24, a3);
    if ( v24 == -1 && (v29 & 1) != 0 )
      gameswf::free_internal(v26);
    return v3;
  }
  v3 = 0;
  if ( a2 != 46 )
    return v3;
  v18 = 1;
  v19 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v18, 26);
  v6 = (gameswf::Self *)&v19;
  if ( v18 == -1 )
    v6 = v20;
  gameswf::Strcpy_s(v6, (char *)&dword_18 + 3, (gameswf::Self *)"concatenatedColorTransform");
  v21 = -1;
  v22 = 127;
  v23 |= 1u;
  MemberByName = gameswf::ASObject::getMemberByName((gameswf::ASObject::Self *)a1, (const gameswf::StringI::Self *)&v18, a3);
  if ( v18 == -1 && (v23 & 1) != 0 )
  {
    v17 = MemberByName;
    gameswf::free_internal(v20);
    MemberByName = v17;
  }
  v3 = 1;
  if ( MemberByName == 0 )
    return v3;
  if ( *(uint8_t *)a3 != 5 )
    return v3;
  v8 = *((uint32_t *)a3 + 1);
  if ( v8 == 0 )
    return v3;
  v15 = *((uint32_t **)a3 + 1);
  v9 = G4_VCALL<int>(v8, 8, 32);
  v10 = v15;
  if ( v9 == 0 )
    return v3;
  v11 = a1[11];
  if ( v11 != nullptr )
  {
    v12 = (gameswf::Self *)(a1[10]);
    if ( *((uint8_t *)v12 + 2) == 0 )
    {
      if ( (*(uint16_t *)v12)-- == 1 )
      {
        gameswf::free_internal(v12);
        v10 = v15;
      }
      a1[10] = nullptr;
      a1[11] = nullptr;
      v11 = nullptr;
    }
  }
  v16 = v10;
  WorldCxForm = gameswf::Character::getWorldCxForm(v11);
  v16[10] = *(uint32_t *)WorldCxForm;
  v16[11] = *((uint32_t *)WorldCxForm + 1);
  v16[12] = *((uint32_t *)WorldCxForm + 2);
  v16[13] = *((uint32_t *)WorldCxForm + 3);
  v16[14] = *((uint32_t *)WorldCxForm + 4);
  v16[15] = *((uint32_t *)WorldCxForm + 5);
  v16[16] = *((uint32_t *)WorldCxForm + 6);
  v16[17] = *((uint32_t *)WorldCxForm + 7);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTransform::newOp  (binary VA: 0x114c5c0)
// Original: gameswf::ASTransform::newOp
// ----------------------------------------------------------------------------
int gameswf::ASTransform::newOp()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTransform::init  (binary VA: 0x114c5d0)
// Original: gameswf::ASTransform::init
// ----------------------------------------------------------------------------
void gameswf::ASTransform::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTransform::init  (binary VA: 0x114c5e0)
// Original: gameswf::ASTransform::init
// ----------------------------------------------------------------------------
int gameswf::ASTransform::init(gameswf::ASTransform::Self *self, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int16_t a19, double a20, int16_t a21, double a22, int16_t a23, double a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int16_t a57, int a58, const gameswf::StringI::Self *a59, gameswf::Self *a60, int a61)
{
  uint8_t STACK[711] = {0};
  int v61;
  gameswf::Self *v62;
  gameswf::RefCounted::Self *ColorTransform;
  gameswf::Self *v64;
  gameswf::Character::Self *v65;
  gameswf::Self *v66;
  char *WorldCxForm;
  gameswf::RefCounted::Self *v68;
  gameswf::Self *v69;
  int v70;
  gameswf::Self *v71;
  gameswf::RefCounted::Self *Matrix;
  gameswf::Self *v73;
  gameswf::Character::Self *v74;
  gameswf::Self *v75;
  char *WorldMatrix;
  gameswf::RefCounted::Self *v77;
  gameswf::Self *v78;
  int v79;
  gameswf::Self *v80;
  int result;
  int v82;
  gameswf::Self *v83;
  gameswf::Self *v84;
  double v85; // xmm0_8
  gameswf::Self *v86;
  int v87;
  gameswf::Self *v88;
  float v89; // xmm0_4
  gameswf::Self *v90;
  unsigned int v91;
  int v92;
  gameswf::Self *v93;
  float v94; // xmm0_4
  gameswf::Self *v95;
  unsigned int v96;
  bool v97;
  typedef const gameswf::CxForm::Self *_g4_t_v98;
  typedef const gameswf::CxForm::Self *_g4_t_v99;
  typedef uint32_t _g4_t_v100[3];
  typedef uint32_t _g4_t_v101[3];
  typedef uint32_t _g4_t_v102[3];
  typedef uint32_t _g4_t_v103[12];
  typedef char _g4_t_v104;
  typedef char _g4_t_v105;
  typedef gameswf::Self *_g4_t_v106;
  typedef int16_t _g4_t_v107;
  typedef char _g4_t_v108;
  typedef char _g4_t_v109;
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef gameswf::Self *_g4_t_v112;
  typedef int16_t _g4_t_v113;
  typedef char _g4_t_v114;
  typedef char _g4_t_v115;
  typedef char _g4_t_v116;
  typedef char _g4_t_v117;
  typedef gameswf::Self *_g4_t_v118;
  typedef int16_t _g4_t_v119;
  typedef char _g4_t_v120;
  typedef char _g4_t_v121;
  typedef char _g4_t_v122;
  typedef char _g4_t_v123;
  typedef gameswf::Self *_g4_t_v124;
  typedef int16_t _g4_t_v125;
  typedef char _g4_t_v126;
  typedef char _g4_t_v127;
  typedef gameswf::ASObject::Self *_g4_t_v128;
  typedef const gameswf::StringI::Self *_g4_t_v129;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (12u + sizeof(_g4_t_v98)) > _g4_s0 ? (12u + sizeof(_g4_t_v98)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v99)) > _g4_s1 ? (12u + sizeof(_g4_t_v99)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v100)) > _g4_s2 ? (48u + sizeof(_g4_t_v100)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v101)) > _g4_s3 ? (60u + sizeof(_g4_t_v101)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v102)) > _g4_s4 ? (72u + sizeof(_g4_t_v102)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v103)) > _g4_s5 ? (84u + sizeof(_g4_t_v103)) : _g4_s5,
    _g4_s7 = (132u + sizeof(_g4_t_v104)) > _g4_s6 ? (132u + sizeof(_g4_t_v104)) : _g4_s6,
    _g4_s8 = (133u + sizeof(_g4_t_v105)) > _g4_s7 ? (133u + sizeof(_g4_t_v105)) : _g4_s7,
    _g4_s9 = (144u + sizeof(_g4_t_v106)) > _g4_s8 ? (144u + sizeof(_g4_t_v106)) : _g4_s8,
    _g4_s10 = (148u + sizeof(_g4_t_v107)) > _g4_s9 ? (148u + sizeof(_g4_t_v107)) : _g4_s9,
    _g4_s11 = (150u + sizeof(_g4_t_v108)) > _g4_s10 ? (150u + sizeof(_g4_t_v108)) : _g4_s10,
    _g4_s12 = (151u + sizeof(_g4_t_v109)) > _g4_s11 ? (151u + sizeof(_g4_t_v109)) : _g4_s11,
    _g4_s13 = (164u + sizeof(_g4_t_v110)) > _g4_s12 ? (164u + sizeof(_g4_t_v110)) : _g4_s12,
    _g4_s14 = (165u + sizeof(_g4_t_v111)) > _g4_s13 ? (165u + sizeof(_g4_t_v111)) : _g4_s13,
    _g4_s15 = (176u + sizeof(_g4_t_v112)) > _g4_s14 ? (176u + sizeof(_g4_t_v112)) : _g4_s14,
    _g4_s16 = (180u + sizeof(_g4_t_v113)) > _g4_s15 ? (180u + sizeof(_g4_t_v113)) : _g4_s15,
    _g4_s17 = (182u + sizeof(_g4_t_v114)) > _g4_s16 ? (182u + sizeof(_g4_t_v114)) : _g4_s16,
    _g4_s18 = (183u + sizeof(_g4_t_v115)) > _g4_s17 ? (183u + sizeof(_g4_t_v115)) : _g4_s17,
    _g4_s19 = (196u + sizeof(_g4_t_v116)) > _g4_s18 ? (196u + sizeof(_g4_t_v116)) : _g4_s18,
    _g4_s20 = (197u + sizeof(_g4_t_v117)) > _g4_s19 ? (197u + sizeof(_g4_t_v117)) : _g4_s19,
    _g4_s21 = (208u + sizeof(_g4_t_v118)) > _g4_s20 ? (208u + sizeof(_g4_t_v118)) : _g4_s20,
    _g4_s22 = (212u + sizeof(_g4_t_v119)) > _g4_s21 ? (212u + sizeof(_g4_t_v119)) : _g4_s21,
    _g4_s23 = (214u + sizeof(_g4_t_v120)) > _g4_s22 ? (214u + sizeof(_g4_t_v120)) : _g4_s22,
    _g4_s24 = (215u + sizeof(_g4_t_v121)) > _g4_s23 ? (215u + sizeof(_g4_t_v121)) : _g4_s23,
    _g4_s25 = (228u + sizeof(_g4_t_v122)) > _g4_s24 ? (228u + sizeof(_g4_t_v122)) : _g4_s24,
    _g4_s26 = (229u + sizeof(_g4_t_v123)) > _g4_s25 ? (229u + sizeof(_g4_t_v123)) : _g4_s25,
    _g4_s27 = (240u + sizeof(_g4_t_v124)) > _g4_s26 ? (240u + sizeof(_g4_t_v124)) : _g4_s26,
    _g4_s28 = (244u + sizeof(_g4_t_v125)) > _g4_s27 ? (244u + sizeof(_g4_t_v125)) : _g4_s27,
    _g4_s29 = (246u + sizeof(_g4_t_v126)) > _g4_s28 ? (246u + sizeof(_g4_t_v126)) : _g4_s28,
    _g4_s30 = (247u + sizeof(_g4_t_v127)) > _g4_s29 ? (247u + sizeof(_g4_t_v127)) : _g4_s29,
    _g4_s31 = (356u + sizeof(_g4_t_v128)) > _g4_s30 ? (356u + sizeof(_g4_t_v128)) : _g4_s30,
    _g4_s32 = (360u + sizeof(_g4_t_v129)) > _g4_s31 ? (360u + sizeof(_g4_t_v129)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 12u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 12u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 48u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 60u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 72u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 84u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 132u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 133u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 144u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 148u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 150u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 151u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 164u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 165u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 176u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 180u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 182u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 183u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 196u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 197u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 208u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 212u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 214u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 215u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 228u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 229u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 240u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 244u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 246u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 247u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 356u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 360u);

  v61 = *((uint32_t *)self + 11);
  if ( v61 != 0 )
  {
    v62 = *((gameswf::Self **)self + 10);
    if ( *((uint8_t *)v62 + 2) == 0 )
    {
      v97 = (*(uint16_t *)v62)-- == 1;
      if ( v97 )
        gameswf::free_internal(v62);
      *((uint32_t *)self + 10) = 0;
      *((uint32_t *)self + 11) = 0;
      v61 = 0;
    }
  }
  ColorTransform = (gameswf::RefCounted::Self *)gameswf::createColorTransform(
                                            *((gameswf::Self **)self + 4),
                                            *(gameswf::Player::Self **)(v61 + 64),
                                            v98);
  LOWORD(v100[0]) = 5;
  v100[1] = (uint32_t)(uintptr_t)(ColorTransform);
  if ( ColorTransform != nullptr )
    gameswf::RefCounted::addRef(ColorTransform);
  v104 = 1;
  v105 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v104, 14);
  v64 = (gameswf::Self *)&v105;
  if ( v104 == -1 )
    v64 = v106;
  gameswf::Strcpy_s(v64, &byte_9[6], (gameswf::Self *)"colorTransform");
  v107 = -1;
  v108 = 127;
  v109 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v104, (const gameswf::ASValue::Self *)v100);
  if ( v104 == -1 && (v109 & 1) != 0 )
    gameswf::free_internal(v106);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v100);
  v65 = *((gameswf::Character::Self **)self + 11);
  if ( v65 != nullptr )
  {
    v66 = *((gameswf::Self **)self + 10);
    if ( *((uint8_t *)v66 + 2) == 0 )
    {
      v97 = (*(uint16_t *)v66)-- == 1;
      if ( v97 )
        gameswf::free_internal(v66);
      *((uint32_t *)self + 10) = 0;
      *((uint32_t *)self + 11) = 0;
      v65 = nullptr;
    }
  }
  WorldCxForm = gameswf::Character::getWorldCxForm(v65);
  v68 = (gameswf::RefCounted::Self *)gameswf::createColorTransform(
                                 *((gameswf::Self **)self + 4),
                                 (gameswf::Player::Self *)WorldCxForm,
                                 v99);
  LOWORD(v101[0]) = 5;
  v101[1] = (uint32_t)(uintptr_t)(v68);
  if ( v68 != nullptr )
    gameswf::RefCounted::addRef(v68);
  v110 = 1;
  v111 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v110, 26);
  v69 = (gameswf::Self *)&v111;
  if ( v110 == -1 )
    v69 = v112;
  gameswf::Strcpy_s(v69, (char *)&dword_18 + 3, (gameswf::Self *)"concatenatedColorTransform");
  v113 = -1;
  v114 = 127;
  v115 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v110, (const gameswf::ASValue::Self *)v101);
  if ( v110 == -1 && (v115 & 1) != 0 )
    gameswf::free_internal(v112);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v101);
  v70 = *((uint32_t *)self + 11);
  if ( v70 != 0 )
  {
    v71 = *((gameswf::Self **)self + 10);
    if ( *((uint8_t *)v71 + 2) == 0 )
    {
      v97 = (*(uint16_t *)v71)-- == 1;
      if ( v97 )
        gameswf::free_internal(v71);
      *((uint32_t *)self + 10) = 0;
      *((uint32_t *)self + 11) = 0;
      v70 = 0;
    }
  }
  Matrix = (gameswf::RefCounted::Self *)(gameswf::createMatrix(*((gameswf::Self **)self + 4), *(gameswf::Player::Self **)(v70 + 68)));
  LOWORD(v102[0]) = 5;
  v102[1] = (uint32_t)(uintptr_t)(Matrix);
  if ( Matrix != nullptr )
    gameswf::RefCounted::addRef(Matrix);
  v116 = 1;
  v117 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v116, 6);
  v73 = (gameswf::Self *)&v117;
  if ( v116 == -1 )
    v73 = v118;
  gameswf::Strcpy_s(v73, (char *)&loc_6 + 1, (gameswf::Self *)"matrix");
  v119 = -1;
  v120 = 127;
  v121 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v116, (const gameswf::ASValue::Self *)v102);
  if ( v116 == -1 && (v121 & 1) != 0 )
    gameswf::free_internal(v118);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v102);
  v74 = *((gameswf::Character::Self **)self + 11);
  if ( v74 != nullptr )
  {
    v75 = *((gameswf::Self **)self + 10);
    if ( *((uint8_t *)v75 + 2) == 0 )
    {
      v97 = (*(uint16_t *)v75)-- == 1;
      if ( v97 )
        gameswf::free_internal(v75);
      *((uint32_t *)self + 10) = 0;
      *((uint32_t *)self + 11) = 0;
      v74 = nullptr;
    }
  }
  WorldMatrix = gameswf::Character::getWorldMatrix(v74);
  v77 = (gameswf::RefCounted::Self *)(gameswf::createMatrix(*((gameswf::Self **)self + 4), (gameswf::Player::Self *)WorldMatrix));
  LOWORD(v103[0]) = 5;
  v103[1] = (uint32_t)(uintptr_t)(v77);
  if ( v77 != nullptr )
    gameswf::RefCounted::addRef(v77);
  v122 = 1;
  v123 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v122, 18);
  v78 = (gameswf::Self *)&v123;
  if ( v122 == -1 )
    v78 = v124;
  gameswf::Strcpy_s(v78, (char *)&word_12 + 1, (gameswf::Self *)"concatenatedMatrix");
  v125 = -1;
  v126 = 127;
  v127 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v122, (const gameswf::ASValue::Self *)v103);
  if ( v122 == -1 && (v127 & 1) != 0 )
    gameswf::free_internal(v124);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v103);
  v79 = *((uint32_t *)self + 11);
  if ( v79 != 0 )
  {
    v80 = *((gameswf::Self **)self + 10);
    if ( *((uint8_t *)v80 + 2) == 0 )
    {
      v97 = (*(uint16_t *)v80)-- == 1;
      if ( v97 )
        gameswf::free_internal(v80);
      *((uint32_t *)self + 10) = 0;
      *((uint32_t *)self + 11) = 0;
      v79 = 0;
    }
  }
  result = G4_VCALL<int>(v79, 8, 2);
  if ( (uint8_t)result != 0 )
  {
    v82 = *((uint32_t *)self + 11);
    if ( v82 != 0 )
    {
      v83 = *((gameswf::Self **)self + 10);
      if ( *((uint8_t *)v83 + 2) == 0 )
      {
        v97 = (*(uint16_t *)v83)-- == 1;
        if ( v97 )
        {
          v129 = nullptr;
          gameswf::free_internal(v83);
        }
        *((uint32_t *)self + 10) = 0;
        *((uint32_t *)self + 11) = 0;
        v82 = 0;
      }
    }
    result = *(uint32_t *)(v82 + 76);
    if ( result != 0 )
    {
      v84 = *((gameswf::Self **)self + 10);
      if ( *((uint8_t *)v84 + 2) == 0 )
      {
        v97 = (*(uint16_t *)v84)-- == 1;
        if ( v97 )
        {
          v129 = nullptr;
          gameswf::free_internal(v84);
        }
        *((uint32_t *)self + 10) = 0;
        *((uint32_t *)self + 11) = 0;
        v84 = nullptr;
        result = 4;
        v82 = 0;
      }
      if ( *(uint8_t *)(result + 96) != 0 )
      {
        if ( v82 != 0 && *((uint8_t *)v84 + 2) == 0 )
        {
          v97 = (*(uint16_t *)v84)-- == 1;
          if ( v97 )
          {
            v129 = nullptr;
            gameswf::free_internal(v84);
          }
          *((uint32_t *)self + 10) = 0;
          *((uint32_t *)self + 11) = 0;
          result = 4;
        }
        v85 = *(float *)(result + 108);
        a19 = 2;
        a20 = v85;
        a57 = 1;
        gameswf::String::resize((gameswf::String::Self *)&a57, 2);
        v86 = (gameswf::Self *)((char *)&a57 + 1);
        if ( (uint8_t)a57 == 0xFF )
          v86 = a60;
        gameswf::Strcpy_s(v86, (char *)&dword_0 + 3, (gameswf::Self *)"_z");
        LOWORD(a61) = -1;
        BYTE2(a61) = 127;
        HIBYTE(a61) |= 1u;
        gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&a57, (const gameswf::ASValue::Self *)&a19);
        if ( (uint8_t)a57 == 0xFF && (a61 & 0x1000000) != 0 )
        {
          v129 = a59;
          gameswf::free_internal(a60);
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&a19);
        v87 = *((uint32_t *)self + 11);
        if ( v87 != 0 )
        {
          v88 = *((gameswf::Self **)self + 10);
          if ( *((uint8_t *)v88 + 2) == 0 )
          {
            v97 = (*(uint16_t *)v88)-- == 1;
            if ( v97 )
            {
              v129 = nullptr;
              gameswf::free_internal(v88);
            }
            *((uint32_t *)self + 10) = 0;
            *((uint32_t *)self + 11) = 0;
            v87 = 0;
          }
        }
        v89 = *(float *)(*(uint32_t *)(v87 + 76) + 116);
        a21 = 2;
        LOBYTE(STACK[0x254]) = 1;
        a22 = v89;
        LOBYTE(STACK[0x255]) = 0;
        gameswf::String::resize((gameswf::String::Self *)&STACK[0x254], 10);
        v90 = (gameswf::Self *)&STACK[0x255];
        if ( LOBYTE(STACK[0x254]) == 0xFF )
          v90 = (gameswf::Self *)STACK[0x260];
        gameswf::Strcpy_s(v90, &byte_9[2], (gameswf::Self *)"_xrotation");
        v91 = STACK[0x264];
        v129 = (const gameswf::StringI::Self *)&STACK[0x254];
        v91 |= 0x7FFFFFu;
        v128 = (gameswf::ASObject::Self *)(self);
        STACK[0x264] = v91;
        LOBYTE(STACK[0x266]) = BYTE2(v91) & 0x7F;
        LOBYTE(STACK[0x267]) = HIBYTE(v91) | 1;
        gameswf::ASObject::builtinMember(v128, v129, (const gameswf::ASValue::Self *)&a21);
        if ( LOBYTE(STACK[0x254]) == 0xFF && (STACK[0x267] & 1) != 0 )
        {
          v129 = (const gameswf::StringI::Self *)STACK[0x25C];
          gameswf::free_internal((gameswf::Self *)STACK[0x260]);
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&a21);
        v92 = *((uint32_t *)self + 11);
        if ( v92 != 0 )
        {
          v93 = *((gameswf::Self **)self + 10);
          if ( *((uint8_t *)v93 + 2) == 0 )
          {
            v97 = (*(uint16_t *)v93)-- == 1;
            if ( v97 )
            {
              v129 = nullptr;
              gameswf::free_internal(v93);
            }
            *((uint32_t *)self + 10) = 0;
            *((uint32_t *)self + 11) = 0;
            v92 = 0;
          }
        }
        v94 = *(float *)(*(uint32_t *)(v92 + 76) + 120);
        a23 = 2;
        LOBYTE(STACK[0x274]) = 1;
        a24 = v94;
        LOBYTE(STACK[0x275]) = 0;
        gameswf::String::resize((gameswf::String::Self *)&STACK[0x274], 10);
        v95 = (gameswf::Self *)&STACK[0x275];
        if ( LOBYTE(STACK[0x274]) == 0xFF )
          v95 = (gameswf::Self *)STACK[0x280];
        gameswf::Strcpy_s(v95, &byte_9[2], (gameswf::Self *)"_yrotation");
        v96 = STACK[0x284];
        v129 = (const gameswf::StringI::Self *)&STACK[0x274];
        v96 |= 0x7FFFFFu;
        v128 = (gameswf::ASObject::Self *)(self);
        STACK[0x284] = v96;
        LOBYTE(STACK[0x286]) = BYTE2(v96) & 0x7F;
        LOBYTE(STACK[0x287]) = HIBYTE(v96) | 1;
        gameswf::ASObject::builtinMember(v128, v129, (const gameswf::ASValue::Self *)&a23);
        if ( LOBYTE(STACK[0x274]) == 0xFF && (STACK[0x287] & 1) != 0 )
        {
          v129 = (const gameswf::StringI::Self *)STACK[0x27C];
          gameswf::free_internal((gameswf::Self *)STACK[0x280]);
        }
        return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&a23);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTransform::ctor  (binary VA: 0x114d0d0)
// Original: gameswf::ASTransform::ctor
// ----------------------------------------------------------------------------
void gameswf::ASTransform::ctor(int a1)
{
  int v1;
  gameswf::Character::Self *v2;
  gameswf::RefCounted::Self *v3;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::RefCounted::Self *v7;
  gameswf::RefCounted::Self *v8;

  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    v1 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v1 != 5 )
      goto LABEL_3;
    v2 = *(gameswf::Character::Self **)(v1 + 4);
    if ( v2 == nullptr || G4_VCALL<uint8_t>(v2, 8, 1) == 0 )
      goto LABEL_3;
    v3 = *(gameswf::RefCounted::Self **)(a1 + 12);
    v4 = *((gameswf::Player::Self **)v3 + 53);
    if ( v4 != nullptr )
    {
      v5 = *((gameswf::Self **)v3 + 52);
      if ( *((uint8_t *)v5 + 2) == 0 )
      {
        if ( (*(uint16_t *)v5)-- == 1 )
        {
          v8 = v3;
          gameswf::free_internal(v5);
          v3 = v8;
        }
        *((uint32_t *)v3 + 52) = 0;
        *((uint32_t *)v3 + 53) = 0;
        v4 = nullptr;
      }
    }
    v7 = (gameswf::RefCounted::Self *)opNew(0x30u);
    gameswf::ASTransform::Construct(v7, v4, v2);
    if ( v7 != nullptr )
    {
      gameswf::RefCounted::addRef(v7);
      gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v7);
      gameswf::RefCounted::dropRef(v7);
    }
    else
    {
LABEL_3:
      gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTransform::is  (binary VA: 0x114d2d0)
// Original: gameswf::ASTransform::is
// ----------------------------------------------------------------------------
bool gameswf::ASTransform::is(gameswf::ASTransform::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 31 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTransform::Destroy  (binary VA: 0x114d2f0)
// Original: gameswf::ASTransform::~ASTransform
// ----------------------------------------------------------------------------
void gameswf::ASTransform::Destroy(gameswf::ASTransform::Self *self)
{
  gameswf::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090388);
  v1 = *((gameswf::Self **)self + 10);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTransform::Destroy_ea114d360  (binary VA: 0x114d360)
// Original: gameswf::ASTransform::~ASTransform
// ----------------------------------------------------------------------------
void gameswf::ASTransform::Destroy_ea114d360(gameswf::ASTransform::Self *self)
{
  gameswf::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090388);
  v1 = *((gameswf::Self **)self + 10);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  gameswf::ASObject::Destroy(self);
}


