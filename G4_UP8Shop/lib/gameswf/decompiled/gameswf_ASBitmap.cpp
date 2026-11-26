#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASBitmap.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::newOp  (binary VA: 0x114dd40)
// Original: gameswf::ASBitmap::newOp
// ----------------------------------------------------------------------------
int gameswf::ASBitmap::newOp(gameswf::ASBitmap::Self *self)
{
  int v1;

  v1 = opNew(0x108u);
  gameswf::Character::Construct((gameswf::Character::Self *)v1, self, nullptr, 0, 64);
  *(uint32_t *)(v1 + 212) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2090A88);
  *(uint8_t *)(v1 + 150) = 0;
  _mm_storel_ps((double *)(v1 + 232), g4_m128_from<__m128>(0LL));
  _mm_storeh_ps((double *)(v1 + 240), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)(v1 + 248), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)(v1 + 256), g4_m128_from<__m128>(0LL));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::thisAlive  (binary VA: 0x114df80)
// Original: gameswf::ASBitmap::thisAlive
// ----------------------------------------------------------------------------
int gameswf::ASBitmap::thisAlive(gameswf::ASBitmap::Self *self)
{
  int result;

  gameswf::Character::thisAlive(self);
  result = *((uint32_t *)self + 53);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 76))(*((uint32_t *)self + 53));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::getStandardMember  (binary VA: 0x114ed70)
