#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASBitmapData.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::getPixel  (binary VA: 0x114eea0)
// Original: gameswf::ASBitmapData::getPixel
// ----------------------------------------------------------------------------
int gameswf::ASBitmapData::getPixel(int a1)
{
  uint32_t *v1;
  unsigned int v2;
  int v3;
  uint32_t *v4;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 65) == 0 )
    v1 = nullptr;
  v2 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v3 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v4 = (uint32_t *)v1[17];
  if ( v4 == nullptr )
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, 0.0);
  glitch::video::CImage::getPixel((glitch::video::CImage::Self *)&v6, v4, v2, v4[5] + ~v3);
  return gameswf::ASValue::setDouble(
           *(gameswf::ASValue::Self **)a1,
           (double)(int)(v6 & 0xFF00 | BYTE2(v6) | ((uint8_t)v6 << 16) | v6 & 0xFF000000));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::getStandardMember  (binary VA: 0x114efb0)
// Original: gameswf::ASBitmapData::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASBitmapData::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  if ( a2 == 8 )
  {
    gameswf::ASValue::setDouble(a3, (double)*(int *)(a1 + 40));
    return 1;
  }
  else if ( a2 == 9 )
  {
    gameswf::ASValue::setDouble(a3, (double)*(int *)(a1 + 44));
    return 1;
  }
  else
  {
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::createClass  (binary VA: 0x1159090)
// Original: gameswf::ASBitmapData::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASBitmapData::createClass(gameswf::ASBitmapData::Self *self)
{
  gameswf::Self **v1;
  typedef uint8_t _g4_t_v3[12];
  typedef uint8_t _g4_t_v4[12];
  typedef uint8_t _g4_t_v5[12];
  typedef uint8_t _g4_t_v6[20];
  typedef uint8_t _g4_t_v7[20];
  typedef uint8_t _g4_t_v8[48];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v6)) > _g4_s3 ? (36u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v7)) > _g4_s4 ? (56u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v8)) > _g4_s5 ? (76u + sizeof(_g4_t_v8)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 56u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 76u);

  sub_776320((gameswf::String::Self *)v6, (gameswf::Self *)"BitmapData");
  v3[0] = 0;
  v3[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v3, (int)(uintptr_t)((int (*)(gameswf::ASBitmapData::Self *, int, int, bool, int, int, int, int, int, int, int, int, ...))gameswf::ASBitmapData::init));
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v1,
    self,
    (const gameswf::String::Self *)v6,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASBitmapData::newOp,
    (const gameswf::ASValue::Self *)v3,
    false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v3);
  sub_59CE50((int)(uintptr_t)(v6));
  v4[0] = 0;
  v4[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v4, (int)(uintptr_t)(gameswf::ASBitmapData::draw));
  sub_776320((gameswf::String::Self *)v7, (gameswf::Self *)"draw");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v1, (const gameswf::String::Self *)v7, (const gameswf::ASValue::Self *)v4);
  sub_59CE50((int)(uintptr_t)(v7));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)(gameswf::ASBitmapData::getPixel));
  sub_776320((gameswf::String::Self *)v8, (gameswf::Self *)"getPixel");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v1, (const gameswf::String::Self *)v8, (const gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v8));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  return v1;
}



