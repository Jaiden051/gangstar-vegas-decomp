#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASRectangle.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::getStandardMember  (binary VA: 0x116d680)
// Original: gameswf::ASRectangle::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASRectangle::getStandardMember(float *a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;
  float v4; // xmm0_4

  switch ( a2 )
  {
    case 0:
    case 67:
      gameswf::ASValue::setDouble(a3, a1[10]);
      result = 1;
      break;
    case 1:
    case 69:
      gameswf::ASValue::setDouble(a3, a1[12]);
      result = 1;
      break;
    case 8:
      v4 = a1[11] - a1[10];
      goto LABEL_7;
    case 9:
      v4 = a1[13] - a1[12];
LABEL_7:
      gameswf::ASValue::setDouble(a3, v4);
      result = 1;
      break;
    case 68:
      gameswf::ASValue::setDouble(a3, a1[11]);
      result = 1;
      break;
    case 70:
      gameswf::ASValue::setDouble(a3, a1[13]);
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::intersects  (binary VA: 0x116d780)
// Original: gameswf::ASRectangle::intersects
// ----------------------------------------------------------------------------
int gameswf::ASRectangle::intersects(int a1)
{
  float *v1;
  int v3;
  bool v4;
  float *v5;

  v1 = *(float **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 63) == 0 )
    v1 = nullptr;
  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5
    && (v5 = *(float **)(v3 + 4)) != nullptr
    && (*(uint8_t (**)(float *, int))(*(uint32_t *)v5 + 8))(v5, 63) != 0 )
  {
    v4 = false;
    if ( v5[10] <= v1[11] && v1[10] <= v5[11] && v1[12] <= v5[13] )
      v4 = v1[13] >= v5[12];
  }
  else
  {
    v4 = false;
  }
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::containsRect  (binary VA: 0x116d870)
// Original: gameswf::ASRectangle::containsRect
// ----------------------------------------------------------------------------
int gameswf::ASRectangle::containsRect(int a1)
{
  float *v1;
  int v3;
  bool v4;
  float *v5;
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm0_4

  v1 = *(float **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 63) == 0 )
    v1 = nullptr;
  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5
    && (v5 = *(float **)(v3 + 4)) != nullptr
    && (*(uint8_t (**)(float *, int))(*(uint32_t *)v5 + 8))(v5, 63) != 0 )
  {
    v6 = v5[10];
    v4 = false;
    v7 = v1[10];
    v8 = v5[12];
    if ( v7 <= v6 )
    {
      v9 = v1[11];
      if ( v6 <= v9 )
      {
        v10 = v1[12];
        if ( v10 <= v8 )
        {
          v11 = v1[13];
          if ( v8 <= v11 )
          {
            v12 = v5[11];
            if ( v7 <= v12 && v12 <= v9 )
            {
              v13 = v5[13];
              v4 = false;
              if ( v10 <= v13 )
                v4 = v11 >= v13;
            }
          }
        }
      }
    }
  }
  else
  {
    v4 = false;
  }
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::contains  (binary VA: 0x116d990)
// Original: gameswf::ASRectangle::contains
// ----------------------------------------------------------------------------
int gameswf::ASRectangle::contains(int a1)
{
  float *v1;
  float v3; // xmm0_4
  long double v4; // fst7
  bool v5;
  float v6; // xmm0_4

  v1 = *(float **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 63) == 0 )
    v1 = nullptr;
  if ( *(uint32_t *)(a1 + 16) != 2 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v4 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v5 = false;
  if ( v3 >= v1[10] && v3 <= v1[11] )
  {
    v6 = v4;
    if ( v6 >= v1[12] )
      v5 = v6 <= v1[13];
  }
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::init  (binary VA: 0x116da90)
// Original: gameswf::ASRectangle::init
// ----------------------------------------------------------------------------
void gameswf::ASRectangle::init(int a1)
{
  float *v1;
  float v2; // xmm1_4
  int v3;
  int v4;
  int v5;
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  long double v9; // fst7
  long double v10; // fst7
  long double v11; // fst7
  int v12;

  v1 = *(float **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 63) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v4 = 2;
    v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v3 = 3;
    v2 = v11;
    v5 = 1;
  }
  else
  {
    v2 = 0.0;
    v3 = 2;
    v4 = 1;
    v5 = 0;
  }
  v6 = 0.0;
  v1[10] = v2;
  if ( *(uint32_t *)(a1 + 16) > v5 )
  {
    v12 = v3;
    v10 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v5)));
    v5 = v4;
    v4 = v12;
    v6 = v10;
    v2 = v1[10];
  }
  v1[12] = v6;
  v7 = 0.0;
  if ( *(uint32_t *)(a1 + 16) > v5 )
  {
    v9 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v5)));
    v5 = v4;
    v7 = v9;
    v6 = v1[12];
  }
  v1[11] = v2 + v7;
  v8 = 0.0;
  if ( *(uint32_t *)(a1 + 16) > v5 )
    v8 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v5)));
  v1[13] = v6 + v8;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::setStandardMember  (binary VA: 0x116dc20)
