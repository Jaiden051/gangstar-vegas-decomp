#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASSprite.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::ctor  (binary VA: 0x113ede0)
// Original: gameswf::ASSprite::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASSprite::ctor(gameswf::ASValue::Self **a1)
{
  gameswf::ASValue::Self *v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  int Root;
  gameswf::ASValue::Self *v5;
  gameswf::Player::Self *v6;
  gameswf::Self *v7;
  pthread_mutex_t **v8;
  gameswf::ASObject::Self *v9;
  gameswf::Player::Self *v10;
  gameswf::Self *v11;
  bool v13;
  gameswf::Character::Self *v14;
  gameswf::Character::Self *RootMovie;
  gameswf::Self **v16;
  gameswf::ASObject::Self *v17;
  gameswf::Root::Self *v18;

  v1 = a1[3];
  v2 = *((gameswf::Player::Self **)v1 + 53);
  if ( v2 != nullptr )
  {
    v3 = *((gameswf::Self **)v1 + 52);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      v13 = (*(uint16_t *)v3)-- == 1;
      if ( v13 )
        gameswf::free_internal(v3);
      *((uint32_t *)v1 + 52) = 0;
      *((uint32_t *)v1 + 53) = 0;
      v2 = nullptr;
    }
  }
  Root = gameswf::Player::getRoot(v2);
  v5 = a1[3];
  v18 = (gameswf::Root::Self *)Root;
  v6 = *((gameswf::Player::Self **)v5 + 53);
  if ( v6 != nullptr )
  {
    v7 = *((gameswf::Self **)v5 + 52);
    if ( *((uint8_t *)v7 + 2) == 0 )
    {
      v13 = (*(uint16_t *)v7)-- == 1;
      if ( v13 )
        gameswf::free_internal(v7);
      *((uint32_t *)v5 + 52) = 0;
      *((uint32_t *)v5 + 53) = 0;
      v6 = nullptr;
    }
  }
  v8 = (pthread_mutex_t **)opNew(0x5Cu);
  gameswf::SpriteDefinition::SpriteDefinition(v8, v6, nullptr);
  v9 = (gameswf::ASObject::Self *)(a1[3]);
  v10 = *((gameswf::Player::Self **)v9 + 53);
  if ( v10 != nullptr )
  {
    v11 = *((gameswf::Self **)v9 + 52);
    if ( *((uint8_t *)v11 + 2) == 0 )
    {
      v13 = (*(uint16_t *)v11)-- == 1;
      if ( v13 )
      {
        v17 = v9;
        gameswf::free_internal(v11);
        v9 = v17;
      }
      *((uint32_t *)v9 + 52) = 0;
      *((uint32_t *)v9 + 53) = 0;
      v10 = nullptr;
    }
  }
  RootMovie = (gameswf::Character::Self *)gameswf::Root::getRootMovie(v18);
  v14 = (gameswf::Character::Self *)gameswf::Root::getRootMovie(v18);
  v16 = (gameswf::Self **)opNew(0x130u);
  gameswf::SpriteInstance::Construct(v16, v10, (gameswf::MovieDefinitionSub::Self *)v8, RootMovie, v14, nullptr);
  return gameswf::ASValue::setObject(*a1, (gameswf::ASObject::Self *)v16);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::hitTest  (binary VA: 0x113f050)