// ============================================================================
// Address:   0x11591f0 (size: 123 bytes)
// Symbol:    _ZN7gameswf12ASBitmapDataC1EPNS_6PlayerE
// Demangled: gameswf::ASBitmapData::ASBitmapData(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf12ASBitmapDataC2EPNS_6PlayerE'
void (**gameswf::ASBitmapData::ASBitmapData(
        gameswf::ASBitmapData::Self *self,
        gameswf::Player::Self *a2))(gameswf::ASBitmapData::Self * self)
{
  gameswf::ASObject::ASObject(self, a2);
  *((uint32_t *)self + 10) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090A08);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  return (void (**)(gameswf::ASBitmapData::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2090A08));
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::newOp  (binary VA: 0x1159270)
// Original: gameswf::ASBitmapData::newOp
// ----------------------------------------------------------------------------
gameswf::ASBitmapData::Self * gameswf::ASBitmapData::newOp(gameswf::ASBitmapData::Self *self)
{
  gameswf::ASBitmapData::Self *v1;

  v1 = (gameswf::ASBitmapData::Self *)opNew(0x48u);
  gameswf::ASBitmapData::ASBitmapData(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::setBitmapInfo  (binary VA: 0x11592c0)
// Original: gameswf::ASBitmapData::setBitmapInfo
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASBitmapData::setBitmapInfo(gameswf::ASBitmapData::Self *self, gameswf::BitmapInfo::Self *a2)
{
  int v2;
  gameswf::RefCounted::Self *result;

  v2 = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 5);
  result = *((gameswf::RefCounted::Self **)self + 16);
  *((uint32_t *)self + 10) = v2;
  if ( a2 != (gameswf::BitmapInfo::Self *)(result) )
  {
    if ( result != nullptr )
      gameswf::RefCounted::dropRef(result);
    *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(a2);
    return gameswf::RefCounted::addRef(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::renderList  (binary VA: 0x1159320)
// Original: gameswf::ASBitmapData::renderList
// ----------------------------------------------------------------------------
int gameswf::ASBitmapData::renderList(gameswf::ASBitmapData::Self *self)
{
  uint32_t *v1;
  void (*v2)(uint32_t *, int);
  int Root;
  int v4;
  int v5;
  int v6;
  gameswf::Character::Self *v7;
  int v8;
  int v9;
  unsigned int *v10;
  unsigned int v11;
  unsigned int v12;
  int *v13;
  gameswf::Character::Self *v14;
  gameswf::Character::Self *v15;
  int v16;
  int v17;
  gameswf::Self *WeakProxy;
  int v19;
  int v20;
  uint16_t *v21;
  uint16_t *v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  gameswf::Self *v27;
  uint32_t *v29;
  volatile int32_t *v30;
  volatile int32_t *v31;
  int result;
  int v33;
  uint16_t *v34;
  uint16_t *v35;
  int v36;
  int v37;
  uint32_t *v38;
  typedef void *_g4_t_v39;
  typedef int _g4_t_i;
  typedef int _g4_t_v41;
  typedef gameswf::RefCounted::Self *_g4_t_v42;
  typedef gameswf::RefCounted::Self *_g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef gameswf::Self **_g4_t_v46;
  typedef volatile int32_t *_g4_t_v47;
  typedef unsigned int _g4_t_v48[10];
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v39)) > _g4_s0 ? (4u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_i)) > _g4_s1 ? (48u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v41)) > _g4_s2 ? (48u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v42)) > _g4_s3 ? (52u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v43)) > _g4_s4 ? (56u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v44)) > _g4_s5 ? (56u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v45)) > _g4_s6 ? (56u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v46)) > _g4_s7 ? (60u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v47)) > _g4_s8 ? (68u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v48)) > _g4_s9 ? (72u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v49)) > _g4_s10 ? (112u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v50)) > _g4_s11 ? (116u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v51)) > _g4_s12 ? (120u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v52)) > _g4_s13 ? (124u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v53)) > _g4_s14 ? (128u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (132u + sizeof(_g4_t_v54)) > _g4_s15 ? (132u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v55)) > _g4_s16 ? (136u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (140u + sizeof(_g4_t_v56)) > _g4_s17 ? (140u + sizeof(_g4_t_v56)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 112u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 116u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 120u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 124u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 128u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 136u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 140u);

  (*(void (**)(uint32_t *, uint32_t))(*gameswf::s_render_handler + 32))(
    (uint32_t *)(gameswf::s_render_handler),
    *((uint32_t *)self + 16));
  (*(void (**)(uint32_t *, uint32_t))(*gameswf::s_render_handler + 52))(
    (uint32_t *)(gameswf::s_render_handler),
    *(uint32_t *)(*((uint32_t *)self + 4) + 12));
  v1 = (uint32_t *)(gameswf::s_render_handler);
  v2 = *(void (**)(uint32_t *, int))(*gameswf::s_render_handler + 56);
  Root = gameswf::ASObject::getRoot((gameswf::Player::Self **)self);
  v2(v1, Root);
  (*(void (**)(uint32_t *, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, float, uint32_t, float))(*gameswf::s_render_handler + 16))(
    (uint32_t *)(gameswf::s_render_handler),
    -1,
    0,
    0,
    *((uint32_t *)self + 10),
    *((uint32_t *)self + 11),
    0,
    (float)*((int *)self + 10),
    0,
    (float)*((int *)self + 11));
  memset(&v48[4], 0, 0x18u);
  v48[4] = 1065353216;
  v48[8] = 1065353216;
  v4 = *((uint32_t *)self + 13);
  if ( v4 <= 0 )
  {
    v43 = nullptr;
    v24 = (uint32_t *)((char *)self + 48);
    goto LABEL_78;
  }
  v5 = 0;
  v43 = nullptr;
  for ( i = 0; i < v4; ++i )
  {
    v8 = *((uint32_t *)self + 12) + v5;
    v9 = *(uint32_t *)(v8 + 8);
    if ( v9 != 0 && *(uint8_t *)(*(uint32_t *)(v8 + 4) + 2) == 0 )
    {
      v9 = 0;
      sub_7E5ED0((gameswf::Self **)(v8 + 4), nullptr);
      *(uint32_t *)(v8 + 8) = 0;
      v8 = *((uint32_t *)self + 12) + v5;
    }
    if ( *(uint32_t *)v8 == 0 )
    {
      v42 = *(gameswf::RefCounted::Self **)(v9 + 56);
      v46 = (gameswf::Self **)(v9 + 52);
      if ( v42 != nullptr && *(uint8_t *)(*(uint32_t *)(v9 + 52) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)(v9 + 52), nullptr);
        *(uint32_t *)(v9 + 56) = 0;
        v42 = nullptr;
      }
      if ( v42 != v43 )
      {
        if ( v43 != nullptr )
          gameswf::RefCounted::dropRef(v43);
        if ( v42 != nullptr )
          gameswf::RefCounted::addRef(v42);
      }
      v10 = *(unsigned int **)(v9 + 68);
      v48[4] = *v10;
      v48[5] = v10[1];
      v48[6] = v10[2];
      v48[7] = v10[3];
      v11 = v10[4];
      v12 = v10[5];
      v48[8] = v11;
      v48[9] = v12;
      v13 = *(int **)(v9 + 64);
      v49 = *v13;
      v50 = v13[1];
      v51 = v13[2];
      v52 = v13[3];
      v53 = v13[4];
      v54 = v13[5];
      v55 = v13[6];
      v56 = v13[7];
      *(uint32_t *)(v9 + 56) = 0;
      sub_7E5ED0(v46, nullptr);
      if ( *(uint32_t **)(v9 + 68) != (uint32_t *)(uintptr_t)(gameswf::Matrix::identity) )
      {
        v14 = *(gameswf::Character::Self **)(v9 + 56);
        *(uint32_t *)(v9 + 68) = (uint32_t)(uintptr_t)(gameswf::Matrix::identity);
        *(uint8_t *)(v9 + 145) = 1;
        *(uint8_t *)(v9 + 147) = 1;
        if ( v14 != nullptr )
        {
          if ( *(uint8_t *)(*(uint32_t *)(v9 + 52) + 2) != 0 )
          {
            gameswf::Character::invalidateBitmapCache(v14);
          }
          else
          {
            sub_7E5ED0(v46, nullptr);
            *(uint32_t *)(v9 + 56) = 0;
          }
        }
      }
      if ( *(uint32_t **)(v9 + 64) != (uint32_t *)(uintptr_t)(gameswf::CxForm::identity) )
      {
        *(uint32_t *)(v9 + 64) = (uint32_t)(uintptr_t)(gameswf::CxForm::identity);
        v15 = *(gameswf::Character::Self **)(v9 + 56);
        *(uint8_t *)(v9 + 146) = 1;
        if ( v15 != nullptr )
        {
          if ( *(uint8_t *)(*(uint32_t *)(v9 + 52) + 2) != 0 )
          {
            gameswf::Character::invalidateBitmapCache(v15);
          }
          else
          {
            sub_7E5ED0(v46, nullptr);
            *(uint32_t *)(v9 + 56) = 0;
          }
        }
      }
      v16 = *((uint32_t *)self + 12) + v5;
      v17 = *(uint32_t *)(v16 + 8);
      if ( v17 != 0 && *(uint8_t *)(*(uint32_t *)(v16 + 4) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)(v16 + 4), nullptr);
        *(uint32_t *)(v16 + 8) = 0;
        v17 = 0;
      }
      G4_VCALL<void>(v17, 284);
      *(uint32_t *)(v9 + 56) = (uint32_t)(uintptr_t)(v42);
      if ( v42 != nullptr )
      {
        WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v42);
        sub_7E5ED0(v46, WeakProxy);
        v19 = *(uint32_t *)(v9 + 76);
        if ( v19 != 0 )
          goto LABEL_35;
      }
      else
      {
        sub_7E5ED0(v46, nullptr);
        v19 = *(uint32_t *)(v9 + 76);
        if ( v19 != 0 )
          goto LABEL_35;
      }
      v39 = nullptr;
      v33 = opNew(0x94u);
      v34 = (uint16_t *)(v33 + 32);
      v19 = v33;
      *(uint32_t *)v33 = 1065353216;
      *(uint32_t *)(v33 + 8) = 1065353216;
      *(uint32_t *)(v33 + 16) = 1065353216;
      *(uint32_t *)(v33 + 24) = 1065353216;
      *(uint32_t *)(v33 + 4) = 0;
      *(uint32_t *)(v33 + 12) = 0;
      *(uint32_t *)(v33 + 20) = 0;
      *(uint32_t *)(v33 + 28) = 0;
      v45 = 24;
      if ( ((v33 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v33 + 32) = 0;
        v34 = (uint16_t *)(v33 + 33);
        v45 = 23;
      }
      if ( ((uint8_t)(uintptr_t)v34 & 2) != 0 )
      {
        *v34++ = 0;
        v45 -= 2;
      }
      memset(v34, 0, 4 * (v45 >> 2));
      v35 = &v34[2 * (v45 >> 2)];
      if ( (v45 & 2) != 0 )
      {
        *v35++ = 0;
        if ( (v45 & 1) == 0 )
          goto LABEL_70;
      }
      else if ( (v45 & 1) == 0 )
      {
LABEL_70:
        v36 = *(uint32_t *)(v33 + 92);
        *(uint32_t *)(v19 + 32) = 1065353216;
        v36 |= 0x7FFFFFu;
        *(uint32_t *)(v19 + 48) = 1065353216;
        *(uint32_t *)(v19 + 92) = v36;
        *(uint32_t *)(v19 + 56) = 0;
        *(uint32_t *)(v19 + 60) = 0;
        *(uint32_t *)(v19 + 64) = 0;
        *(uint32_t *)(v19 + 68) = 0;
        *(uint32_t *)(v19 + 72) = 0;
        *(uint8_t *)(v19 + 76) = 1;
        *(uint8_t *)(v19 + 77) = 0;
        *(uint8_t *)(v19 + 94) = BYTE2(v36) & 0x7F;
        *(uint16_t *)(v19 + 95) = HIBYTE(v36) | 1;
        *(uint8_t *)(v19 + 97) = 0;
        *(uint8_t *)(v19 + 98) = 0;
        *(uint32_t *)(v19 + 100) = 0;
        *(uint32_t *)(v19 + 104) = 1065353216;
        *(uint32_t *)(v19 + 108) = 0;
        *(uint32_t *)(v19 + 112) = 1065353216;
        *(uint32_t *)(v19 + 116) = 0;
        *(uint32_t *)(v19 + 120) = 0;
        *(uint32_t *)(v19 + 124) = 0;
        *(uint32_t *)(v19 + 128) = 0;
        *(uint32_t *)(v19 + 132) = 0;
        *(uint32_t *)(v19 + 136) = 0;
        *(uint32_t *)(v19 + 140) = 0;
        *(uint32_t *)(v19 + 144) = 0;
        *(uint32_t *)(v9 + 76) = v19;
LABEL_35:
        *(uint32_t *)(v19 + 32) = v48[4];
        *(uint32_t *)(v19 + 36) = v48[5];
        *(uint32_t *)(v19 + 40) = v48[6];
        *(uint32_t *)(v19 + 44) = v48[7];
        *(uint32_t *)(v19 + 48) = v48[8];
        *(uint32_t *)(v19 + 52) = v48[9];
        v6 = *(uint32_t *)(v9 + 76);
        *(uint8_t *)(v9 + 145) = 1;
        *(uint8_t *)(v9 + 147) = 1;
        *(uint32_t *)(v9 + 68) = v6 + 32;
        if ( *(uint32_t *)(v9 + 56) != 0 )
        {
          if ( *(uint8_t *)(*(uint32_t *)(v9 + 52) + 2) == 0 )
          {
            sub_7E5ED0(v46, nullptr);
            v6 = *(uint32_t *)(v9 + 76);
            *(uint32_t *)(v9 + 56) = 0;
            if ( v6 == 0 )
            {
LABEL_38:
              v39 = nullptr;
              v20 = opNew(0x94u);
              v21 = (uint16_t *)(v20 + 32);
              v6 = v20;
              *(uint32_t *)v20 = 1065353216;
              *(uint32_t *)(v20 + 8) = 1065353216;
              *(uint32_t *)(v20 + 16) = 1065353216;
              *(uint32_t *)(v20 + 24) = 1065353216;
              *(uint32_t *)(v20 + 4) = 0;
              *(uint32_t *)(v20 + 12) = 0;
              *(uint32_t *)(v20 + 20) = 0;
              *(uint32_t *)(v20 + 28) = 0;
              v44 = 24;
              if ( ((v20 + 32) & 1) != 0 )
              {
                *(uint8_t *)(v20 + 32) = 0;
                v21 = (uint16_t *)(v20 + 33);
                v44 = 23;
              }
              if ( ((uint8_t)(uintptr_t)v21 & 2) != 0 )
              {
                *v21++ = 0;
                v44 -= 2;
              }
              memset(v21, 0, 4 * (v44 >> 2));
              v22 = &v21[2 * (v44 >> 2)];
              if ( (v44 & 2) != 0 )
              {
                *v22++ = 0;
                if ( (v44 & 1) == 0 )
                  goto LABEL_44;
              }
              else if ( (v44 & 1) == 0 )
              {
LABEL_44:
                v23 = *(uint32_t *)(v20 + 92);
                *(uint32_t *)(v6 + 32) = 1065353216;
                v23 |= 0x7FFFFFu;
                *(uint32_t *)(v6 + 48) = 1065353216;
                *(uint32_t *)(v6 + 92) = v23;
                *(uint32_t *)(v6 + 56) = 0;
                *(uint32_t *)(v6 + 60) = 0;
                *(uint32_t *)(v6 + 64) = 0;
                *(uint32_t *)(v6 + 68) = 0;
                *(uint32_t *)(v6 + 72) = 0;
                *(uint8_t *)(v6 + 76) = 1;
                *(uint8_t *)(v6 + 77) = 0;
                *(uint8_t *)(v6 + 94) = BYTE2(v23) & 0x7F;
                *(uint16_t *)(v6 + 95) = HIBYTE(v23) | 1;
                *(uint8_t *)(v6 + 97) = 0;
                *(uint8_t *)(v6 + 98) = 0;
                *(uint32_t *)(v6 + 100) = 0;
                *(uint32_t *)(v6 + 104) = 1065353216;
                *(uint32_t *)(v6 + 108) = 0;
                *(uint32_t *)(v6 + 112) = 1065353216;
                *(uint32_t *)(v6 + 116) = 0;
                *(uint32_t *)(v6 + 120) = 0;
                *(uint32_t *)(v6 + 124) = 0;
                *(uint32_t *)(v6 + 128) = 0;
                *(uint32_t *)(v6 + 132) = 0;
                *(uint32_t *)(v6 + 136) = 0;
                *(uint32_t *)(v6 + 140) = 0;
                *(uint32_t *)(v6 + 144) = 0;
                *(uint32_t *)(v9 + 76) = v6;
                goto LABEL_5;
              }
              *(uint8_t *)v22 = 0;
              goto LABEL_44;
            }
LABEL_5:
            *(uint32_t *)v6 = v49;
            *(uint32_t *)(v6 + 4) = v50;
            *(uint32_t *)(v6 + 8) = v51;
            *(uint32_t *)(v6 + 12) = v52;
            *(uint32_t *)(v6 + 16) = v53;
            *(uint32_t *)(v6 + 20) = v54;
            *(uint32_t *)(v6 + 24) = v55;
            *(uint32_t *)(v6 + 28) = v56;
            *(uint32_t *)(v9 + 64) = *(uint32_t *)(v9 + 76);
            v7 = *(gameswf::Character::Self **)(v9 + 56);
            *(uint8_t *)(v9 + 146) = 1;
            if ( v7 != nullptr )
            {
              if ( *(uint8_t *)(*(uint32_t *)(v9 + 52) + 2) != 0 )
              {
                gameswf::Character::invalidateBitmapCache(v7);
              }
              else
              {
                sub_7E5ED0(v46, nullptr);
                *(uint32_t *)(v9 + 56) = 0;
              }
            }
            v43 = v42;
            goto LABEL_9;
          }
          gameswf::Character::invalidateBitmapCache(*(gameswf::Character::Self **)(v9 + 56));
          v6 = *(uint32_t *)(v9 + 76);
        }
        if ( v6 == 0 )
          goto LABEL_38;
        goto LABEL_5;
      }
      *(uint8_t *)v35 = 0;
      goto LABEL_70;
    }
