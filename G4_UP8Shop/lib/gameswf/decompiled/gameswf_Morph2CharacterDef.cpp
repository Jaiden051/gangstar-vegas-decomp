#include "Core/Utils/DecompTypes.h"
#include "gameswf_Morph2CharacterDef.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Morph2CharacterDef::Destroy  (binary VA: 0x10a69a0)
// Original: gameswf::Morph2CharacterDef::~Morph2CharacterDef
// ----------------------------------------------------------------------------
void gameswf::Morph2CharacterDef::Destroy(gameswf::Morph2CharacterDef::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  void *v3;

  v1 = *((gameswf::Self **)self + 33);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EAE8);
  if ( v1 != nullptr )
  {
    (**(void (***)(gameswf::Self *))v1)(v1);
    v3 = nullptr;
    gameswf::free_internal(v1);
  }
  v2 = *((gameswf::Self **)self + 32);
  if ( v2 != nullptr )
  {
    (**(void (***)(uint32_t, void *))v2)(*((uint32_t *)self + 32), v3);
    gameswf::free_internal(v2);
  }
  gameswf::ShapeCharacterDef::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Morph2CharacterDef::Destroy_ea10a6a30  (binary VA: 0x10a6a30)
// Original: gameswf::Morph2CharacterDef::~Morph2CharacterDef
// ----------------------------------------------------------------------------
void gameswf::Morph2CharacterDef::Destroy_ea10a6a30(gameswf::Morph2CharacterDef::Self *self)
{
  gameswf::Morph2CharacterDef::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Morph2CharacterDef::display  (binary VA: 0x10a6a70)
// Original: gameswf::Morph2CharacterDef::display
// ----------------------------------------------------------------------------
int gameswf::Morph2CharacterDef::display(gameswf::Morph2CharacterDef::Self *self, gameswf::Character::Self *a2)
{
  int v2;
  int v3;
  gameswf::FillStyle::Self *v4;
  int v5;
  int v6;
  int v7;
  float v8; // xmm0_4
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  char *WorldMatrix;
  int v21;
  gameswf::Self *v22;
  bool v23;
  gameswf::Self *v24;
  int v26;
  gameswf::Self *v27;
  typedef size_t _g4_t_v28;
  typedef const gameswf::FillStyle::Self *_g4_t_v29;
  typedef const gameswf::FillStyle::Self *_g4_t_v30;
  typedef float _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef gameswf::Self *_g4_t_v34;
  typedef gameswf::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef float _g4_t_v38;
  typedef int _g4_t_v39;
  typedef float _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef g4_int128_t _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t _g4_t_v56[15];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v29)) > _g4_s1 ? (12u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v30)) > _g4_s2 ? (16u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v31)) > _g4_s3 ? (40u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v32)) > _g4_s4 ? (76u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v33)) > _g4_s5 ? (76u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v34)) > _g4_s6 ? (80u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v35)) > _g4_s7 ? (80u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v36)) > _g4_s8 ? (84u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v37)) > _g4_s9 ? (84u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v38)) > _g4_s10 ? (84u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v39)) > _g4_s11 ? (88u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v40)) > _g4_s12 ? (88u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v41)) > _g4_s13 ? (92u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v42)) > _g4_s14 ? (92u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v43)) > _g4_s15 ? (96u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v44)) > _g4_s16 ? (100u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v45)) > _g4_s17 ? (100u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v46)) > _g4_s18 ? (104u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v47)) > _g4_s19 ? (108u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v48)) > _g4_s20 ? (112u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v49)) > _g4_s21 ? (128u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v50)) > _g4_s22 ? (144u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v51)) > _g4_s23 ? (148u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v52)) > _g4_s24 ? (152u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v53)) > _g4_s25 ? (156u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_v54)) > _g4_s26 ? (160u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v55)) > _g4_s27 ? (164u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (168u + sizeof(_g4_t_v56)) > _g4_s28 ? (168u + sizeof(_g4_t_v56)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 100u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 104u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 108u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 128u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 152u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 156u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 164u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 168u);

  v31 = *((float *)a2 + 34);
  gameswf::Rect::setLerp(
    (gameswf::Rect::Self *)&v49,
    (const gameswf::Rect::Self *)(*((uint32_t *)self + 32) + 76),
    (const gameswf::Rect::Self *)(*((uint32_t *)self + 33) + 76),
    v31);
  *(g4_int128_t *)((char *)self + 76) = v49;
  if ( *((int *)self + 8) > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v30 = (const gameswf::FillStyle::Self *)(v2 + *(uint32_t *)(*((uint32_t *)self + 33) + 28));
      v29 = (const gameswf::FillStyle::Self *)(v2 + *(uint32_t *)(*((uint32_t *)self + 32) + 28));
      v4 = (gameswf::FillStyle::Self *)(v2 + *((uint32_t *)self + 7));
      v2 += 84;
      gameswf::FillStyle::setLerp(v4, v29, v30, v31);
    }
    while ( *((uint32_t *)self + 8) > v3 );
  }
  if ( *((int *)self + 12) > 0 )
  {
    v5 = 0;
    v36 = 0;
    do
    {
      v34 = (gameswf::Self *)(v5 + *((uint32_t *)self + 11));
      v6 = v5 + *(uint32_t *)(*((uint32_t *)self + 32) + 44);
      v7 = v5 + *(uint32_t *)(*((uint32_t *)self + 33) + 44);
      v5 += 108;
      v8 = (float)(uint16_t)(int)*(float *)(v6 + 4);
      *((float *)v34 + 1) = (float)((float)0 * 65536.0)
                          + (float)(uint16_t)(int)(float)((float)((float)((float)((float)0 * 65536.0) + v8) + 0.5)
                                                                + (float)((float)((float)((float)((float)0 * 65536.0)
                                                                                        + (float)(uint16_t)(int)*(float *)(v7 + 4))
                                                                                - (float)((float)((float)0 * 65536.0)
                                                                                        + v8))
                                                                        * v31));
      gameswf::Color::setLerp(
        (gameswf::Self *)((char *)v34 + 8),
        (const gameswf::Color::Self *)(v6 + 8),
        (const gameswf::Color::Self *)(v7 + 8),
        v31);
      ++v36;
    }
    while ( *((uint32_t *)self + 12) > v36 );
  }
  if ( *((int *)self + 16) > 0 )
  {
    v46 = 0;
    v43 = 0;
    v39 = 0;
    v47 = 0;
    do
    {
      v9 = *((uint32_t *)self + 15) + v46;
      v10 = *(uint32_t *)(*((uint32_t *)self + 32) + 60) + v46;
      v41 = (uint32_t *)(v9 + 20);
      *(uint32_t *)v9 = *(uint32_t *)(v10 + 4);
      *(uint32_t *)(v9 + 4) = *(uint32_t *)v10;
      *(uint32_t *)(v9 + 8) = *(uint32_t *)(v10 + 8);
      *(float *)(v9 + 12) = (float)((float)(*(float *)(*(uint32_t *)(*((uint32_t *)self + 33) + 60) + 40 * v43 + 12)
                                          - *(float *)(v10 + 12))
                                  * v31)
                          + *(float *)(v10 + 12);
      *(float *)(v9 + 16) = (float)((float)(*(float *)(*(uint32_t *)(*((uint32_t *)self + 33) + 60) + 40 * v43 + 16)
                                          - *(float *)(v10 + 16))
                                  * v31)
                          + *(float *)(v10 + 16);
      v37 = *(uint32_t *)(v10 + 24);
      v11 = *(uint32_t *)(v9 + 24);
      if ( v37 != 0 )
      {
        v12 = *(uint32_t *)(v9 + 28);
        if ( v37 > v12 && *(uint32_t *)(v9 + 32) == 0 )
        {
          v26 = v37 + (v37 >> 1);
          v23 = v26 == 0;
          v45 = v26;
          *(uint32_t *)(v9 + 28) = v26;
          v27 = *(gameswf::Self **)(v9 + 20);
          if ( v23 )
          {
            if ( v27 != nullptr )
            {
              v32 = v11;
              v28 = 16 * v12;
              gameswf::free_internal(v27);
              v11 = v32;
            }
            *(uint32_t *)(v9 + 20) = 0;
          }
          else
          {
            v33 = v11;
            if ( v27 != nullptr )
            {
              *(uint32_t *)(v9 + 20) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)(v9 + 20), 16 * v45, 16 * v12));
            }
            else
            {
              v28 = 0;
              *(uint32_t *)(v9 + 20) = gameswf::malloc_internal(16 * v45);
            }
            v11 = v33;
          }
        }
      }
      if ( v37 > v11 )
      {
        v44 = v9;
        v48 = v10;
        v13 = 16 * v11;
        v14 = v11;
        do
        {
          if ( *v41 + v13 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v41 + v13));
          ++v14;
          v13 += 16;
        }
        while ( v14 != v37 );
        v9 = v44;
        v10 = v48;
      }
      *(uint32_t *)(v9 + 24) = v37;
      if ( v37 > 0 )
      {
        v42 = 0;
        v35 = *(gameswf::Self **)(*((uint32_t *)self + 33) + 60);
        v15 = 0;
        do
        {
          v16 = 16 * v15;
          *(float *)(*(uint32_t *)(v9 + 20) + v16) = (float)((float)(*(float *)(*((uint32_t *)v35 + 10 * v43 + 5) + 16 * v39)
                                                                 - *(float *)(*(uint32_t *)(v10 + 20) + v16))
                                                         * v31)
                                                 + *(float *)(*(uint32_t *)(v10 + 20) + v16);
          v17 = *(float *)(*(uint32_t *)(v10 + 20) + v16 + 4);
          *(float *)(*(uint32_t *)(v9 + 20) + v16 + 4) = (float)((float)(*(float *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 33) + 60)
                                                                                            + 40 * v43
                                                                                            + 20)
                                                                                + 16 * v39
                                                                                + 4)
                                                                     - v17)
                                                             * v31)
                                                     + v17;
          v18 = *(float *)(*(uint32_t *)(v10 + 20) + v16 + 8);
          *(float *)(*(uint32_t *)(v9 + 20) + v16 + 8) = (float)((float)(*(float *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 33) + 60)
                                                                                            + 40 * v43
                                                                                            + 20)
                                                                                + 16 * v39
                                                                                + 8)
                                                                     - v18)
                                                             * v31)
                                                     + v18;
          v19 = *(float *)(*(uint32_t *)(v10 + 20) + v16 + 12);
          *(float *)(*(uint32_t *)(v9 + 20) + v16 + 12) = (float)((float)(*(float *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 33) + 60)
                                                                                             + 40 * v43
                                                                                             + 20)
                                                                                 + 16 * v39++
                                                                                 + 12)
                                                                      - v19)
                                                              * v31)
                                                      + v19;
          v35 = *(gameswf::Self **)(*((uint32_t *)self + 33) + 60);
          if ( v39 >= *((uint32_t *)v35 + 10 * v43 + 6) )
          {
            ++v43;
            v39 = 0;
          }
          v15 = ++v42;
        }
        while ( *(uint32_t *)(v9 + 24) > v42 );
      }
      ++v47;
      v46 += 40;
    }
    while ( *((uint32_t *)self + 16) > v47 );
  }
  WorldMatrix = gameswf::Character::getWorldMatrix(a2);
  v50 = *(float *)WorldMatrix;
  v51 = *((float *)WorldMatrix + 1);
  v52 = *((uint32_t *)WorldMatrix + 2);
  v53 = *((float *)WorldMatrix + 3);
  v54 = *((float *)WorldMatrix + 4);
  v55 = *((uint32_t *)WorldMatrix + 5);
  std::memcpy(v56, gameswf::Character::getWorldCxForm(a2), 32);
  v21 = *((uint32_t *)a2 + 14);
  v40 = fsqrt(fmaxf((float)(v54 * v54) + (float)(v53 * v53), (float)(v51 * v51) + (float)(v50 * v50)));
  if ( v21 != 0 )
  {
    v22 = *((gameswf::Self **)a2 + 13);
    if ( *((uint8_t *)v22 + 2) == 0 )
    {
      v23 = (*(uint16_t *)v22)-- == 1;
      if ( v23 )
      {
        v28 = 0;
        gameswf::free_internal(v22);
      }
      v21 = 0;
      *((uint32_t *)a2 + 13) = 0;
      *((uint32_t *)a2 + 14) = 0;
    }
  }
  v38 = ((long double (*)(int, size_t))*(uint32_t *)(*(uint32_t *)v21 + 140))(v21, v28);
  v24 = *((gameswf::Self **)self + 38);
  if ( v31 != *((float *)self + 37) )
  {
    if ( v24 != nullptr )
    {
      gameswf::MeshSet::Destroy(*((gameswf::MeshSet::Self **)self + 38));
      gameswf::free_internal(v24);
    }
    *((float *)self + 37) = v31;
    v24 = (gameswf::Self *)opNew(0x14u);
    gameswf::MeshSet::Construct(v24, self, (float)(20.0 / (float)(v38 * v40)) * 0.75);
    *((uint32_t *)self + 38) = (uint32_t)(uintptr_t)(v24);
  }
  return gameswf::MeshSet::display(v24, &v50, v56, (char *)self + 28, (char *)self + 44);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Morph2CharacterDef::Construct  (binary VA: 0x10a7210)
