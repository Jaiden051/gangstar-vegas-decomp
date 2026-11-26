#include "Core/Utils/DecompTypes.h"
#include "gameswf_Root.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Root::Destroy  (binary VA: 0x10d1850)
// Original: gameswf::Root::~Root
// ----------------------------------------------------------------------------
void gameswf::Root::Destroy(gameswf::Root::Self *self)
{
  gameswf::Root::Self *v1;
  gameswf::ASLoaderManager::Self *v2;
  gameswf::Self *v3;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  gameswf::ASValue::Self *v10;
  int v11;
  gameswf::Self *v12;
  int v13;
  gameswf::Self *v14;
  int v15;
  int i;
  int v17;
  gameswf::Self *v18;
  int v19;
  int j;
  gameswf::Self *v21;
  int v22;
  gameswf::Self *v23;
  gameswf::Self *v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  gameswf::Self *v32;
  int v33;
  int v34;
  int v35;
  uint16_t *v36;
  unsigned int v37;
  uint16_t *v38;
  int v39;
  gameswf::Self *v40;
  int v41;
  uint8_t *v42;
  int v43;
  uint32_t *v44;
  int v45;
  uint32_t *v46;
  int v47;
  int v48;
  uint8_t *v49;
  int v50;
  gameswf::Root::Self *v51;
  int v52;
  uint32_t *v53;
  uint32_t *v54;
  int v55;
  gameswf::Root::Self *v56;
  int v57;
  int v58;

  v1 = self;
  v2 = *((gameswf::ASLoaderManager::Self **)self + 77);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EFE0);
  if ( v2 != nullptr )
  {
    gameswf::ASLoaderManager::Destroy(v2);
    gameswf::free_internal(v2);
  }
  if ( *((uint32_t *)self + 4) != 0 )
  {
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 4));
    *((uint32_t *)self + 4) = 0;
  }
  if ( *((uint32_t *)self + 3) != 0 )
  {
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 3));
    *((uint32_t *)self + 3) = 0;
  }
  v3 = *((gameswf::Self **)self + 78);
  if ( v3 != nullptr )
  {
    v4 = (*(uint16_t *)v3)-- == 1;
    if ( v4 )
      gameswf::free_internal(v3);
  }
  v5 = *((uint32_t *)self + 74);
  v53 = (uint32_t *)((char *)self + 292);
  v58 = v5;
  if ( v5 <= 0 )
  {
    if ( v5 < 0 )
    {
      v47 = 56 * v5;
      v48 = *((uint32_t *)self + 74);
      do
      {
        v49 = (uint8_t *)(*v53 + v47);
        if ( v49 != nullptr )
        {
          memset(v49, 0, 0x38u);
          *v49 = 1;
          *((uint32_t *)v49 + 4) = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x7FFFFF));
          v49[20] = 1;
          v49[19] = 1;
          v49[18] = (unsigned int)(uintptr_t)((uint8_t *)(uintptr_t)0x7FFFFF) >> 16;
          *((uint32_t *)v49 + 9) = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x7FFFFF));
          v49[39] = 1;
          v49[38] = (unsigned int)(uintptr_t)((uint8_t *)(uintptr_t)0x7FFFFF) >> 16;
        }
        v47 += 56;
        ++v48;
      }
      while ( v48 != 0 );
      v1 = self;
    }
  }
  else
  {
    v55 = 0;
    v57 = 0;
    do
    {
      v6 = *v53 + v55;
      v7 = *(uint32_t *)(v6 + 44);
      if ( v7 <= 0 )
      {
        if ( v7 < 0 )
        {
          v41 = 12 * v7;
          do
          {
            v42 = (uint8_t *)(*(uint32_t *)(v6 + 40) + v41);
            if ( v42 != nullptr )
            {
              *v42 = 0;
              v42[1] = 0;
            }
            v41 += 12;
            ++v7;
          }
          while ( v7 != 0 );
        }
      }
      else
      {
        v50 = *(uint32_t *)(v6 + 44);
        v8 = 0;
        v9 = 0;
        do
        {
          ++v8;
          v10 = (gameswf::ASValue::Self *)(v9 + *(uint32_t *)(v6 + 40));
          v9 += 12;
          gameswf::ASValue::dropRefs(v10);
        }
        while ( v8 != v50 );
      }
      v11 = *(uint32_t *)(v6 + 52);
      *(uint32_t *)(v6 + 44) = 0;
      if ( v11 == 0 )
      {
        v12 = *(gameswf::Self **)(v6 + 40);
        *(uint32_t *)(v6 + 48) = 0;
        if ( v12 != nullptr )
          gameswf::free_internal(v12);
        *(uint32_t *)(v6 + 40) = 0;
      }
      if ( *(uint8_t *)(v6 + 20) == 0xFF && (*(uint8_t *)(v6 + 39) & 1) != 0 )
        gameswf::free_internal(*(gameswf::Self **)(v6 + 32));
      if ( *(uint8_t *)v6 == 0xFF && (*(uint8_t *)(v6 + 19) & 1) != 0 )
        gameswf::free_internal(*(gameswf::Self **)(v6 + 12));
      ++v57;
      v55 += 56;
    }
    while ( v57 != v58 );
    v1 = self;
  }
  v13 = *((uint32_t *)v1 + 76);
  *((uint32_t *)v1 + 74) = 0;
  if ( v13 == 0 )
  {
    v14 = *((gameswf::Self **)v1 + 73);
    *((uint32_t *)v1 + 75) = 0;
    if ( v14 != nullptr )
      gameswf::free_internal(v14);
    *((uint32_t *)v1 + 73) = 0;
  }
  v15 = *((uint32_t *)v1 + 70);
  if ( v15 <= 0 )
  {
    if ( v15 < 0 )
    {
      v45 = 4 * v15;
      do
      {
        v46 = (uint32_t *)(*((uint32_t *)v1 + 69) + v45);
        if ( v46 != nullptr )
          *v46 = 0;
        v45 += 4;
        ++v15;
      }
      while ( v15 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v15; ++i )
    {
      if ( *(uint32_t *)(*((uint32_t *)v1 + 69) + 4 * i) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*((uint32_t *)v1 + 69) + 4 * i));
    }
  }
  v17 = *((uint32_t *)v1 + 72);
  *((uint32_t *)v1 + 70) = 0;
  if ( v17 == 0 )
  {
    v18 = *((gameswf::Self **)v1 + 69);
    *((uint32_t *)v1 + 71) = 0;
    if ( v18 != nullptr )
      gameswf::free_internal(v18);
    *((uint32_t *)v1 + 69) = 0;
  }
  v19 = *((uint32_t *)v1 + 66);
  if ( v19 <= 0 )
  {
    if ( v19 < 0 )
    {
      v43 = 8 * v19;
      do
      {
        v44 = (uint32_t *)(*((uint32_t *)v1 + 65) + v43);
        if ( v44 != nullptr )
        {
          *v44 = 0;
          v44[1] = 0;
        }
        v43 += 8;
        ++v19;
      }
      while ( v19 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v19; ++j )
    {
      v21 = *(gameswf::Self **)(*((uint32_t *)v1 + 65) + 8 * j);
      if ( v21 != nullptr )
      {
        v4 = (*(uint16_t *)v21)-- == 1;
        if ( v4 )
          gameswf::free_internal(v21);
      }
    }
  }
  v22 = *((uint32_t *)v1 + 68);
  *((uint32_t *)v1 + 66) = 0;
  if ( v22 == 0 )
  {
    v23 = *((gameswf::Self **)v1 + 65);
    *((uint32_t *)v1 + 67) = 0;
    if ( v23 != nullptr )
      gameswf::free_internal(v23);
    *((uint32_t *)v1 + 65) = 0;
  }
  v24 = *((gameswf::Self **)v1 + 64);
  if ( v24 != nullptr )
  {
    if ( *((int *)v24 + 1) >= 0 )
    {
      v51 = v1;
      v25 = 0;
      v26 = *((uint32_t *)v24 + 1);
      do
      {
        v27 = (uint32_t *)((char *)v24 + 16 * v25 + 8);
        if ( *v27 != -2 )
        {
          if ( *((uint32_t *)v24 + 4 * v25 + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v24 + 4 * v25 + 5));
          *v27 = -2;
          v27[1] = 0;
          v24 = *((gameswf::Self **)v51 + 64);
        }
        ++v25;
      }
      while ( v26 >= v25 );
      v1 = v51;
    }
    gameswf::free_internal(v24);
    *((uint32_t *)v1 + 64) = 0;
  }
  if ( *((uint32_t *)v1 + 56) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 56));
  v28 = *((uint32_t *)v1 + 21);
  if ( v28 < 0 )
  {
    v29 = 4 * v28;
    do
    {
      v30 = (uint32_t *)(*((uint32_t *)v1 + 20) + v29);
      if ( v30 != nullptr )
        *v30 = 0;
      v29 += 4;
      ++v28;
    }
    while ( v28 != 0 );
  }
  v31 = *((uint32_t *)v1 + 23);
  *((uint32_t *)v1 + 21) = 0;
  if ( v31 == 0 )
  {
    v32 = *((gameswf::Self **)v1 + 20);
    *((uint32_t *)v1 + 22) = 0;
    if ( v32 != nullptr )
      gameswf::free_internal(v32);
    *((uint32_t *)v1 + 20) = 0;
  }
  v54 = (uint32_t *)((char *)v1 + 64);
  v33 = *((uint32_t *)v1 + 17);
  v52 = v33;
  if ( v33 < 0 )
  {
    v34 = v33 << 6;
    v56 = v1;
    do
    {
      v35 = *v54 + v34;
      if ( v35 != 0 )
      {
        v36 = (uint16_t *)(*v54 + v34);
        v37 = 64;
        if ( (v35 & 1) != 0 )
        {
          *(uint8_t *)v35 = 0;
          v36 = (uint16_t *)(v35 + 1);
          LOWORD(v37) = 63;
        }
        if ( ((uint8_t)(uintptr_t)v36 & 2) != 0 )
        {
          *v36 = 0;
          v37 -= 2;
          ++v36;
        }
        memset(v36, 0, 4 * (v37 >> 2));
        v38 = &v36[2 * (v37 >> 2)];
        if ( (v37 & 2) != 0 )
          *v38++ = 0;
        if ( (v37 & 1) != 0 )
          *(uint8_t *)v38 = 0;
        *(uint32_t *)(v35 + 60) = 1065353216;
        *(uint32_t *)(v35 + 40) = 1065353216;
        *(uint32_t *)(v35 + 20) = 1065353216;
        *(uint32_t *)v35 = 1065353216;
      }
      v34 += 64;
      ++v52;
    }
    while ( v52 != 0 );
    v1 = v56;
  }
  v39 = *((uint32_t *)v1 + 19);
  *((uint32_t *)v1 + 17) = 0;
  if ( v39 == 0 )
  {
    v40 = *((gameswf::Self **)v1 + 16);
    *((uint32_t *)v1 + 18) = 0;
    if ( v40 != nullptr )
      gameswf::free_internal(v40);
    *((uint32_t *)v1 + 16) = 0;
  }
  if ( *((uint32_t *)v1 + 4) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 4));
  if ( *((uint32_t *)v1 + 3) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 3));
  gameswf::RefCounted::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::Destroy_ea10d1e50  (binary VA: 0x10d1e50)
