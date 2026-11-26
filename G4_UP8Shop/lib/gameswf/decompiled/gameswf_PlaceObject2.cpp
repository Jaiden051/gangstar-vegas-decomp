#include "Core/Utils/DecompTypes.h"
#include "gameswf_PlaceObject2.h"

// ----------------------------------------------------------------------------
// Function: gameswf::PlaceObject2::executeState  (binary VA: 0x109c750)
// Original: gameswf::PlaceObject2::executeState
// ----------------------------------------------------------------------------
int gameswf::PlaceObject2::executeState(gameswf::PlaceObject2::Self *self, gameswf::Character::Self *a2)
{
  return G4_VCALL<int>(self, 8, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::PlaceObject2::getDepthIdOfReplaceOrAddTag  (binary VA: 0x109cbc0)
// Original: gameswf::PlaceObject2::getDepthIdOfReplaceOrAddTag
// ----------------------------------------------------------------------------
int gameswf::PlaceObject2::getDepthIdOfReplaceOrAddTag(gameswf::PlaceObject2::Self *self)
{
  char v1;
  int result;
  int v3;

  v1 = *((uint8_t *)self + 10);
  if ( v1 == 2 || (result = -1, v1 == 0) )
  {
    v3 = 0xFFFF;
    if ( *((uint16_t *)self + 10) == 4 )
      v3 = *((uint16_t *)self + 8);
    return v3 | (*((uint16_t *)self + 7) << 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::PlaceObject2::executeStateReverse  (binary VA: 0x109cc00)
// Original: gameswf::PlaceObject2::executeStateReverse
// ----------------------------------------------------------------------------
int gameswf::PlaceObject2::executeStateReverse(gameswf::PlaceObject2::Self *self, gameswf::Character::Self *a2, char *a3)
{
  int result;
  int v4;
  float v5; // xmm0_4
  uint16_t v6;
  uint8_t v7;
  char *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;

  result = *((uint8_t *)self + 10);
  if ( (uint8_t)result == 1 )
  {
    v5 = 0.0;
    v6 = *((uint16_t *)self + 6);
    if ( v6 != 0 )
      v5 = (float)((float)((float)0 * 65536.0) + (float)v6) * 0.000015259022f;
    v7 = *((uint8_t *)self + 8);
    v8 = nullptr;
    if ( v7 != 0 )
      v8 = (char *)self + v7;
    v9 = *((uint32_t **)self + 7);
    v10 = *((uint32_t **)self + 6);
    if ( v9 == nullptr )
      v9 = (uint32_t *)(gameswf::Matrix::identity);
    if ( v10 == nullptr )
      v10 = (uint32_t *)(gameswf::CxForm::identity);
    return G4_VCALL<int>(a2, 192, *((uint16_t *)self + 7), v10, v9, v8, COERCE_FLOAT(LODWORD(v5)), *((uint16_t *)self + 9));
  }
  else if ( (uint8_t)result != 0 )
  {
    if ( (uint8_t)result == 2 )
    {
      v11 = G4_VCALL<int>(a2, 168, a3, *((uint16_t *)self + 7), -1);
      if ( v11 != 0 )
        return G4_VCALL<int>(v11, 12, a2);
      else
        return gameswf::logError(
                 (gameswf::Self *)"reverse REPLACE can't find previous replace or add tag(%d, %d)\n",
                 a3,
                 *((uint16_t *)self + 7));
    }
  }
  else
  {
    v4 = -1;
    if ( *((uint16_t *)self + 10) == 4 )
      v4 = *((uint16_t *)self + 8);
    return G4_VCALL<int>(a2, 204, *((uint16_t *)self + 7), v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::PlaceObject2::execute  (binary VA: 0x109d4c0)
// Original: gameswf::PlaceObject2::execute
// ----------------------------------------------------------------------------
int gameswf::PlaceObject2::execute(gameswf::PlaceObject2::Self *self, gameswf::Character::Self *a2)
{
  int result;
  float v3; // xmm0_4
  uint16_t v4;
  uint8_t v5;
  uint8_t v6;
  uint8_t v7;
  uint8_t v8;
  char *v9;
  int v10;
  uint8_t v11;
  char *v12;
  uint8_t v13;
  char *v14;
  int v15;
  int v16;
  float v17; // xmm0_4
  uint16_t v18;
  uint8_t v19;
  char *v20;
  uint8_t v21;
  char *v22;
  uint8_t v23;
  float v24; // xmm0_4
  uint16_t v25;
  uint8_t v26;
  char *v27;
  uint8_t v28;
  uint8_t v29;
  char *v30;
  char *v31;
  char *v32;
  char *v33;
  gameswf::Self *v34;
  int v35;
  uint32_t *v36;
  int v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef bool _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef void (*_g4_t_v63)(gameswf::Character::Self *, uint32_t, char *, char *, gameswf::Self **, int, bool, char *, char *, char *, uint32_t, int, int);
  typedef int _g4_t_v64;
  typedef char *_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef char *_g4_t_v68;
  typedef char *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef char *_g4_t_v71;
  typedef gameswf::Self *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v38)) > _g4_s0 ? (12u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v39)) > _g4_s1 ? (16u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v40)) > _g4_s2 ? (20u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v41)) > _g4_s3 ? (24u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v42)) > _g4_s4 ? (28u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v43)) > _g4_s5 ? (32u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v44)) > _g4_s6 ? (36u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v45)) > _g4_s7 ? (40u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v46)) > _g4_s8 ? (44u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v47)) > _g4_s9 ? (48u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v48)) > _g4_s10 ? (52u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v49)) > _g4_s11 ? (56u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v50)) > _g4_s12 ? (60u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v51)) > _g4_s13 ? (60u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v52)) > _g4_s14 ? (64u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v53)) > _g4_s15 ? (68u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v54)) > _g4_s16 ? (72u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v55)) > _g4_s17 ? (76u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v56)) > _g4_s18 ? (80u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v57)) > _g4_s19 ? (80u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v58)) > _g4_s20 ? (84u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v59)) > _g4_s21 ? (84u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v60)) > _g4_s22 ? (88u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v61)) > _g4_s23 ? (88u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v62)) > _g4_s24 ? (92u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v63)) > _g4_s25 ? (92u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v64)) > _g4_s26 ? (96u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v65)) > _g4_s27 ? (96u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v66)) > _g4_s28 ? (100u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v67)) > _g4_s29 ? (100u + sizeof(_g4_t_v67)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v68)) > _g4_s30 ? (104u + sizeof(_g4_t_v68)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v69)) > _g4_s31 ? (104u + sizeof(_g4_t_v69)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v70)) > _g4_s32 ? (108u + sizeof(_g4_t_v70)) : _g4_s32,
    _g4_s34 = (108u + sizeof(_g4_t_v71)) > _g4_s33 ? (108u + sizeof(_g4_t_v71)) : _g4_s33,
    _g4_s35 = (112u + sizeof(_g4_t_v72)) > _g4_s34 ? (112u + sizeof(_g4_t_v72)) : _g4_s34,
    _g4_s36 = (116u + sizeof(_g4_t_v73)) > _g4_s35 ? (116u + sizeof(_g4_t_v73)) : _g4_s35,
    _g4_s37 = (120u + sizeof(_g4_t_v74)) > _g4_s36 ? (120u + sizeof(_g4_t_v74)) : _g4_s36,
    _g4_s38 = (124u + sizeof(_g4_t_v75)) > _g4_s37 ? (124u + sizeof(_g4_t_v75)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 72u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 92u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 96u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 100u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 100u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 104u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 104u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 108u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 108u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 112u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 116u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 120u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 124u);

  result = *((uint8_t *)self + 10);
  if ( (uint8_t)result == 1 )
  {
    v17 = 0.0;
    v18 = *((uint16_t *)self + 6);
    if ( v18 != 0 )
      v17 = (float)((float)((float)0 * 65536.0) + (float)v18) * 0.000015259022f;
    v19 = *((uint8_t *)self + 8);
    v20 = nullptr;
    if ( v19 != 0 )
      v20 = (char *)self + v19;
    v21 = *((uint8_t *)self + 7);
    v67 = nullptr;
    if ( v21 != 0 )
      v67 = (char *)self + v21;
    v22 = nullptr;
    v23 = *((uint8_t *)self + 6);
    if ( v23 != 0 )
      v22 = (char *)self + v23;
    return G4_VCALL<int>(a2, 192, *((uint16_t *)self + 7), v22, v67, v20, COERCE_FLOAT(LODWORD(v17)), *((uint16_t *)self + 9), v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v52, v53, v54, v55, v56, v58, v60, v62, v64, v67, *((uint16_t *)self + 9), *(uint32_t *)(*(uint32_t *)a2 + 192), v72, v73, v74, v75);
  }
  else if ( (uint8_t)result != 0 )
  {
    if ( (uint8_t)result == 2 )
    {
      v24 = 0.0;
      v25 = *((uint16_t *)self + 6);
      if ( v25 != 0 )
        v24 = (float)((float)((float)0 * 65536.0) + (float)v25) * 0.000015259022f;
      v26 = *((uint8_t *)self + 8);
      v27 = nullptr;
      if ( v26 != 0 )
        v27 = (char *)self + v26;
      v28 = *((uint8_t *)self + 7);
      if ( v28 != 0 )
      {
        v71 = (char *)self + v28;
      }
      else
      {
        v33 = *((char **)self + 7);
        if ( v33 == nullptr )
          v33 = (char *)gameswf::Matrix::identity;
        v71 = v33;
      }
      v29 = *((uint8_t *)self + 6);
      if ( v29 != 0 )
      {
        v69 = (char *)self + v29;
      }
      else
      {
        v30 = *((char **)self + 6);
        if ( v30 == nullptr )
          v30 = (char *)gameswf::CxForm::identity;
        v69 = v30;
      }
      v31 = (char *)(&byte_20E5000);
      if ( *((uint8_t *)self + 5) != 0 )
      {
        v31 = *(char **)((char *)self + *((uint8_t *)self + 5));
        if ( v31 == nullptr )
          v31 = (char *)(&byte_20E5000);
      }
      if ( *v31 == -1 )
        v32 = *((char **)v31 + 3);
      else
        v32 = v31 + 1;
      return G4_VCALL<int>(a2, 196, *((uint16_t *)self + 8), v32, *((uint16_t *)self + 7), v69, v71, v27, COERCE_FLOAT(LODWORD(v24)), *((uint16_t *)self + 9), v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v52, v53, v54, v55, v56, v58, v60, *((uint16_t *)self + 9), *((uint16_t *)self + 7), *(uint32_t *)(*(uint32_t *)a2 + 196), v69, v71, v72, v73, v74, v75);
    }
  }
  else
  {
    v70 = *((uint8_t *)self + 11) & 1;
    v61 = *((uint16_t *)self + 9);
    v3 = 0.0;
    v63 = *(void (**)(gameswf::Character::Self *, uint32_t, char *, char *, gameswf::Self **, int, bool, char *, char *, char *, uint32_t, int, int))(*(uint32_t *)a2 + 188);
    v4 = *((uint16_t *)self + 6);
    if ( v4 != 0 )
      v3 = (float)((float)((float)0 * 65536.0) + (float)v4) * 0.000015259022f;
    v5 = *((uint8_t *)self + 8);
    v68 = nullptr;
    if ( v5 != 0 )
      v68 = (char *)self + v5;
    v6 = *((uint8_t *)self + 7);
    v66 = nullptr;
    if ( v6 != 0 )
      v66 = (char *)self + v6;
    v7 = *((uint8_t *)self + 6);
    v65 = nullptr;
    if ( v7 != 0 )
      v65 = (char *)self + v7;
    v57 = *((uint16_t *)self + 7);
    v8 = *((uint8_t *)self + 9);
    v59 = *((uint16_t *)self + 10) != 4;
    if ( v8 != 0 )
    {
      v73 = 0;
      v9 = (char *)self + v8;
      v74 = 0;
      v75 = 0;
      v72 = nullptr;
      v10 = *((uint32_t *)v9 + 1);
      if ( v10 > 0 )
      {
        v51 = (uint32_t *)(v9);
        v74 = v10 + (v10 >> 1);
        v34 = (gameswf::Self *)gameswf::malloc_internal(4 * v74);
        v72 = v34;
        v35 = 0;
        while ( 1 )
        {
          v36 = (uint32_t *)((char *)v34 + 4 * v35);
          if ( v36 != nullptr )
            *v36 = 0;
          if ( ++v35 == v10 )
            break;
          v34 = v72;
        }
        v73 = v35;
        v37 = 0;
        do
        {
          *((uint32_t *)v72 + v37) = *(uint32_t *)(*v51 + 4 * v37);
          ++v37;
        }
        while ( v37 < v73 );
      }
      else
      {
        v73 = *((uint32_t *)v9 + 1);
      }
    }
    else
    {
      v72 = nullptr;
      v73 = 0;
      v74 = 0;
      v75 = 0;
    }
    v11 = *((uint8_t *)self + 5);
    v12 = (char *)(&byte_20E5000);
    if ( v11 != 0 )
    {
      v12 = *(char **)((char *)self + v11);
      if ( v12 == nullptr )
        v12 = (char *)(&byte_20E5000);
    }
    v13 = *((uint8_t *)self + 4);
    v14 = (char *)(&byte_20E5000);
    if ( v13 != 0 )
    {
      v14 = *(char **)((char *)self + v13);
      if ( v14 == nullptr )
        v14 = (char *)(&byte_20E5000);
    }
    v63(a2, *((uint16_t *)self + 8), v14, v12, &v72, v57, v59, v65, v66, v68, LODWORD(v3), v61, v70);
    v15 = v73;
    if ( v73 < 0 )
    {
      v16 = 4 * v73;
      do
      {
        if ( (gameswf::Self *)((char *)v72 + v16) != nullptr )
          *(uint32_t *)((char *)v72 + v16) = 0;
        v16 += 4;
        ++v15;
      }
      while ( v15 != 0 );
    }
    result = v75;
    v73 = 0;
    if ( v75 == 0 )
    {
      result = (int)(uintptr_t)(v72);
      v74 = 0;
      if ( v72 != nullptr )
        return gameswf::free_internal(v72);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::PlaceObject2::read  (binary VA: 0x10a25e0)
// Original: gameswf::PlaceObject2::read
// ----------------------------------------------------------------------------
int gameswf::PlaceObject2::read(long double a1, __m128 a2, int **self, gameswf::Player::Self *a4, gameswf::Stream::Self *a5, int a6, int a7)
{
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  uint8_t v20;
  void *v21;
  int v22;
  int v23;
  int v24;
  int *v25;
  int v26;
  uint8_t v27;
  int *v28;
  int v29;
  int v30;
  int v31;
  int *v32;
  int v33;
  uint8_t v34;
  uint32_t *v35;
  uint32_t *v36;
  uint8_t v37;
  int v38;
  void *v39;
  int v40;
  int v41;
  char *v42;
  char *v43;
  uint32_t *v44;
  unsigned int v45;
  const char *U32;
  const char *v47;
  int i;
  int v49;
  int v50;
  uint8_t v51;
  gameswf::Self **v52;
  gameswf::Self *v53;
  gameswf::Self *v54;
  gameswf::Self *v55;
  int *v56;
  int v57;
  int j;
  gameswf::MemBuf::Self *v59;
  bool v60;
  int v61;
  int v62;
  uint32_t *v63;
  int v64;
  gameswf::Self *v65;
  int v66;
  char v68;
  int v69;
  int v70;
  int v71;
  int v72;
  gameswf::Self *v73;
  int v74;
  uint32_t *v75;
  int v76;
  __m128 v77;
  int index;
  int v79;
  int v80;
  void *v81;
  uint8_t v82;
  gameswf::Matrix::Self *v83;
  int v84;
  int v85;
  uint8_t v86;
  gameswf::CxForm::Self *v87;
  int v88;
  gameswf::Self *v89;
  typedef gameswf::Self **_g4_t_v90;
  typedef gameswf::Self **_g4_t_v91;
  typedef gameswf::ASObject::Self *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef char _g4_t_v95;
  typedef bool _g4_t_v96;
  typedef int16_t _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int16_t _g4_t_v99;
  typedef int16_t _g4_t_v100;
  typedef uint16_t _g4_t_v101;
  typedef bool _g4_t_v102;
  typedef bool _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef bool _g4_t_v111;
  typedef int _g4_t_v112;
  typedef char _g4_t_v113;
  typedef int _g4_t_Position;
  typedef int _g4_t_UInt;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int16_t _g4_t_U16;
  typedef bool _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef unsigned int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef gameswf::Self *_g4_t_v124;
  typedef int _g4_t_v125;
  typedef gameswf::hash<int, gameswf::CxForm::Self *, gameswf::fixed_size_hash<int>> *_g4_t_v126;
  typedef int _g4_t_v127;
  typedef gameswf::Matrix::Self *_g4_t_v128;
  typedef gameswf::CxForm::Self *_g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef gameswf::hash<int, gameswf::Matrix::Self *, gameswf::fixed_size_hash<int>> *_g4_t_v132;
  typedef bool _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef uint16_t _g4_t_v138;
  typedef int _g4_t_v139[4];
  typedef int _g4_t_v140[4];
  typedef gameswf::Matrix::Self *_g4_t_v141;
  typedef int _g4_t_v142[4];
  typedef gameswf::CxForm::Self *_g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef gameswf::Matrix::Self *_g4_t_v147;
  typedef int _g4_t_v148;
  typedef gameswf::CxForm::Self *_g4_t_v149;
  typedef int _g4_t_v150;
  typedef unsigned int _g4_t_v151[4];
  typedef int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_U8;
  typedef gameswf::Self *_g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef uint8_t _g4_t_v161[12];
  typedef gameswf::Self *_g4_t_v162;
  typedef int16_t _g4_t_v163;
  typedef int16_t _g4_t_v164;
  typedef uint8_t _g4_t_v165[12];
  typedef gameswf::Self *_g4_t_v166;
  typedef int16_t _g4_t_v167;
  typedef char _g4_t_v168;
  typedef char _g4_t_v169;
  typedef uint32_t _g4_t_v170[6];
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (0u + sizeof(_g4_t_v90)) > _g4_s0 ? (0u + sizeof(_g4_t_v90)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v91)) > _g4_s1 ? (0u + sizeof(_g4_t_v91)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v92)) > _g4_s2 ? (4u + sizeof(_g4_t_v92)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v93)) > _g4_s3 ? (4u + sizeof(_g4_t_v93)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v94)) > _g4_s4 ? (4u + sizeof(_g4_t_v94)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v95)) > _g4_s5 ? (8u + sizeof(_g4_t_v95)) : _g4_s5,
    _g4_s7 = (13u + sizeof(_g4_t_v96)) > _g4_s6 ? (13u + sizeof(_g4_t_v96)) : _g4_s6,
    _g4_s8 = (14u + sizeof(_g4_t_v97)) > _g4_s7 ? (14u + sizeof(_g4_t_v97)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v98)) > _g4_s8 ? (16u + sizeof(_g4_t_v98)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v99)) > _g4_s9 ? (20u + sizeof(_g4_t_v99)) : _g4_s9,
    _g4_s11 = (22u + sizeof(_g4_t_v100)) > _g4_s10 ? (22u + sizeof(_g4_t_v100)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v101)) > _g4_s11 ? (24u + sizeof(_g4_t_v101)) : _g4_s11,
    _g4_s13 = (26u + sizeof(_g4_t_v102)) > _g4_s12 ? (26u + sizeof(_g4_t_v102)) : _g4_s12,
    _g4_s14 = (27u + sizeof(_g4_t_v103)) > _g4_s13 ? (27u + sizeof(_g4_t_v103)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v104)) > _g4_s14 ? (28u + sizeof(_g4_t_v104)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v105)) > _g4_s15 ? (32u + sizeof(_g4_t_v105)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v106)) > _g4_s16 ? (36u + sizeof(_g4_t_v106)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v107)) > _g4_s17 ? (36u + sizeof(_g4_t_v107)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v108)) > _g4_s18 ? (40u + sizeof(_g4_t_v108)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v109)) > _g4_s19 ? (40u + sizeof(_g4_t_v109)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v110)) > _g4_s20 ? (40u + sizeof(_g4_t_v110)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v111)) > _g4_s21 ? (44u + sizeof(_g4_t_v111)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v112)) > _g4_s22 ? (48u + sizeof(_g4_t_v112)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v113)) > _g4_s23 ? (48u + sizeof(_g4_t_v113)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_Position)) > _g4_s24 ? (48u + sizeof(_g4_t_Position)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_UInt)) > _g4_s25 ? (52u + sizeof(_g4_t_UInt)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v116)) > _g4_s26 ? (52u + sizeof(_g4_t_v116)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v117)) > _g4_s27 ? (52u + sizeof(_g4_t_v117)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_U16)) > _g4_s28 ? (52u + sizeof(_g4_t_U16)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v119)) > _g4_s29 ? (56u + sizeof(_g4_t_v119)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v120)) > _g4_s30 ? (56u + sizeof(_g4_t_v120)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v121)) > _g4_s31 ? (56u + sizeof(_g4_t_v121)) : _g4_s31,
    _g4_s33 = (60u + sizeof(_g4_t_v122)) > _g4_s32 ? (60u + sizeof(_g4_t_v122)) : _g4_s32,
    _g4_s34 = (64u + sizeof(_g4_t_v123)) > _g4_s33 ? (64u + sizeof(_g4_t_v123)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_v124)) > _g4_s34 ? (64u + sizeof(_g4_t_v124)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v125)) > _g4_s35 ? (64u + sizeof(_g4_t_v125)) : _g4_s35,
    _g4_s37 = (64u + sizeof(_g4_t_v126)) > _g4_s36 ? (64u + sizeof(_g4_t_v126)) : _g4_s36,
    _g4_s38 = (68u + sizeof(_g4_t_v127)) > _g4_s37 ? (68u + sizeof(_g4_t_v127)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v128)) > _g4_s38 ? (68u + sizeof(_g4_t_v128)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v129)) > _g4_s39 ? (68u + sizeof(_g4_t_v129)) : _g4_s39,
    _g4_s41 = (68u + sizeof(_g4_t_v130)) > _g4_s40 ? (68u + sizeof(_g4_t_v130)) : _g4_s40,
    _g4_s42 = (68u + sizeof(_g4_t_v131)) > _g4_s41 ? (68u + sizeof(_g4_t_v131)) : _g4_s41,
    _g4_s43 = (68u + sizeof(_g4_t_v132)) > _g4_s42 ? (68u + sizeof(_g4_t_v132)) : _g4_s42,
    _g4_s44 = (72u + sizeof(_g4_t_v133)) > _g4_s43 ? (72u + sizeof(_g4_t_v133)) : _g4_s43,
    _g4_s45 = (72u + sizeof(_g4_t_v134)) > _g4_s44 ? (72u + sizeof(_g4_t_v134)) : _g4_s44,
    _g4_s46 = (72u + sizeof(_g4_t_v135)) > _g4_s45 ? (72u + sizeof(_g4_t_v135)) : _g4_s45,
    _g4_s47 = (72u + sizeof(_g4_t_v136)) > _g4_s46 ? (72u + sizeof(_g4_t_v136)) : _g4_s46,
    _g4_s48 = (72u + sizeof(_g4_t_v137)) > _g4_s47 ? (72u + sizeof(_g4_t_v137)) : _g4_s47,
    _g4_s49 = (72u + sizeof(_g4_t_v138)) > _g4_s48 ? (72u + sizeof(_g4_t_v138)) : _g4_s48,
    _g4_s50 = (80u + sizeof(_g4_t_v139)) > _g4_s49 ? (80u + sizeof(_g4_t_v139)) : _g4_s49,
    _g4_s51 = (96u + sizeof(_g4_t_v140)) > _g4_s50 ? (96u + sizeof(_g4_t_v140)) : _g4_s50,
    _g4_s52 = (112u + sizeof(_g4_t_v141)) > _g4_s51 ? (112u + sizeof(_g4_t_v141)) : _g4_s51,
    _g4_s53 = (128u + sizeof(_g4_t_v142)) > _g4_s52 ? (128u + sizeof(_g4_t_v142)) : _g4_s52,
    _g4_s54 = (144u + sizeof(_g4_t_v143)) > _g4_s53 ? (144u + sizeof(_g4_t_v143)) : _g4_s53,
    _g4_s55 = (160u + sizeof(_g4_t_v144)) > _g4_s54 ? (160u + sizeof(_g4_t_v144)) : _g4_s54,
    _g4_s56 = (176u + sizeof(_g4_t_v145)) > _g4_s55 ? (176u + sizeof(_g4_t_v145)) : _g4_s55,
    _g4_s57 = (192u + sizeof(_g4_t_v146)) > _g4_s56 ? (192u + sizeof(_g4_t_v146)) : _g4_s56,
    _g4_s58 = (208u + sizeof(_g4_t_v147)) > _g4_s57 ? (208u + sizeof(_g4_t_v147)) : _g4_s57,
    _g4_s59 = (224u + sizeof(_g4_t_v148)) > _g4_s58 ? (224u + sizeof(_g4_t_v148)) : _g4_s58,
    _g4_s60 = (240u + sizeof(_g4_t_v149)) > _g4_s59 ? (240u + sizeof(_g4_t_v149)) : _g4_s59,
    _g4_s61 = (252u + sizeof(_g4_t_v150)) > _g4_s60 ? (252u + sizeof(_g4_t_v150)) : _g4_s60,
    _g4_s62 = (256u + sizeof(_g4_t_v151)) > _g4_s61 ? (256u + sizeof(_g4_t_v151)) : _g4_s61,
    _g4_s63 = (272u + sizeof(_g4_t_v152)) > _g4_s62 ? (272u + sizeof(_g4_t_v152)) : _g4_s62,
    _g4_s64 = (276u + sizeof(_g4_t_v153)) > _g4_s63 ? (276u + sizeof(_g4_t_v153)) : _g4_s63,
    _g4_s65 = (280u + sizeof(_g4_t_v154)) > _g4_s64 ? (280u + sizeof(_g4_t_v154)) : _g4_s64,
    _g4_s66 = (284u + sizeof(_g4_t_v155)) > _g4_s65 ? (284u + sizeof(_g4_t_v155)) : _g4_s65,
    _g4_s67 = (288u + sizeof(_g4_t_U8)) > _g4_s66 ? (288u + sizeof(_g4_t_U8)) : _g4_s66,
    _g4_s68 = (292u + sizeof(_g4_t_v157)) > _g4_s67 ? (292u + sizeof(_g4_t_v157)) : _g4_s67,
    _g4_s69 = (296u + sizeof(_g4_t_v158)) > _g4_s68 ? (296u + sizeof(_g4_t_v158)) : _g4_s68,
    _g4_s70 = (300u + sizeof(_g4_t_v159)) > _g4_s69 ? (300u + sizeof(_g4_t_v159)) : _g4_s69,
    _g4_s71 = (304u + sizeof(_g4_t_v160)) > _g4_s70 ? (304u + sizeof(_g4_t_v160)) : _g4_s70,
    _g4_s72 = (320u + sizeof(_g4_t_v161)) > _g4_s71 ? (320u + sizeof(_g4_t_v161)) : _g4_s71,
    _g4_s73 = (332u + sizeof(_g4_t_v162)) > _g4_s72 ? (332u + sizeof(_g4_t_v162)) : _g4_s72,
    _g4_s74 = (336u + sizeof(_g4_t_v163)) > _g4_s73 ? (336u + sizeof(_g4_t_v163)) : _g4_s73,
    _g4_s75 = (338u + sizeof(_g4_t_v164)) > _g4_s74 ? (338u + sizeof(_g4_t_v164)) : _g4_s74,
    _g4_s76 = (352u + sizeof(_g4_t_v165)) > _g4_s75 ? (352u + sizeof(_g4_t_v165)) : _g4_s75,
    _g4_s77 = (364u + sizeof(_g4_t_v166)) > _g4_s76 ? (364u + sizeof(_g4_t_v166)) : _g4_s76,
    _g4_s78 = (368u + sizeof(_g4_t_v167)) > _g4_s77 ? (368u + sizeof(_g4_t_v167)) : _g4_s77,
    _g4_s79 = (370u + sizeof(_g4_t_v168)) > _g4_s78 ? (370u + sizeof(_g4_t_v168)) : _g4_s78,
    _g4_s80 = (371u + sizeof(_g4_t_v169)) > _g4_s79 ? (371u + sizeof(_g4_t_v169)) : _g4_s79,
    _g4_s81 = (376u + sizeof(_g4_t_v170)) > _g4_s80 ? (376u + sizeof(_g4_t_v170)) : _g4_s80,
    _g4_s82 = (400u + sizeof(_g4_t_v171)) > _g4_s81 ? (400u + sizeof(_g4_t_v171)) : _g4_s81,
    _g4_s83 = (404u + sizeof(_g4_t_v172)) > _g4_s82 ? (404u + sizeof(_g4_t_v172)) : _g4_s82,
    _g4_s84 = (408u + sizeof(_g4_t_v173)) > _g4_s83 ? (408u + sizeof(_g4_t_v173)) : _g4_s83,
    _g4_s85 = (412u + sizeof(_g4_t_v174)) > _g4_s84 ? (412u + sizeof(_g4_t_v174)) : _g4_s84,
    _g4_s86 = (416u + sizeof(_g4_t_v175)) > _g4_s85 ? (416u + sizeof(_g4_t_v175)) : _g4_s85,
    _g4_s87 = (420u + sizeof(_g4_t_v176)) > _g4_s86 ? (420u + sizeof(_g4_t_v176)) : _g4_s86,
    _g4_s88 = (424u + sizeof(_g4_t_v177)) > _g4_s87 ? (424u + sizeof(_g4_t_v177)) : _g4_s87,
    _g4_s89 = (428u + sizeof(_g4_t_v178)) > _g4_s88 ? (428u + sizeof(_g4_t_v178)) : _g4_s88
  };
  alignas(16) uint8_t _g4_sf[_g4_s89];
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 0u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 0u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 4u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 4u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 4u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 8u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 13u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 14u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 16u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 20u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 22u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 24u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 26u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 27u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 28u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 32u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 36u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 36u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 40u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 40u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 40u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 44u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 48u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 48u);
  _g4_t_Position &Position = *reinterpret_cast<_g4_t_Position *>(_g4_sf + 48u);
  _g4_t_UInt &UInt = *reinterpret_cast<_g4_t_UInt *>(_g4_sf + 52u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 52u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 52u);
  _g4_t_U16 &U16 = *reinterpret_cast<_g4_t_U16 *>(_g4_sf + 52u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 56u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 56u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 60u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 64u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 64u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 64u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 64u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 68u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 68u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 68u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 68u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 68u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 68u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 72u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 72u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 72u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 72u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 72u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 72u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 80u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 96u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 112u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 128u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 144u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 160u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 176u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 192u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 208u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 224u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 240u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 252u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 256u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 272u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 276u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 280u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 284u);
  _g4_t_U8 &U8 = *reinterpret_cast<_g4_t_U8 *>(_g4_sf + 288u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 292u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 296u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 300u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 304u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 320u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 332u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 336u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 338u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 352u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 364u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 368u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 370u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 371u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 376u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 400u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 404u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 408u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 412u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 416u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 420u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 424u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 428u);

  memset(v170, 0, sizeof(v170));
  v170[0] = 1065353216;
  v170[4] = 1065353216;
  v163 = -1;
  v171 = 1065353216;
  v173 = 1065353216;
  HIBYTE(v164) = ((uint16_t)(v164 | 0x7F) >> 8) | 1;
  LOBYTE(v164) = 127;
  v167 = -1;
  v175 = 1065353216;
  v177 = 1065353216;
  v172 = 0;
  v174 = 0;
  v176 = 0;
  v178 = 0;
  U8 = 0;
  v157 = nullptr;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v161[0] = 1;
  v161[1] = 0;
  v165[0] = 1;
  v165[1] = 0;
  v168 = 127;
  v169 |= 1u;
  if ( a5 == (gameswf::Stream::Self *)&loc_4 )
  {
    v76 = 0;
    U16 = gameswf::Stream::readU16(a4);
    v138 = gameswf::Stream::readU16(a4);
    gameswf::Matrix::read(a2, (gameswf::Matrix::Self *)v170, a4);
    v150 = v138;
    v132 = (gameswf::hash<int, gameswf::Matrix::Self *, gameswf::fixed_size_hash<int>> *)(a7 + 48);
    index = gameswf::hash_int_gameswf_Matrix_games_7fc502::find_index(
              (gameswf::hash<int, gameswf::Matrix::Self *, gameswf::fixed_size_hash<int>> *)(a7 + 48),
              &v150);
    if ( index >= 0 )
      v76 = *(uint32_t *)(*(uint32_t *)(a7 + 48) + 16 * index + 20);
    v139[0] = v138;
    v126 = (gameswf::hash<int, gameswf::CxForm::Self *, gameswf::fixed_size_hash<int>> *)(a7 + 44);
    v79 = gameswf::hash_int_gameswf_CxForm_games_02d26a::find_index(
            (gameswf::hash<int, gameswf::CxForm::Self *, gameswf::fixed_size_hash<int>> *)(a7 + 44),
            v139);
    v121 = 0;
    if ( v79 >= 0 )
      v121 = *(uint32_t *)(*(uint32_t *)(a7 + 44) + 16 * v79 + 20);
    Position = gameswf::Stream::getPosition(a4);
    if ( Position < gameswf::Stream::getTagEndPosition(a4) )
      gameswf::CxForm::read_rgb(v77, (gameswf::CxForm::Self *)&v171, a4);
    v80 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(self + 19), 88);
    if ( v80 != 0 )
    {
      *(uint32_t *)(v80 + 24) = v121;
      *(uint32_t *)v80 = ((uint32_t)(uintptr_t)&off_208E768);
      v81 = (void *)(v80 + 32);
      *(uint16_t *)(v80 + 16) = U16;
      *(uint16_t *)(v80 + 14) = v138;
      *(uint8_t *)(v80 + 4) = 0;
      *(uint8_t *)(v80 + 5) = 0;
      *(uint8_t *)(v80 + 6) = 0;
      *(uint8_t *)(v80 + 8) = 0;
      *(uint8_t *)(v80 + 9) = 0;
      *(uint8_t *)(v80 + 10) = 0;
      *(uint8_t *)(v80 + 11) = 0;
      *(uint16_t *)(v80 + 12) = 0;
      *(uint16_t *)(v80 + 18) = 0;
      *(uint16_t *)(v80 + 20) = 4;
      *(uint32_t *)(v80 + 28) = v76;
      *(uint8_t *)(v80 + 7) = 32;
      v82 = 32;
      if ( v80 == -32 )
      {
LABEL_212:
        *(uint8_t *)(v80 + 6) = 56;
        if ( v80 != -56 )
        {
          *(uint32_t *)(v80 + 56) = v171;
          *(uint32_t *)(v80 + 60) = v172;
          *(uint32_t *)(v80 + 64) = v173;
          *(uint32_t *)(v80 + 68) = v174;
          *(uint32_t *)(v80 + 72) = v175;
          *(uint32_t *)(v80 + 76) = v176;
          *(uint32_t *)(v80 + 80) = v177;
          *(uint32_t *)(v80 + 84) = v178;
        }
        v83 = nullptr;
        if ( v82 != 0 )
          v83 = (gameswf::Matrix::Self *)(v80 + v82);
        v93 = v80;
        v141 = v83;
        v140[0] = v138;
        v84 = gameswf::hash_int_gameswf_Matrix_games_7fc502::find_index(v132, v140);
        v85 = v93;
        if ( v84 < 0 )
        {
          gameswf::hash_int_gameswf_Matrix_games_7fc502::add(v132, v140, &v141);
          v85 = v93;
        }
        else
        {
          *(uint32_t *)(*(uint32_t *)(a7 + 48) + 16 * v84 + 20) = (uint32_t)(uintptr_t)(v83);
        }
        v86 = *(uint8_t *)(v85 + 6);
        v87 = nullptr;
        if ( v86 != 0 )
          v87 = (gameswf::CxForm::Self *)(v85 + v86);
        v142[0] = v138;
        v94 = v85;
        v143 = v87;
        v88 = gameswf::hash_int_gameswf_CxForm_games_02d26a::find_index(v126, v142);
        if ( v88 < 0 )
        {
          gameswf::hash_int_gameswf_CxForm_games_02d26a::add(v126, v142, &v143);
          v68 = v165[0];
          v120 = v94;
        }
        else
        {
          v120 = v94;
          *(uint32_t *)(*(uint32_t *)(a7 + 44) + 16 * v88 + 20) = (uint32_t)(uintptr_t)(v87);
          v68 = v165[0];
        }
        goto LABEL_163;
      }
    }
    else
    {
      LOWORD(dword_14) = 4;
      word_10 = U16;
      *(uint16_t *)&byte_9[5] = v138;
      dword_1C = v76;
      *((uint8_t *)&loc_6 + 1) = 32;
      dword_18 = v121;
      v81 = &dword_20;
    }
    std::memcpy(v81, v170, 24);
    v82 = *(uint8_t *)(v80 + 7);
    goto LABEL_212;
  }
  if ( a5 != (gameswf::Stream::Self *)((char *)&dword_44 + 2) )
  {
    v120 = 0;
    if ( a5 != (gameswf::Stream::Self *)((char *)&dword_18 + 2) )
    {
LABEL_164:
      if ( v161[0] != 0xFF )
        goto LABEL_165;
      goto LABEL_148;
    }
  }
  gameswf::Stream::align(a4);
  v103 = gameswf::Stream::readUInt(a4, 1) != 0;
  UInt = gameswf::Stream::readUInt(a4, 1);
  v112 = gameswf::Stream::readUInt(a4, 1);
  v108 = gameswf::Stream::readUInt(a4, 1);
  v106 = gameswf::Stream::readUInt(a4, 1);
  v7 = gameswf::Stream::readUInt(a4, 1);
  v102 = gameswf::Stream::readUInt(a4, 1) != 0;
  v96 = gameswf::Stream::readUInt(a4, 1) != 0;
  if ( a5 == (gameswf::Stream::Self *)((char *)&dword_44 + 2) )
  {
    gameswf::Stream::readUInt(a4, 3);
    gameswf::Stream::readUInt(a4, 1);
    v8 = gameswf::Stream::readUInt(a4, 1);
    v111 = gameswf::Stream::readUInt(a4, 1) != 0;
    v119 = gameswf::Stream::readUInt(a4, 1) != 0;
    v133 = gameswf::Stream::readUInt(a4, 1) != 0;
    v101 = gameswf::Stream::readU16(a4);
    if ( v8 != 0 )
    {
      v8 = 4;
      gameswf::Stream::readString(a4, (gameswf::String::Self *)v165);
      v127 = 4;
      v98 = 0;
    }
    else
    {
      v127 = 0;
      v98 = -1;
    }
  }
  else
  {
    v8 = 0;
    v101 = gameswf::Stream::readU16(a4);
    v127 = 0;
    v111 = false;
    v133 = false;
    v119 = false;
    v98 = -1;
  }
  v97 = 0;
  if ( v102 )
    v97 = gameswf::Stream::readU16(a4);
  v105 = -1;
  if ( v7 != 0 )
  {
    gameswf::Matrix::read(a2, (gameswf::Matrix::Self *)v170, a4);
    v105 = v8;
    v127 += 24;
    v8 = v127;
  }
  v104 = -1;
  if ( v106 != 0 )
  {
    gameswf::CxForm::read_rgba(a2, (gameswf::CxForm::Self *)&v171, a4);
    v104 = v8;
    v127 += 32;
    v8 = v127;
  }
  v99 = 0;
  if ( v108 != 0 )
    v99 = gameswf::Stream::readU16(a4);
  v109 = -1;
  if ( v112 != 0 )
  {
    gameswf::Stream::readString(a4, (gameswf::String::Self *)v161);
    v109 = v8;
    v127 += 4;
    v8 = v127;
  }
  v100 = 0;
  if ( UInt != 0 )
    v100 = gameswf::Stream::readU16(a4);
  if ( v133 || (v9 = v8, v107 = -1, v119) )
  {
    v107 = v8;
    v9 = v127 + 20;
    v127 += 20;
  }
  v95 = -1;
  if ( !v103 )
  {
    if ( !v133 )
      goto LABEL_21;
LABEL_157:
    gameswf::readFilterList(a1,g4_m128_raw(G4_BITCAST<__m128i>(a2)), a4, (gameswf::Stream::Self *)&U8);
    if ( !v119 )
      goto LABEL_22;
    goto LABEL_158;
  }
  v127 += 16;
  v95 = v9;
  if ( v133 )
    goto LABEL_157;