// Original: gameswf::ASRectangle::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASRectangle::setStandardMember(float *a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;
  long double v4; // fst7
  float v5; // xmm0_4
  long double v6; // fst7
  float v7; // xmm0_4
  long double v8; // fst7
  float v9; // xmm0_4
  long double v10; // fst7
  float v11; // xmm0_4
  long double v12; // fst7
  float v13; // xmm0_4
  long double v14; // fst7
  float v15; // xmm0_4
  float v16;
  float v17;

  switch ( a2 )
  {
    case 0:
    case 67:
      v4 = gameswf::ASValue::toNumber(a3);
      v5 = v4;
      a1[10] = v5;
      result = 1;
      break;
    case 1:
    case 69:
      v6 = gameswf::ASValue::toNumber(a3);
      v7 = v6;
      a1[12] = v7;
      result = 1;
      break;
    case 8:
      v16 = a1[10];
      v8 = gameswf::ASValue::toNumber(a3);
      v9 = v8;
      a1[11] = v9 + v16;
      result = 1;
      break;
    case 9:
      v17 = a1[12];
      v10 = gameswf::ASValue::toNumber(a3);
      v11 = v10;
      a1[13] = v11 + v17;
      result = 1;
      break;
    case 68:
      v12 = gameswf::ASValue::toNumber(a3);
      v13 = v12;
      a1[11] = v13;
      result = 1;
      break;
    case 70:
      v14 = gameswf::ASValue::toNumber(a3);
      v15 = v14;
      a1[13] = v15;
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::createClass  (binary VA: 0x116ddb0)
// Original: gameswf::ASRectangle::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASRectangle::createClass(gameswf::ASRectangle::Self *self)
{
  gameswf::Self *v1;
  unsigned int v2;
  gameswf::Self **v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  typedef uint8_t _g4_t_v9[12];
  typedef uint16_t _g4_t_v10[6];
  typedef uint16_t _g4_t_v11[6];
  typedef uint16_t _g4_t_v12[6];
  typedef uint16_t _g4_t_v13[6];
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef gameswf::Self *_g4_t_v16;
  typedef unsigned int _g4_t_v17;
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
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef int16_t _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef int16_t _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v12)) > _g4_s3 ? (36u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v13)) > _g4_s4 ? (48u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v14)) > _g4_s5 ? (60u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (61u + sizeof(_g4_t_v15)) > _g4_s6 ? (61u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v16)) > _g4_s7 ? (72u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v17)) > _g4_s8 ? (76u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v18)) > _g4_s9 ? (92u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (93u + sizeof(_g4_t_v19)) > _g4_s10 ? (93u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v20)) > _g4_s11 ? (104u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v21)) > _g4_s12 ? (108u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (110u + sizeof(_g4_t_v22)) > _g4_s13 ? (110u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (111u + sizeof(_g4_t_v23)) > _g4_s14 ? (111u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v24)) > _g4_s15 ? (124u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (125u + sizeof(_g4_t_v25)) > _g4_s16 ? (125u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (136u + sizeof(_g4_t_v26)) > _g4_s17 ? (136u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (140u + sizeof(_g4_t_v27)) > _g4_s18 ? (140u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (142u + sizeof(_g4_t_v28)) > _g4_s19 ? (142u + sizeof(_g4_t_v28)) : _g4_s19,
    _g4_s21 = (143u + sizeof(_g4_t_v29)) > _g4_s20 ? (143u + sizeof(_g4_t_v29)) : _g4_s20,
    _g4_s22 = (156u + sizeof(_g4_t_v30)) > _g4_s21 ? (156u + sizeof(_g4_t_v30)) : _g4_s21,
    _g4_s23 = (157u + sizeof(_g4_t_v31)) > _g4_s22 ? (157u + sizeof(_g4_t_v31)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v32)) > _g4_s23 ? (168u + sizeof(_g4_t_v32)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v33)) > _g4_s24 ? (172u + sizeof(_g4_t_v33)) : _g4_s24,
    _g4_s26 = (174u + sizeof(_g4_t_v34)) > _g4_s25 ? (174u + sizeof(_g4_t_v34)) : _g4_s25,
    _g4_s27 = (175u + sizeof(_g4_t_v35)) > _g4_s26 ? (175u + sizeof(_g4_t_v35)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v36)) > _g4_s27 ? (188u + sizeof(_g4_t_v36)) : _g4_s27,
    _g4_s29 = (189u + sizeof(_g4_t_v37)) > _g4_s28 ? (189u + sizeof(_g4_t_v37)) : _g4_s28,
    _g4_s30 = (200u + sizeof(_g4_t_v38)) > _g4_s29 ? (200u + sizeof(_g4_t_v38)) : _g4_s29,
    _g4_s31 = (204u + sizeof(_g4_t_v39)) > _g4_s30 ? (204u + sizeof(_g4_t_v39)) : _g4_s30,
    _g4_s32 = (206u + sizeof(_g4_t_v40)) > _g4_s31 ? (206u + sizeof(_g4_t_v40)) : _g4_s31,
    _g4_s33 = (207u + sizeof(_g4_t_v41)) > _g4_s32 ? (207u + sizeof(_g4_t_v41)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 61u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 93u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 110u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 111u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 124u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 125u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 136u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 140u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 142u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 143u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 156u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 157u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 168u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 172u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 174u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 175u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 188u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 189u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 200u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 204u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 206u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 207u);

  v14 = 1;
  v15 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v14, 9);
  v1 = (gameswf::Self *)&v15;
  if ( v14 == -1 )
    v1 = v16;
  gameswf::Strcpy_s(v1, &byte_9[1], (gameswf::Self *)"Rectangle");
  v9[0] = 0;
  v9[1] = 0;
  v17 |= 0x7FFFFFu;
  v2 = HIWORD(v17);
  HIBYTE(v17) |= 1u;
  BYTE2(v17) = v2 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)(uintptr_t)(gameswf::ASRectangle::init));
  v3 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v3,
    self,
    (const gameswf::String::Self *)&v14,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASRectangle::newOp,
    (const gameswf::ASValue::Self *)v9,
    true);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  if ( v14 == -1 && (v17 & 0x1000000) != 0 )
    gameswf::free_internal(v16);
  v10[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)(gameswf::ASRectangle::contains));
  v18 = 1;
  v19 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v18, 8);
  v4 = (gameswf::Self *)&v19;
  if ( v18 == -1 )
    v4 = v20;
  gameswf::Strcpy_s(v4, byte_9, (gameswf::Self *)"contains");
  v21 = -1;
  v22 = 127;
  v23 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)&v18, (const gameswf::ASValue::Self *)v10);
  if ( v18 == -1 && (v23 & 1) != 0 )
    gameswf::free_internal(v20);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  v11[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v11, (int)(uintptr_t)(gameswf::ASRectangle::containsRect));
  v24 = 1;
  v25 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v24, 12);
  v5 = (gameswf::Self *)&v25;
  if ( v24 == -1 )
    v5 = v26;
  gameswf::Strcpy_s(v5, &byte_9[4], (gameswf::Self *)"containsRect");
  v27 = -1;
  v28 = 127;
  v29 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)&v24, (const gameswf::ASValue::Self *)v11);
  if ( v24 == -1 && (v29 & 1) != 0 )
    gameswf::free_internal(v26);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  v12[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v12, (int)(uintptr_t)(gameswf::ASRectangle::intersects));
  v30 = 1;
  v31 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v30, 10);
  v6 = (gameswf::Self *)&v31;
  if ( v30 == -1 )
    v6 = v32;
  gameswf::Strcpy_s(v6, &byte_9[2], (gameswf::Self *)"intersects");
  v33 = -1;
  v34 = 127;
  v35 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)&v30, (const gameswf::ASValue::Self *)v12);
  if ( v30 == -1 && (v35 & 1) != 0 )
    gameswf::free_internal(v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  v13[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v13, (int)(uintptr_t)(gameswf::ASRectangle::intersection));
  v36 = 1;
  v37 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v36, 12);
  v7 = (gameswf::Self *)&v37;
  if ( v36 == -1 )
    v7 = v38;
  gameswf::Strcpy_s(v7, &byte_9[4], (gameswf::Self *)"intersection");
  v39 = -1;
  v40 = 127;
  v41 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)&v36, (const gameswf::ASValue::Self *)v13);
  if ( v36 == -1 && (v41 & 1) != 0 )
    gameswf::free_internal(v38);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::Construct  (binary VA: 0x116e300)
