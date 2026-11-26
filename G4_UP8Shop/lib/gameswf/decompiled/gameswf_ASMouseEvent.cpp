#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASMouseEvent.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASMouseEvent::init  (binary VA: 0x1164740)
// Original: gameswf::ASMouseEvent::init
// ----------------------------------------------------------------------------
char gameswf::ASMouseEvent::init(int a1)
{
  int v1;
  int v2;
  int v3;
  char *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int v9;
  float v10; // xmm0_4
  float v11; // xmm1_4
  gameswf::Self *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char *v17;
  bool v18; // cc
  int v19;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char _g4_t_v28;
  typedef uint8_t _g4_t_v29[3];
  typedef int _g4_t_v30;
  typedef gameswf::Self *_g4_t_v31;
  typedef unsigned int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v23)) > _g4_s2 ? (20u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v24)) > _g4_s3 ? (24u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v25)) > _g4_s4 ? (28u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v26)) > _g4_s5 ? (40u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v27)) > _g4_s6 ? (44u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v28)) > _g4_s7 ? (48u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (49u + sizeof(_g4_t_v29)) > _g4_s8 ? (49u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v30)) > _g4_s9 ? (52u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v31)) > _g4_s10 ? (60u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v32)) > _g4_s11 ? (64u + sizeof(_g4_t_v32)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 49u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);

  v1 = a1;
  v2 = *(uint32_t *)(a1 + 4);
  if ( v2 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a1 + 4), 52) == 0 )
    v2 = 0;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v16 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v16 == 3 || *(uint8_t *)v16 == 4 )
    {
      v17 = *(char **)(v16 + 4);
    }
    else
    {
      v17 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 )
      {
        v19 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
        v17 = (char *)(&byte_20D6378);
        if ( v19 != 0 )
          v17 = sub_1164450();
      }
    }
    sub_7763C0((gameswf::String::Self *)&v28, v17);
    v22 = 4;
    v23 = 3;
    v24 = 3;
    v25 = 2;
    v26 = 1;
  }
  else
  {
    v28 = 1;
    LOWORD(v32) = -1;
    v29[0] = 0;
    BYTE2(v32) = 127;
    HIBYTE(v32) |= 1u;
    v22 = 3;
    v23 = 2;
    v24 = 2;
    v25 = 1;
    v26 = 0;
  }
  if ( (char *)(v2 + 40) != &v28 )
  {
    if ( v28 == -1 )
      v3 = v30 - 1;
    else
      v3 = v28 - 1;
    gameswf::String::resize((gameswf::String::Self *)(v2 + 40), v3);
    LOBYTE(v4) = *(uint8_t *)(v2 + 40);
    v5 = (gameswf::Self *)v29;
    if ( v28 == -1 )
      v5 = v31;
    if ( (uint8_t)(uintptr_t)v4 == 0xFF )
    {
      v4 = *(char **)(v2 + 44);
      v6 = *(gameswf::Self **)(v2 + 52);
    }
    else
    {
      v4 = (char *)(char)(uintptr_t)v4;
      v6 = (gameswf::Self *)(v2 + 41);
    }
    gameswf::Strcpy_s(v6, v4, v5);
    if ( (uint8_t *)(v32 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v28 == -1 )
      {
        v12 = v31;
        v13 = v30 - 1;
      }
      else
      {
        v12 = (gameswf::Self *)v29;
        v13 = v28 - 1;
      }
      v7 = 5381;
      if ( v13 > 0 )
      {
        v21 = v2;
        do
        {
          --v13;
          v14 = 33 * v7;
          v15 = *((uint8_t *)v12 + v13) + 32;
          if ( (uint8_t)(*((uint8_t *)v12 + v13) - 65) > 0x19u )
            v15 = *((uint8_t *)v12 + v13);
          v7 = v14 ^ v15;
        }
        while ( v13 != 0 );
        v2 = v21;
        v1 = a1;
        v7 = v7 << 9 >> 9;
      }
      v32 = v7 & 0x7FFFFF | v32 & 0xFF800000;
    }
    else
    {
      v7 = (int)(v32 << 9) >> 9;
    }
    *(uint32_t *)(v2 + 56) = v7 & 0x7FFFFF | *(uint32_t *)(v2 + 56) & 0xFF800000;
  }
  sub_59CE50((int)(uintptr_t)(&v28));
  LOBYTE(v8) = 0;
  v9 = v26;
  if ( *(uint32_t *)(v1 + 16) > v26 )
  {
    LOBYTE(v8) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 12
                                                                                      * (*(uint32_t *)(v1 + 20) - v26)));
    v9 = v25;
    v24 = v22;
    v25 = v23;
  }
  *(uint8_t *)(v2 + 60) = v8;
  if ( *(uint32_t *)(v1 + 16) <= v9
    || (LOBYTE(v8) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12)
                                                                 + 12 * (*(uint32_t *)(v1 + 20) - v9))),
        *(uint32_t *)(v1 + 16) <= v25) )
  {
    v10 = 0.0;
    v11 = 0.0;
  }
  else
  {
    v8 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 12 * (*(uint32_t *)(v1 + 20) - v25)));
    v18 = *(uint32_t *)(v1 + 16) <= v24;
    v27 = v8;
    if ( v18 )
    {
      v10 = (float)v8;
      v11 = 0.0;
    }
    else
    {
      v8 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 12 * (*(uint32_t *)(v1 + 20) - v24)));
      v11 = (float)v8;
      v10 = (float)v27;
    }
  }
  *(float *)(v2 + 84) = v10;
  *(float *)(v2 + 88) = v11;
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMouseEvent::getStandardMember  (binary VA: 0x1164ef0)
// Original: gameswf::ASMouseEvent::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASMouseEvent::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;
  int v4;

  switch ( a2 )
  {
    case 'J':
      gameswf::ASValue::setBool(a3, *(uint8_t *)(a1 + 100));
      return 1;
    case 'K':
      v4 = (int)*(float *)(a1 + 84);
      goto LABEL_7;
    case 'L':
      v4 = (int)*(float *)(a1 + 88);
      goto LABEL_7;
    case 'M':
      v4 = (int)*(float *)(a1 + 92);
      goto LABEL_7;
    case 'N':
      v4 = (int)*(float *)(a1 + 96);
LABEL_7:
      gameswf::ASValue::setDouble(a3, (double)v4);
      result = 1;
      break;
    case 'm':
      gameswf::ASValue::setDouble(a3, (double)*(int *)(a1 + 104));
      result = 1;
      break;
    default:
      result = gameswf::ASEvent::getStandardMember((uint32_t *)a1, a2, (const gameswf::String::Self **)a3);
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMouseEvent::Construct  (binary VA: 0x11655c0)
// Original: gameswf::ASMouseEvent::ASMouseEvent
// ----------------------------------------------------------------------------
gameswf::ASMouseEvent::Self * gameswf::ASMouseEvent::Construct(gameswf::ASMouseEvent::Self *self, gameswf::Player::Self *a2)
{
  gameswf::ASEvent::Construct(self, a2, (gameswf::Self *)&unk_1B15112);
  *((uint8_t *)self + 100) = 0;
  *((uint32_t *)self + 26) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20912C8);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint8_t *)self + 60) = 1;
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMouseEvent::newOp  (binary VA: 0x1165630)
// Original: gameswf::ASMouseEvent::newOp
// ----------------------------------------------------------------------------
gameswf::ASMouseEvent::Self * gameswf::ASMouseEvent::newOp(gameswf::ASMouseEvent::Self *self)
{
  gameswf::ASMouseEvent::Self *v1;

  v1 = (gameswf::ASMouseEvent::Self *)opNew(0x6Cu);
  gameswf::ASMouseEvent::Construct(v1, (gameswf::Player::Self *)(self));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMouseEvent::createClass  (binary VA: 0x1167360)
// Original: gameswf::ASMouseEvent::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASMouseEvent::createClass(gameswf::ASMouseEvent::Self *self)
{
  gameswf::Self **v1;
  gameswf::String::Self *v2;
  gameswf::String::Self *v3;
  gameswf::String::Self *v4;
  gameswf::String::Self *v5;
  gameswf::String::Self *v6;
  gameswf::String::Self *v7;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef int *_g4_t_v10;
  typedef uint8_t _g4_t_v11[12];
  typedef const gameswf::String::Self *_g4_t_v12[3];
  typedef const gameswf::String::Self *_g4_t_v13[3];
  typedef const gameswf::String::Self *_g4_t_v14[3];
  typedef const gameswf::String::Self *_g4_t_v15[3];
  typedef const gameswf::String::Self *_g4_t_v16[3];
  typedef const gameswf::String::Self *_g4_t_v17[3];
  typedef uint8_t _g4_t_v18[20];
  typedef uint8_t _g4_t_v19[20];
  typedef char _g4_t_v20[20];
  typedef uint8_t _g4_t_v21[20];
  typedef char _g4_t_v22[20];
  typedef uint8_t _g4_t_v23[20];
  typedef char _g4_t_v24[20];
  typedef uint8_t _g4_t_v25[20];
  typedef char _g4_t_v26[20];
  typedef uint8_t _g4_t_v27[20];
  typedef char _g4_t_v28[20];
  typedef uint8_t _g4_t_v29[20];
  typedef char _g4_t_v30[20];
  typedef uint8_t _g4_t_v31[48];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (8u + sizeof(_g4_t_Class)) > _g4_s0 ? (8u + sizeof(_g4_t_Class)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v13)) > _g4_s4 ? (44u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v14)) > _g4_s5 ? (56u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v15)) > _g4_s6 ? (68u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v16)) > _g4_s7 ? (80u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v17)) > _g4_s8 ? (92u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v18)) > _g4_s9 ? (104u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (124u + sizeof(_g4_t_v19)) > _g4_s10 ? (124u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v20)) > _g4_s11 ? (144u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (164u + sizeof(_g4_t_v21)) > _g4_s12 ? (164u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (184u + sizeof(_g4_t_v22)) > _g4_s13 ? (184u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (204u + sizeof(_g4_t_v23)) > _g4_s14 ? (204u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (224u + sizeof(_g4_t_v24)) > _g4_s15 ? (224u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (244u + sizeof(_g4_t_v25)) > _g4_s16 ? (244u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (264u + sizeof(_g4_t_v26)) > _g4_s17 ? (264u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (284u + sizeof(_g4_t_v27)) > _g4_s18 ? (284u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (304u + sizeof(_g4_t_v28)) > _g4_s19 ? (304u + sizeof(_g4_t_v28)) : _g4_s19,
    _g4_s21 = (324u + sizeof(_g4_t_v29)) > _g4_s20 ? (324u + sizeof(_g4_t_v29)) : _g4_s20,
    _g4_s22 = (344u + sizeof(_g4_t_v30)) > _g4_s21 ? (344u + sizeof(_g4_t_v30)) : _g4_s21,
    _g4_s23 = (364u + sizeof(_g4_t_v31)) > _g4_s22 ? (364u + sizeof(_g4_t_v31)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 104u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 124u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 144u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 164u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 184u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 204u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 224u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 244u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 264u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 284u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 304u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 324u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 344u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 364u);

  v10 = *((int **)self + 4);
  sub_776320((gameswf::String::Self *)v18, (gameswf::Self *)"Event");
  Class = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass(self, (const gameswf::String::Self *)v18, true);
  sub_776320((gameswf::String::Self *)v19, (gameswf::Self *)"MouseEvent");
  v11[0] = 0;
  v11[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v11, (int)(uintptr_t)(gameswf::ASMouseEvent::init));
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v1,
    (gameswf::Player::Self *)v10,
    Class,
    (const gameswf::String::Self *)v19,
    gameswf::ASMouseEvent::newOp,
    (const gameswf::ASValue::Self *)v11,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  sub_59CE50((int)(uintptr_t)(v19));
  sub_59CE50((int)(uintptr_t)(v18));
  sub_776320((gameswf::String::Self *)v20, (gameswf::Self *)"mouseDown");
  v2 = sub_1166B80(v10 + 12, v20);
  LOWORD(v12[0]) = 0;
  v12[1] = nullptr;
  gameswf::ASValue::setString(v12, v2);
  sub_776320((gameswf::String::Self *)v21, (gameswf::Self *)"MOUSE_DOWN");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v21,
    (const gameswf::ASValue::Self *)v12);
  sub_59CE50((int)(uintptr_t)(v21));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  sub_59CE50((int)(uintptr_t)(v20));
  sub_776320((gameswf::String::Self *)v22, (gameswf::Self *)"mouseUp");
  v3 = sub_1166B80(v10 + 12, v22);
  LOWORD(v13[0]) = 0;
  v13[1] = nullptr;
  gameswf::ASValue::setString(v13, v3);
  sub_776320((gameswf::String::Self *)v23, (gameswf::Self *)"MOUSE_UP");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v23,
    (const gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v23));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v22));
  sub_776320((gameswf::String::Self *)v24, (gameswf::Self *)"mouseOut");
  v4 = sub_1166B80(v10 + 12, v24);
  LOWORD(v14[0]) = 0;
  v14[1] = nullptr;
  gameswf::ASValue::setString(v14, v4);
  sub_776320((gameswf::String::Self *)v25, (gameswf::Self *)"MOUSE_OUT");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v25,
    (const gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v25));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v24));
  sub_776320((gameswf::String::Self *)v26, (gameswf::Self *)"mouseOver");
  v5 = sub_1166B80(v10 + 12, v26);
  LOWORD(v15[0]) = 0;
  v15[1] = nullptr;
  gameswf::ASValue::setString(v15, v5);
  sub_776320((gameswf::String::Self *)v27, (gameswf::Self *)"MOUSE_OVER");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v27,
    (const gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v27));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v26));
  sub_776320((gameswf::String::Self *)v28, (gameswf::Self *)"mouseMove");
  v6 = sub_1166B80(v10 + 12, v28);
  LOWORD(v16[0]) = 0;
  v16[1] = nullptr;
  gameswf::ASValue::setString(v16, v6);
  sub_776320((gameswf::String::Self *)v29, (gameswf::Self *)"MOUSE_MOVE");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v29,
    (const gameswf::ASValue::Self *)v16);
  sub_59CE50((int)(uintptr_t)(v29));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  sub_59CE50((int)(uintptr_t)(v28));
  sub_776320((gameswf::String::Self *)v30, (gameswf::Self *)"click");
  v7 = sub_1166B80(v10 + 12, v30);
  LOWORD(v17[0]) = 0;
  v17[1] = nullptr;
  gameswf::ASValue::setString(v17, v7);
  sub_776320((gameswf::String::Self *)v31, (gameswf::Self *)"CLICK");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v31,
    (const gameswf::ASValue::Self *)v17);
  sub_59CE50((int)(uintptr_t)(v31));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  sub_59CE50((int)(uintptr_t)(v30));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMouseEvent::is  (binary VA: 0x116a9e0)
// Original: gameswf::ASMouseEvent::is
// ----------------------------------------------------------------------------
bool gameswf::ASMouseEvent::is(gameswf::ASMouseEvent::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 52 && a2 != 51 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMouseEvent::Destroy  (binary VA: 0x116ab50)
// Original: gameswf::ASMouseEvent::~ASMouseEvent
// ----------------------------------------------------------------------------
void gameswf::ASMouseEvent::Destroy(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMouseEvent::Destroy_ea116ae90  (binary VA: 0x116ae90)
// Original: gameswf::ASMouseEvent::~ASMouseEvent
// ----------------------------------------------------------------------------
void gameswf::ASMouseEvent::Destroy_ea116ae90(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}


