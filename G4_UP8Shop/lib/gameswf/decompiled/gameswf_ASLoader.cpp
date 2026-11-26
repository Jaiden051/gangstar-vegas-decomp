#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASLoader.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::init  (binary VA: 0x114d600)
// Original: gameswf::ASLoader::init
// ----------------------------------------------------------------------------
void gameswf::ASLoader::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::thisAlive  (binary VA: 0x114df30)
// Original: gameswf::ASLoader::thisAlive
// ----------------------------------------------------------------------------
int gameswf::ASLoader::thisAlive(gameswf::ASLoader::Self *self)
{
  int result;

  gameswf::ASDisplayObjectContainer::thisAlive(self);
  result = *((uint32_t *)self + 71);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 76))(*((uint32_t *)self + 71));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::clearRefs  (binary VA: 0x114ee20)
// Original: gameswf::ASLoader::clearRefs
// ----------------------------------------------------------------------------
uint32_t * gameswf::ASLoader::clearRefs(gameswf::RefCounted::Self **self, int a2)
{
  uint32_t *result;

  gameswf::ASObject::clearRefs((gameswf::ASObject::Self *)self, a2);
  result = (uint32_t *)(*(self + 71));
  if ( result != nullptr )
  {
    (*(void (**)(uint32_t, int))(*result + 72))((uint32_t)(uintptr_t)(*(self + 71)), a2);
    result = (uint32_t *)(*(self + 71));
    if ( a2 > result[5] )
    {
      result = (uint32_t *)gameswf::RefCounted::dropRef(*(self + 71));
      *(self + 71) = nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::getStandardMember  (binary VA: 0x1152550)
// Original: gameswf::ASLoader::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASLoader::getStandardMember(long double a1, gameswf::Self **a2, int a3, gameswf::ASValue::Self *a4)
{
  gameswf::ASObject::Self *v5;

  if ( a3 == 84 )
  {
    gameswf::ASValue::setObject(a4, a2[71]);
    return 1;
  }
  else if ( a3 == 85 )
  {
    v5 = (gameswf::ASObject::Self *)(a2[70]);
    if ( v5 != nullptr && *((uint8_t *)a2[69] + 2) == 0 )
    {
      sub_7E5ED0(a2 + 69, nullptr);
      a2[70] = nullptr;
      v5 = nullptr;
    }
    gameswf::ASValue::setObject(a4, v5);
    return 1;
  }
  else
  {
    return gameswf::Character::getStandardMember(a1, (gameswf::ASObject::Self *)a2, a3, a4);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::unload  (binary VA: 0x11556f0)
// Original: gameswf::ASLoader::unload
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASLoader::unload(int a1)
{
  gameswf::Self **v1;
  gameswf::Character::Self *v2;

  v1 = *(gameswf::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(gameswf::Self **, int))*v1 + 2))(v1, 60) == 0 )
    v1 = nullptr;
  v2 = (gameswf::Character::Self *)(v1[70]);
  if ( v2 != nullptr && *((uint8_t *)v1[69] + 2) == 0 )
  {
    sub_7E5ED0(v1 + 69, nullptr);
    v1[70] = nullptr;
    v2 = nullptr;
  }
  gameswf::ASDisplayObjectContainer::removeChild((gameswf::ASDisplayObjectContainer::Self *)v1, v2);
  v1[70] = nullptr;
  return sub_7E5ED0(v1 + 69, nullptr);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::load  (binary VA: 0x1156640)
// Original: gameswf::ASLoader::load
// ----------------------------------------------------------------------------
int gameswf::ASLoader::load(uint32_t *a1)
{
  gameswf::Self **v1;
  gameswf::Character::Self *v2;
  gameswf::Self **v3;
  int v4;
  char *v5;
  gameswf::Player::Self *v6;
  char *Workdir;
  int v8;
  char *v9;
  char *v10;
  gameswf::Self *v11;
  int v12;
  char *v13;
  char *v14;
  char *v15;
  int v16;
  gameswf::Player::Self *v17;
  pthread_mutex_t **Movie;
  gameswf::RefCounted::Self *v19;
  int v20;
  gameswf::Player::Self *v21;
  gameswf::SpriteInstance::Self *SpriteInstance;
  gameswf::SpriteInstance::Self *v23;
  gameswf::Self *WeakProxy;
  gameswf::Self *v25;
  gameswf::Self *v26;
  int v27;
  int v28;
  char *v29;
  char *v30;
  gameswf::Self *v31;
  int v32;
  unsigned int v33;
  int v34;
  gameswf::Self *v35;
  int v36;
  gameswf::Player::Self *v37;
  int Root;
  char *v40;
  int v41;
  int v42;
  int v43;
  char *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  char v49;
  int v50;
  gameswf::Self *v51;
  char *v52;
  char *v53;
  int v54;
  unsigned int v55;
  char v56;
  int v57;
  int v58;
  int v59;
  uint8_t v60;
  unsigned int v61;
  int v62;
  int v63;
  typedef gameswf::String::Self *_g4_t_v64;
  typedef gameswf::String::Self *_g4_t_v65;
  typedef gameswf::String::Self *_g4_t_v66;
  typedef gameswf::String::Self *_g4_t_v67;
  typedef gameswf::Self **_g4_t_v68;
  typedef gameswf::Self **_g4_t_v69;
  typedef int _g4_t_v70;
  typedef char _g4_t_v71;
  typedef gameswf::Self **_g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef unsigned int _g4_t_v75;
  typedef char _g4_t_v76;
  typedef uint8_t _g4_t_v77[3];
  typedef int _g4_t_v78;
  typedef char *_g4_t_haystack;
  typedef unsigned int _g4_t_v80;
  typedef char _g4_t_v81;
  typedef char _g4_t_v82[3];
  typedef char *_g4_t_v83;
  typedef char *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef uint32_t _g4_t_v86[11];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v64)) > _g4_s0 ? (0u + sizeof(_g4_t_v64)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v65)) > _g4_s1 ? (0u + sizeof(_g4_t_v65)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v66)) > _g4_s2 ? (0u + sizeof(_g4_t_v66)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v67)) > _g4_s3 ? (0u + sizeof(_g4_t_v67)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v68)) > _g4_s4 ? (4u + sizeof(_g4_t_v68)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v69)) > _g4_s5 ? (8u + sizeof(_g4_t_v69)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v70)) > _g4_s6 ? (8u + sizeof(_g4_t_v70)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v71)) > _g4_s7 ? (12u + sizeof(_g4_t_v71)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v72)) > _g4_s8 ? (12u + sizeof(_g4_t_v72)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v73)) > _g4_s9 ? (16u + sizeof(_g4_t_v73)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v74)) > _g4_s10 ? (20u + sizeof(_g4_t_v74)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v75)) > _g4_s11 ? (28u + sizeof(_g4_t_v75)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v76)) > _g4_s12 ? (32u + sizeof(_g4_t_v76)) : _g4_s12,
    _g4_s14 = (33u + sizeof(_g4_t_v77)) > _g4_s13 ? (33u + sizeof(_g4_t_v77)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v78)) > _g4_s14 ? (36u + sizeof(_g4_t_v78)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_haystack)) > _g4_s15 ? (44u + sizeof(_g4_t_haystack)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v80)) > _g4_s16 ? (48u + sizeof(_g4_t_v80)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v81)) > _g4_s17 ? (64u + sizeof(_g4_t_v81)) : _g4_s17,
    _g4_s19 = (65u + sizeof(_g4_t_v82)) > _g4_s18 ? (65u + sizeof(_g4_t_v82)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v83)) > _g4_s19 ? (68u + sizeof(_g4_t_v83)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v84)) > _g4_s20 ? (76u + sizeof(_g4_t_v84)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v85)) > _g4_s21 ? (80u + sizeof(_g4_t_v85)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v86)) > _g4_s22 ? (92u + sizeof(_g4_t_v86)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 0u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 0u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 0u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 0u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 4u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 12u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 12u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 16u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 20u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 28u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 33u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_haystack &haystack = *reinterpret_cast<_g4_t_haystack *>(_g4_sf + 44u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 48u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 64u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 65u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 68u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 76u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 80u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 92u);

  v86[7] = (uint32_t)(uintptr_t)(&a1);
  v73 = a1;
  v1 = (gameswf::Self **)a1[1];
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(a1[1], 60) == 0 )
    v1 = nullptr;
  v2 = (gameswf::Character::Self *)(v1[70]);
  if ( v2 != nullptr && *((uint8_t *)v1[69] + 2) == 0 )
  {
    sub_7E5ED0(v1 + 69, nullptr);
    v1[70] = nullptr;
    v2 = nullptr;
  }
  gameswf::ASDisplayObjectContainer::removeChild((gameswf::ASDisplayObjectContainer::Self *)v1, v2);
  v3 = (gameswf::Self **)v73[3];
  if ( (int)v73[4] <= 0 )
    goto LABEL_9;
  v4 = (int)(uintptr_t)(*v3) + 12 * v73[5];
  if ( *(uint8_t *)v4 != 5 )
    goto LABEL_9;
  v48 = *(uint32_t *)(v4 + 4);
  v74 = v48;
  if ( v48 == 0 )
    goto LABEL_9;
  if ( G4_VCALL<uint8_t>(v48, 8, 62) == 0 )
  {
    v3 = (gameswf::Self **)v73[3];
LABEL_9:
    v81 = 1;
    v82[0] = 0;
    LOWORD(v85) = -1;
    v5 = v82;
    BYTE2(v85) = 127;
    HIBYTE(v85) |= 1u;
    goto LABEL_10;
  }
  v81 = 1;
  v82[0] = 0;
  v49 = *(uint8_t *)(v74 + 40);
  if ( v49 == -1 )
    v50 = *(uint32_t *)(v74 + 44) - 1;
  else
    v50 = v49 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v81, v50);
  v51 = (gameswf::Self *)(v74 + 41);
  if ( *(uint8_t *)(v74 + 40) == 0xFF )
    v51 = *(gameswf::Self **)(v74 + 52);
  if ( v81 == -1 )
  {
    v52 = v83;
    v53 = v84;
  }
  else
  {
    v52 = (char *)v81;
    v53 = v82;
  }
  gameswf::Strcpy_s((gameswf::Self *)v53, v52, v51);
  v70 = *(uint32_t *)(v74 + 56);
  if ( (uint8_t *)(v70 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v56 = *(uint8_t *)(v74 + 40);
    if ( v56 == -1 )
    {
      v58 = *(uint32_t *)(v74 + 52);
      v57 = *(uint32_t *)(v74 + 44) - 1;
    }
    else
    {
      v57 = v56 - 1;
      v58 = v74 + 41;
    }
    v54 = 5381;
    if ( v57 > 0 )
    {
      v68 = v1;
      do
      {
        --v57;
        v59 = 33 * v54;
        v60 = *(uint8_t *)(v58 + v57) - 65;
        v75 = *(uint8_t *)(v58 + v57);
        v61 = v75 + 32;
        if ( v60 > 0x19u )
          v61 = v75;
        v54 = v59 ^ v61;
      }
      while ( v57 != 0 );
      v1 = v68;
      v54 = v54 << 9 >> 9;
    }
    *(uint32_t *)(v74 + 56) = v54 & 0x7FFFFF | v70 & 0xFF800000;
  }
  else
  {
    v54 = v70 << 9 >> 9;
  }
  v55 = v54 & 0x7FFFFF | v85 & 0xFF800000;
  LOWORD(v85) = v54;
  HIBYTE(v85) = HIBYTE(v55) | 1;
  BYTE2(v85) = BYTE2(v55) & 0x7F;
  v3 = (gameswf::Self **)v73[3];
  if ( v81 == -1 )
    v5 = v84;
  else
    v5 = v82;
LABEL_10:
  v6 = (gameswf::Player::Self *)(v3[53]);
  if ( v6 != nullptr && *((uint8_t *)v3[52] + 2) == 0 )
  {
    v64 = (gameswf::String::Self *)v3;
    sub_7E5ED0(v3 + 52, nullptr);
    v6 = nullptr;
    *((uint32_t *)v64 + 53) = 0;
  }
  Workdir = gameswf::Player::getWorkdir(v6);
  sub_776320((gameswf::String::Self *)v86, (gameswf::Self *)Workdir);
  v75 = (unsigned int)(uintptr_t)(&v76);
  gameswf::getFullURL((gameswf::Self *)&v76, (const gameswf::String::Self *)v86, (gameswf::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v86));
  sub_59CE50((int)(uintptr_t)(&v81));
  if ( v1 + 63 == (gameswf::Self **)&v76 )
  {
    v71 = *((uint8_t *)v1 + 252);
  }
  else
  {
    if ( v76 == -1 )
      v8 = v78 - 1;
    else
      v8 = v76 - 1;
    gameswf::String::resize((gameswf::String::Self *)(v1 + 63), v8);
    LOBYTE(v9) = *((uint8_t *)v1 + 252);
    v10 = (char *)(v77);
    if ( v76 == -1 )
      v10 = haystack;
    if ( (uint8_t)(uintptr_t)v9 == 0xFF )
    {
      v9 = (char *)v1[64];
      v11 = v1[66];
    }
    else
    {
      v9 = (char *)(char)(uintptr_t)v9;
      v11 = (gameswf::Self *)((char *)v1 + 253);
    }
    gameswf::Strcpy_s(v11, v9, (gameswf::Self *)v10);
    if ( (uint8_t *)(v80 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v71 = v76;
      if ( v76 == -1 )
      {
        v44 = haystack;
        v45 = v78 - 1;
      }
      else
      {
        v44 = (char *)(v77);
        v45 = v76 - 1;
      }
      v12 = 5381;
      if ( v45 > 0 )
      {
        v69 = v1;
        do
        {
          --v45;
          v46 = 33 * v12;
          v47 = (uint8_t)v44[v45] + 32;
          if ( (uint8_t)(v44[v45] - 65) > 0x19u )
            v47 = (uint8_t)v44[v45];
          v12 = v46 ^ v47;
        }
        while ( v45 != 0 );
        v1 = v69;
        v12 = v12 << 9 >> 9;
      }
      v80 = v12 & 0x7FFFFF | v80 & 0xFF800000;
    }
    else
    {
      v71 = v76;
      v12 = (int)(v80 << 9) >> 9;
    }
    v1[67] = (gameswf::Self *)(v12 & 0x7FFFFF | (unsigned int)(uintptr_t)(v1[67]) & 0xFF800000);
  }
  v13 = (char *)(v77);
  v14 = (char *)(v77);
  if ( v71 == -1 )
    v14 = haystack;
  if ( strstr(v14, ".swf") != nullptr )
  {
    v15 = (char *)(v77);
    if ( v71 == -1 )
      v15 = haystack;
    v16 = v73[3];
    v17 = *(gameswf::Player::Self **)(v16 + 212);
    if ( v17 != nullptr && *(uint8_t *)(*(uint32_t *)(v16 + 208) + 2) == 0 )
    {
      v66 = (gameswf::String::Self *)v15;
      sub_7E5ED0((gameswf::Self **)(v16 + 208), nullptr);
      *(uint32_t *)(v16 + 212) = 0;
      v17 = nullptr;
      v15 = (char *)v66;
    }
    Movie = gameswf::Player::createMovie(v17, (gameswf::Self *)v15);
    v19 = (gameswf::RefCounted::Self *)(v1[68]);
    if ( Movie == (pthread_mutex_t **)v19 )
      goto LABEL_36;
    if ( v19 != nullptr )
    {
      v65 = (gameswf::String::Self *)Movie;
      gameswf::RefCounted::dropRef(v19);
      Movie = (pthread_mutex_t **)v65;
    }
    v1[68] = (gameswf::Self *)Movie;
    if ( Movie != nullptr )
    {
      gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)Movie);
      v19 = (gameswf::RefCounted::Self *)(v1[68]);
LABEL_36:
      if ( v19 != nullptr )
      {
        if ( G4_VCALL<uint8_t>(v19, 8, 12) == 0 )
          v19 = nullptr;
        v20 = v73[3];
        v21 = *(gameswf::Player::Self **)(v20 + 212);
        if ( v21 != nullptr && *(uint8_t *)(*(uint32_t *)(v20 + 208) + 2) == 0 )
        {
          v67 = (gameswf::String::Self *)v73[3];
          sub_7E5ED0((gameswf::Self **)(v20 + 208), nullptr);
          v21 = nullptr;
          *((uint32_t *)v67 + 53) = 0;
        }
        SpriteInstance = gameswf::Player::createSpriteInstance(v21, v19, nullptr, nullptr, (char *)0xFFFFFFFF);
        v23 = SpriteInstance;
        if ( SpriteInstance != nullptr )
        {
          *((uint32_t *)SpriteInstance + 65) = (uint32_t)(uintptr_t)(SpriteInstance);
          WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(SpriteInstance);
          sub_7E5ED0((gameswf::Self **)v23 + 64, WeakProxy);
          *((uint32_t *)v23 + 14) = (uint32_t)(uintptr_t)(v1);
          v25 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)v1);
          sub_7E5ED0((gameswf::Self **)v23 + 13, v25);
          gameswf::SpriteInstance::doInitActions(v23);
          gameswf::SpriteInstance::invokeConstructor((gameswf::Self ***)v23);
          v1[70] = (gameswf::Self *)(v23);
          v26 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v23);
          sub_7E5ED0(v1 + 69, v26);
        }
        else
        {
          v1[70] = nullptr;
          sub_7E5ED0(v1 + 69, nullptr);
        }
        gameswf::ASDisplayObjectContainer::addChild((gameswf::ASDisplayObjectContainer::Self *)v1, v23);
        v27 = opNew(0x24u);
        *(uint8_t *)v27 = 1;
        *(uint8_t *)(v27 + 1) = 0;
        if ( v76 == -1 )
          v28 = v78 - 1;
        else
          v28 = v76 - 1;
        gameswf::String::resize((gameswf::String::Self *)v27, v28);
        LOBYTE(v29) = *(uint8_t *)v27;
        v30 = (char *)(v77);
        if ( v76 == -1 )
          v30 = haystack;
        if ( (uint8_t)(uintptr_t)v29 == 0xFF )
        {
          v29 = *(char **)(v27 + 4);
          v31 = *(gameswf::Self **)(v27 + 12);
        }
        else
        {
          v29 = (char *)(char)(uintptr_t)v29;
          v31 = (gameswf::Self *)(v27 + 1);
        }
        gameswf::Strcpy_s(v31, v29, (gameswf::Self *)v30);
        if ( (uint8_t *)(v80 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( v76 == -1 )
          {
            v40 = haystack;
            v41 = v78 - 1;
          }
          else
          {
            v40 = (char *)(v77);
            v41 = v76 - 1;
          }
          v32 = 5381;
          if ( v41 > 0 )
          {
            v72 = v1;
            do
            {
              --v41;
              v42 = 33 * v32;
              v43 = (uint8_t)v40[v41] + 32;
              if ( (uint8_t)(v40[v41] - 65) > 0x19u )
                v43 = (uint8_t)v40[v41];
              v32 = v42 ^ v43;
            }
            while ( v41 != 0 );
            v1 = v72;
            v32 = v32 << 9 >> 9;
          }
          v80 = v32 & 0x7FFFFF | v80 & 0xFF800000;
        }
        else
        {
          v32 = (int)(v80 << 9) >> 9;
        }
        v33 = *(uint32_t *)(v27 + 16) & 0xFF800000;
        *(uint32_t *)(v27 + 24) = (uint32_t)(uintptr_t)(v1);
        v34 = v32 & 0x7FFFFF | v33;
        *(uint32_t *)(v27 + 20) = 0;
        *(uint32_t *)(v27 + 16) = v34;
        *(uint8_t *)(v27 + 18) = BYTE2(v34) & 0x7F;
        *(uint8_t *)(v27 + 19) = HIBYTE(v34) | 1;
        v35 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)v1);
        sub_7E5ED0((gameswf::Self **)(v27 + 20), v35);
        *(uint32_t *)(v27 + 28) = 0;
        *(uint8_t *)(v27 + 32) = 1;
        v36 = v73[3];
        v37 = *(gameswf::Player::Self **)(v36 + 212);
        if ( v37 != nullptr && *(uint8_t *)(*(uint32_t *)(v36 + 208) + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)(v36 + 208), nullptr);
          *(uint32_t *)(v36 + 212) = 0;
          v37 = nullptr;
        }
        Root = gameswf::Player::getRoot(v37);
        gameswf::ASLoaderManager::process(*(gameswf::ASLoaderManager::Self **)(Root + 308), (Request *)v27);
      }
    }
  }
  else
  {
    if ( v71 == -1 )
      v13 = haystack;
    if ( strstr(v13, ".xml") == nullptr )
    {
      v62 = v73[3];
      if ( *(uint32_t *)(v62 + 212) != 0 && *(uint8_t *)(*(uint32_t *)(v62 + 208) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)(v62 + 208), nullptr);
        *(uint32_t *)(v62 + 212) = 0;
      }
      v63 = gameswf::Player::getRoot(*(gameswf::Player::Self **)(v62 + 212));
      gameswf::ASLoaderManager::addRequest(
        *(gameswf::ASLoaderManager::Self **)(v63 + 308),
        (const gameswf::String::Self *)&v76,
        (gameswf::ASLoader::Self *)v1);
    }
  }
  return sub_59CE50((int)(uintptr_t)(&v76));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::createClass  (binary VA: 0x11577c0)
