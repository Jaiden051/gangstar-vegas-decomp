#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASDisplayObject.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObject::newOp  (binary VA: 0x114d3c0)
// Original: gameswf::ASDisplayObject::newOp
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObject::newOp()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObject::init  (binary VA: 0x114d3d0)
// Original: gameswf::ASDisplayObject::init
// ----------------------------------------------------------------------------
void gameswf::ASDisplayObject::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObject::hitTestObject  (binary VA: 0x114e650)
// Original: gameswf::ASDisplayObject::hitTestObject
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObject::hitTestObject(int a1)
{
  gameswf::Character::Self *v1;
  int v2;
  int v3;
  gameswf::Character::Self *v5;

  v1 = *(gameswf::Character::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 1) == 0 )
    v1 = nullptr;
  v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v2 == 5
    && (v5 = *(gameswf::Character::Self **)(v2 + 4)) != nullptr
    && (*(uint8_t (**)(gameswf::Character::Self *, int))(*(uint32_t *)v5 + 8))(v5, 1) != 0 )
  {
    v3 = (uint8_t)gameswf::Character::hitTestObject(v1, v5);
  }
  else
  {
    v3 = 0;
  }
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObject::hitTestPoint  (binary VA: 0x114f2d0)
// Original: gameswf::ASDisplayObject::hitTestPoint
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObject::hitTestPoint(int a1)
{
  int v1;
  float v2; // xmm0_4
  long double v3; // fst7
  int v4;
  float v5; // xmm0_4
  uint8_t v6;
  float v8;
  float v9;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 1) == 0 )
    v1 = 0;
  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v9 = v2;
  v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v4 = 0;
  v5 = v3;
  if ( *(int *)(a1 + 16) > 2 )
  {
    v8 = v3;
    v4 = (uint8_t)gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                      + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
    v5 = v8;
  }
  v6 = G4_VCALL<int>(v1, 116, COERCE_FLOAT(LODWORD(v9)), COERCE_FLOAT(LODWORD(v5)), v4);
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v6);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObject::getBounds  (binary VA: 0x1151a80)
// Original: gameswf::ASDisplayObject::getBounds
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASDisplayObject::getBounds(int a1)
{
  gameswf::Character::Self *v1;
  bool v2;
  gameswf::Character::Self *v3;
  __m128 v4;
  gameswf::Self **v5;
  gameswf::Self **v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  gameswf::Self ***v10;
  gameswf::Character::Self *v11;
  gameswf::Self *v12;
  char *v13;
  gameswf::Self *v14;
  int v15;
  gameswf::Self *v16;
  float *Rectangle;
  gameswf::Character::Self *v19;
  char *WorldMatrix;
  int v21;
  int v22;
  int v23;
  int v24;
  float v25; // xmm3_4
  __m128 v26;
  float v27; // xmm5_4
  __m128i v28;
  float *v29;
  int v30; // xmm0_4
  __m128 v31;
  int v32; // xmm0_4
  __m128 v33;
  int v34; // xmm0_4
  __m128 v35;
  int v36; // xmm0_4
  int v37; // xmm4_4
  int v38; // xmm6_4
  float *v39;
  __m128 v40;
  typedef gameswf::Player::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef gameswf::Character::Self *_g4_t_v62;
  typedef gameswf::Self **_g4_t_v63;
  typedef int _g4_t_v64;
  typedef gameswf::Character::Self *_g4_t_v65;
  typedef float _g4_t_v66;
  typedef int _g4_t_v67;
  typedef gameswf::Self *_g4_t_v68;
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75[6];
  typedef unsigned int _g4_t_v76[6];
  typedef gameswf::Self *_g4_t_v77[6];
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v41)) > _g4_s0 ? (4u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v42)) > _g4_s1 ? (8u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v43)) > _g4_s2 ? (12u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v44)) > _g4_s3 ? (16u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v45)) > _g4_s4 ? (20u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v46)) > _g4_s5 ? (24u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v47)) > _g4_s6 ? (28u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v48)) > _g4_s7 ? (32u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v49)) > _g4_s8 ? (36u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v50)) > _g4_s9 ? (36u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v51)) > _g4_s10 ? (40u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v52)) > _g4_s11 ? (40u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v53)) > _g4_s12 ? (44u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v54)) > _g4_s13 ? (48u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v55)) > _g4_s14 ? (48u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v56)) > _g4_s15 ? (52u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v57)) > _g4_s16 ? (52u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v58)) > _g4_s17 ? (56u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v59)) > _g4_s18 ? (56u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v60)) > _g4_s19 ? (60u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v61)) > _g4_s20 ? (60u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v62)) > _g4_s21 ? (64u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v63)) > _g4_s22 ? (64u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v64)) > _g4_s23 ? (68u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v65)) > _g4_s24 ? (68u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v66)) > _g4_s25 ? (68u + sizeof(_g4_t_v66)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v67)) > _g4_s26 ? (72u + sizeof(_g4_t_v67)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v68)) > _g4_s27 ? (72u + sizeof(_g4_t_v68)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v69)) > _g4_s28 ? (72u + sizeof(_g4_t_v69)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v70)) > _g4_s29 ? (76u + sizeof(_g4_t_v70)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v71)) > _g4_s30 ? (80u + sizeof(_g4_t_v71)) : _g4_s30,
    _g4_s32 = (84u + sizeof(_g4_t_v72)) > _g4_s31 ? (84u + sizeof(_g4_t_v72)) : _g4_s31,
    _g4_s33 = (88u + sizeof(_g4_t_v73)) > _g4_s32 ? (88u + sizeof(_g4_t_v73)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_v74)) > _g4_s33 ? (92u + sizeof(_g4_t_v74)) : _g4_s33,
    _g4_s35 = (96u + sizeof(_g4_t_v75)) > _g4_s34 ? (96u + sizeof(_g4_t_v75)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v76)) > _g4_s35 ? (120u + sizeof(_g4_t_v76)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v77)) > _g4_s36 ? (144u + sizeof(_g4_t_v77)) : _g4_s36,
    _g4_s38 = (168u + sizeof(_g4_t_v78)) > _g4_s37 ? (168u + sizeof(_g4_t_v78)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v79)) > _g4_s38 ? (172u + sizeof(_g4_t_v79)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v80)) > _g4_s39 ? (176u + sizeof(_g4_t_v80)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v81)) > _g4_s40 ? (180u + sizeof(_g4_t_v81)) : _g4_s40,
    _g4_s42 = (184u + sizeof(_g4_t_v82)) > _g4_s41 ? (184u + sizeof(_g4_t_v82)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v83)) > _g4_s42 ? (188u + sizeof(_g4_t_v83)) : _g4_s42,
    _g4_s44 = (192u + sizeof(_g4_t_v84)) > _g4_s43 ? (192u + sizeof(_g4_t_v84)) : _g4_s43,
    _g4_s45 = (196u + sizeof(_g4_t_v85)) > _g4_s44 ? (196u + sizeof(_g4_t_v85)) : _g4_s44,
    _g4_s46 = (200u + sizeof(_g4_t_v86)) > _g4_s45 ? (200u + sizeof(_g4_t_v86)) : _g4_s45,
    _g4_s47 = (204u + sizeof(_g4_t_v87)) > _g4_s46 ? (204u + sizeof(_g4_t_v87)) : _g4_s46,
    _g4_s48 = (208u + sizeof(_g4_t_v88)) > _g4_s47 ? (208u + sizeof(_g4_t_v88)) : _g4_s47,
    _g4_s49 = (212u + sizeof(_g4_t_v89)) > _g4_s48 ? (212u + sizeof(_g4_t_v89)) : _g4_s48,
    _g4_s50 = (216u + sizeof(_g4_t_v90)) > _g4_s49 ? (216u + sizeof(_g4_t_v90)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 72u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 76u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 80u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 84u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 88u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 92u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 96u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 120u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 144u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 168u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 172u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 176u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 180u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 184u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 188u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 192u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 196u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 200u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 204u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 208u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 212u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 216u);

  v1 = *(gameswf::Character::Self **)(a1 + 4);
  v62 = v1;
  if ( v1 != nullptr )
  {
    v2 = G4_VCALL<uint8_t>(v1, 8, 1) == 0;
    v3 = nullptr;
    if ( !v2 )
      v3 = v62;
    v62 = v3;
    v1 = v3;
  }
  v64 = (int)(uintptr_t)(v1);
  if ( *(uint32_t *)(a1 + 16) == 1
    && (v64 = 0, *(uint8_t *)(v21 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)) == 5)
    && (v22 = *(uint32_t *)(v21 + 4), v64 = v22, v22 != 0) )
  {
    v2 = G4_VCALL<uint8_t>(v22, 8, 1) == 0;
    v23 = 0;
    if ( !v2 )
      v23 = v64;
    gameswf::Character::getBound(
      v62,
      (gameswf::Rect::Self *)&v71,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v51,
      v53,
      v54,
      v56,
      v58,
      v60,
      (int)(uintptr_t)(v62),
      v23,
      v67,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75[0],
      v75[1],
      v75[2],
      v75[3],
      v75[4],
      v75[5],
      v76[0],
      *(float *)&v76[1],
      *(float *)&v76[2],
      *(float *)&v76[3],
      *(float *)&v76[4],
      *(float *)&v76[5],
      *(float *)v77,
      *(float *)&v77[1],
      *(float *)&v77[2],
      *(float *)&v77[3],
      *(float *)&v77[4],
      *(float *)&v77[5],
      v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
  }
  else
  {
    gameswf::Character::getBound(
      v62,
      (gameswf::Rect::Self *)&v71,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v51,
      v53,
      v54,
      v56,
      v58,
      v60,
      (int)(uintptr_t)(v62),
      v64,
      v67,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75[0],
      v75[1],
      v75[2],
      v75[3],
      v75[4],
      v75[5],
      v76[0],
      *(float *)&v76[1],
      *(float *)&v76[2],
      *(float *)&v76[3],
      *(float *)&v76[4],
      *(float *)&v76[5],
      *(float *)v77,
      *(float *)&v77[1],
      *(float *)&v77[2],
      *(float *)&v77[3],
      *(float *)&v77[4],
      *(float *)&v77[5],
      v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
  }
g4_m128_raw(v4) = 0;
  if ( (float)(*(float *)&v72 - *(float *)&v71) < 0.0 || (float)(*(float *)&v74 - *(float *)&v73) < 0.0 )
  {
    v5 = v63;
    *(float *)&v71 = fminf(*(float *)&v71, 0.0);
    *(float *)&v73 = fminf(*(float *)&v73, 0.0);
    *(float *)&v72 = fmaxf(*(float *)&v72, 0.0);
    *(float *)&v74 = fmaxf(*(float *)&v74, 0.0);
    if ( v65 != (gameswf::Character::Self *)v63 )
      goto LABEL_10;
LABEL_55:
    memset(v77, 0, sizeof(v77));
    v77[0] = (gameswf::Self *)1065353216;
    v77[4] = (gameswf::Self *)1065353216;
    gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v77, v5[17]);
    gameswf::Matrix::transform((gameswf::Matrix::Self *)v77, (gameswf::Rect::Self *)&v71);
    goto LABEL_40;
  }
  v5 = v63;
  if ( v65 == (gameswf::Character::Self *)v63 )
    goto LABEL_55;
LABEL_10:
  v6 = (gameswf::Self **)v5[14];
  if ( v6 != nullptr && *((uint8_t *)v5[13] + 2) == 0 )
  {
    v6 = nullptr;
    sub_7E5ED0(v5 + 13, nullptr);
    v63[14] = nullptr;
g4_m128_raw(v4) = 0u;
  }
  if ( v65 == (gameswf::Character::Self *)v6 )
    goto LABEL_40;
  v7 = (gameswf::Self *)&v77[4];
  v77[1] = nullptr;
  v77[0] = (gameswf::Self *)&v77[4];
  v77[2] = (gameswf::Self *)&dword_20;
  v77[3] = (gameswf::Self *)(&dword_0 + 1);
  if ( v6 != nullptr )
  {
    if ( *((uint8_t *)v63[13] + 2) != 0 )
    {
      v8 = 0;
      v9 = 1;
      while ( 1 )
      {
        v10 = (gameswf::Self ***)((char *)v7 + 4 * v8);
        if ( v10 != nullptr )
          *v10 = v6;
        v77[1] = (gameswf::Self *)v9;
        v11 = (gameswf::Character::Self *)(v6[14]);
        if ( v11 == nullptr )
          break;
        if ( *((uint8_t *)v6[13] + 2) == 0 )
        {
          sub_7E5ED0(v6 + 13, nullptr);
          v6[14] = nullptr;
          break;
        }
        if ( v65 == v11 )
        {
          v24 = v9 - 1;
          memset(v76, 0, sizeof(v76));
          v76[0] = 1065353216;
          v76[4] = 1065353216;
          v50 =g4_m128_lane<float>(v4, 0);
          v25 = 1.0;
          v52 =g4_m128_lane<float>(v4, 0);
          v26 = v4;
          v27 =g4_m128_lane<float>(v4, 0);
          v28 = _mm_cvtsi32_si128(0x3F800000u);
          v29 = *(float **)(*((uint32_t *)v77[0] + v9 - 1) + 68);
          v66 = *v29;
          v69 = v29[3];
          v59 = v29[1];
          v61 = v29[4];
          v55 = v29[2];
          v57 = v29[5];
          while ( 1 )
          {
g4_m128_raw(v40) = LODWORD(v69);
            memset(v75, 0, sizeof(v75));
g4_m128_lane<float>(v40, 0) = (float)(v69 * v27) + (float)(v66 * *(float *)g4_m128_ptr<int32_t>(v28));
            v30 =g4_m128_lane<float>(v40, 0) >= -3.4028235e38f
                ?g4_m128_lane<int32_t>(v40, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v40, *(__m128 *)&dword_1C7B5E0), 0)
                :g4_m128_lane<int32_t>(v4, 0);
            v75[0] = v30;
g4_m128_raw(v31) = LODWORD(v69);
g4_m128_lane<float>(v31, 0) = (float)(v69 * v25) + (float)(v66 *g4_m128_lane<float>(v26, 0));
            v32 =g4_m128_lane<float>(v31, 0) < -3.4028235e38f
                ?g4_m128_lane<int32_t>(v4, 0)
                :g4_m128_lane<int32_t>(v31, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v31, *(__m128 *)&dword_1C7B5E0), 0);
            v75[3] = v32;
g4_m128_raw(v33) = LODWORD(v61);
g4_m128_lane<float>(v33, 0) = (float)(v61 * v27) + (float)(v59 * *(float *)g4_m128_ptr<int32_t>(v28));
            v34 =g4_m128_lane<float>(v33, 0) < -3.4028235e38f
                ?g4_m128_lane<int32_t>(v4, 0)
                :g4_m128_lane<int32_t>(v33, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v33, *(__m128 *)&dword_1C7B5E0), 0);
            v75[1] = v34;
g4_m128_raw(v35) = LODWORD(v61);
g4_m128_lane<float>(v35, 0) = (float)(v61 * v25) + (float)(v59 *g4_m128_lane<float>(v26, 0));
            v36 =g4_m128_lane<float>(v35, 0) < -3.4028235e38f
                ?g4_m128_lane<int32_t>(v4, 0)
                :g4_m128_lane<int32_t>(v35, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v35, *(__m128 *)&dword_1C7B5E0), 0);
            v75[4] = v36;
            *(float *)g4_m128_ptr<int32_t>(v28) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v28) * v55) + (float)(v27 * v57)) + v52;
            v37 = *(float *)g4_m128_ptr<int32_t>(v28) < -3.4028235e38f
                ?g4_m128_lane<int32_t>(v4, 0)
                :g4_m128_lane<int32_t>(v28, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(g4_m128_raw(G4_BITCAST<__m128>(v28)), *(__m128 *)&dword_1C7B5E0), 0);
            v75[2] = v37;
