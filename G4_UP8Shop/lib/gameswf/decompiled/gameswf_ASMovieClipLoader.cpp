#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASMovieClipLoader.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::unloadClip  (binary VA: 0x1133bd0)
// Original: gameswf::ASMovieClipLoader::unloadClip
// ----------------------------------------------------------------------------
int gameswf::ASMovieClipLoader::unloadClip(int a1)
{
  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  gameswf::ASEnvironment::loadFile(
    *(gameswf::ASObject::Self ***)(a1 + 12),
    (gameswf::Self *)&unk_1B15112,
    (const gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::removeListener  (binary VA: 0x1133c60)
// Original: gameswf::ASMovieClipLoader::removeListener
// ----------------------------------------------------------------------------
int gameswf::ASMovieClipLoader::removeListener(int a1)
{
  int v1;
  gameswf::ASObject::Self *v3;
  int v4;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 42) == 0 )
    v1 = 0;
  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  v3 = nullptr;
  v4 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v4 == 5 )
    v3 = *(gameswf::ASObject::Self **)(v4 + 4);
  gameswf::Listener::remove((gameswf::Listener::Self *)(v1 + 40), v3);
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::addListener  (binary VA: 0x1133d10)
// Original: gameswf::ASMovieClipLoader::addListener
// ----------------------------------------------------------------------------
int gameswf::ASMovieClipLoader::addListener(int a1)
{
  gameswf::Player::Self **v1;
  gameswf::ASObject::Self *v3;
  int v4;
  int Root;

  v1 = *(gameswf::Player::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 42) == 0 )
    v1 = nullptr;
  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  v3 = nullptr;
  v4 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v4 == 5 )
    v3 = *(gameswf::ASObject::Self **)(v4 + 4);
  gameswf::Listener::add((gameswf::Listener::Self *)(v1 + 10), v3);
  gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
  Root = gameswf::ASObject::getRoot(v1);
  { gameswf::Listener::add((gameswf::Listener::Self *)(Root + 260), (gameswf::ASObject::Self *)v1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::Destroy  (binary VA: 0x1133de0)
// Original: gameswf::ASMovieClipLoader::~ASMovieClipLoader
// ----------------------------------------------------------------------------
void gameswf::ASMovieClipLoader::Destroy(gameswf::ASMovieClipLoader::Self *self)
{
  gameswf::ASMovieClipLoader::Self *v1;
  int v2;
  int i;
  int v4;
  gameswf::Self *v5;
  bool v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int j;
  gameswf::Self *v11;
  int v12;
  gameswf::Self *v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;

  v1 = self;
  v2 = *((uint32_t *)self + 15);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FE48);
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v16 = 16 * v2;
      do
      {
        v17 = (uint32_t *)(*((uint32_t *)self + 14) + v16);
        if ( v17 != nullptr )
        {
          *v17 = 0;
          v17[1] = 0;
          v17[2] = 0;
          v17[3] = 0;
        }
        v16 += 16;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = *((uint32_t *)self + 14) + 16 * i;
      v5 = *(gameswf::Self **)(v4 + 4);
      if ( v5 != nullptr )
      {
        v6 = (*(uint16_t *)v5)-- == 1;
        if ( v6 )
          gameswf::free_internal(v5);
      }
      if ( *(uint32_t *)v4 != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)v4);
    }
    v1 = self;
  }
  v7 = *((uint32_t *)v1 + 17);
  *((uint32_t *)v1 + 15) = 0;
  if ( v7 == 0 )
  {
    v8 = *((gameswf::Self **)v1 + 14);
    *((uint32_t *)v1 + 16) = 0;
    if ( v8 != nullptr )
      gameswf::free_internal(v8);
    *((uint32_t *)v1 + 14) = 0;
  }
  v9 = *((uint32_t *)v1 + 11);
  if ( v9 <= 0 )
  {
    if ( v9 < 0 )
    {
      v14 = 8 * v9;
      do
      {
        v15 = (uint32_t *)(*((uint32_t *)v1 + 10) + v14);
        if ( v15 != nullptr )
        {
          *v15 = 0;
          v15[1] = 0;
        }
        v14 += 8;
        ++v9;
      }
      while ( v9 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v9; ++j )
    {
      v11 = *(gameswf::Self **)(*((uint32_t *)v1 + 10) + 8 * j);
      if ( v11 != nullptr )
      {
        v6 = (*(uint16_t *)v11)-- == 1;
        if ( v6 )
          gameswf::free_internal(v11);
      }
    }
  }
  v12 = *((uint32_t *)v1 + 13);
  *((uint32_t *)v1 + 11) = 0;
  if ( v12 == 0 )
  {
    v13 = *((gameswf::Self **)v1 + 10);
    *((uint32_t *)v1 + 12) = 0;
    if ( v13 != nullptr )
      gameswf::free_internal(v13);
    *((uint32_t *)v1 + 10) = 0;
  }
  gameswf::ASObject::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::Destroy_ea1133f90  (binary VA: 0x1133f90)
// Original: gameswf::ASMovieClipLoader::~ASMovieClipLoader
// ----------------------------------------------------------------------------
void gameswf::ASMovieClipLoader::Destroy_ea1133f90(gameswf::ASMovieClipLoader::Self *self)
{
  gameswf::ASMovieClipLoader::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::getProgress  (binary VA: 0x1133fd0)
// Original: gameswf::ASMovieClipLoader::getProgress
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASMovieClipLoader::getProgress(int a1)
{
  int v2;
  gameswf::SpriteInstance::Self *v3;
  int v4;
  gameswf::Player::Self *v5;
  gameswf::Self *v6;
  gameswf::ASObject::Self *v7;
  gameswf::Self *v8;
  int StandardMemberID;
  double FileBytes; // xmm0_8
  gameswf::Self *v11;
  int v12;
  typedef gameswf::Player::Self *_g4_t_v14;
  typedef gameswf::SpriteInstance::Self *_g4_t_v15;
  typedef uint16_t _g4_t_v16[6];
  typedef uint16_t _g4_t_v17[6];
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
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v18)) > _g4_s4 ? (40u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (41u + sizeof(_g4_t_v19)) > _g4_s5 ? (41u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v20)) > _g4_s6 ? (52u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v21)) > _g4_s7 ? (56u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (58u + sizeof(_g4_t_v22)) > _g4_s8 ? (58u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (59u + sizeof(_g4_t_v23)) > _g4_s9 ? (59u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v24)) > _g4_s10 ? (72u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (73u + sizeof(_g4_t_v25)) > _g4_s11 ? (73u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v26)) > _g4_s12 ? (84u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v27)) > _g4_s13 ? (88u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (90u + sizeof(_g4_t_v28)) > _g4_s14 ? (90u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (91u + sizeof(_g4_t_v29)) > _g4_s15 ? (91u + sizeof(_g4_t_v29)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 41u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 58u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 59u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 73u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 90u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 91u);

  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v2 != 5 )
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  v3 = *(gameswf::SpriteInstance::Self **)(v2 + 4);
  v15 = v3;
  if ( v3 == nullptr || G4_VCALL<uint8_t>(v3, 8, 2) == 0 )
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  v4 = *(uint32_t *)(a1 + 12);
  v5 = *(gameswf::Player::Self **)(v4 + 212);
  if ( v5 != nullptr )
  {
    v6 = *(gameswf::Self **)(v4 + 208);
    if ( *((uint8_t *)v6 + 2) == 0 )
    {
      if ( (*(uint16_t *)v6)-- == 1 )
        gameswf::free_internal(v6);
      *(uint32_t *)(v4 + 208) = 0;
      *(uint32_t *)(v4 + 212) = 0;
      v5 = nullptr;
    }
  }
  v14 = v5;
  v7 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v7, v14);
  v16[0] = 2;
  *(double *)&v16[2] = (double)gameswf::SpriteInstance::getLoadedBytes(v15);
  v18 = 1;
  v19 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v18, 11);
  v8 = (gameswf::Self *)&v19;
  if ( v18 == -1 )
    v8 = v20;
  gameswf::Strcpy_s(v8, &byte_9[3], (gameswf::Self *)"bytesLoaded");
  v21 = -1;
  v22 = 127;
  v23 |= 1u;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v18);
  if ( StandardMemberID == -1
    || G4_VCALL<uint8_t>(v7, 32, StandardMemberID, v16) == 0 )
  {
    G4_VCALL<void>(v7, 48, &v18, v16);
  }
  if ( v18 == -1 && (v23 & 1) != 0 )
    gameswf::free_internal(v20);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  FileBytes = (double)gameswf::SpriteInstance::getFileBytes(v15);
  v17[0] = 2;
  *(double *)&v17[2] = FileBytes;
  v24 = 1;
  v25 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v24, 10);
  v11 = (gameswf::Self *)&v25;
  if ( v24 == -1 )
    v11 = v26;
  gameswf::Strcpy_s(v11, &byte_9[2], (gameswf::Self *)"bytesTotal");
  v27 = -1;
  v28 = 127;
  v29 |= 1u;
  v12 = gameswf::getStandardMemberID((gameswf::Self *)&v24);
  if ( v12 == -1
    || G4_VCALL<uint8_t>(v7, 32, v12, v17) == 0 )
  {
    G4_VCALL<void>(v7, 48, &v24, v17);
  }
  if ( v24 == -1 && (v29 & 1) != 0 )
    gameswf::free_internal(v26);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v7);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::advance  (binary VA: 0x1134310)