// Original: gameswf::ASLoader::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASLoader::createClass(gameswf::ASLoader::Self *self)
{
  typedef gameswf::Self *_g4_t_v2;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef gameswf::Player::Self *_g4_t_v4;
  typedef gameswf::Self **_g4_t_v5;
  typedef uint8_t _g4_t_v6[12];
  typedef uint8_t _g4_t_v7[12];
  typedef uint8_t _g4_t_v8[12];
  typedef uint8_t _g4_t_v9[20];
  typedef uint8_t _g4_t_v10[20];
  typedef uint8_t _g4_t_v11[20];
  typedef uint8_t _g4_t_v12[48];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v2)) > _g4_s0 ? (4u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_Class)) > _g4_s1 ? (36u + sizeof(_g4_t_Class)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v4)) > _g4_s2 ? (44u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v5)) > _g4_s3 ? (44u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v6)) > _g4_s4 ? (60u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v7)) > _g4_s5 ? (72u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v8)) > _g4_s6 ? (84u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v9)) > _g4_s7 ? (96u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (116u + sizeof(_g4_t_v10)) > _g4_s8 ? (116u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (136u + sizeof(_g4_t_v11)) > _g4_s9 ? (136u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (156u + sizeof(_g4_t_v12)) > _g4_s10 ? (156u + sizeof(_g4_t_v12)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 36u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 44u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 60u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 72u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 84u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 96u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 116u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 136u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 156u);

  v4 = *((gameswf::Player::Self **)self + 4);
  sub_776320((gameswf::String::Self *)v9, (gameswf::Self *)"DisplayObjectContainer");
  Class = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass(self, (const gameswf::String::Self *)v9, true);
  sub_776320((gameswf::String::Self *)v10, (gameswf::Self *)"Loader");
  v6[0] = 0;
  v6[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v6, (int)(uintptr_t)(gameswf::ASLoader::init));
  v2 = (gameswf::Self *)(v4);
  v5 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v5,
    v2,
    Class,
    (const gameswf::String::Self *)v10,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASLoader::newOp,
    (const gameswf::ASValue::Self *)v6,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v10));
  sub_59CE50((int)(uintptr_t)(v9));
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)(gameswf::ASLoader::load));
  sub_776320((gameswf::String::Self *)v11, (gameswf::Self *)"load");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)v11, (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v11));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::ASLoader::unload));
  sub_776320((gameswf::String::Self *)v12, (gameswf::Self *)"unload");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)v12, (const gameswf::ASValue::Self *)v8);
  sub_59CE50((int)(uintptr_t)(v12));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::Construct  (binary VA: 0x1157980)