g4_m128_lane<float>(v26, 0) = (float)((float)(g4_m128_lane<float>(v26, 0) * v55) + (float)(v25 * v57)) + v50;
            v38 =g4_m128_lane<float>(v26, 0) < -3.4028235e38f
                ?g4_m128_lane<int32_t>(v4, 0)
                :g4_m128_lane<int32_t>(v26, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v26, *(__m128 *)&dword_1C7B5E0), 0);
            --v24;
            std::memcpy(v76, v75, 20);
            v75[5] = v38;
            v76[5] = v38;
            if ( v24 == -1 )
              break;
g4_m128_raw(v28) = v76[0];
            v27 = *(float *)&v76[1];
g4_m128_raw(v26) = v76[3];
            v39 = *(float **)(*((uint32_t *)v77[0] + v24) + 68);
            v69 = v39[3];
            v66 = *v39;
            v61 = v39[4];
            v59 = v39[1];
            v57 = v39[5];
            v52 = *(float *)&v76[2];
            v55 = v39[2];
            v25 = *(float *)&v76[4];
            v50 = *(float *)&v76[5];
          }
          gameswf::Matrix::transform((gameswf::Matrix::Self *)v76, (gameswf::Rect::Self *)&v71);
          goto LABEL_31;
        }
        v7 = v77[0];
        v68 = v77[2];
        v8 = v9;
        v6 = (gameswf::Self **)v6[14];
        if ( ++v9 > (int)(uintptr_t)(v77[2]) && v77[3] == nullptr )
        {
          v12 = (gameswf::Self *)(v9 + (v9 >> 1));
          v77[2] = v12;
          if ( v12 != nullptr )
          {
            if ( v77[0] != nullptr )
              v7 = (gameswf::Self *)gameswf::realloc_internal(v77[0], 4 * (uint32_t)(uintptr_t)(v12), 4 * (uint32_t)(uintptr_t)(v68));
            else
              v7 = (gameswf::Self *)gameswf::malloc_internal(4 * (uint32_t)(uintptr_t)(v12));
            v77[0] = v7;
            v8 = (int)(uintptr_t)(v77[1]);
g4_m128_raw(v4) =g4_m128_lane<uint32_t>(v4, 0);
          }
          else
          {
            if ( v77[0] != nullptr )
            {
              gameswf::free_internal(v77[0]);
              v8 = (int)(uintptr_t)(v77[1]);
g4_m128_raw(v4) =g4_m128_lane<uint32_t>(v4, 0);
            }
            v77[0] = nullptr;
            v7 = nullptr;
          }
        }
      }
      v19 = (gameswf::Character::Self *)(v63[14]);
      v75[0] = v71;
      v75[1] = v72;
      v75[2] = v73;
      v75[3] = v74;
      if ( v19 != nullptr )
      {
        if ( *((uint8_t *)v63[13] + 2) != 0 )
        {
          WorldMatrix = gameswf::Character::getWorldMatrix(v19);
          gameswf::Matrix::transform((gameswf::Matrix::Self *)WorldMatrix, (gameswf::Rect::Self *)v75);
        }
        else
        {
          sub_7E5ED0(v63 + 13, nullptr);
          v63[14] = nullptr;
        }
      }
      goto LABEL_30;
    }
    sub_7E5ED0(v63 + 13, nullptr);
    v63[14] = nullptr;
  }
  v75[0] = v71;
  v75[1] = v72;
  v75[2] = v73;
  v75[3] = v74;