LABEL_21:
  if ( v119 )
LABEL_158:
    U8 = (uint8_t)gameswf::Stream::readU8(a4);
LABEL_22:
  v144 = v101;
  v10 = *(uint32_t *)(a7 + 48);
  if ( v10 == 0 )
    goto LABEL_155;
  v11 = (65599 * (BYTE1(v144) + 65599 * (BYTE2(v144) + 65599 * (HIBYTE(v144) + 352988219))) + (uint8_t)v144)
      & *(uint32_t *)(v10 + 4);
  v12 = (int *)(v10 + 16 * v11 + 8);
  if ( *v12 == -2 )
    goto LABEL_155;
  v13 = *(uint32_t *)(v10 + 16 * v11 + 12);
  v116 = 0;
  if ( v11 == (v13 & *(uint32_t *)(v10 + 4)) )
  {
    while ( 65599 * (BYTE1(v144) + 65599 * (BYTE2(v144) + 65599 * (HIBYTE(v144) + 352988219))) + (uint8_t)v144 != v13
         || v101 != v12[2] )
    {
      v11 = *v12;
      if ( *v12 == -1 )
        goto LABEL_155;
      v12 = (int *)(v10 + 16 * v11 + 8);
      v13 = *(uint32_t *)(v10 + 16 * v11 + 12);
    }
    if ( v11 < 0 )
LABEL_155:
      v116 = 0;
    else
      v116 = *(uint32_t *)(v10 + 16 * v11 + 20);
  }
  v145 = v101;
  v14 = *(uint32_t *)(a7 + 44);
  if ( v14 == 0 )
    goto LABEL_154;
  v15 = (65599
       * (BYTE1(v145) + 65599 * (BYTE2(v145) + 0xFFFF * (HIBYTE(v145) + 352988219) + ((HIBYTE(v145) + 352988219) << 6)))
       + (uint8_t)v145)
      & *(uint32_t *)(v14 + 4);
  v16 = (int *)(v14 + 16 * v15 + 8);
  if ( *v16 == -2 )
    goto LABEL_154;
  v17 = *(uint32_t *)(v14 + 16 * v15 + 12);
  v18 = 0;
  if ( v15 == (v17 & *(uint32_t *)(v14 + 4)) )
  {
    while ( 65599
          * (BYTE1(v145)
           + 65599 * (BYTE2(v145) + 0xFFFF * (HIBYTE(v145) + 352988219) + ((HIBYTE(v145) + 352988219) << 6)))
          + (uint8_t)v145 != v17
         || v101 != v16[2] )
    {
      v15 = *v16;
      if ( *v16 == -1 )
        goto LABEL_154;
      v16 = (int *)(v14 + 16 * v15 + 8);
      v17 = *(uint32_t *)(v14 + 16 * v15 + 12);
    }
    if ( v15 < 0 )
LABEL_154:
      v18 = 0;
    else
      v18 = *(uint32_t *)(v14 + 16 * v15 + 20);
  }
  v19 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(self + 19), v127 + 32);
  v120 = v19;
  if ( v19 != 0 )
  {
    *(uint32_t *)v19 = ((uint32_t)(uintptr_t)&off_208E768);
    *(uint8_t *)(v19 + 4) = 0;
    *(uint8_t *)(v19 + 5) = 0;
    *(uint8_t *)(v19 + 6) = 0;
    *(uint8_t *)(v19 + 7) = 0;
    *(uint8_t *)(v19 + 8) = 0;
    *(uint8_t *)(v19 + 9) = 0;
    *(uint8_t *)(v19 + 10) = 0;
    *(uint8_t *)(v19 + 11) = 0;
    *(uint16_t *)(v19 + 12) = 0;
    *(uint16_t *)(v19 + 14) = 0;
    *(uint16_t *)(v19 + 16) = 0;
    *(uint16_t *)(v19 + 18) = 0;
    *(uint16_t *)(v19 + 20) = 0;
    *(uint32_t *)(v19 + 24) = 0;
    *(uint32_t *)(v19 + 28) = 0;
  }
  *(uint16_t *)(v19 + 20) = (uint16_t)(uintptr_t)(a5);
  *(uint8_t *)(v19 + 11) = v111;
  *(uint16_t *)(v19 + 16) = v97;
  *(uint32_t *)(v19 + 24) = v18;
  *(uint16_t *)(v19 + 14) = v101;
  *(uint32_t *)(v19 + 28) = v116;
  *(uint16_t *)(v19 + 18) = v100;
  *(uint16_t *)(v19 + 12) = v99;
  if ( v105 != -1 )
  {
    v20 = v105 + 32;
    *(uint8_t *)(v19 + 7) = v105 + 32;
    v21 = (void *)(v19 + (uint8_t)(v105 + 32));
    if ( v21 != nullptr )
    {
      std::memcpy(v21, v170, 24);
      v20 = *(uint8_t *)(v120 + 7);
    }
    v128 = nullptr;
    if ( v20 != 0 )
      v128 = (gameswf::Matrix::Self *)(v120 + v20);
    v147 = v128;
    v146 = v101;
    v22 = *(uint32_t *)(a7 + 48);
    if ( v22 == 0 )
      goto LABEL_182;
    v23 = *(uint32_t *)(v22 + 4);
    v24 = v23
        & (65599
         * (((((HIBYTE(v146) + 352988219) << 6) + 0xFFFF * (HIBYTE(v146) + 352988219) + BYTE2(v146)) << 6)
          + 0xFFFF * (((HIBYTE(v146) + 352988219) << 6) + 0xFFFF * (HIBYTE(v146) + 352988219) + BYTE2(v146))
          + BYTE1(v146))
         + (uint8_t)v146);
    v25 = (int *)(v22 + 16 * v24 + 8);
    if ( *v25 == -2 )
      goto LABEL_182;
    v26 = *(uint32_t *)(v22
                    + 16
                    * (v23
                     & (65599
                      * (((((HIBYTE(v146) + 352988219) << 6) + 0xFFFF * (HIBYTE(v146) + 352988219) + BYTE2(v146)) << 6)
                       + 0xFFFF
                       * (((HIBYTE(v146) + 352988219) << 6) + 0xFFFF * (HIBYTE(v146) + 352988219) + BYTE2(v146))
                       + BYTE1(v146))
                      + (uint8_t)v146))
                    + 12);
    if ( v24 != (v26 & *(uint32_t *)(v22 + 4)) )
      goto LABEL_182;
    while ( 65599
          * (((((HIBYTE(v146) + 352988219) << 6) + 0xFFFF * (HIBYTE(v146) + 352988219) + BYTE2(v146)) << 6)
           + 0xFFFF * (((HIBYTE(v146) + 352988219) << 6) + 0xFFFF * (HIBYTE(v146) + 352988219) + BYTE2(v146))
           + BYTE1(v146))
          + (uint8_t)v146 != v26
         || v101 != v25[2] )
    {
      v24 = *v25;
      if ( *v25 == -1 )
        goto LABEL_182;
      v25 = (int *)(v22 + 16 * v24 + 8);
      v26 = *(uint32_t *)(v22 + 16 * v24 + 12);
    }
    if ( v24 >= 0 )
      *(uint32_t *)(v22 + 16 * v24 + 20) = (uint32_t)(uintptr_t)(v128);
    else
LABEL_182:
      gameswf::hash_int_gameswf_Matrix_games_7fc502::add(
        (gameswf::hash<int, gameswf::Matrix::Self *, gameswf::fixed_size_hash<int>> *)(a7 + 48),
        &v146,
        &v147);
  }
  if ( v104 != -1 )
  {
    v27 = v104 + 32;
    *(uint8_t *)(v120 + 6) = v104 + 32;
    v28 = (int *)(v120 + (uint8_t)(v104 + 32));
    if ( v28 != nullptr )
    {
      *v28 = v171;
      v28[1] = v172;
      v28[2] = v173;
      v28[3] = v174;
      v28[4] = v175;
      v28[5] = v176;
      v28[6] = v177;
      v28[7] = v178;
      v27 = *(uint8_t *)(v120 + 6);
    }
    v129 = nullptr;
    if ( v27 != 0 )
      v129 = (gameswf::CxForm::Self *)(v120 + v27);
    v149 = v129;
    v148 = v101;
    v29 = *(uint32_t *)(a7 + 44);
    if ( v29 == 0 )
      goto LABEL_183;
    v30 = *(uint32_t *)(v29 + 4);
    v31 = v30
        & (65599
         * (((((HIBYTE(v148) + 352988219) << 6) + 0xFFFF * (HIBYTE(v148) + 352988219) + BYTE2(v148)) << 6)
          + 0xFFFF * (((HIBYTE(v148) + 352988219) << 6) + 0xFFFF * (HIBYTE(v148) + 352988219) + BYTE2(v148))
          + BYTE1(v148))
         + (uint8_t)v148);
    v32 = (int *)(v29 + 16 * v31 + 8);
    if ( *v32 == -2 )
      goto LABEL_183;
    v33 = *(uint32_t *)(v29
                    + 16
                    * (v30
                     & (65599
                      * (((((HIBYTE(v148) + 352988219) << 6) + 0xFFFF * (HIBYTE(v148) + 352988219) + BYTE2(v148)) << 6)
                       + 0xFFFF
                       * (((HIBYTE(v148) + 352988219) << 6) + 0xFFFF * (HIBYTE(v148) + 352988219) + BYTE2(v148))
                       + BYTE1(v148))
                      + (uint8_t)v148))
                    + 12);
    if ( v31 != (v33 & *(uint32_t *)(v29 + 4)) )
      goto LABEL_183;
    while ( 65599
          * (((((HIBYTE(v148) + 352988219) << 6) + 0xFFFF * (HIBYTE(v148) + 352988219) + BYTE2(v148)) << 6)
           + 0xFFFF * (((HIBYTE(v148) + 352988219) << 6) + 0xFFFF * (HIBYTE(v148) + 352988219) + BYTE2(v148))
           + BYTE1(v148))
          + (uint8_t)v148 != v33
         || v101 != v32[2] )
    {
      v31 = *v32;
      if ( *v32 == -1 )
        goto LABEL_183;
      v32 = (int *)(v29 + 16 * v31 + 8);
      v33 = *(uint32_t *)(v29 + 16 * v31 + 12);
    }
    if ( v31 < 0 )
    {
LABEL_183:
      gameswf::hash_int_gameswf_CxForm_games_02d26a::add(
        (gameswf::hash<int, gameswf::CxForm::Self *, gameswf::fixed_size_hash<int>> *)(a7 + 44),
        &v148,
        &v149);
      if ( v98 != 0 )
        goto LABEL_76;
      goto LABEL_75;
    }
    *(uint32_t *)(v29 + 16 * v31 + 20) = (uint32_t)(uintptr_t)(v129);
  }
  if ( v98 == 0 )
  {
LABEL_75:
    *(uint8_t *)(v120 + 4) = 32;
    *(uint32_t *)(v120 + 32) = (uint32_t)(uintptr_t)(gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v165));
  }