// Original: gameswf::ASSprite::hitTest
// ----------------------------------------------------------------------------
int gameswf::ASSprite::hitTest(int a1)
{
  gameswf::Character::Self *Ptr;
  int v2;
  float v3; // xmm0_4
  int v4;
  gameswf::ASValue::Self *v5;
  float v6; // xmm1_4
  int v7;
  uint8_t v8;
  long double v10; // fst7
  int Target;
  gameswf::Character::Self *v12;
  gameswf::Character::Self *v13;
  gameswf::Character::Self *v14;

  Ptr = (gameswf::Character::Self *)gameswf::spriteGetPtr(a1);
  gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  if ( *(uint32_t *)(a1 + 16) != 1 )
  {
    if ( *(int *)(a1 + 16) <= 1 )
      return gameswf::logError((gameswf::Self *)"hitTest() wrong parameters\n", (const char *)v13);
    v2 = *(uint32_t *)(a1 + 20);
    v3 = 0.0;
    v4 = **(uint32_t **)(a1 + 12);
    if ( *(uint8_t *)(v4 + 12 * v2) == 2 )
    {
      v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(v4 + 12 * v2));
      v6 = 0.0;
      v5 = (gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3));
      if ( *(uint8_t *)v5 != 2 )
      {
LABEL_5:
        v7 = 0;
        if ( *(uint32_t *)(a1 + 16) != 3 )
        {
LABEL_6:
          v8 = G4_VCALL<int>(Ptr, 116, COERCE_FLOAT(LODWORD(v3)), COERCE_FLOAT(LODWORD(v6)), v7);
          return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v8);
        }
LABEL_11:
        v7 = (uint8_t)gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                          + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
        goto LABEL_6;
      }
    }
    else
    {
      v5 = (gameswf::ASValue::Self *)(v4 + 4 * (3 * v2 - 3));
      v6 = 0.0;
      if ( *(uint8_t *)v5 != 2 )
        goto LABEL_5;
    }
    v10 = gameswf::ASValue::toNumber(v5);
    v7 = 0;
    v6 = v10;
    if ( *(uint32_t *)(a1 + 16) != 3 )
      goto LABEL_6;
    goto LABEL_11;
  }
  Target = gameswf::ASEnvironment::findTarget(
             *(gameswf::ASObject::Self ***)(a1 + 12),
             (const gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v12 = (gameswf::Character::Self *)Target;
  if ( Target == 0 || G4_VCALL<uint8_t>(Target, 8, 1) == 0 )
    return gameswf::logError((gameswf::Self *)"hitTest: can't find target\n", (const char *)v14);
  v8 = gameswf::Character::hitTestObject(Ptr, v12);
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::getBounds  (binary VA: 0x113f220)
// Original: gameswf::ASSprite::getBounds
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASSprite::getBounds(int a1)
{
  gameswf::Character::Self *Ptr;
  gameswf::Character::Self *v2;
  char *WorldMatrix;
  gameswf::Player::Self *v4;
  float *v5;
  gameswf::ASObject::Self *Rectangle;
  gameswf::ASObject::Self *v7;
  gameswf::Self *v9;
  int StandardMemberID;
  gameswf::Self *v11;
  int v12;
  gameswf::Self *v13;
  int v14;
  gameswf::Self *v15;
  int v16;
  int v17;
  gameswf::Character::Self *v18;
  gameswf::Self *v19;
  char *v20;
  char *v21;
  bool v22;
  float v23;
  float v24;
  typedef gameswf::Player::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef gameswf::Character::Self *_g4_t_v34;
  typedef float _g4_t_v35;
  typedef gameswf::Rect::Self *_g4_t_v36;
  typedef float _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef double _g4_t_v39 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v40;
  typedef double _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef double _g4_t_v43 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v44;
  typedef double _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef float _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef gameswf::Self *_g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef gameswf::Self *_g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef gameswf::Self *_g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef char _g4_t_v77;
  typedef char _g4_t_v78;
  typedef gameswf::Self *_g4_t_v79;
  typedef int16_t _g4_t_v80;
  typedef char _g4_t_v81;
  typedef char _g4_t_v82;
  typedef uint32_t _g4_t_v83[9];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v28)) > _g4_s3 ? (16u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v29)) > _g4_s4 ? (20u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v30)) > _g4_s5 ? (24u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v31)) > _g4_s6 ? (28u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v32)) > _g4_s7 ? (32u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v33)) > _g4_s8 ? (32u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v34)) > _g4_s9 ? (32u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v35)) > _g4_s10 ? (36u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v36)) > _g4_s11 ? (40u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v37)) > _g4_s12 ? (44u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v38)) > _g4_s13 ? (48u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v39)) > _g4_s14 ? (52u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v40)) > _g4_s15 ? (60u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v41)) > _g4_s16 ? (64u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v42)) > _g4_s17 ? (72u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v43)) > _g4_s18 ? (76u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v44)) > _g4_s19 ? (84u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v45)) > _g4_s20 ? (88u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v46)) > _g4_s21 ? (96u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v47)) > _g4_s22 ? (100u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v48)) > _g4_s23 ? (104u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v49)) > _g4_s24 ? (108u + sizeof(_g4_t_v49)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v50)) > _g4_s25 ? (112u + sizeof(_g4_t_v50)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v51)) > _g4_s26 ? (116u + sizeof(_g4_t_v51)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v52)) > _g4_s27 ? (120u + sizeof(_g4_t_v52)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v53)) > _g4_s28 ? (124u + sizeof(_g4_t_v53)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v54)) > _g4_s29 ? (128u + sizeof(_g4_t_v54)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v55)) > _g4_s30 ? (132u + sizeof(_g4_t_v55)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v56)) > _g4_s31 ? (136u + sizeof(_g4_t_v56)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v57)) > _g4_s32 ? (140u + sizeof(_g4_t_v57)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v58)) > _g4_s33 ? (144u + sizeof(_g4_t_v58)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v59)) > _g4_s34 ? (148u + sizeof(_g4_t_v59)) : _g4_s34,
    _g4_s36 = (152u + sizeof(_g4_t_v60)) > _g4_s35 ? (152u + sizeof(_g4_t_v60)) : _g4_s35,
    _g4_s37 = (156u + sizeof(_g4_t_v61)) > _g4_s36 ? (156u + sizeof(_g4_t_v61)) : _g4_s36,
    _g4_s38 = (160u + sizeof(_g4_t_v62)) > _g4_s37 ? (160u + sizeof(_g4_t_v62)) : _g4_s37,
    _g4_s39 = (164u + sizeof(_g4_t_v63)) > _g4_s38 ? (164u + sizeof(_g4_t_v63)) : _g4_s38,
    _g4_s40 = (168u + sizeof(_g4_t_v64)) > _g4_s39 ? (168u + sizeof(_g4_t_v64)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v65)) > _g4_s40 ? (172u + sizeof(_g4_t_v65)) : _g4_s40,
    _g4_s42 = (176u + sizeof(_g4_t_v66)) > _g4_s41 ? (176u + sizeof(_g4_t_v66)) : _g4_s41,
    _g4_s43 = (180u + sizeof(_g4_t_v67)) > _g4_s42 ? (180u + sizeof(_g4_t_v67)) : _g4_s42,
    _g4_s44 = (184u + sizeof(_g4_t_v68)) > _g4_s43 ? (184u + sizeof(_g4_t_v68)) : _g4_s43,
    _g4_s45 = (188u + sizeof(_g4_t_v69)) > _g4_s44 ? (188u + sizeof(_g4_t_v69)) : _g4_s44,
    _g4_s46 = (192u + sizeof(_g4_t_v70)) > _g4_s45 ? (192u + sizeof(_g4_t_v70)) : _g4_s45,
    _g4_s47 = (196u + sizeof(_g4_t_v71)) > _g4_s46 ? (196u + sizeof(_g4_t_v71)) : _g4_s46,
    _g4_s48 = (200u + sizeof(_g4_t_v72)) > _g4_s47 ? (200u + sizeof(_g4_t_v72)) : _g4_s47,
    _g4_s49 = (204u + sizeof(_g4_t_v73)) > _g4_s48 ? (204u + sizeof(_g4_t_v73)) : _g4_s48,
    _g4_s50 = (208u + sizeof(_g4_t_v74)) > _g4_s49 ? (208u + sizeof(_g4_t_v74)) : _g4_s49,
    _g4_s51 = (212u + sizeof(_g4_t_v75)) > _g4_s50 ? (212u + sizeof(_g4_t_v75)) : _g4_s50,
    _g4_s52 = (216u + sizeof(_g4_t_v76)) > _g4_s51 ? (216u + sizeof(_g4_t_v76)) : _g4_s51,
    _g4_s53 = (224u + sizeof(_g4_t_v77)) > _g4_s52 ? (224u + sizeof(_g4_t_v77)) : _g4_s52,
    _g4_s54 = (225u + sizeof(_g4_t_v78)) > _g4_s53 ? (225u + sizeof(_g4_t_v78)) : _g4_s53,
    _g4_s55 = (236u + sizeof(_g4_t_v79)) > _g4_s54 ? (236u + sizeof(_g4_t_v79)) : _g4_s54,
    _g4_s56 = (240u + sizeof(_g4_t_v80)) > _g4_s55 ? (240u + sizeof(_g4_t_v80)) : _g4_s55,
    _g4_s57 = (242u + sizeof(_g4_t_v81)) > _g4_s56 ? (242u + sizeof(_g4_t_v81)) : _g4_s56,
    _g4_s58 = (243u + sizeof(_g4_t_v82)) > _g4_s57 ? (243u + sizeof(_g4_t_v82)) : _g4_s57,
    _g4_s59 = (248u + sizeof(_g4_t_v83)) > _g4_s58 ? (248u + sizeof(_g4_t_v83)) : _g4_s58
  };
  alignas(16) uint8_t _g4_sf[_g4_s59];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 120u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 124u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 128u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 132u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 136u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 140u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 144u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 148u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 152u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 156u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 160u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 164u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 168u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 172u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 176u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 180u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 184u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 188u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 192u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 196u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 200u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 204u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 208u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 212u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 216u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 224u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 225u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 236u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 240u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 242u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 243u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 248u);

  Ptr = (gameswf::Character::Self *)gameswf::spriteGetPtr(a1);
  v2 = Ptr;
  if ( *(uint32_t *)(a1 + 16) != 1 )
  {
    gameswf::Character::getBound(
      Ptr,
      (gameswf::Rect::Self *)&v46,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v35,
      COERCE_FLOAT(&v46),
      v37,
      *(float *)&v38,
      SLODWORD(v39),
      SHIDWORD(v39),
      v40,
      SLODWORD(v41),
      SHIDWORD(v41),
      v42,
      SLODWORD(v43),
      SHIDWORD(v43),
      v44,
      SLODWORD(v45),
      SHIDWORD(v45),
      v46,
      v47,
      v48,
      SLODWORD(v49),
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      *(float *)&v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      *(float *)&v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      *(float *)&v73,
      v74,
      v75,
      v76);
LABEL_3:
    memset(v83, 0, 0x18u);
    v83[0] = 1065353216;
    v83[4] = 1065353216;
    WorldMatrix = gameswf::Character::getWorldMatrix(v2);
    gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v83, (const gameswf::Matrix::Self *)WorldMatrix);
    gameswf::Matrix::transform((gameswf::Matrix::Self *)v83, v36);
    goto LABEL_4;
  }
  v33 = 0.0;
  v17 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v17 != 5 || (v23 = *(float *)(v17 + 4), v33 = v23, v23 == 0.0) )
  {
    gameswf::Character::getBound(
      v2,
      (gameswf::Rect::Self *)&v46,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v33,
      v35,
      COERCE_FLOAT(&v46),
      v37,
      *(float *)&v38,
      SLODWORD(v39),
      SHIDWORD(v39),
      v40,
      SLODWORD(v41),
      SHIDWORD(v41),
      v42,
      SLODWORD(v43),
      SHIDWORD(v43),
      v44,
      SLODWORD(v45),
      SHIDWORD(v45),
      v46,
      v47,
      v48,
      SLODWORD(v49),
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      *(float *)&v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      *(float *)&v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      *(float *)&v73,
      v74,
      v75,
      v76);
  }
  else
  {
    v22 = (*(uint8_t (**)(float, int))(*(uint32_t *)LODWORD(v23) + 8))(COERCE_FLOAT(LODWORD(v23)), 1) == 0;
    v24 = 0.0;
    if ( !v22 )
      v24 = v33;
    gameswf::Character::getBound(
      v2,
      (gameswf::Rect::Self *)&v46,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v24,
      v35,
      COERCE_FLOAT(&v46),
      v37,
      *(float *)&v38,
      SLODWORD(v39),
      SHIDWORD(v39),
      v40,
      SLODWORD(v41),
      SHIDWORD(v41),
      v42,
      SLODWORD(v43),
      SHIDWORD(v43),
      v44,
      SLODWORD(v45),
      SHIDWORD(v45),
      v46,
      v47,
      v48,
      SLODWORD(v49),
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      *(float *)&v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      *(float *)&v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      *(float *)&v73,
      v74,
      v75,
      v76);
  }
  if ( v34 == v2 )
    goto LABEL_3;
  v50 = v46;
  v51 = v47;
  v52 = v48;
  v53 = v49;
  v18 = *((gameswf::Character::Self **)v2 + 14);
  if ( v18 != nullptr )
  {
    v19 = *((gameswf::Self **)v2 + 13);
    if ( *((uint8_t *)v19 + 2) != 0 )
    {
      v20 = gameswf::Character::getWorldMatrix(v18);
      gameswf::Matrix::transform((gameswf::Matrix::Self *)v20, (gameswf::Rect::Self *)&v50);
    }
    else
    {
      v22 = (*(uint16_t *)v19)-- == 1;
      if ( v22 )
        gameswf::free_internal(v19);
      *((uint32_t *)v2 + 13) = 0;
      *((uint32_t *)v2 + 14) = 0;
    }
  }
  memset(v83, 0, 0x18u);
  v83[0] = 1065353216;
  v83[4] = 1065353216;
  v21 = gameswf::Character::getWorldMatrix(v34);
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v83, (const gameswf::Matrix::Self *)v21);
  gameswf::Matrix::transform((gameswf::Matrix::Self *)v83, (gameswf::Rect::Self *)&v50);
  v46 = v50;
  v47 = v51;
  v48 = v52;
  v49 = v53;