// Original: gameswf::Morph2CharacterDef::Morph2CharacterDef
// ----------------------------------------------------------------------------
gameswf::Morph2CharacterDef::Self * gameswf::Morph2CharacterDef::Construct(gameswf::Morph2CharacterDef::Self *self, gameswf::Player::Self *a2)
{
  gameswf::ShapeCharacterDef::Self *v2;
  gameswf::ShapeCharacterDef::Self *v3;
  gameswf::Morph2CharacterDef::Self *result;

  gameswf::ShapeCharacterDef::ShapeCharacterDef(self, a2);
  *((uint32_t *)self + 37) = -1082130432;
  *((uint32_t *)self + 38) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EAE8);
  v2 = (gameswf::ShapeCharacterDef::Self *)opNew(0x80u);
  gameswf::ShapeCharacterDef::ShapeCharacterDef(v2, a2);
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(v2);
  v3 = (gameswf::ShapeCharacterDef::Self *)opNew(0x80u);
  result = (gameswf::Morph2CharacterDef::Self *)(gameswf::ShapeCharacterDef::ShapeCharacterDef(v3, a2));
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)(v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Morph2CharacterDef::read  (binary VA: 0x10a72d0)
// Original: gameswf::Morph2CharacterDef::read
// ----------------------------------------------------------------------------
int gameswf::Morph2CharacterDef::read(__m128 a1, gameswf::Morph2CharacterDef::Self *self, gameswf::Stream::Self *a3, unsigned int a4, bool a5, gameswf::MovieDefinitionSub::Self *a6)
{
  int U8;
  uint8_t v7;
  uint32_t *v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  gameswf::RefCounted::Self *v13;
  bool v14;
  gameswf::RefCounted::Self *v15;
  uint32_t *v16;
  int v17;
  int v18;
  char *v19;
  char *v20;
  gameswf::RefCounted::Self *v21;
  gameswf::RefCounted::Self *v22;
  int v23;
  __m128 v24;
  int UInt;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  char *v30;
  char *v31;
  int v32;
  int v33;
  int v34;
  gameswf::gradientRecord::Self *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  gameswf::RefCounted::Self *v40;
  gameswf::RefCounted::Self *v41;
  int v42;
  int v43;
  int v44;
  char *v45;
  char *v46;
  int v47;
  int v48;
  int v49;
  gameswf::gradientRecord::Self *v50;
  int v51;
  int v52;
  int v53;
  int v54;
  gameswf::RefCounted::Self *v55;
  gameswf::RefCounted::Self *v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  uint32_t *v64;
  int v65;
  int v66;
  uint32_t *v67;
  int v68;
  int v69;
  int v70;
  uint32_t *v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int result;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  gameswf::Morph2CharacterDef::Self *v88;
  int v89;
  int v90;
  int v91;
  int v92;
  uint8_t v93;
  int v94;
  int v95;
  int v96;
  int v97;
  __m128 v98;
  __m128 v99;
  __m128 v100;
  __m128 v101;
  uint32_t v102; // xmm0_4
  __m128 v103;
  uint32_t v104; // xmm2_4
  __m128 v105;
  __m128 v106;
  uint32_t v107; // xmm3_4
  uint32_t v108; // xmm2_4
  uint32_t v109; // xmm1_4
  float v110; // xmm0_4
  __m128 v111;
  __m128 v112;
  __m128 v113;
  uint32_t v114; // xmm0_4
  __m128 v115;
  uint32_t v116; // xmm2_4
  __m128 v117;
  __m128 v118;
  uint32_t v119; // xmm3_4
  uint32_t v120; // xmm2_4
  uint32_t v121; // xmm1_4
  uint8_t v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  gameswf::gradientRecord::Self *v131;
  int v132;
  int v133;
  int v134;
  gameswf::gradientRecord::Self *v135;
  int v136;
  int v137;
  gameswf::Self *v138;
  int v139;
  int v140;
  int v141;
  gameswf::gradientRecord::Self *v142;
  int v143;
  int v144;
  gameswf::Self *v145;
  int v146;
  __m128 v147;
  __m128 v148;
  __m128 v149;
  __m128 v150;
  uint32_t v151; // xmm1_4
  __m128 v152;
  uint32_t v153; // xmm0_4
  __m128 v154;
  __m128 v155;
  uint32_t v156; // xmm0_4
  uint32_t v157; // xmm6_4
  uint32_t v158; // xmm4_4
  int32_t v159; // xmm2_4
  uint8_t v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  gameswf::gradientRecord::Self *v169;
  uint16_t U16;
  gameswf::RefCounted::Self *v171;
  gameswf::RefCounted::Self *v172;
  gameswf::RefCounted::Self *v173;
  __m128 v174;
  void *v175;
  gameswf::Self *v176;
  void *v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  char *v184;
  char *v185;
  int v186;
  int v187;
  int v188;
  gameswf::gradientRecord::Self *v189;
  int v190;
  int v191;
  int v192;
  int v193;
  gameswf::RefCounted::Self *v194;
  gameswf::RefCounted::Self *v195;
  int v196;
  int v197;
  int v198;
  char *v199;
  char *v200;
  int v201;
  int v202;
  int v203;
  gameswf::gradientRecord::Self *v204;
  int v205;
  int v206;
  int v207;
  int v208;
  gameswf::RefCounted::Self *v209;
  gameswf::RefCounted::Self *v210;
  int v211;
  int v212;
  uint16_t v213;
  gameswf::RefCounted::Self *v214;
  gameswf::RefCounted::Self *v215;
  gameswf::RefCounted::Self *v216;
  __m128 v217;
  int v218;
  int v219;
  int v220;
  int v221;
  gameswf::Self *v222;
  gameswf::Self *v223;
  gameswf::Self *v224;
  typedef int _g4_t_v225;
  typedef int _g4_t_v226;
  typedef int _g4_t_v227;
  typedef char *_g4_t_v228;
  typedef char *_g4_t_v229;
  typedef char *_g4_t_v230;
  typedef char *_g4_t_v231;
  typedef int _g4_t_v232;
  typedef int _g4_t_v233;
  typedef int _g4_t_v234;
  typedef int _g4_t_v235;
  typedef int _g4_t_v236;
  typedef int _g4_t_v237;
  typedef int _g4_t_v238;
  typedef uint8_t _g4_t_v239;
  typedef int _g4_t_v240;
  typedef char *_g4_t_v241;
  typedef int _g4_t_v242;
  typedef char *_g4_t_v243;
  typedef int _g4_t_v244;
  typedef int _g4_t_v245;
  typedef int _g4_t_v246;
  typedef int _g4_t_v247;
  typedef int _g4_t_v248;
  typedef int _g4_t_v249;
  typedef char *_g4_t_v250;
  typedef int _g4_t_v251;
  typedef char *_g4_t_v252;
  typedef int _g4_t_v253;
  typedef int _g4_t_v254;
  typedef int _g4_t_v255;
  typedef int _g4_t_v256;
  typedef int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef int _g4_t_v259;
  typedef int _g4_t_v260;
  typedef uint32_t *_g4_t_v261;
  typedef uint32_t *_g4_t_v262;
  typedef uint32_t *_g4_t_v263;
  typedef int _g4_t_v264;
  typedef int _g4_t_v265;
  typedef uint8_t _g4_t_v266;
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef uint32_t *_g4_t_v270;
  typedef int _g4_t_v271;
  typedef uint32_t *_g4_t_v272;
  typedef int _g4_t_v273;
  typedef int _g4_t_v274;
  typedef int _g4_t_v275;
  typedef int _g4_t_v276;
  typedef uint32_t *_g4_t_v277;
  typedef uint32_t *_g4_t_v278;
  typedef int _g4_t_v279;
  typedef int _g4_t_v280;
  typedef int _g4_t_v281;
  typedef int _g4_t_v282;
  typedef int _g4_t_v283;
  typedef int _g4_t_v284;
  typedef int _g4_t_v285;
  typedef int _g4_t_v286;
  typedef int _g4_t_v287;
  typedef g4_int128_t _g4_t_v288;
  typedef g4_int128_t _g4_t_v289;
  typedef float _g4_t_v290[8];
  typedef uint32_t _g4_t_v291;
  typedef uint32_t _g4_t_v292;
  typedef uint32_t _g4_t_v293;
  typedef uint32_t _g4_t_v294;
  typedef uint32_t _g4_t_v295;
  typedef int32_t _g4_t_v296;
  typedef float _g4_t_v297[8];
  typedef float _g4_t_v298[8];
  typedef float _g4_t_v299[8];
  typedef uint32_t _g4_t_v300[9];
  typedef gameswf::Self *_g4_t_v301;
  typedef int _g4_t_v302;
  typedef int _g4_t_v303;
  typedef int _g4_t_v304;
  typedef gameswf::RefCounted::Self *_g4_t_v305;
  typedef uint32_t _g4_t_v306[9];
  typedef gameswf::Self *_g4_t_v307;
  typedef int _g4_t_v308;
  typedef int _g4_t_v309;
  typedef int _g4_t_v310;
  typedef gameswf::RefCounted::Self *_g4_t_v311;
  typedef void (**_g4_t_v312)(gameswf::BaseLineStyle::Self *);
  typedef float _g4_t_v313;
  typedef int _g4_t_v314;
  typedef float _g4_t_v315[6];
  typedef gameswf::Self *_g4_t_v316;
  typedef int _g4_t_v317;
  typedef int _g4_t_v318;
  typedef int _g4_t_v319;
  typedef int _g4_t_v320;
  typedef gameswf::RefCounted::Self *_g4_t_v321;
  typedef uint32_t _g4_t_v322[9];
  typedef int16_t _g4_t_v323;
  typedef int16_t _g4_t_v324;
  typedef int16_t _g4_t_v325;
  typedef int16_t _g4_t_v326;
  typedef int16_t _g4_t_v327;
  typedef void (**_g4_t_v328)(gameswf::BaseLineStyle::Self *);
  typedef float _g4_t_v329;
  typedef int _g4_t_v330;
  typedef float _g4_t_v331[6];
  typedef gameswf::Self *_g4_t_v332;
  typedef int _g4_t_v333;
  typedef int _g4_t_v334;
  typedef int _g4_t_v335;
  typedef int _g4_t_v336;
  typedef gameswf::RefCounted::Self *_g4_t_v337;
  typedef uint32_t _g4_t_v338[9];
  typedef int16_t _g4_t_v339;
  typedef int16_t _g4_t_v340;
  typedef int16_t _g4_t_v341;
  typedef int16_t _g4_t_v342;
  typedef int16_t _g4_t_v343;
  enum : size_t {
    _g4_s0 = 800u,
    _g4_s1 = (4u + sizeof(_g4_t_v225)) > _g4_s0 ? (4u + sizeof(_g4_t_v225)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v226)) > _g4_s1 ? (32u + sizeof(_g4_t_v226)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v227)) > _g4_s2 ? (32u + sizeof(_g4_t_v227)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v228)) > _g4_s3 ? (60u + sizeof(_g4_t_v228)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v229)) > _g4_s4 ? (60u + sizeof(_g4_t_v229)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v230)) > _g4_s5 ? (60u + sizeof(_g4_t_v230)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v231)) > _g4_s6 ? (60u + sizeof(_g4_t_v231)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v232)) > _g4_s7 ? (64u + sizeof(_g4_t_v232)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v233)) > _g4_s8 ? (64u + sizeof(_g4_t_v233)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v234)) > _g4_s9 ? (68u + sizeof(_g4_t_v234)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v235)) > _g4_s10 ? (68u + sizeof(_g4_t_v235)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v236)) > _g4_s11 ? (72u + sizeof(_g4_t_v236)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v237)) > _g4_s12 ? (72u + sizeof(_g4_t_v237)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v238)) > _g4_s13 ? (72u + sizeof(_g4_t_v238)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v239)) > _g4_s14 ? (72u + sizeof(_g4_t_v239)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v240)) > _g4_s15 ? (72u + sizeof(_g4_t_v240)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v241)) > _g4_s16 ? (72u + sizeof(_g4_t_v241)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v242)) > _g4_s17 ? (72u + sizeof(_g4_t_v242)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v243)) > _g4_s18 ? (72u + sizeof(_g4_t_v243)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v244)) > _g4_s19 ? (76u + sizeof(_g4_t_v244)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v245)) > _g4_s20 ? (76u + sizeof(_g4_t_v245)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v246)) > _g4_s21 ? (76u + sizeof(_g4_t_v246)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v247)) > _g4_s22 ? (80u + sizeof(_g4_t_v247)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v248)) > _g4_s23 ? (80u + sizeof(_g4_t_v248)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v249)) > _g4_s24 ? (80u + sizeof(_g4_t_v249)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v250)) > _g4_s25 ? (80u + sizeof(_g4_t_v250)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v251)) > _g4_s26 ? (80u + sizeof(_g4_t_v251)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v252)) > _g4_s27 ? (80u + sizeof(_g4_t_v252)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v253)) > _g4_s28 ? (80u + sizeof(_g4_t_v253)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v254)) > _g4_s29 ? (80u + sizeof(_g4_t_v254)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v255)) > _g4_s30 ? (80u + sizeof(_g4_t_v255)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v256)) > _g4_s31 ? (80u + sizeof(_g4_t_v256)) : _g4_s31,
    _g4_s33 = (84u + sizeof(_g4_t_v257)) > _g4_s32 ? (84u + sizeof(_g4_t_v257)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v258)) > _g4_s33 ? (84u + sizeof(_g4_t_v258)) : _g4_s33,
    _g4_s35 = (84u + sizeof(_g4_t_v259)) > _g4_s34 ? (84u + sizeof(_g4_t_v259)) : _g4_s34,
    _g4_s36 = (84u + sizeof(_g4_t_v260)) > _g4_s35 ? (84u + sizeof(_g4_t_v260)) : _g4_s35,
    _g4_s37 = (88u + sizeof(_g4_t_v261)) > _g4_s36 ? (88u + sizeof(_g4_t_v261)) : _g4_s36,
    _g4_s38 = (88u + sizeof(_g4_t_v262)) > _g4_s37 ? (88u + sizeof(_g4_t_v262)) : _g4_s37,
    _g4_s39 = (88u + sizeof(_g4_t_v263)) > _g4_s38 ? (88u + sizeof(_g4_t_v263)) : _g4_s38,
    _g4_s40 = (88u + sizeof(_g4_t_v264)) > _g4_s39 ? (88u + sizeof(_g4_t_v264)) : _g4_s39,
    _g4_s41 = (88u + sizeof(_g4_t_v265)) > _g4_s40 ? (88u + sizeof(_g4_t_v265)) : _g4_s40,
    _g4_s42 = (88u + sizeof(_g4_t_v266)) > _g4_s41 ? (88u + sizeof(_g4_t_v266)) : _g4_s41,
    _g4_s43 = (88u + sizeof(_g4_t_v267)) > _g4_s42 ? (88u + sizeof(_g4_t_v267)) : _g4_s42,
    _g4_s44 = (88u + sizeof(_g4_t_v268)) > _g4_s43 ? (88u + sizeof(_g4_t_v268)) : _g4_s43,
    _g4_s45 = (92u + sizeof(_g4_t_v269)) > _g4_s44 ? (92u + sizeof(_g4_t_v269)) : _g4_s44,
    _g4_s46 = (92u + sizeof(_g4_t_v270)) > _g4_s45 ? (92u + sizeof(_g4_t_v270)) : _g4_s45,
    _g4_s47 = (92u + sizeof(_g4_t_v271)) > _g4_s46 ? (92u + sizeof(_g4_t_v271)) : _g4_s46,
    _g4_s48 = (92u + sizeof(_g4_t_v272)) > _g4_s47 ? (92u + sizeof(_g4_t_v272)) : _g4_s47,
    _g4_s49 = (92u + sizeof(_g4_t_v273)) > _g4_s48 ? (92u + sizeof(_g4_t_v273)) : _g4_s48,
    _g4_s50 = (96u + sizeof(_g4_t_v274)) > _g4_s49 ? (96u + sizeof(_g4_t_v274)) : _g4_s49,
    _g4_s51 = (96u + sizeof(_g4_t_v275)) > _g4_s50 ? (96u + sizeof(_g4_t_v275)) : _g4_s50,
    _g4_s52 = (96u + sizeof(_g4_t_v276)) > _g4_s51 ? (96u + sizeof(_g4_t_v276)) : _g4_s51,
    _g4_s53 = (96u + sizeof(_g4_t_v277)) > _g4_s52 ? (96u + sizeof(_g4_t_v277)) : _g4_s52,
    _g4_s54 = (96u + sizeof(_g4_t_v278)) > _g4_s53 ? (96u + sizeof(_g4_t_v278)) : _g4_s53,
    _g4_s55 = (100u + sizeof(_g4_t_v279)) > _g4_s54 ? (100u + sizeof(_g4_t_v279)) : _g4_s54,
    _g4_s56 = (100u + sizeof(_g4_t_v280)) > _g4_s55 ? (100u + sizeof(_g4_t_v280)) : _g4_s55,
    _g4_s57 = (100u + sizeof(_g4_t_v281)) > _g4_s56 ? (100u + sizeof(_g4_t_v281)) : _g4_s56,
    _g4_s58 = (100u + sizeof(_g4_t_v282)) > _g4_s57 ? (100u + sizeof(_g4_t_v282)) : _g4_s57,
    _g4_s59 = (100u + sizeof(_g4_t_v283)) > _g4_s58 ? (100u + sizeof(_g4_t_v283)) : _g4_s58,
    _g4_s60 = (100u + sizeof(_g4_t_v284)) > _g4_s59 ? (100u + sizeof(_g4_t_v284)) : _g4_s59,
    _g4_s61 = (100u + sizeof(_g4_t_v285)) > _g4_s60 ? (100u + sizeof(_g4_t_v285)) : _g4_s60,
    _g4_s62 = (100u + sizeof(_g4_t_v286)) > _g4_s61 ? (100u + sizeof(_g4_t_v286)) : _g4_s61,
    _g4_s63 = (100u + sizeof(_g4_t_v287)) > _g4_s62 ? (100u + sizeof(_g4_t_v287)) : _g4_s62,
    _g4_s64 = (112u + sizeof(_g4_t_v288)) > _g4_s63 ? (112u + sizeof(_g4_t_v288)) : _g4_s63,
    _g4_s65 = (128u + sizeof(_g4_t_v289)) > _g4_s64 ? (128u + sizeof(_g4_t_v289)) : _g4_s64,
    _g4_s66 = (144u + sizeof(_g4_t_v290)) > _g4_s65 ? (144u + sizeof(_g4_t_v290)) : _g4_s65,
    _g4_s67 = (176u + sizeof(_g4_t_v291)) > _g4_s66 ? (176u + sizeof(_g4_t_v291)) : _g4_s66,
    _g4_s68 = (180u + sizeof(_g4_t_v292)) > _g4_s67 ? (180u + sizeof(_g4_t_v292)) : _g4_s67,
    _g4_s69 = (184u + sizeof(_g4_t_v293)) > _g4_s68 ? (184u + sizeof(_g4_t_v293)) : _g4_s68,
    _g4_s70 = (188u + sizeof(_g4_t_v294)) > _g4_s69 ? (188u + sizeof(_g4_t_v294)) : _g4_s69,
    _g4_s71 = (192u + sizeof(_g4_t_v295)) > _g4_s70 ? (192u + sizeof(_g4_t_v295)) : _g4_s70,
    _g4_s72 = (196u + sizeof(_g4_t_v296)) > _g4_s71 ? (196u + sizeof(_g4_t_v296)) : _g4_s71,
    _g4_s73 = (208u + sizeof(_g4_t_v297)) > _g4_s72 ? (208u + sizeof(_g4_t_v297)) : _g4_s72,
    _g4_s74 = (240u + sizeof(_g4_t_v298)) > _g4_s73 ? (240u + sizeof(_g4_t_v298)) : _g4_s73,
    _g4_s75 = (272u + sizeof(_g4_t_v299)) > _g4_s74 ? (272u + sizeof(_g4_t_v299)) : _g4_s74,
    _g4_s76 = (304u + sizeof(_g4_t_v300)) > _g4_s75 ? (304u + sizeof(_g4_t_v300)) : _g4_s75,
    _g4_s77 = (340u + sizeof(_g4_t_v301)) > _g4_s76 ? (340u + sizeof(_g4_t_v301)) : _g4_s76,
    _g4_s78 = (344u + sizeof(_g4_t_v302)) > _g4_s77 ? (344u + sizeof(_g4_t_v302)) : _g4_s77,
    _g4_s79 = (348u + sizeof(_g4_t_v303)) > _g4_s78 ? (348u + sizeof(_g4_t_v303)) : _g4_s78,
    _g4_s80 = (352u + sizeof(_g4_t_v304)) > _g4_s79 ? (352u + sizeof(_g4_t_v304)) : _g4_s79,
    _g4_s81 = (360u + sizeof(_g4_t_v305)) > _g4_s80 ? (360u + sizeof(_g4_t_v305)) : _g4_s80,
    _g4_s82 = (400u + sizeof(_g4_t_v306)) > _g4_s81 ? (400u + sizeof(_g4_t_v306)) : _g4_s81,
    _g4_s83 = (436u + sizeof(_g4_t_v307)) > _g4_s82 ? (436u + sizeof(_g4_t_v307)) : _g4_s82,
    _g4_s84 = (440u + sizeof(_g4_t_v308)) > _g4_s83 ? (440u + sizeof(_g4_t_v308)) : _g4_s83,
    _g4_s85 = (444u + sizeof(_g4_t_v309)) > _g4_s84 ? (444u + sizeof(_g4_t_v309)) : _g4_s84,
    _g4_s86 = (448u + sizeof(_g4_t_v310)) > _g4_s85 ? (448u + sizeof(_g4_t_v310)) : _g4_s85,
    _g4_s87 = (456u + sizeof(_g4_t_v311)) > _g4_s86 ? (456u + sizeof(_g4_t_v311)) : _g4_s86,
    _g4_s88 = (496u + sizeof(_g4_t_v312)) > _g4_s87 ? (496u + sizeof(_g4_t_v312)) : _g4_s87,
    _g4_s89 = (500u + sizeof(_g4_t_v313)) > _g4_s88 ? (500u + sizeof(_g4_t_v313)) : _g4_s88,
    _g4_s90 = (504u + sizeof(_g4_t_v314)) > _g4_s89 ? (504u + sizeof(_g4_t_v314)) : _g4_s89,
    _g4_s91 = (508u + sizeof(_g4_t_v315)) > _g4_s90 ? (508u + sizeof(_g4_t_v315)) : _g4_s90,
    _g4_s92 = (532u + sizeof(_g4_t_v316)) > _g4_s91 ? (532u + sizeof(_g4_t_v316)) : _g4_s91,
    _g4_s93 = (536u + sizeof(_g4_t_v317)) > _g4_s92 ? (536u + sizeof(_g4_t_v317)) : _g4_s92,
    _g4_s94 = (540u + sizeof(_g4_t_v318)) > _g4_s93 ? (540u + sizeof(_g4_t_v318)) : _g4_s93,
    _g4_s95 = (544u + sizeof(_g4_t_v319)) > _g4_s94 ? (544u + sizeof(_g4_t_v319)) : _g4_s94,
    _g4_s96 = (548u + sizeof(_g4_t_v320)) > _g4_s95 ? (548u + sizeof(_g4_t_v320)) : _g4_s95,
    _g4_s97 = (552u + sizeof(_g4_t_v321)) > _g4_s96 ? (552u + sizeof(_g4_t_v321)) : _g4_s96,
    _g4_s98 = (556u + sizeof(_g4_t_v322)) > _g4_s97 ? (556u + sizeof(_g4_t_v322)) : _g4_s97,
    _g4_s99 = (592u + sizeof(_g4_t_v323)) > _g4_s98 ? (592u + sizeof(_g4_t_v323)) : _g4_s98,
    _g4_s100 = (594u + sizeof(_g4_t_v324)) > _g4_s99 ? (594u + sizeof(_g4_t_v324)) : _g4_s99,
    _g4_s101 = (596u + sizeof(_g4_t_v325)) > _g4_s100 ? (596u + sizeof(_g4_t_v325)) : _g4_s100,
    _g4_s102 = (598u + sizeof(_g4_t_v326)) > _g4_s101 ? (598u + sizeof(_g4_t_v326)) : _g4_s101,
    _g4_s103 = (600u + sizeof(_g4_t_v327)) > _g4_s102 ? (600u + sizeof(_g4_t_v327)) : _g4_s102,
    _g4_s104 = (608u + sizeof(_g4_t_v328)) > _g4_s103 ? (608u + sizeof(_g4_t_v328)) : _g4_s103,
    _g4_s105 = (612u + sizeof(_g4_t_v329)) > _g4_s104 ? (612u + sizeof(_g4_t_v329)) : _g4_s104,
    _g4_s106 = (616u + sizeof(_g4_t_v330)) > _g4_s105 ? (616u + sizeof(_g4_t_v330)) : _g4_s105,
    _g4_s107 = (620u + sizeof(_g4_t_v331)) > _g4_s106 ? (620u + sizeof(_g4_t_v331)) : _g4_s106,
    _g4_s108 = (644u + sizeof(_g4_t_v332)) > _g4_s107 ? (644u + sizeof(_g4_t_v332)) : _g4_s107,
    _g4_s109 = (648u + sizeof(_g4_t_v333)) > _g4_s108 ? (648u + sizeof(_g4_t_v333)) : _g4_s108,
    _g4_s110 = (652u + sizeof(_g4_t_v334)) > _g4_s109 ? (652u + sizeof(_g4_t_v334)) : _g4_s109,
    _g4_s111 = (656u + sizeof(_g4_t_v335)) > _g4_s110 ? (656u + sizeof(_g4_t_v335)) : _g4_s110,
    _g4_s112 = (660u + sizeof(_g4_t_v336)) > _g4_s111 ? (660u + sizeof(_g4_t_v336)) : _g4_s111,
    _g4_s113 = (664u + sizeof(_g4_t_v337)) > _g4_s112 ? (664u + sizeof(_g4_t_v337)) : _g4_s112,
    _g4_s114 = (668u + sizeof(_g4_t_v338)) > _g4_s113 ? (668u + sizeof(_g4_t_v338)) : _g4_s113,
    _g4_s115 = (704u + sizeof(_g4_t_v339)) > _g4_s114 ? (704u + sizeof(_g4_t_v339)) : _g4_s114,
    _g4_s116 = (706u + sizeof(_g4_t_v340)) > _g4_s115 ? (706u + sizeof(_g4_t_v340)) : _g4_s115,
    _g4_s117 = (708u + sizeof(_g4_t_v341)) > _g4_s116 ? (708u + sizeof(_g4_t_v341)) : _g4_s116,
    _g4_s118 = (710u + sizeof(_g4_t_v342)) > _g4_s117 ? (710u + sizeof(_g4_t_v342)) : _g4_s117,
    _g4_s119 = (712u + sizeof(_g4_t_v343)) > _g4_s118 ? (712u + sizeof(_g4_t_v343)) : _g4_s118
  };
  alignas(16) uint8_t _g4_sf[_g4_s119];
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 4u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 32u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 32u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 60u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 60u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 60u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 60u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 64u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 64u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 68u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 68u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 72u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 72u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 72u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 72u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 72u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 72u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 72u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 72u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 76u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 76u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 76u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 80u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 80u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 80u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 80u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 80u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 80u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 80u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 80u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 80u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 80u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 84u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 84u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 84u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 84u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 88u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 88u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 88u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 88u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 88u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 88u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 88u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 88u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 92u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 92u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 92u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 92u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 92u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 96u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 96u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 96u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 96u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 96u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 100u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 100u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 100u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 100u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 100u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 100u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 100u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 100u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 100u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 112u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 128u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 144u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 176u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 180u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 184u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 188u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 192u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 196u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 208u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 240u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 272u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 304u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 340u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 344u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 348u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 352u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 360u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 400u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 436u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 440u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 444u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 448u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 456u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 496u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 500u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 504u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 508u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 532u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 536u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 540u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 544u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 548u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 552u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 556u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 592u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 594u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 596u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 598u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 600u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 608u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 612u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 616u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 620u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 644u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 648u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 652u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 656u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 660u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 664u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 668u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 704u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 706u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 708u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 710u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 712u);

  gameswf::Rect::read((gameswf::Rect::Self *)&v288, a3);
  gameswf::Rect::read((gameswf::Rect::Self *)&v289, a3);
  *(g4_int128_t *)(*((uint32_t *)self + 32) + 76) = v288;
  *(g4_int128_t *)(*((uint32_t *)self + 33) + 76) = v289;
  if ( a4 == 84 )
  {
    gameswf::Rect::read((gameswf::Rect::Self *)&v312, a3);
    gameswf::Rect::read((gameswf::Rect::Self *)&v328, a3);
    gameswf::Stream::readUInt(a3, 6);
    *((uint8_t *)self + 108) = gameswf::Stream::readUInt(a3, 1) == 1;
    *((uint8_t *)self + 109) = gameswf::Stream::readUInt(a3, 1) == 1;
  }
  *((uint32_t *)self + 34) = gameswf::Stream::readU32(a3);
  U8 = (uint8_t)gameswf::Stream::readU8(a3);
  if ( (uint8_t)U8 == 255 )
    U8 = (uint16_t)gameswf::Stream::readU16(a3);
  *((uint32_t *)self + 35) = U8;
  if ( U8 != 0 )
  {
    v236 = 0;
    do
    {
      gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)&v312);
      gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)&v328);
      v7 = gameswf::Stream::readU8(a3);
      LODWORD(v313) = v7;
      LODWORD(v329) = v7;
      if ( v7 != 0 )
      {
        if ( v7 == 18 || v7 == 16 )
        {
          memset(v300, 0, 0x18u);
          v300[0] = 1065353216;
          memset(v306, 0, 0x18u);
          v300[4] = 1065353216;
          v306[0] = 1065353216;
          v306[4] = 1065353216;
          gameswf::Matrix::read(a1, (gameswf::Matrix::Self *)v300, a3);
          gameswf::Matrix::read(v98, (gameswf::Matrix::Self *)v306, a3);
          memset(v315, 0, sizeof(v315));
          memset(v331, 0, sizeof(v331));
          if ( LODWORD(v313) == 16 )
          {
            v315[2] = 128.0;
            v315[0] = 0.0078125;
            v315[4] = 0.0078125;
            v331[2] = 128.0;
            v331[0] = 0.0078125;
            v331[4] = 0.0078125;
          }
          else
          {
            v315[2] = 32.0;
            v315[5] = 32.0;
            v315[0] = 0.001953125;
            v315[4] = 0.001953125;
            v331[2] = 32.0;
            v331[5] = 32.0;
            v331[0] = 0.001953125;
            v331[4] = 0.001953125;
          }
          memset(v297, 0, 0x18u);
          v297[0] = 1.0;
          memset(v298, 0, 0x18u);
          v297[4] = 1.0;
          v298[0] = 1.0;
          v298[4] = 1.0;
          gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v297, (const gameswf::Matrix::Self *)v300);
g4_m128_raw(v99) = LODWORD(v297[3]);
g4_m128_raw(v100) = LODWORD(v315[0]);
g4_m128_raw(v101) = LODWORD(v297[3]);
g4_m128_lane<float>(v101, 0) = (float)(v297[3] * v315[1]) + (float)(v297[0] * v315[0]);
          if (g4_m128_lane<float>(v101, 0) < -3.4028235e38f )
            v102 = 0;
          else
            v102 =g4_m128_lane<int32_t>(v101, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v101, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[0]) = v102;
g4_m128_raw(v103) = LODWORD(v315[3]);
g4_m128_lane<float>(v99, 0) = (float)(v297[3] * v315[4]) + (float)(v297[0] * v315[3]);
          if (g4_m128_lane<float>(v99, 0) < -3.4028235e38f )
            v104 = 0;
          else
            v104 =g4_m128_lane<int32_t>(v99, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v99, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[3]) = v104;
g4_m128_raw(v105) = LODWORD(v297[4]);
g4_m128_raw(v106) = LODWORD(v297[4]);
g4_m128_lane<float>(v106, 0) = (float)(v297[4] * v315[1]) + (float)(v297[1] * v315[0]);
          if (g4_m128_lane<float>(v106, 0) < -3.4028235e38f )
            v107 = 0;
          else
            v107 =g4_m128_lane<int32_t>(v106, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v106, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[1]) = v107;
g4_m128_lane<float>(v105, 0) = (float)(v297[4] * v315[4]) + (float)(v297[1] * v315[3]);
          if (g4_m128_lane<float>(v105, 0) < -3.4028235e38f )
            v108 = 0;
          else
            v108 =g4_m128_lane<int32_t>(v105, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v105, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[4]) = v108;
g4_m128_lane<float>(v100, 0) = (float)((float)(v315[0] * v297[2]) + (float)(v315[1] * v297[5])) + v315[2];
          if (g4_m128_lane<float>(v100, 0) < -3.4028235e38f )
            v109 = 0;
          else
            v109 =g4_m128_lane<int32_t>(v100, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v100, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[2]) = v109;
g4_m128_lane<float>(v103, 0) = (float)((float)(v315[3] * v297[2]) + (float)(v315[4] * v297[5])) + v315[5];
          if (g4_m128_lane<float>(v103, 0) < -3.4028235e38f )
            v110 = 0.0;
          else
            LODWORD(v110) =g4_m128_lane<int32_t>(v103, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v103, *(__m128 *)&dword_1C7B5E0), 0);
          std::memcpy(v315, v299, 20);
          v299[5] = v110;
          v315[5] = v110;
          gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v298, (const gameswf::Matrix::Self *)v306);
          memset(v299, 0, 0x18u);
