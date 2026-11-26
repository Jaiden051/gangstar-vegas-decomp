#include "Core/Utils/DecompTypes.h"
#include "gameswf_TesselatorAccepter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::TesselatorAccepter::callbackCombine  (binary VA: 0x10f5170)
// Original: gameswf::TesselatorAccepter::callbackCombine
// ----------------------------------------------------------------------------
uint64_t * gameswf::TesselatorAccepter::callbackCombine(gameswf::TesselatorAccepter::Self *self, double *a2, void **a3, float *a4)
{
  int v4;
  uint64_t *result;

  v4 = dword_21155C0 + 1;
  result = (uint64_t *)((char *)&unk_20E55C0 + 24 * dword_21155C0);
  result[1] = 0;
  result[2] = 0;
  dword_21155C0 = v4;
  *result = 0;
  *result = *(uint64_t *)self;
  result[1] = *((uint64_t *)self + 1);
  result[2] = *((uint64_t *)self + 2);
  *(uint32_t *)a4 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TesselatorAccepter::callbackError  (binary VA: 0x10f51d0)
// Original: gameswf::TesselatorAccepter::callbackError
// ----------------------------------------------------------------------------
void gameswf::TesselatorAccepter::callbackError()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TesselatorAccepter::callbackVertex  (binary VA: 0x10f51e0)
// Original: gameswf::TesselatorAccepter::callbackVertex
// ----------------------------------------------------------------------------
float * gameswf::TesselatorAccepter::callbackVertex(gameswf::TesselatorAccepter::Self *self, const void *a2)
{
  double v2; // xmm1_8
  int v3;
  double v4; // xmm2_8
  int v5;
  int v6;
  char *v7;
  float *result;
  float v9; // xmm2_4
  float v10; // xmm0_4
  int v11;

  v2 = *((double *)self + 1);
  v3 = *((uint32_t *)a2 + 2);
  v4 = *(double *)self;
  v5 = *((uint32_t *)a2 + 3);
  v6 = v3 + 1;
  if ( v3 + 1 <= v5 || *((uint32_t *)a2 + 4) != 0 )
  {
    v7 = *((char **)a2 + 1);
  }
  else
  {
    v11 = v6 + (v6 >> 1);
    *((uint32_t *)a2 + 3) = v11;
    if ( v11 != 0 )
    {
      if ( *((uint32_t *)a2 + 1) != 0 )
        v7 = (char *)gameswf::realloc_internal(*((gameswf::Self **)a2 + 1), 8 * v11, 8 * v5);
      else
        v7 = (char *)gameswf::malloc_internal(8 * v11);
      *((uint32_t *)a2 + 1) = (uint32_t)(uintptr_t)(v7);
      v3 = *((uint32_t *)a2 + 2);
    }
    else
    {
      if ( *((uint32_t *)a2 + 1) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)a2 + 1));
        v3 = *((uint32_t *)a2 + 2);
      }
      *((uint32_t *)a2 + 1) = 0;
      v7 = nullptr;
    }
  }
  result = (float *)&v7[8 * v3];
  if ( result != nullptr )
  {
    v9 = v4 * 0.05;
    v10 = 0.05 * v2;
    *result = v9;
    result[1] = v10;
  }
  *((uint32_t *)a2 + 2) = v6;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TesselatorAccepter::getEdgeOffset  (binary VA: 0x10f5330)
// Original: gameswf::TesselatorAccepter::getEdgeOffset
// ----------------------------------------------------------------------------
gameswf::TesselatorAccepter::Self * gameswf::TesselatorAccepter::getEdgeOffset(gameswf::TesselatorAccepter::Self *self, int a2, bool *a3, uint8_t *a4)
{
  int v4;
  float *v5;
  float *v6;
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  long double v11; // fst7
  float v12; // xmm2_4
  float v13; // xmm4_4
  double v14; // xmm4_8
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  uint8_t *v20;
  bool v21;
  float v22; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm5_4
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef double _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float *_g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41[9];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v27)) > _g4_s1 ? (16u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v28)) > _g4_s2 ? (32u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v29)) > _g4_s3 ? (48u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v30)) > _g4_s4 ? (84u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v31)) > _g4_s5 ? (88u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v32)) > _g4_s6 ? (96u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v33)) > _g4_s7 ? (100u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v34)) > _g4_s8 ? (104u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v35)) > _g4_s9 ? (112u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (116u + sizeof(_g4_t_v36)) > _g4_s10 ? (116u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v37)) > _g4_s11 ? (120u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v38)) > _g4_s12 ? (124u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v39)) > _g4_s13 ? (128u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (132u + sizeof(_g4_t_v40)) > _g4_s14 ? (132u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v41)) > _g4_s15 ? (136u + sizeof(_g4_t_v41)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 100u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 104u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 132u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 136u);

  v4 = *(uint32_t *)(a2 + 24);
  v33 = (float *)(*(uint32_t *)(a2 + 20) + 8 * ((int)(uintptr_t)(a3) % v4));
  v5 = (float *)(*(uint32_t *)(a2 + 20) + 8 * ((int)(uintptr_t)(&a3[v4 - 1]) % v4));
  v6 = (float *)(*(uint32_t *)(a2 + 20) + 8 * ((int)(uintptr_t)(a3 + 1) % v4));
  v7 = *v33 - *v5;
  v8 = v33[1] - v5[1];
  v37 = 0.0;
  v35 = v7;
  v36 = v8;
  v9 = *v6 - *v33;
  v10 = v6[1] - v33[1];
  v40 = 0.0;
  v38 = v9;
  v39 = v10;
  gameswf::vector3df::normalize((gameswf::vector3df::Self *)&v35);
  gameswf::vector3df::normalize((gameswf::vector3df::Self *)&v38);
  v34 = v37;
  v32 = v40;
  v28 = (float)(v39 + v36) * 0.5;
  v27 = (float)(v38 + v35) * 0.5;
  v26 = v36;
  v29 = v35;
  v11 = atan2(v36, v35);
  v12 = v26;
  if ( *(uint8_t *)(a2 + 55) != 0 )
  {
    v13 = (double)v11 - 1.5707963267948966;
    v30 = v13;
    v31 = atan2(v28, v27);
    v14 = -1.5707963267948966;
    v15 = v29;
    v12 = v26;
    v16 = v28;
    v17 = v27;
  }
  else
  {
    v25 = (double)v11 + 1.5707963267948966;
    v30 = v25;
    v31 = atan2(v28, v27);
    v14 = 1.5707963267948966;
    v17 = v27;
    v16 = v28;
    v15 = v29;
  }
  v18 = v14 + v31;
  if ( (float)((float)((float)(v12 * v12) + (float)(v15 * v15)) + (float)(v34 * v34)) > 0.0
    && (float)((float)((float)(v16 * v16) + (float)(v17 * v17))
             + (float)((float)((float)(v32 + v34) * 0.5) * (float)((float)(v32 + v34) * 0.5))) > 0.0005f )
  {
    v19 = cos(fabs(v18 - v30));
  }
  else
  {
    v19 = 1.0;
  }
  v20 = a4;
  v21 = true;
  v22 = (float)(-1.8f * *(float *)(a2 + 56)) / v19;
  if ( (float)(int)__builtin_abs((int)v17) != 0.5 )
  {
    v20 = a4;
    v21 = (float)(int)__builtin_abs((int)v16) == 0.5;
  }
  *v20 = v21 & *a4;
  memset(v41, 0, 0x18u);
  v41[0] = 1.0;
  v41[4] = 1.0;
  gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v41, 0x3F800000u, 0x3F800000u, v18);
  v24 = (float)(v41[2] + *v33) + (float)(v22 * v41[0]);
  *((float *)self + 1) = (float)(v41[5] + v33[1]) + (float)(v41[3] * v22);
  *(float *)self = v24;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TesselatorAccepter::callbackBegin  (binary VA: 0x10f7130)