// Original: gameswf::ASBitmap::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASBitmap::getStandardMember(long double a1, gameswf::ASObject::Self **a2, int a3, gameswf::ASValue::Self *a4)
{
  if ( a3 != 83 )
    return gameswf::Character::getStandardMember(a1, (gameswf::ASObject::Self *)a2, a3, a4);
  gameswf::ASValue::setObject(a4, a2[53]);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::getBoundInternal  (binary VA: 0x114edd0)
// Original: gameswf::ASBitmap::getBoundInternal
// ----------------------------------------------------------------------------
gameswf::ASBitmap::Self * gameswf::ASBitmap::getBoundInternal(gameswf::ASBitmap::Self **self, gameswf::Rect::Self *a2)
{
  gameswf::ASBitmap::Self *result;

  result = (gameswf::ASBitmap::Self *)self;
  if ( *(self + 53) != nullptr )
  {
    *(uint32_t *)a2 = (uint32_t)(uintptr_t)(*(self + 54));
    *((uint32_t *)a2 + 1) = (uint32_t)(uintptr_t)(*(self + 55));
    *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(*(self + 56));
    result = *(self + 57);
    *((uint32_t *)a2 + 3) = (uint32_t)(uintptr_t)(result);
  }
  else
  {
    _mm_storel_ps((double *)a2, g4_m128_from<__m128>(0LL));
    _mm_storel_ps((double *)a2 + 1, g4_m128_from<__m128>(0LL));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::setStandardMember  (binary VA: 0x1150190)
// Original: gameswf::ASBitmap::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASBitmap::setStandardMember(long double a1, __m128 a2, gameswf::RefCounted::Self **a3, int a4, char **a5)
{
  int result;
  gameswf::RefCounted::Self *v6;
  gameswf::RefCounted::Self *v7;

  if ( a4 != 83 )
    return gameswf::Character::setStandardMember(a1, a2, (gameswf::Character::Self *)a3, a4, a5);
  v6 = nullptr;
  if ( *(uint8_t *)a5 == 5 )
  {
    v6 = (gameswf::RefCounted::Self *)a5[1];
    if ( v6 != nullptr && (*(uint8_t (**)(char *, int))(*(uint32_t *)v6 + 8))(a5[1], 65) == 0 )
      v6 = nullptr;
  }
  v7 = a3[53];
  result = 1;
  if ( v6 != v7 )
  {
    if ( v7 != nullptr )
      gameswf::RefCounted::dropRef(a3[53]);
    a3[53] = v6;
    result = 1;
    if ( v6 != nullptr )
    {
      gameswf::RefCounted::addRef(v6);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::clearRefs  (binary VA: 0x1150250)
// Original: gameswf::ASBitmap::clearRefs
// ----------------------------------------------------------------------------
int gameswf::ASBitmap::clearRefs(gameswf::RefCounted::Self **self, int a2)
{
  int result;

  gameswf::Character::clearRefs((gameswf::Character::Self *)self, a2);
  result = (int)(uintptr_t)(*(self + 53));
  if ( result != 0 && a2 > *(uint32_t *)(result + 20) )
  {
    result = gameswf::RefCounted::dropRef(*(self + 53));
    *(self + 53) = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::getTopmostMouseEntity  (binary VA: 0x1150380)
// Original: gameswf::ASBitmap::getTopmostMouseEntity
// ----------------------------------------------------------------------------
gameswf::ASBitmap::Self * gameswf::ASBitmap::getTopmostMouseEntity(gameswf::ASBitmap::Self *self, float a2, float a3)
{
  const gameswf::Matrix::Self *v3;
  gameswf::ASBitmap::Self *result;
  uint32_t v5[9];

  memset(v5, 0, 0x18u);
  v3 = *((const gameswf::Matrix::Self **)self + 17);
  v5[0] = 1065353216;
  v5[4] = 1065353216;
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v5, v3);
  result = nullptr;
  if ( a2 >= *((float *)self + 54)
    && a2 <= *((float *)self + 55)
    && a3 >= *((float *)self + 56)
    && a3 <= *((float *)self + 57) )
  {
    return self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::display  (binary VA: 0x1152620)
// Original: gameswf::ASBitmap::display
// ----------------------------------------------------------------------------
void gameswf::ASBitmap::display(gameswf::ASBitmap::Self *self)
{
  char *WorldMatrix;
  uint32_t *v2;
  char *WorldCxForm;
  gameswf::Root::Self **v4;
  gameswf::Root::Self *v5;
  gameswf::Root::Self *v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  typedef int64_t _g4_t_v11;
  typedef int _g4_t_v12[3];
  typedef int16_t _g4_t_v13;
  typedef int16_t _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v12)) > _g4_s1 ? (24u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v13)) > _g4_s2 ? (36u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v14)) > _g4_s3 ? (38u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 38u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  if ( *((uint8_t *)self + 148) == 0 || *((uint32_t *)self + 53) == 0 )
    return;
  if ( *((uint8_t *)self + 145) != 0 )
  {
    v9 = *((uint32_t *)self + 14);
    if ( v9 != 0 )
    {
      v10 = (uint32_t *)(v9 + 112);
      if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
      {
LABEL_15:
        *((uint32_t *)self + 28) = *v10;
        *((uint32_t *)self + 29) = v10[1];
        *((uint32_t *)self + 30) = v10[2];
        *((uint32_t *)self + 31) = v10[3];
        *((uint32_t *)self + 32) = v10[4];
        *((uint32_t *)self + 33) = v10[5];
        gameswf::Matrix::concatenate((gameswf::ASBitmap::Self *)((char *)self + 112), *((const gameswf::Matrix::Self **)self + 17));
        *((uint8_t *)self + 145) = 0;
        goto LABEL_4;
      }
      sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
      *((uint32_t *)self + 14) = 0;
    }
    v10 = (uint32_t *)(gameswf::Matrix::identity);
    goto LABEL_15;
  }
LABEL_4:
  if ( *((uint8_t *)self + 146) != 0 )
  {
    v7 = *((uint32_t *)self + 14);
    if ( v7 != 0 )
    {
      v8 = (uint32_t *)(v7 + 80);
      if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
      {
LABEL_12:
        *((uint32_t *)self + 20) = *v8;
        *((uint32_t *)self + 21) = v8[1];
        *((uint32_t *)self + 22) = v8[2];
        *((uint32_t *)self + 23) = v8[3];
        *((uint32_t *)self + 24) = v8[4];
        *((uint32_t *)self + 25) = v8[5];
        *((uint32_t *)self + 26) = v8[6];
        *((uint32_t *)self + 27) = v8[7];
        HIDWORD(v11) = *((uint32_t *)self + 16);
        LODWORD(v11) = (uint32_t)(uintptr_t)((char *)self + 80);
        gameswf::CxForm::concatenate(v11);
        *((uint8_t *)self + 146) = 0;
        goto LABEL_5;
      }
      sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
      *((uint32_t *)self + 14) = 0;
    }
    v8 = (uint32_t *)(gameswf::CxForm::identity);
    goto LABEL_12;
  }
LABEL_5:
  WorldMatrix = gameswf::Character::getWorldMatrix(self);
  v2 = (uint32_t *)(gameswf::s_render_handler);
  if ( gameswf::s_render_handler != nullptr )
  {
    gameswf::s_render_handler[29] = *(uint32_t *)WorldMatrix;
    v2[30] = *((uint32_t *)WorldMatrix + 1);
    v2[31] = *((uint32_t *)WorldMatrix + 2);
    v2[32] = *((uint32_t *)WorldMatrix + 3);
    v2[33] = *((uint32_t *)WorldMatrix + 4);
    v2[34] = *((uint32_t *)WorldMatrix + 5);
  }
  WorldCxForm = gameswf::Character::getWorldCxForm(self);
  v4 = (gameswf::Root::Self **)gameswf::s_render_handler;
  if ( gameswf::s_render_handler != nullptr )
  {
    gameswf::s_render_handler[35] = *(uint32_t *)WorldCxForm;
    v4[36] = *((gameswf::Root::Self **)WorldCxForm + 1);
    v4[37] = *((gameswf::Root::Self **)WorldCxForm + 2);
    v4[38] = *((gameswf::Root::Self **)WorldCxForm + 3);
    v4[39] = *((gameswf::Root::Self **)WorldCxForm + 4);
    v4[40] = *((gameswf::Root::Self **)WorldCxForm + 5);
    v4[41] = *((gameswf::Root::Self **)WorldCxForm + 6);
    v4[42] = *((gameswf::Root::Self **)WorldCxForm + 7);
    v5 = *(gameswf::Root::Self **)(*((uint32_t *)self + 53) + 64);
    v4[52] = (gameswf::Root::Self *)(&dword_0 + 1);
    v4[43] = v5;
    v4[44] = (gameswf::Root::Self *)gameswf::Matrix::identity[0];
    v4[45] = (gameswf::Root::Self *)gameswf::Matrix::identity[1];
    v4[46] = (gameswf::Root::Self *)gameswf::Matrix::identity[2];
    v4[47] = (gameswf::Root::Self *)gameswf::Matrix::identity[3];
    v6 = (gameswf::Root::Self *)gameswf::Matrix::identity[5];
    v4[48] = (gameswf::Root::Self *)gameswf::Matrix::identity[4];
    v4[49] = v6;
    LOWORD(v12[0]) = 0;
    v12[1] = (int)(uintptr_t)(self) + 232;
    v12[2] = (int)(uintptr_t)(&unk_1CC4ED4);
    v16 = *((uint32_t *)self + 54);
    v17 = *((uint32_t *)self + 55);
    v18 = *((uint32_t *)self + 56);
    v19 = *((uint32_t *)self + 57);
    v15 = 0;
    v20 = 0;
    v13 = 4;
    v14 = 6;
    gameswf::RenderHandler::draw(v4, (gameswf::Self *)v12);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::setBitmapData  (binary VA: 0x1159ce0)
// Original: gameswf::ASBitmap::setBitmapData
// ----------------------------------------------------------------------------
gameswf::ASBitmapData::Self * gameswf::ASBitmap::setBitmapData(gameswf::ASBitmap::Self *self, gameswf::ASBitmapData::Self *a2)
{
  gameswf::ASBitmapData::Self *result;
  float v3; // xmm4_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm0_4

  result = *((gameswf::ASBitmapData::Self **)self + 53);
  if ( a2 == result )
  {
    _mm_storel_ps((double *)self + 27, g4_m128_from<__m128>(0LL));
    _mm_storel_ps((double *)self + 28, g4_m128_from<__m128>(0LL));
    if ( a2 != nullptr )
      goto LABEL_6;
  }
  else
  {
    if ( result != nullptr )
      result = (gameswf::ASBitmapData::Self *)gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 53));
    *((uint32_t *)self + 53) = (uint32_t)(uintptr_t)(a2);
    if ( a2 != nullptr )
    {
      result = (gameswf::ASBitmapData::Self *)(gameswf::RefCounted::addRef(a2));
      *((uint32_t *)self + 55) = 0;
      *((uint32_t *)self + 54) = 0;
      *((uint32_t *)self + 57) = 0;
      *((uint32_t *)self + 56) = 0;
LABEL_6:
      v3 = (float)*((int *)a2 + 11);
      v4 = (float)*((int *)a2 + 10);
      v5 = fminf(v4, 0.0);
      v6 = fminf(v3, 0.0);
      v7 = fmaxf(v4, 0.0);
      v8 = fmaxf(0.0, v3);
      *((float *)self + 54) = v5;
      *((float *)self + 56) = v6;
      *((float *)self + 55) = v7;
      *((float *)self + 57) = v8;
      *((float *)self + 58) = v5;
      *((float *)self + 59) = v6;
      *((float *)self + 60) = v7;
      *((float *)self + 61) = v6;
      *((float *)self + 62) = v5;
      *((float *)self + 63) = v8;
      *((float *)self + 64) = v7;
      *((float *)self + 65) = v8;
      return result;
    }
    _mm_storel_ps((double *)self + 27, g4_m128_from<__m128>(0LL));
    _mm_storel_ps((double *)self + 28, g4_m128_from<__m128>(0LL));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::init  (binary VA: 0x1159e30)
// Original: gameswf::ASBitmap::init
// ----------------------------------------------------------------------------
gameswf::ASBitmapData::Self * gameswf::ASBitmap::init(int a1)
{
  gameswf::ASBitmap::Self *v1;
  gameswf::ASBitmapData::Self *v2;
  int v3;

  v1 = *(gameswf::ASBitmap::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 64) == 0 )
    v1 = nullptr;
  v2 = nullptr;
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5 )
  {
    v2 = *(gameswf::ASBitmapData::Self **)(v3 + 4);
    if ( v2 != nullptr
      && G4_VCALL<uint8_t>(v2, 8, 65) == 0 )
    {
      v2 = nullptr;
    }
  }
  return gameswf::ASBitmap::setBitmapData(v1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::is  (binary VA: 0x11620a0)
// Original: gameswf::ASBitmap::is
// ----------------------------------------------------------------------------
bool gameswf::ASBitmap::is(gameswf::ASBitmap::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 64 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::getCharacterDef  (binary VA: 0x11620c0)
// Original: gameswf::ASBitmap::getCharacterDef
// ----------------------------------------------------------------------------
int gameswf::ASBitmap::getCharacterDef()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::hitTest  (binary VA: 0x11620d0)
// Original: gameswf::ASBitmap::hitTest
// ----------------------------------------------------------------------------
bool gameswf::ASBitmap::hitTest(gameswf::ASBitmap::Self *self, float a2, float a3)
{
  return G4_VCALL<int>(self, 108, LODWORD(a2), LODWORD(a3)) != 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::Destroy  (binary VA: 0x1162330)
// Original: gameswf::ASBitmap::~ASBitmap
// ----------------------------------------------------------------------------
void gameswf::ASBitmap::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090A88);
  if ( *(self + 53) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 53));
  gameswf::Character::Destroy((gameswf::Character::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmap::Destroy_ea1162400  (binary VA: 0x1162400)
// Original: gameswf::ASBitmap::~ASBitmap
// ----------------------------------------------------------------------------
void gameswf::ASBitmap::Destroy_ea1162400(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090A88);
  if ( *(self + 53) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 53));
  gameswf::Character::Destroy((gameswf::Character::Self *)self);
  opDelete(self);
}