g4_m128_raw(v111) = LODWORD(v298[3]);
g4_m128_raw(v112) = LODWORD(v331[0]);
g4_m128_raw(v113) = LODWORD(v298[3]);
g4_m128_lane<float>(v113, 0) = (float)(v298[3] * v331[1]) + (float)(v298[0] * v331[0]);
          if (g4_m128_lane<float>(v113, 0) < -3.4028235e38f )
            v114 = 0;
          else
            v114 =g4_m128_lane<int32_t>(v113, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v113, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[0]) = v114;
g4_m128_raw(v115) = LODWORD(v331[3]);
g4_m128_lane<float>(v111, 0) = (float)(v298[3] * v331[4]) + (float)(v298[0] * v331[3]);
          if (g4_m128_lane<float>(v111, 0) < -3.4028235e38f )
            v116 = 0;
          else
            v116 =g4_m128_lane<int32_t>(v111, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v111, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[3]) = v116;
g4_m128_raw(v117) = LODWORD(v298[4]);
g4_m128_raw(v118) = LODWORD(v298[4]);
g4_m128_lane<float>(v118, 0) = (float)(v298[4] * v331[1]) + (float)(v298[1] * v331[0]);
          if (g4_m128_lane<float>(v118, 0) < -3.4028235e38f )
            v119 = 0;
          else
            v119 =g4_m128_lane<int32_t>(v118, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v118, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[1]) = v119;