// Original: gameswf::TesselatorAccepter::callbackBegin
// ----------------------------------------------------------------------------
int gameswf::TesselatorAccepter::callbackBegin(gameswf::TesselatorAccepter::Self *self, uint32_t *a2)
{
  *a2 = (uint32_t)(uintptr_t)(self);
  return gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(a2 + 1), 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::TesselatorAccepter::Destroy  (binary VA: 0x10f7170)
// Original: gameswf::TesselatorAccepter::~TesselatorAccepter
// ----------------------------------------------------------------------------
void gameswf::TesselatorAccepter::Destroy(GLUtesselator **self)
{
  int v1;
  int v2;
  uint16_t *v3;
  int v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;

  gluDeleteTess(*(self + 15));
  v1 = (int)(uintptr_t)(*(self + 10));
  if ( v1 < 0 )
  {
    v2 = 2 * v1;
    do
    {
      v3 = (uint16_t *)((char *)*(self + 9) + v2);
      if ( v3 != nullptr )
        *v3 = 0;
      v2 += 2;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = (int)(uintptr_t)(*(self + 12));
  *(self + 10) = nullptr;
  if ( v4 == 0 )
  {
    v5 = (gameswf::Self *)(*(self + 9));
    *(self + 11) = nullptr;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *(self + 9) = nullptr;
  }
  gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(self + 5), 0);
  if ( *(self + 8) == nullptr )
  {
    v6 = (gameswf::Self *)(*(self + 5));
    *(self + 7) = nullptr;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    *(self + 5) = nullptr;
  }
  gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(self + 1), 0);
  if ( *(self + 4) == nullptr )
  {
    v7 = (gameswf::Self *)(*(self + 1));
    *(self + 3) = nullptr;
    if ( v7 != nullptr )
      gameswf::free_internal(v7);
    *(self + 1) = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::TesselatorAccepter::callbackEndTris  (binary VA: 0x10f7280)
// Original: gameswf::TesselatorAccepter::callbackEndTris
// ----------------------------------------------------------------------------
void gameswf::TesselatorAccepter::callbackEndTris(gameswf::TesselatorAccepter::Self *self)
{
  gameswf::TesselatorAccepter::Self *v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char *v23;
  char *v24;
  bool v25; // cc
  int v26;
  int v27;
  int v28;
  gameswf::Self *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  gameswf::Self *v38;
  int v39;
  uint16_t *v40;
  int v41;
  uint16_t *v42;
  int v43;
  uint16_t *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  gameswf::Self *v55;
  int v56;
  uint16_t *v57;
  gameswf::Self *v58;
  int v59;
  uint16_t *v60;
  int v61;
  uint16_t *v62;
  int v63;
  int v64;
  int v65;
  gameswf::Self *v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  gameswf::Self *v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  gameswf::Self *v88;
  gameswf::Self *v89;
  gameswf::Self *v90;
  gameswf::Self *v91;
  gameswf::Self *v92;
  gameswf::Self *v93;
  gameswf::Self *v94;
  gameswf::Self *v95;
  int16_t v96;
  int v97;
  int16_t v98;

  v1 = self;
  v2 = *((uint32_t *)self + 6);
  v96 = v2;
  switch ( *(uint32_t *)self )
  {
    case 2:
      v3 = *((uint32_t *)self + 2);
      v4 = *((gameswf::Self **)self + 1);
      v88 = (gameswf::Self *)v3;
      if ( v3 > 0 )
      {
        gameswf::array_gameswf_Point_c7983d::resize((gameswf::TesselatorAccepter::Self *)((char *)self + 20), v2 + v3);
        v5 = 8 * v2;
        v6 = nullptr;
        v94 = v4;
        do
        {
          v7 = *((uint32_t *)self + 5);
          v8 = *((uint32_t *)v94 + 2 * (uint32_t)(uintptr_t)(v6));
          v9 = *((uint32_t *)v94 + 2 * (uint32_t)(uintptr_t)(v6) + 1);
          v6 = (gameswf::Self *)((char *)v6 + 1);
          *(uint32_t *)(v7 + v5) = v8;
          *(uint32_t *)(v7 + v5 + 4) = v9;
          v5 += 8;
        }
        while ( v6 != v88 );
        v1 = self;
        v4 = *((gameswf::Self **)self + 1);
        v2 = *((uint32_t *)self + 6);
      }
      v10 = v2 + 1;
      v11 = *((uint32_t *)v1 + 7);
      if ( v2 + 1 <= v11 || *((uint32_t *)v1 + 8) != 0 )
      {
        v12 = *((char **)v1 + 5);
      }
      else
      {
        v79 = v10 + (v10 >> 1);
        *((uint32_t *)v1 + 7) = v79;
        if ( v79 != 0 )
        {
          v87 = v2 + 1;
          if ( *((uint32_t *)v1 + 5) != 0 )
            v12 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v1 + 5), 8 * v79, 8 * v11);
          else
            v12 = (char *)gameswf::malloc_internal(8 * v79);
          *((uint32_t *)v1 + 5) = (uint32_t)(uintptr_t)(v12);
          v2 = *((uint32_t *)v1 + 6);
          v10 = v87;
        }
        else
        {
          v80 = *((gameswf::Self **)v1 + 5);
          if ( v80 != nullptr )
          {
            v86 = v2 + 1;
            gameswf::free_internal(v80);
            v2 = *((uint32_t *)v1 + 6);
            v10 = v86;
          }
          *((uint32_t *)v1 + 5) = 0;
          v12 = nullptr;
        }
      }
      v13 = &v12[8 * v2];
      if ( v13 != nullptr )
      {
        v14 = *((uint32_t *)v4 + 1);
        *(uint32_t *)v13 = *(uint32_t *)v4;
        *((uint32_t *)v13 + 1) = v14;
      }
      *((uint32_t *)v1 + 6) = v10;
      break;
    case 3:
      v67 = *((uint32_t *)self + 2);
      v68 = *((uint32_t *)self + 1);
      if ( v67 > 0 )
      {
        v85 = *((uint32_t *)self + 2);
        gameswf::array_gameswf_Point_c7983d::resize((gameswf::TesselatorAccepter::Self *)((char *)self + 20), v2 + v67);
        v69 = 0;
        v70 = 8 * v2;
        do
        {
          v71 = *(uint32_t *)(v68 + 8 * v69 + 4);
          v72 = *((uint32_t *)self + 5);
          v73 = *(uint32_t *)(v68 + 8 * v69++);
          *(uint32_t *)(v72 + v70) = v73;
          *(uint32_t *)(v72 + v70 + 4) = v71;
          v70 += 8;
        }
        while ( v69 != v85 );
      }
      break;
    case 4:
      v15 = *((uint32_t *)self + 2);
      v89 = *((gameswf::Self **)self + 1);
      if ( v15 > 0 )
      {
        v82 = *((uint32_t *)self + 2);
        gameswf::array_gameswf_Point_c7983d::resize((gameswf::TesselatorAccepter::Self *)((char *)self + 20), v2 + v15);
        v16 = 8 * v2;
        v17 = 0;
        do
        {
          v18 = *((uint32_t *)v89 + 2 * v17 + 1);
          v19 = *((uint32_t *)self + 5);
          v20 = *((uint32_t *)v89 + 2 * v17++);
          *(uint32_t *)(v19 + v16) = v20;
          *(uint32_t *)(v19 + v16 + 4) = v18;
          v16 += 8;
        }
        while ( v17 != v82 );
        if ( *((int *)self + 2) > 0 )
        {
          v21 = *((uint32_t *)self + 10);
          v22 = 0;
          while ( 1 )
          {
            v26 = v21 + 1;
            v27 = *((uint32_t *)self + 11);
            if ( v21 + 1 <= v27 || *((uint32_t *)self + 12) != 0 )
            {
              v23 = *((char **)self + 9);
            }
            else
            {
              v28 = v26 + (v26 >> 1);
              *((uint32_t *)self + 11) = v28;
              if ( v28 != 0 )
              {
                v23 = *((uint32_t *)self + 9) != 0
                    ? (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 9), 2 * v28, 2 * v27)
                    : (char *)gameswf::malloc_internal(2 * v28);
                *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v23);
                v21 = *((uint32_t *)self + 10);
              }
              else
              {
                v29 = *((gameswf::Self **)self + 9);
                if ( v29 != nullptr )
                {
                  gameswf::free_internal(v29);
                  v21 = *((uint32_t *)self + 10);
                }
                *((uint32_t *)self + 9) = 0;
                v23 = nullptr;
              }
            }
            v24 = &v23[2 * v21];
            if ( v24 != nullptr )
              *(uint16_t *)v24 = v22 + v96;
            v25 = *((uint32_t *)self + 2) <= ++v22;
            *((uint32_t *)self + 10) = v26;
            if ( v25 )
              break;
            v21 = v26;
          }
        }
      }
      break;
    case 5:
      v30 = *((uint32_t *)self + 2);
      v90 = *((gameswf::Self **)self + 1);
      if ( v30 > 0 )
      {
        v83 = *((uint32_t *)self + 2);
        gameswf::array_gameswf_Point_c7983d::resize((gameswf::TesselatorAccepter::Self *)((char *)self + 20), v2 + v30);
        v31 = 8 * v2;
        v32 = 0;
        do
        {
          v33 = *((uint32_t *)v90 + 2 * v32 + 1);
          v34 = *((uint32_t *)self + 5);
          v35 = *((uint32_t *)v90 + 2 * v32++);
          *(uint32_t *)(v34 + v31) = v35;
          *(uint32_t *)(v34 + v31 + 4) = v33;
          v31 += 8;
        }
        while ( v32 != v83 );
        if ( *((int *)self + 2) > 2 )
        {
          v36 = 0;
          v37 = *((uint32_t *)self + 10);
          do
          {
            v46 = *((uint32_t *)self + 11);
            v81 = v37 + 1;
            if ( v37 + 1 <= v46 || *((uint32_t *)self + 12) != 0 )
            {
              v38 = *((gameswf::Self **)self + 9);
              v39 = v37;
            }
            else
            {
              v47 = (v81 >> 1) + v81;
              *((uint32_t *)self + 11) = v47;
              if ( v47 != 0 )
              {
                if ( *((uint32_t *)self + 9) != 0 )
                  v38 = (gameswf::Self *)gameswf::realloc_internal(*((gameswf::Self **)self + 9), 2 * v47, 2 * v46);
                else
                  v38 = (gameswf::Self *)gameswf::malloc_internal(2 * v47);
                *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v38);
                v39 = *((uint32_t *)self + 10);
              }
              else
              {
                v39 = v37;
                if ( *((uint32_t *)self + 9) != 0 )
                {
                  gameswf::free_internal(*((gameswf::Self **)self + 9));
                  v39 = *((uint32_t *)self + 10);
                }
                *((uint32_t *)self + 9) = 0;
                v38 = nullptr;
              }
            }
            v40 = (uint16_t *)((char *)v38 + 2 * v39);
            if ( v40 != nullptr )
            {
              *v40 = v36 + v96;
              v38 = *((gameswf::Self **)self + 9);
            }
            v41 = v37 + 2;
            *((uint32_t *)self + 10) = v81;
            v91 = *((gameswf::Self **)self + 11);
            if ( v37 + 2 > (int)(uintptr_t)(v91) && *((uint32_t *)self + 12) == 0 )
            {
              v76 = v41 + (v41 >> 1);
              *((uint32_t *)self + 11) = v76;
              if ( v76 != 0 )
              {
                if ( v38 != nullptr )
                  v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 2 * v76, 2 * (uint32_t)(uintptr_t)(v91));
                else
                  v38 = (gameswf::Self *)gameswf::malloc_internal(2 * v76);
                v78 = *((uint32_t *)self + 10);
                *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v38);
                v81 = v78;
                v41 = v37 + 2;
              }
              else
              {
                if ( v38 != nullptr )
                {
                  gameswf::free_internal(v38);
                  v41 = v37 + 2;
                  v81 = *((uint32_t *)self + 10);
                }
                *((uint32_t *)self + 9) = 0;
                v38 = nullptr;
              }
            }
            v42 = (uint16_t *)((char *)v38 + 2 * v81);
            if ( v42 != nullptr )
            {
              *v42 = v36 + v96 + 1;
              v38 = *((gameswf::Self **)self + 9);
            }
            v43 = *((uint32_t *)self + 11);
            v37 += 3;
            *((uint32_t *)self + 10) = v41;
            v97 = v43;
            if ( v37 > v43 && *((uint32_t *)self + 12) == 0 )
            {
              v77 = v37 + (v37 >> 1);
              *((uint32_t *)self + 11) = v77;
              if ( v77 != 0 )
              {
                if ( v38 != nullptr )
                  v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 2 * v77, 2 * v97);
                else
                  v38 = (gameswf::Self *)gameswf::malloc_internal(2 * v77);
                *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v38);
                v41 = *((uint32_t *)self + 10);
              }
              else
              {
                if ( v38 != nullptr )
                {
                  gameswf::free_internal(v38);
                  v41 = *((uint32_t *)self + 10);
                }
                *((uint32_t *)self + 9) = 0;
                v38 = nullptr;
              }
            }
            v44 = (uint16_t *)((char *)v38 + 2 * v41);
            if ( v44 != nullptr )
              *v44 = v36 + v96 + 2;
            v45 = v36 + 3;
            ++v36;
            v25 = *((uint32_t *)self + 2) <= v45;
            *((uint32_t *)self + 10) = v37;
          }
          while ( !v25 );
        }
      }
      break;
    case 6:
      v48 = *((uint32_t *)self + 2);
      v92 = *((gameswf::Self **)self + 1);
      if ( v48 > 0 )
      {
        v84 = *((uint32_t *)self + 2);
        gameswf::array_gameswf_Point_c7983d::resize((gameswf::TesselatorAccepter::Self *)((char *)self + 20), v2 + v48);
        v49 = 8 * v2;
        v50 = 0;
        do
        {
          v51 = *((uint32_t *)v92 + 2 * v50 + 1);
          v52 = *((uint32_t *)self + 5);
          v53 = *((uint32_t *)v92 + 2 * v50++);
          *(uint32_t *)(v52 + v49) = v53;
          *(uint32_t *)(v52 + v49 + 4) = v51;
          v49 += 8;
        }
        while ( v50 != v84 );
        if ( *((int *)self + 2) > 2 )
        {
          v54 = *((uint32_t *)self + 10);
          v93 = (gameswf::Self *)(&dword_0 + 2);
          v98 = v96 + 2;
          do
          {
            v63 = v54 + 1;
            v64 = *((uint32_t *)self + 11);
            if ( v64 >= v54 + 1 || *((uint32_t *)self + 12) != 0 )
            {
              v55 = *((gameswf::Self **)self + 9);
              v56 = v54;
            }
            else
            {
              v65 = (v63 >> 1) + v63;
              *((uint32_t *)self + 11) = v65;
              if ( v65 != 0 )
              {
                if ( *((uint32_t *)self + 9) != 0 )
                  v55 = (gameswf::Self *)gameswf::realloc_internal(*((gameswf::Self **)self + 9), 2 * v65, 2 * v64);
                else
                  v55 = (gameswf::Self *)gameswf::malloc_internal(2 * v65);
                *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v55);
                v56 = *((uint32_t *)self + 10);
                v63 = v54 + 1;
              }
              else
              {
                v66 = *((gameswf::Self **)self + 9);
                v56 = v54;
                if ( v66 != nullptr )
                {
                  gameswf::free_internal(v66);
                  v56 = *((uint32_t *)self + 10);
                  v63 = v54 + 1;
                }
                *((uint32_t *)self + 9) = 0;
                v55 = nullptr;
              }
            }
            v57 = (uint16_t *)((char *)v55 + 2 * v56);
            if ( v57 != nullptr )
            {
              *v57 = v96;
              v55 = *((gameswf::Self **)self + 9);
            }
            v58 = *((gameswf::Self **)self + 11);
            v59 = v54 + 2;
            *((uint32_t *)self + 10) = v63;
            v95 = v58;
            if ( v54 + 2 > (int)(uintptr_t)(v58) && *((uint32_t *)self + 12) == 0 )
            {
              v75 = v59 + (v59 >> 1);
              *((uint32_t *)self + 11) = v75;
              if ( v75 != 0 )
              {
                if ( v55 != nullptr )
                  v55 = (gameswf::Self *)gameswf::realloc_internal(v55, 2 * v75, 2 * (uint32_t)(uintptr_t)(v95));
                else
                  v55 = (gameswf::Self *)gameswf::malloc_internal(2 * v75);
                *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v55);
                v63 = *((uint32_t *)self + 10);
              }
              else
              {
                if ( v55 != nullptr )
                {
                  gameswf::free_internal(v55);
                  v63 = *((uint32_t *)self + 10);
                }
                *((uint32_t *)self + 9) = 0;
                v55 = nullptr;
              }
            }
            v60 = (uint16_t *)((char *)v55 + 2 * v63);
            if ( v60 != nullptr )
            {
              *v60 = v98 - 1;
              v55 = *((gameswf::Self **)self + 9);
            }
            v54 += 3;
            v61 = *((uint32_t *)self + 11);
            *((uint32_t *)self + 10) = v59;
            if ( v54 > v61 && *((uint32_t *)self + 12) == 0 )
            {
              v74 = v54 + (v54 >> 1);
              *((uint32_t *)self + 11) = v74;
              if ( v74 != 0 )
              {
                if ( v55 != nullptr )
                  v55 = (gameswf::Self *)gameswf::realloc_internal(v55, 2 * v74, 2 * v61);
                else
                  v55 = (gameswf::Self *)gameswf::malloc_internal(2 * v74);
                *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v55);
                v59 = *((uint32_t *)self + 10);
              }
              else
              {
                if ( v55 != nullptr )
                {
                  gameswf::free_internal(v55);
                  v59 = *((uint32_t *)self + 10);
                }
                *((uint32_t *)self + 9) = 0;
                v55 = nullptr;
              }
            }
            v62 = (uint16_t *)((char *)v55 + 2 * v59);
            if ( v62 != nullptr )
              *v62 = v98;
            v93 = (gameswf::Self *)((char *)v93 + 1);
            ++v98;
            v25 = *((uint32_t *)self + 2) <= (int)(uintptr_t)(v93);
            *((uint32_t *)self + 10) = v54;
          }
          while ( !v25 );
        }
      }
      break;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::TesselatorAccepter::callbackEndStrip  (binary VA: 0x10f81e0)