LABEL_9:
    v5 += 12;
    v4 = *((uint32_t *)self + 13);
  }
  v24 = (uint32_t *)((char *)self + 48);
  if ( v4 > 0 )
  {
    v41 = *((uint32_t *)self + 13);
    v25 = 0;
    v26 = 0;
    do
    {
      v27 = *(gameswf::Self **)(*v24 + v26 + 4);
      if ( v27 != nullptr && (*(uint16_t *)v27)-- == 1 )
      {
        v39 = nullptr;
        gameswf::free_internal(v27);
      }
      ++v25;
      v26 += 12;
    }
    while ( v25 != v41 );
    goto LABEL_52;
  }
LABEL_78:
  if ( v4 < 0 )
  {
    v37 = 12 * v4;
    do
    {
      v38 = (uint32_t *)(*v24 + v37);
      if ( v38 != nullptr )
      {
        *v38 = 0;
        v38[1] = 0;
        v38[2] = 0;
      }
      v37 += 12;
      ++v4;
    }
    while ( v4 != 0 );
  }
LABEL_52:
  v29 = (uint32_t *)(gameswf::s_render_handler);
  *((uint32_t *)self + 13) = 0;
  G4_VCALL<void>(v29, 20, v39);
  (*(void (**)(uint32_t *, uint32_t))(*gameswf::s_render_handler + 52))((uint32_t *)(gameswf::s_render_handler), 0);
  (*(void (**)(uint32_t *, uint32_t))(*gameswf::s_render_handler + 56))((uint32_t *)(gameswf::s_render_handler), 0);
  memset(v48, 0, 16);
  glitch::video::IVideoDriver::createScreenShot(
    (int *)&v47,
    *(glitch::video::IVideoDriver::Self **)(*(uint32_t *)(*((uint32_t *)self + 4) + 12) + 44),
    v48);
  v30 = v47;
  if ( v47 != nullptr )
    __sync_add_and_fetch(v47 + 1, 1u);
  v31 = *((volatile int32_t **)self + 17);
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(v30);
  if ( v31 != nullptr )
    sub_5459C0(v31);
  (*(void (**)(uint32_t *, uint32_t))(*gameswf::s_render_handler + 32))((uint32_t *)(gameswf::s_render_handler), 0);
  if ( v47 != nullptr )
    sub_5459C0(v47);
  result = (int)(uintptr_t)(v43);
  if ( v43 != nullptr )
    return gameswf::RefCounted::dropRef(v43);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::init  (binary VA: 0x115e140)