LABEL_30:
  memset(v76, 0, sizeof(v76));
  v76[0] = 1065353216;
  v76[4] = 1065353216;
  v13 = gameswf::Character::getWorldMatrix(v65);
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v76, (const gameswf::Matrix::Self *)v13);
  gameswf::Matrix::transform((gameswf::Matrix::Self *)v76, (gameswf::Rect::Self *)v75);
  v71 = v75[0];
  v72 = v75[1];
  v73 = v75[2];
  v74 = v75[3];
LABEL_31:
  v14 = v77[1];
  if ( (int)(uintptr_t)(v77[1]) < 0 )
  {
    v15 = 4 * (int)(uintptr_t)(v77[1]);
    do
    {
      if ( (gameswf::Self *)((char *)v77[0] + v15) != nullptr )
        *(uint32_t *)((char *)v77[0] + v15) = 0;
      v15 += 4;
      v14 = (gameswf::Self *)((char *)v14 + 1);
    }
    while ( v14 != nullptr );
  }
  v77[1] = nullptr;
  if ( v77[3] == nullptr )
  {
    v16 = v77[2];
    v77[2] = nullptr;
    if ( v77[0] != nullptr )
    {
      v41 = (gameswf::Player::Self *)(4 * (uint32_t)(uintptr_t)(v16));
      gameswf::free_internal(v77[0]);
    }
    v77[0] = nullptr;
  }