// Original: gameswf::ASMovieClipLoader::advance
// ----------------------------------------------------------------------------
int gameswf::ASMovieClipLoader::advance(gameswf::ASMovieClipLoader::Self *self)
{
  int result;
  int v2;
  int v3;
  char *v4;
  gameswf::RefCounted::Self *v5;
  gameswf::MovieDefImpl::Self *v6;
  int v7;
  int v8;
  int v9;
  gameswf::Self *v10;
  int v11;
  char *v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  gameswf::ASValue::Self *v18;
  int v19;
  int v20;
  gameswf::Self *v21;
  int v22;
  char *v23;
  char *v24;
  gameswf::RefCounted::Self **v25;
  gameswf::Self *v26;
  bool v27;
  int v28;
  bool v29;
  int v30;
  int v31;
  gameswf::ASValue::Self *v32;
  gameswf::RefCounted::Self **v33;
  gameswf::Self *v34;
  int v35;
  char *v36;
  gameswf::MovieDefImpl::Self *v37;
  gameswf::Self *v38;
  int v39;
  char *v40;
  int Root;
  typedef int _g4_t_v42;
  typedef gameswf::RefCounted::Self **_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_FileBytes;
  typedef int _g4_t_v54;
  typedef gameswf::Listener::Self *_g4_t_v55;
  typedef gameswf::MovieDefImpl::Self **_g4_t_v56;
  typedef int _g4_t_LoadedBytes;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t _g4_t_v62[2];
  typedef uint32_t _g4_t_v63[2];
  typedef uint32_t _g4_t_v64[2];
  typedef uint32_t _g4_t_v65[2];
  typedef gameswf::Self *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v43)) > _g4_s1 ? (4u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v44)) > _g4_s2 ? (4u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v45)) > _g4_s3 ? (4u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v46)) > _g4_s4 ? (4u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v47)) > _g4_s5 ? (4u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v48)) > _g4_s6 ? (8u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v49)) > _g4_s7 ? (8u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v50)) > _g4_s8 ? (12u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v51)) > _g4_s9 ? (12u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v52)) > _g4_s10 ? (12u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_FileBytes)) > _g4_s11 ? (16u + sizeof(_g4_t_FileBytes)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v54)) > _g4_s12 ? (20u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v55)) > _g4_s13 ? (24u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v56)) > _g4_s14 ? (28u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_LoadedBytes)) > _g4_s15 ? (28u + sizeof(_g4_t_LoadedBytes)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v58)) > _g4_s16 ? (28u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v59)) > _g4_s17 ? (28u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v60)) > _g4_s18 ? (28u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v61)) > _g4_s19 ? (28u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v62)) > _g4_s20 ? (32u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v63)) > _g4_s21 ? (40u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v64)) > _g4_s22 ? (48u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v65)) > _g4_s23 ? (56u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v66)) > _g4_s24 ? (64u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v67)) > _g4_s25 ? (68u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v68)) > _g4_s26 ? (72u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v69)) > _g4_s27 ? (76u + sizeof(_g4_t_v69)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_FileBytes &FileBytes = *reinterpret_cast<_g4_t_FileBytes *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_LoadedBytes &LoadedBytes = *reinterpret_cast<_g4_t_LoadedBytes *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);

  v54 = 0;
  result = *((uint32_t *)self + 15);
  if ( result != 0 )
  {
    if ( result > 0 )
    {
      do
      {
        v66 = nullptr;
        v67 = 0;
        v69 = 0;
        v68 = 1;
        v2 = 16 * v54;
        v3 = *((uint32_t *)self + 14);
        v66 = (gameswf::Self *)gameswf::malloc_internal(0xCu);
        v4 = (char *)v66 + 12 * v67;
        if ( v4 != nullptr )
        {
          v5 = *(gameswf::RefCounted::Self **)(v3 + v2 + 12);
          *v4 = 5;
          v4[1] = 0;
          *((uint32_t *)v4 + 1) = (uint32_t)(uintptr_t)(v5);
          if ( v5 != nullptr )
            gameswf::RefCounted::addRef(v5);
        }
        v67 = 1;
        v55 = (gameswf::Listener::Self *)((gameswf::ASMovieClipLoader::Self *)((char *)self + 40));
        v56 = (gameswf::MovieDefImpl::Self **)(*((uint32_t *)self + 14) + v2);
        v6 = *v56;
        if ( *((int *)*v56 + 14) > 0 && v56[3] == nullptr )
        {
          v37 = v56[2];
          if ( v37 != nullptr )
          {
            v38 = (gameswf::Self *)(v56[1]);
            if ( *((uint8_t *)v38 + 2) != 0 )
            {
              v56[3] = (gameswf::MovieDefImpl::Self *)G4_VCALL<int>(v37, 184, v6);
            }
            else
            {
              v27 = (*(uint16_t *)v38)-- == 1;
              if ( v27 )
                gameswf::free_internal(v38);
              v56[1] = nullptr;
              v56[2] = nullptr;
            }
          }
          v62[0] = 24;
          v55 = (gameswf::Listener::Self *)((gameswf::ASMovieClipLoader::Self *)((char *)self + 40));
          v62[1] = (uint32_t)(uintptr_t)(&v66);
          gameswf::Listener::notify((gameswf::ASMovieClipLoader::Self *)((char *)self + 40), (const gameswf::EventId::Self *)v62);
          v6 = *(gameswf::MovieDefImpl::Self **)(*((uint32_t *)self + 14) + 16 * v54);
        }
        LoadedBytes = gameswf::MovieDefImpl::getLoadedBytes(v6);
        FileBytes = gameswf::MovieDefImpl::getFileBytes(*(gameswf::MovieDefImpl::Self **)(*((uint32_t *)self + 14) + 16 * v54));
        if ( LoadedBytes >= FileBytes )
        {
          v19 = v68;
          v51 = v67;
          v20 = v67 + 1;
          if ( v67 + 1 <= v68 || v69 != 0 )
          {
            v21 = v66;
            v22 = v67;
          }
          else
          {
            v42 = v20 + (v20 >> 1);
            v68 = v42;
            if ( v42 != 0 )
            {
              v47 = v67 + 1;
              if ( v66 != nullptr )
                v21 = (gameswf::Self *)gameswf::realloc_internal(v66, 12 * v42, 12 * v19);
              else
                v21 = (gameswf::Self *)gameswf::malloc_internal(12 * v42);
              v66 = v21;
              v22 = v67;
              v20 = v47;
            }
            else
            {
              v22 = v67;
              if ( v66 != nullptr )
              {
                v44 = v67 + 1;
                gameswf::free_internal(v66);
                v22 = v67;
                v20 = v44;
              }
              v66 = nullptr;
              v21 = nullptr;
            }
          }
          v23 = (char *)v21 + 12 * v22;
          if ( v23 != nullptr )
          {
            *v23 = 2;
            v23[1] = 0;
            *(double *)(v23 + 4) = (double)LoadedBytes;
            v21 = v66;
          }
          v67 = v20;
          v59 = v51 + 2;
          v48 = v68;
          if ( v51 + 2 > v68 && v69 == 0 )
          {
            v52 = (v59 >> 1) + v59;
            v68 = v52;
            if ( v52 != 0 )
            {
              if ( v21 != nullptr )
                v21 = (gameswf::Self *)gameswf::realloc_internal(v21, 12 * v52, 12 * v48);
              else
                v21 = (gameswf::Self *)gameswf::malloc_internal(12 * v52);
              v66 = v21;
              v20 = v67;
            }
            else
            {
              if ( v21 != nullptr )
              {
                gameswf::free_internal(v21);
                v20 = v67;
              }
              v66 = nullptr;
              v21 = nullptr;
            }
          }
          v24 = (char *)v21 + 12 * v20;
          if ( v24 != nullptr )
          {
            *v24 = 2;
            v24[1] = 0;
            *(double *)(v24 + 4) = (double)FileBytes;
          }
          v67 = v59;
          v64[0] = 25;
          v64[1] = (uint32_t)(uintptr_t)(&v66);
          gameswf::Listener::notify(v55, (const gameswf::EventId::Self *)v64);
          v65[0] = 22;
          v65[1] = (uint32_t)(uintptr_t)(&v66);
          gameswf::Listener::notify(v55, (const gameswf::EventId::Self *)v65);
          if ( *((uint32_t *)self + 15) == 1 )
          {
            v33 = *((gameswf::RefCounted::Self ***)self + 14);
            v34 = (gameswf::Self *)(v33[1]);
            if ( v34 != nullptr )
            {
              v27 = (*(uint16_t *)v34)-- == 1;
              if ( v27 )
                gameswf::free_internal(v34);
            }
            if ( *v33 != nullptr )
              gameswf::RefCounted::dropRef(*v33);
            v28 = v67;
            v29 = v67 < 0;
            *((uint32_t *)self + 15) = 0;
            if ( v28 <= 0 )
            {
LABEL_47:
              if ( v29 )
              {
                v35 = 12 * v28;
                do
                {
                  v36 = (char *)v66 + v35;
                  if ( (gameswf::Self *)((char *)v66 + v35) != nullptr )
                  {
                    *v36 = 0;
                    v36[1] = 0;
                  }
                  v35 += 12;
                  ++v28;
                }
                while ( v28 != 0 );
              }
              goto LABEL_19;
            }
          }
          else
          {
            v25 = (gameswf::RefCounted::Self **)(*((uint32_t *)self + 14) + v2);
            v26 = (gameswf::Self *)(v25[1]);
            if ( v26 != nullptr )
            {
              v27 = (*(uint16_t *)v26)-- == 1;
              if ( v27 )
              {
                v43 = v25;
                gameswf::free_internal(v26);
                v25 = v43;
              }
            }
            if ( *v25 != nullptr )
              gameswf::RefCounted::dropRef(*v25);
            memmove(
              (void *)(*((uint32_t *)self + 14) + v2),
              (const void *)(*((uint32_t *)self + 14) + 16 * (v54 + 1)),
              16 * (*((uint32_t *)self + 15) + ~v54));
            v28 = v67;
            --*((uint32_t *)self + 15);
            v29 = v28 < 0;
            if ( v28 <= 0 )
              goto LABEL_47;
          }
          v60 = v28;
          v30 = 0;
          v31 = 0;
          do
          {
            ++v30;
            v32 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v66 + v31));
            v31 += 12;
            gameswf::ASValue::dropRefs(v32);
          }
          while ( v30 != v60 );
        }
        else
        {
          v7 = v67;
          v8 = v68;
          v9 = v67 + 1;
          if ( v67 + 1 <= v68 || v69 != 0 )
          {
            v10 = v66;
            v11 = v67;
          }
          else
          {
            v49 = v9 + (v9 >> 1);
            v68 = v49;
            if ( v49 != 0 )
            {
              v46 = v67 + 1;
              if ( v66 != nullptr )
                v10 = (gameswf::Self *)gameswf::realloc_internal(v66, 12 * v49, 12 * v8);
              else
                v10 = (gameswf::Self *)gameswf::malloc_internal(12 * v49);
              v66 = v10;
              v11 = v67;
              v9 = v46;
            }
            else
            {
              v11 = v67;
              if ( v66 != nullptr )
              {
                v45 = v67 + 1;
                gameswf::free_internal(v66);
                v11 = v67;
                v9 = v45;
              }
              v66 = nullptr;
              v10 = nullptr;
            }
          }
          v12 = (char *)v10 + 12 * v11;
          if ( v12 != nullptr )
          {
            *v12 = 2;
            v12[1] = 0;
            *(double *)(v12 + 4) = (double)LoadedBytes;
            v10 = v66;
          }
          v13 = v7 + 2;
          v67 = v9;
          v50 = v68;
          if ( v13 > v68 && v69 == 0 )
          {
            v61 = v13 + (v13 >> 1);
            v68 = v61;
            if ( v61 != 0 )
            {
              if ( v10 != nullptr )
                v10 = (gameswf::Self *)gameswf::realloc_internal(v10, 12 * v61, 12 * v50);
              else
                v10 = (gameswf::Self *)gameswf::malloc_internal(12 * v61);
              v66 = v10;
              v9 = v67;
            }
            else
            {
              if ( v10 != nullptr )
              {
                gameswf::free_internal(v10);
                v9 = v67;
              }
              v66 = nullptr;
              v10 = nullptr;
            }
          }
          v14 = (char *)v10 + 12 * v9;
          if ( v14 != nullptr )
          {
            *v14 = 2;
            v14[1] = 0;
            *(double *)(v14 + 4) = (double)FileBytes;
          }
          v67 = v13;
          v63[0] = 25;
          v63[1] = (uint32_t)(uintptr_t)(&v66);
          gameswf::Listener::notify(v55, (const gameswf::EventId::Self *)v63);
          v15 = v67;
          ++v54;
          if ( v67 <= 0 )
          {
            if ( v67 < 0 )
            {
              v39 = 12 * v67;
              do
              {
                v40 = (char *)v66 + v39;
                if ( (gameswf::Self *)((char *)v66 + v39) != nullptr )
                {
                  *v40 = 0;
                  v40[1] = 0;
                }
                v39 += 12;
                ++v15;
              }
              while ( v15 != 0 );
            }
          }
          else
          {
            v58 = v67;
            v16 = 0;
            v17 = 0;
            do
            {
              ++v16;
              v18 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v66 + v17));
              v17 += 12;
              gameswf::ASValue::dropRefs(v18);
            }
            while ( v16 != v58 );
          }
        }