g4_m128_lane<float>(v117, 0) = (float)(v298[4] * v331[4]) + (float)(v298[1] * v331[3]);
          if (g4_m128_lane<float>(v117, 0) < -3.4028235e38f )
            v120 = 0;
          else
            v120 =g4_m128_lane<int32_t>(v117, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v117, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[4]) = v120;
g4_m128_lane<float>(v112, 0) = (float)((float)(v331[0] * v298[2]) + (float)(v331[1] * v298[5])) + v331[2];
          if (g4_m128_lane<float>(v112, 0) < -3.4028235e38f )
            v121 = 0;
          else
            v121 =g4_m128_lane<int32_t>(v112, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v112, *(__m128 *)&dword_1C7B5E0), 0);
          LODWORD(v299[2]) = v121;
g4_m128_lane<float>(v115, 0) = (float)((float)(v331[3] * v298[2]) + (float)(v331[4] * v298[5])) + v331[5];
          if (g4_m128_lane<float>(v115, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
          else
            a1 = _mm_and_ps(v115, _mm_cmple_ss(v115, *(__m128 *)&dword_1C7B5E0));
          std::memcpy(v331, v299, 20);
          v299[5] =g4_m128_lane<float>(a1, 0);
          v331[5] =g4_m128_lane<float>(a1, 0);
          v122 = gameswf::Stream::readU8(a3);
          v123 = v122;
          v266 = v122;
          v284 = v122;
          v124 = v317;
          if ( v122 != 0 )
          {
            v125 = v318;
            if ( v123 > v318 && v319 == 0 )
            {
              v179 = v123 + (v123 >> 1);
              v318 = v179;
              if ( v179 != 0 )
              {
                if ( v316 != nullptr )
                  v316 = (gameswf::Self *)gameswf::realloc_internal(v316, 5 * v179, 5 * v125);
                else
                  v316 = (gameswf::Self *)gameswf::malloc_internal(5 * v179);
              }
              else
              {
                if ( v316 != nullptr )
                  gameswf::free_internal(v316);
                v316 = nullptr;
              }
            }
          }
          if ( v284 > v124 )
          {
            v126 = 5 * v124;
            do
            {
              if ( (gameswf::Self *)((char *)v316 + v126) != nullptr )
                gameswf::gradientRecord::gradientRecord((gameswf::Self *)((char *)v316 + v126));
              v126 += 5;
            }
            while ( v126 != 5 * v266 );
          }
          v317 = v284;
          v127 = v333;
          if ( v284 != 0 )
          {
            v128 = v334;
            if ( v284 > v334 && v335 == 0 )
            {
              v178 = v284 + (v284 >> 1);
              v334 = v178;
              if ( v178 != 0 )
              {
                if ( v332 != nullptr )
                  v332 = (gameswf::Self *)gameswf::realloc_internal(v332, 5 * v178, 5 * v128);
                else
                  v332 = (gameswf::Self *)gameswf::malloc_internal(5 * v178);
              }
              else
              {
                if ( v332 != nullptr )
                  gameswf::free_internal(v332);
                v332 = nullptr;
              }
            }
          }
          if ( v284 > v127 )
          {
            v129 = 5 * v127;
            do
            {
              if ( (gameswf::Self *)((char *)v332 + v129) != nullptr )
                gameswf::gradientRecord::gradientRecord((gameswf::Self *)((char *)v332 + v129));
              v129 += 5;
            }
            while ( v129 != 5 * v266 );
          }
          v333 = v284;
          if ( v284 != 0 )
          {
            v130 = 0;
            do
            {
              gameswf::gradientRecord::read((gameswf::Self *)((char *)v316 + v130), a3, a4);
              v131 = (gameswf::gradientRecord::Self *)((gameswf::Self *)((char *)v332 + v130));
              v130 += 5;
              gameswf::gradientRecord::read(v131, a3, a4);
            }
            while ( v130 != 5 * v266 );
            v314 = *(uint32_t *)((char *)v316 + 1);
            v330 = *(uint32_t *)((char *)v332 + 1);
          }
        }
        else if ( (unsigned int)v7 - 64 <= 1 )
        {
          U16 = gameswf::Stream::readU16(a3);
          v171 = (gameswf::RefCounted::Self *)G4_VCALL<int>(a6, 152, U16);
          v172 = v321;
          v173 = v171;
          if ( v171 != v321 )
          {
            if ( v321 != nullptr )
              gameswf::RefCounted::dropRef(v321);
            v172 = nullptr;
            v321 = v173;
            if ( v173 != nullptr )
            {
              gameswf::RefCounted::addRef(v173);
              v172 = v321;
            }
          }
          if ( v172 != v337 )
          {
            if ( v337 != nullptr )
              gameswf::RefCounted::dropRef(v337);
            v337 = v172;
            if ( v172 != nullptr )
              gameswf::RefCounted::addRef(v172);
          }
          memset(v300, 0, 0x18u);
          v300[0] = 1065353216;
          memset(v306, 0, 0x18u);
          v300[4] = 1065353216;
          v306[0] = 1065353216;
          v306[4] = 1065353216;
          gameswf::Matrix::read(a1, (gameswf::Matrix::Self *)v300, a3);
          gameswf::Matrix::read(v174, (gameswf::Matrix::Self *)v306, a3);
          gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v322, (const gameswf::Matrix::Self *)v300);
          gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v338, (const gameswf::Matrix::Self *)v306);
        }
      }
      else
      {
        gameswf::Color::read_rgba((gameswf::Color::Self *)&v314, a3);
        gameswf::Color::read_rgba((gameswf::Color::Self *)&v330, a3);
      }
      v8 = *((uint32_t **)self + 32);
      v261 = v8;
      v9 = v8[8];
      v10 = v8[9];
      v234 = v9 + 1;
      if ( v9 + 1 > v10 )
      {
        if ( v8[10] != 0 )
        {
          v11 = (char *)v8[7];
        }
        else
        {
          v95 = v234 + (v234 >> 1);
          v261[9] = v95;
          if ( v95 != 0 )
          {
            if ( v261[7] != 0 )
              v11 = (char *)gameswf::realloc_internal((gameswf::Self *)v261[7], 84 * v95, 84 * v10);
            else
              v11 = (char *)gameswf::malloc_internal(84 * v95);
            v261[7] = (uint32_t)(uintptr_t)(v11);
            v9 = v261[8];
          }
          else
          {
            if ( v261[7] != 0 )
            {
              gameswf::free_internal((gameswf::Self *)v261[7]);
              v9 = v261[8];
            }
            v11 = nullptr;
            v261[7] = 0;
          }
        }
      }
      else
      {
        v11 = (char *)v8[7];
      }
      v12 = &v11[84 * v9];
      if ( v12 != nullptr )
      {
        *(uint32_t *)v12 = ((uint32_t)(uintptr_t)&off_208F678);
        *((float *)v12 + 1) = v313;
        *((uint32_t *)v12 + 2) = v314;
        std::memcpy(v12 + 12, v315, 24);
        *((uint32_t *)v12 + 9) = 0;
        *((uint32_t *)v12 + 10) = 0;
        *((uint32_t *)v12 + 11) = 0;
        *((uint32_t *)v12 + 12) = 0;
        v247 = v317;
        if ( v317 > 0 )
        {
          v139 = 0;
          v140 = v317 + (v317 >> 1);
          *((uint32_t *)v12 + 11) = v140;
          v141 = gameswf::malloc_internal(5 * v140);
          for ( *((uint32_t *)v12 + 9) = v141; ; v141 = *((uint32_t *)v12 + 9) )
          {
            v142 = (gameswf::gradientRecord::Self *)(v139 + v141);
            if ( v142 != nullptr )
              gameswf::gradientRecord::gradientRecord(v142);
            v139 += 5;
            if ( v139 == 5 * v247 )
              break;
          }
          v143 = 0;
          v260 = 0;
          *((uint32_t *)v12 + 10) = v247;
          do
          {
            v144 = *((uint32_t *)v12 + 9);
            ++v260;
            v145 = v316;
            *(uint32_t *)(v144 + v143) = *(uint32_t *)((char *)v316 + v143);
            *(uint8_t *)(v144 + v143 + 4) = *((uint8_t *)v145 + v143 + 4);
            v143 += 5;
          }
          while ( v260 < *((uint32_t *)v12 + 10) );
        }
        else
        {
          *((uint32_t *)v12 + 10) = v317;
        }
        v13 = (gameswf::RefCounted::Self *)v320;
        v14 = v320 == 0;
        *((uint32_t *)v12 + 13) = v320;
        if ( !v14 )
          gameswf::RefCounted::addRef(v13);
        v15 = v321;
        v14 = v321 == nullptr;
        *((uint32_t *)v12 + 14) = (uint32_t)(uintptr_t)(v321);
        if ( !v14 )
          gameswf::RefCounted::addRef(v15);
        std::memcpy(v12 + 60, v322, 24);
      }
      v261[8] = v234;
      v16 = *((uint32_t **)self + 33);
      v262 = v16;
      v17 = v16[8];
      v18 = v16[9];
      v235 = v17 + 1;
      if ( v17 + 1 > v18 )
      {
        if ( v16[10] != 0 )
        {
          v19 = (char *)v16[7];
        }
        else
        {
          v94 = v235 + (v235 >> 1);
          v262[9] = v94;
          if ( v94 != 0 )
          {
            if ( v262[7] != 0 )
              v19 = (char *)gameswf::realloc_internal((gameswf::Self *)v262[7], 84 * v94, 84 * v18);
            else
              v19 = (char *)gameswf::malloc_internal(84 * v94);
            v262[7] = (uint32_t)(uintptr_t)(v19);
            v17 = v262[8];
          }
          else
          {
            if ( v262[7] != 0 )
            {
              gameswf::free_internal((gameswf::Self *)v262[7]);
              v17 = v262[8];
            }
            v19 = nullptr;
            v262[7] = 0;
          }
        }
      }
      else
      {
        v19 = (char *)v16[7];
      }
      v20 = &v19[84 * v17];
      if ( v20 != nullptr )
      {
        *(uint32_t *)v20 = ((uint32_t)(uintptr_t)&off_208F678);
        *((float *)v20 + 1) = v329;
        *((uint32_t *)v20 + 2) = v330;
        std::memcpy(v20 + 12, v331, 24);
        *((uint32_t *)v20 + 9) = 0;
        *((uint32_t *)v20 + 10) = 0;
        *((uint32_t *)v20 + 11) = 0;
        *((uint32_t *)v20 + 12) = 0;
        v248 = v333;
        if ( v333 > 0 )
        {
          v132 = 0;
          v133 = v333 + (v333 >> 1);
          *((uint32_t *)v20 + 11) = v133;
          v134 = gameswf::malloc_internal(5 * v133);
          for ( *((uint32_t *)v20 + 9) = v134; ; v134 = *((uint32_t *)v20 + 9) )
          {
            v135 = (gameswf::gradientRecord::Self *)(v132 + v134);
            if ( v135 != nullptr )
              gameswf::gradientRecord::gradientRecord(v135);
            v132 += 5;
            if ( v132 == 5 * v248 )
              break;
          }
          v136 = 0;
          v285 = 0;
          *((uint32_t *)v20 + 10) = v248;
          do
          {
            v137 = *((uint32_t *)v20 + 9);
            ++v285;
            v138 = v332;
            *(uint32_t *)(v137 + v136) = *(uint32_t *)((char *)v332 + v136);
            *(uint8_t *)(v137 + v136 + 4) = *((uint8_t *)v138 + v136 + 4);
            v136 += 5;
          }
          while ( v285 < *((uint32_t *)v20 + 10) );
        }
        else
        {
          *((uint32_t *)v20 + 10) = v333;
        }
        v21 = (gameswf::RefCounted::Self *)v336;
        v14 = v336 == 0;
        *((uint32_t *)v20 + 13) = v336;
        if ( !v14 )
          gameswf::RefCounted::addRef(v21);
        v22 = v337;
        v14 = v337 == nullptr;
        *((uint32_t *)v20 + 14) = (uint32_t)(uintptr_t)(v337);
        if ( !v14 )
          gameswf::RefCounted::addRef(v22);
        std::memcpy(v20 + 60, v338, 24);
      }
      v262[8] = v235;
      gameswf::FillStyle::Destroy((gameswf::FillStyle::Self *)&v328);
      gameswf::FillStyle::Destroy((gameswf::FillStyle::Self *)&v312);
      ++v236;
    }
    while ( *((uint32_t *)self + 35) > v236 );
  }
  v23 = (uint8_t)gameswf::Stream::readU8(a3);
  if ( (uint8_t)v23 == 255 )
    v23 = (uint16_t)gameswf::Stream::readU16(a3);
  *((uint32_t *)self + 36) = v23;
  if ( a4 == 46 )
  {
    if ( v23 != 0 )
    {
      v233 = 0;
      do
      {
        gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)&v312);
        gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)&v328);
        v313 = (float)((float)0 * 65536.0) + (float)(uint16_t)gameswf::Stream::readU16(a3);
        v329 = (float)((float)0 * 65536.0) + (float)(uint16_t)gameswf::Stream::readU16(a3);
        gameswf::Color::read((gameswf::Color::Self *)&v314, a3, 46);
        gameswf::Color::read((gameswf::Color::Self *)&v330, a3, 46);
        v181 = *((uint32_t *)self + 32);
        v267 = v181;
        v182 = *(uint32_t *)(v181 + 48);
        v183 = *(uint32_t *)(v181 + 52);
        v255 = v182 + 1;
        if ( v182 + 1 > v183 )
        {
          if ( *(uint32_t *)(v181 + 56) != 0 )
          {
            v184 = *(char **)(v181 + 44);
          }
          else
          {
            v212 = v255 + (v255 >> 1);
            *(uint32_t *)(v181 + 52) = v212;
            if ( v212 != 0 )
            {
              if ( *(uint32_t *)(v181 + 44) != 0 )
                v184 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v181 + 44), 108 * v212, 108 * v183);
              else
                v184 = (char *)gameswf::malloc_internal(108 * v212);
              *(uint32_t *)(v181 + 44) = (uint32_t)(uintptr_t)(v184);
              v182 = *(uint32_t *)(v181 + 48);
            }
            else
            {
              if ( *(uint32_t *)(v181 + 44) != 0 )
              {
                gameswf::free_internal(*(gameswf::Self **)(v181 + 44));
                v182 = *(uint32_t *)(v181 + 48);
              }
              v184 = nullptr;
              *(uint32_t *)(v181 + 44) = 0;
            }
          }
        }
        else
        {
          v184 = *(char **)(v181 + 44);
        }
        v185 = &v184[108 * v182];
        if ( v185 != nullptr )
        {
          v230 = v185 + 12;
          *(uint32_t *)v185 = ((uint32_t)(uintptr_t)&off_208F690);
          *((float *)v185 + 1) = v313;
          *((uint32_t *)v185 + 2) = v314;
          *((uint32_t *)v185 + 3) = ((uint32_t)(uintptr_t)&off_208F678);
          *((float *)v185 + 4) = v315[1];
          *((float *)v185 + 5) = v315[2];
          *((float *)v185 + 6) = v315[3];
          *((float *)v185 + 7) = v315[4];
          *((float *)v185 + 8) = v315[5];
          *((uint32_t *)v185 + 9) = (uint32_t)(uintptr_t)(v316);
          *((uint32_t *)v185 + 10) = v317;
          *((uint32_t *)v185 + 11) = v318;
          *((uint32_t *)v185 + 12) = 0;
          *((uint32_t *)v185 + 13) = 0;
          *((uint32_t *)v185 + 14) = 0;
          *((uint32_t *)v185 + 15) = 0;
          v240 = v320;
          if ( v320 <= 0 )
          {
            *((uint32_t *)v185 + 13) = v320;
          }
          else
          {
            v186 = 0;
            v187 = v320 + (v320 >> 1);
            *((uint32_t *)v185 + 14) = v187;
            v188 = gameswf::malloc_internal(5 * v187);
            for ( *((uint32_t *)v185 + 12) = v188; ; v188 = *((uint32_t *)v185 + 12) )
            {
              v189 = (gameswf::gradientRecord::Self *)(v186 + v188);
              if ( v189 != nullptr )
                gameswf::gradientRecord::gradientRecord(v189);
              v186 += 5;
              if ( v186 == 5 * v240 )
                break;
            }
            v190 = v240;
            v191 = 0;
            v286 = 0;
            v241 = v185;
            *((uint32_t *)v185 + 13) = v190;
            do
            {
              ++v286;
              v192 = *((uint32_t *)v230 + 9);
              v193 = v319;
              *(uint32_t *)(v192 + v191) = *(uint32_t *)(v319 + v191);
              *(uint8_t *)(v192 + v191 + 4) = *(uint8_t *)(v193 + v191 + 4);
              v191 += 5;
            }
            while ( v286 < *((uint32_t *)v230 + 10) );
            v185 = v241;
          }
          v194 = (gameswf::RefCounted::Self *)v322[1];
          v14 = v322[1] == 0;
          *((uint32_t *)v185 + 16) = v322[1];
          if ( !v14 )
            gameswf::RefCounted::addRef(v194);
          v195 = (gameswf::RefCounted::Self *)v322[2];
          v14 = v322[2] == 0;
          *((uint32_t *)v185 + 17) = v322[2];
          if ( !v14 )
            gameswf::RefCounted::addRef(v195);
          *((uint32_t *)v185 + 18) = v322[3];
          *((uint32_t *)v185 + 19) = v322[4];
          *((uint32_t *)v185 + 20) = v322[5];
          *((uint32_t *)v185 + 21) = v322[6];
          *((uint32_t *)v185 + 22) = v322[7];
          *((uint32_t *)v185 + 23) = v322[8];
          *((uint16_t *)v185 + 48) = v323;
          *((uint16_t *)v185 + 49) = v324;
          *((uint16_t *)v185 + 50) = v325;
          *((uint16_t *)v185 + 51) = v326;
          *((uint16_t *)v185 + 52) = v327;
        }
        *(uint32_t *)(v267 + 48) = v255;
        v196 = *((uint32_t *)self + 33);
        v268 = v196;
        v197 = *(uint32_t *)(v196 + 48);
        v198 = *(uint32_t *)(v196 + 52);
        v256 = v197 + 1;
        if ( v197 + 1 > v198 )
        {
          if ( *(uint32_t *)(v196 + 56) != 0 )
          {
            v199 = *(char **)(v196 + 44);
          }
          else
          {
            v211 = v256 + (v256 >> 1);
            *(uint32_t *)(v196 + 52) = v211;
            if ( v211 != 0 )
            {
              if ( *(uint32_t *)(v196 + 44) != 0 )
                v199 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v196 + 44), 108 * v211, 108 * v198);
              else
                v199 = (char *)gameswf::malloc_internal(108 * v211);
              *(uint32_t *)(v196 + 44) = (uint32_t)(uintptr_t)(v199);
              v197 = *(uint32_t *)(v196 + 48);
            }
            else
            {
              if ( *(uint32_t *)(v196 + 44) != 0 )
              {
                gameswf::free_internal(*(gameswf::Self **)(v196 + 44));
                v197 = *(uint32_t *)(v196 + 48);
              }
              v199 = nullptr;
              *(uint32_t *)(v196 + 44) = 0;
            }
          }
        }
        else
        {
          v199 = *(char **)(v196 + 44);
        }
        v200 = &v199[108 * v197];
        if ( v200 != nullptr )
        {
          v231 = v200 + 12;
          *(uint32_t *)v200 = ((uint32_t)(uintptr_t)&off_208F690);
          *((float *)v200 + 1) = v329;
          *((uint32_t *)v200 + 2) = v330;
          *((uint32_t *)v200 + 3) = ((uint32_t)(uintptr_t)&off_208F678);
          *((float *)v200 + 4) = v331[1];
          *((float *)v200 + 5) = v331[2];
          *((float *)v200 + 6) = v331[3];
          *((float *)v200 + 7) = v331[4];
          *((float *)v200 + 8) = v331[5];
          *((uint32_t *)v200 + 9) = (uint32_t)(uintptr_t)(v332);
          *((uint32_t *)v200 + 10) = v333;
          *((uint32_t *)v200 + 11) = v334;
          *((uint32_t *)v200 + 12) = 0;
          *((uint32_t *)v200 + 13) = 0;
          *((uint32_t *)v200 + 14) = 0;
          *((uint32_t *)v200 + 15) = 0;
          v242 = v336;
          if ( v336 <= 0 )
          {
            *((uint32_t *)v200 + 13) = v336;
          }
          else
          {
            v201 = 0;
            v202 = v336 + (v336 >> 1);
            *((uint32_t *)v200 + 14) = v202;
            v203 = gameswf::malloc_internal(5 * v202);
            for ( *((uint32_t *)v200 + 12) = v203; ; v203 = *((uint32_t *)v200 + 12) )
            {
              v204 = (gameswf::gradientRecord::Self *)(v201 + v203);
              if ( v204 != nullptr )
                gameswf::gradientRecord::gradientRecord(v204);
              v201 += 5;
              if ( v201 == 5 * v242 )
                break;
            }
            v205 = v242;
            v206 = 0;
            v287 = 0;
            v243 = v200;
            *((uint32_t *)v200 + 13) = v205;
            do
            {
              ++v287;
              v207 = *((uint32_t *)v231 + 9);
              v208 = v335;
              *(uint32_t *)(v207 + v206) = *(uint32_t *)(v335 + v206);
              *(uint8_t *)(v207 + v206 + 4) = *(uint8_t *)(v208 + v206 + 4);
              v206 += 5;
            }
            while ( v287 < *((uint32_t *)v231 + 10) );
            v200 = v243;
          }
          v209 = (gameswf::RefCounted::Self *)v338[1];
          v14 = v338[1] == 0;
          *((uint32_t *)v200 + 16) = v338[1];
          if ( !v14 )
            gameswf::RefCounted::addRef(v209);
          v210 = (gameswf::RefCounted::Self *)v338[2];
          v14 = v338[2] == 0;
          *((uint32_t *)v200 + 17) = v338[2];
          if ( !v14 )
            gameswf::RefCounted::addRef(v210);
          *((uint32_t *)v200 + 18) = v338[3];
          *((uint32_t *)v200 + 19) = v338[4];
          *((uint32_t *)v200 + 20) = v338[5];
          *((uint32_t *)v200 + 21) = v338[6];
          *((uint32_t *)v200 + 22) = v338[7];
          *((uint32_t *)v200 + 23) = v338[8];
          *((uint16_t *)v200 + 48) = v339;
          *((uint16_t *)v200 + 49) = v340;
          *((uint16_t *)v200 + 50) = v341;
          *((uint16_t *)v200 + 51) = v342;
          *((uint16_t *)v200 + 52) = v343;
        }
        *(uint32_t *)(v268 + 48) = v256;
        v328 = (void (**)(gameswf::BaseLineStyle::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208F690));
        gameswf::FillStyle::Destroy((gameswf::FillStyle::Self *)v331);
        v312 = (void (**)(gameswf::BaseLineStyle::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208F690));
        v328 = (void (**)(gameswf::BaseLineStyle::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208EB20));
        gameswf::FillStyle::Destroy((gameswf::FillStyle::Self *)v315);
        ++v233;
        v312 = (void (**)(gameswf::BaseLineStyle::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208EB20));
      }
      while ( *((uint32_t *)self + 36) > v233 );
    }
  }
  else if ( v23 != 0 )
  {
g4_m128_raw(v24) = 0x47800000u;
    v232 = 0;
    do
    {
      gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)&v312);
      gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)&v328);
      v313 = (float)((float)0 * 65536.0) + (float)(uint16_t)gameswf::Stream::readU16(a3);