LABEL_4:
  gameswf::Rect::twipsToPixels();
  v4 = *((gameswf::Player::Self **)v2 + 4);
  if ( *((uint8_t *)v4 + 232) == 0 )
  {
    v7 = (gameswf::ASObject::Self *)opNew(0x28u);
    gameswf::ASObject::ASObject(v7, v4);
    LOWORD(v38) = 2;
    v39 = *(float *)&v46;
    LOWORD(v54) = 1;
    gameswf::String::resize((gameswf::String::Self *)&v54, 4);
    v9 = (gameswf::Self *)((char *)&v54 + 1);
    if ( LOBYTE(v54) == 0xFF )
      v9 = v57;
    gameswf::Strcpy_s(v9, (char *)&loc_4 + 1, (gameswf::Self *)"xMin");
    LOWORD(v58) = -1;
    BYTE2(v58) = 127;
    HIBYTE(v58) |= 1u;
    StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v54);
    if ( StandardMemberID == -1
      || G4_VCALL<uint8_t>(v7, 32, StandardMemberID, &v38) == 0 )
    {
      G4_VCALL<void>(v7, 48, &v54, &v38);
    }
    if ( LOBYTE(v54) == 0xFF && (HIBYTE(v58) & 1) != 0 )
      gameswf::free_internal(v57);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v38);
    LOWORD(v40) = 2;
    v41 = *(float *)&v48;
    LOWORD(v62) = 1;
    gameswf::String::resize((gameswf::String::Self *)&v62, 4);
    v11 = (gameswf::Self *)((char *)&v62 + 1);
    if ( LOBYTE(v62) == 0xFF )
      v11 = v65;
    gameswf::Strcpy_s(v11, (char *)&loc_4 + 1, (gameswf::Self *)"yMin");
    LOWORD(v66) = -1;
    BYTE2(v66) = 127;
    HIBYTE(v66) |= 1u;
    v12 = gameswf::getStandardMemberID((gameswf::Self *)&v62);
    if ( v12 == -1
      || G4_VCALL<uint8_t>(v7, 32, v12, &v40) == 0 )
    {
      G4_VCALL<void>(v7, 48, &v62, &v40);
      if ( LOBYTE(v62) != 0xFF )
        goto LABEL_21;
    }
    else if ( LOBYTE(v62) != 0xFF )
    {
      goto LABEL_21;
    }
    if ( (HIBYTE(v66) & 1) != 0 )
      gameswf::free_internal(v65);
LABEL_21:
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v40);
    LOWORD(v42) = 2;
    v43 = *(float *)&v47;
    LOWORD(v70) = 1;
    gameswf::String::resize((gameswf::String::Self *)&v70, 4);
    v13 = (gameswf::Self *)((char *)&v70 + 1);
    if ( LOBYTE(v70) == 0xFF )
      v13 = v73;
    gameswf::Strcpy_s(v13, (char *)&loc_4 + 1, (gameswf::Self *)"xMax");
    LOWORD(v74) = -1;
    BYTE2(v74) = 127;
    HIBYTE(v74) |= 1u;
    v14 = gameswf::getStandardMemberID((gameswf::Self *)&v70);
    if ( v14 == -1
      || G4_VCALL<uint8_t>(v7, 32, v14, &v42) == 0 )
    {
      G4_VCALL<void>(v7, 48, &v70, &v42);
      if ( LOBYTE(v70) != 0xFF )
        goto LABEL_26;
    }
    else if ( LOBYTE(v70) != 0xFF )
    {
      goto LABEL_26;
    }
    if ( (HIBYTE(v74) & 1) != 0 )
      gameswf::free_internal(v73);
LABEL_26:
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v42);
    LOWORD(v44) = 2;
    v45 = v49;
    v77 = 1;
    v78 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v77, 4);
    v15 = (gameswf::Self *)&v78;
    if ( v77 == -1 )
      v15 = v79;
    gameswf::Strcpy_s(v15, (char *)&loc_4 + 1, (gameswf::Self *)"yMax");
    v80 = -1;
    v81 = 127;
    v82 |= 1u;
    v16 = gameswf::getStandardMemberID((gameswf::Self *)&v77);
    if ( v16 == -1
      || G4_VCALL<uint8_t>(v7, 32, v16, &v44) == 0 )
    {
      G4_VCALL<void>(v7, 48, &v77, &v44);
      if ( v77 != -1 )
        goto LABEL_31;
    }
    else if ( v77 != -1 )
    {
LABEL_31:
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v44);
      return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v7);
    }
    if ( (v82 & 1) != 0 )
      gameswf::free_internal(v79);
    goto LABEL_31;
  }
  v5 = nullptr;
  Rectangle = (gameswf::ASObject::Self *)gameswf::createRectangle(*((gameswf::Self **)v2 + 4), v25);
  v7 = Rectangle;
  if ( Rectangle != nullptr
    && G4_VCALL<uint8_t>(Rectangle, 8, 63) != 0 )
  {
    v5 = (float *)v7;
  }
  v5[10] = *(float *)&v46;
  v5[11] = *(float *)&v47;
  v5[12] = *(float *)&v48;
  v5[13] = v49;
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v7);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::localToGlobal  (binary VA: 0x113ffa0)
// Original: gameswf::ASSprite::localToGlobal
// ----------------------------------------------------------------------------
void gameswf::ASSprite::localToGlobal(int a1)
{
  gameswf::Character::Self *Ptr;
  char *WorldMatrix;
  gameswf::Self *v3;
  int v4;

  Ptr = (gameswf::Character::Self *)gameswf::spriteGetPtr(a1);
  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    WorldMatrix = gameswf::Character::getWorldMatrix(Ptr);
    v3 = nullptr;
    v4 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v4 == 5 )
      v3 = *(gameswf::Self **)(v4 + 4);
    gameswf::transformPoint(v3, (gameswf::ASObject::Self *)WorldMatrix);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::globalToLocal  (binary VA: 0x1140020)
// Original: gameswf::ASSprite::globalToLocal
// ----------------------------------------------------------------------------
void gameswf::ASSprite::globalToLocal(int a1)
{
  gameswf::Character::Self *Ptr;
  char *WorldMatrix;
  gameswf::Self *v3;
  int v4;
  uint32_t v5[9];

  Ptr = (gameswf::Character::Self *)gameswf::spriteGetPtr(a1);
  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    memset(v5, 0, 0x18u);
    v5[0] = 1065353216;
    v5[4] = 1065353216;
    WorldMatrix = gameswf::Character::getWorldMatrix(Ptr);
    gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v5, (const gameswf::Matrix::Self *)WorldMatrix);
    v3 = nullptr;
    v4 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v4 == 5 )
      v3 = *(gameswf::Self **)(v4 + 4);
    gameswf::transformPoint(v3, (gameswf::ASObject::Self *)v5);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::startDrag  (binary VA: 0x11400d0)
