#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASEvent.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::stopPropagation  (binary VA: 0x1164380)
// Original: gameswf::ASEvent::stopPropagation
// ----------------------------------------------------------------------------
int gameswf::ASEvent::stopPropagation(int a1)
{
  int result;
  uint8_t *v2;
  bool v3;

  result = a1;
  v2 = *(uint8_t **)(a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a1 + 4), 51) == 0;
    result = 0;
    if ( v3 )
      v2 = nullptr;
  }
  v2[60] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::stopImmediatePropagation  (binary VA: 0x11643c0)
// Original: gameswf::ASEvent::stopImmediatePropagation
// ----------------------------------------------------------------------------
int gameswf::ASEvent::stopImmediatePropagation(int a1)
{
  int result;
  uint8_t *v2;
  bool v3;

  result = a1;
  v2 = *(uint8_t **)(a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a1 + 4), 51) == 0;
    result = 0;
    if ( v3 )
      v2 = nullptr;
  }
  v2[60] = 0;
  v2[61] = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::init  (binary VA: 0x11644c0)
// Original: gameswf::ASEvent::init
// ----------------------------------------------------------------------------
char gameswf::ASEvent::init(int a1)
{
  int v1;
  int v2;
  char *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  int v6;
  char result;
  gameswf::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint8_t _g4_t_v17[3];
  typedef int _g4_t_v18;
  typedef gameswf::Self *_g4_t_v19;
  typedef unsigned int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v16)) > _g4_s2 ? (32u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (33u + sizeof(_g4_t_v17)) > _g4_s3 ? (33u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v18)) > _g4_s4 ? (36u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v19)) > _g4_s5 ? (44u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v20)) > _g4_s6 ? (48u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 33u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 51) == 0 )
    v1 = 0;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v12 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v12 == 3 || *(uint8_t *)v12 == 4 )
    {
      v13 = *(char **)(v12 + 4);
    }
    else
    {
      v13 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
        v13 = sub_1164450();
    }
    sub_7763C0((gameswf::String::Self *)&v16, v13);
    v15 = 1;
  }
  else
  {
    v16 = 1;
    LOWORD(v20) = -1;
    v17[0] = 0;
    BYTE2(v20) = 127;
    HIBYTE(v20) |= 1u;
    v15 = 0;
  }
  if ( (char *)(v1 + 40) != &v16 )
  {
    if ( v16 == -1 )
      v2 = v18 - 1;
    else
      v2 = v16 - 1;
    gameswf::String::resize((gameswf::String::Self *)(v1 + 40), v2);
    LOBYTE(v3) = *(uint8_t *)(v1 + 40);
    v4 = (gameswf::Self *)v17;
    if ( v16 == -1 )
      v4 = v19;
    if ( (uint8_t)(uintptr_t)v3 == 0xFF )
    {
      v3 = *(char **)(v1 + 44);
      v5 = *(gameswf::Self **)(v1 + 52);
    }
    else
    {
      v3 = (char *)(char)(uintptr_t)v3;
      v5 = (gameswf::Self *)(v1 + 41);
    }
    gameswf::Strcpy_s(v5, v3, v4);
    if ( (uint8_t *)(v20 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v16 == -1 )
      {
        v8 = v19;
        v9 = v18 - 1;
      }
      else
      {
        v8 = (gameswf::Self *)v17;
        v9 = v16 - 1;
      }
      v6 = 5381;
      if ( v9 > 0 )
      {
        v14 = v1;
        do
        {
          --v9;
          v10 = 33 * v6;
          v11 = *((uint8_t *)v8 + v9) + 32;
          if ( (uint8_t)(*((uint8_t *)v8 + v9) - 65) > 0x19u )
            v11 = *((uint8_t *)v8 + v9);
          v6 = v10 ^ v11;
        }
        while ( v9 != 0 );
        v1 = v14;
        v6 = v6 << 9 >> 9;
      }
      v20 = v6 & 0x7FFFFF | v20 & 0xFF800000;
    }
    else
    {
      v6 = (int)(v20 << 9) >> 9;
    }
    *(uint32_t *)(v1 + 56) = v6 & 0x7FFFFF | *(uint32_t *)(v1 + 56) & 0xFF800000;
  }
  sub_59CE50((int)(uintptr_t)(&v16));
  result = 0;
  if ( *(uint32_t *)(a1 + 16) > v15 )
    result = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v15)));
  *(uint8_t *)(v1 + 60) = result;
  *(uint8_t *)(v1 + 61) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::getStandardMember  (binary VA: 0x1164cf0)