LABEL_19:
        v67 = 0;
        if ( v69 == 0 )
        {
          v68 = 0;
          if ( v66 != nullptr )
            gameswf::free_internal(v66);
        }
        result = *((uint32_t *)self + 15);
      }
      while ( v54 < result );
    }
  }
  else
  {
    Root = gameswf::ASObject::getRoot((gameswf::Player::Self **)self);
    return (int)(uintptr_t)(gameswf::Listener::remove((gameswf::Listener::Self *)(Root + 260), self));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::loadClip  (binary VA: 0x1134b90)
// Original: gameswf::ASMovieClipLoader::loadClip
// ----------------------------------------------------------------------------
int gameswf::ASMovieClipLoader::loadClip(int a1)
{
  int v1;
  int v2;
  int result;
  gameswf::Self *v4;
  int v5;
  gameswf::Player::Self *v6;
  gameswf::Self *v7;
  char *Workdir;
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::Player::Self *v11;
  gameswf::Self *v12;
  pthread_mutex_t **Movie;
  int Target;
  gameswf::RefCounted::Self *v15;
  int v16;
  bool v17;
  gameswf::RefCounted::Self **v18;
  int v19;
  gameswf::RefCounted::Self *v20;
  int v21;
  gameswf::ASValue::Self *v22;
  gameswf::RefCounted::Self *WeakProxy;
  char *v24;
  gameswf::Self *v25;
  int v26;
  int v27;
  int v28;
  gameswf::Self *v29;
  gameswf::ASValue::Self *v30;
  int v31;
  gameswf::RefCounted::Self *v32;
  int v33;
  gameswf::ASValue::Self *v34;
  char *v35;
  int v36;
  char *v37;
  char *v38;
  typedef gameswf::RefCounted::Self *_g4_t_v39;
  typedef gameswf::Self *_g4_t_v40;
  typedef gameswf::RefCounted::Self *_g4_t_v41;
  typedef gameswf::RefCounted::Self *_g4_t_v42;
  typedef gameswf::RefCounted::Self *_g4_t_v43;
  typedef gameswf::RefCounted::Self *_g4_t_v44;
  typedef gameswf::RefCounted::Self *_g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef int _g4_t_v47;
  typedef gameswf::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef gameswf::RefCounted::Self **_g4_t_v52;
  typedef gameswf::RefCounted::Self *_g4_t_v53;
  typedef gameswf::RefCounted::Self *_g4_t_v54;
  typedef gameswf::RefCounted::Self *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef char *_g4_t_v57;
  typedef uint8_t _g4_t_v58[2];
  typedef int16_t _g4_t_v59;
  typedef gameswf::Self **_g4_t_v60;
  typedef uint8_t _g4_t_v61[2];
  typedef int16_t _g4_t_v62;
  typedef gameswf::Self **_g4_t_v63;
  typedef uint8_t _g4_t_v64[12];
  typedef gameswf::Self *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef char _g4_t_v69;
  typedef char _g4_t_v70;
  typedef gameswf::Self *_g4_t_v71;
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef gameswf::Self *_g4_t_v75;
  typedef int16_t _g4_t_v76;
  typedef char _g4_t_v77;
  typedef char _g4_t_v78;
  typedef int *_g4_t_v79;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v40)) > _g4_s1 ? (16u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v41)) > _g4_s2 ? (16u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v42)) > _g4_s3 ? (16u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v43)) > _g4_s4 ? (16u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v44)) > _g4_s5 ? (16u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v45)) > _g4_s6 ? (16u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v46)) > _g4_s7 ? (20u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v47)) > _g4_s8 ? (20u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v48)) > _g4_s9 ? (20u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v49)) > _g4_s10 ? (28u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v50)) > _g4_s11 ? (28u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v51)) > _g4_s12 ? (28u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v52)) > _g4_s13 ? (28u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v53)) > _g4_s14 ? (32u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v54)) > _g4_s15 ? (32u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v55)) > _g4_s16 ? (32u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v56)) > _g4_s17 ? (36u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v57)) > _g4_s18 ? (36u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v58)) > _g4_s19 ? (44u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (46u + sizeof(_g4_t_v59)) > _g4_s20 ? (46u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v60)) > _g4_s21 ? (48u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v61)) > _g4_s22 ? (52u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (54u + sizeof(_g4_t_v62)) > _g4_s23 ? (54u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v63)) > _g4_s24 ? (56u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v64)) > _g4_s25 ? (60u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v65)) > _g4_s26 ? (72u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v66)) > _g4_s27 ? (76u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v67)) > _g4_s28 ? (80u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (84u + sizeof(_g4_t_v68)) > _g4_s29 ? (84u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (88u + sizeof(_g4_t_v69)) > _g4_s30 ? (88u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (89u + sizeof(_g4_t_v70)) > _g4_s31 ? (89u + sizeof(_g4_t_v70)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v71)) > _g4_s32 ? (100u + sizeof(_g4_t_v71)) : _g4_s32,
    _g4_s34 = (107u + sizeof(_g4_t_v72)) > _g4_s33 ? (107u + sizeof(_g4_t_v72)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v73)) > _g4_s34 ? (120u + sizeof(_g4_t_v73)) : _g4_s34,
    _g4_s36 = (121u + sizeof(_g4_t_v74)) > _g4_s35 ? (121u + sizeof(_g4_t_v74)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v75)) > _g4_s36 ? (132u + sizeof(_g4_t_v75)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v76)) > _g4_s37 ? (136u + sizeof(_g4_t_v76)) : _g4_s37,
    _g4_s39 = (138u + sizeof(_g4_t_v77)) > _g4_s38 ? (138u + sizeof(_g4_t_v77)) : _g4_s38,
    _g4_s40 = (139u + sizeof(_g4_t_v78)) > _g4_s39 ? (139u + sizeof(_g4_t_v78)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v79)) > _g4_s40 ? (160u + sizeof(_g4_t_v79)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 46u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 54u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 89u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 100u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 107u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 120u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 121u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 132u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 136u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 138u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 139u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 160u);

  v79 = &a1;
  v1 = a1;
  v2 = *(uint32_t *)(a1 + 4);
  if ( v2 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a1 + 4), 42) == 0 )
    v2 = 0;
  result = gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)v1, 0);
  if ( *(uint32_t *)(v1 + 16) == 2 )
  {
    v66 = 0;
    v68 = 0;
    v64[0] = 0;
    v64[1] = 0;
    v67 = 1;
    v65 = (gameswf::Self *)gameswf::malloc_internal(0xCu);
    v4 = v65;
    if ( v65 != nullptr )
    {
      *(uint8_t *)v65 = 0;
      *((uint8_t *)v4 + 1) = 0;
      gameswf::ASValue::opAssign(v4, (const gameswf::ASValue::Self *)v64);
    }
    v66 = 1;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v64);
    v56 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 12 * *(uint32_t *)(v1 + 20)));
    v5 = *(uint32_t *)(v1 + 12);
    v6 = *(gameswf::Player::Self **)(v5 + 212);
    if ( v6 != nullptr )
    {
      v7 = *(gameswf::Self **)(v5 + 208);
      if ( *((uint8_t *)v7 + 2) == 0 )
      {
        v17 = (*(uint16_t *)v7)-- == 1;
        if ( v17 )
        {
          v47 = v5;
          gameswf::free_internal(v7);
          v5 = v47;
        }
        *(uint32_t *)(v5 + 208) = 0;
        *(uint32_t *)(v5 + 212) = 0;
        v6 = nullptr;
      }
    }
    Workdir = gameswf::Player::getWorkdir(v6);
    v73 = 1;
    v74 = 0;
    if ( Workdir != nullptr )
    {
      v40 = (gameswf::Self *)Workdir;
      v46 = strlen(Workdir);
      gameswf::String::resize((gameswf::String::Self *)&v73, v46);
      v9 = (gameswf::Self *)&v74;
      if ( v73 == -1 )
        v9 = v75;
      gameswf::Strcpy_s(v9, (char *)(v46 + 1), v40);
    }
    v76 = -1;
    v77 = 127;
    v78 |= 1u;
    gameswf::getFullURL((gameswf::Self *)&v69, (const gameswf::String::Self *)&v73, (gameswf::Self *)v56);
    if ( v73 == -1 && (v78 & 1) != 0 )
      gameswf::free_internal(v75);
    v49 = *(uint32_t *)(v1 + 12);
    v10 = (gameswf::Self *)&v70;
    if ( v69 == -1 )
      v10 = v71;
    v11 = *(gameswf::Player::Self **)(*(uint32_t *)(v1 + 12) + 212);
    if ( v11 != nullptr )
    {
      v12 = *(gameswf::Self **)(*(uint32_t *)(v1 + 12) + 208);
      if ( *((uint8_t *)v12 + 2) == 0 )
      {
        v17 = (*(uint16_t *)v12)-- == 1;
        if ( v17 )
        {
          v48 = v10;
          gameswf::free_internal(v12);
          v10 = v48;
        }
        *(uint32_t *)(v49 + 208) = 0;
        *(uint32_t *)(v49 + 212) = 0;
        v11 = nullptr;
      }
    }
    Movie = gameswf::Player::createMovie(v11, v10);
    if ( Movie != nullptr )
    {
      v41 = (gameswf::RefCounted::Self *)Movie;
      if ( ((uint8_t (*)(pthread_mutex_t **, int))G4_MUTEX_OWNER(*Movie))(Movie, 12) != 0 )
      {
        gameswf::RefCounted::addRef(v41);
        v53 = v41;
      }
      else
      {
        v53 = nullptr;
      }
      Target = gameswf::ASEnvironment::findTarget(
                 *(gameswf::ASObject::Self ***)(v1 + 12),
                 (const gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 4 * (3 * *(uint32_t *)(v1 + 20) - 3)));
      v39 = (gameswf::RefCounted::Self *)Target;
      if ( Target != 0 && G4_VCALL<uint8_t>(Target, 8, 1) != 0 )
      {
        WeakProxy = (gameswf::RefCounted::Self *)gameswf::RefCounted::getWeakProxy(v39);
        v15 = WeakProxy;
        if ( WeakProxy != nullptr )
          ++*(uint16_t *)WeakProxy;
      }
      else
      {
        v39 = nullptr;
        v15 = nullptr;
      }
      v16 = *(uint32_t *)(v2 + 60);
      v57 = (char *)(v16 + 1);
      v50 = *(uint32_t *)(v2 + 64);
      if ( v16 + 1 <= v50 || *(uint32_t *)(v2 + 68) != 0 )
      {
        v51 = *(char **)(v2 + 56);
      }
      else
      {
        v24 = &v57[(int)(uintptr_t)(v57) >> 1];
        *(uint32_t *)(v2 + 64) = (uint32_t)(uintptr_t)(v24);
        if ( v24 != nullptr )
        {
          v45 = v15;
          if ( *(uint32_t *)(v2 + 56) != 0 )
            v35 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v2 + 56), 16 * (uint32_t)(uintptr_t)(v24), 16 * v50);
          else
            v35 = (char *)gameswf::malloc_internal(16 * (uint32_t)(uintptr_t)(v24));
          *(uint32_t *)(v2 + 56) = (uint32_t)(uintptr_t)(v35);
          v51 = v35;
          v16 = *(uint32_t *)(v2 + 60);
          v15 = v45;
        }
        else
        {
          v25 = *(gameswf::Self **)(v2 + 56);
          if ( v25 != nullptr )
          {
            v44 = v15;
            gameswf::free_internal(v25);
            v16 = *(uint32_t *)(v2 + 60);
            v15 = v44;
          }
          *(uint32_t *)(v2 + 56) = 0;
          v51 = nullptr;
        }
      }
      v17 = &v51[16 * v16] == nullptr;
      v18 = (gameswf::RefCounted::Self **)&v51[16 * v16];
      v52 = v18;
      if ( !v17 )
      {
        *v18 = v53;
        if ( v53 != nullptr )
        {
          v42 = v15;
          gameswf::RefCounted::addRef(v53);
          v15 = v42;
        }
        v52[1] = v15;
        if ( v15 != nullptr )
          ++*(uint16_t *)v15;
        v52[2] = v39;
        v52[3] = nullptr;
      }
      *(uint32_t *)(v2 + 60) = (uint32_t)(uintptr_t)(v57);
      v43 = v15;
      v63 = &v65;
      v61[0] = 26;
      v61[1] = 0;
      v62 = 0;
      gameswf::Listener::notify((gameswf::Listener::Self *)(v2 + 40), (const gameswf::EventId::Self *)v61);
      result = gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)v1, 1);
      if ( v43 != nullptr )
      {
        result = *(uint16_t *)v43 - 1;
        v17 = *(uint16_t *)v43 == 1;
        *(uint16_t *)v43 = result;
        if ( v17 )
          result = gameswf::free_internal(v43);
      }
      if ( v53 != nullptr )
        result = gameswf::RefCounted::dropRef(v53);
      if ( v69 == -1 && (v72 & 1) != 0 )
        result = gameswf::free_internal(v71);
      v19 = v66;
      if ( v66 <= 0 )
      {
        if ( v66 < 0 )
        {
          result = 12 * v66;
          do
          {
            v37 = (char *)v65 + result;
            if ( (gameswf::Self *)((char *)v65 + result) != nullptr )
            {
              *v37 = 0;
              v37[1] = 0;
            }
            result += 12;
            ++v19;
          }
          while ( v19 != 0 );
        }
      }
      else
      {
        v54 = (gameswf::RefCounted::Self *)v66;
        v20 = nullptr;
        v21 = 0;
        do
        {
          v20 = (gameswf::RefCounted::Self *)((char *)v20 + 1);
          v22 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v65 + v21));
          v21 += 12;
          result = gameswf::ASValue::dropRefs(v22);
        }
        while ( v20 != v54 );
      }
    }
    else
    {
      v26 = v66;
      v27 = v67;
      v28 = v66 + 1;
      if ( v66 + 1 <= v67 || v68 != 0 )
      {
        v29 = v65;
      }
      else
      {
        v36 = v28 + (v28 >> 1);
        v67 = v36;
        if ( v36 != 0 )
        {
          if ( v65 != nullptr )
            v29 = (gameswf::Self *)gameswf::realloc_internal(v65, 12 * v36, 12 * v27);
          else
            v29 = (gameswf::Self *)gameswf::malloc_internal(12 * v36);
          v65 = v29;
          v26 = v66;
        }
        else
        {
          if ( v65 != nullptr )
          {
            gameswf::free_internal(v65);
            v26 = v66;
          }
          v65 = nullptr;
          v29 = nullptr;
        }
      }
      v30 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v29 + 12 * v26));
      if ( v30 != nullptr )
      {
        *(uint8_t *)v30 = 0;
        *((uint8_t *)v30 + 1) = 0;
        gameswf::ASValue::setString(v30, "URLNotFound");
      }
      v66 = v28;
      v58[0] = 23;
      v58[1] = 0;
      v59 = 0;
      v60 = &v65;
      gameswf::Listener::notify((gameswf::Listener::Self *)(v2 + 40), (const gameswf::EventId::Self *)v58);
      if ( v69 == -1 && (v72 & 1) != 0 )
        result = gameswf::free_internal(v71);
      v31 = v66;
      if ( v66 <= 0 )
      {
        if ( v66 < 0 )
        {
          result = 12 * v66;
          do
          {
            v38 = (char *)v65 + result;
            if ( (gameswf::Self *)((char *)v65 + result) != nullptr )
            {
              *v38 = 0;
              v38[1] = 0;
            }
            result += 12;
            ++v31;
          }
          while ( v31 != 0 );
        }
      }
      else
      {
        v55 = (gameswf::RefCounted::Self *)v66;
        v32 = nullptr;
        v33 = 0;
        do
        {
          v32 = (gameswf::RefCounted::Self *)((char *)v32 + 1);
          v34 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v65 + v33));
          v33 += 12;
          result = gameswf::ASValue::dropRefs(v34);
        }
        while ( v32 != v55 );
      }
    }
    v66 = 0;
    if ( v68 == 0 )
    {
      result = (int)(uintptr_t)(v65);
      v67 = 0;
      if ( v65 != nullptr )
        return gameswf::free_internal(v65);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::Construct  (binary VA: 0x11353d0)
// Original: gameswf::ASMovieClipLoader::ASMovieClipLoader
// ----------------------------------------------------------------------------
gameswf::ASMovieClipLoader::Self * gameswf::ASMovieClipLoader::Construct(gameswf::ASMovieClipLoader::Self *self, gameswf::Player::Self *a2)
{
  gameswf::Self *v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  typedef uint8_t _g4_t_v8[12];
  typedef uint8_t _g4_t_v9[12];
  typedef uint8_t _g4_t_v10[12];
  typedef uint8_t _g4_t_v11[12];
  typedef uint8_t _g4_t_v12[12];
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef gameswf::Self *_g4_t_v21;
  typedef int16_t _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef int16_t _g4_t_v28;
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef gameswf::Self *_g4_t_v33;
  typedef int16_t _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef gameswf::Self *_g4_t_v39;
  typedef int16_t _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v12)) > _g4_s4 ? (48u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v13)) > _g4_s5 ? (60u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (61u + sizeof(_g4_t_v14)) > _g4_s6 ? (61u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v15)) > _g4_s7 ? (72u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v16)) > _g4_s8 ? (76u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (78u + sizeof(_g4_t_v17)) > _g4_s9 ? (78u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (79u + sizeof(_g4_t_v18)) > _g4_s10 ? (79u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v19)) > _g4_s11 ? (92u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (93u + sizeof(_g4_t_v20)) > _g4_s12 ? (93u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v21)) > _g4_s13 ? (104u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v22)) > _g4_s14 ? (108u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (110u + sizeof(_g4_t_v23)) > _g4_s15 ? (110u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (111u + sizeof(_g4_t_v24)) > _g4_s16 ? (111u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v25)) > _g4_s17 ? (124u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (125u + sizeof(_g4_t_v26)) > _g4_s18 ? (125u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v27)) > _g4_s19 ? (136u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v28)) > _g4_s20 ? (140u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (142u + sizeof(_g4_t_v29)) > _g4_s21 ? (142u + sizeof(_g4_t_v29)) : _g4_s21,
    _g4_s23 = (143u + sizeof(_g4_t_v30)) > _g4_s22 ? (143u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v31)) > _g4_s23 ? (156u + sizeof(_g4_t_v31)) : _g4_s23,
    _g4_s25 = (157u + sizeof(_g4_t_v32)) > _g4_s24 ? (157u + sizeof(_g4_t_v32)) : _g4_s24,
    _g4_s26 = (168u + sizeof(_g4_t_v33)) > _g4_s25 ? (168u + sizeof(_g4_t_v33)) : _g4_s25,
    _g4_s27 = (172u + sizeof(_g4_t_v34)) > _g4_s26 ? (172u + sizeof(_g4_t_v34)) : _g4_s26,
    _g4_s28 = (174u + sizeof(_g4_t_v35)) > _g4_s27 ? (174u + sizeof(_g4_t_v35)) : _g4_s27,
    _g4_s29 = (175u + sizeof(_g4_t_v36)) > _g4_s28 ? (175u + sizeof(_g4_t_v36)) : _g4_s28,
    _g4_s30 = (188u + sizeof(_g4_t_v37)) > _g4_s29 ? (188u + sizeof(_g4_t_v37)) : _g4_s29,
    _g4_s31 = (189u + sizeof(_g4_t_v38)) > _g4_s30 ? (189u + sizeof(_g4_t_v38)) : _g4_s30,
    _g4_s32 = (200u + sizeof(_g4_t_v39)) > _g4_s31 ? (200u + sizeof(_g4_t_v39)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v40)) > _g4_s32 ? (204u + sizeof(_g4_t_v40)) : _g4_s32,
    _g4_s34 = (206u + sizeof(_g4_t_v41)) > _g4_s33 ? (206u + sizeof(_g4_t_v41)) : _g4_s33,
    _g4_s35 = (207u + sizeof(_g4_t_v42)) > _g4_s34 ? (207u + sizeof(_g4_t_v42)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 61u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 78u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 79u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 93u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 110u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 111u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 125u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 136u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 140u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 142u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 143u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 156u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 157u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 168u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 172u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 174u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 175u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 188u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 189u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 200u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 204u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 206u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 207u);

  gameswf::ASObject::ASObject(self, a2);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FE48);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::ASMovieClipLoader::addListener));
  v13 = 1;
  v14 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v13, 11);
  v2 = (gameswf::Self *)&v14;
  if ( v13 == -1 )
    v2 = v15;
  gameswf::Strcpy_s(v2, &byte_9[3], (gameswf::Self *)"addListener");
  v16 = -1;
  v17 = 127;
  v18 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v13, (const gameswf::ASValue::Self *)v8);
  if ( v13 == -1 && (v18 & 1) != 0 )
    gameswf::free_internal(v15);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  v9[0] = 0;
  v9[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)(uintptr_t)(gameswf::ASMovieClipLoader::removeListener));
  v19 = 1;
  v20 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v19, 14);
  v3 = (gameswf::Self *)&v20;
  if ( v19 == -1 )
    v3 = v21;
  gameswf::Strcpy_s(v3, &byte_9[6], (gameswf::Self *)"removeListener");
  v22 = -1;
  v23 = 127;
  v24 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v19, (const gameswf::ASValue::Self *)v9);
  if ( v19 == -1 && (v24 & 1) != 0 )
    gameswf::free_internal(v21);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  v10[0] = 0;
  v10[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)(gameswf::ASMovieClipLoader::loadClip));
  v25 = 1;
  v26 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v25, 8);
  v4 = (gameswf::Self *)&v26;
  if ( v25 == -1 )
    v4 = v27;
  gameswf::Strcpy_s(v4, byte_9, (gameswf::Self *)"loadClip");
  v28 = -1;
  v29 = 127;
  v30 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v25, (const gameswf::ASValue::Self *)v10);
  if ( v25 == -1 && (v30 & 1) != 0 )
    gameswf::free_internal(v27);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  v11[0] = 0;
  v11[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v11, (int)(uintptr_t)(gameswf::ASMovieClipLoader::unloadClip));
  v31 = 1;
  v32 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v31, 10);
  v5 = (gameswf::Self *)&v32;
  if ( v31 == -1 )
    v5 = v33;
  gameswf::Strcpy_s(v5, &byte_9[2], (gameswf::Self *)"unloadClip");
  v34 = -1;
  v35 = 127;
  v36 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v31, (const gameswf::ASValue::Self *)v11);
  if ( v31 == -1 && (v36 & 1) != 0 )
    gameswf::free_internal(v33);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  v12[0] = 0;
  v12[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v12, (int)(uintptr_t)(gameswf::ASMovieClipLoader::getProgress));
  v37 = 1;
  v38 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v37, 11);
  v6 = (gameswf::Self *)&v38;
  if ( v37 == -1 )
    v6 = v39;
  gameswf::Strcpy_s(v6, &byte_9[3], (gameswf::Self *)"getProgress");
  v40 = -1;
  v41 = 127;
  v42 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v37, (const gameswf::ASValue::Self *)v12);
  if ( v37 != -1 || (v42 & 1) == 0 )
    return (gameswf::ASMovieClipLoader::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  gameswf::free_internal(v39);
  return (gameswf::ASMovieClipLoader::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::ctor  (binary VA: 0x1135940)
// Original: gameswf::ASMovieClipLoader::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASMovieClipLoader::ctor(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  gameswf::ASMovieClipLoader::Self *v4;

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
  v4 = (gameswf::ASMovieClipLoader::Self *)opNew(0x48u);
  gameswf::ASMovieClipLoader::Construct(v4, v2);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClipLoader::is  (binary VA: 0x1135a10)
// Original: gameswf::ASMovieClipLoader::is
// ----------------------------------------------------------------------------
bool gameswf::ASMovieClipLoader::is(gameswf::ASMovieClipLoader::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 42 )
    return a2 == 0;
  return result;
}