g4_m128_lane<float>(v24, 0) = (float)((float)0 * 65536.0) + (float)(uint16_t)gameswf::Stream::readU16(a3);
      v329 =g4_m128_lane<float>(v24, 0);
      gameswf::Stream::readUInt(a3, 2);
      UInt = gameswf::Stream::readUInt(a3, 2);
      v26 = gameswf::Stream::readUInt(a3, 1);
      gameswf::Stream::readUInt(a3, 1);
      gameswf::Stream::readUInt(a3, 1);
      gameswf::Stream::readUInt(a3, 1);
      gameswf::Stream::readUInt(a3, 1);
      gameswf::Stream::readUInt(a3, 1);
      gameswf::Stream::readUInt(a3, 2);
      if ( UInt == 2 )
        gameswf::Stream::readU16(a3);
      if ( v26 != 0 )
      {
        gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)v300);
        gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)v306);
        v93 = gameswf::Stream::readU8(a3);
        v300[1] = v93;
        v306[1] = v93;
        if ( v93 != 0 )
        {
          if ( v93 == 18 || v93 == 16 )
          {
            memset(v297, 0, 0x18u);
            v297[0] = 1.0;
            memset(v298, 0, 0x18u);
            v297[4] = 1.0;
            v298[0] = 1.0;
            v298[4] = 1.0;
            gameswf::Matrix::read(v24, (gameswf::Matrix::Self *)v297, a3);
            gameswf::Matrix::read(v147, (gameswf::Matrix::Self *)v298, a3);
            memset(&v300[3], 0, 0x18u);
            memset(&v306[3], 0, 0x18u);
            if ( v300[1] == 16 )
            {
              v300[5] = 1124073472;
              v300[3] = 1006632960;
              v300[7] = 1006632960;
              v306[5] = 1124073472;
              v306[3] = 1006632960;
              v306[7] = 1006632960;
            }
            else
            {
              v300[5] = 1107296256;
              v300[8] = 1107296256;
              v300[3] = 989855744;
              v300[7] = 989855744;
              v306[5] = 1107296256;
              v306[8] = 1107296256;
              v306[3] = 989855744;
              v306[7] = 989855744;
            }
            memset(v290, 0, 0x18u);
            v290[0] = 1.0;
            memset(v299, 0, 0x18u);
            v290[4] = 1.0;
            v299[0] = 1.0;
            v299[4] = 1.0;
            gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v290, (const gameswf::Matrix::Self *)v297);
g4_m128_raw(v148) = LODWORD(v290[3]);
g4_m128_raw(v149) = v300[3];
g4_m128_raw(v150) = LODWORD(v290[3]);
g4_m128_lane<float>(v150, 0) = (float)(v290[3] * *(float *)&v300[4]) + (float)(v290[0] * *(float *)&v300[3]);
            if (g4_m128_lane<float>(v150, 0) >= -3.4028235e38f )
              v151 =g4_m128_lane<int32_t>(v150, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v150, *(__m128 *)&dword_1C7B5E0), 0);
            else
              v151 = 0;
            v291 = v151;
