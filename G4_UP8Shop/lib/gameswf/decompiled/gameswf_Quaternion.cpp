#include "Core/Utils/DecompTypes.h"
#include "gameswf_Quaternion.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Quaternion::normalize  (binary VA: 0x10692a0)
// Original: gameswf::Quaternion::normalize
// ----------------------------------------------------------------------------
int gameswf::Quaternion::normalize(gameswf::Quaternion::Self *self)
{
  float v1; // xmm4_4
  float v2; // xmm3_4
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v7; // xmm0_4

  v1 = *(float *)self;
  v2 = *((float *)self + 1);
  v3 = *((float *)self + 2);
  v4 = *((float *)self + 3);
  v5 = (float)((float)((float)(v2 * v2) + (float)(v1 * v1)) + (float)(v3 * v3)) + (float)(v4 * v4);
  if ( v5 > 0.00001f )
  {
    v7 = sqrt(v5);
    *(float *)self = v1 * (float)(1.0 / v7);
    *((float *)self + 1) = v2 * (float)(1.0 / v7);
    *((float *)self + 2) = v3 * (float)(1.0 / v7);
    *((float *)self + 3) = v4 * (float)(1.0 / v7);
    return 1;
  }
  else
  {
    _mm_storel_ps((double *)self, g4_m128_from<__m128>(0LL));
    _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Quaternion::setAngleAxis  (binary VA: 0x1069360)
// Original: gameswf::Quaternion::setAngleAxis
// ----------------------------------------------------------------------------
void gameswf::Quaternion::setAngleAxis(gameswf::Quaternion::Self *self, float a2, float a3, float a4, float a5)
{
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  typedef double _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v11)) > _g4_s1 ? (32u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v12)) > _g4_s2 ? (36u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v13)) > _g4_s3 ? (40u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v14)) > _g4_s4 ? (44u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v11 = a3;
  v12 = a4;
  v13 = a5;
  v14 = 0;
  if ( (uint8_t)gameswf::Quaternion::normalize((gameswf::Quaternion::Self *)&v11) != 0 )
  {
    v5 = (float)(a2 * 0.5) * 3.141592653589793;
    v10 = (float)(v5 * 0.0055555557f);
    v6 = sin(v10);
    *(float *)self = v11 * v6;
    v7 = v12 * v6;
    v8 = v6 * v13;
    *((float *)self + 1) = v7;
    *((float *)self + 2) = v8;
    v9 = cos(v10);
    *((float *)self + 3) = v9;
  }
  else
  {
    _mm_storel_ps((double *)self, g4_m128_from<__m128>(0LL));
    _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
  }
}