// Original: gameswf::TesselatorAccepter::callbackEndStrip
// ----------------------------------------------------------------------------
void gameswf::TesselatorAccepter::callbackEndStrip(gameswf::TesselatorAccepter::Self *self)
{
  int v1;
  gameswf::Self *v2;
  int v3;
  int *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  char *v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  gameswf::Self *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  char *v24;
  char *v25;
  int v26;
  gameswf::Self *v27;
  int v28;
  gameswf::Self *i;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  bool v40; // cc
  int *v41;
  int v42;
  int v43;
  uint32_t *v44;
  int v45;
  int v46;
  uint32_t *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  char *v60;
  char *v61;
  int v62;
  int v63;
  int v64;
  int v65;
  gameswf::Self *v66;
  int v67;
  int v68;
  int v69;
  int *v70;
  uint32_t *v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  uint32_t *v79;
  int v80;
  gameswf::Self *v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  uint32_t *v87;
  int v88;
  int v89;
  int v90;
  uint32_t *v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  char *v101;
  gameswf::Self *v102;
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
  gameswf::Self *v121;
  gameswf::Self *v122;
  gameswf::Self *v123;
  gameswf::Self *v124;
  gameswf::Self *v125;
  gameswf::Self *v126;
  int v127;
  gameswf::Self *v128;
  int v129;
  int v130;
  int v131;
  uint32_t *v132;
  int v133;
  int v134;
  int v135;
  gameswf::Self *v136;
  int v137;
  uint32_t *v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  gameswf::Self *v144;
  gameswf::Self *v145;
  int v146;

  if ( *((uint32_t *)self + 2) != 0 )
  {
    v1 = *((uint32_t *)self + 6);
    if ( v1 > 0 )
    {
      v2 = *((gameswf::Self **)self + 5);
      v3 = v1 + 1;
      v4 = (int *)((char *)v2 + 8 * v1 - 8);
      v5 = *v4;
      v129 = *((uint32_t *)self + 7);
      v121 = (gameswf::Self *)v4[1];
      if ( v1 + 1 > v129 && *((uint32_t *)self + 8) == 0 )
      {
        v92 = v3 + (v3 >> 1);
        *((uint32_t *)self + 7) = v92;
        if ( v92 != 0 )
        {
          if ( v2 != nullptr )
            v2 = (gameswf::Self *)gameswf::realloc_internal(v2, 8 * v92, 8 * v129);
          else
            v2 = (gameswf::Self *)gameswf::malloc_internal(8 * v92);
          *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v2);
          v1 = *((uint32_t *)self + 6);
        }
        else
        {
          if ( v2 != nullptr )
          {
            gameswf::free_internal(v2);
            v1 = *((uint32_t *)self + 6);
          }
          *((uint32_t *)self + 5) = 0;
          v2 = nullptr;
        }
      }
      v6 = (uint32_t *)((char *)v2 + 8 * v1);
      if ( v6 != nullptr )
      {
        *v6 = v5;
        v6[1] = (uint32_t)(uintptr_t)(v121);
      }
      *((uint32_t *)self + 6) = v3;
      v1 = v3;
    }
    v7 = *(uint32_t *)self;
    if ( *(uint32_t *)self == 5 )
    {
      if ( v1 > 0 )
      {
        v8 = v1 + 1;
        v9 = *((uint32_t *)self + 7);
        v10 = *((int **)self + 1);
        if ( v1 + 1 <= v9 || *((uint32_t *)self + 8) != 0 )
        {
          v11 = *((char **)self + 5);
        }
        else
        {
          v96 = v8 + (v8 >> 1);
          *((uint32_t *)self + 7) = v96;
          if ( v96 != 0 )
          {
            if ( *((uint32_t *)self + 5) != 0 )
              v11 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 5), 8 * v96, 8 * v9);
            else
              v11 = (char *)gameswf::malloc_internal(8 * v96);
            *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v11);
            v1 = *((uint32_t *)self + 6);
          }
          else
          {
            if ( *((uint32_t *)self + 5) != 0 )
            {
              gameswf::free_internal(*((gameswf::Self **)self + 5));
              v1 = *((uint32_t *)self + 6);
            }
            *((uint32_t *)self + 5) = 0;
            v11 = nullptr;
          }
        }
        v12 = &v11[8 * v1];
        if ( v12 != nullptr )
        {
          v13 = *v10;
          *((uint32_t *)v12 + 1) = v10[1];
          *(uint32_t *)v12 = v13;
        }
        *((uint32_t *)self + 6) = v8;
        v1 = v8;
      }
      v14 = *((uint32_t *)self + 2);
      v15 = *((uint32_t *)self + 1);
      if ( v14 > 0 )
      {
        v104 = v1;
        gameswf::array_gameswf_Point_c7983d::resize((gameswf::TesselatorAccepter::Self *)((char *)self + 20), v14 + v1);
        v16 = nullptr;
        v17 = 8 * v104;
        v122 = (gameswf::Self *)v14;
        v130 = v15;
        do
        {
          v18 = *((uint32_t *)self + 5);
          v19 = *(uint32_t *)(v130 + 8 * (uint32_t)(uintptr_t)(v16));
          v20 = *(uint32_t *)(v130 + 8 * (uint32_t)(uintptr_t)(v16) + 4);
          v16 = (gameswf::Self *)((char *)v16 + 1);
          *(uint32_t *)(v18 + v17) = v19;
          *(uint32_t *)(v18 + v17 + 4) = v20;
          v17 += 8;
        }
        while ( v16 != v122 );
      }
    }
    else if ( v7 == 6 )
    {
      if ( v1 > 0 )
      {
        v57 = v1 + 1;
        v58 = *((uint32_t *)self + 7);
        v59 = *((uint32_t *)self + 1);
        if ( v1 + 1 <= v58 || *((uint32_t *)self + 8) != 0 )
        {
          v60 = *((char **)self + 5);
        }
        else
        {
          v97 = v57 + (v57 >> 1);
          *((uint32_t *)self + 7) = v97;
          if ( v97 != 0 )
          {
            if ( *((uint32_t *)self + 5) != 0 )
              v60 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 5), 8 * v97, 8 * v58);
            else
              v60 = (char *)gameswf::malloc_internal(8 * v97);
            *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v60);
            v1 = *((uint32_t *)self + 6);
          }
          else
          {
            if ( *((uint32_t *)self + 5) != 0 )
            {
              gameswf::free_internal(*((gameswf::Self **)self + 5));
              v1 = *((uint32_t *)self + 6);
            }
            *((uint32_t *)self + 5) = 0;
            v60 = nullptr;
          }
        }
        v61 = &v60[8 * v1];
        if ( v61 != nullptr )
        {
          v62 = *(uint32_t *)(v59 + 8);
          *((uint32_t *)v61 + 1) = *(uint32_t *)(v59 + 12);
          *(uint32_t *)v61 = v62;
        }
        *((uint32_t *)self + 6) = v57;
        v1 = v57;
      }
      if ( *((int *)self + 2) > 3 )
      {
        v63 = v1 + 1;
        v64 = *((uint32_t *)self + 7);
        v65 = *((uint32_t *)self + 1);
        if ( v1 + 1 <= v64 || *((uint32_t *)self + 8) != 0 )
        {
          v66 = *((gameswf::Self **)self + 5);
          v67 = v1;
        }
        else
        {
          v140 = v63 + (v63 >> 1);
          *((uint32_t *)self + 7) = v140;
          v128 = *((gameswf::Self **)self + 5);
          if ( v140 != 0 )
          {
            v119 = v1;
            if ( *((uint32_t *)self + 5) != 0 )
              v66 = (gameswf::Self *)gameswf::realloc_internal(v128, 8 * v140, 8 * v64);
            else
              v66 = (gameswf::Self *)gameswf::malloc_internal(8 * v140);
            *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v66);
            v67 = *((uint32_t *)self + 6);
            v1 = v119;
          }
          else
          {
            v67 = v1;
            if ( v128 != nullptr )
            {
              v116 = v1;
              gameswf::free_internal(v128);
              v67 = *((uint32_t *)self + 6);
              v1 = v116;
            }
            *((uint32_t *)self + 5) = 0;
            v66 = nullptr;
          }
        }
        v124 = (gameswf::Self *)((char *)v66 + 8 * v67);
        if ( v124 != nullptr )
        {
          v68 = *(uint32_t *)(v65 + 12);
          *(uint32_t *)v124 = *(uint32_t *)(v65 + 8);
          *((uint32_t *)v124 + 1) = v68;
          v66 = *((gameswf::Self **)self + 5);
        }
        v125 = (gameswf::Self *)(v1 + 2);
        v69 = *((uint32_t *)self + 7);
        *((uint32_t *)self + 6) = v63;
        v70 = *((int **)self + 1);
        v135 = v69;
        if ( v1 + 2 > v69 && *((uint32_t *)self + 8) == 0 )
        {
          v101 = (char *)v125 + ((int)(uintptr_t)(v125) >> 1);
          *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v101);
          if ( v101 != nullptr )
          {
            v120 = v1;
            if ( v66 != nullptr )
              v66 = (gameswf::Self *)gameswf::realloc_internal(v66, 8 * (uint32_t)(uintptr_t)(v101), 8 * v135);
            else
              v66 = (gameswf::Self *)gameswf::malloc_internal(8 * (uint32_t)(uintptr_t)(v101));
            *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v66);
            v63 = *((uint32_t *)self + 6);
            v1 = v120;
          }
          else
          {
            if ( v66 != nullptr )
            {
              v115 = v1;
              gameswf::free_internal(v66);
              v63 = *((uint32_t *)self + 6);
              v1 = v115;
            }
            *((uint32_t *)self + 5) = 0;
            v66 = nullptr;
          }
        }
        v71 = (uint32_t *)((char *)v66 + 8 * v63);
        if ( v71 != nullptr )
        {
          v72 = *v70;
          v71[1] = v70[1];
          *v71 = v72;
          v66 = *((gameswf::Self **)self + 5);
        }
        v142 = *((uint32_t *)self + 7);
        v73 = v1 + 3;
        *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v125);
        v136 = v125;
        v74 = *((uint32_t *)self + 1);
        if ( v1 + 3 > v142 && *((uint32_t *)self + 8) == 0 )
        {
          v100 = v73 + (v73 >> 1);
          *((uint32_t *)self + 7) = v100;
          if ( v100 != 0 )
          {
            v117 = v1;
            if ( v66 != nullptr )
              v66 = (gameswf::Self *)gameswf::realloc_internal(v66, 8 * v100, 8 * v142);
            else
              v66 = (gameswf::Self *)gameswf::malloc_internal(8 * v100);
            v102 = *((gameswf::Self **)self + 6);
            *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v66);
            v136 = v102;
            v1 = v117;
          }
          else
          {
            if ( v66 != nullptr )
            {
              v114 = v1;
              gameswf::free_internal(v66);
              v1 = v114;
              v136 = *((gameswf::Self **)self + 6);
            }
            *((uint32_t *)self + 5) = 0;
            v66 = nullptr;
          }
        }
        v126 = (gameswf::Self *)((char *)v66 + 8 * (uint32_t)(uintptr_t)(v136));
        if ( v126 != nullptr )
        {
          v75 = *(uint32_t *)(v74 + 20);
          *(uint32_t *)v126 = *(uint32_t *)(v74 + 16);
          *((uint32_t *)v126 + 1) = v75;
          v66 = *((gameswf::Self **)self + 5);
        }
        v76 = *((uint32_t *)self + 7);
        v77 = v1 + 4;
        *((uint32_t *)self + 6) = v73;
        v78 = *((uint32_t *)self + 1);
        v137 = v76;
        if ( v77 > v76 && *((uint32_t *)self + 8) == 0 )
        {
          v99 = v77 + (v77 >> 1);
          *((uint32_t *)self + 7) = v99;
          if ( v99 != 0 )
          {
            v118 = v77;
            if ( v66 != nullptr )
              v66 = (gameswf::Self *)gameswf::realloc_internal(v66, 8 * v99, 8 * v137);
            else
              v66 = (gameswf::Self *)gameswf::malloc_internal(8 * v99);
            *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v66);
            v73 = *((uint32_t *)self + 6);
            v77 = v118;
          }
          else
          {
            if ( v66 != nullptr )
            {
              v113 = v77;
              gameswf::free_internal(v66);
              v73 = *((uint32_t *)self + 6);
              v77 = v113;
            }
            *((uint32_t *)self + 5) = 0;
            v66 = nullptr;
          }
        }
        v79 = (uint32_t *)((char *)v66 + 8 * v73);
        if ( v79 != nullptr )
        {
          v80 = *(uint32_t *)(v78 + 28);
          *v79 = *(uint32_t *)(v78 + 24);
          v79[1] = v80;
        }
        v40 = *((uint32_t *)self + 2) <= 4;
        *((uint32_t *)self + 6) = v77;
        if ( !v40 )
        {
          v127 = 4;
          while ( 1 )
          {
            v89 = v77 + 1;
            v90 = *((uint32_t *)self + 7);
            v91 = *((uint32_t **)self + 1);
            v143 = v77 + 1;
            if ( v77 + 1 <= v90 || *((uint32_t *)self + 8) != 0 )
            {
              v81 = *((gameswf::Self **)self + 5);
              v82 = v77;
            }
            else
            {
              v139 = v89 + (v89 >> 1);
              *((uint32_t *)self + 7) = v139;
              v145 = *((gameswf::Self **)self + 5);
              if ( v139 != 0 )
              {
                v112 = v77;
                v81 = *((uint32_t *)self + 5) != 0
                    ? (gameswf::Self *)gameswf::realloc_internal(v145, 8 * v139, 8 * v90)
                    : (gameswf::Self *)gameswf::malloc_internal(8 * v139);
                *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v81);
                v82 = *((uint32_t *)self + 6);
                v77 = v112;
              }
              else
              {
                v82 = v77;
                if ( v145 != nullptr )
                {
                  v108 = v77;
                  gameswf::free_internal(v145);
                  v82 = *((uint32_t *)self + 6);
                  v77 = v108;
                }
                *((uint32_t *)self + 5) = 0;
                v81 = nullptr;
              }
            }
            v138 = (uint32_t *)((char *)v81 + 8 * v82);
            if ( v138 != nullptr )
            {
              v83 = v91[1];
              *v138 = *v91;
              v138[1] = v83;
              v81 = *((gameswf::Self **)self + 5);
            }
            *((uint32_t *)self + 6) = v89;
            v84 = *((uint32_t *)self + 7);
            v85 = v77 + 2;
            v86 = *((uint32_t *)self + 1);
            if ( v77 + 2 > v84 && *((uint32_t *)self + 8) == 0 )
            {
              v93 = v85 + (v85 >> 1);
              *((uint32_t *)self + 7) = v93;
              if ( v93 != 0 )
              {
                if ( v81 != nullptr )
                {
                  v81 = (gameswf::Self *)gameswf::realloc_internal(v81, 8 * v93, 8 * v84);
                  v94 = *((uint32_t *)self + 6);
                  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v81);
                  v143 = v94;
                }
                else
                {
                  v81 = (gameswf::Self *)gameswf::malloc_internal(8 * v93);
                  v95 = *((uint32_t *)self + 6);
                  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v81);
                  v143 = v95;
                }
              }
              else
              {
                if ( v81 != nullptr )
                {
                  gameswf::free_internal(v81);
                  v143 = *((uint32_t *)self + 6);
                }
                *((uint32_t *)self + 5) = 0;
                v81 = nullptr;
              }
            }
            v87 = (uint32_t *)((char *)v81 + 8 * v143);
            if ( v87 != nullptr )
            {
              v88 = *(uint32_t *)(v86 + 8 * v127);
              v87[1] = *(uint32_t *)(v86 + 8 * v127 + 4);
              *v87 = v88;
            }
            v40 = *((uint32_t *)self + 2) <= ++v127;
            *((uint32_t *)self + 6) = v85;
            if ( v40 )
              break;
            v77 = v85;
          }
        }
      }
    }
    else if ( v7 == 4 )
    {
      if ( v1 > 0 )
      {
        v21 = v1 + 1;
        v22 = *((uint32_t *)self + 7);
        v23 = *((int **)self + 1);
        if ( v1 + 1 <= v22 || *((uint32_t *)self + 8) != 0 )
        {
          v24 = *((char **)self + 5);
        }
        else
        {
          v98 = v21 + (v21 >> 1);
          *((uint32_t *)self + 7) = v98;
          if ( v98 != 0 )
          {
            if ( *((uint32_t *)self + 5) != 0 )
              v24 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 5), 8 * v98, 8 * v22);
            else
              v24 = (char *)gameswf::malloc_internal(8 * v98);
            *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v24);
            v1 = *((uint32_t *)self + 6);
          }
          else
          {
            if ( *((uint32_t *)self + 5) != 0 )
            {
              gameswf::free_internal(*((gameswf::Self **)self + 5));
              v1 = *((uint32_t *)self + 6);
            }
            *((uint32_t *)self + 5) = 0;
            v24 = nullptr;
          }
        }
        v25 = &v24[8 * v1];
        if ( v25 != nullptr )
        {
          v26 = *v23;
          *((uint32_t *)v25 + 1) = v23[1];
          *(uint32_t *)v25 = v26;
        }
        *((uint32_t *)self + 6) = v21;
        v1 = v21;
      }
      if ( *((int *)self + 2) > 0 )
      {
        v27 = *((gameswf::Self **)self + 5);
        v144 = (gameswf::Self *)&word_10;
        v141 = 0;
        v123 = (gameswf::Self *)v1;
        v28 = v1;
        for ( i = (gameswf::Self *)v1; ; i = (gameswf::Self *)v28 )
        {
          v49 = v28 + 1;
          v50 = *((uint32_t *)self + 7);
          v51 = *((uint32_t *)self + 1);
          if ( v49 > v50 && *((uint32_t *)self + 8) == 0 )
          {
            v52 = v49 + (v49 >> 1);
            *((uint32_t *)self + 7) = v52;
            if ( v52 != 0 )
            {
              if ( v27 != nullptr )
                v27 = (gameswf::Self *)gameswf::realloc_internal(v27, 8 * v52, 8 * v50);
              else
                v27 = (gameswf::Self *)gameswf::malloc_internal(8 * v52);
              *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v27);
              i = *((gameswf::Self **)self + 6);
            }
            else
            {
              i = v123;
              if ( v27 != nullptr )
              {
                gameswf::free_internal(v27);
                i = *((gameswf::Self **)self + 6);
              }
              *((uint32_t *)self + 5) = 0;
              v27 = nullptr;
            }
          }
          v30 = (uint32_t *)((char *)v27 + 8 * (uint32_t)(uintptr_t)(i));
          if ( v30 != nullptr )
          {
            v31 = *(uint32_t *)(v51 + 8 * v141);
            v30[1] = *(uint32_t *)(v51 + 8 * v141 + 4);
            *v30 = v31;
            v27 = *((gameswf::Self **)self + 5);
          }
          v32 = *((uint32_t *)self + 7);
          v33 = (int)(uintptr_t)(v123) + 2;
          *((uint32_t *)self + 6) = v49;
          v34 = *((uint32_t *)self + 1);
          v146 = v32;
          if ( (int)(uintptr_t)(v123) + 2 > v32 && *((uint32_t *)self + 8) == 0 )
          {
            v54 = v33 + (v33 >> 1);
            *((uint32_t *)self + 7) = v54;
            if ( v54 != 0 )
            {
              if ( v27 != nullptr )
                v27 = (gameswf::Self *)gameswf::realloc_internal(v27, 8 * v54, 8 * v146);
              else
                v27 = (gameswf::Self *)gameswf::malloc_internal(8 * v54);
              *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v27);
              v49 = *((uint32_t *)self + 6);
              v33 = (int)(uintptr_t)(v123) + 2;
            }
            else
            {
              if ( v27 != nullptr )
              {
                gameswf::free_internal(v27);
                v49 = *((uint32_t *)self + 6);
                v33 = (int)(uintptr_t)(v123) + 2;
              }
              *((uint32_t *)self + 5) = 0;
              v27 = nullptr;
            }
          }
          v35 = (uint32_t *)((char *)v27 + 8 * v49);
          if ( v35 != nullptr )
          {
            v36 = *(uint32_t *)((char *)v144 + v34 - 8);
            v35[1] = *(uint32_t *)((char *)v144 + v34 - 4);
            *v35 = v36;
            v27 = *((gameswf::Self **)self + 5);
          }
          v131 = *((uint32_t *)self + 7);
          v28 = (int)(uintptr_t)(v123) + 3;
          *((uint32_t *)self + 6) = v33;
          v37 = *((uint32_t *)self + 1);
          v38 = v33;
          if ( (int)(uintptr_t)(v123) + 3 > v131 && *((uint32_t *)self + 8) == 0 )
          {
            v53 = v28 + (v28 >> 1);
            *((uint32_t *)self + 7) = v53;
            if ( v53 != 0 )
            {
              v109 = v33;
              if ( v27 != nullptr )
                v27 = (gameswf::Self *)gameswf::realloc_internal(v27, 8 * v53, 8 * v131);
              else
                v27 = (gameswf::Self *)gameswf::malloc_internal(8 * v53);
              *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v27);
              v38 = *((uint32_t *)self + 6);
              v33 = v109;
            }
            else
            {
              v38 = v33;
              if ( v27 != nullptr )
              {
                v105 = v33;
                gameswf::free_internal(v27);
                v38 = *((uint32_t *)self + 6);
                v33 = v105;
              }
              *((uint32_t *)self + 5) = 0;
              v27 = nullptr;
            }
          }
          v132 = (uint32_t *)((char *)v27 + 8 * v38);
          if ( v132 != nullptr )
          {
            v39 = *(uint32_t *)((char *)v144 + v37 + 4);
            *v132 = *(uint32_t *)((char *)v144 + v37);
            v132[1] = v39;
          }
          v141 += 3;
          v40 = v141 < *((uint32_t *)self + 2);
          *((uint32_t *)self + 6) = v28;
          if ( !v40 )
            break;
          v27 = *((gameswf::Self **)self + 5);
          if ( v141 > 0 )
          {
            v41 = (int *)((char *)v27 + 8 * v33);
            v42 = v41[1];
            v43 = (int)(uintptr_t)(v123) + 4;
            v103 = *((uint32_t *)self + 7);
            v133 = *v41;
            if ( (int)(uintptr_t)(v123) + 4 > v103 && *((uint32_t *)self + 8) == 0 )
            {
              v56 = v43 + (v43 >> 1);
              *((uint32_t *)self + 7) = v56;
              if ( v56 != 0 )
              {
                v111 = v42;
                if ( v27 != nullptr )
                  v27 = (gameswf::Self *)gameswf::realloc_internal(v27, 8 * v56, 8 * v103);
                else
                  v27 = (gameswf::Self *)gameswf::malloc_internal(8 * v56);
                *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v27);
                v28 = *((uint32_t *)self + 6);
                v42 = v111;
              }
              else
              {
                if ( v27 != nullptr )
                {
                  v107 = v42;
                  gameswf::free_internal(v27);
                  v28 = *((uint32_t *)self + 6);
                  v42 = v107;
                }
                *((uint32_t *)self + 5) = 0;
                v27 = nullptr;
              }
            }
            v44 = (uint32_t *)((char *)v27 + 8 * v28);
            if ( v44 != nullptr )
            {
              v44[1] = v42;
              *v44 = v133;
              v27 = *((gameswf::Self **)self + 5);
            }
            v45 = *((uint32_t *)self + 7);
            v28 = (int)(uintptr_t)(v123) + 5;
            *((uint32_t *)self + 6) = v43;
            v46 = *((uint32_t *)self + 1);
            v134 = v45;
            if ( (int)(uintptr_t)(v123) + 5 > v45 && *((uint32_t *)self + 8) == 0 )
            {
              v55 = v28 + (v28 >> 1);
              *((uint32_t *)self + 7) = v55;
              if ( v55 != 0 )
              {
                v110 = v46;
                if ( v27 != nullptr )
                  v27 = (gameswf::Self *)gameswf::realloc_internal(v27, 8 * v55, 8 * v134);
                else
                  v27 = (gameswf::Self *)gameswf::malloc_internal(8 * v55);
                *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v27);
                v43 = *((uint32_t *)self + 6);
                v46 = v110;
              }
              else
              {
                if ( v27 != nullptr )
                {
                  v106 = v46;
                  gameswf::free_internal(v27);
                  v43 = *((uint32_t *)self + 6);
                  v46 = v106;
                }
                *((uint32_t *)self + 5) = 0;
                v27 = nullptr;
              }
            }
            v47 = (uint32_t *)((char *)v27 + 8 * v43);
            if ( v47 != nullptr )
            {
              v48 = *(uint32_t *)(v46 + 8 * v141);
              v47[1] = *(uint32_t *)(v46 + 8 * v141 + 4);
              *v47 = v48;
              v27 = *((gameswf::Self **)self + 5);
            }
            *((uint32_t *)self + 6) = v28;
          }
          v123 = (gameswf::Self *)v28;
          v144 = (gameswf::Self *)((char *)v144 + 24);
        }
      }
    }
  }
}