g4_m128_raw(v152) = v300[6];
g4_m128_lane<float>(v148, 0) = (float)(v290[3] * *(float *)&v300[7]) + (float)(v290[0] * *(float *)&v300[6]);
            if (g4_m128_lane<float>(v148, 0) < -3.4028235e38f )
              v153 = 0;
            else
              v153 =g4_m128_lane<int32_t>(v148, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v148, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v154) = LODWORD(v290[4]);
            v294 = v153;
g4_m128_raw(v155) = LODWORD(v290[4]);
g4_m128_lane<float>(v155, 0) = (float)(v290[4] * *(float *)&v300[4]) + (float)(v290[1] * *(float *)&v300[3]);
            if (g4_m128_lane<float>(v155, 0) < -3.4028235e38f )
              v156 = 0;
            else
              v156 =g4_m128_lane<int32_t>(v155, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v155, *(__m128 *)&dword_1C7B5E0), 0);
            v292 = v156;
g4_m128_lane<float>(v154, 0) = (float)(v290[4] * *(float *)&v300[7]) + (float)(v290[1] * *(float *)&v300[6]);
            if (g4_m128_lane<float>(v154, 0) < -3.4028235e38f )
              v157 = 0;
            else
              v157 =g4_m128_lane<int32_t>(v154, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v154, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v24) = LODWORD(v290[5]);
            v295 = v157;
