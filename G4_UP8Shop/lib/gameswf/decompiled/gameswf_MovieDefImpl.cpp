#include "Core/Utils/DecompTypes.h"
#include "gameswf_MovieDefImpl.h"

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::createRoot  (binary VA: 0x10a2280)
// Original: gameswf::MovieDefImpl::createRoot
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::MovieDefImpl::createRoot(gameswf::MovieDefImpl::Self *self)
{
  gameswf::Player::Self *v2;
  gameswf::Root::Self *v3;
  gameswf::Root::Self *v4;
  gameswf::Player::Self *v5;
  const char *GameSwfVersion;
  gameswf::Self *v7;
  int v8;
  char *v9;
  gameswf::Self *v10;
  int StandardMemberID;
  typedef gameswf::Player::Self *_g4_t_v12;
  typedef gameswf::Self *_g4_t_v13;
  typedef size_t _g4_t_v14;
  typedef gameswf::Character::Self *_g4_t_SpriteInstance;
  typedef uint32_t _g4_t_v16[3];
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef gameswf::Self *_g4_t_v19;
  typedef int16_t _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v13)) > _g4_s1 ? (0u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v14)) > _g4_s2 ? (4u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_SpriteInstance)) > _g4_s3 ? (8u + sizeof(_g4_t_SpriteInstance)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v16)) > _g4_s4 ? (16u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (29u + sizeof(_g4_t_v18)) > _g4_s6 ? (29u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (46u + sizeof(_g4_t_v21)) > _g4_s9 ? (46u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (47u + sizeof(_g4_t_v22)) > _g4_s10 ? (47u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v23)) > _g4_s11 ? (60u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (61u + sizeof(_g4_t_v24)) > _g4_s12 ? (61u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v25)) > _g4_s13 ? (72u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v26)) > _g4_s14 ? (76u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (78u + sizeof(_g4_t_v27)) > _g4_s15 ? (78u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (79u + sizeof(_g4_t_v28)) > _g4_s16 ? (79u + sizeof(_g4_t_v28)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_SpriteInstance &SpriteInstance = *reinterpret_cast<_g4_t_SpriteInstance *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 29u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 46u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 47u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 61u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 78u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 79u);

  if ( gameswf::s_use_cached_movie_instance != 0 && *((uint32_t *)self + 53) != 0 )
    return *((gameswf::Root::Self **)self + 53);
  v2 = *((gameswf::Player::Self **)self + 6);
  if ( v2 != nullptr && *(uint8_t *)(*((uint32_t *)self + 5) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 5, nullptr);
    *((uint32_t *)self + 6) = 0;
    v2 = nullptr;
  }
  v12 = v2;
  v3 = (gameswf::Root::Self *)opNew(0x140u);
  gameswf::Root::Construct(v3, v12, self);
  if ( gameswf::s_use_cached_movie_instance != 0 )
  {
    v4 = *((gameswf::Root::Self **)self + 53);
    if ( v3 != v4 )
    {
      if ( v4 != nullptr )
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 53));
      *((uint32_t *)self + 53) = (uint32_t)(uintptr_t)(v3);
      if ( v3 != nullptr )
        gameswf::RefCounted::addRef(v3);
    }
  }
  v5 = *((gameswf::Player::Self **)self + 6);
  if ( v5 != nullptr && *(uint8_t *)(*((uint32_t *)self + 5) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 5, nullptr);
    *((uint32_t *)self + 6) = 0;
    v5 = nullptr;
  }
  SpriteInstance = (gameswf::Character::Self *)gameswf::Player::createSpriteInstance(v5, self, nullptr, nullptr, -1);
  GameSwfVersion = gameswf::getGameSwfVersion();
  v17 = 1;
  v18 = 0;
  if ( GameSwfVersion != nullptr )
  {
    v13 = (gameswf::Self *)GameSwfVersion;
    v14 = strlen(GameSwfVersion);
    gameswf::String::resize((gameswf::String::Self *)&v17, v14);
    v7 = (gameswf::Self *)&v18;
    if ( v17 == -1 )
      v7 = v19;
    gameswf::Strcpy_s(v7, (char *)(v14 + 1), v13);
  }
  v20 = -1;
  v21 = 127;
  v22 |= 1u;
  v8 = *((uint32_t *)self + 6);
  if ( v8 != 0 && *(uint8_t *)(*((uint32_t *)self + 5) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 5, nullptr);
    *((uint32_t *)self + 6) = 0;
    v8 = 0;
  }
  v9 = gameswf::PermanentStringCache::get((int **)(v8 + 48), (const gameswf::String::Self *)&v17);
  LOWORD(v16[0]) = 0;
  v16[1] = 0;
  gameswf::ASValue::setString((gameswf::ASValue::Self *)v16, (const gameswf::String::Self *)v9);
  v23 = 1;
  v24 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v23, 8);
  v10 = (gameswf::Self *)&v24;
  if ( v23 == -1 )
    v10 = v25;
  gameswf::Strcpy_s(v10, byte_9, (gameswf::Self *)"$version");
  v26 = -1;
  v27 = 127;
  v28 |= 1u;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v23);
  if ( StandardMemberID == -1
    || G4_VCALL<uint8_t>(SpriteInstance, 32, StandardMemberID, v16) == 0 )
  {
    G4_VCALL<void>(SpriteInstance, 48, &v23, v16);
    if ( v23 != -1 )
      goto LABEL_28;
LABEL_31:
    if ( (v28 & 1) != 0 )
      gameswf::free_internal(v25);
    goto LABEL_28;
  }
  if ( v23 == -1 )
    goto LABEL_31;
LABEL_28:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  if ( v17 == -1 && (v22 & 1) != 0 )
    gameswf::free_internal(v19);
  gameswf::Root::setRootMovie(v3, SpriteInstance);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::createInstance  (binary VA: 0x10a25b0)