// Original: gameswf::ASEvent::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASEvent::getStandardMember(uint32_t *a1, int a2, const gameswf::String::Self **a3)
{
  gameswf::ASObject::Self *v4;

  switch ( a2 )
  {
    case 31:
      gameswf::ASValue::setString(a3, (const gameswf::String::Self *)(a1 + 10));
      return 1;
    case 71:
      v4 = (gameswf::ASObject::Self *)a1[18];
      if ( v4 != nullptr && *(uint8_t *)(a1[17] + 2) == 0 )
      {
        gameswf::smart_ptr_proxy::set_ref(a1 + 17, 0);
        a1[18] = 0;
        v4 = nullptr;
      }
      goto LABEL_13;
    case 72:
      v4 = (gameswf::ASObject::Self *)a1[20];
      if ( v4 != nullptr && *(uint8_t *)(a1[19] + 2) == 0 )
      {
        gameswf::smart_ptr_proxy::set_ref(a1 + 19, 0);
        a1[20] = 0;
        v4 = nullptr;
      }
LABEL_13:
      gameswf::ASValue::setObject((gameswf::ASValue::Self *)a3, v4);
      return 1;
    case 73:
      gameswf::ASValue::setDouble((gameswf::ASValue::Self *)a3, (double)(a1[16] + 1));
      return 1;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::Construct  (binary VA: 0x1165210)
// Original: gameswf::ASEvent::ASEvent
// ----------------------------------------------------------------------------
gameswf::ASEvent::Self * gameswf::ASEvent::Construct(gameswf::ASEvent::Self *self, gameswf::Player::Self *a2, gameswf::Self *a3)
{
  gameswf::ASEvent::Self *result;

  gameswf::ASObject::ASObject(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20911C8);
  result = (gameswf::ASEvent::Self *)sub_776320((gameswf::ASEvent::Self *)((char *)self + 40), a3);
  *((uint8_t *)self + 60) = 0;
  *((uint8_t *)self + 61) = 0;
  *((uint32_t *)self + 16) = 1;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::newOp  (binary VA: 0x11652a0)
// Original: gameswf::ASEvent::newOp
// ----------------------------------------------------------------------------
gameswf::ASEvent::Self * gameswf::ASEvent::newOp(gameswf::ASEvent::Self *self)
{
  gameswf::ASEvent::Self *v1;

  v1 = (gameswf::ASEvent::Self *)opNew(0x54u);
  gameswf::ASEvent::Construct(v1, self, (gameswf::Self *)&unk_1B15112);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::createClass  (binary VA: 0x1166d80)
// Original: gameswf::ASEvent::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASEvent::createClass(gameswf::ASEvent::Self *self)
{
  gameswf::Self **v1;
  gameswf::String::Self *v2;
  gameswf::String::Self *v3;
  gameswf::String::Self *v4;
  gameswf::String::Self *v5;
  gameswf::String::Self *v6;
  gameswf::String::Self *v7;
  gameswf::String::Self *v8;
  typedef uint8_t _g4_t_v10[12];
  typedef const gameswf::String::Self *_g4_t_v11[3];
  typedef const gameswf::String::Self *_g4_t_v12[3];
  typedef const gameswf::String::Self *_g4_t_v13[3];
  typedef const gameswf::String::Self *_g4_t_v14[3];
  typedef const gameswf::String::Self *_g4_t_v15[3];
  typedef const gameswf::String::Self *_g4_t_v16[3];
  typedef const gameswf::String::Self *_g4_t_v17[3];
  typedef uint8_t _g4_t_v18[12];
  typedef uint8_t _g4_t_v19[12];
  typedef uint8_t _g4_t_v20[20];
  typedef char _g4_t_v21[20];
  typedef uint8_t _g4_t_v22[20];
  typedef char _g4_t_v23[20];
  typedef uint8_t _g4_t_v24[20];
  typedef char _g4_t_v25[20];
  typedef uint8_t _g4_t_v26[20];
  typedef char _g4_t_v27[20];
  typedef uint8_t _g4_t_v28[20];
  typedef char _g4_t_v29[20];
  typedef uint8_t _g4_t_v30[20];
  typedef char _g4_t_v31[20];
  typedef uint8_t _g4_t_v32[20];
  typedef char _g4_t_v33[20];
  typedef uint8_t _g4_t_v34[20];
  typedef uint8_t _g4_t_v35[20];
  typedef uint8_t _g4_t_v36[48];
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v13)) > _g4_s3 ? (40u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v14)) > _g4_s4 ? (52u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v15)) > _g4_s5 ? (64u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v16)) > _g4_s6 ? (76u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v17)) > _g4_s7 ? (88u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v18)) > _g4_s8 ? (100u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v19)) > _g4_s9 ? (112u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (124u + sizeof(_g4_t_v20)) > _g4_s10 ? (124u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v21)) > _g4_s11 ? (144u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (164u + sizeof(_g4_t_v22)) > _g4_s12 ? (164u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (184u + sizeof(_g4_t_v23)) > _g4_s13 ? (184u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (204u + sizeof(_g4_t_v24)) > _g4_s14 ? (204u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (224u + sizeof(_g4_t_v25)) > _g4_s15 ? (224u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (244u + sizeof(_g4_t_v26)) > _g4_s16 ? (244u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (264u + sizeof(_g4_t_v27)) > _g4_s17 ? (264u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (284u + sizeof(_g4_t_v28)) > _g4_s18 ? (284u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (304u + sizeof(_g4_t_v29)) > _g4_s19 ? (304u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (324u + sizeof(_g4_t_v30)) > _g4_s20 ? (324u + sizeof(_g4_t_v30)) : _g4_s20,
    _g4_s22 = (344u + sizeof(_g4_t_v31)) > _g4_s21 ? (344u + sizeof(_g4_t_v31)) : _g4_s21,
    _g4_s23 = (364u + sizeof(_g4_t_v32)) > _g4_s22 ? (364u + sizeof(_g4_t_v32)) : _g4_s22,
    _g4_s24 = (384u + sizeof(_g4_t_v33)) > _g4_s23 ? (384u + sizeof(_g4_t_v33)) : _g4_s23,
    _g4_s25 = (404u + sizeof(_g4_t_v34)) > _g4_s24 ? (404u + sizeof(_g4_t_v34)) : _g4_s24,
    _g4_s26 = (424u + sizeof(_g4_t_v35)) > _g4_s25 ? (424u + sizeof(_g4_t_v35)) : _g4_s25,
    _g4_s27 = (444u + sizeof(_g4_t_v36)) > _g4_s26 ? (444u + sizeof(_g4_t_v36)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 100u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 112u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 124u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 144u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 164u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 184u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 204u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 224u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 244u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 264u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 284u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 304u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 324u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 344u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 364u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 384u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 404u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 424u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 444u);

  sub_776320((gameswf::String::Self *)v20, (gameswf::Self *)"Event");
  v10[0] = 0;
  v10[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)(gameswf::ASEvent::init));
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v1,
    self,
    (const gameswf::String::Self *)v20,
    gameswf::ASEvent::newOp,
    (const gameswf::ASValue::Self *)v10,
    false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  sub_59CE50((int)(uintptr_t)(v20));
  sub_776320((gameswf::String::Self *)v21, (gameswf::Self *)"enterFrame");
  v2 = sub_1166B80((int *)self + 12, v21);
  LOWORD(v11[0]) = 0;
  v11[1] = nullptr;
  gameswf::ASValue::setString(v11, v2);
  sub_776320((gameswf::String::Self *)v22, (gameswf::Self *)"ENTER_FRAME");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v22,
    (const gameswf::ASValue::Self *)v11);
  sub_59CE50((int)(uintptr_t)(v22));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  sub_59CE50((int)(uintptr_t)(v21));
  sub_776320((gameswf::String::Self *)v23, (gameswf::Self *)"added");
  v3 = sub_1166B80((int *)self + 12, v23);
  LOWORD(v12[0]) = 0;
  v12[1] = nullptr;
  gameswf::ASValue::setString(v12, v3);
  sub_776320((gameswf::String::Self *)v24, (gameswf::Self *)"ADDED");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v24,
    (const gameswf::ASValue::Self *)v12);
  sub_59CE50((int)(uintptr_t)(v24));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  sub_59CE50((int)(uintptr_t)(v23));
  sub_776320((gameswf::String::Self *)v25, (gameswf::Self *)"addedToStage");
  v4 = sub_1166B80((int *)self + 12, v25);
  LOWORD(v13[0]) = 0;
  v13[1] = nullptr;
  gameswf::ASValue::setString(v13, v4);
  sub_776320((gameswf::String::Self *)v26, (gameswf::Self *)"ADDED_TO_STAGE");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v26,
    (const gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v26));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v25));
  sub_776320((gameswf::String::Self *)v27, (gameswf::Self *)"removed");
  v5 = sub_1166B80((int *)self + 12, v27);
  LOWORD(v14[0]) = 0;
  v14[1] = nullptr;
  gameswf::ASValue::setString(v14, v5);
  sub_776320((gameswf::String::Self *)v28, (gameswf::Self *)"REMOVED");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v28,
    (const gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v28));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v27));
  sub_776320((gameswf::String::Self *)v29, (gameswf::Self *)"removedFromStage");
  v6 = sub_1166B80((int *)self + 12, v29);
  LOWORD(v15[0]) = 0;
  v15[1] = nullptr;
  gameswf::ASValue::setString(v15, v6);
  sub_776320((gameswf::String::Self *)v30, (gameswf::Self *)"REMOVED_FROM_STAGE");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v30,
    (const gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v30));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v29));
  sub_776320((gameswf::String::Self *)v31, (gameswf::Self *)"complete");
  v7 = sub_1166B80((int *)self + 12, v31);
  LOWORD(v16[0]) = 0;
  v16[1] = nullptr;
  gameswf::ASValue::setString(v16, v7);
  sub_776320((gameswf::String::Self *)v32, (gameswf::Self *)"COMPLETE");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v32,
    (const gameswf::ASValue::Self *)v16);
  sub_59CE50((int)(uintptr_t)(v32));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  sub_59CE50((int)(uintptr_t)(v31));
  sub_776320((gameswf::String::Self *)v33, (gameswf::Self *)"resize");
  v8 = sub_1166B80((int *)self + 12, v33);
  LOWORD(v17[0]) = 0;
  v17[1] = nullptr;
  gameswf::ASValue::setString(v17, v8);
  sub_776320((gameswf::String::Self *)v34, (gameswf::Self *)"RESIZE");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v34,
    (const gameswf::ASValue::Self *)v17);
  sub_59CE50((int)(uintptr_t)(v34));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  sub_59CE50((int)(uintptr_t)(v33));
  v18[0] = 0;
  v18[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v18, (int)(uintptr_t)(gameswf::ASEvent::stopPropagation));
  sub_776320((gameswf::String::Self *)v35, (gameswf::Self *)"stopPropagation");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v1, (const gameswf::String::Self *)v35, (const gameswf::ASValue::Self *)v18);
  sub_59CE50((int)(uintptr_t)(v35));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
  v19[0] = 0;
  v19[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v19, (int)(uintptr_t)(gameswf::ASEvent::stopImmediatePropagation));
  sub_776320((gameswf::String::Self *)v36, (gameswf::Self *)"stopImmediatePropagation");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v1, (const gameswf::String::Self *)v36, (const gameswf::ASValue::Self *)v19);
  sub_59CE50((int)(uintptr_t)(v36));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::is  (binary VA: 0x116a9a0)
// Original: gameswf::ASEvent::is
// ----------------------------------------------------------------------------
bool gameswf::ASEvent::is(gameswf::ASEvent::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 51 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::Destroy  (binary VA: 0x116aa80)
// Original: gameswf::ASEvent::~ASEvent
// ----------------------------------------------------------------------------
void gameswf::ASEvent::Destroy(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEvent::Destroy_ea116acd0  (binary VA: 0x116acd0)
// Original: gameswf::ASEvent::~ASEvent
// ----------------------------------------------------------------------------
void gameswf::ASEvent::Destroy_ea116acd0(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}