// Original: gameswf::ASBitmapData::init
// ----------------------------------------------------------------------------
int gameswf::ASBitmapData::init(gameswf::ASBitmapData::Self *self, int a2, int a3, bool a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, ...)
{
  int result;
  int v13;
  char *v14;
  gameswf::Self *v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *v17;
  int v30;
  va_list va;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[11];
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v24)) > _g4_s6 ? (36u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v25)) > _g4_s7 ? (80u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (81u + sizeof(_g4_t_v26)) > _g4_s8 ? (81u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v27)) > _g4_s9 ? (84u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v28)) > _g4_s10 ? (92u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v29)) > _g4_s11 ? (96u + sizeof(_g4_t_v29)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 81u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);

  va_start(va, a12);
  result = a3;
  if ( *((uint32_t *)self + 16) == 0 )
  {
    *((uint32_t *)self + 10) = a2;
    *((uint32_t *)self + 11) = a3;
    v24[2] = a3;
    v24[1] = a2;
    LOWORD(v29) = -1;
    v24[0] = 6;
    BYTE2(v29) = 127;
    HIBYTE(v29) |= 1u;
    v13 = *((uint32_t *)self + 11);
    v24[3] = *((uint32_t *)self + 10);
    memset(&v24[5], 0, 24);
    v25 = 1;
    v26 = 0;
    v24[4] = v13;
    gameswf::String::resize((gameswf::String::Self *)&v25, 10);
    if ( v25 == -1 )
    {
      v14 = v27;
      v15 = v28;
    }
    else
    {
      v14 = (char *)v25;
      v15 = (gameswf::Self *)&v26;
    }
    gameswf::Strcpy_s(v15, v14, (gameswf::Self *)"BitmapData");
    v29 |= 0x7FFFFFu;
    v16 = (gameswf::RefCounted::Self *)(*(int (**)(uint32_t *, uint32_t *, int, int, int, int, int, int))(*gameswf::s_render_handler + 8))(
                                   (uint32_t *)(gameswf::s_render_handler),
                                   v24,
                                   v18,
                                   v19,
                                   v20,
                                   v21,
                                   v22,
                                   v23);
    v17 = *((gameswf::RefCounted::Self **)self + 16);
    if ( v16 != v17 )
    {
      if ( v17 != nullptr )
      {
        v30 = (int)(uintptr_t)(v16);
        gameswf::RefCounted::dropRef(v17);
        v16 = (gameswf::RefCounted::Self *)v30;
      }
      *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v16);
      if ( v16 != nullptr )
        gameswf::RefCounted::addRef(v16);
    }
    sub_59CE50((int)(uintptr_t)(&v25));
    return sub_5ED480(g4_va_cast<int *>(va));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::init  (binary VA: 0x115e2c0)