LABEL_76:
  if ( v109 != -1 )
  {
    *(uint8_t *)(v120 + 5) = v109 + 32;
    *(uint32_t *)((uint8_t)(v109 + 32) + v120) = (uint32_t)(uintptr_t)(gameswf::PermanentStringCache::get(
                                                         self + 12,
                                                         (const gameswf::String::Self *)v161));
  }
  if ( v107 != -1 )
  {
    v34 = v107 + 32;
    *(uint8_t *)(v120 + 8) = v107 + 32;
    v35 = (uint32_t *)(v120 + (uint8_t)(v107 + 32));
    if ( v35 != nullptr )
    {
      v35[2] = 0;
      *v35 = 0;
      v35[1] = 0;
      v35[3] = 0;
      v35[4] = 0;
      v34 = *(uint8_t *)(v120 + 8);
    }
    v36 = nullptr;
    if ( v34 != 0 )
      v36 = (uint32_t *)(v120 + v34);
    v130 = 0;
    *v36 = U8;
    v37 = *(uint8_t *)(v120 + 8);
    if ( v37 != 0 )
      v130 = v120 + v37;
    v123 = v158;
    v134 = *(uint32_t *)(v130 + 8);
    if ( v158 != 0 )
    {
      v70 = *(uint32_t *)(v130 + 12);
      if ( v158 > v70 && *(uint32_t *)(v130 + 16) == 0 )
      {
        v71 = v158 + (v158 >> 1);
        *(uint32_t *)(v130 + 12) = v71;
        if ( v71 != 0 )
        {
          v89 = *(gameswf::Self **)(v130 + 4);
          if ( v89 != nullptr )
            *(uint32_t *)(v130 + 4) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v89, 96 * v71, 96 * v70));
          else
            *(uint32_t *)(v130 + 4) = gameswf::malloc_internal(96 * v71);
        }
        else
        {
          if ( *(uint32_t *)(v130 + 4) != 0 )
            gameswf::free_internal(*(gameswf::Self **)(v130 + 4));
          *(uint32_t *)(v130 + 4) = 0;
        }
      }
    }
    if ( v123 > v134 )
    {
      v38 = 96 * v134;
      do
      {
        v39 = (void *)(*(uint32_t *)(v130 + 4) + v38);
        if ( v39 != nullptr )
          memset(v39, 0, 0x60u);
        ++v134;
        v38 += 96;
      }
      while ( v134 != v123 );
    }
    *(uint32_t *)(v130 + 8) = v123;
    if ( v123 > 0 )
    {
      v40 = 0;
      v41 = 0;
      do
      {
        ++v41;
        v42 = (char *)(v40 + *(uint32_t *)(v130 + 4));
        v43 = (char *)v157 + v40;
        v40 += 96;
        std::memcpy(v42, v43, 96);
      }
      while ( v41 < *(uint32_t *)(v130 + 8) );
    }
  }
  if ( v103 )
  {
    *(uint8_t *)(v120 + 9) = v95 + 32;
    if ( v95 != -32 )
    {
      v44 = (uint32_t *)(v120 + (uint8_t)(v95 + 32));
      if ( v44 != nullptr )
      {
        *v44 = 0;
        v44[1] = 0;
        v44[2] = 0;
        v44[3] = 0;
      }
    }
    gameswf::Stream::readU16(a4);
    if ( a6 > 5 )
      gameswf::Stream::readU32(a4);
    else
      gameswf::Stream::readU16(a4);
    while ( 1 )
    {
      gameswf::Stream::align(a4);
      v45 = gameswf::Stream::getPosition(a4);
      v122 = a6 <= 5 ? (uint16_t)gameswf::Stream::readU16(a4) : gameswf::Stream::readU32(a4);
      if ( v122 == 0 )
        break;
      U32 = (const char *)gameswf::Stream::readU32(a4);
      v47 = U32;
      v113 = 0;
      if ( (v122 & 0x20000) != 0 )
      {
        v47 = U32 - 1;
        v113 = gameswf::Stream::readU8(a4);
      }
      gameswf::ActionBuffer::Construct((gameswf::ActionBuffer::Self *)v151);
      gameswf::ActionBuffer::read((gameswf::MemBuf::Self ***)v151, a4);
      v151[2] = v45;
      if ( v47 != *(const char **)v151[0] )
      {
        gameswf::logError((gameswf::Self *)"swf_event::read(), event_length = %d, but read %d\n", v47, *(uint32_t *)v151[0]);
        gameswf::ActionBuffer::Destroy((gameswf::ActionBuffer::Self *)v151);
        break;
      }
      if ( byte_20E4F50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20E4F50) != 0 )
      {
        dword_20E4F60[0] = 10;
        dword_20E4F64[0] = 0;
        byte_20E4F68 = 12;
        byte_20E4F69 = 0;
        word_20E4F6A = 0;
        dword_20E4F6C = 0;
        byte_20E4F70 = 11;
        byte_20E4F71 = 0;
        word_20E4F72 = 0;
        dword_20E4F74 = 0;
        byte_20E4F78 = 15;
        byte_20E4F79 = 0;
        word_20E4F7A = 0;
        dword_20E4F7C = 0;
        byte_20E4F80 = 13;
        byte_20E4F81 = 0;
        word_20E4F82 = 0;
        dword_20E4F84 = 0;
        byte_20E4F88 = 14;
        byte_20E4F89 = 0;
        word_20E4F8A = 0;
        dword_20E4F8C = 0;
        byte_20E4F90 = 16;
        byte_20E4F91 = 0;
        word_20E4F92 = 0;
        dword_20E4F94 = 0;
        byte_20E4F98 = 17;
        byte_20E4F99 = 0;
        word_20E4F9A = 0;
        dword_20E4F9C = 0;
        byte_20E4FA0 = 18;
        byte_20E4FA1 = 0;
        word_20E4FA2 = 0;
        dword_20E4FA4 = 0;
        byte_20E4FA8 = 9;
        byte_20E4FA9 = 0;
        word_20E4FAA = 0;
        dword_20E4FAC = 0;
        byte_20E4FB0 = 1;
        byte_20E4FB1 = 0;
        word_20E4FB2 = 0;
        dword_20E4FB4 = 0;
        byte_20E4FB8 = 2;
        byte_20E4FB9 = 0;
        word_20E4FBA = 0;
        dword_20E4FBC = 0;
        byte_20E4FC0 = 3;
        byte_20E4FC1 = 0;
        word_20E4FC2 = 0;
        dword_20E4FC4 = 0;
        byte_20E4FC8 = 4;
        byte_20E4FC9 = 0;
        word_20E4FCA = 0;
        dword_20E4FCC = 0;
        byte_20E4FD0 = 5;
        byte_20E4FD1 = 0;
        word_20E4FD2 = 0;
        dword_20E4FD4 = 0;
        byte_20E4FD8 = 6;
        byte_20E4FD9 = 0;
        word_20E4FDA = 0;
        dword_20E4FDC = 0;
        byte_20E4FE0 = 7;
        byte_20E4FE1 = 0;
        word_20E4FE2 = 0;
        dword_20E4FE4 = 0;
        byte_20E4FE8 = 8;
        byte_20E4FE9 = 17;
        word_20E4FEA = 0;
        dword_20E4FEC = 0;
        byte_20E4FF0 = 19;
        byte_20E4FF1 = 0;
        word_20E4FF2 = 0;
        dword_20E4FF4 = 0;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20E4F50);
      }
      if ( v122 > 0x80000 )
        gameswf::logError(
          (gameswf::Self *)"swf_event::read() -- unknown event type received, flags = 0x%x\n",
          (const char *)v122);
      v131 = 1;
      for ( i = 0; i != 19; ++i )
      {
        while ( 1 )
        {
          if ( (v122 & v131) != 0 )
          {
            v49 = opNew(0x14u);
            *(uint8_t *)v49 = 0;
            *(uint8_t *)(v49 + 1) = 0;
            *(uint16_t *)(v49 + 2) = 0;
            *(uint32_t *)(v49 + 4) = 0;
            *(uint8_t *)(v49 + 8) = 0;
            *(uint8_t *)(v49 + 9) = 0;
            v50 = dword_20E4F64[2 * i];
            v110 = v49;
            *(uint32_t *)v49 = dword_20E4F60[2 * i];
            *(uint32_t *)(v49 + 4) = v50;
            if ( i == 17 )
              *(uint8_t *)(v49 + 1) = v113;
            v152 = 0;
            v153 = 0;
            v154 = 0;
            v155 = 0;
            v92 = (gameswf::ASObject::Self *)opNew(0x6Cu);
            gameswf::ASScriptFunction::Construct(
              v92,
              (gameswf::Player::Self *)self,
              (gameswf::MemBuf::Self **)v151,
              0,
              &v152);
            *((uint32_t *)v92 + 18) = *(uint32_t *)v151[0];
            gameswf::ASValue::setObject((gameswf::ASValue::Self *)(v110 + 8), v92);
            v51 = *(uint8_t *)(v120 + 9);
            v52 = nullptr;
            if ( v51 != 0 )
              v52 = (gameswf::Self **)(v51 + v120);
            v124 = v52[1];
            v135 = (int)(uintptr_t)(v124) + 1;
            v53 = v52[2];
            if ( (int)(uintptr_t)((char *)v124 + 1) <= (int)(uintptr_t)(v53) || v52[3] != nullptr )
            {
              v54 = *v52;
              v55 = v52[1];
            }
            else
            {
              v72 = (v135 >> 1) + v135;
              v60 = v72 == 0;
              v117 = v72;
              v52[2] = (gameswf::Self *)v72;
              v73 = *v52;
              if ( v60 )
              {
                if ( v73 != nullptr )
                {
                  v90 = v52;
                  gameswf::free_internal(v73);
                  v52 = v90;
                  v124 = v90[1];
                }
                *v52 = nullptr;
                v54 = nullptr;
                v55 = v124;
              }
              else
              {
                v91 = v52;
                v54 = v73 != nullptr
                    ? (gameswf::Self *)gameswf::realloc_internal(v73, 4 * v117, 4 * (uint32_t)(uintptr_t)(v53))
                    : (gameswf::Self *)gameswf::malloc_internal(4 * v117);
                v52 = v91;
                v55 = v91[1];
                *v91 = v54;
              }
            }
            v56 = (int *)((char *)v54 + 4 * (uint32_t)(uintptr_t)(v55));
            if ( v56 != nullptr )
              *v56 = v110;
            v52[1] = (gameswf::Self *)v135;
            v57 = v153;
            if ( v153 <= 0 )
            {
              if ( v153 < 0 )
              {
                v74 = 8 * v153;
                do
                {
                  v75 = (uint32_t *)(v74 + v152);
                  if ( v74 + v152 != 0 )
                  {
                    *v75 = 0;
                    v75[1] = 0;
                  }
                  v74 += 8;
                  ++v57;
                }
                while ( v57 != 0 );
              }
            }
            else
            {
              v125 = i;
              v136 = v153;
              for ( j = 0; j != v136; ++j )
              {
                if ( *(uint32_t *)(v152 + 8 * j) != 0 )
                  gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v152 + 8 * j));
              }
              i = v125;
            }
            v153 = 0;
            if ( v155 == 0 )
              break;
          }
          ++i;
          v131 *= 2;
          if ( i == 19 )
            goto LABEL_130;
        }
        v154 = 0;
        if ( v152 != 0 )
          gameswf::free_internal((gameswf::Self *)v152);
        v152 = 0;
        v131 *= 2;
      }