LABEL_40:
  gameswf::Rect::twipsToPixels();
  Rectangle = (float *)gameswf::createRectangle(v63[4], v41);
  Rectangle[10] = *(float *)&v71;
  Rectangle[11] = *(float *)&v72;
  Rectangle[12] = *(float *)&v73;
  Rectangle[13] = *(float *)&v74;
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, (gameswf::ASObject::Self *)Rectangle);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObject::createClass  (binary VA: 0x11528f0)
// Original: gameswf::ASDisplayObject::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASDisplayObject::createClass(gameswf::ASDisplayObject::Self *self)
{
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef gameswf::Self **_g4_t_v3;
  typedef uint8_t _g4_t_v4[12];
  typedef uint8_t _g4_t_v5[12];
  typedef uint8_t _g4_t_v6[12];
  typedef uint8_t _g4_t_v7[12];
  typedef uint8_t _g4_t_v8[12];
  typedef uint8_t _g4_t_v9[12];
  typedef uint8_t _g4_t_v10[20];
  typedef uint8_t _g4_t_v11[20];
  typedef uint8_t _g4_t_v12[20];
  typedef uint8_t _g4_t_v13[20];
  typedef uint8_t _g4_t_v14[20];
  typedef uint8_t _g4_t_v15[20];
  typedef uint8_t _g4_t_v16[20];
  typedef uint8_t _g4_t_v17[48];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_Class)) > _g4_s0 ? (8u + sizeof(_g4_t_Class)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v4)) > _g4_s2 ? (24u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v5)) > _g4_s3 ? (36u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v6)) > _g4_s4 ? (48u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v7)) > _g4_s5 ? (60u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v8)) > _g4_s6 ? (72u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v9)) > _g4_s7 ? (84u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v10)) > _g4_s8 ? (96u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v11)) > _g4_s9 ? (116u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (136u + sizeof(_g4_t_v12)) > _g4_s10 ? (136u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (156u + sizeof(_g4_t_v13)) > _g4_s11 ? (156u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (176u + sizeof(_g4_t_v14)) > _g4_s12 ? (176u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (196u + sizeof(_g4_t_v15)) > _g4_s13 ? (196u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (216u + sizeof(_g4_t_v16)) > _g4_s14 ? (216u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (236u + sizeof(_g4_t_v17)) > _g4_s15 ? (236u + sizeof(_g4_t_v17)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 36u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 48u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 60u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 72u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 84u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 96u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 116u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 136u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 156u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 176u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 196u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 216u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 236u);

  sub_776320((gameswf::String::Self *)v11, (gameswf::Self *)"EventDispatcher");
  sub_776320((gameswf::String::Self *)v10, (gameswf::Self *)"flash.events");
  Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                (gameswf::ASDisplayObject::Self *)((char *)self + 236),
                                (const gameswf::String::Self *)v10,
                                (const gameswf::String::Self *)v11,
                                true);
  sub_59CE50((int)(uintptr_t)(v10));
  sub_59CE50((int)(uintptr_t)(v11));
  sub_776320((gameswf::String::Self *)v12, (gameswf::Self *)"DisplayObject");
  v4[0] = 0;
  v4[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v4, (int)(uintptr_t)(gameswf::ASDisplayObject::init));
  v3 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v3,
    self,
    Class,
    (const gameswf::String::Self *)v12,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASDisplayObject::newOp,
    (const gameswf::ASValue::Self *)v4,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  sub_59CE50((int)(uintptr_t)(v12));
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)(gameswf::ASDisplayObject::getBounds));
  sub_776320((gameswf::String::Self *)v13, (gameswf::Self *)"getBounds");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v13, (const gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v13));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  v6[0] = 0;
  v6[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v6, (int)(uintptr_t)(gameswf::ASDisplayObject::localToGlobal));
  sub_776320((gameswf::String::Self *)v14, (gameswf::Self *)"localToGlobal");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v14, (const gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v14));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)(gameswf::ASDisplayObject::globalToLocal));
  sub_776320((gameswf::String::Self *)v15, (gameswf::Self *)"globalToLocal");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v15, (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v15));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::ASDisplayObject::hitTestObject));
  sub_776320((gameswf::String::Self *)v16, (gameswf::Self *)"hitTestObject");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v16, (const gameswf::ASValue::Self *)v8);
  sub_59CE50((int)(uintptr_t)(v16));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  v9[0] = 0;
  v9[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)(uintptr_t)(gameswf::ASDisplayObject::hitTestPoint));
  sub_776320((gameswf::String::Self *)v17, (gameswf::Self *)"hitTestPoint");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v17, (const gameswf::ASValue::Self *)v9);
  sub_59CE50((int)(uintptr_t)(v17));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObject::localToGlobal  (binary VA: 0x1152cb0)