// Original: gameswf::Root::~Root
// ----------------------------------------------------------------------------
void gameswf::Root::Destroy_ea10d1e50(gameswf::Root::Self *self)
{
  gameswf::Root::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getMovieVersion  (binary VA: 0x10d1eb0)
// Original: gameswf::Root::getMovieVersion
// ----------------------------------------------------------------------------
int gameswf::Root::getMovieVersion(gameswf::Root::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 40))(*((uint32_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getMovieWidth  (binary VA: 0x10d1ed0)
// Original: gameswf::Root::getMovieWidth
// ----------------------------------------------------------------------------
int gameswf::Root::getMovieWidth(gameswf::Root::Self *self)
{
  return (int)(float)((long double (*)(uint32_t))*(uint32_t *)(**((uint32_t **)self + 3) + 44))(*((uint32_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getMovieHeight  (binary VA: 0x10d1f00)
// Original: gameswf::Root::getMovieHeight
// ----------------------------------------------------------------------------
int gameswf::Root::getMovieHeight(gameswf::Root::Self *self)
{
  return (int)(float)((long double (*)(uint32_t))*(uint32_t *)(**((uint32_t **)self + 3) + 48))(*((uint32_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getMovieFPS  (binary VA: 0x10d1f30)
// Original: gameswf::Root::getMovieFPS
// ----------------------------------------------------------------------------
int gameswf::Root::getMovieFPS(gameswf::Root::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 56))(*((uint32_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::setRootMovie  (binary VA: 0x10d1f50)
// Original: gameswf::Root::setRootMovie
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::Root::setRootMovie(gameswf::Root::Self *self, gameswf::Character::Self *a2)
{
  gameswf::RefCounted::Self *result;

  result = *((gameswf::RefCounted::Self **)self + 4);
  if ( a2 != (gameswf::Character::Self *)(result) )
  {
    if ( result != nullptr )
      result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 4));
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
    if ( a2 != nullptr )
      return gameswf::RefCounted::addRef(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::updateMatrices  (binary VA: 0x10d1fb0)
// Original: gameswf::Root::updateMatrices
// ----------------------------------------------------------------------------
int gameswf::Root::updateMatrices(__m128 a1, __m128 a2, gameswf::Root::Self *self, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, unsigned int a30, float a31, float a32, unsigned int a33, float a34, float a35, int a36, int a37, uint32_t a38, uint32_t a39, uint32_t a40, uint32_t a41, uint32_t a42, uint32_t a43)
{
  int v43;
  float *v44;
  float v45; // xmm1_4
  float v46; // xmm4_4
  float v47; // xmm0_4
  int v48;
  float v49; // xmm1_4
  float v50; // xmm2_4
  unsigned int v51;
  char *v52;
  char *v53;
  __m128 v54;
  float v55; // xmm5_4
  __m128 v56;
  __m128 v57;
  uint32_t v58; // xmm4_4
  float v59; // xmm4_4
  uint32_t v60; // xmm1_4
  __m128 v61;
  __m128 v62;
  uint32_t v63; // xmm1_4
  uint32_t v64; // xmm6_4
  __m128 v65;
  __m128 v66;
  uint32_t v67; // xmm6_4
  float v68; // xmm1_4
  uint32_t v69; // xmm1_4
  __m128 v70;
  __m128 v71;
  uint32_t v72; // xmm4_4
  __m128 v73;
  __m128 v74;
  uint32_t v75; // xmm3_4
  uint32_t v76; // xmm3_4
  uint32_t v77; // xmm3_4
  uint32_t v78; // xmm1_4
  __m128 v79;
  uint32_t v80; // xmm3_4
  float *v82;
  float v83; // xmm4_4
  float v84; // xmm0_4
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  float v133;
  float v134;

  v43 = (*(int (**)(uint32_t *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*gameswf::s_render_handler + 160))(
          (uint32_t *)(gameswf::s_render_handler),
          v86,
          v87,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123,
          v124,
          v125,
          v126,
          v127,
          v128,
          v129,
          v130,
          v131,
          v132);
  if ( v43 == 2 || v43 == 0 )
  {
    v82 = *((float **)self + 3);
    v83 = (float)*((int *)self + 12);
    v49 = (float)*((int *)self + 11) / (float)(v82[41] - v82[40]);
    v84 = v82[43] - v82[42];
    memset(&a22, 0, 0x18u);
    memset(&a30, 0, 0x18u);
    v85 = *((uint32_t *)self + 10);
    *(float *)&a30 = 1.0;
    a34 = 1.0;
g4_m128_lane<float>(a1, 0) = (float)-v85;
    v46 = v83 / v84;
    v134 = (float)-*((uint32_t *)self + 9);
    if ( v134 >= -3.4028235e38f )
    {
      LODWORD(v133) = LODWORD(v134) &g4_m128_lane<uint32_t>(_mm_cmple_ss(g4_m128_from<__m128>(LODWORD(v134)), *(__m128 *)&dword_1C7B5E0), 0);
      if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
        goto LABEL_5;
    }
    else
    {
      v133 = 0.0;
      if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
        goto LABEL_5;
    }
    v50 = 0.0;
  }
  else
  {
    v44 = *((float **)self + 3);
    v45 = (float)*((int *)self + 12);
    v46 = (float)*((int *)self + 11) / (float)(v44[43] - v44[42]);
    v47 = v44[41] - v44[40];
    memset(&a22, 0, 0x18u);
    memset(&a30, 0, 0x18u);
    v48 = *((uint32_t *)self + 9);
    *(float *)&a30 = 1.0;
    a34 = 1.0;
g4_m128_lane<float>(a1, 0) = (float)-v48;
g4_m128_lane<float>(a2, 0) = (float)-*((uint32_t *)self + 10);
    v49 = v45 / v47;
    if (g4_m128_lane<float>(a2, 0) >= -3.4028235e38f )
    {
      LODWORD(v133) =g4_m128_lane<int32_t>(a2, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a2, *(__m128 *)&dword_1C7B5E0), 0);
      if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
        goto LABEL_5;
    }
    else
    {
      v133 = 0.0;
      if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
      {
LABEL_5:
        LODWORD(v50) =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
        goto LABEL_6;
      }
    }
    v50 = 0.0;
  }
LABEL_6:
  gameswf::Matrix::setScaleRotation(
    (gameswf::Matrix::Self *)&a30,
    COERCE_UNSIGNED_INT(1.0 / v49),
    COERCE_UNSIGNED_INT(1.0 / v46),
    0.0);
  v51 = 24;
  v52 = (char *)self + 100;
  if ( (((uint8_t)(uintptr_t)self + 100) & 1) != 0 )
  {
    *((uint8_t *)self + 100) = 0;
    v52 = (char *)self + 101;
    LOBYTE(v51) = 23;
  }
  if ( ((uint8_t)(uintptr_t)v52 & 2) != 0 )
  {
    *(uint16_t *)v52 = 0;
    v51 -= 2;
    v52 += 2;
  }
  memset(v52, 0, 4 * (v51 >> 2));
  v53 = &v52[4 * (v51 >> 2)];
  if ( (v51 & 2) != 0 )
  {
    *(uint16_t *)v53 = 0;
    v53 += 2;
  }
  if ( (v51 & 1) != 0 )
    *v53 = 0;
g4_m128_raw(v54) = a33;
  *((uint32_t *)self + 25) = 1065353216;
  v55 = *((float *)self + 26);
  v57 = v54;
  *((uint32_t *)self + 29) = 1065353216;
g4_m128_raw(v56) = a30;
g4_m128_lane<float>(v57, 0) = (float)(g4_m128_lane<float>(v54, 0) * v55) + *(float *)&a30;
  if (g4_m128_lane<float>(v57, 0) < -3.4028235e38f )
    v58 = 0;
  else
    v58 =g4_m128_lane<int32_t>(v57, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v57, *(__m128 *)&dword_1C7B5E0), 0);
  a38 = v58;
  v59 = *((float *)self + 28);
g4_m128_lane<float>(v56, 0) = (float)(*(float *)&a30 * v59) +g4_m128_lane<float>(v54, 0);
  if (g4_m128_lane<float>(v56, 0) < -3.4028235e38f )
    v60 = 0;
  else
    v60 =g4_m128_lane<int32_t>(v56, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v56, *(__m128 *)&dword_1C7B5E0), 0);
  a41 = v60;
g4_m128_raw(v62) = LODWORD(a34);
g4_m128_raw(v61) = LODWORD(a31);
g4_m128_lane<float>(v62, 0) = (float)(a34 * v55) + a31;
  if (g4_m128_lane<float>(v62, 0) < -3.4028235e38f )
    v63 = 0;
  else
    v63 =g4_m128_lane<int32_t>(v62, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v62, *(__m128 *)&dword_1C7B5E0), 0);
  a39 = v63;
g4_m128_lane<float>(v61, 0) = (float)(a31 * v59) + a34;
  if (g4_m128_lane<float>(v61, 0) < -3.4028235e38f )
    v64 = 0;
  else
    v64 =g4_m128_lane<int32_t>(v61, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v61, *(__m128 *)&dword_1C7B5E0), 0);
  a42 = v64;
g4_m128_raw(v66) = *((unsigned int *)self + 27);
g4_m128_raw(v65) = LODWORD(a35);
g4_m128_lane<float>(v66, 0) = (float)(g4_m128_lane<float>(v66, 0) + a32) + (float)(v55 * a35);
  if (g4_m128_lane<float>(v66, 0) < -3.4028235e38f )
    v67 = 0;
  else
    v67 =g4_m128_lane<int32_t>(v66, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v66, *(__m128 *)&dword_1C7B5E0), 0);
  v68 = a35 + *((float *)self + 30);
  a40 = v67;
g4_m128_lane<float>(v65, 0) = v68 + (float)(v59 * a32);
  if (g4_m128_lane<float>(v65, 0) < -3.4028235e38f )
    v69 = 0;
  else
    v69 =g4_m128_lane<int32_t>(v65, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v65, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 25) = a38;
  a43 = v69;
  *((uint32_t *)self + 26) = a39;
g4_m128_raw(v70) = *((unsigned int *)self + 25);
  *((uint32_t *)self + 27) = a40;
  *((uint32_t *)self + 28) = a41;
  *((uint32_t *)self + 29) = a42;
  *((uint32_t *)self + 30) = a43;
g4_m128_raw(v71) = *((unsigned int *)self + 26);
  v72 = 0;
  if (g4_m128_lane<float>(v70, 0) >= -3.4028235e38f )
    v72 =g4_m128_lane<int32_t>(v70, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v70, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v73) = *((unsigned int *)self + 28);
  a38 = v72;
g4_m128_raw(v74) = *((unsigned int *)self + 29);
  if (g4_m128_lane<float>(v73, 0) < -3.4028235e38f )
    v75 = 0;
  else
    v75 =g4_m128_lane<int32_t>(v73, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v73, *(__m128 *)&dword_1C7B5E0), 0);
  a41 = v75;
  if (g4_m128_lane<float>(v71, 0) < -3.4028235e38f )
    v76 = 0;
  else
    v76 =g4_m128_lane<int32_t>(v71, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v71, *(__m128 *)&dword_1C7B5E0), 0);
  a39 = v76;
  if (g4_m128_lane<float>(v74, 0) < -3.4028235e38f )
    v77 = 0;
  else
    v77 =g4_m128_lane<int32_t>(v74, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v74, *(__m128 *)&dword_1C7B5E0), 0);
  a42 = v77;
g4_m128_lane<float>(v70, 0) = (float)((float)(g4_m128_lane<float>(v70, 0) * v133) + (float)(g4_m128_lane<float>(v71, 0) * v50)) + *((float *)self + 27);
  if (g4_m128_lane<float>(v70, 0) < -3.4028235e38f )
    v78 = 0;
  else
    v78 =g4_m128_lane<int32_t>(v70, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v70, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v79) = LODWORD(v133);
  a40 = v78;
g4_m128_lane<float>(v79, 0) = (float)((float)(v133 *g4_m128_lane<float>(v73, 0)) + (float)(v50 *g4_m128_lane<float>(v74, 0))) + *((float *)self + 30);
  if (g4_m128_lane<float>(v79, 0) < -3.4028235e38f )
    v80 = 0;
  else
    v80 =g4_m128_lane<int32_t>(v79, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v79, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 25) = a38;
  *((uint32_t *)self + 26) = a39;
  *((uint32_t *)self + 27) = a40;
  *((uint32_t *)self + 28) = a41;
  *((uint32_t *)self + 29) = a42;
  a43 = v80;
  *((uint32_t *)self + 30) = v80;
  return gameswf::Matrix::setInverse((gameswf::Root::Self *)((char *)self + 124), (gameswf::Root::Self *)((char *)self + 100));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::screenToLogical  (binary VA: 0x10d2650)
// Original: gameswf::Root::screenToLogical
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::Root::screenToLogical(gameswf::Root::Self *self, gameswf::Point::Self *a2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4

  v3 = *((float *)a2 + 1);
  v4 = (float)((float)(*(float *)a2 * *((float *)self + 25)) + (float)(v3 * *((float *)self + 26)))
     + *((float *)self + 27);
  *((float *)a2 + 1) = (float)((float)(*((float *)self + 28) * *(float *)a2) + (float)(*((float *)self + 29) * v3))
                     + *((float *)self + 30);
  *(float *)a2 = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::setDisplayBounds  (binary VA: 0x10d26f0)
// Original: gameswf::Root::setDisplayBounds
// ----------------------------------------------------------------------------
int gameswf::Root::setDisplayBounds(gameswf::Root::Self *a1, int a2, int a3, int a4, int a5, int a6)
{
  *((uint32_t *)a1 + 37) = a6;
  return gameswf::Root::setDisplayBounds(a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::setAlignMode  (binary VA: 0x10d3250)
// Original: gameswf::Root::setAlignMode
// ----------------------------------------------------------------------------
int gameswf::Root::setAlignMode(gameswf::Root::Self *a1, int a2)
{
  *((uint32_t *)a1 + 38) = a2;
  return gameswf::Root::setDisplayBounds(
           a1,
           *((uint32_t *)a1 + 9),
           *((uint32_t *)a1 + 10),
           *((uint32_t *)a1 + 11),
           *((uint32_t *)a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::logicalToScreen  (binary VA: 0x10d32a0)
// Original: gameswf::Root::logicalToScreen
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::Root::logicalToScreen(gameswf::Root::Self *self, gameswf::Point::Self *a2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4

  v3 = *((float *)a2 + 1);
  v4 = (float)((float)(*(float *)a2 * *((float *)self + 31)) + (float)(v3 * *((float *)self + 32)))
     + *((float *)self + 33);
  *((float *)a2 + 1) = (float)((float)(*((float *)self + 34) * *(float *)a2) + (float)(*((float *)self + 35) * v3))
                     + *((float *)self + 36);
  *(float *)a2 = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::logicalToScreenInternal  (binary VA: 0x10d3300)
// Original: gameswf::Root::logicalToScreenInternal
// ----------------------------------------------------------------------------
int gameswf::Root::logicalToScreenInternal(gameswf::Root::Self *self, gameswf::Point::Self *a2)
{
  int v2;
  bool v3;
  float *v4;
  float v5; // xmm1_4
  float v6; // xmm4_4
  float v7; // xmm6_4
  int result;
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float *v15;
  float v16; // xmm3_4

  v2 = (*(int (**)(uint32_t *))(*gameswf::s_render_handler + 160))((uint32_t *)(gameswf::s_render_handler));
  v3 = v2 == 0 || v2 == 2;
  if ( v3 )
  {
    v4 = *((float **)self + 3);
    v5 = v4[41] - v4[40];
    v6 = v4[43] - v4[42];
  }
  else
  {
    v15 = *((float **)self + 3);
    v5 = v15[43] - v15[42];
    v6 = v15[41] - v15[40];
  }
  v7 = (float)*((int *)self + 11);
  result = *((uint32_t *)self + 10) - *((uint32_t *)self + 6);
  v9 = (float)*((int *)self + 12);
  v10 = (float)*((int *)self + 7) / v7;
  v11 = (float)*((int *)self + 8) / v9;
  v12 = (float)((float)(*((uint32_t *)self + 9) - *((uint32_t *)self + 5)) / v7) * v5;
  v13 = (float)((float)result / v9) * v6;
  if ( v3 )
  {
    v16 = (float)(v11 * *((float *)a2 + 1)) - v13;
    *(float *)a2 = (float)(v10 * *(float *)a2) - v12;
    *((float *)a2 + 1) = v16;
  }
  else
  {
    v14 = (float)(v10 * *((float *)a2 + 1)) - v12;
    *(float *)a2 = (float)(v11 * *(float *)a2) - v13;
    *((float *)a2 + 1) = v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::notifyMouseState  (binary VA: 0x10d3420)
// Original: gameswf::Root::notifyMouseState
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::Root::notifyMouseState(gameswf::Root::Self *self, int a2, int a3, int a4)
{
  *((uint32_t *)self + 40) = a2;
  *((uint32_t *)self + 41) = a3;
  *((uint32_t *)self + 42) = a4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getMouseState  (binary VA: 0x10d3450)
// Original: gameswf::Root::getMouseState
// ----------------------------------------------------------------------------
int * gameswf::Root::getMouseState(gameswf::Root::Self *self, int *a2, int *a3, int *a4)
{
  *a2 = *((uint32_t *)self + 40);
  *a3 = *((uint32_t *)self + 41);
  *a4 = *((uint32_t *)self + 42);
  return a4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getRootMovie  (binary VA: 0x10d3480)
// Original: gameswf::Root::getRootMovie
// ----------------------------------------------------------------------------
int gameswf::Root::getRootMovie(gameswf::Root::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getStage  (binary VA: 0x10d3490)
// Original: gameswf::Root::getStage
// ----------------------------------------------------------------------------
int gameswf::Root::getStage(gameswf::Root::Self *self)
{
  int v1;
  gameswf::Self *v2;
  int v3;
  bool v5;
  gameswf::Self *v6;

  v1 = *((uint32_t *)self + 79);
  if ( v1 != 0 )
  {
    v2 = *((gameswf::Self **)self + 78);
    if ( *((uint8_t *)v2 + 2) == 0 )
    {
      v5 = (*(uint16_t *)v2)-- == 1;
      if ( v5 )
        gameswf::free_internal(v2);
      *((uint32_t *)self + 78) = 0;
      *((uint32_t *)self + 79) = 0;
      return *((uint32_t *)self + 4);
    }
  }
  if ( *(uint8_t *)(v1 + 232) == 0 )
    return *((uint32_t *)self + 4);
  v6 = *((gameswf::Self **)self + 78);
  if ( *((uint8_t *)v6 + 2) == 0 )
  {
    v5 = (*(uint16_t *)v6)-- == 1;
    if ( v5 )
      gameswf::free_internal(v6);
    *((uint32_t *)self + 78) = 0;
    *((uint32_t *)self + 79) = 0;
    v1 = 0;
  }
  v3 = *(uint32_t *)(v1 + 120);
  if ( v3 == 0 )
    return v3;
  if ( G4_VCALL<uint8_t>(v3, 8, 1) == 0 )
    return 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::setDisplayViewport  (binary VA: 0x10d35a0)
// Original: gameswf::Root::setDisplayViewport
// ----------------------------------------------------------------------------
int gameswf::Root::setDisplayViewport(gameswf::Root::Self *a1, int a2, unsigned int a3, char *a4, int a5, int a6)
{
  int result;
  gameswf::Self *v7;
  int *Stage;
  int v9;
  gameswf::Self *v10;
  int v11;
  gameswf::Self *v12;
  int Event;
  bool v14;
  typedef int (*_g4_t_v15)(int *, int);
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef gameswf::Self *_g4_t_v18;
  typedef int16_t _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v17)) > _g4_s2 ? (17u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (34u + sizeof(_g4_t_v20)) > _g4_s5 ? (34u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (35u + sizeof(_g4_t_v21)) > _g4_s6 ? (35u + sizeof(_g4_t_v21)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 17u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 34u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 35u);

  result = a2;
  if ( *((uint32_t *)a1 + 5) != a2 || *((uint32_t *)a1 + 6) != a3 || *((char **)a1 + 7) != a4 || *((uint32_t *)a1 + 8) != a5 )
  {
    *((uint32_t *)a1 + 5) = a2;
    *((uint32_t *)a1 + 8) = a5;
    *((uint32_t *)a1 + 6) = a3;
    *((uint32_t *)a1 + 7) = (uint32_t)(uintptr_t)(a4);
    gameswf::Root::setDisplayBounds(a1, a2, a3, (int)(uintptr_t)(a4), a5, a6);
    result = *((uint32_t *)a1 + 79);
    if ( result != 0 )
    {
      v7 = *((gameswf::Self **)a1 + 78);
      if ( *((uint8_t *)v7 + 2) == 0 )
      {
        v14 = (*(uint16_t *)v7)-- == 1;
        if ( v14 )
          gameswf::free_internal(v7);
        *((uint32_t *)a1 + 78) = 0;
        *((uint32_t *)a1 + 79) = 0;
        result = 0;
      }
    }
    if ( *(uint8_t *)(result + 232) != 0 )
    {
      result = gameswf::Root::getStage(a1);
      if ( result != 0 )
      {
        Stage = (int *)gameswf::Root::getStage(a1);
        v9 = *Stage;
        v16 = 1;
        v17 = 0;
        v15 = *(int (**)(int *, int))(v9 + 104);
        gameswf::String::resize((gameswf::String::Self *)&v16, 6);
        v10 = (gameswf::Self *)&v17;
        if ( v16 == -1 )
          v10 = v18;
        gameswf::Strcpy_s(v10, (char *)&loc_6 + 1, (gameswf::Self *)"resize");
        v19 = -1;
        v20 = 127;
        v21 |= 1u;
        v11 = *((uint32_t *)a1 + 79);
        if ( v11 != 0 )
        {
          v12 = *((gameswf::Self **)a1 + 78);
          if ( *((uint8_t *)v12 + 2) == 0 )
          {
            v14 = (*(uint16_t *)v12)-- == 1;
            if ( v14 )
              gameswf::free_internal(v12);
            *((uint32_t *)a1 + 78) = 0;
            *((uint32_t *)a1 + 79) = 0;
            v11 = 0;
          }
        }
        Event = gameswf::AS3Engine::getEvent((gameswf::AS3Engine::Self *)(v11 + 236), (const gameswf::String::Self *)&v16);
        result = v15(Stage, Event);
        if ( v16 == -1 && (v21 & 1) != 0 )
          return gameswf::free_internal(v18);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::stopDrag  (binary VA: 0x10d37c0)
// Original: gameswf::Root::stopDrag
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::Root::stopDrag(gameswf::Root::Self *self)
{
  *((uint32_t *)self + 47) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::startDrag  (binary VA: 0x10d37e0)
// Original: gameswf::Root::startDrag
// ----------------------------------------------------------------------------
int gameswf::Root::startDrag(gameswf::Root::Self *self, gameswf::Character::Self *a2, bool a3, bool a4, gameswf::Rect::Self *a5)
{
  gameswf::Character::Self *v5;
  bool v6;
  bool v7;
  int result;
  gameswf::Self *v9;
  bool v10;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( *((uint32_t *)self + 47) != 0 )
  {
    gameswf::Root::stopDrag(self);
    v6 = a3;
    v7 = a4;
  }
  *((uint32_t *)self + 47) = (uint32_t)(uintptr_t)(a2);
  *((uint8_t *)self + 193) = v6;
  *((uint8_t *)self + 194) = v7;
  *((uint32_t *)self + 49) = *(uint32_t *)a5;
  *((uint32_t *)self + 50) = *((uint32_t *)a5 + 2);
  *((uint32_t *)self + 51) = *((uint32_t *)a5 + 1);
  *((uint32_t *)self + 52) = *((uint32_t *)a5 + 3);
  *((uint8_t *)self + 192) = 0;
  result = *((uint32_t *)a2 + 14);
  *((uint8_t *)a2 + 150) = 1;
  if ( result != 0 )
  {
    while ( 1 )
    {
      v9 = *((gameswf::Self **)v5 + 13);
      if ( *((uint8_t *)v9 + 2) == 0 )
        break;
      v5 = (gameswf::Character::Self *)result;
      result = *(uint32_t *)(result + 56);
      *((uint8_t *)v5 + 150) = 1;
      if ( result == 0 )
        return result;
    }
    result = *(uint16_t *)v9 - 1;
    v10 = *(uint16_t *)v9 == 1;
    *(uint16_t *)v9 = result;
    if ( v10 )
      result = gameswf::free_internal(v9);
    *((uint32_t *)v5 + 13) = 0;
    *((uint32_t *)v5 + 14) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getMovieDefinition  (binary VA: 0x10d38e0)
// Original: gameswf::Root::getMovieDefinition
// ----------------------------------------------------------------------------
int gameswf::Root::getMovieDefinition(gameswf::Root::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 4) + 148))(*((uint32_t *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getCurrentFrame  (binary VA: 0x10d3900)
// Original: gameswf::Root::getCurrentFrame
// ----------------------------------------------------------------------------
int gameswf::Root::getCurrentFrame(gameswf::Root::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 4) + 312))(*((uint32_t *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getFrameRate  (binary VA: 0x10d3920)
// Original: gameswf::Root::getFrameRate
// ----------------------------------------------------------------------------
int gameswf::Root::getFrameRate(gameswf::Root::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 56))(*((uint32_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::setFrameRate  (binary VA: 0x10d3940)
// Original: gameswf::Root::setFrameRate
// ----------------------------------------------------------------------------
gameswf::MovieDefImpl::Self * gameswf::Root::setFrameRate(gameswf::MovieDefImpl::Self **self, float a2)
{
  gameswf::MovieDefImpl::Self *result;

  result = (gameswf::MovieDefImpl::Self *)self;
  if ( a2 >= 1.0 && a2 <= 120.0 )
  {
    *((float *)self + 58) = 1.0 / a2;
    return gameswf::MovieDefImpl::setFrameRate(*(self + 3), a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getPixelScale  (binary VA: 0x10d39b0)
// Original: gameswf::Root::getPixelScale
// ----------------------------------------------------------------------------
long double gameswf::Root::getPixelScale(gameswf::Root::Self *self)
{
  return *((float *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getCharacter  (binary VA: 0x10d39c0)
// Original: gameswf::Root::getCharacter
// ----------------------------------------------------------------------------
int gameswf::Root::getCharacter(gameswf::Root::Self *self, int a2)
{
  return (*(int (**)(uint32_t, int))(**((uint32_t **)self + 4) + 144))(*((uint32_t *)self + 4), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::setBackgroundColor  (binary VA: 0x10d39f0)
// Original: gameswf::Root::setBackgroundColor
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::Root::setBackgroundColor(gameswf::Root::Self *self, const gameswf::Color::Self *a2)
{
  *((uint32_t *)self + 39) = *(uint32_t *)a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::setBackgroundAlpha  (binary VA: 0x10d3a10)
// Original: gameswf::Root::setBackgroundAlpha
// ----------------------------------------------------------------------------
int gameswf::Root::setBackgroundAlpha(gameswf::Root::Self *self, float a2)
{
  int result;
  float v3; // xmm0_4

  result = -1;
  v3 = (float)(255.0 * a2) + 0.5;
  if ( (int)v3 <= 254 )
  {
    result = 0;
    if ( (int)v3 > 0 )
      result = (int)v3;
  }
  *((uint8_t *)self + 159) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::getBackgroundAlpha  (binary VA: 0x10d3a60)
// Original: gameswf::Root::getBackgroundAlpha
// ----------------------------------------------------------------------------
long double gameswf::Root::getBackgroundAlpha(gameswf::Root::Self *self)
{
  return (float)((float)*((uint8_t *)self + 159) * 0.003921569f);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::beginDisplay  (binary VA: 0x10d3aa0)
// Original: gameswf::Root::beginDisplay
// ----------------------------------------------------------------------------
uint32_t * gameswf::Root::beginDisplay(gameswf::Self **self)
{
  gameswf::Root::Self *v1;
  gameswf::Self *v2;
  int v3;
  int v4;
  int v5;
  int i;
  uint32_t *v7;
  gameswf::RefCounted::Self *v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float v15; // xmm1_4
  float *v16;
  int v17;
  uint32_t *result;
  gameswf::Root::Self *v19;
  int v20;
  gameswf::Self *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  typedef gameswf::Root::Self *_g4_t_v31;
  typedef gameswf::Root::Self *_g4_t_v32;
  typedef gameswf::Root::Self *_g4_t_v33;
  typedef gameswf::Root::Self *_g4_t_v34;
  typedef gameswf::Root::Self *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef unsigned int _g4_t_v41[2];
  typedef uint32_t _g4_t_v42[11];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v31)) > _g4_s0 ? (8u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v33)) > _g4_s2 ? (8u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v34)) > _g4_s3 ? (8u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v35)) > _g4_s4 ? (8u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v36)) > _g4_s5 ? (12u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v37)) > _g4_s6 ? (40u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v38)) > _g4_s7 ? (44u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v39)) > _g4_s8 ? (48u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v40)) > _g4_s9 ? (52u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v41)) > _g4_s10 ? (56u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v42)) > _g4_s11 ? (64u + sizeof(_g4_t_v42)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);

  v1 = (gameswf::Root::Self *)self;
  v2 = *(self + 64);
  if ( v2 != nullptr && *(int *)v2 > 0 )
  {
    v3 = 0;
    v36 = (char *)(self + 64);
    if ( *((int *)v2 + 1) >= 0 && *((uint32_t *)v2 + 2) == -2 )
    {
      v23 = 24;
      v24 = 1;
      do
      {
        v3 = v24;
        if ( v24 > *((uint32_t *)v2 + 1) )
          break;
        v25 = *(uint32_t *)((char *)v2 + v23);
        ++v24;
        v23 += 16;
      }
      while ( v25 == -2 );
    }
LABEL_4:
    while ( v3 <= *((uint32_t *)v2 + 1) )
    {
      v31 = v1;
      gameswf::ASBitmapData::renderList(*((gameswf::ASBitmapData::Self **)v2 + 4 * v3 + 5));
      v1 = v31;
      v2 = *(gameswf::Self **)v36;
      v4 = *(uint32_t *)(*(uint32_t *)v36 + 4);
      if ( v4 < v3 )
        break;
      v26 = v3 + 1;
      if ( v4 >= v3 + 1 && *((uint32_t *)v2 + 4 * v26 + 2) == -2 )
      {
        v27 = v3 + 2;
        v28 = 16 * v27 + 8;
        while ( 1 )
        {
          v26 = v27;
          if ( *(uint32_t *)(*(uint32_t *)v36 + 4) < v27 )
            break;
          v29 = *(uint32_t *)((char *)v2 + v28);
          ++v27;
          v28 += 16;
          if ( v29 != -2 )
          {
            v3 = v26;
            goto LABEL_4;
          }
        }
      }
      v3 = v26;
    }
    v5 = *((uint32_t *)v2 + 1);
    if ( v5 >= 0 )
    {
      for ( i = 0; i <= v5; ++i )
      {
        v7 = (uint32_t *)((char *)v2 + 16 * i + 8);
        if ( *v7 != -2 )
        {
          v8 = *((gameswf::RefCounted::Self **)v2 + 4 * i + 5);
          if ( v8 != nullptr )
          {
            v32 = v1;
            gameswf::RefCounted::dropRef(v8);
            v1 = v32;
          }
          *v7 = -2;
          v7[1] = 0;
          v2 = *((gameswf::Self **)v1 + 64);
        }
      }
    }
    v33 = v1;
    gameswf::free_internal(v2);
    v1 = v33;
    *((uint32_t *)v33 + 64) = 0;
  }
  v9 = *((uint32_t **)v1 + 3);
  v10 = v9[40];
  v38 = v9[42];
  v11 = v9[43];
  v12 = v9[41];
  v40 = v11;
  v37 = v10;
  v39 = v12;
  v34 = v1;
  gameswf::Root::logicalToScreenInternal(v1, (gameswf::Point::Self *)&v37);
  gameswf::Root::logicalToScreenInternal(v34, (gameswf::Point::Self *)&v39);
  v13 = *((uint32_t *)v34 + 3);
  v14 = (int)*(float *)(v13 + 172);
  v41[0] = (int)*(float *)(v13 + 164);
  v41[1] = v14;
  (*(void (**)(uint32_t *, uint32_t, unsigned int *))(*gameswf::s_render_handler + 104))(
    (uint32_t *)(gameswf::s_render_handler),
    *((uint32_t *)v34 + 14),
    v41);
  v15 = *((float *)v34 + 13);
  v42[0] = v37;
  v16 = (float *)gameswf::s_render_handler;
  v42[1] = v39;
  v17 = v38;
  *((float *)gameswf::s_render_handler + 17) = v15;
  v42[2] = v17;
  v16[18] = v15;
  v42[3] = v40;
  v16[19] = 1.0 / v15;
  gameswf::RenderHandler::setClipBound((gameswf::RenderHandler::Self *)v16, (const gameswf::Rect::Self *)v42);
  result = (uint32_t *)(gameswf::s_render_handler);
  v19 = v34;
  if ( gameswf::s_render_handler != nullptr )
    gameswf::s_render_handler[53] = 0;
  v20 = *((uint32_t *)v34 + 79);
  if ( v20 != 0 )
  {
    v21 = *((gameswf::Self **)v34 + 78);
    if ( *((uint8_t *)v21 + 2) == 0 )
    {
      if ( (*(uint16_t *)v21)-- == 1 )
      {
        gameswf::free_internal(v21);
        v19 = v34;
      }
      *((uint32_t *)v19 + 78) = 0;
      *((uint32_t *)v19 + 79) = 0;
      result = (uint32_t *)(gameswf::s_render_handler);
      v20 = 0;
    }
  }
  v22 = *(uint32_t *)(v20 + 12);
  if ( result != nullptr )
  {
    v35 = v19;
    G4_VCALL<void>(result, 52, v22);
    result = (uint32_t *)(gameswf::s_render_handler);
    if ( gameswf::s_render_handler != nullptr )
    {
      (*(void (**)(uint32_t *, gameswf::Root::Self *))(*gameswf::s_render_handler + 56))((uint32_t *)(gameswf::s_render_handler), v35);
      result = (uint32_t *)(gameswf::s_render_handler);
      if ( gameswf::s_render_handler != nullptr )
        return (uint32_t *)(*(int (**)(uint32_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int))(*gameswf::s_render_handler + 16))(
                           (uint32_t *)(gameswf::s_render_handler),
                           *((uint32_t *)v35 + 39),
                           *((uint32_t *)v35 + 5),
                           *((uint32_t *)v35 + 6),
                           *((uint32_t *)v35 + 7),
                           *((uint32_t *)v35 + 8),
                           v37,
                           v39,
                           v38,
                           v40);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::setCameraFOV  (binary VA: 0x10d3e50)
// Original: gameswf::Root::setCameraFOV
// ----------------------------------------------------------------------------
int gameswf::Root::setCameraFOV(gameswf::Root::Self *self, float a2)
{
  long double v2; // fst7
  int result;
  float v4; // xmm1_4

  v2 = tan(a2 * 0.008726646259971648);
  result = (int)*(float *)(*((uint32_t *)self + 3) + 164);
  v4 = v2;
  *((float *)self + 14) = a2;
  *((float *)self + 15) = (float)result / v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::Construct  (binary VA: 0x10d3ec0)
// Original: gameswf::Root::Root
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::Root::Construct(gameswf::Root::Self *self, gameswf::Player::Self *a2, gameswf::MovieDefImpl::Self *a3)
{
  char *v3;
  unsigned int v4;
  char *v5;
  char *v6;
  unsigned int v7;
  char *v8;
  gameswf::Self *WeakProxy;
  gameswf::Self *v10;
  gameswf::ASLoaderManager::Self *v12;
  gameswf::Root::Self *result;
  float v14;
  float v15;
  float v16;
  gameswf::Self *v17;

  gameswf::RefCounted::RefCounted(self);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EFE0);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a3);
  if ( a3 != nullptr )
    gameswf::RefCounted::addRef(a3);
  v3 = (char *)self + 100;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 1;
  *((uint32_t *)self + 8) = 1;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 1;
  *((uint32_t *)self + 12) = 1;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 1113325568;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint8_t *)self + 96) = 1;
  v4 = 24;
  if ( (((unsigned int)(uintptr_t)(self) + 100) & 1) != 0 )
  {
    v3 = (char *)self + 101;
    *((uint8_t *)self + 100) = 0;
    LOBYTE(v4) = 23;
    if ( (((unsigned int)(uintptr_t)(self) + 101) & 2) == 0 )
      goto LABEL_5;
  }
  else if ( ((uint8_t)(uintptr_t)v3 & 2) == 0 )
  {
    goto LABEL_5;
  }
  *(uint16_t *)v3 = 0;
  v4 -= 2;
  v3 += 2;
LABEL_5:
  memset(v3, 0, 4 * (v4 >> 2));
  v5 = &v3[4 * (v4 >> 2)];
  if ( (v4 & 2) != 0 )
  {
    *(uint16_t *)v5 = 0;
    v5 += 2;
  }
  if ( (v4 & 1) != 0 )
    *v5 = 0;
  v6 = (char *)self + 124;
  *((uint32_t *)self + 25) = 1065353216;
  *((uint32_t *)self + 29) = 1065353216;
  v7 = 24;
  if ( (((unsigned int)(uintptr_t)(self) + 124) & 1) != 0 )
  {
    *((uint8_t *)self + 124) = 0;
    v6 = (char *)self + 125;
    LOBYTE(v7) = 23;
  }
  if ( ((uint8_t)(uintptr_t)v6 & 2) != 0 )
  {
    *(uint16_t *)v6 = 0;
    v7 -= 2;
    v6 += 2;
  }
  memset(v6, 0, 4 * (v7 >> 2));
  v8 = &v6[4 * (v7 >> 2)];
  if ( (v7 & 2) != 0 )
  {
    *(uint16_t *)v8 = 0;
    v8 += 2;
  }
  if ( (v7 & 1) != 0 )
    *v8 = 0;
  *((uint32_t *)self + 31) = 1065353216;
  *((uint32_t *)self + 35) = 1065353216;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint8_t *)self + 156) = 0;
  *((uint8_t *)self + 157) = 0;
  *((uint8_t *)self + 158) = 0;
  *((uint8_t *)self + 159) = -1;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint8_t *)self + 192) = 0;
  *((uint8_t *)self + 193) = 0;
  *((uint8_t *)self + 194) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 51) = 1065353216;
  *((uint32_t *)self + 52) = 1065353216;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *((uint8_t *)self + 220) = 0;
  *((uint8_t *)self + 221) = 0;
  *((uint8_t *)self + 222) = 0;
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 57) = 1065353216;
  *((uint32_t *)self + 58) = 1065353216;
  *((uint32_t *)self + 59) = 0;
  *((uint32_t *)self + 60) = 10;
  *((uint32_t *)self + 61) = 2000;
  *((uint32_t *)self + 62) = 256;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 70) = 0;
  *((uint32_t *)self + 71) = 0;
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint32_t *)self + 76) = 0;
  *((uint32_t *)self + 77) = 0;
  *((uint32_t *)self + 78) = 0;
  *((uint32_t *)self + 79) = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v10 = *((gameswf::Self **)self + 78);
    if ( WeakProxy != v10 )
    {
      if ( v10 != nullptr && (*(uint16_t *)v10)-- == 1 )
      {
        v17 = WeakProxy;
        gameswf::free_internal(v10);
        WeakProxy = v17;
      }
      *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)(WeakProxy);
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  gameswf::Root::setCameraFOV(self, *((float *)self + 14));
  v14 = ((long double (*)(uint32_t))*(uint32_t *)(**((uint32_t **)self + 3) + 48))(*((uint32_t *)self + 3));
  v16 = v14;
  v15 = ((long double (*)(uint32_t))*(uint32_t *)(**((uint32_t **)self + 3) + 44))(*((uint32_t *)self + 3));
  gameswf::Root::setDisplayViewport(self, 0, 0, (char *)(int)v15, (int)v16, 0);
  gameswf::Root::getFrameRate(self);
  *((float *)self + 58) = 1.0 / v15;
  gameswf::Player::setRoot(a2, self);
  v12 = (gameswf::ASLoaderManager::Self *)opNew(0x20u);
  result = (gameswf::Root::Self *)(gameswf::ASLoaderManager::Construct(v12, a2));
  *((uint32_t *)self + 77) = (uint32_t)(uintptr_t)(v12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::projectPosition  (binary VA: 0x10d4380)
// Original: gameswf::Root::projectPosition
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::Root::projectPosition(gameswf::Root::Self *self, const gameswf::vector3df::Self *a2, gameswf::Point::Self *a3)
{
  float v4; // xmm4_4
  int v5;
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm0_4

  v4 = *((float *)self + 15);
  v5 = *((uint32_t *)self + 3);
  v6 = *((float *)a2 + 2) + v4;
  v7 = 0.5 * *(float *)(v5 + 172);
  v8 = *((float *)a2 + 1);
  *(float *)a3 = (float)((float)((float)(*(float *)a2 - (float)(*(float *)(v5 + 164) * 0.5)) / v6) * v4)
               + (float)(*(float *)(v5 + 164) * 0.5);
  *((float *)a3 + 1) = (float)((float)((float)(v8 - v7) / v6) * *((float *)self + 15)) + v7;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::flushBufferedText  (binary VA: 0x10d4400)
// Original: gameswf::Root::flushBufferedText
// ----------------------------------------------------------------------------
uint32_t * gameswf::Root::flushBufferedText()
{
  uint32_t *result;

  result = (uint32_t *)(gameswf::s_render_handler);
  if ( gameswf::s_render_handler != nullptr )
    return (uint32_t *)gameswf::RenderHandler::flush((gameswf::RenderHandler::Self *)gameswf::s_render_handler);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::endDisplay  (binary VA: 0x10d4430)
// Original: gameswf::Root::endDisplay
// ----------------------------------------------------------------------------
uint32_t * gameswf::Root::endDisplay()
{
  uint32_t *result;

  gameswf::Root::flushBufferedText();
  result = (uint32_t *)(gameswf::s_render_handler);
  if ( gameswf::s_render_handler != nullptr )
  {
    (*(void (**)(uint32_t *))(*gameswf::s_render_handler + 20))((uint32_t *)(gameswf::s_render_handler));
    result = (uint32_t *)(gameswf::s_render_handler);
    if ( gameswf::s_render_handler != nullptr )
    {
      (*(void (**)(uint32_t *, uint32_t))(*gameswf::s_render_handler + 52))((uint32_t *)(gameswf::s_render_handler), 0);
      result = (uint32_t *)(gameswf::s_render_handler);
      if ( gameswf::s_render_handler != nullptr )
        return (uint32_t *)(*(int (**)(uint32_t *, uint32_t))(*gameswf::s_render_handler + 56))(
                           (uint32_t *)(gameswf::s_render_handler),
                           0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::renderVirtualKeyboard  (binary VA: 0x10d44a0)
// Original: gameswf::Root::renderVirtualKeyboard
// ----------------------------------------------------------------------------
void gameswf::Root::renderVirtualKeyboard()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::setFlashVars  (binary VA: 0x10d44b0)
// Original: gameswf::Root::setFlashVars
// ----------------------------------------------------------------------------
void gameswf::Root::setFlashVars(gameswf::Root::Self *self, const gameswf::String::Self *a2)
{
  const char *v2;
  char *v3;
  char *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  const char *v7;
  const char *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  int v11;
  gameswf::Self *v12;
  char *v13;
  gameswf::Self *v14;
  int v15;
  unsigned int v16;
  int RootMovie;
  int StandardMemberID;
  gameswf::Self *v19;
  int v20;
  int v21;
  int v22;
  char *v23;
  int v24;
  typedef char *_g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef unsigned int _g4_t_v28[3];
  typedef char _g4_t_v29;
  typedef uint8_t _g4_t_v30[3];
  typedef int _g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef uint8_t _g4_t_v35[11];
  typedef gameswf::Self *_g4_t_v36;
  typedef int16_t _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef gameswf::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v27)) > _g4_s2 ? (8u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v28)) > _g4_s3 ? (16u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v29)) > _g4_s4 ? (28u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (29u + sizeof(_g4_t_v30)) > _g4_s5 ? (29u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v32)) > _g4_s7 ? (40u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v33)) > _g4_s8 ? (44u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v34)) > _g4_s9 ? (60u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (61u + sizeof(_g4_t_v35)) > _g4_s10 ? (61u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v36)) > _g4_s11 ? (72u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v37)) > _g4_s12 ? (76u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (78u + sizeof(_g4_t_v38)) > _g4_s13 ? (78u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (79u + sizeof(_g4_t_v39)) > _g4_s14 ? (79u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v40)) > _g4_s15 ? (92u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (93u + sizeof(_g4_t_v41)) > _g4_s16 ? (93u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v42)) > _g4_s17 ? (96u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v43)) > _g4_s18 ? (104u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v44)) > _g4_s19 ? (108u + sizeof(_g4_t_v44)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 29u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 61u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 78u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 79u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 93u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 104u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 108u);

  v2 = (char *)a2 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
    v2 = *((const char **)a2 + 3);
  while ( *v2 != 0 )
  {
    v3 = (char *)(strchr(v2, 61));
    v4 = v3;
    if ( v3 == nullptr )
      break;
    v26 = v3 - v2;
    v29 = 1;
    v30[0] = 0;
    gameswf::String::resize((gameswf::String::Self *)&v29, v3 - v2);
    v5 = (gameswf::Self *)v30;
    if ( v29 == -1 )
      v5 = v32;
    memcpy(v5, v2, v26);
    v6 = (gameswf::Self *)v30;
    if ( v29 == -1 )
      v6 = v32;
    v7 = v4 + 1;
    *((uint8_t *)v6 + v26) = 0;
    LOWORD(v33) = -1;
    BYTE2(v33) = 127;
    HIBYTE(v33) |= 1u;
    v25 = (char *)(strchr(v7, 44));
    if ( v25 == nullptr )
    {
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v23 = *((char **)a2 + 3);
        v24 = *((uint32_t *)a2 + 1) - 1;
      }
      else
      {
        v23 = (char *)a2 + 1;
        v24 = *(char *)a2 - 1;
      }
      v25 = &v23[v24];
    }
    v34 = 1;
    v35[0] = 0;
    if ( v7 != nullptr )
    {
      v8 = (const char *)(v35);
      v27 = v25 - v7;
      gameswf::String::resize((gameswf::String::Self *)&v34, v25 - v7);
      v9 = (gameswf::Self *)v35;
      if ( v34 == -1 )
        v9 = v36;
      memcpy(v9, v7, v27);
      v10 = (gameswf::Self *)v35;
      if ( v34 == -1 )
        v10 = v36;
      *((uint8_t *)v10 + v27) = 0;
      v37 = -1;
      v38 = 127;
      v39 |= 1u;
      if ( v34 == -1 )
        v8 = (const char *)v36;
    }
    else
    {
      v8 = (const char *)(v35);
      v37 = -1;
      v38 = 127;
      v39 |= 1u;
    }
    LOWORD(v28[0]) = 0;
    gameswf::ASValue::setString((gameswf::ASValue::Self *)v28, v8);
    v40 = 1;
    v41 = 0;
    if ( v29 == -1 )
      v11 = v31 - 1;
    else
      v11 = v29 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v40, v11);
    v12 = (gameswf::Self *)v30;
    if ( v29 == -1 )
      v12 = v32;
    if ( v40 == -1 )
    {
      v13 = v42;
      v14 = v43;
    }
    else
    {
      v13 = (char *)v40;
      v14 = (gameswf::Self *)&v41;
    }
    gameswf::Strcpy_s(v14, v13, v12);
    if ( (uint8_t *)(v33 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v29 == -1 )
      {
        v19 = v32;
        v20 = v31 - 1;
      }
      else
      {
        v19 = (gameswf::Self *)v30;
        v20 = v29 - 1;
      }
      v15 = 5381;
      if ( v20 > 0 )
      {
        do
        {
          --v20;
          v21 = 33 * v15;
          v22 = *((uint8_t *)v19 + v20) + 32;
          if ( (uint8_t)(*((uint8_t *)v19 + v20) - 65) > 0x19u )
            v22 = *((uint8_t *)v19 + v20);
          v15 = v21 ^ v22;
        }
        while ( v20 != 0 );
        v15 = v15 << 9 >> 9;
      }
      v33 = v15 & 0x7FFFFF | v33 & 0xFF800000;
    }
    else
    {
      v15 = (int)(v33 << 9) >> 9;
    }
    v16 = v15 & 0x7FFFFF | v44 & 0xFF800000;
    LOWORD(v44) = v15;
    HIBYTE(v44) = HIBYTE(v16) | 1;
    BYTE2(v44) = BYTE2(v16) & 0x7F;
    RootMovie = gameswf::Root::getRootMovie(self);
    StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v40);
    if ( StandardMemberID == -1
      || G4_VCALL<uint8_t>(RootMovie, 32, StandardMemberID, v28) == 0 )
    {
      G4_VCALL<void>(RootMovie, 48, &v40, v28);
    }
    if ( v40 == -1 && (v44 & 0x1000000) != 0 )
      gameswf::free_internal(v43);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v28);
    v2 = v25 + 1;
    if ( v34 == -1 && (v39 & 1) != 0 )
      gameswf::free_internal(v36);
    if ( v29 != -1 || (v33 & 0x1000000) == 0 )
      continue;
    gameswf::free_internal(v32);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::advance  (binary VA: 0x10d4960)
// Original: gameswf::Root::advance
// ----------------------------------------------------------------------------
int gameswf::Root::advance(gameswf::Root::Self *self, float a2, bool a3)
{
  pthread_mutex_t **GlobalMutex;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  int64_t v6; // rax
  uint64_t v7;
  uint8_t *v8;
  gameswf::Self *v9;
  pthread_mutex_t **v10;
  gameswf::SpriteInstance::Self *v12;
  int v13;
  gameswf::Self *v14;
  gameswf::SpriteInstance::Self *v15;
  float v16; // xmm1_4
  float v17; // xmm0_4
  gameswf::SpriteInstance::Self *v18;
  int v19;
  gameswf::Self *v20;
  gameswf::SpriteInstance::Self *v21;
  int64_t v22; // rax
  long double v23; // fst6
  char v25; // c2
  bool v26;
  int v27;
  gameswf::Self *v28;
  glf::Mutex::Self *v29;
  gameswf::Player::Self *v30;
  gameswf::Self *v31;
  int v32;
  gameswf::Player::Self *v33;
  gameswf::Self *v34;
  int Global;
  gameswf::Self *v36;
  float v37; // xmm0_4
  glf::Mutex::Self *v38;
  gameswf::Self *v39;
  gameswf::timer::Self *v40;
  glf::Mutex::Self *v41;
  glf::Mutex::Self *Stage;
  gameswf::Player::Self *v43;

  GlobalMutex = (pthread_mutex_t **)gameswf::getGlobalMutex();
  glf::Mutex::Lock(GlobalMutex);
  gameswf::Listener::advance((gameswf::Root::Self *)((char *)self + 260), a2);
  v4 = *((gameswf::Player::Self **)self + 79);
  if ( v4 != nullptr )
  {
    v5 = *((gameswf::Self **)self + 78);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      v26 = (*(uint16_t *)v5)-- == 1;
      if ( v26 )
        gameswf::free_internal(v5);
      *((uint32_t *)self + 78) = 0;
      *((uint32_t *)self + 79) = 0;
      v4 = nullptr;
    }
  }
  gameswf::LocalConnectionManager::update((gameswf::Root::Self *)((char *)self + 276), v4);
  gameswf::ASLoaderManager::advance(*((gameswf::ASLoaderManager::Self **)self + 77));
  *((float *)self + 57) = a2 + *((float *)self + 57);
  *((float *)self + 59) = *((float *)self + 59) - a2;
  LODWORD(v6) = gameswf::timer::getMilliseconds(v40);
  if ( *((float *)self + 57) >= *((float *)self + 58) )
  {
    gameswf::random::nextRandom(v41);
    if ( *((uint8_t *)self + 220) == 0 )
    {
      v27 = *((uint32_t *)self + 79);
      if ( v27 != 0 )
      {
        v28 = *((gameswf::Self **)self + 78);
        if ( *((uint8_t *)v28 + 2) == 0 )
        {
          v26 = (*(uint16_t *)v28)-- == 1;
          if ( v26 )
            gameswf::free_internal(v28);
          *((uint32_t *)self + 78) = 0;
          *((uint32_t *)self + 79) = 0;
          v27 = 0;
        }
      }
      gameswf::Root::setFlashVars(self, (const gameswf::String::Self *)(v27 + 164));
    }
    if ( *((float *)self + 57) >= *((float *)self + 58) )
    {
      if ( *((uint8_t *)self + 220) == 0 )
      {
        v12 = *((gameswf::SpriteInstance::Self **)self + 4);
        if ( v12 != nullptr
          && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v12 + 8))(*((uint32_t *)self + 4), 2) == 0 )
        {
          v12 = nullptr;
        }
        gameswf::SpriteInstance::doInitActions(v12);
        v13 = *((uint32_t *)self + 79);
        if ( v13 != 0 )
        {
          v14 = *((gameswf::Self **)self + 78);
          if ( *((uint8_t *)v14 + 2) == 0 )
          {
            v26 = (*(uint16_t *)v14)-- == 1;
            if ( v26 )
            {
              v43 = nullptr;
              gameswf::free_internal(v14);
            }
            *((uint32_t *)self + 78) = 0;
            *((uint32_t *)self + 79) = 0;
            v13 = 0;
          }
        }
        if ( *(uint8_t *)(v13 + 232) != 0 )
        {
          v15 = *((gameswf::SpriteInstance::Self **)self + 4);
          if ( v15 != nullptr
            && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v15 + 8))(*((uint32_t *)self + 4), 2) == 0 )
          {
            v15 = nullptr;
          }
          gameswf::SpriteInstance::invokeConstructor(v15);
        }
        else
        {
          (*(void (**)(uint32_t, gameswf::Player::Self *))(**((uint32_t **)self + 4) + 28))(*((uint32_t *)self + 4), v43);
        }
      }
      Stage = (glf::Mutex::Self *)gameswf::Root::getStage(self);
      (*(void (**)(void))(*(uint32_t *)Stage + 96))();
      if ( *((uint8_t *)self + 220) == 0 )
      {
        v29 = *((glf::Mutex::Self **)self + 4);
        *((uint8_t *)self + 220) = 1;
        Stage = v29;
        (*(void (**)(void))(*(uint32_t *)v29 + 64))();
      }
      v16 = *((float *)self + 58);
      v17 = *((float *)self + 57) - v16;
      *((float *)self + 57) = v17;
      if ( a3 && v17 >= v16 )
      {
        if ( *((uint8_t *)self + 220) == 0 )
        {
          v18 = *((gameswf::SpriteInstance::Self **)self + 4);
          if ( v18 != nullptr
            && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v18 + 8))(*((uint32_t *)self + 4), 2) == 0 )
          {
            v18 = nullptr;
          }
          gameswf::SpriteInstance::doInitActions(v18);
          v19 = *((uint32_t *)self + 79);
          if ( v19 != 0 )
          {
            v20 = *((gameswf::Self **)self + 78);
            if ( *((uint8_t *)v20 + 2) == 0 )
            {
              v26 = (*(uint16_t *)v20)-- == 1;
              if ( v26 )
                gameswf::free_internal(v20);
              *((uint32_t *)self + 78) = 0;
              *((uint32_t *)self + 79) = 0;
              v19 = 0;
            }
          }
          if ( *(uint8_t *)(v19 + 232) != 0 )
          {
            v21 = *((gameswf::SpriteInstance::Self **)self + 4);
            if ( v21 != nullptr
              && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v21 + 8))(*((uint32_t *)self + 4), 2) == 0 )
            {
              v21 = nullptr;
            }
            gameswf::SpriteInstance::invokeConstructor(v21);
          }
          else
          {
            (*(void (**)(uint32_t))(**((uint32_t **)self + 4) + 28))(*((uint32_t *)self + 4));
          }
        }
        Stage = (glf::Mutex::Self *)gameswf::Root::getStage(self);
        (*(void (**)(void))(*(uint32_t *)Stage + 96))();
        if ( *((uint8_t *)self + 220) == 0 )
        {
          v38 = *((glf::Mutex::Self **)self + 4);
          *((uint8_t *)self + 220) = 1;
          Stage = v38;
          (*(void (**)(void))(*(uint32_t *)v38 + 64))();
        }
        *((float *)self + 57) = *((float *)self + 57) - *((float *)self + 58);
      }
    }
    LODWORD(v22) = gameswf::timer::getMilliseconds(Stage);
    v7 = *((int *)self + 60) + v22;
    if ( *((float *)self + 59) > 0.0 || *((int *)self + 61) <= 0 || *((uint32_t *)self + 63) < *((uint32_t *)self + 62) )
    {
      v8 = *((uint8_t **)self + 79);
    }
    else
    {
      v30 = *((gameswf::Player::Self **)self + 79);
      if ( v30 != nullptr )
      {
        v31 = *((gameswf::Self **)self + 78);
        if ( *((uint8_t *)v31 + 2) == 0 )
        {
          v26 = (*(uint16_t *)v31)-- == 1;
          if ( v26 )
            gameswf::free_internal(v31);
          *((uint32_t *)self + 78) = 0;
          *((uint32_t *)self + 79) = 0;
          v30 = nullptr;
        }
      }
      gameswf::Player::setAsGarbage(v30);
      gameswf::Listener::alive((gameswf::Root::Self *)((char *)self + 260));
      gameswf::LocalConnectionManager::alive((gameswf::Root::Self *)((char *)self + 276));
      v32 = gameswf::Root::getStage(self);
      G4_VCALL<void>(v32, 76);
      v33 = *((gameswf::Player::Self **)self + 79);
      if ( v33 != nullptr )
      {
        v34 = *((gameswf::Self **)self + 78);
        if ( *((uint8_t *)v34 + 2) == 0 )
        {
          v26 = (*(uint16_t *)v34)-- == 1;
          if ( v26 )
            gameswf::free_internal(v34);
          *((uint32_t *)self + 78) = 0;
          *((uint32_t *)self + 79) = 0;
          v33 = nullptr;
        }
      }
      Global = gameswf::Player::getGlobal(v33);
      G4_VCALL<void>(Global, 76);
      v8 = *((uint8_t **)self + 79);
      if ( v8 != nullptr )
      {
        v36 = *((gameswf::Self **)self + 78);
        if ( *((uint8_t *)v36 + 2) == 0 )
        {
          v26 = (*(uint16_t *)v36)-- == 1;
          if ( v26 )
            gameswf::free_internal(v36);
          *((uint32_t *)self + 78) = 0;
          *((uint32_t *)self + 79) = 0;
          v8 = nullptr;
        }
      }
      if ( v8[232] != 0 )
      {
        v39 = *((gameswf::Self **)self + 78);
        if ( *((uint8_t *)v39 + 2) == 0 )
        {
          v26 = (*(uint16_t *)v39)-- == 1;
          if ( v26 )
            gameswf::free_internal(v39);
          *((uint32_t *)self + 78) = 0;
          *((uint32_t *)self + 79) = 0;
          v8 = nullptr;
        }
        gameswf::AS3Engine::alive((gameswf::AS3Engine::Self *)(v8 + 236));
        v8 = *((uint8_t **)self + 79);
      }
      v37 = (float)*((int *)self + 61) * 0.001f;
      *((uint32_t *)self + 63) = 0;
      *((float *)self + 59) = v37;
    }
    v23 = *((float *)self + 57);
    do
      v23 = __FPREM__(v23, *((float *)self + 58));
    while ( v25 != 0 );
    *((float *)self + 57) = v23;
  }
  else
  {
    v7 = v6 + *((int *)self + 60);
    v8 = *((uint8_t **)self + 79);
  }
  if ( v8 != nullptr )
  {
    v9 = *((gameswf::Self **)self + 78);
    if ( *((uint8_t *)v9 + 2) == 0 )
    {
      v26 = (*(uint16_t *)v9)-- == 1;
      if ( v26 )
        gameswf::free_internal(v9);
      *((uint32_t *)self + 78) = 0;
      *((uint32_t *)self + 79) = 0;
      v8 = nullptr;
    }
  }
  gameswf::Player::clearGarbage((gameswf::Player::Self *)v8, v7);
  v10 = (pthread_mutex_t **)gameswf::getGlobalMutex();
  return glf::Mutex::Unlock(v10);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Root::display  (binary VA: 0x10d50b0)
// Original: gameswf::Root::display
// ----------------------------------------------------------------------------
uint32_t * gameswf::Root::display(gameswf::Root::Self *self)
{
  uint32_t *result;
  int Stage;

  result = *((uint32_t **)self + 4);
  if ( *((uint8_t *)result + 148) != 0 )
  {
    if ( *((uint8_t *)self + 220) == 0 )
      gameswf::Root::advance(self, 1.0, false);
    gameswf::Root::beginDisplay((gameswf::Self **)self);
    Stage = gameswf::Root::getStage(self);
    if ( Stage != 0 )
      G4_VCALL<void>(Stage, 284);
    return gameswf::Root::endDisplay();
  }
  return result;
}