LABEL_130:
      v59 = (gameswf::MemBuf::Self *)v151[0];
      if ( v151[0] != 0 )
      {
        v60 = (*(uint32_t *)(v151[0] + 16))-- == 1;
        if ( v60 )
        {
          v61 = *((uint32_t *)v59 + 6);
          if ( v61 < 0 )
          {
            v62 = 4 * v61;
            do
            {
              v63 = (uint32_t *)(*((uint32_t *)v59 + 5) + v62);
              if ( v63 != nullptr )
                *v63 = 0;
              v62 += 4;
              ++v61;
            }
            while ( v61 != 0 );
          }
          v64 = *((uint32_t *)v59 + 8);
          *((uint32_t *)v59 + 6) = 0;
          if ( v64 == 0 )
          {
            v65 = *((gameswf::Self **)v59 + 5);
            *((uint32_t *)v59 + 7) = 0;
            if ( v65 != nullptr )
              gameswf::free_internal(v65);
            *((uint32_t *)v59 + 5) = 0;
          }
          gameswf::MemBuf::Destroy(v59);
          gameswf::free_internal(v59);
        }
      }
    }
  }
  if ( v102 )
  {
    if ( v96 )
    {
      *(uint8_t *)(v120 + 10) = 2;
      if ( v165[0] != 0xFF )
        goto LABEL_164;
      goto LABEL_146;
    }
    *(uint8_t *)(v120 + 10) = 0;
  }
  else if ( v96 )
  {
    *(uint8_t *)(v120 + 10) = 1;
    v68 = v165[0];
LABEL_163:
    if ( v68 != -1 )
      goto LABEL_164;
LABEL_146:
    if ( (v169 & 1) == 0 )
      goto LABEL_164;
    gameswf::free_internal(v166);
    if ( v161[0] == 0xFF )
    {
LABEL_148:
      if ( (v164 & 0x100) != 0 )
      {
        gameswf::free_internal(v162);
        v66 = v158;
        v137 = v158;
        if ( v158 >= 0 )
          goto LABEL_150;
        goto LABEL_166;
      }
    }
LABEL_165:
    v66 = v158;
    v137 = v158;
    if ( v158 < 0 )
    {
LABEL_166:
      v69 = 96 * v66;
      do
      {
        if ( (gameswf::Self *)((char *)v157 + v69) != nullptr )
          memset((char *)v157 + v69, 0, 0x60u);
        v69 += 96;
        ++v137;
      }
      while ( v137 != 0 );
    }
LABEL_150:
    v158 = 0;
    if ( v160 == 0 )
    {
      v159 = 0;
      if ( v157 != nullptr )
        gameswf::free_internal(v157);
    }
    return v120;
  }
  v68 = v165[0];
  goto LABEL_163;
}