// Original: gameswf::ASRectangle::ASRectangle
// ----------------------------------------------------------------------------
gameswf::ASRectangle::Self * gameswf::ASRectangle::Construct(gameswf::ASRectangle::Self *self, gameswf::Player::Self *a2)
{
  gameswf::ASObject::ASObject(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091548);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 12) = 0;
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::newOp  (binary VA: 0x116e360)
// Original: gameswf::ASRectangle::newOp
// ----------------------------------------------------------------------------
gameswf::ASRectangle::Self * gameswf::ASRectangle::newOp(gameswf::ASRectangle::Self *self)
{
  gameswf::ASRectangle::Self *v1;

  v1 = (gameswf::ASRectangle::Self *)opNew(0x38u);
  gameswf::ASRectangle::Construct(v1, (gameswf::Player::Self *)(self));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::intersection  (binary VA: 0x116e570)
// Original: gameswf::ASRectangle::intersection
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASRectangle::intersection(int a1)
{
  float *v1;
  int v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::ASRectangle::Self *Rectangle;
  float *v6;
  int v8;
  int v9;
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float *v19;

  v1 = *(float **)(a1 + 4);
  if ( v1 != nullptr
    && (*(uint8_t (**)(uint32_t, char *))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), (char *)off_3C + 3) == 0 )
  {
    v1 = nullptr;
  }
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(gameswf::Self **)(v2 + 212);
  if ( v3 != nullptr )
  {
    v4 = *(gameswf::Self **)(v2 + 208);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *(uint32_t *)(v2 + 208) = 0;
      *(uint32_t *)(v2 + 212) = 0;
      v3 = nullptr;
    }
  }
  Rectangle = gameswf::createRectangle(v3);
  *((uint32_t *)Rectangle + 10) = 0;
  *((uint32_t *)Rectangle + 11) = 0;
  *((uint32_t *)Rectangle + 12) = 0;
  *((uint32_t *)Rectangle + 13) = 0;
  v6 = (float *)Rectangle;
  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    v8 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v8 == 5 )
    {
      v9 = *(uint32_t *)(v8 + 4);
      if ( v9 != 0 )
      {
        v19 = *(float **)(v8 + 4);
        if ( G4_VCALL<uint8_t>(v9, 8, 63) != 0 )
        {
          v10 = v1[11];
          v11 = v19[10];
          if ( v11 <= v10 )
          {
            v12 = v1[10];
            v13 = v19[11];
            if ( v12 <= v13 )
            {
              v14 = v1[12];
              v15 = v19[13];
              if ( v14 <= v15 )
              {
                v16 = v1[13];
                v17 = v19[12];
                if ( v17 <= v16 )
                {
                  v6[10] = fmaxf(v12, v11);
                  v6[11] = fminf(v13, v10);
                  v6[12] = fmaxf(v14, v17);
                  v6[13] = fminf(v15, v16);
                }
              }
            }
          }
        }
      }
    }
  }
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, (gameswf::ASObject::Self *)v6);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::is  (binary VA: 0x116eeb0)
// Original: gameswf::ASRectangle::is
// ----------------------------------------------------------------------------
bool gameswf::ASRectangle::is(gameswf::ASRectangle::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 63 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::Destroy  (binary VA: 0x116eed0)
// Original: gameswf::ASRectangle::~ASRectangle
// ----------------------------------------------------------------------------
void gameswf::ASRectangle::Destroy(gameswf::ASRectangle::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091548);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASRectangle::Destroy_ea116ef00  (binary VA: 0x116ef00)
// Original: gameswf::ASRectangle::~ASRectangle
// ----------------------------------------------------------------------------
void gameswf::ASRectangle::Destroy_ea116ef00(gameswf::ASRectangle::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091548);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