// Original: gameswf::ASBitmapData::init
// ----------------------------------------------------------------------------
int gameswf::ASBitmapData::init(int a1)
{
  char v1; // di
  int v2;
  gameswf::ASBitmapData::Self *v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v10 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v1 = 1;
  v11 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v2 = -1;
  if ( *(int *)(a1 + 16) > 2 )
  {
    v1 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
    if ( *(int *)(a1 + 16) > 3 )
      v2 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 9)));
  }
  v3 = *(gameswf::ASBitmapData::Self **)(a1 + 4);
  if ( v3 != nullptr && G4_VCALL<uint8_t>(v3, 8, 65) == 0 )
    v3 = nullptr;
  return gameswf::ASBitmapData::init(v3, v10, v11, v1, v2, v5, v6, v7, v8, v9, v10, v11);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::draw  (binary VA: 0x1161c30)
// Original: gameswf::ASBitmapData::draw
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASBitmapData::draw(int a1)
{
  gameswf::Player::Self **v1;
  gameswf::Self *result;
  gameswf::RefCounted::Self *v3;
  gameswf::Self *WeakProxy;
  gameswf::Player::Self *v5;
  gameswf::Player::Self *v6;
  int v7;
  gameswf::Player::Self *v8;
  uint32_t *v9;
  gameswf::Self *v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  gameswf::RefCounted::Self *v17;
  gameswf::Player::Self *v18;
  int i;
  int v20;
  int v21;
  int v22;
  typedef int _g4_t_Root;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef gameswf::RefCounted::Self *_g4_t_v28;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_Root)) > _g4_s0 ? (8u + sizeof(_g4_t_Root)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v26)) > _g4_s3 ? (48u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v27)) > _g4_s4 ? (52u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v28)) > _g4_s5 ? (56u + sizeof(_g4_t_v28)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_Root &Root = *reinterpret_cast<_g4_t_Root *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);

  v1 = *(gameswf::Player::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 65) == 0 )
    v1 = nullptr;
  result = (gameswf::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20));
  if ( *(uint8_t *)result == 5 )
  {
    v3 = *((gameswf::RefCounted::Self **)result + 1);
    if ( v3 != nullptr )
    {
      result = (gameswf::Self *)G4_VCALL<int>(v3, 8, 1);
      if ( (uint8_t)(uintptr_t)result != 0 )
      {
        v28 = v3;
        v27 = nullptr;
        v26 = 0;
        WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v3);
        sub_7E5ED0(&v27, WeakProxy);
        v5 = v1[13];
        v6 = v1[14];
        v7 = (int)(uintptr_t)(v5) + 1;
        if ( (int)(uintptr_t)((char *)v5 + 1) <= (int)(uintptr_t)(v6) || v1[15] != nullptr )
        {
          v8 = v1[12];
        }
        else
        {
          v18 = (gameswf::Player::Self *)(v7 + (v7 >> 1));
          v1[14] = v18;
          if ( v18 != nullptr )
          {
            if ( v1[12] != nullptr )
              v8 = (gameswf::Player::Self *)gameswf::realloc_internal(v1[12], 12 * (uint32_t)(uintptr_t)(v18), 12 * (uint32_t)(uintptr_t)(v6));
            else
              v8 = (gameswf::Player::Self *)gameswf::malloc_internal(12 * (uint32_t)(uintptr_t)(v18));
            v1[12] = v8;
            v5 = v1[13];
          }
          else
          {
            if ( v1[12] != nullptr )
            {
              gameswf::free_internal(v1[12]);
              v5 = v1[13];
            }
            v1[12] = nullptr;
            v8 = nullptr;
          }
        }
        v9 = (uint32_t *)((char *)v8 + 12 * (uint32_t)(uintptr_t)(v5));
        if ( v9 != nullptr )
        {
          *v9 = v26;
          v10 = v27;
          v11 = v27 == nullptr;
          v9[1] = (uint32_t)(uintptr_t)(v27);
          if ( !v11 )
            ++*(uint16_t *)v10;
          v9[2] = (uint32_t)(uintptr_t)(v28);
        }
        v1[13] = (gameswf::Player::Self *)v7;
        Root = gameswf::ASObject::getRoot(v1);
        v24 = (int)(uintptr_t)(v1);
        v25[0] = (unsigned int)(uintptr_t)(v1);
        gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v1);
        v12 = *(uint32_t *)(Root + 256);
        if ( v12 == 0 )
          goto LABEL_17;
        v13 = *(uint32_t *)(v12 + 4);
        v14 = 65599
            * (((BYTE2(v24) + 65599 * (HIBYTE(v24) + 352988219)) << 6)
             + BYTE1(v24)
             + 0xFFFF * (BYTE2(v24) + 65599 * (HIBYTE(v24) + 352988219)))
            + (uint8_t)v24;
        v15 = v14 & v13;
        v16 = (int *)(v12 + 16 * (v14 & v13) + 8);
        if ( *v16 == -2 || v15 != (*(uint32_t *)(v12 + 16 * (v14 & v13) + 12) & v13) )
          goto LABEL_17;
        for ( i = *(uint32_t *)(v12 + 16 * (v14 & v13) + 12); v14 != i || v16[2] != v24; i = *(uint32_t *)(v12 + 16 * v15 + 12) )
        {
          v15 = *v16;
          if ( *v16 == -1 )
            goto LABEL_17;
          v16 = (int *)(v12 + 16 * v15 + 8);
        }
        if ( v15 >= 0 )
        {
          v20 = 16 * v15;
          v17 = (gameswf::RefCounted::Self *)v25[0];
          v21 = v12 + v20 + 8;
          v22 = *(uint32_t *)(v12 + v20 + 20);
          if ( v25[0] == v22 )
            goto LABEL_19;
          if ( v22 != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v12 + v20 + 20));
          *(uint32_t *)(v21 + 12) = v25[0];
          if ( v17 != nullptr )
          {
            gameswf::RefCounted::addRef(v17);
            v17 = (gameswf::RefCounted::Self *)v25[0];
            goto LABEL_19;
          }
        }
        else
        {
LABEL_17:
          gameswf::hash_gameswf_ASBitmapData_gam_83cea1::add(
            (gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *)(Root + 256),
            (int)(uintptr_t)(&v24),
            (int)(uintptr_t)(v25));
        }
        v17 = (gameswf::RefCounted::Self *)v25[0];