// Original: gameswf::MovieDefImpl::createInstance
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::MovieDefImpl::createInstance(gameswf::MovieDefImpl::Self *self)
{
  return gameswf::MovieDefImpl::createRoot(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getFrameRate  (binary VA: 0x10aa5e0)
// Original: gameswf::MovieDefImpl::getFrameRate
// ----------------------------------------------------------------------------
long double gameswf::MovieDefImpl::getFrameRate(gameswf::MovieDefImpl::Self *self)
{
  return *((float *)self + 44);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getVersion  (binary VA: 0x10aa5f0)
// Original: gameswf::MovieDefImpl::getVersion
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getVersion(gameswf::MovieDefImpl::Self *self)
{
  return *((uint32_t *)self + 45);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getCreateBitmaps  (binary VA: 0x10aa600)
// Original: gameswf::MovieDefImpl::getCreateBitmaps
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getCreateBitmaps(gameswf::MovieDefImpl::Self *self)
{
  return *((uint32_t *)self + 38);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getCreateFontShapes  (binary VA: 0x10aa610)
// Original: gameswf::MovieDefImpl::getCreateFontShapes
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getCreateFontShapes(gameswf::MovieDefImpl::Self *self)
{
  return *((uint32_t *)self + 39);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getBitmapInfoCount  (binary VA: 0x10aa620)
// Original: gameswf::MovieDefImpl::getBitmapInfoCount
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getBitmapInfoCount(gameswf::MovieDefImpl::Self *self)
{
  return *((uint32_t *)self + 35);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getBitmapInfo  (binary VA: 0x10aa630)
// Original: gameswf::MovieDefImpl::getBitmapInfo
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getBitmapInfo(gameswf::MovieDefImpl::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 34) + 4 * a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::visitImportedMovies  (binary VA: 0x10aa650)
// Original: gameswf::MovieDefImpl::visitImportedMovies
// ----------------------------------------------------------------------------
void gameswf::MovieDefImpl::visitImportedMovies()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::setJpegLoader  (binary VA: 0x10aa660)
// Original: gameswf::MovieDefImpl::setJpegLoader
// ----------------------------------------------------------------------------
gameswf::MovieDefImpl::Self * gameswf::MovieDefImpl::setJpegLoader(gameswf::MovieDefImpl::Self *self, gameswf::jpeg::input::Self *a2)
{
  *((uint32_t *)self + 47) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getJpegLoader  (binary VA: 0x10aa680)
// Original: gameswf::MovieDefImpl::getJpegLoader
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getJpegLoader(gameswf::MovieDefImpl::Self *self)
{
  return *((uint32_t *)self + 47);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getPlaylist  (binary VA: 0x10aa690)
// Original: gameswf::MovieDefImpl::getPlaylist
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getPlaylist(gameswf::MovieDefImpl::Self *self, int a2)
{
  return *((uint32_t *)self + 22) + 16 * a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getInitActions  (binary VA: 0x10aa6a0)
// Original: gameswf::MovieDefImpl::getInitActions
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getInitActions(gameswf::MovieDefImpl::Self *self, int a2)
{
  return *((uint32_t *)self + 24) + 16 * a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getWidthPixels  (binary VA: 0x10aa6b0)
// Original: gameswf::MovieDefImpl::getWidthPixels
// ----------------------------------------------------------------------------
long double gameswf::MovieDefImpl::getWidthPixels(gameswf::MovieDefImpl::Self *self)
{
  __m128 v1;
  __m128 v2;
g4_m128_raw(v1) = *((unsigned int *)self + 41);
g4_m128_lane<float>(v1, 0) =g4_m128_lane<float>(v1, 0) - *((float *)self + 40);
  if ( fabs(g4_m128_lane<float>(v1, 0)) < 8388608.0 )
  {
g4_m128_lane<float>(v2, 0) = (float)(int)g4_m128_lane<float>(v1, 0);
g4_m128_lane<float>(v1, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v1, v2), 0) & 0x3F800000) +g4_m128_lane<float>(v2, 0);
  }
  return g4_m128_lane<float>(v1, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getHeightPixels  (binary VA: 0x10aa720)
// Original: gameswf::MovieDefImpl::getHeightPixels
// ----------------------------------------------------------------------------
long double gameswf::MovieDefImpl::getHeightPixels(gameswf::MovieDefImpl::Self *self)
{
  __m128 v1;
  __m128 v2;
g4_m128_raw(v1) = *((unsigned int *)self + 43);
g4_m128_lane<float>(v1, 0) =g4_m128_lane<float>(v1, 0) - *((float *)self + 42);
  if ( fabs(g4_m128_lane<float>(v1, 0)) < 8388608.0 )
  {
g4_m128_lane<float>(v2, 0) = (float)(int)g4_m128_lane<float>(v1, 0);
g4_m128_lane<float>(v1, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v1, v2), 0) & 0x3F800000) +g4_m128_lane<float>(v2, 0);
  }
  return g4_m128_lane<float>(v1, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addBitmapInfo  (binary VA: 0x10aa790)
// Original: gameswf::MovieDefImpl::addBitmapInfo
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::addBitmapInfo(gameswf::MovieDefImpl::Self *self, gameswf::BitmapInfo::Self *a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  gameswf::RefCounted::Self *result;
  int v7;

  v2 = *((uint32_t *)self + 35);
  v3 = *((uint32_t *)self + 36);
  v4 = v2 + 1;
  if ( v2 + 1 <= v3 || *((uint32_t *)self + 37) != 0 )
  {
    v5 = *((char **)self + 34);
  }
  else
  {
    v7 = v4 + (v4 >> 1);
    *((uint32_t *)self + 36) = v7;
    if ( v7 != 0 )
    {
      if ( *((uint32_t *)self + 34) != 0 )
        v5 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 34), 4 * v7, 4 * v3);
      else
        v5 = (char *)gameswf::malloc_internal(4 * v7);
      *((uint32_t *)self + 34) = (uint32_t)(uintptr_t)(v5);
      v2 = *((uint32_t *)self + 35);
    }
    else
    {
      if ( *((uint32_t *)self + 34) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 34));
        v2 = *((uint32_t *)self + 35);
      }
      *((uint32_t *)self + 34) = 0;
      v5 = nullptr;
    }
  }
  result = (gameswf::RefCounted::Self *)&v5[4 * v2];
  if ( result != nullptr )
  {
    *(uint32_t *)result = (uint32_t)(uintptr_t)(a2);
    if ( a2 != nullptr )
      result = gameswf::RefCounted::addRef(a2);
  }
  *((uint32_t *)self + 35) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addExecuteTag  (binary VA: 0x10aa8b0)
// Original: gameswf::MovieDefImpl::addExecuteTag
// ----------------------------------------------------------------------------
uint32_t * gameswf::MovieDefImpl::addExecuteTag(gameswf::MovieDefImpl::Self *self, gameswf::ExecuteTag::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  uint32_t *result;
  int v8;

  v2 = *((uint32_t *)self + 22) + 16 * *((uint32_t *)self + 14);
  v3 = *(uint32_t *)(v2 + 4);
  v4 = *(uint32_t *)(v2 + 8);
  v5 = v3 + 1;
  if ( v3 + 1 <= v4 || *(uint32_t *)(v2 + 12) != 0 )
  {
    v6 = *(gameswf::Self **)v2;
  }
  else
  {
    v8 = v5 + (v5 >> 1);
    *(uint32_t *)(v2 + 8) = v8;
    if ( v8 != 0 )
    {
      if ( *(uint32_t *)v2 != 0 )
        v6 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v2, 4 * v8, 4 * v4);
      else
        v6 = (gameswf::Self *)gameswf::malloc_internal(4 * v8);
      *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v6);
      v3 = *(uint32_t *)(v2 + 4);
    }
    else
    {
      if ( *(uint32_t *)v2 != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)v2);
        v3 = *(uint32_t *)(v2 + 4);
      }
      *(uint32_t *)v2 = 0;
      v6 = nullptr;
    }
  }
  result = (uint32_t *)((char *)v6 + 4 * v3);
  if ( result != nullptr )
    *result = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)(v2 + 4) = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getFont  (binary VA: 0x10aa990)
// Original: gameswf::MovieDefImpl::getFont
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::getFont(gameswf::MovieDefImpl::Self *self, int a2)
{
  int v2;
  gameswf::RefCounted::Self *result;
  int v4;
  int v5;
  int *v6;
  int i;
  int v8;
  gameswf::RefCounted::Self *v9;
  int v10;

  v2 = *((uint32_t *)self + 19);
  result = nullptr;
  if ( v2 != 0 )
  {
    v4 = 65599
       * (((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6)
        + BYTE1(a2)
        + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)))
       + (uint8_t)a2;
    v10 = *(uint32_t *)(v2 + 4);
    v5 = v4 & v10;
    v6 = (int *)(v2 + 16 * (v4 & v10) + 8);
    if ( *v6 != -2 && v5 == (*(uint32_t *)(v2 + 16 * (v4 & v10) + 12) & v10) )
    {
      for ( i = *(uint32_t *)(v2 + 16 * (v4 & v10) + 12); v4 != i || v6[2] != a2; i = *(uint32_t *)(v2 + 16 * v5 + 12) )
      {
        v5 = *v6;
        if ( *v6 == -1 )
          return nullptr;
        v6 = (int *)(v2 + 16 * v5 + 8);
      }
      if ( v5 < 0 )
        return nullptr;
      v8 = 16 * v5;
      result = *(gameswf::RefCounted::Self **)(v2 + v8 + 20);
      if ( result != nullptr )
      {
        v9 = *(gameswf::RefCounted::Self **)(v2 + v8 + 20);
        gameswf::RefCounted::addRef(v9);
        gameswf::RefCounted::dropRef(v9);
        return v9;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getSoundSample  (binary VA: 0x10aaa90)
// Original: gameswf::MovieDefImpl::getSoundSample
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::getSoundSample(gameswf::MovieDefImpl::Self *self, int a2)
{
  int v2;
  gameswf::RefCounted::Self *result;
  int v4;
  int v5;
  int *v6;
  int i;
  int v8;
  gameswf::RefCounted::Self *v9;
  int v10;

  v2 = *((uint32_t *)self + 21);
  result = nullptr;
  if ( v2 != 0 )
  {
    v4 = 65599
       * (((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6)
        + BYTE1(a2)
        + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)))
       + (uint8_t)a2;
    v10 = *(uint32_t *)(v2 + 4);
    v5 = v4 & v10;
    v6 = (int *)(v2 + 16 * (v4 & v10) + 8);
    if ( *v6 != -2 && v5 == (*(uint32_t *)(v2 + 16 * (v4 & v10) + 12) & v10) )
    {
      for ( i = *(uint32_t *)(v2 + 16 * (v4 & v10) + 12); v4 != i || v6[2] != a2; i = *(uint32_t *)(v2 + 16 * v5 + 12) )
      {
        v5 = *v6;
        if ( *v6 == -1 )
          return nullptr;
        v6 = (int *)(v2 + 16 * v5 + 8);
      }
      if ( v5 < 0 )
        return nullptr;
      v8 = 16 * v5;
      result = *(gameswf::RefCounted::Self **)(v2 + v8 + 20);
      if ( result != nullptr )
      {
        v9 = *(gameswf::RefCounted::Self **)(v2 + v8 + 20);
        gameswf::RefCounted::addRef(v9);
        gameswf::RefCounted::dropRef(v9);
        return v9;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getCurrentLabels  (binary VA: 0x10aab90)
// Original: gameswf::MovieDefImpl::getCurrentLabels
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::getCurrentLabels(gameswf::MovieDefImpl::Self *self)
{
  int v1;
  gameswf::RefCounted::Self *FrameLabels;
  gameswf::RefCounted::Self *v4;

  v1 = *((uint32_t *)self + 27);
  if ( v1 == 0 )
  {
    FrameLabels = (gameswf::RefCounted::Self *)(gameswf::MovieDefinitionSub::createFrameLabels((int)(uintptr_t)(self), (int *)self + 26));
    v4 = *((gameswf::RefCounted::Self **)self + 27);
    if ( FrameLabels == v4 )
    {
      return FrameLabels;
    }
    else
    {
      if ( v4 != nullptr )
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 27));
      *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(FrameLabels);
      if ( FrameLabels != nullptr )
      {
        gameswf::RefCounted::addRef(FrameLabels);
        return *((gameswf::RefCounted::Self **)self + 27);
      }
    }
  }
  return (gameswf::RefCounted::Self *)v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addInitAction  (binary VA: 0x10aac20)
// Original: gameswf::MovieDefImpl::addInitAction
// ----------------------------------------------------------------------------
uint32_t * gameswf::MovieDefImpl::addInitAction(gameswf::MovieDefImpl::Self *self, int a2, gameswf::ExecuteTag::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  uint32_t *result;
  int v9;

  v3 = *((uint32_t *)self + 24) + 16 * *((uint32_t *)self + 14);
  v4 = *(uint32_t *)(v3 + 4);
  v5 = *(uint32_t *)(v3 + 8);
  v6 = v4 + 1;
  if ( v4 + 1 <= v5 || *(uint32_t *)(v3 + 12) != 0 )
  {
    v7 = *(gameswf::Self **)v3;
  }
  else
  {
    v9 = v6 + (v6 >> 1);
    *(uint32_t *)(v3 + 8) = v9;
    if ( v9 != 0 )
    {
      if ( *(uint32_t *)v3 != 0 )
        v7 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v3, 4 * v9, 4 * v5);
      else
        v7 = (gameswf::Self *)gameswf::malloc_internal(4 * v9);
      *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v7);
      v4 = *(uint32_t *)(v3 + 4);
    }
    else
    {
      if ( *(uint32_t *)v3 != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)v3);
        v4 = *(uint32_t *)(v3 + 4);
      }
      *(uint32_t *)v3 = 0;
      v7 = nullptr;
    }
  }
  result = (uint32_t *)((char *)v7 + 4 * v4);
  if ( result != nullptr )
    *result = (uint32_t)(uintptr_t)(a3);
  *(uint32_t *)(v3 + 4) = v6;
  *((uint8_t *)self + 216) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getLabeledFrame  (binary VA: 0x10aaeb0)
// Original: gameswf::MovieDefImpl::getLabeledFrame
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getLabeledFrame(gameswf::MovieDefImpl::Self *self, const gameswf::StringI::Self *a2, int *a3)
{
  int v3;
  int v4;
  typedef char *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v6 = (char *)a2;
  v3 = sub_10AAD10((uint32_t *)self + 26, &v6);
  v4 = 0;
  if ( v3 >= 0 )
  {
    v4 = 1;
    if ( a3 != nullptr )
      *a3 = *(uint32_t *)(*((uint32_t *)self + 26) + 16 * v3 + 20);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getBitmapCharacter  (binary VA: 0x10aaf00)
// Original: gameswf::MovieDefImpl::getBitmapCharacter
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::getBitmapCharacter(gameswf::MovieDefImpl::Self *self, int a2)
{
  gameswf::RefCounted::Self *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int i;
  int v9;
  int v10;

  v2 = nullptr;
  v3 = *((uint32_t *)self + 20);
  if ( v3 == 0 )
    return v2;
  v4 = (uint8_t)a2
     + 65599
     * (((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6)
      + BYTE1(a2)
      + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)));
  v10 = *(uint32_t *)(v3 + 4);
  v5 = v4 & v10;
  v6 = (int *)(v3 + 16 * (v4 & v10) + 8);
  if ( *v6 == -2 || v5 != (*(uint32_t *)(v3 + 16 * (v4 & v10) + 12) & v10) )
    return v2;
  for ( i = *(uint32_t *)(v3 + 16 * (v4 & v10) + 12); v4 != i || v6[2] != a2; i = *(uint32_t *)(v3 + 16 * v5 + 12) )
  {
    v5 = *v6;
    if ( *v6 == -1 )
      return nullptr;
    v6 = (int *)(v3 + 16 * v5 + 8);
  }
  if ( v5 < 0 )
    return nullptr;
  v9 = 16 * v5;
  v2 = *(gameswf::RefCounted::Self **)(v3 + v9 + 20);
  if ( v2 == nullptr )
    return v2;
  gameswf::RefCounted::addRef(*(gameswf::RefCounted::Self **)(v3 + v9 + 20));
  gameswf::RefCounted::dropRef(v2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getCharacterDef  (binary VA: 0x10ab000)
// Original: gameswf::MovieDefImpl::getCharacterDef
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::getCharacterDef(gameswf::MovieDefImpl::Self *self, int a2)
{
  gameswf::RefCounted::Self *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int i;
  int v9;
  int v10;

  v2 = nullptr;
  v3 = *((uint32_t *)self + 18);
  if ( v3 == 0 )
    return v2;
  v4 = (uint8_t)a2
     + 65599
     * (((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6)
      + BYTE1(a2)
      + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)));
  v10 = *(uint32_t *)(v3 + 4);
  v5 = v4 & v10;
  v6 = (int *)(v3 + 16 * (v4 & v10) + 8);
  if ( *v6 == -2 || v5 != (*(uint32_t *)(v3 + 16 * (v4 & v10) + 12) & v10) )
    return v2;
  for ( i = *(uint32_t *)(v3 + 16 * (v4 & v10) + 12); v4 != i || v6[2] != a2; i = *(uint32_t *)(v3 + 16 * v5 + 12) )
  {
    v5 = *v6;
    if ( *v6 == -1 )
      return nullptr;
    v6 = (int *)(v3 + 16 * v5 + 8);
  }
  if ( v5 < 0 )
    return nullptr;
  v9 = 16 * v5;
  v2 = *(gameswf::RefCounted::Self **)(v3 + v9 + 20);
  if ( v2 == nullptr )
    return v2;
  gameswf::RefCounted::addRef(*(gameswf::RefCounted::Self **)(v3 + v9 + 20));
  gameswf::RefCounted::dropRef(v2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getMovieDefinition  (binary VA: 0x10ab100)
// Original: gameswf::MovieDefImpl::getMovieDefinition
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::getMovieDefinition(gameswf::MovieDefImpl::Self *self, const gameswf::String::Self *a2, int *a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  int i;
  int v25;
  gameswf::RefCounted::Self *v26;
  gameswf::RefCounted::Self *v27;
  const gameswf::String::Self *v28;
  int v29;
  char *s1;
  char *v31;
  char *s2;
  char *v33;
  char *v34;

  v4 = *((uint32_t *)self + 71);
  if ( v4 == 0 )
    return nullptr;
  v5 = *(uint32_t *)(v4 + 4);
  v6 = 0;
  if ( v5 >= 0 && *(uint32_t *)(v4 + 8) == -2 )
  {
    v13 = 40;
    v14 = 1;
    do
    {
      v6 = v14;
      if ( v14 > v5 )
        break;
      ++v14;
      v15 = *(uint32_t *)(*((uint32_t *)self + 71) + v13);
      v13 += 32;
    }
    while ( v15 == -2 );
  }
  if ( self == (gameswf::MovieDefImpl::Self *)-284 )
    return nullptr;
  v7 = *((uint32_t *)self + 71);
  if ( v7 == 0 )
    return nullptr;
  v8 = *(char **)(v7 + 4);
  if ( v6 > (int)(uintptr_t)(v8) )
    return nullptr;
  while ( 1 )
  {
    v9 = v7 + 32 * v6 + 8;
    if ( a2 == (const gameswf::String::Self *)(v7 + 32 * v6 + 20) )
      break;
    s2 = *(uint8_t *)a2 == 0xFF ? *((char **)a2 + 3) : (char *)a2 + 1;
    s1 = *(uint8_t *)(v7 + 32 * v6 + 20) == 0xFF ? *(char **)(v7 + 32 * v6 + 32) : (char *)(v7 + 32 * v6 + 21);
    v29 = v7;
    v28 = a2;
    v10 = strcmp(s1, s2);
    v7 = v29;
    a2 = v28;
    if ( v10 == 0 )
      break;
    v11 = v6 + 1;
    if ( v6 + 1 <= (int)(uintptr_t)(v8) && *(uint32_t *)(v29 + 32 * v11 + 8) == -2 )
    {
      v16 = v6 + 2;
      v33 = v8;
      v17 = 32 * v16 + 8;
      while ( 1 )
      {
        v11 = v16;
        if ( v16 > (int)(uintptr_t)(v33) )
          break;
        v18 = *(uint32_t *)(v29 + v17);
        ++v16;
        v17 += 32;
        if ( v18 != -2 )
        {
          v6 = v11;
          goto LABEL_15;
        }
      }
    }
    v6 = v11;
LABEL_15:
    v8 = *(char **)(v29 + 4);
    if ( v6 > (int)(uintptr_t)(v8) )
      return nullptr;
  }
  v34 = *(char **)(v9 + 8);
  *a3 = (int)(uintptr_t)(v34);
  v19 = *((uint32_t *)self + 18);
  if ( v19 == 0 )
    return nullptr;
  v20 = ((*((uint8_t *)a3 + 3) + 352988219) << 6)
      + 0xFFFF * (*((uint8_t *)a3 + 3) + 352988219)
      + *((uint8_t *)a3 + 2);
  v31 = *(char **)(v19 + 4);
  v21 = 65599 * (*((uint8_t *)a3 + 1) + 0xFFFF * v20 + (v20 << 6)) + *(uint8_t *)a3;
  v22 = v21 & (unsigned int)(uintptr_t)(v31);
  v23 = (int *)(v19 + 16 * (v21 & (unsigned int)(uintptr_t)(v31)) + 8);
  if ( *v23 == -2 || v22 != (*(uint32_t *)(v19 + 16 * (v21 & (unsigned int)(uintptr_t)(v31)) + 12) & (unsigned int)(uintptr_t)(v31)) )
    return nullptr;
  for ( i = *(uint32_t *)(v19 + 16 * (v21 & (unsigned int)(uintptr_t)(v31)) + 12);
        v21 != i || v34 != (char *)v23[2];
        i = *(uint32_t *)(v19 + 16 * v22 + 12) )
  {
    v22 = *v23;
    if ( *v23 == -1 )
      return nullptr;
    v23 = (int *)(v19 + 16 * v22 + 8);
  }
  if ( v22 < 0 )
    return nullptr;
  v25 = 16 * v22;
  v26 = nullptr;
  v27 = *(gameswf::RefCounted::Self **)(v19 + v25 + 20);
  if ( v27 == nullptr )
    return nullptr;
  gameswf::RefCounted::addRef(*(gameswf::RefCounted::Self **)(v19 + v25 + 20));
  if ( G4_VCALL<uint8_t>(v27, 8, 13) != 0 )
    v26 = v27;
  gameswf::RefCounted::dropRef(v27);
  return v26;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addABC  (binary VA: 0x10ab3b0)
// Original: gameswf::MovieDefImpl::addABC
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::addABC(gameswf::MovieDefImpl::Self *self, gameswf::Self **a2, gameswf::abc_def::Self *a3)
{
  gameswf::String::Self *v3;
  gameswf::abc_def::Self *v4;
  int result;
  int v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::Self *v9;
  int v10;
  gameswf::Self *v11;
  int v12;
  int v13;
  int v14;
  gameswf::Self *v15;

  v3 = (gameswf::String::Self *)a2;
  v4 = *((gameswf::abc_def::Self **)self + 70);
  if ( a3 != v4 )
  {
    if ( v4 != nullptr )
      gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 70));
    *((uint32_t *)self + 70) = (uint32_t)(uintptr_t)(a3);
    if ( a3 != nullptr )
      gameswf::RefCounted::addRef(a3);
  }
  result = (int)(uintptr_t)(self) + 260;
  if ( (gameswf::Self **)((char *)self + 260) != a2 )
  {
    if ( *(uint8_t *)a2 == 0xFF )
      v6 = (int)(uintptr_t)(a2[1]) - 1;
    else
      v6 = *(char *)a2 - 1;
    gameswf::String::resize((gameswf::MovieDefImpl::Self *)((char *)self + 260), v6);
    v7 = (gameswf::Self *)((char *)a2 + 1);
    if ( *(uint8_t *)a2 == 0xFF )
      v7 = a2[3];
    LOBYTE(v8) = *((uint8_t *)self + 260);
    if ( (uint8_t)(uintptr_t)v8 == 0xFF )
    {
      v8 = *((char **)self + 66);
      v9 = *((gameswf::Self **)self + 68);
    }
    else
    {
      v8 = (char *)(char)(uintptr_t)v8;
      v9 = (gameswf::Self *)((gameswf::MovieDefImpl::Self *)((char *)self + 261));
    }
    gameswf::Strcpy_s(v9, v8, v7);
    v15 = a2[4];
    if ( (uint8_t *)((unsigned int)(uintptr_t)(v15) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v11 = a2[3];
        v12 = (int)(uintptr_t)(a2[1]) - 1;
      }
      else
      {
        v11 = (gameswf::Self *)((char *)a2 + 1);
        v12 = *(char *)a2 - 1;
      }
      v10 = 5381;
      if ( v12 > 0 )
      {
        do
        {
          --v12;
          v13 = 33 * v10;
          v14 = *((uint8_t *)v11 + v12) + 32;
          if ( (uint8_t)(*((uint8_t *)v11 + v12) - 65) > 0x19u )
            v14 = *((uint8_t *)v11 + v12);
          v10 = v13 ^ v14;
        }
        while ( v12 != 0 );
        v3 = (gameswf::String::Self *)a2;
        v10 = v10 << 9 >> 9;
      }
      *((uint32_t *)v3 + 4) = v10 & 0x7FFFFF | (unsigned int)(uintptr_t)(v15) & 0xFF800000;
    }
    else
    {
      v10 = (int)((uint32_t)(uintptr_t)(v15) << 9) >> 9;
    }
    result = v10 & 0x7FFFFF;
    *((uint32_t *)self + 69) = result | *((uint32_t *)self + 69) & 0xFF800000;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getImportCharacter  (binary VA: 0x10ab560)
// Original: gameswf::MovieDefImpl::getImportCharacter
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::getImportCharacter(gameswf::MovieDefImpl::Self *self, const gameswf::String::Self *a2, uint16_t *a3)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int j;
  const char *s1;
  int v12;
  int v13;
  gameswf::RefCounted::Self *v14;
  int i;
  const char *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  gameswf::RefCounted::Self *v22;
  gameswf::RefCounted::Self *v23;

  v3 = *((uint32_t *)self + 29);
  if ( v3 != 0 )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v4 = *((char **)a2 + 3);
      v5 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v4 = (char *)a2 + 1;
      v5 = *(char *)a2 - 1;
    }
    v6 = 5381;
    if ( v5 > 0 )
    {
      do
        v6 = (33 * v6) ^ (uint8_t)v4[--v5];
      while ( v5 != 0 );
    }
    v22 = *(gameswf::RefCounted::Self **)(v3 + 4);
    v7 = v6 & (unsigned int)(uintptr_t)(v22);
    v8 = (uint32_t *)(v3 + 36 * (v6 & (unsigned int)(uintptr_t)(v22)) + 8);
    if ( *v8 != -2 )
    {
      v19 = *(uint32_t *)(v3 + 36 * (v6 & (unsigned int)(uintptr_t)(v22)) + 12);
      v9 = v19 & (unsigned int)(uintptr_t)(v22);
      v23 = nullptr;
      if ( v7 != v9 )
        return v23;
      if ( *(uint8_t *)a2 == 0xFF )
      {
        for ( i = v19; ; i = *(uint32_t *)(v3 + 36 * v7 + 12) )
        {
          if ( v6 == i )
          {
            if ( a2 == (const gameswf::String::Self *)(v8 + 2) )
              break;
            v17 = (char *)v8 + 9;
            if ( *((uint8_t *)v8 + 8) == 0xFF )
              v17 = (const char *)v8[5];
            v21 = v3;
            v18 = strcmp(v17, *((const char **)a2 + 3));
            v3 = v21;
            if ( v18 == 0 )
              break;
          }
          v7 = *v8;
          if ( *v8 == -1 )
            return nullptr;
          v8 = (uint32_t *)(v3 + 36 * v7 + 8);
        }
      }
      else
      {
        for ( j = v19; ; j = *(uint32_t *)(v3 + 36 * v7 + 12) )
        {
          if ( v6 == j )
          {
            if ( a2 == (const gameswf::String::Self *)(v8 + 2) )
              break;
            s1 = (char *)v8 + 9;
            if ( *((uint8_t *)v8 + 8) == 0xFF )
              s1 = (const char *)v8[5];
            v20 = v3;
            v12 = strcmp(s1, (const char *)a2 + 1);
            v3 = v20;
            if ( v12 == 0 )
              break;
          }
          v7 = *v8;
          if ( *v8 == -1 )
            return nullptr;
          v8 = (uint32_t *)(v3 + 36 * v7 + 8);
        }
      }
      if ( v7 >= 0 )
      {
        v13 = *(uint32_t *)(v3 + 36 * v7 + 36);
        v14 = *(gameswf::RefCounted::Self **)(v3 + 36 * v7 + 40);
        v23 = v14;
        if ( v14 != nullptr )
        {
          gameswf::RefCounted::addRef(v14);
          *a3 = v13;
          gameswf::RefCounted::dropRef(v23);
        }
        else
        {
          *a3 = v13;
        }
        return v23;
      }
    }
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getExportedResource  (binary VA: 0x10ab750)
// Original: gameswf::MovieDefImpl::getExportedResource
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::getExportedResource(gameswf::MovieDefImpl::Self *self, const gameswf::String::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  char *v7;
  int v8;
  int v9;
  gameswf::RefCounted::Self *v10;
  uint8_t *v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef gameswf::String::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef char _g4_t_v23;
  typedef uint8_t _g4_t_v24[15];
  typedef unsigned int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v20)) > _g4_s4 ? (20u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v22)) > _g4_s6 ? (28u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (33u + sizeof(_g4_t_v24)) > _g4_s8 ? (33u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v25)) > _g4_s9 ? (48u + sizeof(_g4_t_v25)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 33u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);

  v22 = &v23;
  sub_7763C0((gameswf::String::Self *)&v23, (char *)a2);
  v18 = *((uint32_t *)self + 28);
  if ( v18 == 0 )
    goto LABEL_24;
  if ( (uint8_t *)(v25 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v23 == -1 )
    {
      v12 = *(uint8_t **)&v24[11];
      v13 = *(uint32_t *)&v24[3] - 1;
    }
    else
    {
      v12 = v24;
      v13 = v23 - 1;
    }
    v2 = 5381;
    v14 = 5381;
    if ( v13 > 0 )
    {
      do
      {
        --v13;
        v21 = 33 * v14;
        v15 = (uint8_t)v12[v13] + 32;
        if ( (uint8_t)(v12[v13] - 65) > 0x19u )
          v15 = (uint8_t)v12[v13];
        v14 = v21 ^ v15;
      }
      while ( v13 != 0 );
      v14 = v14 << 9 >> 9;
      v2 = v14;
    }
    v25 = v14 & 0x7FFFFF | v25 & 0xFF800000;
  }
  else
  {
    v2 = (int)(v25 << 9) >> 9;
  }
  v19 = *(uint32_t *)(v18 + 4);
  v3 = v2 & v19;
  v4 = v18 + 36 * (v2 & v19) + 8;
  if ( *(uint32_t *)v4 == -2 )
    goto LABEL_24;
  v5 = *(uint32_t *)(v18 + 36 * (v2 & v19) + 12);
  if ( v3 != (v5 & v19) )
    goto LABEL_24;
  v6 = (uint32_t *)((char *)self + 112);
  while ( 1 )
  {
    if ( v5 == v2 )
    {
      if ( v22 == (char *)(v4 + 8) )
        break;
      v7 = (char *)(v24);
      if ( v23 == -1 )
        v7 = *(char **)&v24[11];
      v20 = *(uint8_t *)(v4 + 8) == 0xFF ? *(gameswf::String::Self **)(v4 + 20) : (gameswf::String::Self *)(v4 + 9);
      v16 = v2;
      v17 = v6;
      v8 = gameswf::String::stricmp(v20, v7);
      v2 = v16;
      v6 = v17;
      if ( v8 == 0 )
        break;
    }
    v3 = *(uint32_t *)v4;
    if ( *(uint32_t *)v4 == -1 )
      goto LABEL_24;
    v4 = *v6 + 36 * v3 + 8;
    v5 = *(uint32_t *)(v4 + 4);
  }
  if ( v3 < 0 )
  {
LABEL_24:
    v10 = nullptr;
    if ( v23 != -1 )
      goto LABEL_20;
    goto LABEL_25;
  }
  v9 = *((uint32_t *)self + 28) + 36 * v3;
  v10 = *(gameswf::RefCounted::Self **)(v9 + 40);
  if ( v10 != nullptr )
    gameswf::RefCounted::addRef(*(gameswf::RefCounted::Self **)(v9 + 40));
  if ( v23 == -1 )
  {
LABEL_25:
    if ( (v25 & 0x1000000) != 0 )
      gameswf::free_internal(*(gameswf::Self **)&v24[11]);
  }
LABEL_20:
  if ( v10 != nullptr )
    gameswf::RefCounted::dropRef(v10);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::instanciateClass  (binary VA: 0x10ab970)
// Original: gameswf::MovieDefImpl::instanciateClass
// ----------------------------------------------------------------------------
void gameswf::MovieDefImpl::instanciateClass(gameswf::MovieDefImpl::Self *self, gameswf::Character::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int i;
  int v7;
  gameswf::Self *v8;
  gameswf::abc_def::Self ***Class;
  typedef gameswf::String::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef gameswf::Self *_g4_t_v14[4];
  typedef int16_t _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef uint8_t _g4_t_v18[12];
  typedef gameswf::Self *_g4_t_v19;
  typedef int16_t _g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef unsigned int _g4_t_v22[4];
  typedef int16_t _g4_t_v23;
  typedef int16_t _g4_t_v24;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v12)) > _g4_s1 ? (24u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v14)) > _g4_s3 ? (48u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v15)) > _g4_s4 ? (64u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (66u + sizeof(_g4_t_v16)) > _g4_s5 ? (66u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (67u + sizeof(_g4_t_v17)) > _g4_s6 ? (67u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v18)) > _g4_s7 ? (80u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v19)) > _g4_s8 ? (92u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v20)) > _g4_s9 ? (96u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (98u + sizeof(_g4_t_v21)) > _g4_s10 ? (98u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v22)) > _g4_s11 ? (112u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v23)) > _g4_s12 ? (128u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (130u + sizeof(_g4_t_v24)) > _g4_s13 ? (130u + sizeof(_g4_t_v24)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 66u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 67u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 98u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 128u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 130u);

  v2 = *((uint32_t *)a2 + 12);
  v13 = v2;
  if ( v2 != 0 )
  {
    if ( v2 == -1 )
    {
      v13 = 0;
      v2 = 0;
    }
    LOWORD(v14[0]) = 1;
    v15 = -1;
    v16 = 127;
    v17 |= 1u;
    v3 = *((uint32_t *)self + 71);
    if ( v3 != 0 )
    {
      v12 = 65599
          * (BYTE1(v13)
           + 0xFFFF * (BYTE2(v13) + 65599 * (HIBYTE(v13) + 352988219))
           + ((BYTE2(v13) + 65599 * (HIBYTE(v13) + 352988219)) << 6))
          + (uint8_t)v13;
      v4 = *(uint32_t *)(v3 + 4) & v12;
      v5 = (int *)(v3 + 32 * v4 + 8);
      if ( *v5 != -2 && v4 == (*(uint32_t *)(v3 + 32 * v4 + 12) & *(uint32_t *)(v3 + 4)) )
      {
        for ( i = *(uint32_t *)(v3 + 32 * v4 + 12); v12 != i || v5[2] != v2; i = *(uint32_t *)(v3 + 32 * v4 + 12) )
        {
          v4 = *v5;
          if ( *v5 == -1 )
            return;
          v5 = (int *)(v3 + 32 * v4 + 8);
        }
        if ( v4 >= 0 )
        {
          gameswf::String::opAssign(v14, (gameswf::Self **)(v3 + 32 * v4 + 20));
          v20 = -1;
          v18[0] = 1;
          v18[1] = 0;
          HIBYTE(v21) = ((uint16_t)(v21 | 0x7F) >> 8) | 1;
          LOBYTE(v21) = 127;
          v23 = -1;
          LOWORD(v22[0]) = 1;
          HIBYTE(v24) = ((uint16_t)(v24 | 0x7F) >> 8) | 1;
          LOBYTE(v24) = 127;
          gameswf::splitFullClassName((gameswf::Self *)v14, (const gameswf::String::Self *)v18, (gameswf::String::Self *)v22, v11);
          v7 = *((uint32_t *)self + 6);
          if ( v7 != 0 )
          {
            v8 = *((gameswf::Self **)self + 5);
            if ( *((uint8_t *)v8 + 2) == 0 )
            {
              if ( (*(uint16_t *)v8)-- == 1 )
                gameswf::free_internal(v8);
              *((uint32_t *)self + 5) = 0;
              *((uint32_t *)self + 6) = 0;
              v7 = 0;
            }
          }
          Class = (gameswf::abc_def::Self ***)gameswf::ASClassManager::findClass(
                                          (gameswf::ASClassManager::Self *)(v7 + 236),
                                          (const gameswf::String::Self *)v18,
                                          (const gameswf::String::Self *)v22,
                                          true);
          if ( Class != nullptr )
            gameswf::ASClass::initializeInstance(Class, a2);
          if ( LOBYTE(v22[0]) == 0xFF && (v24 & 0x100) != 0 )
            gameswf::free_internal((gameswf::Self *)v22[3]);
          if ( v18[0] == 0xFF && (v21 & 0x100) != 0 )
            gameswf::free_internal(v19);
          if ( LOBYTE(v14[0]) == 0xFF && (v17 & 1) != 0 )
            gameswf::free_internal(v14[3]);
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::Construct  (binary VA: 0x10abdc0)
// Original: gameswf::MovieDefImpl::MovieDefImpl
// ----------------------------------------------------------------------------
pthread_mutex_t * gameswf::MovieDefImpl::Construct(pthread_mutex_t **a1, gameswf::RefCounted::Self *a2, pthread_mutex_t *a3, pthread_mutex_t *a4, char *a5)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v6;
  unsigned int v8;
  int v9;
  pthread_mutex_t *result;
  gameswf::Self *v11;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)a1);
  *a1 = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208E728);
  a1[3] = nullptr;
  a1[4] = nullptr;
  a1[5] = nullptr;
  a1[6] = (pthread_mutex_t *)a2;
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v6 = (gameswf::Self *)a1[5];
    if ( WeakProxy != v6 )
    {
      if ( v6 != nullptr && (*(uint16_t *)v6)-- == 1 )
      {
        v11 = WeakProxy;
        gameswf::free_internal(v6);
        WeakProxy = v11;
      }
      a1[5] = (pthread_mutex_t *)WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  a1[7] = (pthread_mutex_t *)-1;
  a1[8] = nullptr;
  *a1 = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208E7A8);
  a1[9] = (pthread_mutex_t *)-1;
  *((uint8_t *)a1 + 40) = 0;
  *((uint8_t *)a1 + 41) = 0;
  *((uint8_t *)a1 + 42) = 0;
  a1[11] = nullptr;
  a1[12] = nullptr;
  a1[13] = nullptr;
  a1[14] = nullptr;
  glf::Mutex::Construct(a1 + 15, 1);
  glf::Condition::Construct((glf::Condition::Self *)(a1 + 16), (glf::Mutex::Self *)(a1 + 15));
  a1[23] = (pthread_mutex_t *)((unsigned int)(uintptr_t)(a1[23]) & 0xFF000000);
  a1[25] = (pthread_mutex_t *)((unsigned int)(uintptr_t)(a1[25]) & 0xFF000000);
  *a1 = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208EB68);
  a1[38] = a3;
  a1[39] = a4;
  *((uint8_t *)a1 + 68) = 0;
  a1[18] = nullptr;
  a1[19] = nullptr;
  a1[20] = nullptr;
  a1[21] = nullptr;
  a1[22] = nullptr;
  *((uint8_t *)a1 + 95) = 0;
  a1[24] = nullptr;
  *((uint8_t *)a1 + 103) = 0;
  a1[26] = nullptr;
  a1[27] = nullptr;
  a1[28] = nullptr;
  a1[29] = nullptr;
  a1[30] = nullptr;
  a1[31] = nullptr;
  a1[32] = nullptr;
  a1[33] = nullptr;
  a1[34] = nullptr;
  a1[35] = nullptr;
  a1[36] = nullptr;
  a1[37] = nullptr;
  a1[44] = (pthread_mutex_t *)1106247680;
  a1[45] = nullptr;
  a1[46] = nullptr;
  a1[47] = nullptr;
  a1[48] = nullptr;
  a1[49] = nullptr;
  a1[50] = nullptr;
  a1[51] = nullptr;
  a1[52] = nullptr;
  a1[53] = nullptr;
  *((uint8_t *)a1 + 216) = 0;
  a1[55] = nullptr;
  sub_7763C0((gameswf::String::Self *)(a1 + 60), a5);
  v8 = (unsigned int)(uintptr_t)(a1[69]);
  *((uint8_t *)a1 + 260) = 1;
  v8 |= 0x7FFFFFu;
  *((uint8_t *)a1 + 261) = 0;
  a1[69] = (pthread_mutex_t *)v8;
  a1[70] = nullptr;
  *((uint8_t *)a1 + 278) = BYTE2(v8) & 0x7F;
  *((uint8_t *)a1 + 279) = HIBYTE(v8) | 1;
  a1[71] = nullptr;
  a1[72] = nullptr;
  a1[73] = nullptr;
  v9 = *((uint32_t *)a2 + 3);
  result = *(pthread_mutex_t **)(v9 + 40);
  *(uint32_t *)(v9 + 40) = (uint32_t)(uintptr_t)((char *)&((int32_t *)(result))[0] + 1);
  a1[55] = result;
  a1[56] = nullptr;
  a1[57] = nullptr;
  a1[58] = nullptr;
  a1[59] = nullptr;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::setFrameRate  (binary VA: 0x10ac0c0)
// Original: gameswf::MovieDefImpl::setFrameRate
// ----------------------------------------------------------------------------
gameswf::MovieDefImpl::Self * gameswf::MovieDefImpl::setFrameRate(gameswf::MovieDefImpl::Self *self, float a2)
{
  *((float *)self + 44) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getFileBytes  (binary VA: 0x10ac0e0)
// Original: gameswf::MovieDefImpl::getFileBytes
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getFileBytes(gameswf::MovieDefImpl::Self *self)
{
  return *((uint32_t *)self + 49);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::getLoadedBytes  (binary VA: 0x10ac0f0)
// Original: gameswf::MovieDefImpl::getLoadedBytes
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::getLoadedBytes(gameswf::MovieDefImpl::Self *self)
{
  return *((uint32_t *)self + 46);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::inImportTable  (binary VA: 0x10ac100)
// Original: gameswf::MovieDefImpl::inImportTable
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::inImportTable()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::read_tags  (binary VA: 0x10ac110)
// Original: gameswf::MovieDefImpl::read_tags
// ----------------------------------------------------------------------------
unsigned int gameswf::MovieDefImpl::read_tags(gameswf::Stream::Self **self)
{
  unsigned int result;
  gameswf::Self *v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int j;
  uint32_t *v10;
  gameswf::Self *v11;
  int v12;
  int v13;
  int k;
  uint32_t *v15;
  const char *v16;
  int v17;
  int v18;
  int *v19;
  const char *v20;
  gameswf::Stream::Self *v21;
  int i;
  char *v23;
  const char *v24;
  const char *v25;
  const char *v26;
  int v27;

  while ( 1 )
  {
    result = gameswf::Stream::getPosition(*(self + 48));
    if ( result >= (unsigned int)(uintptr_t)(*(self + 49)) || *((uint8_t *)self + 68) != 0 )
      break;
    v16 = (const char *)gameswf::Stream::openTag(*(self + 48));
    if ( v16 == (const char *)((uint8_t *)&dword_0 + 1) )
    {
      v21 = *self;
      *(self + 14) = (gameswf::Stream::Self *)((char *)*(self + 14) + 1);
      if ( (*((uint8_t (**)(gameswf::Stream::Self **))v21 + 48))(self) != 0 )
        glf::Condition::Signal((glf::Condition::Self *)(self + 16));
      gameswf::Stream::closeTag(*(self + 48));
    }
    else
    {
      if ( dword_20E5260 == 0 )
        goto LABEL_30;
      v17 = *(uint32_t *)(dword_20E5260 + 4);
      v27 = ((BYTE1(v16)
            + 0xFFFF * (BYTE2(v16) + 0xFFFF * (HIBYTE(v16) + 352988219) + ((HIBYTE(v16) + 352988219) << 6))
            + ((BYTE2(v16) + 0xFFFF * (HIBYTE(v16) + 352988219) + ((HIBYTE(v16) + 352988219) << 6)) << 6)) << 6)
          + (uint8_t)(uintptr_t)v16
          + 0xFFFF
          * (BYTE1(v16)
           + 0xFFFF * (BYTE2(v16) + 0xFFFF * (HIBYTE(v16) + 352988219) + ((HIBYTE(v16) + 352988219) << 6))
           + ((BYTE2(v16) + 0xFFFF * (HIBYTE(v16) + 352988219) + ((HIBYTE(v16) + 352988219) << 6)) << 6));
      v18 = v17 & v27;
      v19 = (int *)(dword_20E5260 + 16 * (v17 & v27) + 8);
      if ( *v19 == -2 || v18 != (*(uint32_t *)(dword_20E5260 + 16 * (v17 & v27) + 12) & *(uint32_t *)(dword_20E5260 + 4)) )
        goto LABEL_30;
      for ( i = *(uint32_t *)(dword_20E5260 + 16 * (v17 & v27) + 12);
            v27 != i || v16 != (const char *)v19[2];
            i = *(uint32_t *)(dword_20E5260 + 16 * v18 + 12) )
      {
        v18 = *v19;
        if ( *v19 == -1 )
          goto LABEL_30;
        v19 = (int *)(dword_20E5260 + 16 * v18 + 8);
      }
      if ( v18 >= 0 )
      {
        v26 = v16;
        (*(void (**)(uint32_t, const char *, gameswf::Stream::Self **))(dword_20E5260 + 16 * v18 + 20))(
          (uint32_t)(uintptr_t)(*(self + 48)),
          v16,
          self);
        v20 = v26;
      }
      else
      {
LABEL_30:
        v24 = v16;
        gameswf::logMsg((gameswf::Self *)"*** no tag loader for type %d\n", v16);
        v20 = v24;
      }
      v25 = v20;
      gameswf::Stream::closeTag(*(self + 48));
      if ( v25 == nullptr && (gameswf::Stream::Self *)gameswf::Stream::getPosition(*(self + 48)) != *(self + 49) )
      {
        result = gameswf::logMsg(
                   (gameswf::Self *)"warning: hit stream-end tag, but not at the end of the file yet; stopping for safety\n",
                   v23);
        break;
      }
    }
    *(self + 46) = (gameswf::Stream::Self *)gameswf::Stream::getPosition(*(self + 48));
  }
  v2 = (gameswf::Self *)(*(self + 47));
  if ( v2 != nullptr )
  {
    (**(void (***)(uint32_t))v2)((uint32_t)(uintptr_t)(*(self + 47)));
    result = gameswf::free_internal(v2);
    *(self + 47) = nullptr;
  }
  v3 = (gameswf::Self *)(*(self + 50));
  if ( v3 != nullptr )
  {
    gameswf::File::Destroy(*(self + 50));
    result = gameswf::free_internal(v3);
  }
  v4 = (gameswf::Self *)(*(self + 48));
  if ( v4 != nullptr )
  {
    gameswf::Stream::Destroy(*(self + 48));
    result = gameswf::free_internal(v4);
  }
  v5 = (gameswf::Self *)(*(self + 51));
  if ( v5 != nullptr )
  {
    gameswf::File::Destroy(*(self + 51));
    result = gameswf::free_internal(v5);
  }
  v6 = (gameswf::Self *)(*(self + 11));
  if ( v6 != nullptr )
  {
    v7 = *((uint32_t *)v6 + 1);
    if ( v7 >= 0 )
    {
      v8 = 8;
      for ( j = 0; j <= v7; ++j )
      {
        v10 = (uint32_t *)((char *)v6 + v8);
        if ( *(uint32_t *)((char *)v6 + v8) != -2 )
        {
          *v10 = -2;
          v10[1] = 0;
          v6 = (gameswf::Self *)(*(self + 11));
        }
        v8 += 16;
      }
    }
    result = gameswf::free_internal(v6);
    *(self + 11) = nullptr;
  }
  v11 = (gameswf::Self *)(*(self + 12));
  if ( v11 != nullptr )
  {
    v12 = *((uint32_t *)v11 + 1);
    if ( v12 >= 0 )
    {
      v13 = 8;
      for ( k = 0; k <= v12; ++k )
      {
        v15 = (uint32_t *)((char *)v11 + v13);
        if ( *(uint32_t *)((char *)v11 + v13) != -2 )
        {
          *v15 = -2;
          v15[1] = 0;
          v11 = (gameswf::Self *)(*(self + 12));
        }
        v13 += 16;
      }
    }
    result = gameswf::free_internal(v11);
    *(self + 12) = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::read  (binary VA: 0x10ac4a0)
// Original: gameswf::MovieDefImpl::read
// ----------------------------------------------------------------------------
unsigned int gameswf::MovieDefImpl::read(gameswf::MovieDefImpl::Self *self, gameswf::File::Self *a2)
{
  unsigned int v2;
  gameswf::Stream::Self *v3;
  bool v4;
  bool v5; // bp
  gameswf::File::Self *BufferedFile;
  float v7; // xmm0_4
  gameswf::Stream::Self *v8;
  int U16;
  int v10;
  int v11;
  gameswf::File::Self *inflater;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint32_t *v25;
  typedef gameswf::Stream::Self *_g4_t_v26;
  typedef gameswf::Stream::Self *_g4_t_v27;
  typedef gameswf::Stream::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v27)) > _g4_s1 ? (24u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v28)) > _g4_s2 ? (24u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v29)) > _g4_s3 ? (28u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v30)) > _g4_s4 ? (44u + sizeof(_g4_t_v30)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);

  *((uint32_t *)self + 51) = (uint32_t)(uintptr_t)(a2);
  v29 = (*((int (**)(uint32_t))a2 + 6))(*(uint32_t *)a2);
  (*((void (**)(uint32_t *, int, uint32_t))a2 + 2))(v30, 4, *(uint32_t *)a2);
  v2 = v30[0];
  (*((void (**)(uint32_t *))a2 + 2))(v30);
  v3 = (gameswf::Stream::Self *)v30[0];
  *((uint32_t *)self + 49) = v30[0] + v29;
  *((uint32_t *)self + 45) = HIBYTE(v2);
  if ( (v2 & 0xFFFFFF) != 0x535743 && (v2 & 0xFFFFFF) != 0x535746 )
    return gameswf::logError(
             (gameswf::Self *)"MovieDefImpl::read() -- file does not start with a SWF header!\n",
             (const char *)&loc_4);
  *((uint32_t *)self + 50) = 0;
  v4 = (uint8_t)v2 != 67;
  v5 = (uint8_t)v2 == 67;
  if ( v4 )
  {
    BufferedFile = (gameswf::File::Self *)gameswf::getBufferedFile(a2, (gameswf::File::Self *)&loc_4);
    *((uint32_t *)self + 50) = (uint32_t)(uintptr_t)(BufferedFile);
  }
  else
  {
    v28 = v3;
    inflater = (gameswf::File::Self *)gameswf::zlib_adapter::make_inflater(a2, (gameswf::File::Self *)&loc_4);
    *((uint32_t *)self + 50) = (uint32_t)(uintptr_t)(inflater);
    BufferedFile = inflater;
    *((uint32_t *)self + 49) = (uint32_t)(uintptr_t)((char *)v28 - 8);
  }
  v27 = (gameswf::Stream::Self *)opNew(0x2Cu);
  gameswf::Stream::Construct(v27, BufferedFile, v5);
  *((uint32_t *)self + 48) = (uint32_t)(uintptr_t)(v27);
  gameswf::Rect::read((gameswf::MovieDefImpl::Self *)((char *)self + 160), v27);
  v7 = (float)(uint16_t)gameswf::Stream::readU16(*((gameswf::Stream::Self **)self + 48)) * 0.00390625;
  v8 = *((gameswf::Stream::Self **)self + 48);
  *((float *)self + 44) = v7;
  U16 = (uint16_t)gameswf::Stream::readU16(v8);
  if ( (uint16_t)U16 == 0 )
    U16 = 1;
  *((uint32_t *)self + 13) = U16;
  v10 = G4_VCALL<int>(self, 52);
  if ( v10 > 0 && *((uint32_t *)self + 22) == 0 )
  {
    v20 = v10 << 8 >> 8;
    *((uint32_t *)self + 23) = v20 & 0xFFFFFF | *((uint32_t *)self + 23) & 0xFF000000;
    v26 = nullptr;
    v21 = gameswf::malloc_internal(16 * v20);
    *((uint8_t *)self + 95) = 1;
    v22 = *((uint32_t *)self + 23) << 8;
    *((uint32_t *)self + 22) = v21;
    v23 = v22 >> 8;
    if ( v23 > 0 )
    {
      v24 = 0;
      while ( 1 )
      {
        v25 = (uint32_t *)(16 * v24 + v21);
        if ( v25 != nullptr )
        {
          *v25 = 0;
          v25[1] = 0;
          v25[2] = 0;
          v25[3] = 0;
          v23 = (int)(*((uint32_t *)self + 23) << 8) >> 8;
        }
        if ( ++v24 >= v23 )
          break;
        v21 = *((uint32_t *)self + 22);
      }
    }
  }
  v11 = G4_VCALL<int>(self, 52, v26);
  if ( v11 > 0 && *((uint32_t *)self + 24) == 0 )
  {
    v14 = v11 << 8 >> 8;
    *((uint32_t *)self + 25) = v14 & 0xFFFFFF | *((uint32_t *)self + 25) & 0xFF000000;
    v15 = gameswf::malloc_internal(16 * v14);
    *((uint8_t *)self + 103) = 1;
    v16 = *((uint32_t *)self + 25) << 8;
    *((uint32_t *)self + 24) = v15;
    v17 = v16 >> 8;
    if ( v17 > 0 )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = (uint32_t *)(16 * v18 + v15);
        if ( v19 != nullptr )
        {
          *v19 = 0;
          v19[1] = 0;
          v19[2] = 0;
          v19[3] = 0;
          v17 = (int)(*((uint32_t *)self + 25) << 8) >> 8;
        }
        if ( ++v18 >= v17 )
          break;
        v15 = *((uint32_t *)self + 24);
      }
    }
  }
  return gameswf::MovieDefImpl::read_tags((gameswf::Stream::Self **)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::get_owned_fonts  (binary VA: 0x10ac7a0)
// Original: gameswf::MovieDefImpl::get_owned_fonts
// ----------------------------------------------------------------------------
void gameswf::MovieDefImpl::get_owned_fonts(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  gameswf::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  gameswf::Self *v17;
  bool v18;
  char *v19;
  char *v20;
  char *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  gameswf::Self *v29;
  int v30;
  int v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int *v48;
  int v49;
  int v50;
  gameswf::Self *v51;

  v2 = a2;
  v3 = a2[1];
  if ( v3 < 0 )
  {
    v4 = 4 * v3;
    do
    {
      v5 = (uint32_t *)(*a2 + v4);
      if ( v5 != nullptr )
        *v5 = 0;
      v4 += 4;
      ++v3;
    }
    while ( v3 != 0 );
  }
  a2[1] = 0;
  v48 = (int *)(a1 + 76);
  v6 = *(uint32_t *)(a1 + 76);
  if ( v6 != 0 )
  {
    v7 = *(uint32_t *)(v6 + 4);
    v42 = 0;
    if ( v7 >= 0 && *(uint32_t *)(v6 + 8) == -2 )
    {
      v8 = 24;
      v9 = 1;
      while ( 1 )
      {
        v42 = v9;
        if ( v9 > v7 )
          break;
        v10 = *(uint32_t *)(v6 + v8);
        ++v9;
        v8 += 16;
        if ( v10 != -2 )
        {
          if ( a1 == -76 )
            return;
          goto LABEL_15;
        }
      }
    }
    if ( a1 != -76 )
    {
LABEL_15:
      v50 = 0;
      v11 = nullptr;
      v12 = 0;
      v44 = *(uint32_t *)(a1 + 76);
      while ( v44 != 0 )
      {
        v13 = *(uint32_t *)(v44 + 4);
        if ( v42 > v13 )
          break;
        v47 = *(uint32_t *)(v44 + 16 * v42 + 20);
        if ( *(uint32_t *)(v47 + 64) == a1 )
        {
          v14 = *(uint32_t *)(v44 + 16 * v42 + 16);
          v45 = v14;
          if ( v12 != 0 && v14 >= *(uint32_t *)v11 )
          {
            v15 = 0;
            do
            {
              if ( ++v15 == v12 )
              {
                v49 = v15;
                v31 = 4 * v15;
                goto LABEL_30;
              }
            }
            while ( v14 >= *((uint32_t *)v11 + v15) );
            v49 = v15;
            v31 = 4 * v15;
          }
          else
          {
            v31 = 0;
            v49 = 0;
            v15 = 0;
          }
LABEL_30:
          v16 = v2[1];
          v41 = v16 + 1;
          if ( v16 == -1 || (v30 = v2[2], v41 <= v30) || v2[3] != 0 )
          {
            v20 = (char *)*v2;
          }
          else
          {
            v17 = (gameswf::Self *)((v41 >> 1) + v41);
            v18 = v17 == nullptr;
            v51 = v17;
            v2[2] = (uint32_t)(uintptr_t)(v17);
            v19 = (char *)*v2;
            if ( v18 )
            {
              if ( v19 != nullptr )
              {
                v38 = v16;
                v32 = v2;
                gameswf::free_internal((gameswf::Self *)*v2);
                v2 = v32;
                v16 = v38;
              }
              *v2 = 0;
              v20 = nullptr;
            }
            else
            {
              v39 = v16;
              v36 = v2;
              if ( v19 != nullptr )
                v20 = (char *)gameswf::realloc_internal((gameswf::Self *)*v2, 4 * (uint32_t)(uintptr_t)(v51), 4 * v30);
              else
                v20 = (char *)gameswf::malloc_internal(4 * (uint32_t)(uintptr_t)(v51));
              v2 = v36;
              *v36 = (uint32_t)(uintptr_t)(v20);
              v16 = v39;
            }
          }
          v21 = &v20[4 * v16];
          if ( v21 != nullptr )
            *(uint32_t *)v21 = 0;
          v2[1] = v41;
          if ( v16 > v15 )
          {
            v34 = v2;
            memmove((void *)(*v2 + 4 * v49 + 4), (const void *)(v31 + *v2), 4 * (v16 - v15));
            v2 = v34;
          }
          v22 = (uint32_t *)(*v2 + v31);
          if ( v22 != nullptr )
            *v22 = v47;
          if ( v12 + 1 > v50 )
          {
            v25 = ((v12 + 1) >> 1) + v12 + 1;
            if ( v25 != 0 )
            {
              v37 = v2;
              if ( v11 != nullptr )
                v29 = (gameswf::Self *)gameswf::realloc_internal(v11, 4 * v25, 4 * v50);
              else
                v29 = (gameswf::Self *)gameswf::malloc_internal(4 * v25);
              v11 = v29;
              v50 = ((v12 + 1) >> 1) + v12 + 1;
              v2 = v37;
            }
            else
            {
              if ( v11 != nullptr )
              {
                v35 = v2;
                gameswf::free_internal(v11);
                v2 = v35;
              }
              v50 = 0;
              v11 = nullptr;
            }
          }
          v23 = (uint32_t *)((char *)v11 + 4 * v12);
          if ( v23 != nullptr )
            *v23 = 0;
          v24 = (uint32_t *)((char *)v11 + v31);
          if ( v15 < v12 )
          {
            v33 = v2;
            memmove((char *)v11 + 4 * v49 + 4, (char *)v11 + v31, 4 * (v12 - v15));
            v2 = v33;
            v24 = (uint32_t *)((char *)v11 + v31);
          }
          if ( v24 != nullptr )
            *v24 = v45;
          v44 = *v48;
          v13 = *(uint32_t *)(*v48 + 4);
          if ( v13 < v42 )
            break;
          ++v12;
        }
        v40 = v42 + 1;
        if ( v42 + 1 <= v13 && *(uint32_t *)(v44 + 16 * (v42 + 1) + 8) == -2 )
        {
          v26 = v42 + 2;
          v43 = 16 * (v42 + 2) + 8;
          v27 = v44;
          v46 = v13;
          do
          {
            v40 = v26;
            if ( v26 > v46 )
              break;
            v28 = v43;
            ++v26;
            v43 += 16;
          }
          while ( *(uint32_t *)(v27 + v28) == -2 );
          v44 = v27;
        }
        v42 = v40;
      }
      if ( v11 != nullptr )
        gameswf::free_internal(v11);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::Destroy  (binary VA: 0x10acc90)
// Original: gameswf::MovieDefImpl::~MovieDefImpl
// ----------------------------------------------------------------------------
void gameswf::MovieDefImpl::Destroy(gameswf::Self **self)
{
  gameswf::MovieDefImpl::Self *v1;
  int v2;
  gameswf::Self *v3;
  int v4;
  int v5;
  int v6;
  void (***v7)(uint32_t, void *);
  int v8;
  int v9;
  int v10;
  void (***v11)(uint32_t);
  gameswf::Self *v12;
  int v13;
  int k;
  uint32_t *v15;
  gameswf::Self *v16;
  int v17;
  int m;
  uint32_t *v19;
  gameswf::Self *v20;
  int v21;
  int n;
  uint32_t *v23;
  int v24;
  int ii;
  int v26;
  gameswf::Self *v27;
  int v28;
  int jj;
  int v30;
  gameswf::Self *v31;
  gameswf::Self *v32;
  int v33;
  int v34;
  uint32_t *v35;
  gameswf::Self *v36;
  int v37;
  int v38;
  uint32_t *v39;
  gameswf::Self *v40;
  int v41;
  int v42;
  int kk;
  uint32_t *v44;
  gameswf::Self *v45;
  int v46;
  int v47;
  uint32_t *v48;
  gameswf::Self *v49;
  int v50;
  int v51;
  uint32_t *v52;
  gameswf::Self *v53;
  int v54;
  int v55;
  uint32_t *v56;
  gameswf::Self *v57;
  int v58;
  int v59;
  uint32_t *v60;
  int v61;
  uint32_t *v62;
  int v63;
  uint32_t *v64;
  void *v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  gameswf::MovieDefImpl::Self *v71;
  gameswf::MovieDefImpl::Self *v72;
  gameswf::MovieDefImpl::Self *v73;
  gameswf::MovieDefImpl::Self *v74;
  int i;
  int j;
  gameswf::MovieDefImpl::Self *v77;
  gameswf::MovieDefImpl::Self *v78;
  int v79;
  int v80;

  v1 = (gameswf::MovieDefImpl::Self *)self;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208EB68);
  v2 = (int)(uintptr_t)(*(self + 52));
  *((uint8_t *)self + 68) = 1;
  if ( v2 != 0 )
  {
    glf::Thread::Join((pthread_t *)(v2 + 4));
    v3 = *(self + 52);
    if ( v3 != nullptr )
    {
      (**(void (***)(uint32_t))v3)((uint32_t)(uintptr_t)(*(self + 52)));
      v65 = nullptr;
      gameswf::free_internal(v3);
    }
  }
  v79 = (int)((uint32_t)(uintptr_t)(*(self + 23)) << 8) >> 8;
  if ( v79 > 0 )
  {
    for ( i = 0; i < v79; ++i )
    {
      v4 = (int)(uintptr_t)(*(self + 22));
      v5 = *(uint32_t *)(v4 + 16 * i + 4);
      if ( v5 > 0 )
      {
        v6 = 0;
        while ( 1 )
        {
          v7 = *(void (****)(uint32_t, void *))(*(uint32_t *)(v4 + 16 * i) + 4 * v6++);
          (**v7)((uint32_t)(uintptr_t)(v7), v65);
          if ( v6 == v5 )
            break;
          v4 = (int)(uintptr_t)(*(self + 22));
        }
      }
    }
    v1 = (gameswf::MovieDefImpl::Self *)self;
  }
  v80 = (int)(*((uint32_t *)v1 + 25) << 8) >> 8;
  if ( v80 > 0 )
  {
    for ( j = 0; j < v80; ++j )
    {
      v8 = *((uint32_t *)v1 + 24);
      v9 = *(uint32_t *)(v8 + 16 * j + 4);
      if ( v9 > 0 )
      {
        v10 = 0;
        while ( 1 )
        {
          v11 = *(void (****)(uint32_t))(*(uint32_t *)(v8 + 16 * j) + 4 * v10++);
          (**v11)((uint32_t)(uintptr_t)(v11));
          if ( v10 == v9 )
            break;
          v8 = *((uint32_t *)v1 + 24);
        }
      }
    }
  }
  v12 = *((gameswf::Self **)v1 + 73);
  if ( v12 != nullptr )
  {
    v13 = *((uint32_t *)v12 + 1);
    if ( v13 >= 0 )
    {
      for ( k = 0; k <= v13; ++k )
      {
        v15 = (uint32_t *)((char *)v12 + 32 * k + 8);
        if ( *v15 != -2 )
        {
          if ( *((uint8_t *)v12 + 32 * k + 20) == 0xFF && (*((uint8_t *)v12 + 32 * k + 39) & 1) != 0 )
          {
            v66 = v13;
            gameswf::free_internal(*((gameswf::Self **)v12 + 8 * k + 8));
            v13 = v66;
          }
          *v15 = -2;
          v15[1] = 0;
          v12 = *((gameswf::Self **)v1 + 73);
        }
      }
    }
    gameswf::free_internal(v12);
    *((uint32_t *)v1 + 73) = 0;
  }
  v16 = *((gameswf::Self **)v1 + 72);
  if ( v16 != nullptr )
  {
    v17 = *((uint32_t *)v16 + 1);
    if ( v17 >= 0 )
    {
      for ( m = 0; m <= v17; ++m )
      {
        v19 = (uint32_t *)((char *)v16 + 32 * m + 8);
        if ( *v19 != -2 )
        {
          if ( *((uint8_t *)v16 + 32 * m + 20) == 0xFF && (*((uint8_t *)v16 + 32 * m + 39) & 1) != 0 )
          {
            v67 = v17;
            gameswf::free_internal(*((gameswf::Self **)v16 + 8 * m + 8));
            v17 = v67;
          }
          *v19 = -2;
          v19[1] = 0;
          v16 = *((gameswf::Self **)v1 + 72);
        }
      }
    }
    gameswf::free_internal(v16);
    *((uint32_t *)v1 + 72) = 0;
  }
  v20 = *((gameswf::Self **)v1 + 71);
  if ( v20 != nullptr )
  {
    v21 = *((uint32_t *)v20 + 1);
    if ( v21 >= 0 )
    {
      for ( n = 0; n <= v21; ++n )
      {
        v23 = (uint32_t *)((char *)v20 + 32 * n + 8);
        if ( *v23 != -2 )
        {
          if ( *((uint8_t *)v20 + 32 * n + 20) == 0xFF && (*((uint8_t *)v20 + 32 * n + 39) & 1) != 0 )
          {
            v68 = v21;
            gameswf::free_internal(*((gameswf::Self **)v20 + 8 * n + 8));
            v21 = v68;
          }
          *v23 = -2;
          v23[1] = 0;
          v20 = *((gameswf::Self **)v1 + 71);
        }
      }
    }
    gameswf::free_internal(v20);
    *((uint32_t *)v1 + 71) = 0;
  }
  if ( *((uint32_t *)v1 + 70) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 70));
  if ( *((uint8_t *)v1 + 260) == 0xFF && (*((uint8_t *)v1 + 279) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)v1 + 68));
  if ( *((uint8_t *)v1 + 240) == 0xFF && (*((uint8_t *)v1 + 259) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)v1 + 63));
  if ( *((uint32_t *)v1 + 53) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 53));
  v24 = *((uint32_t *)v1 + 35);
  if ( v24 <= 0 )
  {
    if ( v24 < 0 )
    {
      v63 = 4 * v24;
      do
      {
        v64 = (uint32_t *)(*((uint32_t *)v1 + 34) + v63);
        if ( v64 != nullptr )
          *v64 = 0;
        v63 += 4;
        ++v24;
      }
      while ( v24 != 0 );
    }
  }
  else
  {
    for ( ii = 0; ii != v24; ++ii )
    {
      if ( *(uint32_t *)(*((uint32_t *)v1 + 34) + 4 * ii) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*((uint32_t *)v1 + 34) + 4 * ii));
    }
  }
  v26 = *((uint32_t *)v1 + 37);
  *((uint32_t *)v1 + 35) = 0;
  if ( v26 == 0 )
  {
    v27 = *((gameswf::Self **)v1 + 34);
    *((uint32_t *)v1 + 36) = 0;
    if ( v27 != nullptr )
      gameswf::free_internal(v27);
    *((uint32_t *)v1 + 34) = 0;
  }
  v28 = *((uint32_t *)v1 + 31);
  if ( v28 <= 0 )
  {
    if ( v28 < 0 )
    {
      v61 = 4 * v28;
      do
      {
        v62 = (uint32_t *)(*((uint32_t *)v1 + 30) + v61);
        if ( v62 != nullptr )
          *v62 = 0;
        v61 += 4;
        ++v28;
      }
      while ( v28 != 0 );
    }
  }
  else
  {
    for ( jj = 0; jj != v28; ++jj )
    {
      if ( *(uint32_t *)(*((uint32_t *)v1 + 30) + 4 * jj) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*((uint32_t *)v1 + 30) + 4 * jj));
    }
  }
  v30 = *((uint32_t *)v1 + 33);
  *((uint32_t *)v1 + 31) = 0;
  if ( v30 == 0 )
  {
    v31 = *((gameswf::Self **)v1 + 30);
    *((uint32_t *)v1 + 32) = 0;
    if ( v31 != nullptr )
      gameswf::free_internal(v31);
    *((uint32_t *)v1 + 30) = 0;
  }
  v32 = *((gameswf::Self **)v1 + 29);
  if ( v32 != nullptr )
  {
    if ( *((int *)v32 + 1) >= 0 )
    {
      v77 = v1;
      v33 = 0;
      v69 = *((uint32_t *)v32 + 1);
      v34 = 8;
      do
      {
        v35 = (uint32_t *)((char *)v32 + v34);
        if ( *(uint32_t *)((char *)v32 + v34) != -2 )
        {
          if ( *((uint8_t *)v35 + 8) == 0xFF && (*((uint8_t *)v35 + 27) & 1) != 0 )
            gameswf::free_internal((gameswf::Self *)v35[5]);
          if ( v35[8] != 0 )
            gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v35[8]);
          *v35 = -2;
          v35[1] = 0;
          v32 = *((gameswf::Self **)v77 + 29);
        }
        ++v33;
        v34 += 36;
      }
      while ( v69 >= v33 );
      v1 = v77;
    }
    gameswf::free_internal(v32);
    *((uint32_t *)v1 + 29) = 0;
  }
  v36 = *((gameswf::Self **)v1 + 28);
  if ( v36 != nullptr )
  {
    if ( *((int *)v36 + 1) >= 0 )
    {
      v78 = v1;
      v37 = 0;
      v70 = *((uint32_t *)v36 + 1);
      v38 = 8;
      do
      {
        v39 = (uint32_t *)((char *)v36 + v38);
        if ( *(uint32_t *)((char *)v36 + v38) != -2 )
        {
          if ( *((uint8_t *)v39 + 8) == 0xFF && (*((uint8_t *)v39 + 27) & 1) != 0 )
            gameswf::free_internal((gameswf::Self *)v39[5]);
          if ( v39[8] != 0 )
            gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v39[8]);
          *v39 = -2;
          v39[1] = 0;
          v36 = *((gameswf::Self **)v78 + 28);
        }
        ++v37;
        v38 += 36;
      }
      while ( v70 >= v37 );
      v1 = v78;
    }
    gameswf::free_internal(v36);
    *((uint32_t *)v1 + 28) = 0;
  }
  if ( *((uint32_t *)v1 + 27) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 27));
  v40 = *((gameswf::Self **)v1 + 26);
  if ( v40 != nullptr )
  {
    v41 = *((uint32_t *)v40 + 1);
    if ( v41 >= 0 )
    {
      v42 = 8;
      for ( kk = 0; kk <= v41; ++kk )
      {
        v44 = (uint32_t *)((char *)v40 + v42);
        if ( *(uint32_t *)((char *)v40 + v42) != -2 )
        {
          *v44 = -2;
          v44[1] = 0;
          v40 = *((gameswf::Self **)v1 + 26);
        }
        v42 += 16;
      }
    }
    gameswf::free_internal(v40);
    *((uint32_t *)v1 + 26) = 0;
  }
  gameswf::fixed_array_gameswf_array_gameswf_Ex_b44840::Destroy((gameswf::MovieDefImpl::Self *)((char *)v1 + 96));
  gameswf::fixed_array_gameswf_array_gameswf_Ex_b44840::Destroy((gameswf::MovieDefImpl::Self *)((char *)v1 + 88));
  v45 = *((gameswf::Self **)v1 + 21);
  if ( v45 != nullptr )
  {
    if ( *((int *)v45 + 1) >= 0 )
    {
      v71 = v1;
      v46 = 0;
      v47 = *((uint32_t *)v45 + 1);
      do
      {
        v48 = (uint32_t *)((char *)v45 + 16 * v46 + 8);
        if ( *v48 != -2 )
        {
          if ( *((uint32_t *)v45 + 4 * v46 + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v45 + 4 * v46 + 5));
          *v48 = -2;
          v48[1] = 0;
          v45 = *((gameswf::Self **)v71 + 21);
        }
        ++v46;
      }
      while ( v47 >= v46 );
      v1 = v71;
    }
    gameswf::free_internal(v45);
    *((uint32_t *)v1 + 21) = 0;
  }
  v49 = *((gameswf::Self **)v1 + 20);
  if ( v49 != nullptr )
  {
    if ( *((int *)v49 + 1) >= 0 )
    {
      v72 = v1;
      v50 = 0;
      v51 = *((uint32_t *)v49 + 1);
      do
      {
        v52 = (uint32_t *)((char *)v49 + 16 * v50 + 8);
        if ( *v52 != -2 )
        {
          if ( *((uint32_t *)v49 + 4 * v50 + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v49 + 4 * v50 + 5));
          *v52 = -2;
          v52[1] = 0;
          v49 = *((gameswf::Self **)v72 + 20);
        }
        ++v50;
      }
      while ( v51 >= v50 );
      v1 = v72;
    }
    gameswf::free_internal(v49);
    *((uint32_t *)v1 + 20) = 0;
  }
  v53 = *((gameswf::Self **)v1 + 19);
  if ( v53 != nullptr )
  {
    if ( *((int *)v53 + 1) >= 0 )
    {
      v73 = v1;
      v54 = 0;
      v55 = *((uint32_t *)v53 + 1);
      do
      {
        v56 = (uint32_t *)((char *)v53 + 16 * v54 + 8);
        if ( *v56 != -2 )
        {
          if ( *((uint32_t *)v53 + 4 * v54 + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v53 + 4 * v54 + 5));
          *v56 = -2;
          v56[1] = 0;
          v53 = *((gameswf::Self **)v73 + 19);
        }
        ++v54;
      }
      while ( v55 >= v54 );
      v1 = v73;
    }
    gameswf::free_internal(v53);
    *((uint32_t *)v1 + 19) = 0;
  }
  v57 = *((gameswf::Self **)v1 + 18);
  if ( v57 != nullptr )
  {
    if ( *((int *)v57 + 1) >= 0 )
    {
      v74 = v1;
      v58 = 0;
      v59 = *((uint32_t *)v57 + 1);
      do
      {
        v60 = (uint32_t *)((char *)v57 + 16 * v58 + 8);
        if ( *v60 != -2 )
        {
          if ( *((uint32_t *)v57 + 4 * v58 + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v57 + 4 * v58 + 5));
          *v60 = -2;
          v60[1] = 0;
          v57 = *((gameswf::Self **)v74 + 18);
        }
        ++v58;
      }
      while ( v59 >= v58 );
      v1 = v74;
    }
    gameswf::free_internal(v57);
    *((uint32_t *)v1 + 18) = 0;
  }
  gameswf::MovieDefinitionSub::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::Destroy_ea10ad4d0  (binary VA: 0x10ad4d0)