// Original: gameswf::ASSprite::startDrag
// ----------------------------------------------------------------------------
int gameswf::ASSprite::startDrag(int a1)
{
  bool v1; // di
  int v2;
  gameswf::Player::Self *v3;
  gameswf::Self *v4;
  gameswf::Root::Self *Root;
  char v7;
  long double v8; // fst7
  bool v9; // cc
  float v10; // xmm0_4
  float v11; // xmm0_4
  long double v13; // fst7
  int v14;
  float v15; // xmm0_4
  long double v16; // fst7
  int v17;
  float v18; // xmm0_4
  typedef gameswf::Character::Self *_g4_t_Ptr;
  typedef bool _g4_t_v20;
  typedef float _g4_t_v21[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_Ptr)) > _g4_s0 ? (4u + sizeof(_g4_t_Ptr)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_Ptr &Ptr = *reinterpret_cast<_g4_t_Ptr *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);

  v1 = false;
  Ptr = (gameswf::Character::Self *)gameswf::spriteGetPtr(a1);
  v20 = false;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v7 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v1 = v7;
    if ( *(int *)(a1 + 16) <= 1 )
    {
      v1 = v7;
      goto LABEL_2;
    }
    v8 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v9 = *(uint32_t *)(a1 + 16) <= 2;
    v10 = v8;
    v21[0] = v10;
    if ( v9 )
    {
      v21[2] = -9999.0;
    }
    else
    {
      v13 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
      v14 = *(uint32_t *)(a1 + 16);
      v15 = v13;
      v21[2] = v15;
      if ( v14 > 3 )
      {
        v16 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4
                                                                                     * (3 * *(uint32_t *)(a1 + 20) - 9)));
        v17 = *(uint32_t *)(a1 + 16);
        v18 = v16;
        v21[1] = v18;
        if ( v17 <= 4 )
          v11 = 9999.0;
        else
          v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                              + 4 * (3 * *(uint32_t *)(a1 + 20) - 12)));
        goto LABEL_9;
      }
    }
    v21[1] = 9999.0;
    v11 = 9999.0;
LABEL_9:
    v21[3] = v11;
    v20 = true;
  }
LABEL_2:
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(gameswf::Player::Self **)(v2 + 212);
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
  Root = (gameswf::Root::Self *)gameswf::Player::getRoot(v3);
  return gameswf::Root::startDrag(Root, Ptr, v1, v20, (gameswf::Rect::Self *)v21);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::stopDrag  (binary VA: 0x11402c0)