LABEL_19:
        if ( v17 != nullptr )
          gameswf::RefCounted::dropRef(v17);
        result = v27;
        if ( v27 != nullptr )
        {
          v11 = (*(uint16_t *)v27)-- == 1;
          if ( v11 )
            return (gameswf::Self *)gameswf::free_internal(result);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::is  (binary VA: 0x1161f30)
// Original: gameswf::ASBitmapData::is
// ----------------------------------------------------------------------------
bool gameswf::ASBitmapData::is(gameswf::ASBitmapData::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 65 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::Destroy  (binary VA: 0x1162e40)
// Original: gameswf::ASBitmapData::~ASBitmapData
// ----------------------------------------------------------------------------
void gameswf::ASBitmapData::Destroy(gameswf::ASBitmapData::Self *self)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  gameswf::ASObject::Self *v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  uint32_t *v11;
  int v12;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090A08);
  if ( *((uint32_t *)self + 17) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 17));
  if ( *((uint32_t *)self + 16) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 16));
  v1 = (uint32_t *)((char *)self + 48);
  v2 = *((uint32_t *)self + 13);
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v10 = 12 * v2;
      do
      {
        v11 = (uint32_t *)(*v1 + v10);
        if ( v11 != nullptr )
        {
          *v11 = 0;
          v11[1] = 0;
          v11[2] = 0;
        }
        v10 += 12;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    v12 = *((uint32_t *)self + 13);
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = *(gameswf::Self **)(*v1 + v4 + 4);
      if ( v5 != nullptr && (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      ++v3;
      v4 += 12;
    }
    while ( v3 != v12 );
  }
  v7 = (gameswf::ASObject::Self *)(self);
  v8 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 13) = 0;
  if ( v8 == 0 )
  {
    v9 = *((gameswf::Self **)self + 12);
    *((uint32_t *)self + 14) = 0;
    if ( v9 != nullptr )
      gameswf::free_internal(v9);
    v7 = (gameswf::ASObject::Self *)(self);
    *((uint32_t *)self + 12) = 0;
  }
  gameswf::ASObject::Destroy(v7);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapData::Destroy_ea1163020  (binary VA: 0x1163020)