// Original: gameswf::ASLoader::ASLoader
// ----------------------------------------------------------------------------
gameswf::ASLoader::Self * gameswf::ASLoader::Construct(gameswf::ASLoader::Self *self, gameswf::Player::Self *a2)
{
  int v2;
  gameswf::RefCounted::Self *Object;
  gameswf::RefCounted::Self *v4;
  int v5;
  gameswf::Self *WeakProxy;
  typedef uint8_t _g4_t_v8[20];
  typedef uint8_t _g4_t_v9[48];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  gameswf::Character::Construct(self, a2, nullptr, -1, 60);
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090688);
  v2 = *((uint32_t *)self + 67) | 0x7FFFFF;
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 67) = v2;
  *((uint32_t *)self + 56) = 0;
  *((uint8_t *)self + 270) = BYTE2(v2) & 0x7F;
  *((uint8_t *)self + 271) = HIBYTE(v2) | 1;
  *((uint32_t *)self + 57) = 0;
  *((uint8_t *)self + 248) = 1;
  *((uint8_t *)self + 249) = 0;
  *((uint8_t *)self + 250) = 0;
  *((uint8_t *)self + 252) = 1;
  *((uint8_t *)self + 253) = 0;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 70) = 0;
  sub_776320((gameswf::String::Self *)v9, (gameswf::Self *)"LoaderInfo");
  sub_776320((gameswf::String::Self *)v8, (gameswf::Self *)"flash.display");
  Object = (gameswf::RefCounted::Self *)gameswf::ASClassManager::createObject(
                                    (gameswf::Player::Self *)((char *)a2 + 236),
                                    (const gameswf::String::Self *)v8,
                                    (const gameswf::String::Self *)v9);
  v4 = Object;
  if ( Object != nullptr
    && G4_VCALL<uint8_t>(Object, 8, 61) != 0 )
  {
    *((uint32_t *)self + 71) = (uint32_t)(uintptr_t)(v4);
    gameswf::RefCounted::addRef(v4);
  }
  else
  {
    *((uint32_t *)self + 71) = 0;
  }
  sub_59CE50((int)(uintptr_t)(v8));
  sub_59CE50((int)(uintptr_t)(v9));
  v5 = *((uint32_t *)self + 71);
  *(uint32_t *)(v5 + 52) = (uint32_t)(uintptr_t)(self);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(self);
  return (gameswf::ASLoader::Self *)(sub_7E5ED0((gameswf::Self **)(v5 + 48), WeakProxy));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::newOp  (binary VA: 0x1157b30)