// Original: gameswf::ASSprite::stopDrag
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::ASSprite::stopDrag(int a1)
{
  int Ptr;
  int v2;
  gameswf::Self *v3;
  gameswf::Root::Self *result;
  bool v5;
  int v6;
  gameswf::Player::Self *v7;
  gameswf::Self *v8;
  gameswf::Root::Self *Root;

  Ptr = gameswf::spriteGetPtr(a1);
  v2 = *(uint32_t *)(a1 + 12);
  if ( *(uint32_t *)(v2 + 212) == 0 || *((uint8_t *)(v3 = *(gameswf::Self **)(v2 + 208)) + 2) != 0 )
  {
    result = (gameswf::Root::Self *)gameswf::Player::getRoot(*(gameswf::Player::Self **)(v2 + 212));
    if ( Ptr != *((uint32_t *)result + 47) )
      return result;
    goto LABEL_8;
  }
  v5 = (*(uint16_t *)v3)-- == 1;
  if ( v5 )
    gameswf::free_internal(v3);
  *(uint32_t *)(v2 + 208) = 0;
  *(uint32_t *)(v2 + 212) = 0;
  result = (gameswf::Root::Self *)gameswf::Player::getRoot(nullptr);
  if ( Ptr == *((uint32_t *)result + 47) )
  {
LABEL_8:
    v6 = *(uint32_t *)(a1 + 12);
    v7 = *(gameswf::Player::Self **)(v6 + 212);
    if ( v7 != nullptr )
    {
      v8 = *(gameswf::Self **)(v6 + 208);
      if ( *((uint8_t *)v8 + 2) == 0 )
      {
        v5 = (*(uint16_t *)v8)-- == 1;
        if ( v5 )
          gameswf::free_internal(v8);
        *(uint32_t *)(v6 + 208) = 0;
        *(uint32_t *)(v6 + 212) = 0;
        v7 = nullptr;
      }
    }
    Root = (gameswf::Root::Self *)gameswf::Player::getRoot(v7);
    return gameswf::Root::stopDrag(Root);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::play  (binary VA: 0x11403e0)
// Original: gameswf::ASSprite::play
// ----------------------------------------------------------------------------
int gameswf::ASSprite::play(int a1)
{
  int Ptr;

  Ptr = gameswf::spriteGetPtr(a1);
  return G4_VCALL<int>(Ptr, 156, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::stop  (binary VA: 0x1140420)
// Original: gameswf::ASSprite::stop
// ----------------------------------------------------------------------------
int gameswf::ASSprite::stop(int a1)
{
  int Ptr;

  Ptr = gameswf::spriteGetPtr(a1);
  return G4_VCALL<int>(Ptr, 156, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::gotoAndPlay  (binary VA: 0x1140460)
// Original: gameswf::ASSprite::gotoAndPlay
// ----------------------------------------------------------------------------
int gameswf::ASSprite::gotoAndPlay(uint32_t *a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  uint32_t *v2;
  int v3;
  int result;
  gameswf::String::Self *v5;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7;
  typedef gameswf::Self *_g4_t_v8[4];
  typedef int16_t _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v7)) > _g4_s1 ? (31u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (50u + sizeof(_g4_t_v10)) > _g4_s4 ? (50u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (51u + sizeof(_g4_t_v11)) > _g4_s5 ? (51u + sizeof(_g4_t_v11)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 31u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 50u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 51u);

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr((int)(uintptr_t)(a1));
  if ( (int)a1[4] <= 0 )
    return gameswf::logError((gameswf::Self *)"error: sprite_goto_and_play needs one arg\n", v6);
  v2 = (uint32_t *)a1[3];
  v3 = 12 * a1[5];
  v7 = *(uint8_t *)(*v2 + v3);
  result = v7 - 3;
  if ( (uint8_t)result <= 1u || v7 == 2 )
  {
    LOWORD(v8[0]) = 1;
    v9 = -1;
    v10 = 127;
    v11 |= 1u;
    v5 = gameswf::ASValue::toString((gameswf::ASValue::Self *)(*v2 + v3), v8);
    result = gameswf::SpriteInstance::gotoFrame(Ptr, v5);
    if ( (uint8_t)result != 0 )
      result = G4_VCALL<int>(Ptr, 156, 0);
    if ( LOBYTE(v8[0]) == 0xFF && (v11 & 1) != 0 )
      return gameswf::free_internal(v8[3]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::gotoAndStop  (binary VA: 0x1140590)
// Original: gameswf::ASSprite::gotoAndStop
// ----------------------------------------------------------------------------
int gameswf::ASSprite::gotoAndStop(uint32_t *a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  uint32_t *v2;
  int v3;
  int result;
  gameswf::String::Self *v5;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7;
  typedef gameswf::Self *_g4_t_v8[4];
  typedef int16_t _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v7)) > _g4_s1 ? (31u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (50u + sizeof(_g4_t_v10)) > _g4_s4 ? (50u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (51u + sizeof(_g4_t_v11)) > _g4_s5 ? (51u + sizeof(_g4_t_v11)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 31u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 50u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 51u);

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr((int)(uintptr_t)(a1));
  if ( (int)a1[4] <= 0 )
    return gameswf::logError((gameswf::Self *)"error: sprite_goto_and_stop needs one arg\n", v6);
  v2 = (uint32_t *)a1[3];
  v3 = 12 * a1[5];
  v7 = *(uint8_t *)(*v2 + v3);
  result = v7 - 3;
  if ( (uint8_t)result <= 1u || v7 == 2 )
  {
    LOWORD(v8[0]) = 1;
    v9 = -1;
    v10 = 127;
    v11 |= 1u;
    v5 = gameswf::ASValue::toString((gameswf::ASValue::Self *)(*v2 + v3), v8);
    gameswf::SpriteInstance::gotoFrame(Ptr, v5);
    result = G4_VCALL<int>(Ptr, 156, 1);
    if ( LOBYTE(v8[0]) == 0xFF && (v11 & 1) != 0 )
      return gameswf::free_internal(v8[3]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::nextFrame  (binary VA: 0x11406b0)
// Original: gameswf::ASSprite::nextFrame
// ----------------------------------------------------------------------------
int gameswf::ASSprite::nextFrame(int a1)
{
  int Ptr;
  int v2;
  int v3;

  Ptr = gameswf::spriteGetPtr(a1);
  v2 = G4_VCALL<int>(Ptr, 316);
  v3 = G4_VCALL<int>(Ptr, 312);
  if ( v2 > v3 )
    G4_VCALL<void>(Ptr, 328, v3 + 1);
  return G4_VCALL<int>(Ptr, 156, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::prevFrame  (binary VA: 0x1140730)
// Original: gameswf::ASSprite::prevFrame
// ----------------------------------------------------------------------------
int gameswf::ASSprite::prevFrame(int a1)
{
  int Ptr;
  int v2;

  Ptr = gameswf::spriteGetPtr(a1);
  v2 = G4_VCALL<int>(Ptr, 312);
  if ( v2 > 0 )
    G4_VCALL<void>(Ptr, 328, v2 - 1);
  return G4_VCALL<int>(Ptr, 156, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::getBytesLoaded  (binary VA: 0x11407a0)
// Original: gameswf::ASSprite::getBytesLoaded
// ----------------------------------------------------------------------------
int gameswf::ASSprite::getBytesLoaded(gameswf::ASValue::Self **a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  double LoadedBytes; // xmm0_8

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr((int)(uintptr_t)(a1));
  LoadedBytes = (double)gameswf::SpriteInstance::getLoadedBytes(Ptr);
  return gameswf::ASValue::setDouble(*a1, LoadedBytes);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::getBytesTotal  (binary VA: 0x11407f0)
// Original: gameswf::ASSprite::getBytesTotal
// ----------------------------------------------------------------------------
int gameswf::ASSprite::getBytesTotal(gameswf::ASValue::Self **a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  double FileBytes; // xmm0_8

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr((int)(uintptr_t)(a1));
  FileBytes = (double)gameswf::SpriteInstance::getFileBytes(Ptr);
  return gameswf::ASValue::setDouble(*a1, FileBytes);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::swapDepths  (binary VA: 0x1140840)
// Original: gameswf::ASSprite::swapDepths
// ----------------------------------------------------------------------------
int gameswf::ASSprite::swapDepths(int a1)
{
  int Ptr;
  gameswf::ASValue::Self *v2;
  int CharacterAtDepth;
  int v4;
  gameswf::Self *v5;
  bool v6;
  int v7;
  gameswf::Self *v8;
  int result;
  int v10;
  int v11;
  gameswf::Self *v12;
  gameswf::Self *v13;
  int16_t v14;
  int v15;
  gameswf::Self *v16;
  gameswf::Character::Self *v17;
  gameswf::DisplayList::Self *v18;

  Ptr = gameswf::spriteGetPtr(a1);
  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::logError((gameswf::Self *)"swapDepths needs one arg\n", (const char *)v17);
  v2 = (gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20));
  if ( *(uint8_t *)v2 != 2 )
  {
    if ( *(uint8_t *)v2 != 5 )
      return gameswf::logError((gameswf::Self *)"swapDepths has received invalid arg\n", (const char *)v17);
    CharacterAtDepth = *((uint32_t *)v2 + 1);
    if ( CharacterAtDepth == 0 )
      return gameswf::logError((gameswf::Self *)"It is impossible to swap NULL character\n", (const char *)v17);
    goto LABEL_5;
  }
  v10 = gameswf::ASValue::toInt(v2) + 0x4000;
  result = *(uint16_t *)(Ptr + 140);
  if ( v10 != result )
  {
    v11 = *(uint32_t *)(Ptr + 56);
    if ( v11 != 0 )
    {
      v12 = *(gameswf::Self **)(Ptr + 52);
      if ( *((uint8_t *)v12 + 2) != 0 )
      {
        if ( G4_VCALL<uint8_t>(v11, 8, 2) != 0 )
        {
          v18 = (gameswf::DisplayList::Self *)(v11 + 212);
          CharacterAtDepth = gameswf::DisplayList::getCharacterAtDepth((gameswf::DisplayList::Self *)(v11 + 212), v10);
          if ( CharacterAtDepth == 0 )
            return gameswf::DisplayList::change_character_depth(v18, (gameswf::Character::Self *)Ptr, v10);
LABEL_5:
          if ( G4_VCALL<uint8_t>(CharacterAtDepth, 8, 2) != 0
            && Ptr != 0 )
          {
            v4 = *(uint32_t *)(Ptr + 56);
            if ( v4 != 0 )
            {
              v5 = *(gameswf::Self **)(Ptr + 52);
              if ( *((uint8_t *)v5 + 2) == 0 )
              {
                v6 = (*(uint16_t *)v5)-- == 1;
                if ( v6 )
                {
                  v17 = nullptr;
                  gameswf::free_internal(v5);
                }
                *(uint32_t *)(Ptr + 52) = 0;
                *(uint32_t *)(Ptr + 56) = 0;
                v4 = 0;
              }
            }
            v7 = *(uint32_t *)(CharacterAtDepth + 56);
            if ( v7 != 0 )
            {
              v8 = *(gameswf::Self **)(CharacterAtDepth + 52);
              if ( *((uint8_t *)v8 + 2) == 0 )
              {
                v6 = (*(uint16_t *)v8)-- == 1;
                if ( v6 )
                {
                  v17 = nullptr;
                  gameswf::free_internal(v8);
                }
                *(uint32_t *)(CharacterAtDepth + 52) = 0;
                *(uint32_t *)(CharacterAtDepth + 56) = 0;
                v7 = 0;
              }
            }
            if ( v7 == v4 && *(uint32_t *)(Ptr + 56) != 0 )
            {
              v13 = *(gameswf::Self **)(Ptr + 52);
              if ( *((uint8_t *)v13 + 2) != 0 )
              {
                v14 = *(uint16_t *)(CharacterAtDepth + 140);
                *(uint16_t *)(CharacterAtDepth + 140) = *(uint16_t *)(Ptr + 140);
                v15 = *(uint32_t *)(Ptr + 56);
                *(uint16_t *)(Ptr + 140) = v14;
                if ( v15 != 0 )
                {
                  v16 = *(gameswf::Self **)(Ptr + 52);
                  if ( *((uint8_t *)v16 + 2) != 0 )
                  {
                    if ( G4_VCALL<uint8_t>(v15, 8, 2) == 0 )
                      v15 = 0;
                    return gameswf::DisplayList::swap_characters(
                             (gameswf::DisplayList::Self *)(v15 + 212),
                             (gameswf::Character::Self *)Ptr,
                             (gameswf::Character::Self *)CharacterAtDepth);
                  }
                  v6 = (*(uint16_t *)v16)-- == 1;
                  if ( v6 )
                    gameswf::free_internal(v16);
                  *(uint32_t *)(Ptr + 52) = 0;
                  *(uint32_t *)(Ptr + 56) = 0;
                }
                v15 = 0;
                return gameswf::DisplayList::swap_characters(
                         (gameswf::DisplayList::Self *)(v15 + 212),
                         (gameswf::Character::Self *)Ptr,
                         (gameswf::Character::Self *)CharacterAtDepth);
              }
              v6 = (*(uint16_t *)v13)-- == 1;
              if ( v6 )
              {
                v17 = nullptr;
                gameswf::free_internal(v13);
              }
              *(uint32_t *)(Ptr + 52) = 0;
              *(uint32_t *)(Ptr + 56) = 0;
            }
            return gameswf::logError((gameswf::Self *)"MovieClips should have the same parent\n", (const char *)v17);
          }
          return gameswf::logError((gameswf::Self *)"It is impossible to swap NULL character\n", (const char *)v17);
        }
      }
      else
      {
        v6 = (*(uint16_t *)v12)-- == 1;
        if ( v6 )
        {
          v17 = nullptr;
          gameswf::free_internal(v12);
        }
        *(uint32_t *)(Ptr + 52) = 0;
        *(uint32_t *)(Ptr + 56) = 0;
      }
    }
    return gameswf::logError((gameswf::Self *)"can't do _root.swapDepths\n", (const char *)v17);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::duplicateMovieClip  (binary VA: 0x1140b70)
// Original: gameswf::ASSprite::duplicateMovieClip
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASSprite::duplicateMovieClip(int a1)
{
  int Ptr;
  int v2;
  int v3;
  int v4;
  char *v5;
  gameswf::ASObject::Self *v6;
  int v8;
  int v9;
  int v10;
  int v11;
  const char *obj;
  int v13;
  g4_cxa_guard_t *v14;
  int (*v15)(int, char *, int);

  Ptr = gameswf::spriteGetPtr(a1);
  v2 = Ptr;
  if ( *(int *)(a1 + 16) <= 1 )
    return (gameswf::RefCounted::Self *)gameswf::logError((gameswf::Self *)"duplicateMovieClip needs 2 or 3 args\n", obj);
  v15 = *(int (**)(int, char *, int))(*(uint32_t *)Ptr + 220);
  v3 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)))
     + 0x4000;
  v4 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v4 == 3 || *(uint8_t *)v4 == 4 )
  {
    v5 = *(char **)(v4 + 4);
  }
  else
  {
    v5 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 )
    {
      v13 = v3;
      v10 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
      v3 = v13;
      if ( v10 != 0 )
      {
        v11 = dword_20D6388;
        byte_20D6378 = 1;
        byte_20D6379 = 0;
        dword_20D6388 |= 0x7FFFFFu;
        BYTE2(dword_20D6388) &= ~0x80u;
        HIBYTE(dword_20D6388) = ((v11 | 0x7FFFFFu) >> 24) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
        v3 = v13;
      }
    }
  }
  v6 = (gameswf::ASObject::Self *)v15(v2, v5, v3);
  if ( *(uint32_t *)(a1 + 16) == 3 )
  {
    v8 = **(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6);
    if ( *(uint8_t *)v8 == 5 )
    {
      v9 = *(uint32_t *)(v8 + 4);
      if ( v9 != 0 )
      {
        v14 = (g4_cxa_guard_t *)v6;
        G4_VCALL<void>(v9, 80, v6);
        v6 = (gameswf::ASObject::Self *)v14;
      }
    }
  }
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v6);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::getDepth  (binary VA: 0x1140d10)
// Original: gameswf::ASSprite::getDepth
// ----------------------------------------------------------------------------
int gameswf::ASSprite::getDepth(gameswf::ASValue::Self **a1)
{
  int Ptr;

  Ptr = gameswf::spriteGetPtr((int)(uintptr_t)(a1));
  return gameswf::ASValue::setDouble(*a1, (double)(*(uint16_t *)(Ptr + 140) - 0x4000));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::createEmptyMovieClip  (binary VA: 0x1140d60)
// Original: gameswf::ASSprite::createEmptyMovieClip
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASSprite::createEmptyMovieClip(int a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  int v3;
  char *v4;
  gameswf::ASObject::Self *v5;
  gameswf::ASObject::Self *v6;

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr(a1);
  if ( *(uint32_t *)(a1 + 16) != 2 )
    return (gameswf::RefCounted::Self *)gameswf::logError((gameswf::Self *)"createEmptyMovieClip needs 2 args\n", (const char *)v6);
  v3 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)))
     + 0x4000;
  v4 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v5 = (gameswf::ASObject::Self *)gameswf::SpriteInstance::add_empty_movieclip(Ptr, v4, v3);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::removeMovieClip  (binary VA: 0x1140e10)
// Original: gameswf::ASSprite::removeMovieClip
// ----------------------------------------------------------------------------
int gameswf::ASSprite::removeMovieClip(int a1)
{
  int result;
  int v2;
  int v3;

  result = gameswf::spriteGetPtr(a1);
  v2 = *(uint32_t *)(result + 56);
  v3 = result;
  if ( v2 != 0 )
  {
    result = *(uint32_t *)(result + 52);
    if ( *(uint8_t *)(result + 2) != 0 )
    {
      result = G4_VCALL<int>(v2, 8, 2);
      if ( (uint8_t)result != 0 )
        return G4_VCALL<int>(v2, 176, v3);
    }
    else
    {
      if ( (*(uint16_t *)result)-- == 1 )
        result = gameswf::free_internal((gameswf::Self *)result);
      *(uint32_t *)(v3 + 52) = 0;
      *(uint32_t *)(v3 + 56) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::loadMovie  (binary VA: 0x1140eb0)
// Original: gameswf::ASSprite::loadMovie
// ----------------------------------------------------------------------------
int gameswf::ASSprite::loadMovie(int a1)
{
  int result;
  gameswf::RefCounted::Self *v2;
  char *v3;
  uint32_t v4[4];

  result = *(uint32_t *)(a1 + 16);
  if ( result > 0 )
  {
    v2 = *(gameswf::RefCounted::Self **)(a1 + 4);
    LOWORD(v4[0]) = 5;
    v4[1] = (uint32_t)(uintptr_t)(v2);
    if ( v2 != nullptr )
      gameswf::RefCounted::addRef(v2);
    v3 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    gameswf::ASEnvironment::loadFile(*(gameswf::ASObject::Self ***)(a1 + 12), (gameswf::Self *)v3, (const gameswf::ASValue::Self *)v4);
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::unloadMovie  (binary VA: 0x1140f40)
// Original: gameswf::ASSprite::unloadMovie
// ----------------------------------------------------------------------------
int gameswf::ASSprite::unloadMovie(int a1)
{
  gameswf::RefCounted::Self *v1;
  uint32_t v3[4];

  LOWORD(v3[0]) = 5;
  v1 = *(gameswf::RefCounted::Self **)(a1 + 4);
  v3[1] = (uint32_t)(uintptr_t)(v1);
  if ( v1 != nullptr )
    gameswf::RefCounted::addRef(v1);
  gameswf::ASEnvironment::loadFile(
    *(gameswf::ASObject::Self ***)(a1 + 12),
    (gameswf::Self *)&unk_1B15112,
    (const gameswf::ASValue::Self *)v3);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::getNextHighestDepth  (binary VA: 0x1140fc0)
// Original: gameswf::ASSprite::getNextHighestDepth
// ----------------------------------------------------------------------------
int gameswf::ASSprite::getNextHighestDepth(gameswf::ASValue::Self **a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  double v2; // xmm0_8

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr((int)(uintptr_t)(a1));
  v2 = (double)(gameswf::SpriteInstance::getHighestDepth(Ptr) - 0x4000);
  return gameswf::ASValue::setDouble(*a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::getInstanceAtDepth  (binary VA: 0x1141020)
// Original: gameswf::ASSprite::getInstanceAtDepth
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASSprite::getInstanceAtDepth(int a1)
{
  int Ptr;
  gameswf::DisplayList::Self *v2;
  gameswf::ASObject::Self *CharacterAtDepth;
  double v5;

  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  Ptr = gameswf::spriteGetPtr(a1);
  if ( Ptr == 0 )
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  v2 = (gameswf::DisplayList::Self *)(Ptr + 212);
  v5 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  CharacterAtDepth = (gameswf::ASObject::Self *)gameswf::DisplayList::getCharacterAtDepth(v2, (int)v5 + 0x4000);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, CharacterAtDepth);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::createTextField  (binary VA: 0x11410d0)
// Original: gameswf::ASSprite::createTextField
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASSprite::createTextField(int a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  char *v3;
  gameswf::ASObject::Self *TextField;
  gameswf::ASObject::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr(a1);
  gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  if ( *(uint32_t *)(a1 + 16) != 6 )
    return (gameswf::RefCounted::Self *)gameswf::logError(
                                    (gameswf::Self *)"createTextField: the number of arguments must be 6\n",
                                    (const char *)v5);
  v7 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 15)));
  v6 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 12)));
  v10 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 9)));
  v8 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
  v9 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v3 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  TextField = (gameswf::ASObject::Self *)gameswf::SpriteInstance::createTextField(Ptr, v3, v9 + 0x4000, v8, v10, v6, v7);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, TextField);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::attachMovie  (binary VA: 0x1141230)
// Original: gameswf::ASSprite::attachMovie
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASSprite::attachMovie(int a1)
{
  int v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  char *v5;
  gameswf::Self *v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  gameswf::Self *v11;
  char *v12;
  gameswf::Self *v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  gameswf::Self *v18;
  char *v19;
  gameswf::Self *v20;
  int v21;
  unsigned int v22;
  gameswf::ASObject::Self *v23;
  int v24;
  gameswf::RefCounted::Self *result;
  int v26;
  int v27;
  int v28;
  char *v29;
  int v30;
  int v31;
  gameswf::Self *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  char *v37;
  int v38;
  int v39;
  int v40;
  typedef const char *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef gameswf::Character::Self *_g4_t_Ptr;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50[3];
  typedef gameswf::Self *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef char _g4_t_v53;
  typedef uint8_t _g4_t_v54[3];
  typedef char *_g4_t_v55;
  typedef gameswf::Self *_g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58[3];
  typedef gameswf::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v41)) > _g4_s0 ? (4u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v42)) > _g4_s1 ? (28u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v43)) > _g4_s2 ? (28u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_Ptr)) > _g4_s3 ? (32u + sizeof(_g4_t_Ptr)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v45)) > _g4_s4 ? (36u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v46)) > _g4_s5 ? (36u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v47)) > _g4_s6 ? (36u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v48)) > _g4_s7 ? (40u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v49)) > _g4_s8 ? (40u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v50)) > _g4_s9 ? (48u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v51)) > _g4_s10 ? (60u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v52)) > _g4_s11 ? (64u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v53)) > _g4_s12 ? (80u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (81u + sizeof(_g4_t_v54)) > _g4_s13 ? (81u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v55)) > _g4_s14 ? (84u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v56)) > _g4_s15 ? (92u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v57)) > _g4_s16 ? (96u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v58)) > _g4_s17 ? (112u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v59)) > _g4_s18 ? (124u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v60)) > _g4_s19 ? (128u + sizeof(_g4_t_v60)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_Ptr &Ptr = *reinterpret_cast<_g4_t_Ptr *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 80u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 81u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 92u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 96u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 112u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 124u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 128u);

  v1 = a1;
  Ptr = (gameswf::Character::Self *)gameswf::spriteGetPtr(a1);
  if ( *(int *)(a1 + 16) <= 2 )
    return (gameswf::RefCounted::Self *)gameswf::logError((gameswf::Self *)"attachMovie needs 3 or 4 args\n", v41);
  v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v2 == 3 || *(uint8_t *)v2 == 4 )
  {
    v48 = *(char **)(v2 + 4);
  }
  else
  {
    v48 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v27 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v27;
      BYTE2(dword_20D6388) = BYTE2(v27) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v27) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  LOWORD(v50[0]) = 1;
  if ( *v48 == -1 )
    v3 = *((uint32_t *)v48 + 1) - 1;
  else
    v3 = *v48 - 1;
  gameswf::String::resize((gameswf::String::Self *)v50, v3);
  v4 = (gameswf::Self *)(v48 + 1);
  if ( *v48 == -1 )
  {
    v4 = *((gameswf::Self **)v48 + 3);
    LOBYTE(v5) = v50[0];
    if ( LOBYTE(v50[0]) != 0xFF )
      goto LABEL_9;
LABEL_73:
    v5 = (char *)v50[1];
    v6 = v51;
    goto LABEL_10;
  }
  LOBYTE(v5) = v50[0];
  if ( LOBYTE(v50[0]) == 0xFF )
    goto LABEL_73;