// Original: gameswf::MovieDefImpl::~MovieDefImpl
// ----------------------------------------------------------------------------
void gameswf::MovieDefImpl::Destroy_ea10ad4d0(gameswf::Self **self)
{
  gameswf::MovieDefImpl::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addFrameLabel  (binary VA: 0x10ad5b0)
// Original: gameswf::MovieDefImpl::addFrameLabel
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::addFrameLabel(gameswf::MovieDefImpl::Self *self, int a2, const gameswf::String::Self *a3)
{
  return ((gameswf::hash_int_gameswf_String_games_d90fc8::add(
           (gameswf::MovieDefImpl::Self *)((char *)self + 292),
           &a2,
           a3)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addScene  (binary VA: 0x10ad5f0)
// Original: gameswf::MovieDefImpl::addScene
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::addScene(gameswf::MovieDefImpl::Self *self, int a2, const gameswf::String::Self *a3)
{
  return ((gameswf::hash_int_gameswf_String_games_d90fc8::add(
           (gameswf::MovieDefImpl::Self *)((char *)self + 288),
           &a2,
           a3)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addSymbolClass  (binary VA: 0x10ad630)
// Original: gameswf::MovieDefImpl::addSymbolClass
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::addSymbolClass(gameswf::RefCounted::Self **self, int a2, const gameswf::String::Self *a3)
{
  gameswf::MovieDefImpl::Self *v3;
  const gameswf::String::Self *v4;
  gameswf::RefCounted::Self *result;
  gameswf::Self *v6;
  int v7;
  gameswf::Self *v8;
  gameswf::ASPackage::Self *Package;
  gameswf::RefCounted::Self *v10;
  gameswf::Self *v11;
  const char *v12;
  bool v13;
  int v14;
  gameswf::RefCounted::Self *v15;
  gameswf::Self *WeakProxy;
  int *v17;
  int v18;
  int i;
  bool v20;
  gameswf::RefCounted::Self *v21;
  int v22;
  int *v23;
  int v24;
  gameswf::RefCounted::Self *v25;
  typedef gameswf::String::Self *_g4_t_v26;
  typedef gameswf::RefCounted::Self *_g4_t_v27;
  typedef gameswf::RefCounted::Self *_g4_t_v28;
  typedef gameswf::RefCounted::Self *_g4_t_v29;
  typedef gameswf::CharacterDef::Self *_g4_t_v30;
  typedef gameswf::RefCounted::Self *_g4_t_v31;
  typedef gameswf::RefCounted::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef gameswf::RefCounted::Self *_g4_t_v39[4];
  typedef uint8_t _g4_t_v40[12];
  typedef gameswf::Self *_g4_t_v41;
  typedef int16_t _g4_t_v42;
  typedef int16_t _g4_t_v43;
  typedef unsigned int _g4_t_v44[4];
  typedef int16_t _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v27)) > _g4_s1 ? (32u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v28)) > _g4_s2 ? (32u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v29)) > _g4_s3 ? (32u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v30)) > _g4_s4 ? (36u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v31)) > _g4_s5 ? (44u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v32)) > _g4_s6 ? (48u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v33)) > _g4_s7 ? (52u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v34)) > _g4_s8 ? (52u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v35)) > _g4_s9 ? (56u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v36)) > _g4_s10 ? (56u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v37)) > _g4_s11 ? (60u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v38)) > _g4_s12 ? (60u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v39)) > _g4_s13 ? (64u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v40)) > _g4_s14 ? (80u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v41)) > _g4_s15 ? (92u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v42)) > _g4_s16 ? (96u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (98u + sizeof(_g4_t_v43)) > _g4_s17 ? (98u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v44)) > _g4_s18 ? (112u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v45)) > _g4_s19 ? (128u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (130u + sizeof(_g4_t_v46)) > _g4_s20 ? (130u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (131u + sizeof(_g4_t_v47)) > _g4_s21 ? (131u + sizeof(_g4_t_v47)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 98u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 128u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 130u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 131u);

  v3 = (gameswf::MovieDefImpl::Self *)self;
  v4 = a3;
  gameswf::hash_int_gameswf_String_games_d90fc8::add(
    (gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *)(self + 71),
    &a2,
    a3);
  result = *(self + 6);
  if ( result != nullptr )
  {
    v6 = (gameswf::Self *)(*(self + 5));
    if ( *((uint8_t *)v6 + 2) == 0 )
    {
      v13 = (*(uint16_t *)v6)-- == 1;
      if ( v13 )
        gameswf::free_internal(v6);
      *(self + 5) = nullptr;
      *(self + 6) = nullptr;
      result = nullptr;
    }
  }
  if ( *((uint8_t *)result + 232) != 0 )
  {
    v40[0] = 1;
    v40[1] = 0;
    v42 = -1;
    LOWORD(v44[0]) = 1;
    HIBYTE(v43) = ((uint16_t)(v43 | 0x7F) >> 8) | 1;
    LOBYTE(v43) = 127;
    v45 = -1;
    v46 = 127;
    v47 |= 1u;
    gameswf::splitFullClassName(v4, (const gameswf::String::Self *)v40, (gameswf::String::Self *)v44, v26);
    v7 = (int)(uintptr_t)(*(self + 6));
    if ( v7 != 0 )
    {
      v8 = (gameswf::Self *)(*(self + 5));
      if ( *((uint8_t *)v8 + 2) == 0 )
      {
        v13 = (*(uint16_t *)v8)-- == 1;
        if ( v13 )
          gameswf::free_internal(v8);
        *(self + 5) = nullptr;
        *(self + 6) = nullptr;
        v7 = 0;
      }
    }
    Package = (gameswf::ASPackage::Self *)gameswf::ASClassManager::findPackage(
                                      (gameswf::ASClassManager::Self *)(v7 + 236),
                                      (const gameswf::String::Self *)v40,
                                      true);
    result = (gameswf::RefCounted::Self *)gameswf::ASPackage::findClass(Package, (const gameswf::String::Self *)v44, false);
    v10 = result;
    if ( result == nullptr )
      goto LABEL_13;
    if ( *((uint32_t *)result + 30) != 0 )
    {
      v11 = *((gameswf::Self **)result + 29);
      if ( *((uint8_t *)v11 + 2) != 0 )
      {
        v12 = (char *)v4 + 1;
        if ( *(uint8_t *)v4 == 0xFF )
          v12 = *((const char **)v4 + 3);
        result = (gameswf::RefCounted::Self *)gameswf::logMsg((gameswf::Self *)"symbol class already registered: %s\n", v12);
LABEL_13:
        if ( LOBYTE(v44[0]) == 0xFF && (v47 & 1) != 0 )
          result = (gameswf::RefCounted::Self *)gameswf::free_internal((gameswf::Self *)v44[3]);
        if ( v40[0] == 0xFF && (v43 & 0x100) != 0 )
          return (gameswf::RefCounted::Self *)gameswf::free_internal(v41);
        return result;
      }
      v13 = (*(uint16_t *)v11)-- == 1;
      if ( v13 )
      {
        v29 = v10;
        gameswf::free_internal(v11);
        v10 = v29;
      }
      *((uint32_t *)v10 + 29) = 0;
      *((uint32_t *)v10 + 30) = 0;
    }
    v14 = (int)(uintptr_t)(*(self + 18));
    v39[0] = nullptr;
    if ( v14 != 0 )
    {
      v33 = (uint8_t)a2
          + 65599
          * (0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))
           + BYTE1(a2)
           + ((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6));
      v35 = *(uint32_t *)(v14 + 4);
      if ( *(uint32_t *)(v14 + 16 * (v35 & v33) + 8) != -2
        && (v35 & v33) == (*(uint32_t *)(v14 + 16 * (v35 & v33) + 12) & v35) )
      {
        v31 = v10;
        v17 = (int *)(v14 + 16 * (v35 & v33) + 8);
        v18 = v35 & v33;
        for ( i = *(uint32_t *)(v14 + 16 * (v35 & v33) + 12); v33 != i || v17[2] != a2; i = *(uint32_t *)(v14 + 16 * v18 + 12) )
        {
          v18 = *v17;
          if ( *v17 == -1 )
          {
            v10 = v31;
            v3 = (gameswf::MovieDefImpl::Self *)self;
            goto LABEL_26;
          }
          v17 = (int *)(v14 + 16 * v18 + 8);
        }
        v38 = v18;
        v20 = v18 < 0;
        v10 = v31;
        v3 = (gameswf::MovieDefImpl::Self *)self;
        if ( !v20 )
        {
          v21 = *(gameswf::RefCounted::Self **)(v14 + 16 * v38 + 20);
          if ( v21 != nullptr )
          {
            v39[0] = *(gameswf::RefCounted::Self **)(v14 + 16 * v38 + 20);
            gameswf::RefCounted::addRef(v21);
            v15 = v39[0];
            v10 = v31;
            if ( v39[0] != nullptr )
            {
              v22 = a2;
              *((gameswf::RefCounted::Self **)v31 + 30) = v39[0];
              *((uint32_t *)v31 + 28) = v22;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_26:
    v37 = *((uint32_t *)v3 + 20);
    if ( v37 == 0 )
      goto LABEL_29;
    v36 = 65599
        * (((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6)
         + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))
         + BYTE1(a2))
        + (uint8_t)a2;
    v34 = *(uint32_t *)(v37 + 4);
    if ( *(uint32_t *)(v37 + 16 * (v34 & v36) + 8) == -2
      || (v34 & v36) != (*(uint32_t *)(v37 + 16 * (v34 & v36) + 12) & v34) )
    {
      goto LABEL_29;
    }
    v32 = v10;
    v23 = (int *)(v37 + 16 * (v34 & v36) + 8);
    v24 = v34 & v36;
    while ( v36 != v23[1] || v23[2] != a2 )
    {
      v24 = *v23;
      if ( *v23 == -1 )
        goto LABEL_29;
      v23 = (int *)(v37 + 16 * v24 + 8);
    }
    if ( v24 >= 0 && (v25 = *(gameswf::RefCounted::Self **)(v37 + 16 * v24 + 20)) != nullptr )
    {
      v30 = (gameswf::CharacterDef::Self *)(v25);
      gameswf::RefCounted::addRef(v25);
      gameswf::smart_ptr_gameswf_CharacterDef_13bb5a::set_ref((gameswf::smart_ptr<gameswf::CharacterDef::Self> *)v39, v30);
      gameswf::RefCounted::dropRef(v30);
      v10 = v32;
    }
    else
    {
LABEL_29:
      v27 = v10;
      gameswf::smart_ptr_gameswf_CharacterDef_13bb5a::set_ref((gameswf::smart_ptr<gameswf::CharacterDef::Self> *)v39, nullptr);
      v10 = v27;
    }
    v15 = v39[0];
    v13 = v39[0] == nullptr;
    *((uint32_t *)v10 + 28) = a2;
    *((uint32_t *)v10 + 30) = (uint32_t)(uintptr_t)(v15);
    if ( v13 )
    {
      sub_7E5ED0((gameswf::Self **)v10 + 29, nullptr);
    }
    else
    {
LABEL_31:
      v28 = v10;
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v15);
      sub_7E5ED0((gameswf::Self **)v28 + 29, WeakProxy);
    }
    G4_VCALL<void>(v3, 168, v4, a2, v39[0]);
    result = v39[0];
    if ( v39[0] != nullptr )
      result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v39[0]);
    goto LABEL_13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addCharacter  (binary VA: 0x10adbe0)
// Original: gameswf::MovieDefImpl::addCharacter
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::addCharacter(gameswf::MovieDefImpl::Self *self, const int a2, gameswf::CharacterDef::Self *a3)
{
  gameswf::RefCounted::Self *result;
  typedef gameswf::RefCounted::Self *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);

  v4 = (gameswf::RefCounted::Self *)(a3);
  if ( a3 != nullptr )
    gameswf::RefCounted::addRef(a3);
  gameswf::hash_int_gameswf_smart_ptr_ga_761876::add(
    (gameswf::MovieDefImpl::Self *)((char *)self + 72),
    &a2,
    (const gameswf::smart_ptr<gameswf::CharacterDef::Self> *)&v4);
  result = v4;
  if ( v4 != nullptr )
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addFont  (binary VA: 0x10adc40)
// Original: gameswf::MovieDefImpl::addFont
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::addFont(gameswf::MovieDefImpl::Self *self, const int a2, gameswf::Font::Self *a3)
{
  gameswf::RefCounted::Self *result;
  typedef gameswf::RefCounted::Self *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);

  v4 = (gameswf::RefCounted::Self *)(a3);
  if ( a3 != nullptr )
    gameswf::RefCounted::addRef(a3);
  gameswf::hash_int_gameswf_smart_ptr_ga_27591b::add(
    (gameswf::MovieDefImpl::Self *)((char *)self + 76),
    &a2,
    (const gameswf::smart_ptr<gameswf::Font::Self> *)&v4);
  result = v4;
  if ( v4 != nullptr )
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addBitmapCharacter  (binary VA: 0x10adca0)
// Original: gameswf::MovieDefImpl::addBitmapCharacter
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::addBitmapCharacter(gameswf::MovieDefImpl::Self *a1, int a2, gameswf::MovieDefImpl::Self *self, char a4, gameswf::BitmapCharacterDef::Self *a5)
{
  int (*v5)(void);
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[4];
  typedef gameswf::MovieDefImpl::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v12)) > _g4_s5 ? (36u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);

  v11 = a1;
  v12 = a2;
  v10[0] = (int)(uintptr_t)(a5);
  if ( a5 != nullptr )
    gameswf::RefCounted::addRef(a5);
  gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::add(
    (gameswf::MovieDefImpl::Self *)((char *)self + 80),
    (int)(uintptr_t)(&a4),
    (int)(uintptr_t)(v10));
  if ( v10[0] != 0 )
    gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v10[0]);
  v5 = *(int (**)(void))(*(uint32_t *)self + 180);
  v12 = G4_VCALL<int>(a5, 40, v7, v8, v9, v10[0], v10[1], v10[2], v10[3]);
  v11 = self;
  return v5();
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addSoundSample  (binary VA: 0x10add30)
// Original: gameswf::MovieDefImpl::addSoundSample
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::addSoundSample(gameswf::MovieDefImpl::Self *self, char a2, gameswf::SoundSample::Self *a3)
{
  int result;
  int v4[4];

  v4[0] = (int)(uintptr_t)(a3);
  if ( a3 != nullptr )
    gameswf::RefCounted::addRef(a3);
  gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::add(
    (gameswf::MovieDefImpl::Self *)((char *)self + 84),
    (int)(uintptr_t)(&a2),
    (int)(uintptr_t)(v4));
  result = v4[0];
  if ( v4[0] != 0 )
    return gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v4[0]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addFrameName  (binary VA: 0x10ae000)
// Original: gameswf::MovieDefImpl::addFrameName
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::addFrameName(gameswf::MovieDefImpl::Self *self, char *s)
{
  gameswf::Self *v2;
  int v3;
  gameswf::Self *v4;
  typedef size_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  typedef gameswf::Self *_g4_t_v12;
  typedef int16_t _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (25u + sizeof(_g4_t_v11)) > _g4_s4 ? (25u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v12)) > _g4_s5 ? (36u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v13)) > _g4_s6 ? (40u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (42u + sizeof(_g4_t_v14)) > _g4_s7 ? (42u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (43u + sizeof(_g4_t_v15)) > _g4_s8 ? (43u + sizeof(_g4_t_v15)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 25u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 42u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 43u);

  v10 = 1;
  v11 = 0;
  if ( s != nullptr )
  {
    v7 = strlen(s);
    gameswf::String::resize((gameswf::String::Self *)&v10, v7);
    v2 = (gameswf::Self *)&v11;
    if ( v10 == -1 )
      v2 = v12;
    gameswf::Strcpy_s(v2, (char *)(v7 + 1), (gameswf::Self *)s);
  }
  v13 = -1;
  v14 = 127;
  v15 |= 1u;
  v3 = *((uint32_t *)self + 6);
  if ( v3 != 0 )
  {
    v4 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v3 = 0;
    }
  }
  v8 = (int)(uintptr_t)(sub_10ADD90((int *)(v3 + 48), &v10));
  if ( v10 == -1 && (v15 & 1) != 0 )
    gameswf::free_internal(v12);
  v9 = *((uint32_t *)self + 14);
  return gameswf::hash_gameswf_StringIPointer_i_a6af4c::add(
           (gameswf::MovieDefImpl::Self *)((char *)self + 104),
           (int)(uintptr_t)(&v8),
           (int)(uintptr_t)(&v9));
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::exportResource  (binary VA: 0x10ae140)
// Original: gameswf::MovieDefImpl::exportResource
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::exportResource(gameswf::MovieDefImpl::Self *self, const gameswf::String::Self *a2, int a3, gameswf::CharacterDef::Self *a4)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v4;
  int v5;
  int v6;
  int v7;
  int i;
  char *v9;
  int v10;
  int v11;
  gameswf::RefCounted::Self *v12;
  int v13;
  gameswf::RefCounted::Self *v14;
  gameswf::RefCounted::Self *result;
  uint8_t *v16;
  int v17;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::String::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef gameswf::RefCounted::Self *_g4_t_v28;
  typedef char _g4_t_v29;
  typedef uint8_t _g4_t_v30[15];
  typedef unsigned int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v24)) > _g4_s4 ? (20u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v25)) > _g4_s5 ? (20u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v26)) > _g4_s6 ? (24u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v27)) > _g4_s7 ? (32u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v28)) > _g4_s8 ? (36u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v29)) > _g4_s9 ? (48u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (49u + sizeof(_g4_t_v30)) > _g4_s10 ? (49u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v31)) > _g4_s11 ? (64u + sizeof(_g4_t_v31)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 49u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);

  v27 = a3;
  v28 = (gameswf::RefCounted::Self *)(a4);
  if ( a4 != nullptr )
    gameswf::RefCounted::addRef(a4);
  sub_7763C0((gameswf::String::Self *)&v29, (char *)a2);
  v4 = (gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((gameswf::MovieDefImpl::Self *)((char *)self + 112));
  v22 = *((uint32_t *)self + 28);
  if ( v22 == 0 )
    goto LABEL_39;
  if ( (uint8_t *)(v31 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v29 == -1 )
    {
      v16 = *(uint8_t **)&v30[11];
      v17 = *(uint32_t *)&v30[3] - 1;
    }
    else
    {
      v16 = v30;
      v17 = v29 - 1;
    }
    v5 = 5381;
    v18 = 5381;
    if ( v17 > 0 )
    {
      do
      {
        --v17;
        v26 = 33 * v18;
        v19 = (uint8_t)v16[v17] + 32;
        if ( (uint8_t)(v16[v17] - 65) > 0x19u )
          v19 = (uint8_t)v16[v17];
        v18 = v26 ^ v19;
      }
      while ( v17 != 0 );
      v4 = (gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((gameswf::MovieDefImpl::Self *)((char *)self + 112));
      v18 = v18 << 9 >> 9;
      v5 = v18;
    }
    v31 = v18 & 0x7FFFFF | v31 & 0xFF800000;
  }
  else
  {
    v5 = (int)(v31 << 9) >> 9;
  }
  v24 = *(uint32_t *)(v22 + 4);
  v6 = v5 & v24;
  v7 = v22 + 36 * (v5 & v24) + 8;
  if ( *(uint32_t *)v7 == -2 )
    goto LABEL_39;
  v23 = *(uint32_t *)(v22 + 36 * (v5 & v24) + 12);
  if ( v6 != (v23 & v24) )
    goto LABEL_39;
  for ( i = v23; ; i = *(uint32_t *)(v7 + 4) )
  {
    if ( i == v5 )
    {
      if ( &v29 == (char *)(v7 + 8) )
        break;
      v9 = (char *)(v30);
      if ( v29 == -1 )
        v9 = *(char **)&v30[11];
      v25 = *(uint8_t *)(v7 + 8) == 0xFF ? *(gameswf::String::Self **)(v7 + 20) : (gameswf::String::Self *)(v7 + 9);
      v21 = v4;
      v20 = v5;
      v10 = gameswf::String::stricmp(v25, v9);
      v4 = v21;
      v5 = v20;
      if ( v10 == 0 )
        break;
    }
    v6 = *(uint32_t *)v7;
    if ( *(uint32_t *)v7 == -1 )
      goto LABEL_39;
    v7 = *(uint32_t *)v4 + 36 * v6 + 8;
  }
  if ( v6 >= 0 )
  {
    v11 = 36 * v6 + 8;
    v12 = v28;
    v13 = *((uint32_t *)self + 28) + v11;
    *(uint32_t *)(v13 + 28) = v27;
    v14 = *(gameswf::RefCounted::Self **)(v13 + 32);
    if ( v12 != v14 )
    {
      if ( v14 != nullptr )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v13 + 32));
      *(uint32_t *)(v13 + 32) = (uint32_t)(uintptr_t)(v12);
      if ( v12 != nullptr )
        gameswf::RefCounted::addRef(v12);
    }
  }
  else
  {
LABEL_39:
    gameswf::hash_gameswf_StringI_gameswf_d8d800::add(
      v4,
      (gameswf::String::Self *)&v29,
      (int)(uintptr_t)(&v27));
  }
  if ( v29 == -1 && (v31 & 0x1000000) != 0 )
    gameswf::free_internal(*(gameswf::Self **)&v30[11]);
  result = v28;
  if ( v28 != nullptr )
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v28);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::addImport  (binary VA: 0x10ae3e0)
// Original: gameswf::MovieDefImpl::addImport
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::MovieDefImpl::addImport(gameswf::MovieDefImpl::Self *self, gameswf::MovieDefImpl::Self *a2, int a3, const gameswf::String::Self *a4)
{
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int i;
  gameswf::RefCounted::Self *result;
  gameswf::RefCounted::Self *v13;
  int index;
  gameswf::RefCounted::Self *v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *_g4_t_v25;
  typedef const char *_g4_t_v26;
  typedef const char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef gameswf::RefCounted::Self *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v24)) > _g4_s4 ? (12u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v25)) > _g4_s5 ? (16u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v26)) > _g4_s6 ? (20u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v27)) > _g4_s7 ? (20u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v28)) > _g4_s8 ? (24u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v29)) > _g4_s9 ? (32u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v30)) > _g4_s10 ? (36u + sizeof(_g4_t_v30)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);

  v25 = (gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *)((gameswf::MovieDefImpl::Self *)((char *)self + 116));
  v4 = *((uint32_t *)self + 29);
  if ( v4 == 0 )
    goto LABEL_20;
  if ( *(uint8_t *)a4 == 0xFF )
  {
    v6 = *((char **)a4 + 3);
    v5 = *((uint32_t *)a4 + 1) - 1;
  }
  else
  {
    v5 = *(char *)a4 - 1;
    v6 = (char *)a4 + 1;
  }
  v7 = 5381;
  if ( v5 > 0 )
  {
    do
      v7 = (33 * v7) ^ (uint8_t)v6[--v5];
    while ( v5 != 0 );
  }
  v28 = *(uint32_t *)(v4 + 4);
  v8 = v7 & v28;
  if ( *(uint32_t *)(v4 + 36 * (v7 & v28) + 8) == -2 )
    goto LABEL_20;
  v20 = *(uint32_t *)(v4 + 36 * (v7 & v28) + 12);
  if ( v8 != (v20 & v28) )
    goto LABEL_20;
  if ( *(uint8_t *)a4 == 0xFF )
  {
    v17 = *(uint32_t *)(v4 + 36 * (v7 & v28) + 12);
    v18 = v7;
    v19 = (uint32_t *)(v4 + 36 * (v7 & v28) + 8);
    while ( 1 )
    {
      if ( v17 == v18 )
      {
        result = (gameswf::RefCounted::Self *)(v19 + 2);
        if ( a4 == (const gameswf::String::Self *)(v19 + 2) )
          break;
        v27 = (char *)v19 + 9;
        if ( *((uint8_t *)v19 + 8) == 0xFF )
          v27 = (const char *)v19[5];
        v22 = v18;
        v24 = v4;
        result = (gameswf::RefCounted::Self *)strcmp(v27, *((const char **)a4 + 3));
        v18 = v22;
        v4 = v24;
        if ( result == nullptr )
          break;
      }
      v8 = *v19;
      if ( *v19 == -1 )
        goto LABEL_20;
      v19 = (uint32_t *)(v4 + 36 * v8 + 8);
      v17 = *(uint32_t *)(v4 + 36 * v8 + 12);
    }
  }
  else
  {
    v9 = v7;
    v10 = (uint32_t *)(v4 + 36 * (v7 & v28) + 8);
    for ( i = v20; ; i = *(uint32_t *)(v4 + 36 * v8 + 12) )
    {
      if ( i == v9 )
      {
        result = (gameswf::RefCounted::Self *)(v10 + 2);
        if ( a4 == (const gameswf::String::Self *)(v10 + 2) )
          break;
        v26 = *((uint8_t *)v10 + 8) == 0xFF ? (const char *)v10[5] : (char *)v10 + 9;
        v21 = v9;
        v23 = v4;
        result = (gameswf::RefCounted::Self *)strcmp(v26, (const char *)a4 + 1);
        v9 = v21;
        v4 = v23;
        if ( result == nullptr )
          break;
      }
      v8 = *v10;
      if ( *v10 == -1 )
        goto LABEL_20;
      v10 = (uint32_t *)(v4 + 36 * v8 + 8);
    }
  }
  if ( v8 < 0 || self == (gameswf::MovieDefImpl::Self *)-116 || v28 < v8 )
  {
LABEL_20:
    result = (gameswf::RefCounted::Self *)G4_VCALL<int>(a2, 84, a4);
    v13 = result;
    if ( result != nullptr )
    {
      result = (gameswf::RefCounted::Self *)G4_VCALL<int>(result, 8, 23);
      if ( (uint8_t)(uintptr_t)(result) == 0 )
      {
        result = (gameswf::RefCounted::Self *)G4_VCALL<int>(v13, 8, 14);
        if ( (uint8_t)(uintptr_t)(result) != 0 )
        {
          v30 = v13;
          v29 = a3;
          gameswf::RefCounted::addRef(v13);
          index = gameswf::hash_gameswf_String_gameswf_S_307bef::find_index(
                    v25,
                    a4);
          if ( index < 0 )
          {
            result = (gameswf::RefCounted::Self *)gameswf::hash_gameswf_String_gameswf_S_307bef::add(
                                              v25,
                                              a4,
                                              (int)(uintptr_t)(&v29));
          }
          else
          {
            v15 = v30;
            v16 = *((uint32_t *)self + 29) + 36 * index + 8;
            *(uint32_t *)(v16 + 28) = v29;
            result = *(gameswf::RefCounted::Self **)(v16 + 32);
            if ( v15 == result )
              goto LABEL_29;
            if ( result != nullptr )
              result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v16 + 32));
            *(uint32_t *)(v16 + 32) = (uint32_t)(uintptr_t)(v15);
            if ( v15 != nullptr )
            {
              result = gameswf::RefCounted::addRef(v15);
              v15 = v30;
              goto LABEL_29;
            }
          }
          v15 = v30;
LABEL_29:
          if ( v15 != nullptr )
            return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v15);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::is  (binary VA: 0x10ae6c0)
// Original: gameswf::MovieDefImpl::is
// ----------------------------------------------------------------------------
bool gameswf::MovieDefImpl::is(gameswf::MovieDefImpl::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 12 && a2 != 13 )
    return a2 == 14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::hasInitActions  (binary VA: 0x10ae6e0)
// Original: gameswf::MovieDefImpl::hasInitActions
// ----------------------------------------------------------------------------
int gameswf::MovieDefImpl::hasInitActions(gameswf::MovieDefImpl::Self *self)
{
  return *((uint8_t *)self + 216);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MovieDefImpl::isMultiThread  (binary VA: 0x10ae6f0)
// Original: gameswf::MovieDefImpl::isMultiThread
// ----------------------------------------------------------------------------
bool gameswf::MovieDefImpl::isMultiThread(gameswf::MovieDefImpl::Self *self)
{
  return *((uint32_t *)self + 52) != 0;
}