// Original: gameswf::ASLoader::newOp
// ----------------------------------------------------------------------------
gameswf::ASLoader::Self * gameswf::ASLoader::newOp(gameswf::ASLoader::Self *self)
{
  gameswf::ASLoader::Self *v1;

  v1 = (gameswf::ASLoader::Self *)opNew(0x120u);
  gameswf::ASLoader::Construct(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::loadComplete  (binary VA: 0x115e3d0)
// Original: gameswf::ASLoader::loadComplete
// ----------------------------------------------------------------------------
int gameswf::ASLoader::loadComplete(gameswf::RefCounted::Self **a1, uint32_t *a2)
{
  gameswf::RefCounted::Self *Object;
  gameswf::RefCounted::Self *v3;
  gameswf::RefCounted::Self *v4;
  gameswf::RefCounted::Self *v5;
  gameswf::BitmapInfo::Self *v6;
  gameswf::Character::Self *v7;
  gameswf::RefCounted::Self *v8;
  int Event;
  typedef gameswf::Self *_g4_t_WeakProxy;
  typedef uint32_t *_g4_t_v12;
  typedef void (*_g4_t_v13)(gameswf::RefCounted::Self *, int);
  typedef uint8_t _g4_t_v14[20];
  typedef uint8_t _g4_t_v15[20];
  typedef uint8_t _g4_t_v16[20];
  typedef uint8_t _g4_t_v17[20];
  typedef uint8_t _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[36];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[48];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_WeakProxy)) > _g4_s0 ? (8u + sizeof(_g4_t_WeakProxy)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v12)) > _g4_s1 ? (20u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v14)) > _g4_s3 ? (48u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v15)) > _g4_s4 ? (68u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v16)) > _g4_s5 ? (88u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (108u + sizeof(_g4_t_v17)) > _g4_s6 ? (108u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v18)) > _g4_s7 ? (128u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (148u + sizeof(_g4_t_v19)) > _g4_s8 ? (148u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (184u + sizeof(_g4_t_v20)) > _g4_s9 ? (184u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (192u + sizeof(_g4_t_v21)) > _g4_s10 ? (192u + sizeof(_g4_t_v21)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_WeakProxy &WeakProxy = *reinterpret_cast<_g4_t_WeakProxy *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 108u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 128u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 148u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 184u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 192u);

  if ( *a2 != 0 )
  {
    if ( a1[68] != nullptr )
    {
      gameswf::RefCounted::dropRef(a1[68]);
      a1[68] = nullptr;
    }
    sub_776320((gameswf::String::Self *)v15, (gameswf::Self *)"Bitmap");
    sub_776320((gameswf::String::Self *)v14, (gameswf::Self *)"flash.display");
    Object = (gameswf::RefCounted::Self *)gameswf::ASClassManager::createObject(
                                      (gameswf::RefCounted::Self *)((char *)a1[4] + 236),
                                      (const gameswf::String::Self *)v14,
                                      (const gameswf::String::Self *)v15);
    v3 = Object;
    if ( Object != nullptr
      && G4_VCALL<uint8_t>(Object, 8, 64) != 0 )
    {
      gameswf::RefCounted::addRef(v3);
    }
    else
    {
      v3 = nullptr;
    }
    sub_59CE50((int)(uintptr_t)(v14));
    sub_59CE50((int)(uintptr_t)(v15));
    sub_776320((gameswf::String::Self *)v17, (gameswf::Self *)"BitmapData");
    sub_776320((gameswf::String::Self *)v16, (gameswf::Self *)"flash.display");
    v4 = (gameswf::RefCounted::Self *)gameswf::ASClassManager::createObject(
                                  (gameswf::RefCounted::Self *)((char *)a1[4] + 236),
                                  (const gameswf::String::Self *)v16,
                                  (const gameswf::String::Self *)v17);
    v5 = v4;
    if ( v4 != nullptr && G4_VCALL<uint8_t>(v4, 8, 65) != 0 )
      gameswf::RefCounted::addRef(v5);
    else
      v5 = nullptr;
    sub_59CE50((int)(uintptr_t)(v16));
    sub_59CE50((int)(uintptr_t)(v17));
    (*(void (**)(uint8_t *, uint32_t *, uint32_t *))(*gameswf::s_render_handler + 12))(
      v19,
      (uint32_t *)(gameswf::s_render_handler),
      a2);
    v6 = (gameswf::BitmapInfo::Self *)G4_VCALL<int>(*v12, 8);
    gameswf::ASBitmapData::setBitmapInfo(v5, v6);
    gameswf::ASBitmap::setBitmapData(v3, v5);
    a1[70] = v3;
    if ( v3 != nullptr )
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v3);
    else
      WeakProxy = nullptr;
    sub_7E5ED0(a1 + 69, WeakProxy);
    v7 = (gameswf::Character::Self *)(a1[70]);
    if ( v7 != nullptr && *((uint8_t *)a1[69] + 2) == 0 )
    {
      sub_7E5ED0(a1 + 69, nullptr);
      a1[70] = nullptr;
      v7 = nullptr;
    }
    gameswf::ASDisplayObjectContainer::addChild((gameswf::ASDisplayObjectContainer::Self *)a1, v7);
    sub_59CE50((int)(uintptr_t)(v21));
    sub_5ED480(&v20);
    if ( v5 != nullptr )
      gameswf::RefCounted::dropRef(v5);
    if ( v3 != nullptr )
      gameswf::RefCounted::dropRef(v3);
  }
  v8 = a1[71];
  v13 = *(void (**)(gameswf::RefCounted::Self *, int))(*(uint32_t *)v8 + 104);
  sub_776320((gameswf::String::Self *)v18, (gameswf::Self *)"complete");
  Event = gameswf::AS3Engine::getEvent((gameswf::RefCounted::Self *)((char *)a1[4] + 236), (const gameswf::String::Self *)v18);
  v13(v8, Event);
  return sub_59CE50((int)(uintptr_t)(v18));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::is  (binary VA: 0x1162000)
// Original: gameswf::ASLoader::is
// ----------------------------------------------------------------------------
bool gameswf::ASLoader::is(gameswf::ASLoader::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 60 && a2 != 4 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::getCharacterDef  (binary VA: 0x1162030)
// Original: gameswf::ASLoader::getCharacterDef
// ----------------------------------------------------------------------------
int gameswf::ASLoader::getCharacterDef(gameswf::ASLoader::Self *self)
{
  return *((uint32_t *)self + 68);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::getMovieDefinition  (binary VA: 0x1162040)
// Original: gameswf::ASLoader::getMovieDefinition
// ----------------------------------------------------------------------------
int gameswf::ASLoader::getMovieDefinition(gameswf::ASLoader::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 68);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*((uint32_t *)self + 68), 14) == 0 )
    return 0;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::Destroy  (binary VA: 0x1162840)
// Original: gameswf::ASLoader::~ASLoader
// ----------------------------------------------------------------------------
void gameswf::ASLoader::Destroy(gameswf::RefCounted::Self **self)
{
  gameswf::Self *v1;
  gameswf::RefCounted::Self **v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  int i;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int j;
  int v12;
  gameswf::Self *v13;
  int v14;
  uint32_t *v15;

  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090688);
  if ( *(self + 71) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 71));
  v1 = (gameswf::Self *)(*(self + 69));
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  if ( *(self + 68) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 68));
  sub_59CE50((int)(uintptr_t)(self + 63));
  v3 = self;
  v4 = (gameswf::Self *)(*(self + 57));
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090408);
  if ( v4 != nullptr )
  {
    v5 = *((uint32_t *)v4 + 1);
    if ( v5 >= 0 )
    {
      v6 = 8;
      for ( i = 0; i <= v5; ++i )
      {
        v8 = (uint32_t *)((char *)v4 + v6);
        if ( *(uint32_t *)((char *)v4 + v6) != -2 )
        {
          *v8 = -2;
          v8[1] = 0;
          v4 = (gameswf::Self *)(*(self + 57));
        }
        v6 += 16;
      }
    }
    gameswf::free_internal(v4);
    v3 = self;
    *(self + 57) = nullptr;
  }
  v9 = (int)(uintptr_t)(v3[54]);
  v10 = (uint32_t *)(self + 53);
  if ( v9 <= 0 )
  {
    if ( v9 < 0 )
    {
      v14 = 4 * v9;
      do
      {
        v15 = (uint32_t *)(*v10 + v14);
        if ( v15 != nullptr )
          *v15 = 0;
        v14 += 4;
        ++v9;
      }
      while ( v9 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v9; ++j )
    {
      if ( *(uint32_t *)(*v10 + 4 * j) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*v10 + 4 * j));
    }
  }
  v12 = (int)(uintptr_t)(*(self + 56));
  *(self + 54) = nullptr;
  if ( v12 == 0 )
  {
    *(self + 55) = nullptr;
    v13 = (gameswf::Self *)(*(self + 53));
    if ( v13 != nullptr )
      gameswf::free_internal(v13);
    *(self + 53) = nullptr;
  }
  gameswf::Character::Destroy((gameswf::Character::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoader::Destroy_ea1162a10  (binary VA: 0x1162a10)
// Original: gameswf::ASLoader::~ASLoader
// ----------------------------------------------------------------------------
void gameswf::ASLoader::Destroy_ea1162a10(gameswf::RefCounted::Self **self)
{
  gameswf::Self *v1;
  gameswf::RefCounted::Self **v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  int i;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int j;
  int v12;
  gameswf::Self *v13;
  int v14;
  uint32_t *v15;

  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090688);
  if ( *(self + 71) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 71));
  v1 = (gameswf::Self *)(*(self + 69));
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  if ( *(self + 68) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 68));
  sub_59CE50((int)(uintptr_t)(self + 63));
  v3 = self;
  v4 = (gameswf::Self *)(*(self + 57));
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090408);
  if ( v4 != nullptr )
  {
    v5 = *((uint32_t *)v4 + 1);
    if ( v5 >= 0 )
    {
      v6 = 8;
      for ( i = 0; i <= v5; ++i )
      {
        v8 = (uint32_t *)((char *)v4 + v6);
        if ( *(uint32_t *)((char *)v4 + v6) != -2 )
        {
          *v8 = -2;
          v8[1] = 0;
          v4 = (gameswf::Self *)(*(self + 57));
        }
        v6 += 16;
      }
    }
    gameswf::free_internal(v4);
    v3 = self;
    *(self + 57) = nullptr;
  }
  v9 = (int)(uintptr_t)(v3[54]);
  v10 = (uint32_t *)(self + 53);
  if ( v9 <= 0 )
  {
    if ( v9 < 0 )
    {
      v14 = 4 * v9;
      do
      {
        v15 = (uint32_t *)(*v10 + v14);
        if ( v15 != nullptr )
          *v15 = 0;
        v14 += 4;
        ++v9;
      }
      while ( v9 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v9; ++j )
    {
      if ( *(uint32_t *)(*v10 + 4 * j) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*v10 + 4 * j));
    }
  }
  v12 = (int)(uintptr_t)(*(self + 56));
  *(self + 54) = nullptr;
  if ( v12 == 0 )
  {
    *(self + 55) = nullptr;
    v13 = (gameswf::Self *)(*(self + 53));
    if ( v13 != nullptr )
      gameswf::free_internal(v13);
    *(self + 53) = nullptr;
  }
  gameswf::Character::Destroy((gameswf::Character::Self *)self);
  opDelete(self);
}