// Original: gameswf::ASDisplayObject::localToGlobal
// ----------------------------------------------------------------------------
void gameswf::ASDisplayObject::localToGlobal(int a1)
{
  gameswf::Character::Self *v1;
  int v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  gameswf::Self *Point;
  int v7;
  char *WorldMatrix;
  char v9;
  int v10;
  int v11;
  int v12;

  v1 = *(gameswf::Character::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 1) == 0 )
    v1 = nullptr;
  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    v2 = *(uint32_t *)(a1 + 12);
    v3 = *(uint32_t *)v2 + 12 * *(uint32_t *)(a1 + 20);
    v4 = 0;
    if ( *(uint8_t *)v3 == 5 )
    {
      v4 = *(uint32_t *)(v3 + 4);
      if ( v4 != 0 )
      {
        v12 = *(uint32_t *)(v3 + 4);
        v9 = G4_VCALL<int>(v4, 8, 29);
        v2 = *(uint32_t *)(a1 + 12);
        v4 = v12;
        if ( v9 == 0 )
          v4 = 0;
      }
    }
    v5 = *(gameswf::Self **)(v2 + 212);
    if ( v5 != nullptr && *(uint8_t *)(*(uint32_t *)(v2 + 208) + 2) == 0 )
    {
      v10 = v4;
      sub_7E5ED0((gameswf::Self **)(v2 + 208), nullptr);
      *(uint32_t *)(v2 + 212) = 0;
      v5 = nullptr;
      v4 = v10;
    }
    v11 = v4;
    Point = (gameswf::Self *)gameswf::createPoint(v5, nullptr, 0.0);
    v7 = *(uint32_t *)(v11 + 40);
    *((uint32_t *)Point + 11) = *(uint32_t *)(v11 + 44);
    *((uint32_t *)Point + 10) = v7;
    WorldMatrix = gameswf::Character::getWorldMatrix(v1);
    gameswf::transformPoint(Point, (gameswf::ASPoint::Self *)WorldMatrix);
    gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, Point);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObject::globalToLocal  (binary VA: 0x11550c0)