LABEL_9:
  v5 = (char *)(char)(uintptr_t)v5;
  v6 = (gameswf::Self *)((char *)v50 + 1);
LABEL_10:
  gameswf::Strcpy_s(v6, v5, v4);
  v45 = *((uint32_t *)v48 + 4);
  if ( (uint8_t *)(v45 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v48 == -1 )
    {
      v29 = *((char **)v48 + 3);
      v28 = *((uint32_t *)v48 + 1) - 1;
    }
    else
    {
      v28 = *v48 - 1;
      v29 = v48 + 1;
    }
    v7 = 5381;
    if ( v28 > 0 )
    {
      do
      {
        --v28;
        v30 = 33 * v7;
        v31 = (uint8_t)v29[v28] + 32;
        if ( (uint8_t)(v29[v28] - 65) > 0x19u )
          v31 = (uint8_t)v29[v28];
        v7 = v30 ^ v31;
      }
      while ( v28 != 0 );
      v1 = a1;
      v7 = v7 << 9 >> 9;
    }
    *((uint32_t *)v48 + 4) = v7 & 0x7FFFFF | v45 & 0xFF800000;
  }
  else
  {
    v7 = v45 << 9 >> 9;
  }
  v8 = v7 & 0x7FFFFF | v52 & 0xFF800000;
  LOWORD(v52) = v7;
  BYTE2(v52) = BYTE2(v8) & 0x7F;
  HIBYTE(v52) = HIBYTE(v8) | 1;
  v9 = **(uint32_t **)(v1 + 12) + 4 * (3 * *(uint32_t *)(v1 + 20) - 3);
  if ( *(uint8_t *)v9 == 3 || *(uint8_t *)v9 == 4 )
  {
    v49 = *(char **)(v9 + 4);
  }
  else
  {
    v49 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v26 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v26;
      BYTE2(dword_20D6388) = BYTE2(v26) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v26) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  v53 = 1;
  v54[0] = 0;
  if ( *v49 == -1 )
    v10 = *((uint32_t *)v49 + 1) - 1;
  else
    v10 = *v49 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v53, v10);
  if ( *v49 == -1 )
    v11 = *((gameswf::Self **)v49 + 3);
  else
    v11 = (gameswf::Self *)(v49 + 1);
  if ( v53 == -1 )
  {
    v12 = v55;
    v13 = v56;
  }
  else
  {
    v12 = (char *)v53;
    v13 = (gameswf::Self *)v54;
  }
  gameswf::Strcpy_s(v13, v12, v11);
  v46 = *((uint32_t *)v49 + 4);
  if ( (uint8_t *)(v46 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v49 == -1 )
    {
      v37 = *((char **)v49 + 3);
      v36 = *((uint32_t *)v49 + 1) - 1;
    }
    else
    {
      v36 = *v49 - 1;
      v37 = v49 + 1;
    }
    v14 = 5381;
    if ( v36 > 0 )
    {
      v43 = v1;
      do
      {
        --v36;
        v38 = 33 * v14;
        v39 = (uint8_t)v37[v36] + 32;
        if ( (uint8_t)(v37[v36] - 65) > 0x19u )
          v39 = (uint8_t)v37[v36];
        v14 = v38 ^ v39;
      }
      while ( v36 != 0 );
      v1 = v43;
      v14 = v14 << 9 >> 9;
    }
    *((uint32_t *)v49 + 4) = v14 & 0x7FFFFF | v46 & 0xFF800000;
  }
  else
  {
    v14 = v46 << 9 >> 9;
  }
  v15 = v14 & 0x7FFFFF | v57 & 0xFF800000;
  LOWORD(v57) = v14;
  BYTE2(v57) = BYTE2(v15) & 0x7F;
  HIBYTE(v57) = HIBYTE(v15) | 1;
  v16 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 4 * (3 * *(uint32_t *)(v1 + 20) - 6)));
  LOWORD(v58[0]) = 1;
  v47 = v16 + 0x4000;
  if ( v53 == -1 )
    v17 = (int)(uintptr_t)(v55 - 1);
  else
    v17 = v53 - 1;
  gameswf::String::resize((gameswf::String::Self *)v58, v17);
  v18 = (gameswf::Self *)v54;
  if ( v53 == -1 )
    v18 = v56;
  if ( LOBYTE(v58[0]) == 0xFF )
  {
    v19 = (char *)v58[1];
    v20 = v59;
  }
  else
  {
    v19 = (char *)SLOBYTE(v58[0]);
    v20 = (gameswf::Self *)((char *)v58 + 1);
  }
  gameswf::Strcpy_s(v20, v19, v18);
  if ( (uint8_t *)(v57 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v53 == -1 )
    {
      v32 = v56;
      v33 = (int)(uintptr_t)(v55 - 1);
    }
    else
    {
      v32 = (gameswf::Self *)v54;
      v33 = v53 - 1;
    }
    v21 = 5381;
    if ( v33 > 0 )
    {
      v42 = v1;
      do
      {
        --v33;
        v34 = 33 * v21;
        v35 = *((uint8_t *)v32 + v33) + 32;
        if ( (uint8_t)(*((uint8_t *)v32 + v33) - 65) > 0x19u )
          v35 = *((uint8_t *)v32 + v33);
        v21 = v34 ^ v35;
      }
      while ( v33 != 0 );
      v1 = v42;
      v21 = v21 << 9 >> 9;
    }
    v57 = v21 & 0x7FFFFF | v57 & 0xFF800000;
  }
  else
  {
    v21 = (int)(v57 << 9) >> 9;
  }
  v22 = v21 & 0x7FFFFF | v60 & 0xFF800000;
  LOWORD(v60) = v21;
  BYTE2(v60) = BYTE2(v22) & 0x7F;
  HIBYTE(v60) = HIBYTE(v22) | 1;
  v23 = (gameswf::ASObject::Self *)gameswf::SpriteInstance::attachMovie(Ptr, (int)(uintptr_t)(v50), (int)(uintptr_t)(v58), v47);
  if ( LOBYTE(v58[0]) == 0xFF && (v60 & 0x1000000) != 0 )
    gameswf::free_internal(v59);
  if ( *(int *)(v1 + 16) > 3 )
  {
    v24 = **(uint32_t **)(v1 + 12) + 4 * (3 * *(uint32_t *)(v1 + 20) - 9);
    if ( *(uint8_t *)v24 == 5 )
    {
      v40 = *(uint32_t *)(v24 + 4);
      if ( v40 != 0 )
        G4_VCALL<void>(v40, 80, v23);
    }
  }
  result = gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)v1, v23);
  if ( v53 == -1 && (v57 & 0x1000000) != 0 )
    result = (gameswf::RefCounted::Self *)gameswf::free_internal(v56);
  if ( LOBYTE(v50[0]) == 0xFF && (v52 & 0x1000000) != 0 )
    return (gameswf::RefCounted::Self *)gameswf::free_internal(v51);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::setFPS  (binary VA: 0x1141960)