// Original: gameswf::ASBitmapData::~ASBitmapData
// ----------------------------------------------------------------------------
void gameswf::ASBitmapData::Destroy_ea1163020(gameswf::ASBitmapData::Self *self)
{
  int v1;
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  gameswf::ASObject::Self *v8;
  int v9;
  gameswf::Self *v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090A08);
  if ( *((uint32_t *)self + 17) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 17));
  if ( *((uint32_t *)self + 16) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 16));
  v1 = *((uint32_t *)self + 13);
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v11 = 12 * v1;
      do
      {
        v12 = (uint32_t *)(*((uint32_t *)self + 12) + v11);
        if ( v12 != nullptr )
        {
          *v12 = 0;
          v12[1] = 0;
          v12[2] = 0;
        }
        v11 += 12;
        ++v1;
      }
      while ( v1 != 0 );
    }
  }
  else
  {
    v2 = (uint32_t *)((char *)self + 48);
    v3 = 0;
    v4 = *((uint32_t *)self + 13);
    v5 = 0;
    do
    {
      v6 = *(gameswf::Self **)(*v2 + v5 + 4);
      if ( v6 != nullptr && (*(uint16_t *)v6)-- == 1 )
      {
        v13 = v2;
        gameswf::free_internal(v6);
        v2 = v13;
      }
      ++v3;
      v5 += 12;
    }
    while ( v3 != v4 );
  }
  v8 = (gameswf::ASObject::Self *)(self);
  v9 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 13) = 0;
  if ( v9 == 0 )
  {
    v10 = *((gameswf::Self **)self + 12);
    *((uint32_t *)self + 14) = 0;
    if ( v10 != nullptr )
      gameswf::free_internal(v10);
    v8 = (gameswf::ASObject::Self *)(self);
    *((uint32_t *)self + 12) = 0;
  }
  gameswf::ASObject::Destroy(v8);
  opDelete(self);
}