// Original: gameswf::ASDisplayObject::globalToLocal
// ----------------------------------------------------------------------------
void gameswf::ASDisplayObject::globalToLocal(int a1)
{
  uint32_t *v1;
  gameswf::ASDisplayObjectContainer::Self *v2;
  bool v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  gameswf::Root::Self *Root;
  int MovieHeight;
  gameswf::Root::Self *v10;
  int MovieWidth;
  gameswf::Root::Self *v12;
  int v13;
  gameswf::Root::Self *v14;
  int v15;
  float v16; // xmm1_4
  float v17; // xmm0_4
  gameswf::ASObject::Self *v18;
  float v19; // xmm0_4
  float v20; // xmm2_4
  char *WorldMatrix;
  int v22;
  char v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef gameswf::ASObject::Self *_g4_t_Point;
  typedef int _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef uint32_t _g4_t_v40[16];
  typedef uint32_t _g4_t_v41[16];
  typedef float _g4_t_v42[19];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v26)) > _g4_s2 ? (28u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v27)) > _g4_s3 ? (44u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v28)) > _g4_s4 ? (44u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v29)) > _g4_s5 ? (72u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v30)) > _g4_s6 ? (76u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v31)) > _g4_s7 ? (80u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v32)) > _g4_s8 ? (84u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v33)) > _g4_s9 ? (88u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_Point)) > _g4_s10 ? (92u + sizeof(_g4_t_Point)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v35)) > _g4_s11 ? (96u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v36)) > _g4_s12 ? (96u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v37)) > _g4_s13 ? (112u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v38)) > _g4_s14 ? (116u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v39)) > _g4_s15 ? (120u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v40)) > _g4_s16 ? (124u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (188u + sizeof(_g4_t_v41)) > _g4_s17 ? (188u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (252u + sizeof(_g4_t_v42)) > _g4_s18 ? (252u + sizeof(_g4_t_v42)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_Point &Point = *reinterpret_cast<_g4_t_Point *>(_g4_sf + 92u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 188u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 252u);

  v1 = (uint32_t *)a1;
  v2 = *(gameswf::ASDisplayObjectContainer::Self **)(a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a1 + 4), 1) == 0;
    v1 = (uint32_t *)a1;
    if ( v3 )
      v2 = nullptr;
  }
  if ( v1[4] == 1 )
  {
    v4 = v1[3];
    v35 = 0;
    v5 = *(uint32_t *)v4 + 12 * v1[5];
    if ( *(uint8_t *)v5 == 5 )
    {
      v22 = *(uint32_t *)(v5 + 4);
      v35 = v22;
      if ( v22 != 0 )
      {
        v23 = G4_VCALL<int>(v22, 8, 29);
        v4 = *(uint32_t *)(a1 + 12);
        if ( v23 == 0 )
          v35 = 0;
      }
    }
    v6 = *(gameswf::Self **)(v4 + 212);
    if ( v6 != nullptr && *(uint8_t *)(*(uint32_t *)(v4 + 208) + 2) == 0 )
    {
      sub_7E5ED0((gameswf::Self **)(v4 + 208), nullptr);
      *(uint32_t *)(v4 + 212) = 0;
      v6 = nullptr;
    }
    Point = (gameswf::ASObject::Self *)gameswf::createPoint(v6, nullptr, 0.0);
    v7 = *(uint32_t *)(v35 + 44);
    *((uint32_t *)Point + 10) = *(uint32_t *)(v35 + 40);
    *((uint32_t *)Point + 11) = v7;
    if ( v2 != nullptr
      && G4_VCALL<uint8_t>(v2, 8, 4) != 0
      && (uint8_t)gameswf::ASDisplayObjectContainer::hasWorldTransform(v2) != 0 )
    {
      memset(v40, 0, sizeof(v40));
      v40[15] = 1065353216;
      v40[10] = 1065353216;
      v40[5] = 1065353216;
      v40[0] = 1065353216;
      gameswf::ASDisplayObjectContainer::getWorldTransform(v2, (gameswf::Transform::Self *)v40);
      memset(v41, 0, sizeof(v41));
      v41[15] = 1065353216;
      v41[10] = 1065353216;
      v41[5] = 1065353216;
      v41[0] = 1065353216;
      Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)v2);
      MovieHeight = gameswf::Root::getMovieHeight(Root);
      v10 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)v2);
      MovieWidth = gameswf::Root::getMovieWidth(v10);
      gameswf::Transform::postTranslate(
        (gameswf::Transform::Self *)v41,
        (float)(MovieWidth / -2),
        (float)(MovieHeight / -2),
        0.0);
      gameswf::Transform::postMultiply((gameswf::Transform::Self *)v41, (const gameswf::Transform::Self *)v40);
      v26 = *(float *)(gameswf::ASObject::getRoot((gameswf::Player::Self **)v2) + 60);
      v24 = *(float *)(v35 + 44);
      v12 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)v2);
      v13 = gameswf::Root::getMovieHeight(v12);
      v27 = *(float *)(v35 + 40);
      v25 = v24 - (float)(v13 / 2);
      v14 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)v2);
      v15 = gameswf::Root::getMovieWidth(v14);
      v36 = *(float *)&v41[3];
      v37 = *(float *)&v41[2];
      v30 = *(float *)&v41[7];
      v38 = *(float *)&v41[6];
      v29 = *(float *)&v41[11];
      v39 = *(float *)&v41[10];
      v28 = v27 - (float)(v15 / 2);
      gameswf::vector3df::normalize((gameswf::vector3df::Self *)&v37);
      v16 = (float)((float)(v28 * v37) + (float)(v25 * v38)) + (float)(v26 * v39);
      if ( v16 != 0.0 )
      {
        v17 = (float)((float)((float)((float)(v38 * v30) + (float)(v39 * v29)) + (float)(v37 * v36)) + (float)(v26 * v39))
            / v16;
        v32 = v25 * v17;
        v31 = v28 * v17;
        v33 = (float)(v17 * v26) - v26;
      }
      std::memcpy(v42, v41, 64);
      gameswf::Transform::invert((gameswf::Transform::Self *)v42);
      v18 = Point;
      v19 = v33 * v42[2];
      v20 = (float)((float)(v31 * v42[0]) + (float)(v32 * v42[1])) + v42[3];
      *((float *)Point + 11) = (float)((float)((float)(v31 * v42[4]) + (float)(v32 * v42[5])) + v42[7])
                             + (float)(v33 * v42[6]);
      *((float *)Point + 10) = v20 + v19;
    }
    else
    {
      memset(v42, 0, 0x18u);
      v42[0] = 1.0;
      v42[4] = 1.0;
      WorldMatrix = gameswf::Character::getWorldMatrix(v2);
      gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v42, (const gameswf::Matrix::Self *)WorldMatrix);
      gameswf::transformPoint(Point, (gameswf::ASPoint::Self *)v42);
      v18 = Point;
    }
    gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v18);
  }
}