g4_m128_lane<float>(v149, 0) = (float)((float)(*(float *)&v300[3] * v290[2]) + (float)(*(float *)&v300[4] * v290[5]))
                             + *(float *)&v300[5];
            if (g4_m128_lane<float>(v149, 0) < -3.4028235e38f )
              v158 = 0;
            else
              v158 =g4_m128_lane<int32_t>(v149, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v149, *(__m128 *)&dword_1C7B5E0), 0);
            v293 = v158;
g4_m128_lane<float>(v152, 0) = (float)((float)(*(float *)&v300[6] * v290[2]) + (float)(v290[5] * *(float *)&v300[7]))
                             + *(float *)&v300[8];
            if (g4_m128_lane<float>(v152, 0) < -3.4028235e38f )
            {
              v159 = 0;
            }
            else
            {
              v24 = _mm_cmple_ss(v152, *(__m128 *)&dword_1C7B5E0);
              v159 =g4_m128_lane<int32_t>(v152, 0) &g4_m128_lane<int32_t>(v24, 0);
            }
            v300[3] = v291;
            v300[4] = v292;
            v300[5] = v293;
            v300[6] = v294;
            v296 = v159;
            v300[7] = v295;
            v300[8] = v159;
            gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v299, (const gameswf::Matrix::Self *)v298);
            gameswf::Matrix::concatenate((gameswf::Matrix::Self *)&v306[3], (const gameswf::Matrix::Self *)v299);
            v160 = gameswf::Stream::readU8(a3);
            v161 = v160;
            v239 = v160;
            v254 = v160;
            v162 = v302;
            if ( v160 != 0 )
            {
              v163 = v303;
              if ( v161 > v303 && v304 == 0 )
              {
                v221 = v161 + (v161 >> 1);
                v303 = v221;
                if ( v221 != 0 )
                {
                  if ( v301 != nullptr )
                    v301 = (gameswf::Self *)gameswf::realloc_internal(v301, 5 * v221, 5 * v163);
                  else
                    v301 = (gameswf::Self *)gameswf::malloc_internal(5 * v221);
                }
                else
                {
                  if ( v301 != nullptr )
                    gameswf::free_internal(v301);
                  v301 = nullptr;
                }
              }
            }
            if ( v254 > v162 )
            {
              v164 = 5 * v162;
              do
              {
                if ( (gameswf::Self *)((char *)v301 + v164) != nullptr )
                  gameswf::gradientRecord::gradientRecord((gameswf::Self *)((char *)v301 + v164));
                v164 += 5;
              }
              while ( v164 != 5 * v239 );
            }
            v302 = v254;
            v165 = v308;
            if ( v254 != 0 )
            {
              v166 = v309;
              if ( v254 > v309 && v310 == 0 )
              {
                v220 = v254 + (v254 >> 1);
                v309 = v220;
                if ( v220 != 0 )
                {
                  if ( v307 != nullptr )
                    v307 = (gameswf::Self *)gameswf::realloc_internal(v307, 5 * v220, 5 * v166);
                  else
                    v307 = (gameswf::Self *)gameswf::malloc_internal(5 * v220);
                }
                else
                {
                  if ( v307 != nullptr )
                    gameswf::free_internal(v307);
                  v307 = nullptr;
                }
              }
            }
            if ( v254 > v165 )
            {
              v167 = 5 * v165;
              do
              {
                if ( (gameswf::Self *)((char *)v307 + v167) != nullptr )
                  gameswf::gradientRecord::gradientRecord((gameswf::Self *)((char *)v307 + v167));
                v167 += 5;
              }
              while ( v167 != 5 * v239 );
            }
            v308 = v254;
            if ( v254 != 0 )
            {
              v168 = 0;
              do
              {
                gameswf::gradientRecord::read((gameswf::Self *)((char *)v301 + v168), a3, a4);
                v169 = (gameswf::gradientRecord::Self *)((gameswf::Self *)((char *)v307 + v168));
                v168 += 5;
                gameswf::gradientRecord::read(v169, a3, a4);
              }
              while ( v168 != 5 * v239 );
              v300[2] = *(uint32_t *)((char *)v301 + 1);
              v306[2] = *(uint32_t *)((char *)v307 + 1);
            }
          }
          else if ( (unsigned int)v93 - 64 <= 1 )
          {
            v213 = gameswf::Stream::readU16(a3);
            v214 = (gameswf::RefCounted::Self *)G4_VCALL<int>(a6, 152, v213);
            v215 = v305;
            v216 = v214;
            if ( v214 != v305 )
            {
              if ( v305 != nullptr )
                gameswf::RefCounted::dropRef(v305);
              v215 = nullptr;
              v305 = v216;
              if ( v216 != nullptr )
              {
                gameswf::RefCounted::addRef(v216);
                v215 = v305;
              }
            }
            if ( v215 != v311 )
            {
              if ( v311 != nullptr )
                gameswf::RefCounted::dropRef(v311);
              v311 = v215;
              if ( v215 != nullptr )
                gameswf::RefCounted::addRef(v215);
            }
            memset(v298, 0, 0x18u);
            v298[0] = 1.0;
            memset(v299, 0, 0x18u);
            v298[4] = 1.0;
            v299[0] = 1.0;
            v299[4] = 1.0;
            gameswf::Matrix::read(v24, (gameswf::Matrix::Self *)v298, a3);
            gameswf::Matrix::read(v217, (gameswf::Matrix::Self *)v299, a3);
          }
        }
        else
        {
          gameswf::Color::read_rgba((gameswf::Color::Self *)&v300[2], a3);
          gameswf::Color::read_rgba((gameswf::Color::Self *)&v306[2], a3);
        }
        gameswf::FillStyle::Destroy((gameswf::FillStyle::Self *)v306);
        gameswf::FillStyle::Destroy((gameswf::FillStyle::Self *)v300);
      }
      else
      {
        gameswf::Color::read((gameswf::Color::Self *)&v314, a3, a4);
        gameswf::Color::read((gameswf::Color::Self *)&v330, a3, a4);
      }
      v27 = *((uint32_t **)self + 32);
      v263 = v27;
      v28 = v27[12];
      v29 = v27[13];
      v237 = v28 + 1;
      if ( v28 + 1 > v29 )
      {
        if ( v27[14] != 0 )
        {
          v30 = (char *)v27[11];
        }
        else
        {
          v97 = v237 + (v237 >> 1);
          v263[13] = v97;
          if ( v97 != 0 )
          {
            if ( v263[11] != 0 )
              v30 = (char *)gameswf::realloc_internal((gameswf::Self *)v263[11], 108 * v97, 108 * v29);
            else
              v30 = (char *)gameswf::malloc_internal(108 * v97);
            v263[11] = (uint32_t)(uintptr_t)(v30);
            v28 = v263[12];
          }
          else
          {
            if ( v263[11] != 0 )
            {
              gameswf::free_internal((gameswf::Self *)v263[11]);
              v28 = v263[12];
            }
            v30 = nullptr;
            v263[11] = 0;
          }
        }
      }
      else
      {
        v30 = (char *)v27[11];
      }
      v31 = &v30[108 * v28];
      if ( v31 != nullptr )
      {
        v228 = v31 + 12;
        *(uint32_t *)v31 = ((uint32_t)(uintptr_t)&off_208F690);
        *((float *)v31 + 1) = v313;
        *((uint32_t *)v31 + 2) = v314;
        *((uint32_t *)v31 + 3) = ((uint32_t)(uintptr_t)&off_208F678);
        *((float *)v31 + 4) = v315[1];
        *((float *)v31 + 5) = v315[2];
        *((float *)v31 + 6) = v315[3];
        *((float *)v31 + 7) = v315[4];
        *((float *)v31 + 8) = v315[5];
        *((uint32_t *)v31 + 9) = (uint32_t)(uintptr_t)(v316);
        *((uint32_t *)v31 + 10) = v317;
        *((uint32_t *)v31 + 11) = v318;
        *((uint32_t *)v31 + 12) = 0;
        *((uint32_t *)v31 + 13) = 0;
        *((uint32_t *)v31 + 14) = 0;
        *((uint32_t *)v31 + 15) = 0;
        v249 = v320;
        if ( v320 <= 0 )
        {
          *((uint32_t *)v31 + 13) = v320;
        }
        else
        {
          v32 = 0;
          v33 = v320 + (v320 >> 1);
          *((uint32_t *)v31 + 14) = v33;
          v34 = gameswf::malloc_internal(5 * v33);
          for ( *((uint32_t *)v31 + 12) = v34; ; v34 = *((uint32_t *)v31 + 12) )
          {
            v35 = (gameswf::gradientRecord::Self *)(v32 + v34);
            if ( v35 != nullptr )
              gameswf::gradientRecord::gradientRecord(v35);
            v32 += 5;
            if ( v32 == 5 * v249 )
              break;
          }
          v36 = v249;
          v37 = 0;
          v279 = 0;
          v250 = v31;
          *((uint32_t *)v31 + 13) = v36;
          do
          {
            ++v279;
            v38 = *((uint32_t *)v228 + 9);
            v39 = v319;
            *(uint32_t *)(v38 + v37) = *(uint32_t *)(v319 + v37);
            *(uint8_t *)(v38 + v37 + 4) = *(uint8_t *)(v39 + v37 + 4);
            v37 += 5;
          }
          while ( v279 < *((uint32_t *)v228 + 10) );
          v31 = v250;
        }
        v40 = (gameswf::RefCounted::Self *)v322[1];
        v14 = v322[1] == 0;
        *((uint32_t *)v31 + 16) = v322[1];
        if ( !v14 )
          gameswf::RefCounted::addRef(v40);
        v41 = (gameswf::RefCounted::Self *)v322[2];
        v14 = v322[2] == 0;
        *((uint32_t *)v31 + 17) = v322[2];
        if ( !v14 )
          gameswf::RefCounted::addRef(v41);
        *((uint32_t *)v31 + 18) = v322[3];
        *((uint32_t *)v31 + 19) = v322[4];
        *((uint32_t *)v31 + 20) = v322[5];
        *((uint32_t *)v31 + 21) = v322[6];
        *((uint32_t *)v31 + 22) = v322[7];
        *((uint32_t *)v31 + 23) = v322[8];
        *((uint16_t *)v31 + 48) = v323;
        *((uint16_t *)v31 + 49) = v324;
        *((uint16_t *)v31 + 50) = v325;
        *((uint16_t *)v31 + 51) = v326;
        *((uint16_t *)v31 + 52) = v327;
      }
      v263[12] = v237;
      v42 = *((uint32_t *)self + 33);
      v264 = v42;
      v43 = *(uint32_t *)(v42 + 48);
      v44 = *(uint32_t *)(v42 + 52);
      v238 = v43 + 1;
      if ( v43 + 1 > v44 )
      {
        if ( *(uint32_t *)(v42 + 56) != 0 )
        {
          v45 = *(char **)(v42 + 44);
        }
        else
        {
          v96 = v238 + (v238 >> 1);
          *(uint32_t *)(v42 + 52) = v96;
          if ( v96 != 0 )
          {
            if ( *(uint32_t *)(v42 + 44) != 0 )
              v45 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v42 + 44), 108 * v96, 108 * v44);
            else
              v45 = (char *)gameswf::malloc_internal(108 * v96);
            *(uint32_t *)(v42 + 44) = (uint32_t)(uintptr_t)(v45);
            v43 = *(uint32_t *)(v42 + 48);
          }
          else
          {
            if ( *(uint32_t *)(v42 + 44) != 0 )
            {
              gameswf::free_internal(*(gameswf::Self **)(v42 + 44));
              v43 = *(uint32_t *)(v42 + 48);
            }
            v45 = nullptr;
            *(uint32_t *)(v42 + 44) = 0;
          }
        }
      }
      else
      {
        v45 = *(char **)(v42 + 44);
      }
      v46 = &v45[108 * v43];
      if ( v46 != nullptr )
      {
        v229 = v46 + 12;
        *(uint32_t *)v46 = ((uint32_t)(uintptr_t)&off_208F690);
        *((float *)v46 + 1) = v329;
        *((uint32_t *)v46 + 2) = v330;
        *((uint32_t *)v46 + 3) = ((uint32_t)(uintptr_t)&off_208F678);
        *((float *)v46 + 4) = v331[1];
        *((float *)v46 + 5) = v331[2];
        *((float *)v46 + 6) = v331[3];
        *((float *)v46 + 7) = v331[4];
        *((float *)v46 + 8) = v331[5];
        *((uint32_t *)v46 + 9) = (uint32_t)(uintptr_t)(v332);
        *((uint32_t *)v46 + 10) = v333;
        *((uint32_t *)v46 + 11) = v334;
        *((uint32_t *)v46 + 12) = 0;
        *((uint32_t *)v46 + 13) = 0;
        *((uint32_t *)v46 + 14) = 0;
        *((uint32_t *)v46 + 15) = 0;
        v251 = v336;
        if ( v336 <= 0 )
        {
          *((uint32_t *)v46 + 13) = v336;
        }
        else
        {
          v47 = 0;
          v48 = v336 + (v336 >> 1);
          *((uint32_t *)v46 + 14) = v48;
          v49 = gameswf::malloc_internal(5 * v48);
          for ( *((uint32_t *)v46 + 12) = v49; ; v49 = *((uint32_t *)v46 + 12) )
          {
            v50 = (gameswf::gradientRecord::Self *)(v47 + v49);
            if ( v50 != nullptr )
              gameswf::gradientRecord::gradientRecord(v50);
            v47 += 5;
            if ( v47 == 5 * v251 )
              break;
          }
          v51 = v251;
          v52 = 0;
          v280 = 0;
          v252 = v46;
          *((uint32_t *)v46 + 13) = v51;
          do
          {
            ++v280;
            v53 = *((uint32_t *)v229 + 9);
            v54 = v335;
            *(uint32_t *)(v53 + v52) = *(uint32_t *)(v335 + v52);
            *(uint8_t *)(v53 + v52 + 4) = *(uint8_t *)(v54 + v52 + 4);
            v52 += 5;
          }
          while ( v280 < *((uint32_t *)v229 + 10) );
          v46 = v252;
        }
        v55 = (gameswf::RefCounted::Self *)v338[1];
        v14 = v338[1] == 0;
        *((uint32_t *)v46 + 16) = v338[1];
        if ( !v14 )
          gameswf::RefCounted::addRef(v55);
        v56 = (gameswf::RefCounted::Self *)v338[2];
        v14 = v338[2] == 0;
        *((uint32_t *)v46 + 17) = v338[2];
        if ( !v14 )
          gameswf::RefCounted::addRef(v56);
        *((uint32_t *)v46 + 18) = v338[3];
        *((uint32_t *)v46 + 19) = v338[4];
        *((uint32_t *)v46 + 20) = v338[5];
        *((uint32_t *)v46 + 21) = v338[6];
        *((uint32_t *)v46 + 22) = v338[7];
        *((uint32_t *)v46 + 23) = v338[8];
        *((uint16_t *)v46 + 48) = v339;
        *((uint16_t *)v46 + 49) = v340;
        *((uint16_t *)v46 + 50) = v341;
        *((uint16_t *)v46 + 51) = v342;
        *((uint16_t *)v46 + 52) = v343;
      }
      *(uint32_t *)(v264 + 48) = v238;
      v328 = (void (**)(gameswf::BaseLineStyle::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208F690));
      gameswf::FillStyle::Destroy((gameswf::FillStyle::Self *)v331);
      v312 = (void (**)(gameswf::BaseLineStyle::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208F690));
      v328 = (void (**)(gameswf::BaseLineStyle::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208EB20));
      gameswf::FillStyle::Destroy((gameswf::FillStyle::Self *)v315);
      ++v232;
      v312 = (void (**)(gameswf::BaseLineStyle::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208EB20));
    }
    while ( *((uint32_t *)self + 36) > v232 );
  }
  gameswf::ShapeCharacterDef::read(*((gameswf::ShapeCharacterDef::Self **)self + 32), a3, a4, false, a6);
  gameswf::Stream::align(a3);
  gameswf::ShapeCharacterDef::read(*((gameswf::ShapeCharacterDef::Self **)self + 33), a3, a4, false, a6);
  v57 = *((uint32_t *)self + 8);
  v58 = *(uint32_t *)(*((uint32_t *)self + 32) + 32);
  v274 = v58;
  if ( v58 < v57 )
  {
    v59 = *(uint32_t *)(*((uint32_t *)self + 32) + 32);
    v269 = *((uint32_t *)self + 8);
    v60 = 84 * v58;
    do
    {
      v61 = v60;
      ++v59;
      v60 += 84;
      (**(void (***)(int))(*((uint32_t *)self + 7) + v61))(*((uint32_t *)self + 7) + v61);
    }
    while ( v59 != v269 );
    v57 = v269;
  }
  if ( v274 != 0 )
  {
    v62 = *((uint32_t *)self + 9);
    if ( v274 > v62 && *((uint32_t *)self + 10) == 0 )
    {
      v218 = v274 + (v274 >> 1);
      *((uint32_t *)self + 9) = v218;
      if ( v218 != 0 )
      {
        v224 = *((gameswf::Self **)self + 7);
        if ( v224 != nullptr )
        {
          *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v224, 84 * v218, 84 * v62));
        }
        else
        {
          v225 = 0;
          *((uint32_t *)self + 7) = gameswf::malloc_internal(84 * v218);
        }
      }
      else
      {
        if ( *((uint32_t *)self + 7) != 0 )
        {
          v225 = 84 * v62;
          gameswf::free_internal(*((gameswf::Self **)self + 7));
        }
        *((uint32_t *)self + 7) = 0;
      }
    }
  }
  if ( v274 > v57 )
  {
    v63 = 84 * v57;
    do
    {
      if ( *((uint32_t *)self + 7) + v63 != 0 )
        gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)(*((uint32_t *)self + 7) + v63));
      ++v57;
      v63 += 84;
    }
    while ( v57 != v274 );
  }
  *((uint32_t *)self + 8) = v274;
  if ( v274 > 0 )
  {
    v281 = 0;
    v257 = 0;
    do
    {
      v64 = (uint32_t *)(*((uint32_t *)self + 7) + v281);
      v270 = v64;
      v65 = v64[10];
      v66 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 32) + 28) + v281 + 40);
      v67 = v64 + 9;
      if ( v66 != 0 )
      {
        v253 = v64[11];
        if ( v66 > v253 && v64[12] == 0 )
        {
          v68 = v66 + (v66 >> 1);
          v270[11] = v68;
          if ( v68 != 0 )
          {
            v227 = v65;
            if ( v270[9] != 0 )
            {
              v175 = gameswf::realloc_internal((gameswf::Self *)v270[9], 5 * v68, 5 * v253);
            }
            else
            {
              v225 = 0;
              v175 = (void *)gameswf::malloc_internal(5 * v68);
            }
            v270[9] = (uint32_t)(uintptr_t)(v175);
            v65 = v227;
          }
          else
          {
            if ( v270[9] != 0 )
            {
              v226 = v65;
              v225 = 5 * v253;
              gameswf::free_internal((gameswf::Self *)v270[9]);
              v65 = v226;
            }
            v270[9] = 0;
          }
        }
      }
      if ( v66 > v65 )
      {
        v69 = 5 * v65;
        v244 = v66;
        v70 = 5 * v66;
        v71 = v67;
        v275 = v70;
        v72 = v69;
        do
        {
          if ( *v71 + v72 != 0 )
            gameswf::gradientRecord::gradientRecord((gameswf::gradientRecord::Self *)(*v71 + v72));
          v72 += 5;
        }
        while ( v72 != v275 );
        v66 = v244;
      }
      ++v257;
      v281 += 84;
      v270[10] = v66;
    }
    while ( *((uint32_t *)self + 8) > v257 );
  }
  v73 = *((uint32_t *)self + 12);
  v74 = *(uint32_t *)(*((uint32_t *)self + 32) + 48);
  v276 = v74;
  if ( v74 < v73 )
  {
    v75 = *(uint32_t *)(*((uint32_t *)self + 32) + 48);
    v271 = *((uint32_t *)self + 12);
    v76 = 108 * v74;
    do
    {
      v77 = v76;
      ++v75;
      v76 += 108;
      (**(void (***)(int, int))(*((uint32_t *)self + 11) + v77))(*((uint32_t *)self + 11) + v77, v225);
    }
    while ( v75 != v271 );
    v73 = v271;
  }
  if ( v276 != 0 )
  {
    v78 = *((uint32_t *)self + 13);
    if ( v276 > v78 && *((uint32_t *)self + 14) == 0 )
    {
      v219 = v276 + (v276 >> 1);
      *((uint32_t *)self + 13) = v219;
      if ( v219 != 0 )
      {
        v223 = *((gameswf::Self **)self + 11);
        if ( v223 != nullptr )
          *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v223, 108 * v219, 108 * v78));
        else
          *((uint32_t *)self + 11) = gameswf::malloc_internal(108 * v219);
      }
      else
      {
        if ( *((uint32_t *)self + 11) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 11));
        *((uint32_t *)self + 11) = 0;
      }
    }
  }
  if ( v276 > v73 )
  {
    v79 = 108 * v73;
    do
    {
      if ( *((uint32_t *)self + 11) + v79 != 0 )
        gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)(*((uint32_t *)self + 11) + v79));
      ++v73;
      v79 += 108;
    }
    while ( v73 != v276 );
  }
  v80 = *((uint32_t *)self + 32);
  v81 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 12) = v276;
  v265 = v81;
  result = *(uint32_t *)(v80 + 64);
  v245 = result;
  if ( result < v81 )
  {
    v282 = result;
    v258 = 40 * result;
    do
    {
      v272 = (uint32_t *)(*((uint32_t *)self + 15) + v258);
      result = (int)(uintptr_t)(v272);
      v277 = v272 + 5;
      v83 = v272[6];
      if ( v83 < 0 )
      {
        v84 = 16 * v83;
        do
        {
          result = *v277 + v84;
          if ( result != 0 )
            result = (int)(uintptr_t)(gameswf::Edge::Construct((gameswf::Edge::Self *)(*v277 + v84)));
          v84 += 16;
          ++v83;
        }
        while ( v83 != 0 );
      }
      v85 = v272[8];
      v272[6] = 0;
      if ( v85 == 0 )
      {
        result = v272[5];
        v272[7] = 0;
        if ( result != 0 )
          result = gameswf::free_internal((gameswf::Self *)result);
        v272[5] = 0;
      }
      ++v282;
      v258 += 40;
    }
    while ( v282 != v265 );
  }
  if ( v245 != 0 )
  {
    result = *((uint32_t *)self + 17);
    if ( v245 > result && *((uint32_t *)self + 18) == 0 )
    {
      v180 = v245 + (v245 >> 1);
      *((uint32_t *)self + 17) = v180;
      if ( v180 != 0 )
      {
        v222 = *((gameswf::Self **)self + 15);
        if ( v222 != nullptr )
          result = (int)(uintptr_t)(gameswf::realloc_internal(v222, 40 * v180, 40 * result));
        else
          result = gameswf::malloc_internal(40 * v180);
        *((uint32_t *)self + 15) = result;
      }
      else
      {
        if ( *((uint32_t *)self + 15) != 0 )
          result = gameswf::free_internal(*((gameswf::Self **)self + 15));
        *((uint32_t *)self + 15) = 0;
      }
    }
  }
  if ( v245 > v265 )
  {
    v86 = v265;
    v87 = 40 * v265;
    do
    {
      result = *((uint32_t *)self + 15) + v87;
      if ( result != 0 )
        result = (int)(uintptr_t)(gameswf::Path::Construct((gameswf::Path::Self *)(*((uint32_t *)self + 15) + v87)));
      ++v86;
      v87 += 40;
    }
    while ( v86 != v245 );
  }
  *((uint32_t *)self + 16) = v245;
  if ( v245 > 0 )
  {
    v259 = 0;
    v246 = 0;
    v88 = self;
    do
    {
      v283 = *((uint32_t *)v88 + 15) + v259;
      v89 = *(uint32_t *)(v283 + 24);
      v273 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v88 + 32) + 60) + v259 + 24);
      if ( v273 != 0 )
      {
        v90 = *(uint32_t *)(v283 + 28);
        if ( v273 > v90 && *(uint32_t *)(v283 + 32) == 0 )
        {
          v146 = v273 + (v273 >> 1);
          *(uint32_t *)(v283 + 28) = v146;
          if ( v146 != 0 )
          {
            v176 = *(gameswf::Self **)(v283 + 20);
            if ( v176 != nullptr )
              v177 = gameswf::realloc_internal(v176, 16 * v146, 16 * v90);
            else
              v177 = (void *)gameswf::malloc_internal(16 * v146);
            *(uint32_t *)(v283 + 20) = (uint32_t)(uintptr_t)(v177);
          }
          else
          {
            if ( *(uint32_t *)(v283 + 20) != 0 )
              gameswf::free_internal(*(gameswf::Self **)(v283 + 20));
            *(uint32_t *)(v283 + 20) = 0;
          }
        }
      }
      result = 16 * v89;
      if ( v273 > v89 )
      {
        v278 = (uint32_t *)(v283 + 20);
        v91 = v89;
        v92 = 16 * v89;
        do
        {
          result = *v278 + v92;
          if ( result != 0 )
            result = (int)(uintptr_t)(gameswf::Edge::Construct((gameswf::Edge::Self *)(*v278 + v92)));
          ++v91;
          v92 += 16;
        }
        while ( v91 != v273 );
      }
      v88 = self;
      ++v246;
      v259 += 40;
      *(uint32_t *)(v283 + 24) = v273;
    }
    while ( *((uint32_t *)self + 16) > v246 );
  }
  return result;
}