// ----------------------------------------------------------------------------
// Function: gameswf::PlaceObject2::getDepth  (binary VA: 0x10a40f0)
// Original: gameswf::PlaceObject2::getDepth
// ----------------------------------------------------------------------------
int gameswf::PlaceObject2::getDepth(gameswf::PlaceObject2::Self *self)
{
  return *((uint16_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: gameswf::PlaceObject2::isPlaceTag  (binary VA: 0x10a4100)
// Original: gameswf::PlaceObject2::isPlaceTag
// ----------------------------------------------------------------------------
int gameswf::PlaceObject2::isPlaceTag()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::PlaceObject2::Destroy  (binary VA: 0x10a4720)
// Original: gameswf::PlaceObject2::~PlaceObject2
// ----------------------------------------------------------------------------
void gameswf::PlaceObject2::Destroy(gameswf::PlaceObject2::Self *self)
{
  uint8_t v1;
  int v2;
  int v3;
  void *v4;
  uint8_t v5;
  int v6;
  int v7;
  void *v8;
  int v9;
  gameswf::Self *v10;
  uint8_t v11;
  gameswf::Self **v12;
  int v13;
  gameswf::Self *v14;
  int v15;
  int v16;
  uint32_t *v17;
  gameswf::Self *v18;
  gameswf::Self *v19;
  bool v20;
  gameswf::Self *v21;
  char *v22;
  uint32_t *v23;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E768);
  v1 = *((uint8_t *)self + 8);
  if ( v1 != 0 )
  {
    v22 = (char *)self + v1;
    v2 = *((uint32_t *)v22 + 2);
    if ( v2 < 0 )
    {
      v3 = 96 * v2;
      do
      {
        v4 = (void *)(*((uint32_t *)v22 + 1) + v3);
        if ( v4 != nullptr )
          memset(v4, 0, 0x60u);
        v3 += 96;
        ++v2;
      }
      while ( v2 != 0 );
    }
    v23 = nullptr;
    *(uint32_t *)((char *)self + v1 + 8) = 0;
    v5 = *((uint8_t *)self + 8);
    if ( v5 != 0 )
      v23 = (uint32_t *)((char *)self + v5);
    v6 = v23[2];
    if ( v6 < 0 )
    {
      v7 = 96 * v6;
      do
      {
        v8 = (void *)(v23[1] + v7);
        if ( v8 != nullptr )
          memset(v8, 0, 0x60u);
        v7 += 96;
        ++v6;
      }
      while ( v6 != 0 );
    }
    v9 = v23[4];
    v23[2] = 0;
    if ( v9 == 0 )
    {
      v10 = (gameswf::Self *)v23[1];
      v23[3] = 0;
      if ( v10 != nullptr )
        gameswf::free_internal(v10);
      v23[1] = 0;
    }
  }
  v11 = *((uint8_t *)self + 9);
  if ( v11 != 0 )
  {
    v12 = (gameswf::Self **)((char *)self + v11);
    v13 = (int)(uintptr_t)(v12[1]);
    if ( v13 > 0 )
    {
      v14 = nullptr;
      v21 = v12[1];
      do
      {
        v15 = *((uint32_t *)*v12 + (uint32_t)(uintptr_t)(v14));
        if ( v15 != 0 )
        {
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v15 + 8));
          gameswf::free_internal((gameswf::Self *)v15);
        }
        v14 = (gameswf::Self *)((char *)v14 + 1);
      }
      while ( v14 != v21 );
      v13 = (int)(uintptr_t)(v12[1]);
    }
    if ( v13 < 0 )
    {
      v16 = 4 * v13;
      do
      {
        v17 = (uint32_t *)((char *)*v12 + v16);
        if ( v17 != nullptr )
          *v17 = 0;
        v16 += 4;
        ++v13;
      }
      while ( v13 != 0 );
    }
    v18 = v12[3];
    v12[1] = nullptr;
    if ( v18 == nullptr )
    {
      v19 = *v12;
      v20 = *v12 == nullptr;
      v12[2] = nullptr;
      if ( !v20 )
        gameswf::free_internal(v19);
      *v12 = nullptr;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
}

// ----------------------------------------------------------------------------
// Function: gameswf::PlaceObject2::Destroy_ea10a4920  (binary VA: 0x10a4920)
// Original: gameswf::PlaceObject2::~PlaceObject2
// ----------------------------------------------------------------------------
void gameswf::PlaceObject2::Destroy_ea10a4920(gameswf::PlaceObject2::Self *self)
{
  gameswf::PlaceObject2::Destroy(self);
  opDelete(self);
}