// Original: gameswf::ASSprite::setFPS
// ----------------------------------------------------------------------------
gameswf::MovieDefImpl::Self * gameswf::ASSprite::setFPS(int a1)
{
  gameswf::MovieDefImpl::Self *result;
  float v2; // xmm0_4
  gameswf::Player::Self **v3;

  result = (gameswf::MovieDefImpl::Self *)gameswf::spriteGetPtr(a1);
  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    v3 = (gameswf::Player::Self **)result;
    v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    return gameswf::SpriteInstance::setFPS(v3, v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::beginFill  (binary VA: 0x11419e0)
// Original: gameswf::ASSprite::beginFill
// ----------------------------------------------------------------------------
int gameswf::ASSprite::beginFill(int a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  gameswf::Canvas::Self *Canvas;
  int v3;
  bool v4; // cc
  int v5;
  int v6;
  typedef double _g4_t_v8;
  typedef double _g4_t_v9;
  typedef uint8_t _g4_t_v10[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr(a1);
  Canvas = (gameswf::Canvas::Self *)gameswf::SpriteInstance::getCanvas(Ptr);
  v3 = *(uint32_t *)(a1 + 16);
  v10[0] = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = -1;
  if ( v3 > 0 )
  {
    v8 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v10[3] = -1;
    v10[2] = (int)v8;
    v10[0] = (unsigned int)(int)v8 >> 16;
    v4 = *(uint32_t *)(a1 + 16) <= 1;
    v10[1] = (uint16_t)(int)v8 >> 8;
    if ( !v4 )
    {
      v9 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
      LOBYTE(v5) = -118;
      v6 = (int)v9;
      if ( (int)v9 <= 254 )
      {
        LOBYTE(v5) = 0;
        if ( v6 > 0 )
          v5 = 255 * v6 / 100;
      }
      v10[3] = v5;
    }
  }
  { gameswf::Canvas::beginFill(Canvas, (const gameswf::Color::Self *)v10); return 0; }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::endFill  (binary VA: 0x1141af0)
// Original: gameswf::ASSprite::endFill
// ----------------------------------------------------------------------------
int gameswf::ASSprite::endFill(int a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  gameswf::Canvas::Self *Canvas;

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr(a1);
  Canvas = (gameswf::Canvas::Self *)gameswf::SpriteInstance::getCanvas(Ptr);
  return gameswf::Canvas::endFill(Canvas);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::clear  (binary VA: 0x1141b30)
// Original: gameswf::ASSprite::clear
// ----------------------------------------------------------------------------
int gameswf::ASSprite::clear(int a1)
{
  gameswf::RefCounted::Self **Ptr;
  int result;

  Ptr = (gameswf::RefCounted::Self **)gameswf::spriteGetPtr(a1);
  result = (int)(uintptr_t)(Ptr[69]);
  if ( result != 0 )
  {
    (*((void (**)(gameswf::RefCounted::Self **, int))*Ptr + 44))(Ptr, result);
    result = (int)(uintptr_t)(Ptr[69]);
    if ( result != 0 )
    {
      result = gameswf::RefCounted::dropRef(Ptr[69]);
      Ptr[69] = nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::moveTo  (binary VA: 0x1141ba0)
// Original: gameswf::ASSprite::moveTo
// ----------------------------------------------------------------------------
gameswf::Canvas::Self * gameswf::ASSprite::moveTo(int a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  gameswf::Canvas::Self *result;
  gameswf::Canvas::Self *v3;
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6;
  double v7;

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr(a1);
  result = (gameswf::Canvas::Self *)gameswf::SpriteInstance::getCanvas(Ptr);
  v3 = result;
  if ( *(int *)(a1 + 16) > 1 )
  {
    v7 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v4 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v6 = v4;
    v5 = v7;
    return (gameswf::Canvas::Self *)gameswf::Canvas::moveTo(v3, v5, v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::lineTo  (binary VA: 0x1141c40)
// Original: gameswf::ASSprite::lineTo
// ----------------------------------------------------------------------------
gameswf::Canvas::Self * gameswf::ASSprite::lineTo(int a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  gameswf::Canvas::Self *result;
  gameswf::Canvas::Self *v3;
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6;
  double v7;

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr(a1);
  result = (gameswf::Canvas::Self *)gameswf::SpriteInstance::getCanvas(Ptr);
  v3 = result;
  if ( *(int *)(a1 + 16) > 1 )
  {
    v7 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v4 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v6 = v4;
    v5 = v7;
    return (gameswf::Canvas::Self *)gameswf::Canvas::lineTo(v3, v5, v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::curveTo  (binary VA: 0x1141ce0)
// Original: gameswf::ASSprite::curveTo
// ----------------------------------------------------------------------------
gameswf::Canvas::Self * gameswf::ASSprite::curveTo(int a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  gameswf::Canvas::Self *result;
  gameswf::Canvas::Self *v3;
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8;
  float v9;
  float v10;
  double v11;
  double v12;
  double v13;

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr(a1);
  result = (gameswf::Canvas::Self *)gameswf::SpriteInstance::getCanvas(Ptr);
  v3 = result;
  if ( *(int *)(a1 + 16) > 3 )
  {
    v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v12 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v13 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
    v4 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 9)));
    v10 = v4;
    v5 = v13;
    v9 = v5;
    v6 = v12;
    v8 = v6;
    v7 = v11;
    return (gameswf::Canvas::Self *)gameswf::Canvas::curveTo(v3, v7, v8, v9, v10);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSprite::lineStyle  (binary VA: 0x1141dd0)
// Original: gameswf::ASSprite::lineStyle
// ----------------------------------------------------------------------------
int gameswf::ASSprite::lineStyle(int a1)
{
  gameswf::SpriteInstance::Self *Ptr;
  gameswf::Canvas::Self *Canvas;
  long double v3; // fst7
  bool v4; // cc
  float v5; // xmm0_4
  int v6;
  long double v7; // fst7
  float v8; // xmm0_4
  double v9; // xmm0_8
  float v11; // xmm0_4
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (13u + sizeof(_g4_t_v13)) > _g4_s1 ? (13u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v14)) > _g4_s2 ? (14u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v15)) > _g4_s3 ? (15u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 13u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 14u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 15u);

  Ptr = (gameswf::SpriteInstance::Self *)gameswf::spriteGetPtr(a1);
  Canvas = (gameswf::Canvas::Self *)gameswf::SpriteInstance::getCanvas(Ptr);
  if ( *(uint32_t *)(a1 + 16) != 0 )
  {
    v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v4 = *(uint32_t *)(a1 + 16) <= 1;
    v5 = v3;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = -1;
    v6 = (int)fmaxf(fminf(v5, 255.0), 0.0);
    if ( !v4 )
    {
      v7 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
      v15 = -1;
      v8 = v7;
      v9 = v8;
      v14 = (int)v9;
      v12 = (unsigned int)(int)v9 >> 16;
      v4 = *(uint32_t *)(a1 + 16) <= 2;
      v13 = (uint16_t)(int)v9 >> 8;
      if ( !v4 )
      {
        v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4
                                                                                     * (3 * *(uint32_t *)(a1 + 20) - 6)));
        v15 = (int)(float)(fmaxf(fminf(v11, 100.0), 0.0) * 2.55f);
      }
    }
    return ((gameswf::Canvas::setLineStyle(Canvas, v6, (const gameswf::Color::Self *)&v12)), (int)0);
  }
  else
  {
    *((uint32_t *)Canvas + 35) = 0;
    return (int)(uintptr_t)(gameswf::Canvas::addPath(Canvas, false));
  }
}


