#include "Core/Utils/DecompTypes.h"
#include "glitch_collada_part06.h"

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::applyBlendedValue  (binary VA: 0xdd7f60)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2], glitch::collada::animation_track::CMixin<float, 2, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2], float [2]>>, 1, float>>> *self, float *a2, float *a3, unsigned int a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  unsigned int v6;
  float *v7;
  float *v8;
  float v9; // xmm5_4
  float v10; // xmm6_4
  __m128 v11;
  unsigned int v12;
  unsigned int v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128 v19;
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v24;
  typedef unsigned int _g4_t_v25;
  typedef uint32_t _g4_t_v26[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v25)) > _g4_s0 ? (12u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v26)) > _g4_s1 ? (16u + sizeof(_g4_t_v26)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);

  v6 = a4;
  v7 = a2;
  v8 = a3;
  if ( a4 == 1 )
  {
    v24 = *((uint32_t *)a2 + 1);
    *(float *)v26 = *a2;
    v26[1] = v24;
    return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_float_9e9c08(
             a5,
             *((uint16_t *)a6 + 4),
             0,
             v26);
  }
  v9 = 0.0;
  v10 = 0.0;
  if ( a4 != 0 )
  {
    v25 = 4 * (a4 >> 2);
    if ( v25 != 0 && a4 > 3 )
    {
g4_m128_raw(v11) = 0;
      v12 = 0;
      v13 = 0;
g4_m128_raw(v14) = 0;
      do
      {
        v15 = _mm_loadh_ps((const double *)&a2[v12 / 2 + 2]);
        v16 = _mm_loadh_ps((const double *)&a2[v12 / 2 + 6]);
        v17 = _mm_loadh_ps((const double *)&a3[v12 / 4 + 2]);
        ++v13;
        v12 += 16;
        v14 = _mm_add_ps(v14, _mm_mul_ps(_mm_shuffle_ps(v15, v16, 136), v17));
        v11 = _mm_add_ps(v11, _mm_mul_ps(_mm_shuffle_ps(v15, v16, 221), v17));
      }
      while ( v13 < a4 >> 2 );
      v18 = _mm_hadd_ps(v11, v11);
      v19 = _mm_hadd_ps(v14, v14);
      v6 = a4 - v25;
      v9 =g4_m128_lane<float>(_mm_hadd_ps(v18, v18), 0);
      v8 = &a3[4 * (a4 >> 2)];
      v7 = &a2[8 * (a4 >> 2)];
      v10 =g4_m128_lane<float>(_mm_hadd_ps(v19, v19), 0);
      if ( v25 == a4 )
        goto LABEL_9;
    }
    else
    {
      v9 = 0.0;
      v10 = 0.0;
    }
    do
    {
      v20 = *v8;
      --v6;
      ++v8;
      v21 = *v7 * v20;
      v22 = v20 * v7[1];
      v7 += 2;
      v10 = v10 + v21;
      v9 = v9 + v22;
    }
    while ( v6 != 0 );
  }
LABEL_9:
  *(float *)v26 = v10;
  *(float *)&v26[1] = v9;
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_float_9e9c08(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v26);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::applyKeyBasedValue  (binary VA: 0xdd80c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int v21;
  int v22;
  int v23;
  typedef float _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0.0;
  v26 = 0;
  v27 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = v19 + *(uint32_t *)(v19 + 8) + 8;
  v22 = *(uint32_t *)(v21 + 4);
  v23 = *(uint32_t *)(v21 + 8);
  v26 = v22;
  v27 = v23;
  v25 = v20;
  return G4_VCALL<int>(a4, 168, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getKeyBasedValue  (binary VA: 0xdd81b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  int v24;
  int v25;
  int result;
  float v27;
  float v28;
  float v29;
  int v30;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v30 = *((uint32_t *)a2 + 1);
  v18 = (char *)sub_D8C1A0(v7, v30, a3);
  v28 = *v15;
  v29 = *v10;
  v27 = (float)((float)*v18 * *v10) + *v15;
  v19 = (char *)sub_D8C1A0(v7, v30, a4);
  v20 = *(uint32_t *)(v7 + 24);
  v21 = (float)*v19;
  v22 = 0;
  if ( v20 != 0 )
    v22 = v7 + v20 + 24;
  v23 = (float)(v21 * v29) + v28;
  *a6 = *(float *)(v22 + *(uint32_t *)(v22 + 8) + 8);
  v24 = 0;
  v25 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v25 != 0 )
    v24 = *(uint32_t *)a2 + v25 + 24;
  result = *(uint32_t *)(v24 + *(uint32_t *)(v24 + 8) + 12);
  *((uint32_t *)a6 + 1) = result;
  a6[2] = (float)((float)(v23 - v27) * a5) + v27;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getKeyBasedValue  (binary VA: 0xdd82d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  float *v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  *a4 = *v21;
  result = *((uint32_t *)v21 + 1);
  *((uint32_t *)a4 + 1) = result;
  a4[2] = v20;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getKeyBasedValue  (binary VA: 0xdd8370)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  int v23;
  int v24;
  int result;
  float v26;
  float v27;
  float v28;
  int v29;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v29 = *((uint32_t *)a2 + 1);
  v18 = (char *)sub_D8C1A0(v7, v29, a3);
  v27 = *v15;
  v28 = *v10;
  v26 = (float)((float)*v18 * *v10) + *v15;
  v19 = (char *)sub_D8C1A0(v7, v29, a4);
  v20 = *(uint32_t *)(v7 + 24);
  v21 = (float)*v19;
  v22 = 0;
  if ( v20 != 0 )
    v22 = v7 + v20 + 24;
  *a6 = *(float *)(v22 + *(uint32_t *)(v22 + 8) + 8);
  a6[1] = (float)((float)((float)((float)(v21 * v28) + v27) - v26) * a5) + v26;
  v23 = 0;
  v24 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v24 != 0 )
    v23 = *(uint32_t *)a2 + v24 + 24;
  result = *(uint32_t *)(v23 + *(uint32_t *)(v23 + 8) + 16);
  *((uint32_t *)a6 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getKeyBasedValue  (binary VA: 0xdd8490)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  float *v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  *a4 = *v21;
  a4[1] = v20;
  result = *((uint32_t *)v21 + 2);
  *((uint32_t *)a4 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getKeyBasedValue  (binary VA: 0xdd8530)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int result;
  float v22;
  float v23;
  float v24;
  float *v25;
  int v26;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  if ( v8 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v8 != 0 )
    v12 = v8 + *(uint32_t *)a2 + 28;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v26 = *((uint32_t *)a2 + 1);
  v25 = v13;
  v16 = (char *)sub_D8C1A0(v7, v26, a3);
  v23 = *v25;
  v24 = *v9;
  v22 = (float)((float)*v16 * *v9) + *v25;
  *a6 = (float)((float)((float)((float)((float)*(char *)sub_D8C1A0(v7, v26, a4) * v24) + v23) - v22) * a5) + v22;
  v17 = 0;
  v18 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v18 != 0 )
    v17 = *(uint32_t *)a2 + v18 + 24;
  a6[1] = *(float *)(v17 + *(uint32_t *)(v17 + 8) + 12);
  v19 = 0;
  v20 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v20 != 0 )
    v19 = *(uint32_t *)a2 + v20 + 24;
  result = *(uint32_t *)(v19 + *(uint32_t *)(v19 + 8) + 16);
  *((uint32_t *)a6 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getKeyBasedValue  (binary VA: 0xdd8660)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  v20 = v18 * *v8;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v21 = v19 + *(uint32_t *)(v19 + 8) + 8;
  *a4 = v20 + *v13;
  a4[1] = *(float *)(v21 + 4);
  result = *(uint32_t *)(v21 + 8);
  *((uint32_t *)a4 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getKeyBasedValue  (binary VA: 0xdd8700)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  int v24;
  int v25;
  int result;
  float v27;
  float v28;
  float v29;
  int v30;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v30 = *((uint32_t *)a2 + 1);
  v18 = (char *)sub_D8C1A0(v7, v30, a3);
  v28 = *v15;
  v29 = *v10;
  v27 = (float)((float)*v18 * *v10) + *v15;
  v19 = (char *)sub_D8C1A0(v7, v30, a4);
  v20 = *(uint32_t *)(v7 + 24);
  v21 = (float)*v19;
  v22 = 0;
  if ( v20 != 0 )
    v22 = v7 + v20 + 24;
  v23 = (float)(v21 * v29) + v28;
  *a6 = *(float *)(v22 + *(uint32_t *)(v22 + 8) + 8);
  v24 = 0;
  v25 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v25 != 0 )
    v24 = *(uint32_t *)a2 + v25 + 24;
  result = *(uint32_t *)(v24 + *(uint32_t *)(v24 + 8) + 12);
  *((uint32_t *)a6 + 1) = result;
  a6[2] = (float)((float)(v23 - v27) * a5) + v27;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getKeyBasedValue  (binary VA: 0xdd8820)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  float *v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  *a4 = *v21;
  result = *((uint32_t *)v21 + 1);
  *((uint32_t *)a4 + 1) = result;
  a4[2] = v20;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getKeyBasedValue  (binary VA: 0xdd88c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  int v23;
  int v24;
  int result;
  float v26;
  float v27;
  float v28;
  int v29;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v29 = *((uint32_t *)a2 + 1);
  v18 = (char *)sub_D8C1A0(v7, v29, a3);
  v27 = *v15;
  v28 = *v10;
  v26 = (float)((float)*v18 * *v10) + *v15;
  v19 = (char *)sub_D8C1A0(v7, v29, a4);
  v20 = *(uint32_t *)(v7 + 24);
  v21 = (float)*v19;
  v22 = 0;
  if ( v20 != 0 )
    v22 = v7 + v20 + 24;
  *a6 = *(float *)(v22 + *(uint32_t *)(v22 + 8) + 8);
  a6[1] = (float)((float)((float)((float)(v21 * v28) + v27) - v26) * a5) + v26;
  v23 = 0;
  v24 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v24 != 0 )
    v23 = *(uint32_t *)a2 + v24 + 24;
  result = *(uint32_t *)(v23 + *(uint32_t *)(v23 + 8) + 16);
  *((uint32_t *)a6 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getKeyBasedValue  (binary VA: 0xdd89e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  float *v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  *a4 = *v21;
  a4[1] = v20;
  result = *((uint32_t *)v21 + 2);
  *((uint32_t *)a4 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getKeyBasedValue  (binary VA: 0xdd8a80)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int result;
  float v22;
  float v23;
  float v24;
  float *v25;
  int v26;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  if ( v8 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v8 != 0 )
    v12 = v8 + *(uint32_t *)a2 + 28;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v26 = *((uint32_t *)a2 + 1);
  v25 = v13;
  v16 = (char *)sub_D8C1A0(v7, v26, a3);
  v23 = *v25;
  v24 = *v9;
  v22 = (float)((float)*v16 * *v9) + *v25;
  *a6 = (float)((float)((float)((float)((float)*(char *)sub_D8C1A0(v7, v26, a4) * v24) + v23) - v22) * a5) + v22;
  v17 = 0;
  v18 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v18 != 0 )
    v17 = *(uint32_t *)a2 + v18 + 24;
  a6[1] = *(float *)(v17 + *(uint32_t *)(v17 + 8) + 12);
  v19 = 0;
  v20 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v20 != 0 )
    v19 = *(uint32_t *)a2 + v20 + 24;
  result = *(uint32_t *)(v19 + *(uint32_t *)(v19 + 8) + 16);
  *((uint32_t *)a6 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getKeyBasedValue  (binary VA: 0xdd8bb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  v20 = v18 * *v8;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v21 = v19 + *(uint32_t *)(v19 + 8) + 8;
  *a4 = v20 + *v13;
  a4[1] = *(float *)(v21 + 4);
  result = *(uint32_t *)(v21 + 8);
  *((uint32_t *)a4 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::getKeyBasedValue  (binary VA: 0xdd8c50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  char *v17;
  int v18;
  float v19; // xmm0_4
  int v20;
  float v21; // xmm0_4
  float v22; // xmm2_4
  float *v23;
  long double v24; // fst7
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float *v33;
  int v34;
  float v35;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  if ( v8 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v8 != 0 )
    v12 = v8 + *(uint32_t *)a2 + 28;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v33 = v13;
  v34 = *((uint32_t *)a2 + 1);
  v16 = (char *)sub_D8C1A0(v7, v34, a3);
  v27 = *v33;
  v29 = *v9;
  v31 = (float)((float)*v16 * *v9) + *v33;
  v17 = (char *)sub_D8C1A0(v7, v34, a4);
  v18 = *(uint32_t *)(v7 + 24);
  v19 = (float)*v17;
  v20 = 0;
  v21 = v19 * v29;
  v22 = v27;
  if ( v18 != 0 )
    v20 = v7 + v18 + 24;
  v23 = (float *)(v20 + *(uint32_t *)(v20 + 8) + 8);
  v35 = *v23;
  v28 = v23[1];
  v30 = v23[2];
  v32 = (float)((float)((float)((float)(v21 + v22) - v31) * a5) + v31) * 0.5;
  v26 = sinf(v32);
  v24 = cosf(v32);
  a6[3] = v24;
  a6[1] = v28 * v26;
  a6[2] = v26 * v30;
  *a6 = v26 * v35;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::getKeyBasedValue  (binary VA: 0xdd8df0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  float *v7;
  int v8;
  int v9;
  int v10;
  float *v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  float v16; // xmm0_4
  int v17;
  int v18;
  float *v19;
  long double v20; // fst7
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23;
  float x;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  if ( v6 != 0 )
    v4 = v6 + v5 + 28;
  v7 = nullptr;
  v8 = *(uint32_t *)(v4 + 4);
  v9 = v4 + v8 + 4;
  if ( v8 != 0 )
    v7 = (float *)v9;
  v10 = 0;
  if ( v6 != 0 )
    v10 = v6 + *(uint32_t *)a2 + 28;
  v11 = nullptr;
  v12 = *(uint32_t *)(v10 + 8);
  v13 = v10 + v12 + 8;
  if ( v12 != 0 )
    v11 = (float *)v13;
  v14 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v15 = *(uint32_t *)(v5 + 24);
  v16 = (float)*v14 * *v7;
  v17 = 0;
  v18 = v5 + v15 + 24;
  if ( v15 != 0 )
    v17 = v18;
  v19 = (float *)(v17 + *(uint32_t *)(v17 + 8) + 8);
  x = (float)(v16 + *v11) * 0.5;
  v23 = sinf(x);
  v20 = cosf(x);
  v21 = v19[1] * v23;
  v22 = v23 * *v19;
  a4[2] = v19[2] * v23;
  a4[1] = v21;
  *a4 = v22;
  a4[3] = v20;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::applyKeyBasedValue  (binary VA: 0xdd8f00)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int *v21;
  int v22;
  int v23;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0.0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (int *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  v22 = *v21;
  v23 = v21[1];
  v25 = v22;
  v26 = v23;
  v27 = v20;
  return G4_VCALL<int>(a4, 168, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::applyKeyBasedValue  (binary VA: 0xdd8ff0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int *v21;
  int v22;
  int v23;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0.0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (int *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  v22 = *v21;
  v23 = v21[1];
  v25 = v22;
  v26 = v23;
  v27 = v20;
  return G4_VCALL<int>(a4, 184, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::applyKeyBasedValue  (binary VA: 0xdd90e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int v21;
  int v22;
  int v23;
  typedef float _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0.0;
  v26 = 0;
  v27 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = v19 + *(uint32_t *)(v19 + 8) + 8;
  v22 = *(uint32_t *)(v21 + 4);
  v23 = *(uint32_t *)(v21 + 8);
  v26 = v22;
  v27 = v23;
  v25 = v20;
  return G4_VCALL<int>(a4, 184, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::applyKeyBasedValue  (binary VA: 0xdd91d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int *v21;
  int v22;
  int v23;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0;
  v26 = 0.0;
  v27 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (int *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  v22 = *v21;
  v23 = v21[2];
  v25 = v22;
  v27 = v23;
  v26 = v20;
  return G4_VCALL<int>(a4, 184, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::applyKeyBasedValue  (binary VA: 0xdd92c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int *v21;
  int v22;
  int v23;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0;
  v26 = 0.0;
  v27 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (int *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  v22 = *v21;
  v23 = v21[2];
  v25 = v22;
  v27 = v23;
  v26 = v20;
  return G4_VCALL<int>(a4, 168, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::applyKeyBasedValue  (binary VA: 0xdd93b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  float v24; // xmm0_4
  int v25;
  int v26;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef float _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v31)) > _g4_s3 ? (60u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v32)) > _g4_s4 ? (68u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v33)) > _g4_s5 ? (72u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v34)) > _g4_s6 ? (76u + sizeof(_g4_t_v34)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);

  v6 = 0;
  v32 = 0.0;
  v33 = 0;
  v34 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v31 = *((uint32_t *)a2 + 1);
  v18 = (char *)sub_D8C1A0(v7, v31, a3);
  v29 = *v15;
  v30 = *v10;
  v28 = (float)((float)*v18 * *v10) + *v15;
  v19 = (char *)sub_D8C1A0(v7, v31, a4);
  v20 = 0;
  v21 = (float)*v19;
  v22 = *(uint32_t *)(v7 + 24);
  v23 = v21 * v30;
  if ( v22 != 0 )
    v20 = v7 + v22 + 24;
  v24 = (float)(v23 + v29) - v28;
  v33 = *(uint32_t *)(v20 + *(uint32_t *)(v20 + 8) + 12);
  v25 = 0;
  if ( v22 != 0 )
    v25 = v7 + v22 + 24;
  v34 = *(uint32_t *)(v25 + *(uint32_t *)(v25 + 8) + 16);
  v26 = *a6;
  v32 = (float)(v24 * a5) + v28;
  return (*(int (**)(int *, float *))(v26 + 184))(a6, &v32);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::applyKeyBasedValue  (binary VA: 0xdd9510)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  float v24; // xmm0_4
  int v25;
  int v26;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef float _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v31)) > _g4_s3 ? (60u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v32)) > _g4_s4 ? (68u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v33)) > _g4_s5 ? (72u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v34)) > _g4_s6 ? (76u + sizeof(_g4_t_v34)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);

  v6 = 0;
  v32 = 0.0;
  v33 = 0;
  v34 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v31 = *((uint32_t *)a2 + 1);
  v18 = (char *)sub_D8C1A0(v7, v31, a3);
  v29 = *v15;
  v30 = *v10;
  v28 = (float)((float)*v18 * *v10) + *v15;
  v19 = (char *)sub_D8C1A0(v7, v31, a4);
  v20 = 0;
  v21 = (float)*v19;
  v22 = *(uint32_t *)(v7 + 24);
  v23 = v21 * v30;
  if ( v22 != 0 )
    v20 = v7 + v22 + 24;
  v24 = (float)(v23 + v29) - v28;
  v33 = *(uint32_t *)(v20 + *(uint32_t *)(v20 + 8) + 12);
  v25 = 0;
  if ( v22 != 0 )
    v25 = v7 + v22 + 24;
  v34 = *(uint32_t *)(v25 + *(uint32_t *)(v25 + 8) + 16);
  v26 = *a6;
  v32 = (float)(v24 * a5) + v28;
  return (*(int (**)(int *, float *))(v26 + 168))(a6, &v32);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::applyKeyBasedValue  (binary VA: 0xdd9670)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  float v24; // xmm0_4
  int v25;
  int v26;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v31)) > _g4_s3 ? (60u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v32)) > _g4_s4 ? (68u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v33)) > _g4_s5 ? (72u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v34)) > _g4_s6 ? (76u + sizeof(_g4_t_v34)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);

  v6 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0.0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v31 = *((uint32_t *)a2 + 1);
  v18 = (char *)sub_D8C1A0(v7, v31, a3);
  v29 = *v15;
  v30 = *v10;
  v28 = (float)((float)*v18 * *v10) + *v15;
  v19 = (char *)sub_D8C1A0(v7, v31, a4);
  v20 = 0;
  v21 = (float)*v19;
  v22 = *(uint32_t *)(v7 + 24);
  v23 = v21 * v30;
  if ( v22 != 0 )
    v20 = v7 + v22 + 24;
  v24 = (float)(v23 + v29) - v28;
  v32 = *(uint32_t *)(v20 + *(uint32_t *)(v20 + 8) + 8);
  v25 = 0;
  if ( v22 != 0 )
    v25 = v7 + v22 + 24;
  v33 = *(uint32_t *)(v25 + *(uint32_t *)(v25 + 8) + 12);
  v26 = *a6;
  v34 = (float)(v24 * a5) + v28;
  return (*(int (**)(int *, int *))(v26 + 184))(a6, &v32);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::applyKeyBasedValue  (binary VA: 0xdd97d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  float v24; // xmm0_4
  int v25;
  int v26;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v31)) > _g4_s3 ? (60u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v32)) > _g4_s4 ? (68u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v33)) > _g4_s5 ? (72u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v34)) > _g4_s6 ? (76u + sizeof(_g4_t_v34)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);

  v6 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0.0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v31 = *((uint32_t *)a2 + 1);
  v18 = (char *)sub_D8C1A0(v7, v31, a3);
  v29 = *v15;
  v30 = *v10;
  v28 = (float)((float)*v18 * *v10) + *v15;
  v19 = (char *)sub_D8C1A0(v7, v31, a4);
  v20 = 0;
  v21 = (float)*v19;
  v22 = *(uint32_t *)(v7 + 24);
  v23 = v21 * v30;
  if ( v22 != 0 )
    v20 = v7 + v22 + 24;
  v24 = (float)(v23 + v29) - v28;
  v32 = *(uint32_t *)(v20 + *(uint32_t *)(v20 + 8) + 8);
  v25 = 0;
  if ( v22 != 0 )
    v25 = v7 + v22 + 24;
  v33 = *(uint32_t *)(v25 + *(uint32_t *)(v25 + 8) + 12);
  v26 = *a6;
  v34 = (float)(v24 * a5) + v28;
  return (*(int (**)(int *, int *))(v26 + 168))(a6, &v32);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::applyKeyBasedValue  (binary VA: 0xdd9930)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float *v20;
  long double v21; // fst7
  float v22; // xmm2_4
  int v23;
  float v24; // xmm1_4
  typedef float _g4_t_v26;
  typedef float _g4_t_x;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_x)) > _g4_s1 ? (16u + sizeof(_g4_t_x)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v28)) > _g4_s2 ? (32u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v29)) > _g4_s3 ? (36u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v30)) > _g4_s4 ? (40u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v31)) > _g4_s5 ? (44u + sizeof(_g4_t_v31)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_x &x = *reinterpret_cast<_g4_t_x *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);

  v4 = 0;
  v28 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 1.0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (char *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16 * *v8;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  x = (float)(v18 + *v13) * 0.5;
  v26 = sinf(x);
  v21 = cosf(x);
  v22 = v20[1] * v26;
  v23 = *a4;
  v24 = v26 * *v20;
  v30 = v20[2] * v26;
  v31 = v21;
  v29 = v22;
  v28 = v24;
  return (*(int (**)(int *, float *))(v23 + 176))(a4, &v28);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::applyKeyBasedValue  (binary VA: 0xdd9a70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  float v17; // xmm1_4
  int v18;
  float v19; // xmm1_4
  int v20;
  int v21;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v26)) > _g4_s3 ? (56u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v27)) > _g4_s4 ? (60u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v28)) > _g4_s5 ? (60u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v29)) > _g4_s6 ? (64u + sizeof(_g4_t_v29)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);

  memset(v29, 0, 12);
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v27 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v27;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v27;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v26 = v13;
  v28 = *((uint32_t *)a2 + 1);
  v16 = (char *)sub_D8C1A0(v6, v28, a3);
  v24 = *v26;
  v25 = *v9;
  v23 = (float)((float)*v16 * *v9) + *v26;
  v17 = (float)*(char *)sub_D8C1A0(v6, v28, a4);
  v18 = *(uint32_t *)(v6 + 24);
  v19 = (float)(v17 * v25) + v24;
  if ( v18 != 0 )
  {
    v20 = v6 + v18 + 24;
    v21 = *(uint32_t *)(v20 + 8) + 4;
    v29[0] = *(float *)(v20 + v21 + 4);
    v29[1] = (float)((float)(v19 - v23) * a5) + v23;
  }
  else
  {
    v29[0] = 0.0;
    v29[1] = (float)((float)(v19 - v23) * a5) + v23;
    v21 = 4;
    v20 = 0;
  }
  v29[2] = *(float *)(v20 + v21 + 12);
  return G4_VCALL<int>(a6, 184, v29);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::applyKeyBasedValue  (binary VA: 0xdd9be0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  float v17; // xmm1_4
  int v18;
  float v19; // xmm1_4
  int v20;
  int v21;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v26)) > _g4_s3 ? (56u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v27)) > _g4_s4 ? (60u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v28)) > _g4_s5 ? (60u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v29)) > _g4_s6 ? (64u + sizeof(_g4_t_v29)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);

  memset(v29, 0, 12);
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v27 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v27;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v27;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v26 = v13;
  v28 = *((uint32_t *)a2 + 1);
  v16 = (char *)sub_D8C1A0(v6, v28, a3);
  v24 = *v26;
  v25 = *v9;
  v23 = (float)((float)*v16 * *v9) + *v26;
  v17 = (float)*(char *)sub_D8C1A0(v6, v28, a4);
  v18 = *(uint32_t *)(v6 + 24);
  v19 = (float)(v17 * v25) + v24;
  if ( v18 != 0 )
  {
    v20 = v6 + v18 + 24;
    v21 = *(uint32_t *)(v20 + 8) + 4;
    v29[0] = *(float *)(v20 + v21 + 4);
    v29[1] = (float)((float)(v19 - v23) * a5) + v23;
  }
  else
  {
    v29[0] = 0.0;
    v29[1] = (float)((float)(v19 - v23) * a5) + v23;
    v21 = 4;
    v20 = 0;
  }
  v29[2] = *(float *)(v20 + v21 + 12);
  return G4_VCALL<int>(a6, 168, v29);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::applyKeyBasedValue  (binary VA: 0xdd9d50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  char *v17;
  int v18;
  float v19; // xmm0_4
  int v20;
  float v21; // xmm0_4
  float v22; // xmm2_4
  float *v23;
  int v24;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef float _g4_t_v37[7];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v27)) > _g4_s1 ? (16u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v29)) > _g4_s3 ? (32u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v30)) > _g4_s4 ? (32u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v31)) > _g4_s5 ? (48u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v32)) > _g4_s6 ? (64u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v33)) > _g4_s7 ? (64u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v34)) > _g4_s8 ? (88u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v35)) > _g4_s9 ? (92u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v36)) > _g4_s10 ? (92u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v37)) > _g4_s11 ? (112u + sizeof(_g4_t_v37)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);

  memset(v37, 0, 12);
  v37[3] = 1.0;
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v35 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v35;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v35;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v34 = v13;
  v36 = *((uint32_t *)a2 + 1);
  v16 = (char *)sub_D8C1A0(v6, v36, a3);
  v27 = *v34;
  v29 = *v9;
  v32 = (float)((float)*v16 * *v9) + *v34;
  v17 = (char *)sub_D8C1A0(v6, v36, a4);
  v18 = *(uint32_t *)(v6 + 24);
  v19 = (float)*v17;
  v20 = 0;
  v21 = v19 * v29;
  v22 = v27;
  if ( v18 != 0 )
    v20 = v6 + v18 + 24;
  v23 = (float *)(v20 + *(uint32_t *)(v20 + 8) + 8);
  v30 = v23[1];
  v31 = v23[2];
  v28 = *v23;
  v33 = (float)((float)((float)((float)(v21 + v22) - v32) * a5) + v32) * 0.5;
  v26 = sinf(v33);
  v37[3] = cosf(v33);
  v24 = *a6;
  v37[2] = v31 * v26;
  v37[1] = v30 * v26;
  v37[0] = v26 * v28;
  return (*(int (**)(int *, float *))(v24 + 176))(a6, v37);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::applyKeyBasedValue  (binary VA: 0xddb3a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int *v21;
  int v22;
  int v23;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0.0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (int *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  v22 = *v21;
  v23 = v21[1];
  v25 = v22;
  v26 = v23;
  v27 = v20;
  return G4_VCALL<int>(a4, 184, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getKeyBasedValue  (binary VA: 0xddb490)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  int16_t *v18;
  int16_t *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  int v24;
  int v25;
  int result;
  float v27;
  float v28;
  float v29;
  int v30;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v30 = *((uint32_t *)a2 + 1);
  v18 = (int16_t *)sub_D8C1A0(v7, v30, a3);
  v28 = *v15;
  v29 = *v10;
  v27 = (float)((float)*v18 * *v10) + *v15;
  v19 = (int16_t *)sub_D8C1A0(v7, v30, a4);
  v20 = *(uint32_t *)(v7 + 24);
  v21 = (float)*v19;
  v22 = 0;
  if ( v20 != 0 )
    v22 = v7 + v20 + 24;
  v23 = (float)(v21 * v29) + v28;
  *a6 = *(float *)(v22 + *(uint32_t *)(v22 + 8) + 8);
  v24 = 0;
  v25 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v25 != 0 )
    v24 = *(uint32_t *)a2 + v25 + 24;
  result = *(uint32_t *)(v24 + *(uint32_t *)(v24 + 8) + 12);
  *((uint32_t *)a6 + 1) = result;
  a6[2] = (float)((float)(v23 - v27) * a5) + v27;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getKeyBasedValue  (binary VA: 0xddb5b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  float *v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  *a4 = *v21;
  result = *((uint32_t *)v21 + 1);
  *((uint32_t *)a4 + 1) = result;
  a4[2] = v20;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getKeyBasedValue  (binary VA: 0xddb650)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  int16_t *v18;
  int16_t *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  int v23;
  int v24;
  int result;
  float v26;
  float v27;
  float v28;
  int v29;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v29 = *((uint32_t *)a2 + 1);
  v18 = (int16_t *)sub_D8C1A0(v7, v29, a3);
  v27 = *v15;
  v28 = *v10;
  v26 = (float)((float)*v18 * *v10) + *v15;
  v19 = (int16_t *)sub_D8C1A0(v7, v29, a4);
  v20 = *(uint32_t *)(v7 + 24);
  v21 = (float)*v19;
  v22 = 0;
  if ( v20 != 0 )
    v22 = v7 + v20 + 24;
  *a6 = *(float *)(v22 + *(uint32_t *)(v22 + 8) + 8);
  a6[1] = (float)((float)((float)((float)(v21 * v28) + v27) - v26) * a5) + v26;
  v23 = 0;
  v24 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v24 != 0 )
    v23 = *(uint32_t *)a2 + v24 + 24;
  result = *(uint32_t *)(v23 + *(uint32_t *)(v23 + 8) + 16);
  *((uint32_t *)a6 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getKeyBasedValue  (binary VA: 0xddb770)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  float *v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  *a4 = *v21;
  a4[1] = v20;
  result = *((uint32_t *)v21 + 2);
  *((uint32_t *)a4 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getKeyBasedValue  (binary VA: 0xddb810)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int result;
  float v22;
  float v23;
  float v24;
  float *v25;
  int v26;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  if ( v8 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v8 != 0 )
    v12 = v8 + *(uint32_t *)a2 + 28;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v26 = *((uint32_t *)a2 + 1);
  v25 = v13;
  v16 = (int16_t *)sub_D8C1A0(v7, v26, a3);
  v23 = *v25;
  v24 = *v9;
  v22 = (float)((float)*v16 * *v9) + *v25;
  *a6 = (float)((float)((float)((float)((float)*(int16_t *)sub_D8C1A0(v7, v26, a4) * v24) + v23) - v22) * a5) + v22;
  v17 = 0;
  v18 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v18 != 0 )
    v17 = *(uint32_t *)a2 + v18 + 24;
  a6[1] = *(float *)(v17 + *(uint32_t *)(v17 + 8) + 12);
  v19 = 0;
  v20 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v20 != 0 )
    v19 = *(uint32_t *)a2 + v20 + 24;
  result = *(uint32_t *)(v19 + *(uint32_t *)(v19 + 8) + 16);
  *((uint32_t *)a6 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getKeyBasedValue  (binary VA: 0xddb940)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  v20 = v18 * *v8;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v21 = v19 + *(uint32_t *)(v19 + 8) + 8;
  *a4 = v20 + *v13;
  a4[1] = *(float *)(v21 + 4);
  result = *(uint32_t *)(v21 + 8);
  *((uint32_t *)a4 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getKeyBasedValue  (binary VA: 0xddb9e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  int16_t *v18;
  int16_t *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  int v24;
  int v25;
  int result;
  float v27;
  float v28;
  float v29;
  int v30;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v30 = *((uint32_t *)a2 + 1);
  v18 = (int16_t *)sub_D8C1A0(v7, v30, a3);
  v28 = *v15;
  v29 = *v10;
  v27 = (float)((float)*v18 * *v10) + *v15;
  v19 = (int16_t *)sub_D8C1A0(v7, v30, a4);
  v20 = *(uint32_t *)(v7 + 24);
  v21 = (float)*v19;
  v22 = 0;
  if ( v20 != 0 )
    v22 = v7 + v20 + 24;
  v23 = (float)(v21 * v29) + v28;
  *a6 = *(float *)(v22 + *(uint32_t *)(v22 + 8) + 8);
  v24 = 0;
  v25 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v25 != 0 )
    v24 = *(uint32_t *)a2 + v25 + 24;
  result = *(uint32_t *)(v24 + *(uint32_t *)(v24 + 8) + 12);
  *((uint32_t *)a6 + 1) = result;
  a6[2] = (float)((float)(v23 - v27) * a5) + v27;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getKeyBasedValue  (binary VA: 0xddbb00)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  float *v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  *a4 = *v21;
  result = *((uint32_t *)v21 + 1);
  *((uint32_t *)a4 + 1) = result;
  a4[2] = v20;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getKeyBasedValue  (binary VA: 0xddbba0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  int16_t *v18;
  int16_t *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  int v23;
  int v24;
  int result;
  float v26;
  float v27;
  float v28;
  int v29;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v29 = *((uint32_t *)a2 + 1);
  v18 = (int16_t *)sub_D8C1A0(v7, v29, a3);
  v27 = *v15;
  v28 = *v10;
  v26 = (float)((float)*v18 * *v10) + *v15;
  v19 = (int16_t *)sub_D8C1A0(v7, v29, a4);
  v20 = *(uint32_t *)(v7 + 24);
  v21 = (float)*v19;
  v22 = 0;
  if ( v20 != 0 )
    v22 = v7 + v20 + 24;
  *a6 = *(float *)(v22 + *(uint32_t *)(v22 + 8) + 8);
  a6[1] = (float)((float)((float)((float)(v21 * v28) + v27) - v26) * a5) + v26;
  v23 = 0;
  v24 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v24 != 0 )
    v23 = *(uint32_t *)a2 + v24 + 24;
  result = *(uint32_t *)(v23 + *(uint32_t *)(v23 + 8) + 16);
  *((uint32_t *)a6 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getKeyBasedValue  (binary VA: 0xddbcc0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  float *v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  *a4 = *v21;
  a4[1] = v20;
  result = *((uint32_t *)v21 + 2);
  *((uint32_t *)a4 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getKeyBasedValue  (binary VA: 0xddbd60)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int result;
  float v22;
  float v23;
  float v24;
  float *v25;
  int v26;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  if ( v8 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v8 != 0 )
    v12 = v8 + *(uint32_t *)a2 + 28;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v26 = *((uint32_t *)a2 + 1);
  v25 = v13;
  v16 = (int16_t *)sub_D8C1A0(v7, v26, a3);
  v23 = *v25;
  v24 = *v9;
  v22 = (float)((float)*v16 * *v9) + *v25;
  *a6 = (float)((float)((float)((float)((float)*(int16_t *)sub_D8C1A0(v7, v26, a4) * v24) + v23) - v22) * a5) + v22;
  v17 = 0;
  v18 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v18 != 0 )
    v17 = *(uint32_t *)a2 + v18 + 24;
  a6[1] = *(float *)(v17 + *(uint32_t *)(v17 + 8) + 12);
  v19 = 0;
  v20 = *(uint32_t *)(*(uint32_t *)a2 + 24);
  if ( v20 != 0 )
    v19 = *(uint32_t *)a2 + v20 + 24;
  result = *(uint32_t *)(v19 + *(uint32_t *)(v19 + 8) + 16);
  *((uint32_t *)a6 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getKeyBasedValue  (binary VA: 0xddbe90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int v21;
  int result;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  v20 = v18 * *v8;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v21 = v19 + *(uint32_t *)(v19 + 8) + 8;
  *a4 = v20 + *v13;
  a4[1] = *(float *)(v21 + 4);
  result = *(uint32_t *)(v21 + 8);
  *((uint32_t *)a4 + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getKeyBasedValue  (binary VA: 0xddbf30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int16_t *v17;
  int v18;
  float v19; // xmm0_4
  int v20;
  float v21; // xmm0_4
  float v22; // xmm2_4
  float *v23;
  long double v24; // fst7
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float *v33;
  int v34;
  float v35;

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  if ( v8 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v8 != 0 )
    v12 = v8 + *(uint32_t *)a2 + 28;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v33 = v13;
  v34 = *((uint32_t *)a2 + 1);
  v16 = (int16_t *)sub_D8C1A0(v7, v34, a3);
  v27 = *v33;
  v29 = *v9;
  v31 = (float)((float)*v16 * *v9) + *v33;
  v17 = (int16_t *)sub_D8C1A0(v7, v34, a4);
  v18 = *(uint32_t *)(v7 + 24);
  v19 = (float)*v17;
  v20 = 0;
  v21 = v19 * v29;
  v22 = v27;
  if ( v18 != 0 )
    v20 = v7 + v18 + 24;
  v23 = (float *)(v20 + *(uint32_t *)(v20 + 8) + 8);
  v35 = *v23;
  v28 = v23[1];
  v30 = v23[2];
  v32 = (float)((float)((float)((float)(v21 + v22) - v31) * a5) + v31) * 0.5;
  v26 = sinf(v32);
  v24 = cosf(v32);
  a6[3] = v24;
  a6[1] = v28 * v26;
  a6[2] = v26 * v30;
  *a6 = v26 * v35;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getKeyBasedValue  (binary VA: 0xddc0d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float *a4)
{
  int v4;
  int v5;
  int v6;
  float *v7;
  int v8;
  int v9;
  int v10;
  float *v11;
  int v12;
  int v13;
  int16_t *v14;
  int v15;
  float v16; // xmm0_4
  int v17;
  int v18;
  float *v19;
  long double v20; // fst7
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23;
  float x;

  v4 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  if ( v6 != 0 )
    v4 = v6 + v5 + 28;
  v7 = nullptr;
  v8 = *(uint32_t *)(v4 + 4);
  v9 = v4 + v8 + 4;
  if ( v8 != 0 )
    v7 = (float *)v9;
  v10 = 0;
  if ( v6 != 0 )
    v10 = v6 + *(uint32_t *)a2 + 28;
  v11 = nullptr;
  v12 = *(uint32_t *)(v10 + 8);
  v13 = v10 + v12 + 8;
  if ( v12 != 0 )
    v11 = (float *)v13;
  v14 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v15 = *(uint32_t *)(v5 + 24);
  v16 = (float)*v14 * *v7;
  v17 = 0;
  v18 = v5 + v15 + 24;
  if ( v15 != 0 )
    v17 = v18;
  v19 = (float *)(v17 + *(uint32_t *)(v17 + 8) + 8);
  x = (float)(v16 + *v11) * 0.5;
  v23 = sinf(x);
  v20 = cosf(x);
  v21 = v19[1] * v23;
  v22 = v23 * *v19;
  a4[2] = v19[2] * v23;
  a4[1] = v21;
  *a4 = v22;
  a4[3] = v20;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::applyKeyBasedValue  (binary VA: 0xddc1e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int *v21;
  int v22;
  int v23;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0.0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (int *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  v22 = *v21;
  v23 = v21[1];
  v25 = v22;
  v26 = v23;
  v27 = v20;
  return G4_VCALL<int>(a4, 168, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::applyKeyBasedValue  (binary VA: 0xddc2d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int v21;
  int v22;
  int v23;
  typedef float _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0.0;
  v26 = 0;
  v27 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = v19 + *(uint32_t *)(v19 + 8) + 8;
  v22 = *(uint32_t *)(v21 + 4);
  v23 = *(uint32_t *)(v21 + 8);
  v26 = v22;
  v27 = v23;
  v25 = v20;
  return G4_VCALL<int>(a4, 184, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::applyKeyBasedValue  (binary VA: 0xddc3c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int v21;
  int v22;
  int v23;
  typedef float _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0.0;
  v26 = 0;
  v27 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = v19 + *(uint32_t *)(v19 + 8) + 8;
  v22 = *(uint32_t *)(v21 + 4);
  v23 = *(uint32_t *)(v21 + 8);
  v26 = v22;
  v27 = v23;
  v25 = v20;
  return G4_VCALL<int>(a4, 168, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::applyKeyBasedValue  (binary VA: 0xddc4b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int *v21;
  int v22;
  int v23;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0;
  v26 = 0.0;
  v27 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (int *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  v22 = *v21;
  v23 = v21[2];
  v25 = v22;
  v27 = v23;
  v26 = v20;
  return G4_VCALL<int>(a4, 184, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::applyKeyBasedValue  (binary VA: 0xddc5a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  int *v21;
  int v22;
  int v23;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);

  v4 = 0;
  v25 = 0;
  v26 = 0.0;
  v27 = 0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float)(v18 * *v8) + *v13;
  v21 = (int *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  v22 = *v21;
  v23 = v21[2];
  v25 = v22;
  v27 = v23;
  v26 = v20;
  return G4_VCALL<int>(a4, 168, &v25);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::applyKeyBasedValue  (binary VA: 0xddc690)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  int16_t *v18;
  int16_t *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  float v24; // xmm0_4
  int v25;
  int v26;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef float _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v31)) > _g4_s3 ? (60u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v32)) > _g4_s4 ? (68u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v33)) > _g4_s5 ? (72u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v34)) > _g4_s6 ? (76u + sizeof(_g4_t_v34)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);

  v6 = 0;
  v32 = 0.0;
  v33 = 0;
  v34 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v31 = *((uint32_t *)a2 + 1);
  v18 = (int16_t *)sub_D8C1A0(v7, v31, a3);
  v29 = *v15;
  v30 = *v10;
  v28 = (float)((float)*v18 * *v10) + *v15;
  v19 = (int16_t *)sub_D8C1A0(v7, v31, a4);
  v20 = 0;
  v21 = (float)*v19;
  v22 = *(uint32_t *)(v7 + 24);
  v23 = v21 * v30;
  if ( v22 != 0 )
    v20 = v7 + v22 + 24;
  v24 = (float)(v23 + v29) - v28;
  v33 = *(uint32_t *)(v20 + *(uint32_t *)(v20 + 8) + 12);
  v25 = 0;
  if ( v22 != 0 )
    v25 = v7 + v22 + 24;
  v34 = *(uint32_t *)(v25 + *(uint32_t *)(v25 + 8) + 16);
  v26 = *a6;
  v32 = (float)(v24 * a5) + v28;
  return (*(int (**)(int *, float *))(v26 + 184))(a6, &v32);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::applyKeyBasedValue  (binary VA: 0xddc7f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  int16_t *v18;
  int16_t *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  float v24; // xmm0_4
  int v25;
  int v26;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef float _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v31)) > _g4_s3 ? (60u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v32)) > _g4_s4 ? (68u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v33)) > _g4_s5 ? (72u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v34)) > _g4_s6 ? (76u + sizeof(_g4_t_v34)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);

  v6 = 0;
  v32 = 0.0;
  v33 = 0;
  v34 = 0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v31 = *((uint32_t *)a2 + 1);
  v18 = (int16_t *)sub_D8C1A0(v7, v31, a3);
  v29 = *v15;
  v30 = *v10;
  v28 = (float)((float)*v18 * *v10) + *v15;
  v19 = (int16_t *)sub_D8C1A0(v7, v31, a4);
  v20 = 0;
  v21 = (float)*v19;
  v22 = *(uint32_t *)(v7 + 24);
  v23 = v21 * v30;
  if ( v22 != 0 )
    v20 = v7 + v22 + 24;
  v24 = (float)(v23 + v29) - v28;
  v33 = *(uint32_t *)(v20 + *(uint32_t *)(v20 + 8) + 12);
  v25 = 0;
  if ( v22 != 0 )
    v25 = v7 + v22 + 24;
  v34 = *(uint32_t *)(v25 + *(uint32_t *)(v25 + 8) + 16);
  v26 = *a6;
  v32 = (float)(v24 * a5) + v28;
  return (*(int (**)(int *, float *))(v26 + 168))(a6, &v32);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::applyKeyBasedValue  (binary VA: 0xddc950)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  int16_t *v18;
  int16_t *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  float v24; // xmm0_4
  int v25;
  int v26;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v31)) > _g4_s3 ? (60u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v32)) > _g4_s4 ? (68u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v33)) > _g4_s5 ? (72u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v34)) > _g4_s6 ? (76u + sizeof(_g4_t_v34)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);

  v6 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0.0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v31 = *((uint32_t *)a2 + 1);
  v18 = (int16_t *)sub_D8C1A0(v7, v31, a3);
  v29 = *v15;
  v30 = *v10;
  v28 = (float)((float)*v18 * *v10) + *v15;
  v19 = (int16_t *)sub_D8C1A0(v7, v31, a4);
  v20 = 0;
  v21 = (float)*v19;
  v22 = *(uint32_t *)(v7 + 24);
  v23 = v21 * v30;
  if ( v22 != 0 )
    v20 = v7 + v22 + 24;
  v24 = (float)(v23 + v29) - v28;
  v32 = *(uint32_t *)(v20 + *(uint32_t *)(v20 + 8) + 8);
  v25 = 0;
  if ( v22 != 0 )
    v25 = v7 + v22 + 24;
  v33 = *(uint32_t *)(v25 + *(uint32_t *)(v25 + 8) + 12);
  v26 = *a6;
  v34 = (float)(v24 * a5) + v28;
  return (*(int (**)(int *, int *))(v26 + 168))(a6, &v32);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::applyKeyBasedValue  (binary VA: 0xddcab0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v17;
  int16_t *v18;
  int16_t *v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  float v23; // xmm0_4
  float v24; // xmm0_4
  int v25;
  int v26;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v31)) > _g4_s3 ? (60u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v32)) > _g4_s4 ? (68u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v33)) > _g4_s5 ? (72u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v34)) > _g4_s6 ? (76u + sizeof(_g4_t_v34)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);

  v6 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0.0;
  v7 = *(uint32_t *)a2;
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v9 = *(uint32_t *)a2 + 28;
  if ( v8 != 0 )
    v6 = v9 + v8;
  v10 = nullptr;
  v11 = *(uint32_t *)(v6 + 4);
  v12 = v6 + v11 + 4;
  if ( v11 != 0 )
    v10 = (float *)v12;
  v13 = v8 + v9;
  v14 = 0;
  if ( v8 != 0 )
    v14 = v13;
  v15 = nullptr;
  v16 = *(uint32_t *)(v14 + 8);
  v17 = v14 + v16 + 8;
  if ( v16 != 0 )
    v15 = (float *)v17;
  v31 = *((uint32_t *)a2 + 1);
  v18 = (int16_t *)sub_D8C1A0(v7, v31, a3);
  v29 = *v15;
  v30 = *v10;
  v28 = (float)((float)*v18 * *v10) + *v15;
  v19 = (int16_t *)sub_D8C1A0(v7, v31, a4);
  v20 = 0;
  v21 = (float)*v19;
  v22 = *(uint32_t *)(v7 + 24);
  v23 = v21 * v30;
  if ( v22 != 0 )
    v20 = v7 + v22 + 24;
  v24 = (float)(v23 + v29) - v28;
  v32 = *(uint32_t *)(v20 + *(uint32_t *)(v20 + 8) + 8);
  v25 = 0;
  if ( v22 != 0 )
    v25 = v7 + v22 + 24;
  v33 = *(uint32_t *)(v25 + *(uint32_t *)(v25 + 8) + 12);
  v26 = *a6;
  v34 = (float)(v24 * a5) + v28;
  return (*(int (**)(int *, int *))(v26 + 184))(a6, &v32);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::applyKeyBasedValue  (binary VA: 0xddcc10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int v17;
  float v18; // xmm0_4
  int v19;
  float *v20;
  long double v21; // fst7
  float v22; // xmm2_4
  int v23;
  float v24; // xmm1_4
  typedef float _g4_t_v26;
  typedef float _g4_t_x;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_x)) > _g4_s1 ? (16u + sizeof(_g4_t_x)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v28)) > _g4_s2 ? (32u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v29)) > _g4_s3 ? (36u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v30)) > _g4_s4 ? (40u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v31)) > _g4_s5 ? (44u + sizeof(_g4_t_v31)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_x &x = *reinterpret_cast<_g4_t_x *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);

  v4 = 0;
  v28 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 1.0;
  v5 = *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v7 = *(uint32_t *)a2 + 28;
  if ( v6 != 0 )
    v4 = v7 + v6;
  v8 = nullptr;
  v9 = *(uint32_t *)(v4 + 4);
  v10 = v4 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = v6 + v7;
  v12 = 0;
  if ( v6 != 0 )
    v12 = v11;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v16 = (int16_t *)sub_D8C1A0(v5, *((uint32_t *)a2 + 1), a3);
  v17 = *(uint32_t *)(v5 + 24);
  v18 = (float)*v16 * *v8;
  v19 = 0;
  if ( v17 != 0 )
    v19 = v5 + v17 + 24;
  v20 = (float *)(v19 + *(uint32_t *)(v19 + 8) + 8);
  x = (float)(v18 + *v13) * 0.5;
  v26 = sinf(x);
  v21 = cosf(x);
  v22 = v20[1] * v26;
  v23 = *a4;
  v24 = v26 * *v20;
  v30 = v20[2] * v26;
  v31 = v21;
  v29 = v22;
  v28 = v24;
  return (*(int (**)(int *, float *))(v23 + 176))(a4, &v28);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::applyKeyBasedValue  (binary VA: 0xddcd50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  float v17; // xmm1_4
  int v18;
  float v19; // xmm1_4
  int v20;
  int v21;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v26)) > _g4_s3 ? (56u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v27)) > _g4_s4 ? (60u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v28)) > _g4_s5 ? (60u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v29)) > _g4_s6 ? (64u + sizeof(_g4_t_v29)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);

  memset(v29, 0, 12);
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v27 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v27;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v27;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v26 = v13;
  v28 = *((uint32_t *)a2 + 1);
  v16 = (int16_t *)sub_D8C1A0(v6, v28, a3);
  v24 = *v26;
  v25 = *v9;
  v23 = (float)((float)*v16 * *v9) + *v26;
  v17 = (float)*(int16_t *)sub_D8C1A0(v6, v28, a4);
  v18 = *(uint32_t *)(v6 + 24);
  v19 = (float)(v17 * v25) + v24;
  if ( v18 != 0 )
  {
    v20 = v6 + v18 + 24;
    v21 = *(uint32_t *)(v20 + 8) + 4;
    v29[0] = *(float *)(v20 + v21 + 4);
    v29[1] = (float)((float)(v19 - v23) * a5) + v23;
  }
  else
  {
    v29[0] = 0.0;
    v29[1] = (float)((float)(v19 - v23) * a5) + v23;
    v21 = 4;
    v20 = 0;
  }
  v29[2] = *(float *)(v20 + v21 + 12);
  return G4_VCALL<int>(a6, 168, v29);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::applyKeyBasedValue  (binary VA: 0xddcec0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  float v17; // xmm1_4
  int v18;
  float v19; // xmm1_4
  int v20;
  int v21;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v26)) > _g4_s3 ? (56u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v27)) > _g4_s4 ? (60u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v28)) > _g4_s5 ? (60u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v29)) > _g4_s6 ? (64u + sizeof(_g4_t_v29)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);

  memset(v29, 0, 12);
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v27 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v27;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v27;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v26 = v13;
  v28 = *((uint32_t *)a2 + 1);
  v16 = (int16_t *)sub_D8C1A0(v6, v28, a3);
  v24 = *v26;
  v25 = *v9;
  v23 = (float)((float)*v16 * *v9) + *v26;
  v17 = (float)*(int16_t *)sub_D8C1A0(v6, v28, a4);
  v18 = *(uint32_t *)(v6 + 24);
  v19 = (float)(v17 * v25) + v24;
  if ( v18 != 0 )
  {
    v20 = v6 + v18 + 24;
    v21 = *(uint32_t *)(v20 + 8) + 4;
    v29[0] = *(float *)(v20 + v21 + 4);
    v29[1] = (float)((float)(v19 - v23) * a5) + v23;
  }
  else
  {
    v29[0] = 0.0;
    v29[1] = (float)((float)(v19 - v23) * a5) + v23;
    v21 = 4;
    v20 = 0;
  }
  v29[2] = *(float *)(v20 + v21 + 12);
  return G4_VCALL<int>(a6, 184, v29);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::applyKeyBasedValue  (binary VA: 0xddd030)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  int16_t *v17;
  int v18;
  float v19; // xmm0_4
  int v20;
  float v21; // xmm0_4
  float v22; // xmm2_4
  float *v23;
  int v24;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef float _g4_t_v37[7];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v27)) > _g4_s1 ? (16u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v29)) > _g4_s3 ? (32u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v30)) > _g4_s4 ? (32u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v31)) > _g4_s5 ? (48u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v32)) > _g4_s6 ? (64u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v33)) > _g4_s7 ? (64u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v34)) > _g4_s8 ? (88u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v35)) > _g4_s9 ? (92u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v36)) > _g4_s10 ? (92u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v37)) > _g4_s11 ? (112u + sizeof(_g4_t_v37)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);

  memset(v37, 0, 12);
  v37[3] = 1.0;
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v35 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v35;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v35;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v34 = v13;
  v36 = *((uint32_t *)a2 + 1);
  v16 = (int16_t *)sub_D8C1A0(v6, v36, a3);
  v27 = *v34;
  v29 = *v9;
  v32 = (float)((float)*v16 * *v9) + *v34;
  v17 = (int16_t *)sub_D8C1A0(v6, v36, a4);
  v18 = *(uint32_t *)(v6 + 24);
  v19 = (float)*v17;
  v20 = 0;
  v21 = v19 * v29;
  v22 = v27;
  if ( v18 != 0 )
    v20 = v6 + v18 + 24;
  v23 = (float *)(v20 + *(uint32_t *)(v20 + 8) + 8);
  v30 = v23[1];
  v31 = v23[2];
  v28 = *v23;
  v33 = (float)((float)((float)((float)(v21 + v22) - v32) * a5) + v32) * 0.5;
  v26 = sinf(v33);
  v37[3] = cosf(v33);
  v24 = *a6;
  v37[2] = v31 * v26;
  v37[1] = v30 * v26;
  v37[0] = v26 * v28;
  return (*(int (**)(int *, float *))(v24 + 176))(a6, v37);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::applyKeyBasedValue  (binary VA: 0xddd230)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
char * glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5], glitch::collada::animation_track::CEmitterParamMixin<float, 5>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, char *a6)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  __m128 v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef float _g4_t_v17[5];
  typedef float _g4_t_v18;
  typedef __m128 _g4_t_v19;
  typedef double _g4_t_v20 __attribute__((aligned(1)));
  typedef double _g4_t_v21 __attribute__((aligned(1)));
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v18)) > _g4_s5 ? (64u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v19)) > _g4_s6 ? (112u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (132u + sizeof(_g4_t_v20)) > _g4_s7 ? (132u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (140u + sizeof(_g4_t_v21)) > _g4_s8 ? (140u + sizeof(_g4_t_v21)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 112u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 132u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 140u);

  v7 = *(uint32_t *)a2;
  v8 = *((uint32_t *)a2 + 1);
  v9 = v7 + *(uint32_t *)(v7 + 8) + 8;
  v15 = 8 * *(uint32_t *)(v7 + *(uint32_t *)(v7 + 8) + 32);
  v16 = v15 + v8 + *(uint32_t *)(v8 + 4) + 4;
  v10 = *(uint16_t *)(v7 + *(uint32_t *)(v7 + 8) + 38);
  v14 = *(uint32_t *)(v16 + 4);
  v13 = v10 * a3 + *(uint16_t *)(v9 + 28);
  v11 = v14 + v15 + *(uint32_t *)(v8 + 4) + v8 + v13;
  v19 = _mm_loadh_ps((const double *)(v11 + 16));
  v12 = _mm_loadh_ps((const double *)(v11 + v10 + 16));
  _mm_storel_ps(&v20, v12);
  _mm_storeh_ps(&v21, v12);
  v17[1] = (float)(g4_m128_lane<float>(v19, 1) * (float)(1.0 - a5)) + (float)(*((float *)&v20 + 1) * a5);
  v17[3] = (float)(g4_m128_lane<float>(v19, 3) * (float)(1.0 - a5)) + (float)(*((float *)&v21 + 1) * a5);
  v18 = (float)(*(float *)(v16 + v14 + 4 + v13 + 16) * (float)(1.0 - a5))
      + (float)(*(float *)(v16 + v14 + 4 + v13 + v10 + 16) * a5);
  v17[0] = (float)(a5 * *(float *)&v20) + (float)((float)(1.0 - a5) *g4_m128_lane<float>(v19, 0));
  v17[2] = (float)(g4_m128_lane<float>(v19, 2) * (float)(1.0 - a5)) + (float)(*(float *)&v21 * a5);
  *(float *)a6 = v17[0];
  *(uint64_t *)(a6 + 4) = *(g4_int128_t *)v17 >> 32;
  *((float *)a6 + 3) = v17[3];
  *((float *)a6 + 4) = v18;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getBlendedValue  (binary VA: 0xddd3f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5], glitch::collada::animation_track::CEmitterParamMixin<float, 5>>> *self, const double *a2, float *a3, int a4, double *a5)
{
  int v5;
  float *v6;
  __m128i v8;
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  int result;
  const double *v17;
  double *v18;
  __m128 v19;
  int16_t v20;
  __m128 v21;

  v5 = a4;
  v6 = (float *)a2;
  if ( a4 == 1 )
  {
    v17 = a2 + 2;
    v18 = a5 + 2;
    HIBYTE(v20) = a5 > a2 + 2;
    LOBYTE(v20) = a2 > a5 + 2;
    if ( v20 != 0 )
    {
      v19 = _mm_loadh_ps(a2 + 1);
      result = 1;
      _mm_storel_ps(a5, v19);
      _mm_storeh_ps(a5 + 1, v19);
    }
    else
    {
      v17 = a2;
      v18 = a5;
      result = 5;
    }
    do
    {
      --result;
      *(uint32_t *)v18 = *(uint32_t *)v17;
      v17 = (const double *)((char *)v17 + 4);
      v18 = (double *)((char *)v18 + 4);
    }
    while ( result != 0 );
  }
  else
  {
g4_m128_raw(v21) = 0u;
    if ( a4 != 0 )
    {
      v8 = _mm_cvtsi32_si128(0);
      v9 = 0.0;
      v10 = 0.0;
      v11 = 0.0;
      v12 = 0.0;
      do
      {
        v13 = *a3;
        --v5;
        ++a3;
        v12 = v12 + (float)(*v6 * v13);
        v11 = v11 + (float)(v6[1] * v13);
        v10 = v10 + (float)(v6[2] * v13);
        v14 = v6[3] * v13;
        v15 = v13 * v6[4];
        v6 += 5;
        v9 = v9 + v14;
        *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) + v15;
      }
      while ( v5 != 0 );
g4_m128_lane<uint64_t>(v21, 0) = __PAIR64__(LODWORD(v11), LODWORD(v12));
      result = _mm_cvtsi128_si32(v8);
g4_m128_lane<uint64_t>(v21, 1) = __PAIR64__(LODWORD(v9), LODWORD(v10));
    }
    else
    {
      result = 0;
    }
    *((uint32_t *)a5 + 4) = result;
    _mm_storel_ps(a5, v21);
    _mm_storeh_ps(a5 + 1, v21);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getAddedValue  (binary VA: 0xddd530)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5], glitch::collada::animation_track::CEmitterParamMixin<float, 5>>> *self, const double *a2, float *a3, int a4, double *a5)
{
  int v5;
  float *v6;
  __m128i v8;
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  int result;
  const double *v17;
  double *v18;
  __m128 v19;
  int16_t v20;
  __m128 v21;

  v5 = a4;
  v6 = (float *)a2;
  if ( a4 == 1 )
  {
    v17 = a2 + 2;
    v18 = a5 + 2;
    HIBYTE(v20) = a5 > a2 + 2;
    LOBYTE(v20) = a2 > a5 + 2;
    if ( v20 != 0 )
    {
      v19 = _mm_loadh_ps(a2 + 1);
      result = 1;
      _mm_storel_ps(a5, v19);
      _mm_storeh_ps(a5 + 1, v19);
    }
    else
    {
      v17 = a2;
      v18 = a5;
      result = 5;
    }
    do
    {
      --result;
      *(uint32_t *)v18 = *(uint32_t *)v17;
      v17 = (const double *)((char *)v17 + 4);
      v18 = (double *)((char *)v18 + 4);
    }
    while ( result != 0 );
  }
  else
  {
g4_m128_raw(v21) = 0u;
    if ( a4 != 0 )
    {
      v8 = _mm_cvtsi32_si128(0);
      v9 = 0.0;
      v10 = 0.0;
      v11 = 0.0;
      v12 = 0.0;
      do
      {
        v13 = *a3;
        --v5;
        ++a3;
        v12 = v12 + (float)(*v6 * v13);
        v11 = v11 + (float)(v6[1] * v13);
        v10 = v10 + (float)(v6[2] * v13);
        v14 = v6[3] * v13;
        v15 = v13 * v6[4];
        v6 += 5;
        v9 = v9 + v14;
        *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) + v15;
      }
      while ( v5 != 0 );
g4_m128_lane<uint64_t>(v21, 0) = __PAIR64__(LODWORD(v11), LODWORD(v12));
      result = _mm_cvtsi128_si32(v8);
g4_m128_lane<uint64_t>(v21, 1) = __PAIR64__(LODWORD(v9), LODWORD(v10));
    }
    else
    {
      result = 0;
    }
    *((uint32_t *)a5 + 4) = result;
    _mm_storel_ps(a5, v21);
    _mm_storeh_ps(a5 + 1, v21);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::applyAddedValue  (binary VA: 0xddd670)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5], glitch::collada::animation_track::CEmitterParamMixin<float, 5>>> *self, const double *a2, float *a3, int a4, __m128 *a5)
{
  int v5;
  float *v6;
  __m128i v8;
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  int v16;
  __m128 v18;
  int v19;
  __m128 v20;

  v5 = a4;
  v6 = (float *)a2;
  if ( a4 == 1 )
  {
    v18 = _mm_loadh_ps(a2 + 1);
    v19 = *((uint32_t *)a2 + 4);
  }
  else
  {
g4_m128_raw(v20) = 0u;
    if ( a4 != 0 )
    {
      v8 = _mm_cvtsi32_si128(0);
      v9 = 0.0;
      v10 = 0.0;
      v11 = 0.0;
      v12 = 0.0;
      do
      {
        v13 = *a3;
        --v5;
        ++a3;
        v12 = v12 + (float)(*v6 * v13);
        v11 = v11 + (float)(v6[1] * v13);
        v10 = v10 + (float)(v6[2] * v13);
        v14 = v6[3] * v13;
        v15 = v13 * v6[4];
        v6 += 5;
        v9 = v9 + v14;
        *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) + v15;
      }
      while ( v5 != 0 );
g4_m128_lane<uint64_t>(v20, 0) = __PAIR64__(LODWORD(v11), LODWORD(v12));
      v16 = _mm_cvtsi128_si32(v8);
g4_m128_lane<uint64_t>(v20, 1) = __PAIR64__(LODWORD(v9), LODWORD(v10));
    }
    else
    {
      v16 = 0;
    }
    v19 = v16;
    v18 = v20;
  }
  *a5 = v18;
g4_m128_lane<int32_t>(a5[1], 0) = v19;
  return v19;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::applyBlendedValue  (binary VA: 0xddd790)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5], glitch::collada::animation_track::CEmitterParamMixin<float, 5>>> *self, const double *a2, float *a3, int a4, __m128 *a5)
{
  int v5;
  float *v6;
  __m128i v8;
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  int v16;
  __m128 v18;
  int v19;
  __m128 v20;

  v5 = a4;
  v6 = (float *)a2;
  if ( a4 == 1 )
  {
    v18 = _mm_loadh_ps(a2 + 1);
    v19 = *((uint32_t *)a2 + 4);
  }
  else
  {
g4_m128_raw(v20) = 0u;
    if ( a4 != 0 )
    {
      v8 = _mm_cvtsi32_si128(0);
      v9 = 0.0;
      v10 = 0.0;
      v11 = 0.0;
      v12 = 0.0;
      do
      {
        v13 = *a3;
        --v5;
        ++a3;
        v12 = v12 + (float)(*v6 * v13);
        v11 = v11 + (float)(v6[1] * v13);
        v10 = v10 + (float)(v6[2] * v13);
        v14 = v6[3] * v13;
        v15 = v13 * v6[4];
        v6 += 5;
        v9 = v9 + v14;
        *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) + v15;
      }
      while ( v5 != 0 );
g4_m128_lane<uint64_t>(v20, 0) = __PAIR64__(LODWORD(v11), LODWORD(v12));
      v16 = _mm_cvtsi128_si32(v8);
g4_m128_lane<uint64_t>(v20, 1) = __PAIR64__(LODWORD(v9), LODWORD(v10));
    }
    else
    {
      v16 = 0;
    }
    v19 = v16;
    v18 = v20;
  }
  *a5 = v18;
g4_m128_lane<int32_t>(a5[1], 0) = v19;
  return v19;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getAdditiveValue  (binary VA: 0xddd8b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5], glitch::collada::animation_track::CEmitterParamMixin<float, 5>>> *self, float *a2, double *a3)
{
  float *result;
  float v4; // xmm1_4
  __m128 v5;

  result = a2;
  v4 = (float)(a2[4] * -1.0) + a2[9];
g4_m128_lane<float>(v5, 1) = (float)(a2[1] * -1.0) + a2[6];
g4_m128_lane<float>(v5, 2) = (float)(a2[2] * -1.0) + a2[7];
g4_m128_lane<float>(v5, 3) = (float)(a2[3] * -1.0) + a2[8];
g4_m128_lane<float>(v5, 0) = (float)(-1.0 * *result) + result[5];
  _mm_storel_ps(a3, v5);
  _mm_storeh_ps(a3 + 1, v5);
  *((float *)a3 + 4) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::getAdditiveValue  (binary VA: 0xddd940)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>> *self, float *a2, void *a3)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm3_4
  long double v13; // fst7
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v3 = -*a2;
  v4 = -a2[1];
  v5 = -a2[2];
  v20 = a2[3];
  v19 = a2[4];
  v18 = a2[5];
  v17 = a2[6];
  v6 = a2[7];
  *a2 = v3;
  a2[1] = v4;
  a2[2] = v5;
  v7 = (float)((float)((float)(v20 * v6) - (float)(v19 * v3)) - (float)(v18 * v4)) - (float)(v17 * v5);
  v8 = (float)((float)((float)(v5 * v6) + (float)(v18 * v3)) + (float)(v17 * v20)) - (float)(v19 * v4);
  v9 = (float)((float)((float)(v4 * v6) + (float)(v19 * v5)) + (float)(v18 * v20)) - (float)(v17 * v3);
  v10 = (float)((float)((float)(v3 * v6) + (float)(v4 * v17)) + (float)(v19 * v20)) - (float)(v5 * v18);
  *(float *)a3 = v10;
  *((float *)a3 + 1) = v9;
  *((float *)a3 + 2) = v8;
  *((float *)a3 + 3) = v7;
  if ( v7 < 0.0 )
  {
    v11 = 1.0 - (float)(v7 * v7);
    if ( fabs(v11) <= 0.000001f )
    {
      _mm_storel_ps((double *)a3, g4_m128_from<__m128>(0LL));
      _mm_storeh_ps((double *)a3 + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
    }
    else
    {
      v14 = acosf(v7);
      v16 = v14 - 3.1415927f;
      v15 = sinf(v14 - 3.1415927f);
      v12 = v15 / sqrt(v11);
      v13 = cosf(v16);
      *(float *)a3 = v10 * v12;
      *((float *)a3 + 1) = v9 * v12;
      *((float *)a3 + 3) = v13;
      *((float *)a3 + 2) = v8 * v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::getAdditiveValue  (binary VA: 0xdddbb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>> *self, float *a2, void *a3)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm3_4
  long double v13; // fst7
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v3 = -*a2;
  v4 = -a2[1];
  v5 = -a2[2];
  v20 = a2[3];
  v19 = a2[4];
  v18 = a2[5];
  v17 = a2[6];
  v6 = a2[7];
  *a2 = v3;
  a2[1] = v4;
  a2[2] = v5;
  v7 = (float)((float)((float)(v20 * v6) - (float)(v19 * v3)) - (float)(v18 * v4)) - (float)(v17 * v5);
  v8 = (float)((float)((float)(v5 * v6) + (float)(v18 * v3)) + (float)(v17 * v20)) - (float)(v19 * v4);
  v9 = (float)((float)((float)(v4 * v6) + (float)(v19 * v5)) + (float)(v18 * v20)) - (float)(v17 * v3);
  v10 = (float)((float)((float)(v3 * v6) + (float)(v4 * v17)) + (float)(v19 * v20)) - (float)(v5 * v18);
  *(float *)a3 = v10;
  *((float *)a3 + 1) = v9;
  *((float *)a3 + 2) = v8;
  *((float *)a3 + 3) = v7;
  if ( v7 < 0.0 )
  {
    v11 = 1.0 - (float)(v7 * v7);
    if ( fabs(v11) <= 0.000001f )
    {
      _mm_storel_ps((double *)a3, g4_m128_from<__m128>(0LL));
      _mm_storeh_ps((double *)a3 + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
    }
    else
    {
      v14 = acosf(v7);
      v16 = v14 - 3.1415927f;
      v15 = sinf(v14 - 3.1415927f);
      v12 = v15 / sqrt(v11);
      v13 = cosf(v16);
      *(float *)a3 = v10 * v12;
      *((float *)a3 + 1) = v9 * v12;
      *((float *)a3 + 3) = v13;
      *((float *)a3 + 2) = v8 * v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::getAdditiveValue  (binary VA: 0xddde20)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>> *self, float *a2, void *a3)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm3_4
  long double v13; // fst7
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v3 = -*a2;
  v4 = -a2[1];
  v5 = -a2[2];
  v20 = a2[3];
  v19 = a2[4];
  v18 = a2[5];
  v17 = a2[6];
  v6 = a2[7];
  *a2 = v3;
  a2[1] = v4;
  a2[2] = v5;
  v7 = (float)((float)((float)(v20 * v6) - (float)(v19 * v3)) - (float)(v18 * v4)) - (float)(v17 * v5);
  v8 = (float)((float)((float)(v5 * v6) + (float)(v18 * v3)) + (float)(v17 * v20)) - (float)(v19 * v4);
  v9 = (float)((float)((float)(v4 * v6) + (float)(v19 * v5)) + (float)(v18 * v20)) - (float)(v17 * v3);
  v10 = (float)((float)((float)(v3 * v6) + (float)(v4 * v17)) + (float)(v19 * v20)) - (float)(v5 * v18);
  *(float *)a3 = v10;
  *((float *)a3 + 1) = v9;
  *((float *)a3 + 2) = v8;
  *((float *)a3 + 3) = v7;
  if ( v7 < 0.0 )
  {
    v11 = 1.0 - (float)(v7 * v7);
    if ( fabs(v11) <= 0.000001f )
    {
      _mm_storel_ps((double *)a3, g4_m128_from<__m128>(0LL));
      _mm_storeh_ps((double *)a3 + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
    }
    else
    {
      v14 = acosf(v7);
      v16 = v14 - 3.1415927f;
      v15 = sinf(v14 - 3.1415927f);
      v12 = v15 / sqrt(v11);
      v13 = cosf(v16);
      *(float *)a3 = v10 * v12;
      *((float *)a3 + 1) = v9 * v12;
      *((float *)a3 + 3) = v13;
      *((float *)a3 + 2) = v8 * v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::getAdditiveValue  (binary VA: 0xdde090)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>> *self, float *a2, void *a3)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm3_4
  long double v13; // fst7
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v3 = -*a2;
  v4 = -a2[1];
  v5 = -a2[2];
  v20 = a2[3];
  v19 = a2[4];
  v18 = a2[5];
  v17 = a2[6];
  v6 = a2[7];
  *a2 = v3;
  a2[1] = v4;
  a2[2] = v5;
  v7 = (float)((float)((float)(v20 * v6) - (float)(v19 * v3)) - (float)(v18 * v4)) - (float)(v17 * v5);
  v8 = (float)((float)((float)(v5 * v6) + (float)(v18 * v3)) + (float)(v17 * v20)) - (float)(v19 * v4);
  v9 = (float)((float)((float)(v4 * v6) + (float)(v19 * v5)) + (float)(v18 * v20)) - (float)(v17 * v3);
  v10 = (float)((float)((float)(v3 * v6) + (float)(v4 * v17)) + (float)(v19 * v20)) - (float)(v5 * v18);
  *(float *)a3 = v10;
  *((float *)a3 + 1) = v9;
  *((float *)a3 + 2) = v8;
  *((float *)a3 + 3) = v7;
  if ( v7 < 0.0 )
  {
    v11 = 1.0 - (float)(v7 * v7);
    if ( fabs(v11) <= 0.000001f )
    {
      _mm_storel_ps((double *)a3, g4_m128_from<__m128>(0LL));
      _mm_storeh_ps((double *)a3 + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
    }
    else
    {
      v14 = acosf(v7);
      v16 = v14 - 3.1415927f;
      v15 = sinf(v14 - 3.1415927f);
      v12 = v15 / sqrt(v11);
      v13 = cosf(v16);
      *(float *)a3 = v10 * v12;
      *((float *)a3 + 1) = v9 * v12;
      *((float *)a3 + 3) = v13;
      *((float *)a3 + 2) = v8 * v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getAdditiveValue  (binary VA: 0xdde300)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self, float *a2, void *a3)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm3_4
  long double v13; // fst7
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v3 = -*a2;
  v4 = -a2[1];
  v5 = -a2[2];
  v20 = a2[3];
  v19 = a2[4];
  v18 = a2[5];
  v17 = a2[6];
  v6 = a2[7];
  *a2 = v3;
  a2[1] = v4;
  a2[2] = v5;
  v7 = (float)((float)((float)(v20 * v6) - (float)(v19 * v3)) - (float)(v18 * v4)) - (float)(v17 * v5);
  v8 = (float)((float)((float)(v5 * v6) + (float)(v18 * v3)) + (float)(v17 * v20)) - (float)(v19 * v4);
  v9 = (float)((float)((float)(v4 * v6) + (float)(v19 * v5)) + (float)(v18 * v20)) - (float)(v17 * v3);
  v10 = (float)((float)((float)(v3 * v6) + (float)(v4 * v17)) + (float)(v19 * v20)) - (float)(v5 * v18);
  *(float *)a3 = v10;
  *((float *)a3 + 1) = v9;
  *((float *)a3 + 2) = v8;
  *((float *)a3 + 3) = v7;
  if ( v7 < 0.0 )
  {
    v11 = 1.0 - (float)(v7 * v7);
    if ( fabs(v11) <= 0.000001f )
    {
      _mm_storel_ps((double *)a3, g4_m128_from<__m128>(0LL));
      _mm_storeh_ps((double *)a3 + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
    }
    else
    {
      v14 = acosf(v7);
      v16 = v14 - 3.1415927f;
      v15 = sinf(v14 - 3.1415927f);
      v12 = v15 / sqrt(v11);
      v13 = cosf(v16);
      *(float *)a3 = v10 * v12;
      *((float *)a3 + 1) = v9 * v12;
      *((float *)a3 + 3) = v13;
      *((float *)a3 + 2) = v8 * v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileReader::Destroy  (binary VA: 0xdde9c0)
// Original: glitch::collada::CResFileReader::~CResFileReader
// ----------------------------------------------------------------------------
void glitch::collada::CResFileReader::Destroy(volatile int32_t **self)
{
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_207B908);
  if ( *(self + 1) != nullptr )
    sub_5459C0(*(self + 1));
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_207BB08);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileReader::Destroy_eaddea20  (binary VA: 0xddea20)
// Original: glitch::collada::CResFileReader::~CResFileReader
// ----------------------------------------------------------------------------
void glitch::collada::CResFileReader::Destroy_eaddea20(volatile int32_t **self)
{
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_207B908);
  if ( *(self + 1) != nullptr )
    sub_5459C0(*(self + 1));
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_207BB08);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx  (binary VA: 0xdded30)
// Original: glitch::collada::animation_track::CBlender<glitch::core::quaternion,1,glitch::core::quaternion>::getBlendedValueEx
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *self, float *a2, const float *a3, double *a4)
{
  float *v4;
  float v5; // xmm0_4
  float *v6;
  int v7;
  float v8; // xmm1_4
  __m128 v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14;
  typedef float *_g4_t_v15;
  typedef __m128 _g4_t_v16;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v15)) > _g4_s4 ? (44u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v16)) > _g4_s5 ? (64u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);

  v4 = a2;
  v5 = *a2;
g4_m128_lane<uint64_t>(v16, 0) = *(uint64_t *)self;
g4_m128_lane<uint64_t>(v16, 1) = *((uint64_t *)self + 1);
  if ( (int)(uintptr_t)(a3) > 1 )
  {
    v6 = (float *)((char *)self + 16);
    v7 = 1;
    do
    {
      v8 = v4[v7++];
      v11 = *v6;
      v12 = v6[1];
      v13 = v6[2];
      v14 = v6[3];
      v15 = v4;
      v6 += 4;
      sub_A04410(
        (int)(uintptr_t)(&v16),
g4_m128_lane<float>(v16, 0),
g4_m128_lane<float>(v16, 1),
g4_m128_lane<float>(v16, 2),
g4_m128_lane<float>(v16, 3),
        v11,
        v12,
        v13,
        v14,
        v8 / (float)(v5 + v8));
      v4 = v15;
      v5 = v5 + v8;
    }
    while ( (const float *)v7 != a3 );
  }
  v10 = v16;
  _mm_storel_ps(a4, v16);
  _mm_storeh_ps(a4 + 1, v10);
  return a4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::getBlendedValue  (binary VA: 0xddee10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::getBlendedValue  (binary VA: 0xddee50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::getBlendedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::getBlendedValue  (binary VA: 0xddee90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::getBlendedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::getBlendedValue  (binary VA: 0xddeed0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getBlendedValue  (binary VA: 0xddef10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::getBlendedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::getBlendedValue  (binary VA: 0xddef50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::getBlendedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::applyBlendedValue  (binary VA: 0xddef90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::applyBlendedValue  (binary VA: 0xddf010)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::applyBlendedValue  (binary VA: 0xddf090)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::applyBlendedValue  (binary VA: 0xddf110)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::applyBlendedValue  (binary VA: 0xddf190)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::applyBlendedValue  (binary VA: 0xddf210)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::applyKeyBasedValue  (binary VA: 0xddf290)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef double _g4_t_v31[2];
  typedef __m128 _g4_t_v32;
  typedef __m128 _g4_t_v33;
  typedef uint8_t _g4_t_v34[12];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v19)) > _g4_s4 ? (28u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v22)) > _g4_s7 ? (32u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v23)) > _g4_s8 ? (36u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v24)) > _g4_s9 ? (36u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v25)) > _g4_s10 ? (40u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v26)) > _g4_s11 ? (44u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v27)) > _g4_s12 ? (48u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v28)) > _g4_s13 ? (52u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v29)) > _g4_s14 ? (56u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v30)) > _g4_s15 ? (60u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v31)) > _g4_s16 ? (64u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v32)) > _g4_s17 ? (80u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v33)) > _g4_s18 ? (96u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v34)) > _g4_s19 ? (112u + sizeof(_g4_t_v34)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);

  v31[0] = 0.0;
  v31[1] = 0.0078125;
  v6 = *(uint32_t *)a2;
  v30 = a5;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(v6 + 8);
  v29 = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v23 = 8 * *(uint32_t *)(v6 + v8 + 32);
  v10 = *(uint16_t *)(v6 + v8 + 38);
  v21 = v23 + v7 + *(uint32_t *)(v7 + 4) + 4;
  v11 = *(uint32_t *)(v21 + 4);
  v19 = v10 * a3 + *(uint16_t *)(v9 + 28);
  v22 = (int32_t *)(v19 + v21 + v11 + 4);
  v18 = (int32_t *)((char *)v22 + v10);
  v12 = v7 + v19 + v23 + v11 + *(uint32_t *)(v7 + 4);
  v25 = v12 + 8;
  v13 = v7 + v19 + v23 + v11 + *(uint32_t *)(v7 + 4) + v10;
  v20 = v13 + 24;
  v24 = v13 + 8;
  HIBYTE(v26) = (v12 + 8 > (unsigned int)(uintptr_t)(v34) || v12 + 24 < (unsigned int)(uintptr_t)(&v33))
             && (v12 + 8 > (unsigned int)(uintptr_t)(&v33) || v12 + 24 < (unsigned int)(uintptr_t)(&v32));
  if ( ((v13 + 24 < (unsigned int)(uintptr_t)(&v32) || v13 + 8 > (unsigned int)(uintptr_t)(&v33)) & HIBYTE(v26)) != 0
    && (HIBYTE(v26) = v24 > (unsigned int)(uintptr_t)(v34), v24 > (unsigned int)(uintptr_t)(v34) || v20 < (unsigned int)(uintptr_t)(&v33)) )
  {
    v32 = _mm_loadh_ps((const double *)(v12 + 16));
    v33 = _mm_loadh_ps((const double *)(v13 + 16));
  }
  else
  {
g4_m128_lane<int32_t>(v32, 0) = *v22;
g4_m128_lane<int32_t>(v33, 0) = *v18;
g4_m128_lane<int32_t>(v32, 1) = v22[1];
g4_m128_lane<int32_t>(v33, 1) = v18[1];
g4_m128_lane<int32_t>(v32, 2) = v22[2];
g4_m128_lane<int32_t>(v33, 2) = v18[2];
g4_m128_lane<int32_t>(v32, 3) = v22[3];
g4_m128_lane<int32_t>(v33, 3) = v18[3];
  }
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *)&v32,
    &v29,
    (const float *)((char *)&dword_0 + 2),
    v31);
  return G4_VCALL<int>(a6, 176, v31, v15, v16, v17, &v33, v18, v20, v22, v24, v25, v26, v27, v28, COERCE_FLOAT(LODWORD(v29)), COERCE_FLOAT(LODWORD(v30)));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::getKeyBasedValue  (binary VA: 0xddf490)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, double *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef float _g4_t_v20[2];
  typedef g4_int128_t _g4_t_v21[2];
  typedef uint8_t _g4_t_v22[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v20)) > _g4_s5 ? (32u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v21)) > _g4_s6 ? (40u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v22)) > _g4_s7 ? (72u + sizeof(_g4_t_v22)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);

  v20[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v20[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v19 = 8 * *(uint32_t *)(v6 + v8 + 32);
  v10 = *(uint16_t *)(v6 + v8 + 38);
  v17 = v19 + v7 + *(uint32_t *)(v7 + 4) + 4;
  v11 = *(uint32_t *)(v17 + 4);
  v16 = v10 * a3 + *(uint16_t *)(v9 + 28);
  v18 = (uint32_t *)(v16 + v17 + v11 + 4);
  v15 = (uint32_t *)((char *)v18 + v10);
  v12 = v7 + v16 + v19 + v11 + *(uint32_t *)(v7 + 4) + v10;
  v13 = v7 + v16 + v19 + v11 + *(uint32_t *)(v7 + 4);
  if ( (v12 + 24 < (unsigned int)(uintptr_t)(v21) || v12 + 8 > (unsigned int)(uintptr_t)(&v21[1]))
    && (v13 + 8 > (unsigned int)(uintptr_t)(v22) || v13 + 24 < (unsigned int)(uintptr_t)(&v21[1]))
    && (v13 + 8 > (unsigned int)(uintptr_t)(&v21[1]) || v13 + 24 < (unsigned int)(uintptr_t)(v21))
    && (v12 + 8 > (unsigned int)(uintptr_t)(v22) || v12 + 24 < (unsigned int)(uintptr_t)(&v21[1])) )
  {
    v21[0] = _mm_loadh_ps((const double *)(v13 + 16));
    v21[1] = _mm_loadh_ps((const double *)(v12 + 16));
  }
  else
  {
    LODWORD(v21[0]) = *v18;
    LODWORD(v21[1]) = *v15;
    DWORD1(v21[0]) = v18[1];
    DWORD1(v21[1]) = v15[1];
    DWORD2(v21[0]) = v18[2];
    DWORD2(v21[1]) = v15[2];
    HIDWORD(v21[0]) = v18[3];
    HIDWORD(v21[1]) = v15[3];
  }
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *)v21,
           v20,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx  (binary VA: 0xddf660)
// Original: glitch::collada::animation_track::CBlender<glitch::core::quaternion,1,glitch::core::quaternion>::getAddedValueEx
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *self, float *a2, const float *a3, double *a4)
{
  __m128 m128i_i128;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  const float *v9;
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  __m128i v18;
  __m128i v19;
  float v20; // xmm7_4
  float v21; // xmm4_4
  float v22; // xmm1_4
  __m128i v23;
  float v24; // xmm3_4
  float v25; // xmm7_4
  float v26; // xmm2_4
  float v27; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  __m128 v31;
  float v33; // xmm5_4
  float v34;
  float v35;
  float v36;
  float v37;
  float *v38;
  const float *v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;

  if ( (int)(uintptr_t)(a3) <= 0 )
  {
g4_m128_raw(v6) = 0;
g4_m128_raw(m128i_i128) = 0x3F800000u;
g4_m128_raw(v7) = 0;
g4_m128_raw(v8) = 0;
  }
  else
  {
g4_m128_raw(m128i_i128) = 0x3F800000u;
    v6 = _mm_cvtsi32_si128(0);
    v7 = v6;
    v8 = v6;
    v9 = nullptr;
    do
    {
      while ( 1 )
      {
        v17 = a2[(uint32_t)(uintptr_t)(v9)];
        if ( v17 != 1.0 )
          break;
g4_m128_raw(v18) = *((unsigned int *)self + 3);
        v9 = (const float *)((char *)v9 + 1);
        v19 = v18;
        *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v18) *g4_m128_lane<float>(m128i_i128, 0))
                                        - (float)(*(float *)self * *(float *)g4_m128_ptr<int32_t>(v8)))
                                - (float)(*((float *)self + 1) * *(float *)g4_m128_ptr<int32_t>(v7));
        v45 = *(float *)self * *(float *)g4_m128_ptr<int32_t>(v7);
        v20 = *((float *)self + 1) *g4_m128_lane<float>(m128i_i128, 0);
        v47 = *((float *)self + 2) * *(float *)g4_m128_ptr<int32_t>(v6);
        v21 = *((float *)self + 2) *g4_m128_lane<float>(m128i_i128, 0);
        v22 =g4_m128_lane<float>(m128i_i128, 0) * *(float *)self;
        *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v6)) + v21)
                                + (float)(*((float *)self + 1) * *(float *)g4_m128_ptr<int32_t>(v8));
g4_m128_raw(v23) = *((unsigned int *)self + 3);
        *(float *)g4_m128_ptr<int32_t>(v23) = *(float *)g4_m128_ptr<int32_t>(v23) * *(float *)g4_m128_ptr<int32_t>(v7);
        v24 = *(float *)g4_m128_ptr<int32_t>(v7) * *((float *)self + 2);
        *(float *)g4_m128_ptr<int32_t>(v23) = *(float *)g4_m128_ptr<int32_t>(v23) + v20;
        v25 = *(float *)self * *(float *)g4_m128_ptr<int32_t>(v6);
        v26 = *(float *)g4_m128_ptr<int32_t>(v6) * *((float *)self + 1);
        *(float *)g4_m128_ptr<int32_t>(v23) = *(float *)g4_m128_ptr<int32_t>(v23) + v25;
        v27 = *((float *)self + 2) * *(float *)g4_m128_ptr<int32_t>(v8);
        v28 = *(float *)g4_m128_ptr<int32_t>(v8) * *((float *)self + 3);
        self = (glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *)((char *)self + 16);
        v29 = v28 + v22;
        m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v18));
g4_m128_lane<float>(m128i_i128, 0) = *(float *)g4_m128_ptr<int32_t>(v18) - v47;
        v30 = v29 + v24;
        v7 = v23;
        *(float *)g4_m128_ptr<int32_t>(v7) = *(float *)g4_m128_ptr<int32_t>(v23) - v27;
        *(float *)g4_m128_ptr<int32_t>(v8) = v30 - v26;
        v6 = v19;
        *(float *)g4_m128_ptr<int32_t>(v6) = *(float *)g4_m128_ptr<int32_t>(v19) - v45;
        if ( v9 == a3 )
          goto LABEL_9;
      }
      v54 = *(float *)self;
      v52 = *((float *)self + 1);
      v11 = *((float *)self + 2);
      v12 = fsqrt((float)((float)(v52 * v52) + (float)(v54 * v54)) + (float)(v11 * v11));
      if ( fabs(v12) <= 0.000001f || (v48 = *((float *)self + 3)) > 1.0 || v48 < -1.0 )
      {
        v13 = 0.0;
        v50 = 0.0;
        v46 = 0.0;
        v14 = 0.0;
        v44 = 0.0;
        v15 = 0.0;
        v43 = 0.0;
        v55 = 0.0;
        v49 = 0.0;
        v16 = 1.0;
      }
      else
      {
        v39 = v9;
        v38 = a2;
        v35 = acosf(v48);
        v40 = v35 * v17;
        v36 = sinf(v35 * v17);
        v34 = v40;
        v41 = v36;
        v37 = cosf(v34);
g4_m128_raw(v8) =g4_m128_lane<uint32_t>(v8, 0);
g4_m128_raw(v7) =g4_m128_lane<uint32_t>(v7, 0);
        v42 = (float)(v11 * (float)(1.0 / v12)) * v41;
g4_m128_raw(v6) =g4_m128_lane<uint32_t>(v6, 0);
        v53 = (float)((float)(1.0 / v12) * v52) * v41;
        v33 = v41 * (float)((float)(1.0 / v12) * v54);
g4_m128_raw(m128i_i128) =g4_m128_lane<uint32_t>(m128i_i128, 0);
        v16 = v37;
        v55 = v53 * *(float *)g4_m128_ptr<int32_t>(v7);
        v51 = v33;
        v49 = v33 * *(float *)g4_m128_ptr<int32_t>(v8);
        v43 = v42 * *(float *)g4_m128_ptr<int32_t>(v6);
        v44 = v33 * *(float *)g4_m128_ptr<int32_t>(v7);
        v9 = v39;
        a2 = v38;
        v15 = (float)(v42 *g4_m128_lane<float>(m128i_i128, 0)) + (float)(v53 * *(float *)g4_m128_ptr<int32_t>(v8));
        v14 = (float)(v53 *g4_m128_lane<float>(m128i_i128, 0)) + (float)(v33 * *(float *)g4_m128_ptr<int32_t>(v6));
        v46 = v42 * *(float *)g4_m128_ptr<int32_t>(v8);
        v50 = (float)(v42 * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v51 *g4_m128_lane<float>(m128i_i128, 0));
        v13 = v53 * *(float *)g4_m128_ptr<int32_t>(v6);
      }
      v9 = (const float *)((char *)v9 + 1);
      self = (glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *)((char *)self + 16);
      *(float *)g4_m128_ptr<int32_t>(v6) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v6) * v16) - v44) + v15;
      *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * v16) - v46) + v14;
      *(float *)g4_m128_ptr<int32_t>(v8) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v8) * v16) - v13) + v50;
g4_m128_lane<float>(m128i_i128, 0) = (float)((float)((float)(g4_m128_lane<float>(m128i_i128, 0) * v16) - v49) - v55) - v43;
    }
    while ( v9 != a3 );
  }
LABEL_9:
g4_m128_lane<uint64_t>(v31, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_raw(G4_BITCAST<__m128>(v8)),g4_m128_raw(G4_BITCAST<__m128>(v7))), 0);
g4_m128_lane<uint64_t>(v31, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_raw(G4_BITCAST<__m128>(v6)), m128i_i128), 0);
  _mm_storel_ps(a4, v31);
  _mm_storeh_ps(a4 + 1, v31);
  return a4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::getAddedValue  (binary VA: 0xddfb30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::getAddedValue  (binary VA: 0xddfb70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::getAddedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::getAddedValue  (binary VA: 0xddfbb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::getAddedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::getAddedValue  (binary VA: 0xddfbf0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getAddedValue  (binary VA: 0xddfc30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::getAddedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::getAddedValue  (binary VA: 0xddfc70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::getAddedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, double *a5)
{
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::applyAddedValue  (binary VA: 0xddfcb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::applyAddedValue  (binary VA: 0xddfd30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::applyAddedValue  (binary VA: 0xddfdb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::applyAddedValue  (binary VA: 0xddfe30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::applyAddedValue  (binary VA: 0xddfeb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::applyAddedValue  (binary VA: 0xddff30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>> *self, glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *a2, float *a3, float *a4, void *a5)
{
  void *v6[4];

  memset(v6, 0, 12);
  v6[3] = (void *)1065353216;
  glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getAddedValueEx(
    a2,
    a3,
    a4,
    (double *)v6);
  return G4_VCALL<int>(a5, 176, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CEventsManager::findEntryFrom  (binary VA: 0xddffb0)
// Original: glitch::collada::CEventsManager::findEntryFrom
// ----------------------------------------------------------------------------
int glitch::collada::CEventsManager::findEntryFrom(glitch::collada::CEventsManager::Self *self, float a2)
{
  int *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  uint8_t v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint16_t v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v2 = *((int **)self + 5);
  v3 = *v2;
  if ( *v2 == 3 )
  {
    result = v2[2];
    v17 = result - 1;
    if ( result - 1 >= 0 )
    {
      v18 = 0;
      v24 = v2[3] + 4;
      do
      {
        v19 = (v18 + v17) >> 1;
        v20 = *(uint16_t *)(v24 + *((uint32_t *)self + 5) + 2 * v19 + 8);
        v21 = v19 - 1;
        v22 = v19 + 1;
        if ( (uint16_t)(int)((a2 + 0.5) * 0.030000001144409223) <= v20 )
          v17 = v21;
        else
          v18 = v22;
      }
      while ( v18 <= v17 );
      return v17 + 1;
    }
  }
  else if ( v3 == 4 )
  {
    result = v2[2];
    v11 = result - 1;
    if ( result - 1 >= 0 )
    {
      v12 = 0;
      v23 = v2[3] + 4;
      do
      {
        v13 = (v12 + v11) >> 1;
        v14 = *(uint32_t *)(v23 + *((uint32_t *)self + 5) + 4 * v13 + 8);
        v15 = v13 - 1;
        v16 = v13 + 1;
        if ( (int)(a2 + 0.5) <= v14 )
          v11 = v15;
        else
          v12 = v16;
      }
      while ( v12 <= v11 );
      return v11 + 1;
    }
  }
  else if ( v3 == 1 )
  {
    result = v2[2];
    v5 = result - 1;
    if ( result - 1 >= 0 )
    {
      v6 = 0;
      v25 = v2[3] + 4;
      do
      {
        v7 = (v6 + v5) >> 1;
        v8 = *(uint8_t *)(v25 + *((uint32_t *)self + 5) + v7 + 8);
        v9 = v7 - 1;
        v10 = v7 + 1;
        if ( (uint8_t)(int)((a2 + 0.5) * 0.030000001144409223) > v8 )
          v6 = v10;
        else
          v5 = v9;
      }
      while ( v6 <= v5 );
      return v5 + 1;
    }
  }
  else
  {
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CEventsManager::dispatchEvents  (binary VA: 0xde0130)
// Original: glitch::collada::CEventsManager::dispatchEvents
// ----------------------------------------------------------------------------
int * glitch::collada::CEventsManager::dispatchEvents(glitch::collada::CEventsManager::Self *self, int a2, int a3, float a4)
{
  int *result;
  int v5;
  int v6;
  int v7;
  int k;
  float v9; // xmm0_4
  char *v10;
  char *v11;
  int v12;
  int v13;
  int j;
  float v15; // xmm1_4
  char *v16;
  char *v17;
  int v18;
  int v19;
  int i;
  float v21; // xmm0_4
  char *v22;
  char *v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v26)) > _g4_s2 ? (24u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v27)) > _g4_s3 ? (28u + sizeof(_g4_t_v27)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);

  result = *((int **)self + 5);
  v5 = *result;
  if ( *result == 3 )
  {
    if ( a2 <= a3 )
    {
      v25 = 2 * a2;
      v18 = 2 * a2;
      v19 = result[5] + 4;
      do
      {
        for ( i = 0; i < *(int *)((char *)&result[v18 + 4] + v19); v19 = result[5] + 4 )
        {
          v21 = (float)*(uint16_t *)((char *)result + v25 + result[3] + 12) * 33.333332f;
          v22 = (char *)result + v19 + v18 * 4 + 16;
          v23 = &v22[4 * i++];
          v26 = a4 - v21;
          v27 = *(uint32_t *)&v23[*((uint32_t *)v22 + 1) + 4];
          (*((void (**)(float *, uint32_t))self + 2))(&v26, *((uint32_t *)self + 3));
          result = *((int **)self + 5);
        }
        ++a2;
        v18 += 2;
        v25 += 2;
      }
      while ( a3 >= a2 );
    }
  }
  else if ( v5 == 4 )
  {
    if ( a2 <= a3 )
    {
      v24 = a2;
      v12 = 2 * a2;
      v13 = result[5] + 4;
      do
      {
        for ( j = 0; j < *(int *)((char *)&result[v12 + 4] + v13); v13 = result[5] + 4 )
        {
          v15 = a4 - (float)*(int *)((char *)&result[v24 + 3] + result[3]);
          v16 = (char *)result + v13 + v12 * 4 + 16;
          v17 = &v16[4 * j++];
          v26 = v15;
          v27 = *(uint32_t *)&v17[*((uint32_t *)v16 + 1) + 4];
          (*((void (**)(float *, uint32_t))self + 2))(&v26, *((uint32_t *)self + 3));
          result = *((int **)self + 5);
        }
        ++a2;
        v12 += 2;
        ++v24;
      }
      while ( a3 >= a2 );
    }
  }
  else if ( v5 == 1 && a2 <= a3 )
  {
    v6 = 2 * a2;
    v7 = result[5] + 4;
    do
    {
      for ( k = 0; k < *(int *)((char *)&result[v6 + 4] + v7); v7 = result[5] + 4 )
      {
        v9 = (float)*((uint8_t *)result + a2 + result[3] + 12) * 33.333332f;
        v10 = (char *)result + v7 + v6 * 4 + 16;
        v11 = &v10[4 * k++];
        v26 = a4 - v9;
        v27 = *(uint32_t *)&v11[*((uint32_t *)v10 + 1) + 4];
        (*((void (**)(float *, uint32_t))self + 2))(&v26, *((uint32_t *)self + 3));
        result = *((int **)self + 5);
      }
      ++a2;
      v6 += 2;
    }
    while ( a3 >= a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getInstance  (binary VA: 0xde3160)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getInstance
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getInstance()
{
  if ( LOBYTE(g4_guard_e61c70a77d[0]) == 0
    && _cxa_guard_acquire(g4_guard_7ce07a8398) != 0 )
  {
    glitch::collada::CAnimationTrackEx::Construct(
      (int)(uintptr_t)(g4_fnstatic_4002a44d4d),
      0,
      4u);
    g4_fnstatic_4002a44d4d[0] = ((uint32_t)(uintptr_t)&off_207F988);
    _cxa_guard_release(g4_guard_e61c70a77d);
    __cxa_atexit(
      (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::Destroy,
      g4_fnstatic_4ba97c92f5,
      &unk_20D1280);
  }
  return (uint32_t *)(uintptr_t)(g4_fnstatic_4ba97c92f5);
}


// ============================================================================
// Address:   0xde3200 (size: 149 bytes)
// Symbol:    _ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIfNS1_6CMixinIfLi1ENS1_17SMaterialSetParamINS1_15SAnimationTypesIffEEEELin1EfEEEEE11getInstanceEv
// Demangled: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getInstance(void)
// ============================================================================
template <>
uint32_t *glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getInstance()
{
  if ( LOBYTE(g4_guard_feda99af75[0]) == 0
    && _cxa_guard_acquire(g4_guard_feda99af75) != 0 )
  {
    glitch::collada::CAnimationTrackEx::Construct(
      (int)(uintptr_t)(g4_fnstatic_9b085563aa),
      6u,
      1u);
    g4_fnstatic_9b085563aa[0] = ((uint32_t)(uintptr_t)&off_207FA88);
    _cxa_guard_release(g4_guard_feda99af75);
    __cxa_atexit(
      (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::Destroy,
      g4_fnstatic_9b085563aa,
      &unk_20D1280);
  }
  return (uint32_t *)(g4_fnstatic_9b085563aa);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::getInstance  (binary VA: 0xde32a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::getInstance
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::getInstance()
{
  if ( LOBYTE(g4_guard_89faff8490[0]) == 0
    && _cxa_guard_acquire(g4_guard_74fe74b13e) != 0 )
  {
    glitch::collada::CAnimationTrackEx::Construct(
      (int)(uintptr_t)(g4_fnstatic_1b88a1ecf4),
      6u,
      2u);
    g4_fnstatic_1b88a1ecf4[0] = ((uint32_t)(uintptr_t)&off_207FC88);
    _cxa_guard_release(g4_guard_89faff8490);
    __cxa_atexit(
      (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::Destroy,
      g4_fnstatic_8df2beb269,
      &unk_20D1280);
  }
  return (uint32_t *)(uintptr_t)(g4_fnstatic_8df2beb269);
}


// ============================================================================
// Address:   0xde3340 (size: 149 bytes)
// Symbol:    _ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA3_fNS1_6CMixinIfLi3ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_S4_EEEELin1EfEEEEE11getInstanceEv
// Demangled: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getInstance(void)
// ============================================================================
template <>
uint32_t *glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getInstance()
{
  if ( LOBYTE(g4_guard_e8a16a291c[0]) == 0
    && _cxa_guard_acquire(g4_guard_e8a16a291c) != 0 )
  {
    glitch::collada::CAnimationTrackEx::Construct(
      (int)(uintptr_t)(g4_fnstatic_1b54e9463a),
      6u,
      3u);
    g4_fnstatic_1b54e9463a[0] = ((uint32_t)(uintptr_t)&off_207FD88);
    _cxa_guard_release(g4_guard_e8a16a291c);
    __cxa_atexit(
      (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::Destroy,
      g4_fnstatic_1b54e9463a,
      &unk_20D1280);
  }
  return (uint32_t *)(g4_fnstatic_1b54e9463a);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getInstance  (binary VA: 0xde33e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getInstance
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getInstance()
{
  if ( LOBYTE(g4_guard_d188b2ea26[0]) == 0
    && _cxa_guard_acquire(g4_guard_d82584e31a) != 0 )
  {
    glitch::collada::CAnimationTrackEx::Construct(
      (int)(uintptr_t)(g4_fnstatic_dd69ccfcf8),
      6u,
      3u);
    g4_fnstatic_dd69ccfcf8[0] = ((uint32_t)(uintptr_t)&off_207FB88);
    _cxa_guard_release(g4_guard_d188b2ea26);
    __cxa_atexit(
      (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::Destroy,
      g4_fnstatic_f78031612d,
      &unk_20D1280);
  }
  return (uint32_t *)(uintptr_t)(g4_fnstatic_f78031612d);
}


// ============================================================================
// Address:   0xde3480 (size: 149 bytes)
// Symbol:    _ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA4_fNS1_6CMixinIfLi4ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_S4_EEEELin1EfEEEEE11getInstanceEv
// Demangled: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getInstance(void)
// ============================================================================
template <>
uint32_t *glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getInstance()
{
  if ( LOBYTE(g4_guard_1d693e88fe[0]) == 0
    && _cxa_guard_acquire(g4_guard_1d693e88fe) != 0 )
  {
    glitch::collada::CAnimationTrackEx::Construct(
      (int)(uintptr_t)(g4_fnstatic_449f78b0a3),
      6u,
      4u);
    g4_fnstatic_449f78b0a3[0] = ((uint32_t)(uintptr_t)&off_207FE88);
    _cxa_guard_release(g4_guard_1d693e88fe);
    __cxa_atexit(
      (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::Destroy,
      g4_fnstatic_449f78b0a3,
      &unk_20D1280);
  }
  return (uint32_t *)(g4_fnstatic_449f78b0a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx  (binary VA: 0xdef160)
// Original: glitch::collada::animation_track::CBlender<unsigned char,3,glitch::collada::animation_track::SUseDefaultBlender>::getBlendedValueEx
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *self, float *a2, const float *a3, uint8_t *a4)
{
  const float *v4;
  glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *v5;
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12;
  int result;
  float v14;
  float v15;
  float v16;

  v4 = a3;
  v5 = self;
  if ( a3 == (const float *)((char *)&dword_0 + 1) )
  {
    *a4 = *(uint8_t *)self;
    a4[1] = *((uint8_t *)self + 1);
    result = *((uint8_t *)self + 2);
    a4[2] = result;
  }
  else
  {
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    if ( a3 != nullptr )
    {
      v7 = 0.0;
      v8 = 0.0;
      v9 = 0.0;
      do
      {
        v4 = (const float *)((char *)v4 - 1);
        v10 = *a2++;
        v9 = v9 + (float)((float)*(uint8_t *)v5 * v10);
        v11 = (float)*((uint8_t *)v5 + 1) * v10;
        v12 = *((uint8_t *)v5 + 2);
        v5 = (glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *)((char *)v5 + 3);
        v8 = v8 + v11;
        v7 = v7 + (float)((float)v12 * v10);
      }
      while ( v4 != nullptr );
      v14 = v9;
      v15 = v8;
      v16 = v7;
    }
    *a4 = (int)v14;
    a4[1] = (int)v15;
    a4[2] = (int)v16;
    return (int)v16;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::getBlendedValue  (binary VA: 0xdef230)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CLightColorMixin<unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getBlendedValue  (binary VA: 0xdef270)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3], glitch::collada::animation_track::CMixin<unsigned char, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::getAddedValue  (binary VA: 0xdef2b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CLightColorMixin<unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getAddedValue  (binary VA: 0xdef2f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3], glitch::collada::animation_track::CMixin<unsigned char, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::getAdditiveValue  (binary VA: 0xdef330)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CLightColorMixin<unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, uint8_t *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getAdditiveValue  (binary VA: 0xdef380)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3], glitch::collada::animation_track::CMixin<unsigned char, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, uint8_t *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::applyBlendedValue  (binary VA: 0xdef3d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CLightColorMixin<unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  float v5; // xmm0_4
  int v6;
  float v7; // xmm1_4
  int result;
  float v9; // xmm2_4
  int v10[6];

  memset(v10, 0, 12);
  glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v10));
  v5 = (float)BYTE2(v10[0]);
  v6 = BYTE1(v10[0]);
  a5[8] = 1.0;
  v7 = (float)v6;
  result = LOBYTE(v10[0]);
  v9 = (float)LOBYTE(v10[0]) * 0.003921569f;
  a5[7] = v5 * 0.003921569f;
  a5[6] = v7 * 0.003921569f;
  a5[5] = v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::applyAddedValue  (binary VA: 0xdef470)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CLightColorMixin<unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  float v5; // xmm0_4
  int v6;
  float v7; // xmm1_4
  int result;
  float v9; // xmm2_4
  int v10[6];

  memset(v10, 0, 12);
  glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v10));
  v5 = (float)BYTE2(v10[0]);
  v6 = BYTE1(v10[0]);
  a5[8] = 1.0;
  v7 = (float)v6;
  result = LOBYTE(v10[0]);
  v9 = (float)LOBYTE(v10[0]) * 0.003921569f;
  a5[7] = v5 * 0.003921569f;
  a5[6] = v7 * 0.003921569f;
  a5[5] = v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::getKeyBasedValue  (binary VA: 0xdef510)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CLightColorMixin<unsigned char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, uint8_t *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  typedef uint8_t _g4_t_v15[8];
  typedef float _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  v16[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v16[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint8_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = &v12[v11];
  v15[0] = *v12;
  v15[3] = *v13;
  v15[1] = v12[1];
  v15[4] = v13[1];
  v15[2] = v12[2];
  v15[5] = v13[2];
  return glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v15,
           v16,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::applyKeyBasedValue  (binary VA: 0xdef5e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3], glitch::collada::animation_track::CMixin<unsigned char, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3], glitch::video::SColor>>, -1, unsigned char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6, glitch::collada::animation_track::CApplicatorInfo::Self *a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  typedef uint8_t _g4_t_v15[3];
  typedef uint8_t _g4_t_v16[8];
  typedef float _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (1u + sizeof(_g4_t_v15)) > _g4_s0 ? (1u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 1u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);

  v17[1] = a5;
  v7 = *(uint32_t *)a2;
  v8 = *((uint32_t *)a2 + 1);
  v17[0] = 1.0 - a5;
  v9 = v7 + *(uint32_t *)(v7 + 8) + 8;
  v10 = v8 + *(uint32_t *)(v8 + 4) + 4 + 8 * *(uint32_t *)(v7 + *(uint32_t *)(v7 + 8) + 32);
  v11 = *(uint16_t *)(v7 + *(uint32_t *)(v7 + 8) + 38);
  v12 = (uint8_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = &v12[v11];
  v16[0] = *v12;
  v16[3] = *v13;
  v16[1] = v12[1];
  v16[4] = v13[1];
  v16[2] = v12[2];
  v16[5] = v13[2];
  glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
    v17,
    (const float *)((char *)&dword_0 + 2),
    v15);
  std::memcpy(v17, v15, 3);
  HIBYTE(v17[0]) = -1;
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a6,
           *((uint16_t *)a7 + 4),
           0,
           v17);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::applyAddedValue  (binary VA: 0xdef6f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3], glitch::collada::animation_track::CMixin<unsigned char, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef uint8_t _g4_t_v7[5];
  typedef char _g4_t_v8;
  typedef char _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (13u + sizeof(_g4_t_v8)) > _g4_s1 ? (13u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v9)) > _g4_s2 ? (14u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 13u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 14u);

  glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
    a2,
    a3,
    a4,
    v7);
  *(uint16_t *)&v7[3] = *(uint16_t *)v7;
  v9 = -1;
  v8 = v7[2];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7[3]);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::applyBlendedValue  (binary VA: 0xdef780)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3], glitch::collada::animation_track::CMixin<unsigned char, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef uint8_t _g4_t_v7[5];
  typedef char _g4_t_v8;
  typedef char _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (13u + sizeof(_g4_t_v8)) > _g4_s1 ? (13u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v9)) > _g4_s2 ? (14u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 13u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 14u);

  glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
    a2,
    a3,
    a4,
    v7);
  *(uint16_t *)&v7[3] = *(uint16_t *)v7;
  v9 = -1;
  v8 = v7[2];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7[3]);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::applyKeyBasedValue  (binary VA: 0xdef810)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CLightColorMixin<unsigned char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  int result;
  float v15; // xmm1_4
  float v16; // xmm2_4
  typedef uint8_t _g4_t_v17[12];
  typedef float _g4_t_v18[2];
  typedef uint8_t _g4_t_v19[24];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);

  memset(v19, 0, 12);
  v18[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v18[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint8_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = &v12[v11];
  v17[0] = *v12;
  v17[3] = *v13;
  v17[1] = v12[1];
  v17[4] = v13[1];
  v17[2] = v12[2];
  v17[5] = v13[2];
  glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v17,
    v18,
    (const float *)((char *)&dword_0 + 2),
    v19);
  result = v19[0];
  v15 = (float)v19[1] * 0.003921569f;
  v16 = (float)v19[0] * 0.003921569f;
  a6[7] = (float)v19[2] * 0.003921569f;
  a6[6] = v15;
  a6[5] = v16;
  a6[8] = 1.0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getKeyBasedValue  (binary VA: 0xdef940)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3], glitch::collada::animation_track::CMixin<unsigned char, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3], glitch::video::SColor>>, -1, unsigned char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, uint8_t *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  typedef uint8_t _g4_t_v15[8];
  typedef float _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  v16[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v16[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint8_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = &v12[v11];
  v15[0] = *v12;
  v15[3] = *v13;
  v15[1] = v12[1];
  v15[4] = v13[1];
  v15[2] = v12[2];
  v15[5] = v13[2];
  return glitch::collada::animation_track::CBlender_unsigned_char_3_collada_4a3bb7::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<unsigned char, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v15,
           v16,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx  (binary VA: 0xdefa10)
// Original: glitch::collada::animation_track::CBlender<unsigned char,4,glitch::collada::animation_track::SUseDefaultBlender>::getBlendedValueEx
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *self, float *a2, const float *a3, uint8_t *a4)
{
  const float *v4;
  uint8_t *v5;
  float *v6;
  int v7;
  uint32_t v8;
  uint32_t v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  __m128i v44;
  __m128 v45;
  __m128 v46;
  __m128 v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  __m128i v51;
  __m128i v52;
  __m128 v53;
  __m128 v54;
  __m128 v55;
  __m128 v56;
  __m128 v57;
  __m128 v58;
  __m128 v59;
  __m128 v60;
  __m128 v61;
  float v62; // xmm0_4
  float v63; // xmm1_4
  int v64;
  g4_int128_t v65;
  int result;
  typedef __m128 _g4_t_v67;
  typedef const float *_g4_t_v68;
  typedef __m128 _g4_t_v69;
  typedef __m128 _g4_t_v70;
  typedef __m128 _g4_t_v71;
  typedef __m128 _g4_t_v72;
  typedef __m128i _g4_t_v73;
  typedef __m128 _g4_t_v74;
  typedef __m128 _g4_t_v75;
  typedef __m128 _g4_t_v76;
  typedef __m128 _g4_t_v77;
  typedef float _g4_t_v78[7];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v67)) > _g4_s0 ? (0u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v68)) > _g4_s1 ? (28u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v69)) > _g4_s2 ? (32u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v70)) > _g4_s3 ? (48u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v71)) > _g4_s4 ? (64u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v72)) > _g4_s5 ? (80u + sizeof(_g4_t_v72)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v73)) > _g4_s6 ? (80u + sizeof(_g4_t_v73)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v74)) > _g4_s7 ? (96u + sizeof(_g4_t_v74)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v75)) > _g4_s8 ? (112u + sizeof(_g4_t_v75)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v76)) > _g4_s9 ? (128u + sizeof(_g4_t_v76)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v77)) > _g4_s10 ? (144u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (160u + sizeof(_g4_t_v78)) > _g4_s11 ? (160u + sizeof(_g4_t_v78)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 0u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 64u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 80u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 112u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 128u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 144u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 160u);

  v4 = a3;
  v5 = (uint8_t *)self;
  v6 = a2;
  if ( a3 != (const float *)((char *)&dword_0 + 1) )
  {
    *(g4_int128_t *)v78 = 0;
    if ( a3 == nullptr )
    {
LABEL_10:
      *a4 = (int)v78[0];
      a4[1] = (int)v78[1];
      a4[2] = (int)v78[2];
      result = (int)v78[3];
      a4[3] = (int)v78[3];
      return result;
    }
g4_m128_lane<int32_t>(v77, 0) = (unsigned int)(uintptr_t)(a3) >> 4;
    v68 = (const float *)(16 * ((unsigned int)(uintptr_t)(a3) >> 4));
    if ( (unsigned int)(uintptr_t)(a3) > 0xF && 16 * ((unsigned int)(uintptr_t)(a3) >> 4) != 0 )
    {
g4_m128_raw(v75) = 0;
g4_m128_raw(v69) = 0;
      v7 = 0;
g4_m128_raw(v70) = 0;
      v8 = 0;
g4_m128_raw(v71) = 0;
      v9 =g4_m128_lane<int32_t>(v77, 0);
      do
      {
        v10 = *(__m128i *)((char *)self + v7 * 4);
        v11 = *(__m128i *)((char *)self + v7 * 4 + 16);
        v12 = _mm_unpackhi_epi8(v10, v11);
g4_m128_raw(v77) = *(g4_int128_t *)((char *)self + v7 * 4 + 48);
        v13 = *(__m128i *)((char *)self + v7 * 4 + 32);
        v14 = _mm_unpacklo_epi8(v10, v11);
        v15 = _mm_unpacklo_epi8(v14, v12);
        v16 = _mm_unpackhi_epi8(v14, v12);
        v17 = _mm_unpackhi_epi8(v15, v16);
        v18 = _mm_unpacklo_epi8(v15, v16);
        v19 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v10, v11), v12), v16);
        v20 = _mm_unpackhi_epi8(v13,g4_m128_raw(G4_BITCAST<__m128i>(v77)));
        v21 = _mm_unpacklo_epi8(v13,g4_m128_raw(G4_BITCAST<__m128i>(v77)));
        v22 = _mm_unpacklo_epi8(v21, v20);
        v23 = _mm_unpackhi_epi8(v21, v20);
        v24 = _mm_unpacklo_epi8(v18, v17);
        v25 = _mm_unpackhi_epi8(v19, v17);
        v26 = _mm_unpackhi_epi8(v22, v23);
        v27 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v22, v23), v26);
        v28 = _mm_unpackhi_epi8(
                _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v13,g4_m128_raw(G4_BITCAST<__m128i>(v77))), v20), v23),
                v26);
        v29 = _mm_unpacklo_epi8(v24, v27);
        ++v8;
g4_m128_raw(v76) = (g4_int128_t)_mm_unpackhi_epi8(v24, v27);
        v30 = _mm_unpacklo_epi8(v29,g4_m128_raw(G4_BITCAST<__m128i>(v76)));
        v31 = _mm_unpackhi_epi8(v29,g4_m128_raw(G4_BITCAST<__m128i>(v76)));
g4_m128_raw(v76) = (g4_int128_t)_mm_unpackhi_epi8(v25, v28);
        v32 = _mm_unpackhi_epi8(v30, v31);
        v33 = _mm_unpacklo_epi8(v30, v31);
        v34 = v33;
        v35 = _mm_unpacklo_epi8(v25, v28);
        v36 = _mm_unpacklo_epi8(v35,g4_m128_raw(G4_BITCAST<__m128i>(v76)));
        v37 = _mm_unpackhi_epi8(v35,g4_m128_raw(G4_BITCAST<__m128i>(v76)));
        v38 = _mm_unpacklo_epi8(v33, v32);
        v39 = _mm_unpackhi_epi8(v34, v32);
        v40 = _mm_unpackhi_epi8(v36, v37);
        v41 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v36, v37), v40);
        v42 = _mm_unpackhi_epi8(
                _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v25, v28),g4_m128_raw(G4_BITCAST<__m128i>(v76))), v37),
                v40);
        v43 = _mm_unpacklo_epi8(v38, g4_m128_from<__m128i>(0LL));
        v76 = _mm_cvtepi32_ps(_mm_unpackhi_epi16(v43, g4_m128_from<__m128i>(0LL)));
        v44 = _mm_unpackhi_epi8(v38, g4_m128_from<__m128i>(0LL));
        v67 = _mm_cvtepi32_ps(_mm_unpackhi_epi16(v44, g4_m128_from<__m128i>(0LL)));
        v77 = _mm_loadl_ps((const double *)&a2[v7 + 8]);
        _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v77, 1), _mm_loadl_ps((const double *)&a2[v7 + 10]));
        v72 = _mm_cvtepi32_ps(_mm_unpacklo_epi16(v44, g4_m128_from<__m128i>(0LL)));
        v45 = _mm_loadh_ps((const double *)&a2[v7 + 2]);
        v74 = _mm_loadl_ps((const double *)&a2[v7 + 12]);
        v46 = _mm_loadh_ps((const double *)&a2[v7 + 6]);
        v47 = _mm_loadl_ps((const double *)&a2[v7 + 14]);
        v7 += 16;
        _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v74, 1), v47);
        v71 = _mm_add_ps(
                _mm_mul_ps(v67, v74),
                _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(v43, g4_m128_from<__m128i>(0LL))), v45),
                      _mm_mul_ps(v76, v46)),
                    v71),
                  _mm_mul_ps(v77, v72)));
        v48 = _mm_unpacklo_epi8(v41, g4_m128_from<__m128i>(0LL));
        v73 = _mm_unpackhi_epi8(v41, g4_m128_from<__m128i>(0LL));
        v76 = _mm_cvtepi32_ps(_mm_unpacklo_epi16(v73, g4_m128_from<__m128i>(0LL)));
        v70 = _mm_add_ps(
                _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpackhi_epi16(v73, g4_m128_from<__m128i>(0LL))), v74),
                _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(v48, g4_m128_from<__m128i>(0LL))), v45),
                      _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpackhi_epi16(v48, g4_m128_from<__m128i>(0LL))), v46)),
                    v70),
                  _mm_mul_ps(v77, v76)));
        v49 = _mm_unpacklo_epi8(v39, g4_m128_from<__m128i>(0LL));
        v50 = _mm_unpackhi_epi8(v39, g4_m128_from<__m128i>(0LL));
        v51 = _mm_unpacklo_epi8(v42, g4_m128_from<__m128i>(0LL));
        v52 = _mm_unpackhi_epi8(v42, g4_m128_from<__m128i>(0LL));
        v69 = _mm_add_ps(
                _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpackhi_epi16(v50, g4_m128_from<__m128i>(0LL))), v74),
                _mm_add_ps(
                  _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(v50, g4_m128_from<__m128i>(0LL))), v77),
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(v49, g4_m128_from<__m128i>(0LL))), v45),
                      _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpackhi_epi16(v49, g4_m128_from<__m128i>(0LL))), v46)),
                    v69)));
        v53 = _mm_add_ps(
                _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpackhi_epi16(v52, g4_m128_from<__m128i>(0LL))), v74),
                _mm_add_ps(
                  _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(v52, g4_m128_from<__m128i>(0LL))), v77),
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(v51, g4_m128_from<__m128i>(0LL))), v45),
                      _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpackhi_epi16(v51, g4_m128_from<__m128i>(0LL))), v46)),
                    v75)));
        v75 = v53;
      }
      while ( v9 > v8 );
      v4 = (const float *)((char *)a3 - (char *)v68);
      v54 = _mm_hadd_ps(v53, v53);
      v55 = _mm_hadd_ps(v69, v69);
      v56 = _mm_hadd_ps(v70, v70);
      v57 = _mm_hadd_ps(v71, v71);
      v6 = &a2[16 * ((unsigned int)(uintptr_t)(a3) >> 4)];
      v5 = (uint8_t *)self + 64 * ((unsigned int)(uintptr_t)(a3) >> 4);
      v58 = _mm_hadd_ps(v54, v54);
      v59 = _mm_hadd_ps(v55, v55);
      v60 = _mm_hadd_ps(v56, v56);
      v61 = _mm_hadd_ps(v57, v57);
      if ( a3 == v68 )
        goto LABEL_9;
    }
    else
    {
g4_m128_raw(v58) = 0;
g4_m128_raw(v59) = 0;
g4_m128_raw(v60) = 0;
g4_m128_raw(v61) = 0;
    }
    do
    {
      v4 = (const float *)((char *)v4 - 1);
      v62 = *v6++;
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v61, 0) + (float)((float)*v5 * v62);
g4_m128_lane<float>(v60, 0) =g4_m128_lane<float>(v60, 0) + (float)((float)v5[1] * v62);
      v63 = (float)v5[2] * v62;
      v64 = v5[3];
      v5 += 4;
g4_m128_lane<float>(v59, 0) =g4_m128_lane<float>(v59, 0) + v63;
g4_m128_lane<float>(v58, 0) =g4_m128_lane<float>(v58, 0) + (float)((float)v64 * v62);
    }
    while ( v4 != nullptr );
LABEL_9:
    *(uint64_t *)&v65 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v61, v60), 0);
    *((uint64_t *)&v65 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v59, v58), 0);
    *(g4_int128_t *)v78 = v65;
    goto LABEL_10;
  }
  *a4 = *(uint8_t *)self;
  a4[1] = *((uint8_t *)self + 1);
  a4[2] = *((uint8_t *)self + 2);
  result = *((uint8_t *)self + 3);
  a4[3] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getBlendedValue  (binary VA: 0xdeff20)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getBlendedValue  (binary VA: 0xdeff60)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 0, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getBlendedValue  (binary VA: 0xdeffa0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getBlendedValue  (binary VA: 0xdeffe0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 2, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getBlendedValue  (binary VA: 0xdf0020)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 3, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getAddedValue  (binary VA: 0xdf0060)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getAddedValue  (binary VA: 0xdf00a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 0, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getAddedValue  (binary VA: 0xdf00e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getAddedValue  (binary VA: 0xdf0120)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 2, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getAddedValue  (binary VA: 0xdf0160)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 3, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint8_t *a5)
{
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::applyKeyBasedValue  (binary VA: 0xdf01a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, -1, unsigned char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6, glitch::collada::animation_track::CApplicatorInfo::Self *a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[8];
  typedef float _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);

  v17[1] = a5;
  v7 = *(uint32_t *)a2;
  v8 = *((uint32_t *)a2 + 1);
  v17[0] = 1.0 - a5;
  v9 = v7 + *(uint32_t *)(v7 + 8) + 8;
  v10 = v8 + *(uint32_t *)(v8 + 4) + 4 + 8 * *(uint32_t *)(v7 + *(uint32_t *)(v7 + 8) + 32);
  v11 = *(uint16_t *)(v7 + *(uint32_t *)(v7 + 8) + 38);
  v12 = (uint8_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = &v12[v11];
  v16[0] = *v12;
  v16[4] = *v13;
  v16[1] = v12[1];
  v16[5] = v13[1];
  v16[2] = v12[2];
  v16[6] = v13[2];
  v16[3] = v12[3];
  v16[7] = v13[3];
  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
    v17,
    (const float *)((char *)&dword_0 + 2),
    (uint8_t *)(&v15));
  LODWORD(v17[0]) = v15;
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a6,
           *((uint16_t *)a7 + 4),
           0,
           v17);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::applyAddedValue  (binary VA: 0xdf02c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::applyBlendedValue  (binary VA: 0xdf0350)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::applyAddedValue  (binary VA: 0xdf03e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 0, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::applyBlendedValue  (binary VA: 0xdf0470)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 0, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::applyAddedValue  (binary VA: 0xdf0500)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::applyBlendedValue  (binary VA: 0xdf0590)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::applyAddedValue  (binary VA: 0xdf0620)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 2, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::applyBlendedValue  (binary VA: 0xdf06b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 2, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::applyAddedValue  (binary VA: 0xdf0740)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 3, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::applyBlendedValue  (binary VA: 0xdf07d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 3, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
    a2,
    a3,
    a4,
    (uint8_t *)(v8));
  v7 = v8[0];
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getAdditiveValue  (binary VA: 0xdf0860)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 3, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, uint8_t *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getAdditiveValue  (binary VA: 0xdf08b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, -1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, uint8_t *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getAdditiveValue  (binary VA: 0xdf0900)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 0, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, uint8_t *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getAdditiveValue  (binary VA: 0xdf0950)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 1, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, uint8_t *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getAdditiveValue  (binary VA: 0xdf09a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 2, unsigned char>>> *self, glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, uint8_t *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getKeyBasedValue  (binary VA: 0xdf09f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, -1, unsigned char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, uint8_t *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  typedef uint8_t _g4_t_v15[8];
  typedef float _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  v16[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v16[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint8_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = &v12[v11];
  v15[0] = *v12;
  v15[4] = *v13;
  v15[1] = v12[1];
  v15[5] = v13[1];
  v15[2] = v12[2];
  v15[6] = v13[2];
  v15[3] = v12[3];
  v15[7] = v13[3];
  return glitch::collada::animation_track::CBlender_unsigned_char_4_collada_0103fe::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<unsigned char, 4, glitch::collada::animation_track::SUseDefaultBlender> *)v15,
           v16,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx  (binary VA: 0xdf0ad0)
// Original: glitch::collada::animation_track::CBlender<float,4,glitch::collada::animation_track::SUseDefaultBlender>::getBlendedValueEx
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *self, float *a2, const float *a3, unsigned int a4)
{
  const float *v4;
  float *v5;
  float *v6;
  __m128 v7;
  __m128 v8;
  unsigned int v9;
  unsigned int v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  __m128 v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  __m128 v25;
  __m128 v26;
  __m128 v27;
  __m128 v28;
  __m128 v29;
  __m128 v30;
  float v31; // xmm0_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  __m128 v34;
  unsigned int result;
  __m128 v36;
  const float *v37;
  __m128 v38;
  __m128 v39;
  __m128 v40;

  v4 = a3;
  v5 = (float *)self;
  v6 = a2;
  if ( a3 != (const float *)((char *)&dword_0 + 1) )
  {
g4_m128_raw(v7) = 0;
g4_m128_raw(v8) = 0;
    if ( a3 == nullptr )
    {
LABEL_10:
      _mm_storel_ps((double *)a4, v8);
      _mm_storeh_ps((double *)(a4 + 8), v8);
      return a4;
    }
    v37 = (const float *)(4 * ((unsigned int)(uintptr_t)(a3) >> 2));
    if ( (unsigned int)(uintptr_t)(a3) > 3 && 4 * ((unsigned int)(uintptr_t)(a3) >> 2) != 0 )
    {
      v9 = 0;
      v10 = 0;
g4_m128_raw(v38) = 0;
g4_m128_raw(v39) = 0;
g4_m128_raw(v40) = 0;
      do
      {
        v11 = _mm_loadh_ps((const double *)((char *)self + 4 * v9 + 8));
        v12 = _mm_loadh_ps((const double *)((char *)self + 4 * v9 + 40));
        v13 = _mm_loadh_ps((const double *)((char *)self + 4 * v9 + 24));
        v14 = _mm_loadh_ps((const double *)((char *)self + 4 * v9 + 56));
        v15 = _mm_shuffle_ps(v12, v14, 136);
        v16 = _mm_shuffle_ps(v12, v14, 221);
        v17 = _mm_shuffle_ps(v11, v13, 136);
        v18 = _mm_shuffle_ps(v11, v13, 221);
        v19 = _mm_loadh_ps((const double *)&a2[v9 / 4 + 2]);
        v20 = _mm_shuffle_ps(v17, v15, 136);
        ++v10;
        v9 += 16;
        v21 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v15, 221), v19), v38);
        v40 = _mm_add_ps(_mm_mul_ps(v20, v19), v40);
        v38 = v21;
        v22 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v16, 136), v19), v39);
        v7 = _mm_add_ps(v7, _mm_mul_ps(_mm_shuffle_ps(v18, v16, 221), v19));
        v39 = v22;
      }
      while ( (unsigned int)(uintptr_t)(a3) >> 2 > v10 );
      v23 = _mm_hadd_ps(v22, v22);
      v24 = _mm_hadd_ps(v7, v7);
      v25 = _mm_hadd_ps(v21, v21);
      v26 = _mm_hadd_ps(v40, v40);
      v6 = &a2[4 * ((unsigned int)(uintptr_t)(a3) >> 2)];
      v4 = (const float *)((char *)a3 - (char *)v37);
      v5 = (float *)((char *)self + 64 * ((unsigned int)(uintptr_t)(a3) >> 2));
      v27 = _mm_hadd_ps(v24, v24);
      v28 = _mm_hadd_ps(v25, v25);
      v29 = _mm_hadd_ps(v23, v23);
      v30 = _mm_hadd_ps(v26, v26);
      if ( a3 == v37 )
        goto LABEL_9;
    }
    else
    {
g4_m128_raw(v27) = 0;
g4_m128_raw(v28) = 0;
g4_m128_raw(v29) = 0;
g4_m128_raw(v30) = 0;
    }
    do
    {
      v31 = *v6;
      v4 = (const float *)((char *)v4 - 1);
      ++v6;
g4_m128_lane<float>(v30, 0) =g4_m128_lane<float>(v30, 0) + (float)(*v5 * v31);
g4_m128_lane<float>(v29, 0) =g4_m128_lane<float>(v29, 0) + (float)(v5[1] * v31);
      v32 = v5[2] * v31;
      v33 = v31 * v5[3];
      v5 += 4;
g4_m128_lane<float>(v28, 0) =g4_m128_lane<float>(v28, 0) + v32;
g4_m128_lane<float>(v27, 0) =g4_m128_lane<float>(v27, 0) + v33;
    }
    while ( v4 != nullptr );
LABEL_9:
g4_m128_lane<uint64_t>(v34, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v30, v29), 0);
g4_m128_lane<uint64_t>(v34, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v28, v27), 0);
    v8 = v34;
    goto LABEL_10;
  }
  if ( (unsigned int)(uintptr_t)(self) > a4 + 16 || a4 > (unsigned int)(uintptr_t)(self) + 16 )
  {
    v36 = _mm_loadh_ps((const double *)self + 1);
    _mm_storel_ps((double *)a4, v36);
    _mm_storeh_ps((double *)(a4 + 8), v36);
    return a4;
  }
  else
  {
    *(uint32_t *)a4 = *(uint32_t *)self;
    *(uint32_t *)(a4 + 4) = *((uint32_t *)self + 1);
    *(uint32_t *)(a4 + 8) = *((uint32_t *)self + 2);
    result = *((uint32_t *)self + 3);
    *(uint32_t *)(a4 + 12) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getBlendedValue  (binary VA: 0xdf0d10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getBlendedValue  (binary VA: 0xdf0d50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getBlendedValue  (binary VA: 0xdf0d90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getBlendedValue  (binary VA: 0xdf0dd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getBlendedValue  (binary VA: 0xdf0e10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 3, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getAddedValue  (binary VA: 0xdf0e50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getAddedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getAddedValue  (binary VA: 0xdf0e90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::getAddedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getAddedValue  (binary VA: 0xdf0ed0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::getAddedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getAddedValue  (binary VA: 0xdf0f10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::getAddedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getAddedValue  (binary VA: 0xdf0f50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::getAddedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 3, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           a3,
           a4,
           (unsigned int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getKeyBasedValue  (binary VA: 0xdf0f90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, -1, float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef float _g4_t_v20[2];
  typedef g4_int128_t _g4_t_v21[2];
  typedef uint8_t _g4_t_v22[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v20)) > _g4_s5 ? (32u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v21)) > _g4_s6 ? (40u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v22)) > _g4_s7 ? (72u + sizeof(_g4_t_v22)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);

  v20[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v20[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v19 = 8 * *(uint32_t *)(v6 + v8 + 32);
  v10 = *(uint16_t *)(v6 + v8 + 38);
  v17 = v19 + v7 + *(uint32_t *)(v7 + 4) + 4;
  v11 = *(uint32_t *)(v17 + 4);
  v16 = v10 * a3 + *(uint16_t *)(v9 + 28);
  v18 = (uint32_t *)(v16 + v17 + v11 + 4);
  v15 = (uint32_t *)((char *)v18 + v10);
  v12 = v7 + v16 + v19 + v11 + *(uint32_t *)(v7 + 4) + v10;
  v13 = v7 + v16 + v19 + v11 + *(uint32_t *)(v7 + 4);
  if ( (v12 + 24 < (unsigned int)(uintptr_t)(v21) || v12 + 8 > (unsigned int)(uintptr_t)(&v21[1]))
    && (v13 + 8 > (unsigned int)(uintptr_t)(v22) || v13 + 24 < (unsigned int)(uintptr_t)(&v21[1]))
    && (v13 + 8 > (unsigned int)(uintptr_t)(&v21[1]) || v13 + 24 < (unsigned int)(uintptr_t)(v21))
    && (v12 + 8 > (unsigned int)(uintptr_t)(v22) || v12 + 24 < (unsigned int)(uintptr_t)(&v21[1])) )
  {
    v21[0] = _mm_loadh_ps((const double *)(v13 + 16));
    v21[1] = _mm_loadh_ps((const double *)(v12 + 16));
  }
  else
  {
    LODWORD(v21[0]) = *v18;
    LODWORD(v21[1]) = *v15;
    DWORD1(v21[0]) = v18[1];
    DWORD1(v21[1]) = v15[1];
    DWORD2(v21[0]) = v18[2];
    DWORD2(v21[1]) = v15[2];
    HIDWORD(v21[0]) = v18[3];
    HIDWORD(v21[1]) = v15[3];
  }
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *)v21,
           v20,
           (const float *)((char *)&dword_0 + 2),
           (unsigned int)(uintptr_t)(a6));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::applyAddedValue  (binary VA: 0xdf1160)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::applyBlendedValue  (binary VA: 0xdf11d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::applyAddedValue  (binary VA: 0xdf1240)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::applyBlendedValue  (binary VA: 0xdf12b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::applyAddedValue  (binary VA: 0xdf1320)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::applyBlendedValue  (binary VA: 0xdf1390)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::applyAddedValue  (binary VA: 0xdf1400)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::applyBlendedValue  (binary VA: 0xdf1470)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::applyAddedValue  (binary VA: 0xdf14e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 3, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::applyBlendedValue  (binary VA: 0xdf1550)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 3, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[5];

  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    a2,
    a3,
    a4,
    (unsigned int)(uintptr_t)(v7));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::applyKeyBasedValue  (binary VA: 0xdf15c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, -1, float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6, glitch::collada::animation_track::CApplicatorInfo::Self *a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef float _g4_t_v21[2];
  typedef uint8_t _g4_t_v22[16];
  typedef g4_int128_t _g4_t_v23[2];
  typedef uint8_t _g4_t_v24[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v20)) > _g4_s4 ? (12u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v22)) > _g4_s6 ? (40u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v23)) > _g4_s7 ? (56u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v24)) > _g4_s8 ? (88u + sizeof(_g4_t_v24)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);

  v21[1] = a5;
  v7 = *(uint32_t *)a2;
  v8 = *((uint32_t *)a2 + 1);
  v9 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v21[0] = 1.0 - a5;
  v10 = v7 + v9 + 8;
  v20 = 8 * *(uint32_t *)(v7 + v9 + 32);
  v11 = *(uint16_t *)(v7 + v9 + 38);
  v18 = v20 + v8 + *(uint32_t *)(v8 + 4) + 4;
  v12 = *(uint32_t *)(v18 + 4);
  v17 = v11 * a3 + *(uint16_t *)(v10 + 28);
  v19 = (uint32_t *)(v17 + v18 + v12 + 4);
  v16 = (uint32_t *)((char *)v19 + v11);
  v13 = v8 + v17 + v20 + v12 + *(uint32_t *)(v8 + 4) + v11;
  v14 = v8 + v17 + v20 + v12 + *(uint32_t *)(v8 + 4);
  if ( (v13 + 24 < (unsigned int)(uintptr_t)(v23) || v13 + 8 > (unsigned int)(uintptr_t)(&v23[1]))
    && (v14 + 8 > (unsigned int)(uintptr_t)(v24) || v14 + 24 < (unsigned int)(uintptr_t)(&v23[1]))
    && (v14 + 8 > (unsigned int)(uintptr_t)(&v23[1]) || v14 + 24 < (unsigned int)(uintptr_t)(v23))
    && (v13 + 8 > (unsigned int)(uintptr_t)(v24) || v13 + 24 < (unsigned int)(uintptr_t)(&v23[1])) )
  {
    v23[0] = _mm_loadh_ps((const double *)(v14 + 16));
    v23[1] = _mm_loadh_ps((const double *)(v13 + 16));
  }
  else
  {
    LODWORD(v23[0]) = *v19;
    LODWORD(v23[1]) = *v16;
    DWORD1(v23[0]) = v19[1];
    DWORD1(v23[1]) = v16[1];
    DWORD2(v23[0]) = v19[2];
    DWORD2(v23[1]) = v16[2];
    HIDWORD(v23[0]) = v19[3];
    HIDWORD(v23[1]) = v16[3];
  }
  glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *)v23,
    v21,
    (const float *)((char *)&dword_0 + 2),
    (unsigned int)(uintptr_t)(v22));
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
           a6,
           *((uint16_t *)a7 + 4),
           0,
           v22);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getAdditiveValue  (binary VA: 0xdf17b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 3, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           (unsigned int)(uintptr_t)(a3));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getAdditiveValue  (binary VA: 0xdf1800)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           (unsigned int)(uintptr_t)(a3));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getAdditiveValue  (binary VA: 0xdf1850)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           (unsigned int)(uintptr_t)(a3));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getAdditiveValue  (binary VA: 0xdf18a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           (unsigned int)(uintptr_t)(a3));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getAdditiveValue  (binary VA: 0xdf18f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
unsigned int glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 4, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_4_collada_animatio_2fdae8::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           (unsigned int)(uintptr_t)(a3));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx  (binary VA: 0xdf1940)
// Original: glitch::collada::animation_track::CBlender<float,3,glitch::collada::animation_track::SUseDefaultBlender>::getBlendedValueEx
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *self, float *a2, const float *a3, float *a4)
{
  const float *v4;
  float *result;
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm0_4

  v4 = a3;
  result = (float *)self;
  if ( a3 == (const float *)((char *)&dword_0 + 1) )
  {
    *a4 = *(float *)self;
    a4[1] = *((float *)self + 1);
    result = *((float **)self + 2);
    *((uint32_t *)a4 + 2) = (uint32_t)(uintptr_t)(result);
  }
  else
  {
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    if ( a3 != nullptr )
    {
      do
      {
        v10 = *a2;
        v4 = (const float *)((char *)v4 - 1);
        ++a2;
        v9 = v9 + (float)(*result * v10);
        v11 = result[1] * v10;
        v12 = v10 * result[2];
        result += 3;
        v8 = v8 + v11;
        v7 = v7 + v12;
      }
      while ( v4 != nullptr );
    }
    *a4 = v9;
    a4[1] = v8;
    a4[2] = v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getBlendedValue  (binary VA: 0xdf19d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getBlendedValue  (binary VA: 0xdf1a10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getBlendedValue  (binary VA: 0xdf1a50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getBlendedValue  (binary VA: 0xdf1a90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getBlendedValue  (binary VA: 0xdf1ad0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getBlendedValue  (binary VA: 0xdf1b10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getBlendedValue  (binary VA: 0xdf1b50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getBlendedValue  (binary VA: 0xdf1b90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getBlendedValue  (binary VA: 0xdf1bd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getBlendedValue  (binary VA: 0xdf1c10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getBlendedValue  (binary VA: 0xdf1c50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getBlendedValue  (binary VA: 0xdf1c90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getBlendedValue  (binary VA: 0xdf1cd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getBlendedValue  (binary VA: 0xdf1d10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getBlendedValue  (binary VA: 0xdf1d50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getBlendedValue  (binary VA: 0xdf1d90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getBlendedValue  (binary VA: 0xdf1dd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getBlendedValue  (binary VA: 0xdf1e10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getBlendedValue  (binary VA: 0xdf1e50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getBlendedValue  (binary VA: 0xdf1e90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getBlendedValue  (binary VA: 0xdf1ed0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getBlendedValue  (binary VA: 0xdf1f10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getBlendedValue  (binary VA: 0xdf1f50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getBlendedValue  (binary VA: 0xdf1f90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getBlendedValue  (binary VA: 0xdf1fd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getBlendedValue  (binary VA: 0xdf2010)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getBlendedValue  (binary VA: 0xdf2050)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getBlendedValue  (binary VA: 0xdf2090)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getBlendedValue  (binary VA: 0xdf20d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getBlendedValue  (binary VA: 0xdf2110)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getAddedValue  (binary VA: 0xdf2150)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getAddedValue  (binary VA: 0xdf2190)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getAddedValue  (binary VA: 0xdf21d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getAddedValue  (binary VA: 0xdf2210)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getAddedValue  (binary VA: 0xdf2250)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getAddedValue  (binary VA: 0xdf2290)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getAddedValue  (binary VA: 0xdf22d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getAddedValue  (binary VA: 0xdf2310)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getAddedValue  (binary VA: 0xdf2350)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getAddedValue  (binary VA: 0xdf2390)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getAddedValue  (binary VA: 0xdf23d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getAddedValue  (binary VA: 0xdf2410)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getAddedValue  (binary VA: 0xdf2450)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getAddedValue  (binary VA: 0xdf2490)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getAddedValue  (binary VA: 0xdf24d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getAddedValue  (binary VA: 0xdf2510)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getAddedValue  (binary VA: 0xdf2550)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getAddedValue  (binary VA: 0xdf2590)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getAddedValue  (binary VA: 0xdf25d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getAddedValue  (binary VA: 0xdf2610)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getAddedValue  (binary VA: 0xdf2650)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getAddedValue  (binary VA: 0xdf2690)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getAddedValue  (binary VA: 0xdf26d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getAddedValue  (binary VA: 0xdf2710)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getAddedValue  (binary VA: 0xdf2750)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getAddedValue  (binary VA: 0xdf2790)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getAddedValue  (binary VA: 0xdf27d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getAddedValue  (binary VA: 0xdf2810)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getAddedValue  (binary VA: 0xdf2850)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getAddedValue  (binary VA: 0xdf2890)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getAddedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::applyBlendedValue  (binary VA: 0xdf28d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, int *a5)
{
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v6 = 0;
  v7 = 0;
  v8 = 0;
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)&v6);
  *a5 = v6;
  a5[1] = v7;
  result = v8;
  a5[2] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::applyAddedValue  (binary VA: 0xdf2940)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, int *a5)
{
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v6 = 0;
  v7 = 0;
  v8 = 0;
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)&v6);
  *a5 = v6;
  a5[1] = v7;
  result = v8;
  a5[2] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::applyBlendedValue  (binary VA: 0xdf29b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, int *a5)
{
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v6 = 0;
  v7 = 0;
  v8 = 0;
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)&v6);
  *a5 = v6;
  a5[1] = v7;
  result = v8;
  a5[2] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::applyAddedValue  (binary VA: 0xdf2a20)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, int *a5)
{
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v6 = 0;
  v7 = 0;
  v8 = 0;
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)&v6);
  *a5 = v6;
  a5[1] = v7;
  result = v8;
  a5[2] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::applyBlendedValue  (binary VA: 0xdf2a90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, int *a5)
{
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v6 = 0;
  v7 = 0;
  v8 = 0;
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)&v6);
  *a5 = v6;
  a5[1] = v7;
  result = v8;
  a5[2] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::applyAddedValue  (binary VA: 0xdf2b00)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, int *a5)
{
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v6 = 0;
  v7 = 0;
  v8 = 0;
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)&v6);
  *a5 = v6;
  a5[1] = v7;
  result = v8;
  a5[2] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::applyBlendedValue  (binary VA: 0xdf2b70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, int *a5)
{
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v6 = 0;
  v7 = 0;
  v8 = 0;
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)&v6);
  *a5 = v6;
  a5[1] = v7;
  result = v8;
  a5[2] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::applyAddedValue  (binary VA: 0xdf2be0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, int *a5)
{
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v6 = 0;
  v7 = 0;
  v8 = 0;
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)&v6);
  *a5 = v6;
  a5[1] = v7;
  result = v8;
  a5[2] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::applyBlendedValue  (binary VA: 0xdf2c50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::applyAddedValue  (binary VA: 0xdf2cd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::applyBlendedValue  (binary VA: 0xdf2d50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::applyAddedValue  (binary VA: 0xdf2dd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::applyBlendedValue  (binary VA: 0xdf2e50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::applyAddedValue  (binary VA: 0xdf2ed0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::applyBlendedValue  (binary VA: 0xdf2f50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::applyAddedValue  (binary VA: 0xdf2fd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::applyBlendedValue  (binary VA: 0xdf3050)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::applyAddedValue  (binary VA: 0xdf30d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::applyBlendedValue  (binary VA: 0xdf3150)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::applyAddedValue  (binary VA: 0xdf31d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::applyBlendedValue  (binary VA: 0xdf3250)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::applyAddedValue  (binary VA: 0xdf32d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::applyBlendedValue  (binary VA: 0xdf3350)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::applyAddedValue  (binary VA: 0xdf33d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::applyBlendedValue  (binary VA: 0xdf3450)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::applyAddedValue  (binary VA: 0xdf34d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::applyBlendedValue  (binary VA: 0xdf3550)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::applyAddedValue  (binary VA: 0xdf35d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::applyBlendedValue  (binary VA: 0xdf3650)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::applyAddedValue  (binary VA: 0xdf36d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::applyBlendedValue  (binary VA: 0xdf3750)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::applyAddedValue  (binary VA: 0xdf37d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 168, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::applyBlendedValue  (binary VA: 0xdf3850)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::applyAddedValue  (binary VA: 0xdf38d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::applyBlendedValue  (binary VA: 0xdf3950)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::applyAddedValue  (binary VA: 0xdf39d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::applyBlendedValue  (binary VA: 0xdf3a50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::applyAddedValue  (binary VA: 0xdf3ad0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::applyBlendedValue  (binary VA: 0xdf3b50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::applyAddedValue  (binary VA: 0xdf3bd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::applyBlendedValue  (binary VA: 0xdf3c50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::applyAddedValue  (binary VA: 0xdf3cd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::applyBlendedValue  (binary VA: 0xdf3d50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::applyAddedValue  (binary VA: 0xdf3dd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::applyBlendedValue  (binary VA: 0xdf3e50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::applyAddedValue  (binary VA: 0xdf3ed0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::applyBlendedValue  (binary VA: 0xdf3f50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::applyAddedValue  (binary VA: 0xdf3fd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::applyBlendedValue  (binary VA: 0xdf4050)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::applyAddedValue  (binary VA: 0xdf40d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::applyBlendedValue  (binary VA: 0xdf4150)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::applyAddedValue  (binary VA: 0xdf41d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::applyBlendedValue  (binary VA: 0xdf4250)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::applyAddedValue  (binary VA: 0xdf42d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::applyBlendedValue  (binary VA: 0xdf4350)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::applyAddedValue  (binary VA: 0xdf43d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  int v6[3];

  memset(v6, 0, sizeof(v6));
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v6);
  return G4_VCALL<int>(a5, 184, v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::applyKeyBasedValue  (binary VA: 0xdf4450)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  typedef float _g4_t_v15[2];
  typedef int _g4_t_v16[3];
  typedef uint32_t _g4_t_v17[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v17)) > _g4_s2 ? (20u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);

  memset(v16, 0, sizeof(v16));
  v15[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = (uint32_t *)((char *)v12 + v11);
  v17[0] = *v12;
  v17[3] = *v13;
  v17[1] = v12[1];
  v17[4] = v13[1];
  v17[2] = v12[2];
  v17[5] = v13[2];
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v17,
    v15,
    (const float *)((char *)&dword_0 + 2),
    (float *)v16);
  return G4_VCALL<int>(a6, 184, v16);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getKeyBasedValue  (binary VA: 0xdf4530)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  typedef float _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  v15[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = (uint32_t *)((char *)v12 + v11);
  v16[0] = *v12;
  v16[3] = *v13;
  v16[1] = v12[1];
  v16[4] = v13[1];
  v16[2] = v12[2];
  v16[5] = v13[2];
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
           v15,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::applyKeyBasedValue  (binary VA: 0xdf45f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  typedef float _g4_t_v15[2];
  typedef int _g4_t_v16[3];
  typedef uint32_t _g4_t_v17[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v17)) > _g4_s2 ? (20u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);

  memset(v16, 0, sizeof(v16));
  v15[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = (uint32_t *)((char *)v12 + v11);
  v17[0] = *v12;
  v17[3] = *v13;
  v17[1] = v12[1];
  v17[4] = v13[1];
  v17[2] = v12[2];
  v17[5] = v13[2];
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v17,
    v15,
    (const float *)((char *)&dword_0 + 2),
    (float *)v16);
  return G4_VCALL<int>(a6, 168, v16);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getKeyBasedValue  (binary VA: 0xdf46d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  typedef float _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  v15[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = (uint32_t *)((char *)v12 + v11);
  v16[0] = *v12;
  v16[3] = *v13;
  v16[1] = v12[1];
  v16[4] = v13[1];
  v16[2] = v12[2];
  v16[5] = v13[2];
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
           v15,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::applyKeyBasedValue  (binary VA: 0xdf4790)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int result;
  typedef float _g4_t_v15[2];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v15[1] = a5;
  v8 = *(uint32_t *)(v6 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = (uint32_t *)((char *)v12 + v11);
  v19[0] = *v12;
  v19[3] = *v13;
  v19[1] = v12[1];
  v19[4] = v13[1];
  v19[2] = v12[2];
  v19[5] = v13[2];
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v19,
    v15,
    (const float *)((char *)&dword_0 + 2),
    (float *)&v16);
  *a6 = v16;
  a6[1] = v17;
  result = v18;
  a6[2] = v18;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getKeyBasedValue  (binary VA: 0xdf4880)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  typedef float _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  v15[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = (uint32_t *)((char *)v12 + v11);
  v16[0] = *v12;
  v16[3] = *v13;
  v16[1] = v12[1];
  v16[4] = v13[1];
  v16[2] = v12[2];
  v16[5] = v13[2];
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
           v15,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getKeyBasedValue  (binary VA: 0xdf4940)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  typedef float _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  v15[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v13 = (uint32_t *)((char *)v12 + v11);
  v16[0] = *v12;
  v16[3] = *v13;
  v16[1] = v12[1];
  v16[4] = v13[1];
  v16[2] = v12[2];
  v16[5] = v13[2];
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
           v15,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::applyAddedValue  (binary VA: 0xdf4a00)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[4];

  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v7);
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_float_de67e0(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::applyBlendedValue  (binary VA: 0xdf4a70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[4];

  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v7);
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_float_de67e0(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::applyAddedValue  (binary VA: 0xdf4ae0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[4];

  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v7);
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_float_de67e0(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::applyBlendedValue  (binary VA: 0xdf4b50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[4];

  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v7);
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_float_de67e0(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::applyKeyBasedValue  (binary VA: 0xdf4bc0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6, glitch::collada::animation_track::CApplicatorInfo::Self *a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  typedef float _g4_t_v16[2];
  typedef float _g4_t_v17[3];
  typedef uint32_t _g4_t_v18[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);

  v16[1] = a5;
  v7 = *(uint32_t *)a2;
  v8 = *((uint32_t *)a2 + 1);
  v9 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v16[0] = 1.0 - a5;
  v10 = v7 + v9 + 8;
  v11 = v8 + *(uint32_t *)(v8 + 4) + 4 + 8 * *(uint32_t *)(v10 + 24);
  v12 = *(uint16_t *)(v10 + 30);
  v13 = (uint32_t *)(*(uint32_t *)(v11 + 4) + v11 + v12 * a3 + *(uint16_t *)(v10 + 28) + 4);
  v14 = (uint32_t *)((char *)v13 + v12);
  v18[0] = *v13;
  v18[3] = *v14;
  v18[1] = v13[1];
  v18[4] = v14[1];
  v18[2] = v13[2];
  v18[5] = v14[2];
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v18,
    v16,
    (const float *)((char *)&dword_0 + 2),
    v17);
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_float_de67e0(
           a6,
           *((uint16_t *)a7 + 4),
           0,
           v17);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getAdditiveValue  (binary VA: 0xdf4ca0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getKeyBasedValue  (binary VA: 0xdf4cf0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  char *v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef float _g4_t_v22[2];
  typedef float _g4_t_v23[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v20 = (int *)(*(uint32_t *)a2 + 28);
  v8 = *v20;
  if ( *v20 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v22[0] = 1.0 - a5;
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = nullptr;
  if ( v8 != 0 )
    v12 = (char *)v20 + v8;
  v13 = nullptr;
  v14 = *((uint32_t *)v12 + 2);
  v22[1] = a5;
  v15 = (int)(uintptr_t)(&v12[v14 + 8]);
  if ( v14 != 0 )
    v13 = (float *)v15;
  v18 = v7;
  v19 = *((uint32_t *)a2 + 1);
  v21 = (char *)sub_D8C1A0(v7, v19, a3);
  v16 = (char *)sub_D8C1A0(v18, v19, a4);
  v23[0] = (float)((float)*v21 * *v9) + *v13;
  v23[3] = (float)((float)*v16 * *v9) + *v13;
  v23[1] = (float)((float)v21[1] * v9[1]) + v13[1];
  v23[4] = (float)((float)v16[1] * v9[1]) + v13[1];
  v23[2] = (float)((float)v21[2] * v9[2]) + v13[2];
  v23[5] = (float)((float)v16[2] * v9[2]) + v13[2];
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v23,
           v22,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getKeyBasedValue  (binary VA: 0xdf4e60)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  char *v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef float _g4_t_v22[2];
  typedef float _g4_t_v23[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v20 = (int *)(*(uint32_t *)a2 + 28);
  v8 = *v20;
  if ( *v20 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v22[0] = 1.0 - a5;
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = nullptr;
  if ( v8 != 0 )
    v12 = (char *)v20 + v8;
  v13 = nullptr;
  v14 = *((uint32_t *)v12 + 2);
  v22[1] = a5;
  v15 = (int)(uintptr_t)(&v12[v14 + 8]);
  if ( v14 != 0 )
    v13 = (float *)v15;
  v18 = v7;
  v19 = *((uint32_t *)a2 + 1);
  v21 = (char *)sub_D8C1A0(v7, v19, a3);
  v16 = (char *)sub_D8C1A0(v18, v19, a4);
  v23[0] = (float)((float)*v21 * *v9) + *v13;
  v23[3] = (float)((float)*v16 * *v9) + *v13;
  v23[1] = (float)((float)v21[1] * v9[1]) + v13[1];
  v23[4] = (float)((float)v16[1] * v9[1]) + v13[1];
  v23[2] = (float)((float)v21[2] * v9[2]) + v13[2];
  v23[5] = (float)((float)v16[2] * v9[2]) + v13[2];
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v23,
           v22,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getKeyBasedValue  (binary VA: 0xdf4fd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  char *v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int16_t *_g4_t_v21;
  typedef float _g4_t_v22[2];
  typedef float _g4_t_v23[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v20 = (int *)(*(uint32_t *)a2 + 28);
  v8 = *v20;
  if ( *v20 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v22[0] = 1.0 - a5;
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = nullptr;
  if ( v8 != 0 )
    v12 = (char *)v20 + v8;
  v13 = nullptr;
  v14 = *((uint32_t *)v12 + 2);
  v22[1] = a5;
  v15 = (int)(uintptr_t)(&v12[v14 + 8]);
  if ( v14 != 0 )
    v13 = (float *)v15;
  v18 = v7;
  v19 = *((uint32_t *)a2 + 1);
  v21 = (int16_t *)sub_D8C1A0(v7, v19, a3);
  v16 = (int16_t *)sub_D8C1A0(v18, v19, a4);
  v23[0] = (float)((float)*v21 * *v9) + *v13;
  v23[3] = (float)((float)*v16 * *v9) + *v13;
  v23[1] = (float)((float)v21[1] * v9[1]) + v13[1];
  v23[4] = (float)((float)v16[1] * v9[1]) + v13[1];
  v23[2] = (float)((float)v21[2] * v9[2]) + v13[2];
  v23[5] = (float)((float)v16[2] * v9[2]) + v13[2];
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v23,
           v22,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getKeyBasedValue  (binary VA: 0xdf5140)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  char *v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int16_t *_g4_t_v21;
  typedef float _g4_t_v22[2];
  typedef float _g4_t_v23[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v6 = 0;
  v7 = *(uint32_t *)a2;
  v20 = (int *)(*(uint32_t *)a2 + 28);
  v8 = *v20;
  if ( *v20 != 0 )
    v6 = v8 + v7 + 28;
  v9 = nullptr;
  v10 = *(uint32_t *)(v6 + 4);
  v22[0] = 1.0 - a5;
  v11 = v6 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = nullptr;
  if ( v8 != 0 )
    v12 = (char *)v20 + v8;
  v13 = nullptr;
  v14 = *((uint32_t *)v12 + 2);
  v22[1] = a5;
  v15 = (int)(uintptr_t)(&v12[v14 + 8]);
  if ( v14 != 0 )
    v13 = (float *)v15;
  v18 = v7;
  v19 = *((uint32_t *)a2 + 1);
  v21 = (int16_t *)sub_D8C1A0(v7, v19, a3);
  v16 = (int16_t *)sub_D8C1A0(v18, v19, a4);
  v23[0] = (float)((float)*v21 * *v9) + *v13;
  v23[3] = (float)((float)*v16 * *v9) + *v13;
  v23[1] = (float)((float)v21[1] * v9[1]) + v13[1];
  v23[4] = (float)((float)v16[1] * v9[1]) + v13[1];
  v23[2] = (float)((float)v21[2] * v9[2]) + v13[2];
  v23[5] = (float)((float)v16[2] * v9[2]) + v13[2];
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v23,
           v22,
           (const float *)((char *)&dword_0 + 2),
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::applyKeyBasedValue  (binary VA: 0xdf52b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef float _g4_t_v22[2];
  typedef int _g4_t_v23[3];
  typedef float _g4_t_v24[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v24)) > _g4_s6 ? (52u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);

  memset(v23, 0, sizeof(v23));
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v20 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v20;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v22[0] = 1.0 - a5;
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v20;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v22[1] = a5;
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v18 = v6;
  v19 = *((uint32_t *)a2 + 1);
  v21 = (char *)sub_D8C1A0(v6, v19, a3);
  v16 = (char *)sub_D8C1A0(v18, v19, a4);
  v24[0] = (float)((float)*v21 * *v9) + *v13;
  v24[3] = (float)((float)*v16 * *v9) + *v13;
  v24[1] = (float)((float)v21[1] * v9[1]) + v13[1];
  v24[4] = (float)((float)v16[1] * v9[1]) + v13[1];
  v24[2] = (float)((float)v21[2] * v9[2]) + v13[2];
  v24[5] = (float)((float)v16[2] * v9[2]) + v13[2];
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v24,
    v22,
    (const float *)((char *)&dword_0 + 2),
    (float *)v23);
  return G4_VCALL<int>(a6, 168, v23);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::applyKeyBasedValue  (binary VA: 0xdf5450)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int16_t *_g4_t_v21;
  typedef float _g4_t_v22[2];
  typedef int _g4_t_v23[3];
  typedef float _g4_t_v24[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v24)) > _g4_s6 ? (52u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);

  memset(v23, 0, sizeof(v23));
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v20 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v20;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v22[0] = 1.0 - a5;
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v20;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v22[1] = a5;
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v18 = v6;
  v19 = *((uint32_t *)a2 + 1);
  v21 = (int16_t *)sub_D8C1A0(v6, v19, a3);
  v16 = (int16_t *)sub_D8C1A0(v18, v19, a4);
  v24[0] = (float)((float)*v21 * *v9) + *v13;
  v24[3] = (float)((float)*v16 * *v9) + *v13;
  v24[1] = (float)((float)v21[1] * v9[1]) + v13[1];
  v24[4] = (float)((float)v16[1] * v9[1]) + v13[1];
  v24[2] = (float)((float)v21[2] * v9[2]) + v13[2];
  v24[5] = (float)((float)v16[2] * v9[2]) + v13[2];
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v24,
    v22,
    (const float *)((char *)&dword_0 + 2),
    (float *)v23);
  return G4_VCALL<int>(a6, 184, v23);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::applyKeyBasedValue  (binary VA: 0xdf55f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  char *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef float _g4_t_v22[2];
  typedef int _g4_t_v23[3];
  typedef float _g4_t_v24[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v24)) > _g4_s6 ? (52u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);

  memset(v23, 0, sizeof(v23));
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v20 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v20;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v22[0] = 1.0 - a5;
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v20;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v22[1] = a5;
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v18 = v6;
  v19 = *((uint32_t *)a2 + 1);
  v21 = (char *)sub_D8C1A0(v6, v19, a3);
  v16 = (char *)sub_D8C1A0(v18, v19, a4);
  v24[0] = (float)((float)*v21 * *v9) + *v13;
  v24[3] = (float)((float)*v16 * *v9) + *v13;
  v24[1] = (float)((float)v21[1] * v9[1]) + v13[1];
  v24[4] = (float)((float)v16[1] * v9[1]) + v13[1];
  v24[2] = (float)((float)v21[2] * v9[2]) + v13[2];
  v24[5] = (float)((float)v16[2] * v9[2]) + v13[2];
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v24,
    v22,
    (const float *)((char *)&dword_0 + 2),
    (float *)v23);
  return G4_VCALL<int>(a6, 184, v23);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::applyKeyBasedValue  (binary VA: 0xdf5790)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  float *v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int16_t *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int16_t *_g4_t_v21;
  typedef float _g4_t_v22[2];
  typedef int _g4_t_v23[3];
  typedef float _g4_t_v24[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v24)) > _g4_s6 ? (52u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);

  memset(v23, 0, sizeof(v23));
  v6 = *(uint32_t *)a2;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 28);
  v20 = *(uint32_t *)a2 + 28;
  v8 = 0;
  if ( v7 != 0 )
    v8 = v7 + v20;
  v9 = nullptr;
  v10 = *(uint32_t *)(v8 + 4);
  v22[0] = 1.0 - a5;
  v11 = v8 + v10 + 4;
  if ( v10 != 0 )
    v9 = (float *)v11;
  v12 = 0;
  if ( v7 != 0 )
    v12 = v7 + v20;
  v13 = nullptr;
  v14 = *(uint32_t *)(v12 + 8);
  v22[1] = a5;
  v15 = v12 + v14 + 8;
  if ( v14 != 0 )
    v13 = (float *)v15;
  v18 = v6;
  v19 = *((uint32_t *)a2 + 1);
  v21 = (int16_t *)sub_D8C1A0(v6, v19, a3);
  v16 = (int16_t *)sub_D8C1A0(v18, v19, a4);
  v24[0] = (float)((float)*v21 * *v9) + *v13;
  v24[3] = (float)((float)*v16 * *v9) + *v13;
  v24[1] = (float)((float)v21[1] * v9[1]) + v13[1];
  v24[4] = (float)((float)v16[1] * v9[1]) + v13[1];
  v24[2] = (float)((float)v21[2] * v9[2]) + v13[2];
  v24[5] = (float)((float)v16[2] * v9[2]) + v13[2];
  glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *)v24,
    v22,
    (const float *)((char *)&dword_0 + 2),
    (float *)v23);
  return G4_VCALL<int>(a6, 168, v23);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getAdditiveValue  (binary VA: 0xdf5930)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getAdditiveValue  (binary VA: 0xdf5980)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getAdditiveValue  (binary VA: 0xdf59d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getAdditiveValue  (binary VA: 0xdf5a20)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getAdditiveValue  (binary VA: 0xdf5a70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getAdditiveValue  (binary VA: 0xdf5ac0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getAdditiveValue  (binary VA: 0xdf5b10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getAdditiveValue  (binary VA: 0xdf5b60)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getAdditiveValue  (binary VA: 0xdf5bb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getAdditiveValue  (binary VA: 0xdf5c00)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getAdditiveValue  (binary VA: 0xdf5c50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getAdditiveValue  (binary VA: 0xdf5ca0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getAdditiveValue  (binary VA: 0xdf5cf0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getAdditiveValue  (binary VA: 0xdf5d40)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getAdditiveValue  (binary VA: 0xdf5d90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getAdditiveValue  (binary VA: 0xdf5de0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getAdditiveValue  (binary VA: 0xdf5e30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getAdditiveValue  (binary VA: 0xdf5e80)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getAdditiveValue  (binary VA: 0xdf5ed0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getAdditiveValue  (binary VA: 0xdf5f20)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getAdditiveValue  (binary VA: 0xdf5f70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getAdditiveValue  (binary VA: 0xdf5fc0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getAdditiveValue  (binary VA: 0xdf6010)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getAdditiveValue  (binary VA: 0xdf6060)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getAdditiveValue  (binary VA: 0xdf60b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getAdditiveValue  (binary VA: 0xdf6100)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getAdditiveValue  (binary VA: 0xdf6150)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getAdditiveValue  (binary VA: 0xdf61a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getAdditiveValue  (binary VA: 0xdf61f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v4[5];

  v4[0] = -1.0;
  v4[1] = 1.0;
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getBlendedValueEx(
           a2,
           v4,
           (const float *)((char *)&dword_0 + 2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx  (binary VA: 0xdf6240)
// Original: glitch::collada::animation_track::CBlender<float,3,glitch::collada::animation_track::SUseDefaultBlender>::getDeltaValueEx
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *self, const void *a2, float *a3)
{
  glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *result;
  float v4; // xmm1_4
  float v5; // xmm0_4

  result = self;
  v4 = *(float *)self - *((float *)self + 3);
  *a3 = v4;
  v5 = *((float *)self + 1) - *((float *)self + 4);
  a3[1] = v5;
  a3[2] = *((float *)self + 2) - *((float *)self + 5);
  if ( a2 == &loc_4 )
  {
    *a3 = (float)(*((float *)self + 6) - *((float *)self + 9)) + v4;
    a3[1] = (float)(*((float *)self + 7) - *((float *)self + 10)) + v5;
    a3[2] = (float)(*((float *)self + 8) + a3[2]) - *((float *)self + 11);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getDeltaValue  (binary VA: 0xdf62c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getDeltaValue  (binary VA: 0xdf6300)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getDeltaValue  (binary VA: 0xdf6340)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getDeltaValue  (binary VA: 0xdf6380)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getDeltaValue  (binary VA: 0xdf63c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getDeltaValue  (binary VA: 0xdf6400)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getDeltaValue  (binary VA: 0xdf6440)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getDeltaValue  (binary VA: 0xdf6480)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getDeltaValue  (binary VA: 0xdf64c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getDeltaValue  (binary VA: 0xdf6500)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getDeltaValue  (binary VA: 0xdf6540)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getDeltaValue  (binary VA: 0xdf6580)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getDeltaValue  (binary VA: 0xdf65c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getDeltaValue  (binary VA: 0xdf6600)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getDeltaValue  (binary VA: 0xdf6640)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getDeltaValue  (binary VA: 0xdf6680)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getDeltaValue  (binary VA: 0xdf66c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getDeltaValue  (binary VA: 0xdf6700)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getDeltaValue  (binary VA: 0xdf6740)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getDeltaValue  (binary VA: 0xdf6780)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getDeltaValue  (binary VA: 0xdf67c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getDeltaValue  (binary VA: 0xdf6800)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getDeltaValue  (binary VA: 0xdf6840)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getDeltaValue  (binary VA: 0xdf6880)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getDeltaValue  (binary VA: 0xdf68c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getDeltaValue  (binary VA: 0xdf6900)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getDeltaValue  (binary VA: 0xdf6940)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>, 1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getDeltaValue  (binary VA: 0xdf6980)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>, 2, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getDeltaValue  (binary VA: 0xdf69c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getDeltaValue  (binary VA: 0xdf6a00)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getDeltaValue
// ----------------------------------------------------------------------------
glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getDeltaValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, 0, float>>> *self, glitch::collada::animation_track::CBlender<float, 3, glitch::collada::animation_track::SUseDefaultBlender> *a2, void *a3, float *a4)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getDeltaValueEx(
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx  (binary VA: 0xdf6a40)
// Original: glitch::collada::animation_track::CBlender<float,3,glitch::collada::animation_track::SUseDefaultBlender>::getHandledValueEx
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(float *a1, int a2, uint8_t a3, float *a4)
{
  float *result;
  int v5;
  int v6;

  result = a1;
  if ( a2 != 2 )
  {
    if ( (a3 & 3) != 0 )
    {
      if ( (a3 & 3) == 1 )
        *a4 = (float)((float)(a1[6] + *a1) - a1[9]) - a1[3];
    }
    else
    {
      *a4 = a1[6];
    }
    if ( (((int)a3 >> 2) & 3) != 0 )
    {
      if ( (((int)a3 >> 2) & 3) == 1 )
      {
        v5 = ((int)a3 >> 4) & 3;
        a4[1] = (float)((float)(a1[7] + a1[1]) - a1[10]) - a1[4];
        if ( v5 == 0 )
          goto LABEL_8;
LABEL_12:
        if ( v5 == 1 )
          a4[2] = (float)((float)(a1[8] + a1[2]) - a1[5]) - a1[11];
        return result;
      }
    }
    else
    {
      a4[1] = a1[7];
    }
    v5 = ((int)a3 >> 4) & 3;
    if ( v5 == 0 )
    {
LABEL_8:
      result = *((float **)a1 + 8);
      *((uint32_t *)a4 + 2) = (uint32_t)(uintptr_t)(result);
      return result;
    }
    goto LABEL_12;
  }
  if ( (a3 & 3) != 0 )
  {
    if ( (a3 & 3) == 1 )
      *a4 = *a1 - a1[3];
  }
  else
  {
    *a4 = *a1;
  }
  if ( (((int)a3 >> 2) & 3) != 0 )
  {
    if ( (((int)a3 >> 2) & 3) == 1 )
      a4[1] = a1[1] - a1[4];
  }
  else
  {
    a4[1] = a1[1];
  }
  v6 = ((int)a3 >> 4) & 3;
  if ( v6 != 0 )
  {
    if ( v6 == 1 )
      a4[2] = a1[2] - a1[5];
  }
  else
  {
    result = *((float **)a1 + 2);
    *((uint32_t *)a4 + 2) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getHandledValue  (binary VA: 0xdf6b90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getHandledValue  (binary VA: 0xdf6bd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getHandledValue  (binary VA: 0xdf6c10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getHandledValue  (binary VA: 0xdf6c50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getHandledValue  (binary VA: 0xdf6c90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getHandledValue  (binary VA: 0xdf6cd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getHandledValue  (binary VA: 0xdf6d10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getHandledValue  (binary VA: 0xdf6d50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getHandledValue  (binary VA: 0xdf6d90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getHandledValue  (binary VA: 0xdf6dd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getHandledValue  (binary VA: 0xdf6e10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getHandledValue  (binary VA: 0xdf6e50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getHandledValue  (binary VA: 0xdf6e90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getHandledValue  (binary VA: 0xdf6ed0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getHandledValue  (binary VA: 0xdf6f10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getHandledValue  (binary VA: 0xdf6f50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getHandledValue  (binary VA: 0xdf6f90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getHandledValue  (binary VA: 0xdf6fd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getHandledValue  (binary VA: 0xdf7010)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getHandledValue  (binary VA: 0xdf7050)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getHandledValue  (binary VA: 0xdf7090)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getHandledValue  (binary VA: 0xdf70d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getHandledValue  (binary VA: 0xdf7110)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getHandledValue  (binary VA: 0xdf7150)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getHandledValue  (binary VA: 0xdf7190)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getHandledValue  (binary VA: 0xdf71d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getHandledValue  (binary VA: 0xdf7210)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getHandledValue  (binary VA: 0xdf7250)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getHandledValue  (binary VA: 0xdf7290)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getHandledValue  (binary VA: 0xdf72d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getHandledValue
// ----------------------------------------------------------------------------
float * glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getHandledValue(int a1, float *a2, int a3, uint8_t a4, float *a5)
{
  return glitch::collada::animation_track::CBlender_float_3_collada_animatio_c99fee::getHandledValueEx(
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx  (binary VA: 0xdf7310)
// Original: glitch::collada::animation_track::CBlender<float,1,glitch::collada::animation_track::SUseDefaultBlender>::getBlendedValueEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *self, float *a2, const float *a3, float *a4)
{
  const float *v4;
  float v5; // xmm1_4
  float *v6;
  float *v7;
  unsigned int v8;
  unsigned int v9;
  float v10; // xmm0_4
  int v11;
  __m128 v12;
  __m128 *v13;
  const double *v14;
  unsigned int v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  const float *v19;
  float v20; // xmm0_4
  unsigned int v21;
  int v22;
  float *v23;
  char *v24;

  v4 = a3;
  if ( a3 != (const float *)((char *)&dword_0 + 1) )
  {
    v5 = 0.0;
    if ( a3 != nullptr )
    {
      v6 = (float *)self;
      v7 = a2;
      v8 = -((uint8_t)((uint8_t)(uintptr_t)(self) & 0xF) >> 2) & 3;
      if ( v8 > (unsigned int)(uintptr_t)(a3) )
        v8 = (unsigned int)(uintptr_t)(a3);
      if ( v8 == 0 )
      {
        v5 = 0.0;
        goto LABEL_9;
      }
      v9 = 0;
      v5 = 0.0;
      do
      {
        ++v9;
        v10 = *v6 * *v7;
        v4 = (const float *)((char *)v4 - 1);
        ++v6;
        ++v7;
        v5 = v5 + v10;
      }
      while ( v9 < v8 );
      if ( a3 != (const float *)v8 )
      {
LABEL_9:
        v24 = (char *)a3 - v8;
        v21 = ((unsigned int)(uintptr_t)(a3) - v8) >> 2;
        v22 = 4 * v21;
        if ( 4 * v21 == 0 )
          goto LABEL_13;
        v11 = v8;
g4_m128_raw(v12) = 0;
        v13 = (__m128 *)((char *)self + v11 * 4);
        v23 = v6;
        v14 = (const double *)&a2[v11];
        v15 = 0;
        do
        {
          ++v15;
          v16 = _mm_loadh_ps(v14 + 1);
          v14 += 2;
          v17 = _mm_mul_ps(v16, *v13++);
          v12 = _mm_add_ps(v12, v17);
        }
        while ( v15 < v21 );
        v18 = _mm_hadd_ps(v12, v12);
        v7 += 4 * v21;
        v6 = &v23[4 * v21];
        v4 = (const float *)((char *)v4 - v22);
        v5 = v5 +g4_m128_lane<float>(_mm_hadd_ps(v18, v18), 0);
        if ( v24 != (char *)v22 )
        {
LABEL_13:
          v19 = nullptr;
          do
          {
            v20 = v7[(uint32_t)(uintptr_t)(v19)] * v6[(uint32_t)(uintptr_t)(v19)];
            v19 = (const float *)((char *)v19 + 1);
            v5 = v5 + v20;
          }
          while ( v19 != v4 );
        }
      }
    }
    *a4 = v5;
    return;
  }
  *a4 = *(float *)self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::getBlendedValue  (binary VA: 0xdf7460)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::getBlendedValue  (binary VA: 0xdf74a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::getBlendedValue  (binary VA: 0xdf74e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::getBlendedValue  (binary VA: 0xdf7520)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::getBlendedValue  (binary VA: 0xdf7560)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::getBlendedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CLightIntensityMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getBlendedValue  (binary VA: 0xdf75a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getBlendedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CMixin<float, 1, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float, float>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::getAddedValue  (binary VA: 0xdf75e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::getAddedValue  (binary VA: 0xdf7620)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::getAddedValue  (binary VA: 0xdf7660)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::getAddedValue  (binary VA: 0xdf76a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::getAddedValue  (binary VA: 0xdf76e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::getAddedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CLightIntensityMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getAddedValue  (binary VA: 0xdf7720)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getAddedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CMixin<float, 1, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float, float>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, float *a5)
{
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::applyBlendedValue  (binary VA: 0xdf7760)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CLightIntensityMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint32_t *a5)
{
  float v6[4];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  a5[9] = LODWORD(v6[0]);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::applyAddedValue  (binary VA: 0xdf77b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CLightIntensityMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, uint32_t *a5)
{
  float v6[4];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  a5[9] = LODWORD(v6[0]);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::applyBlendedValue  (binary VA: 0xdf7800)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  float v6[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  return G4_VCALL<int>(a5, 340, LODWORD(v6[0]));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::applyAddedValue  (binary VA: 0xdf7860)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  float v6[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  return G4_VCALL<int>(a5, 340, LODWORD(v6[0]));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::applyBlendedValue  (binary VA: 0xdf78c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  float v6[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  return G4_VCALL<int>(a5, 336, LODWORD(v6[0]));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::applyAddedValue  (binary VA: 0xdf7920)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  float v6[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  return G4_VCALL<int>(a5, 336, LODWORD(v6[0]));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::applyBlendedValue  (binary VA: 0xdf7980)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  float v6[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  return G4_VCALL<int>(a5, 380, LODWORD(v6[0]));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::applyAddedValue  (binary VA: 0xdf79e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  float v6[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  return G4_VCALL<int>(a5, 380, LODWORD(v6[0]));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::applyBlendedValue  (binary VA: 0xdf7a40)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  float v6[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  return G4_VCALL<int>(a5, 348, LODWORD(v6[0]));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::applyAddedValue  (binary VA: 0xdf7aa0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, float *a4, void *a5)
{
  float v6[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    v6);
  return G4_VCALL<int>(a5, 348, LODWORD(v6[0]));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::applyKeyBasedValue  (binary VA: 0xdf7b00)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef int _g4_t_v14;
  typedef float _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[2];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v15[1] = a5;
  v8 = *(uint32_t *)(v6 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v16[0] = *v12;
  v16[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
    v15,
    (const float *)((char *)&dword_0 + 2),
    (float *)&v14);
  return G4_VCALL<int>(a6, 348, v14);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::getKeyBasedValue  (binary VA: 0xdf7bd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, void *a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef void *_g4_t_v13[2];
  typedef uint32_t _g4_t_v14[5];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  v13[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  *(float *)v13 = 1.0 - *(float *)&a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v14[0] = *v12;
  v14[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v14,
    (float *)v13,
    (const float *)((char *)&dword_0 + 2),
    a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::applyKeyBasedValue  (binary VA: 0xdf7c70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef int _g4_t_v14;
  typedef float _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[2];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v15[1] = a5;
  v8 = *(uint32_t *)(v6 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v16[0] = *v12;
  v16[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
    v15,
    (const float *)((char *)&dword_0 + 2),
    (float *)&v14);
  return G4_VCALL<int>(a6, 380, v14);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::getKeyBasedValue  (binary VA: 0xdf7d40)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, void *a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef void *_g4_t_v13[2];
  typedef uint32_t _g4_t_v14[5];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  v13[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  *(float *)v13 = 1.0 - *(float *)&a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v14[0] = *v12;
  v14[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v14,
    (float *)v13,
    (const float *)((char *)&dword_0 + 2),
    a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::applyKeyBasedValue  (binary VA: 0xdf7de0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef int _g4_t_v14;
  typedef float _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[2];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v15[1] = a5;
  v8 = *(uint32_t *)(v6 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v16[0] = *v12;
  v16[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
    v15,
    (const float *)((char *)&dword_0 + 2),
    (float *)&v14);
  return G4_VCALL<int>(a6, 336, v14);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::getKeyBasedValue  (binary VA: 0xdf7eb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, void *a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef void *_g4_t_v13[2];
  typedef uint32_t _g4_t_v14[5];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  v13[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  *(float *)v13 = 1.0 - *(float *)&a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v14[0] = *v12;
  v14[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v14,
    (float *)v13,
    (const float *)((char *)&dword_0 + 2),
    a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::applyKeyBasedValue  (binary VA: 0xdf7f50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef int _g4_t_v14;
  typedef float _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[2];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v15[1] = a5;
  v8 = *(uint32_t *)(v6 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v16[0] = *v12;
  v16[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
    v15,
    (const float *)((char *)&dword_0 + 2),
    (float *)&v14);
  return G4_VCALL<int>(a6, 340, v14);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::getKeyBasedValue  (binary VA: 0xdf8020)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, void *a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef void *_g4_t_v13[2];
  typedef uint32_t _g4_t_v14[5];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  v13[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  *(float *)v13 = 1.0 - *(float *)&a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v14[0] = *v12;
  v14[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v14,
    (float *)v13,
    (const float *)((char *)&dword_0 + 2),
    a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::applyKeyBasedValue  (binary VA: 0xdf80c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CLightIntensityMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, uint32_t *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef int _g4_t_v14;
  typedef float _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  v15[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v15[0] = 1.0 - a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v16[0] = *v12;
  v16[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v16,
    v15,
    (const float *)((char *)&dword_0 + 2),
    (float *)&v14);
  a6[9] = v14;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::getKeyBasedValue  (binary VA: 0xdf8170)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CLightIntensityMixin<float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, void *a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef void *_g4_t_v13[2];
  typedef uint32_t _g4_t_v14[5];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  v13[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  *(float *)v13 = 1.0 - *(float *)&a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v14[0] = *v12;
  v14[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v14,
    (float *)v13,
    (const float *)((char *)&dword_0 + 2),
    a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getKeyBasedValue  (binary VA: 0xdf8210)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CMixin<float, 1, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float, float>>, -1, float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, void *a5, float *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef void *_g4_t_v13[2];
  typedef uint32_t _g4_t_v14[5];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  v13[1] = a5;
  v6 = *(uint32_t *)a2;
  v7 = *((uint32_t *)a2 + 1);
  v8 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  *(float *)v13 = 1.0 - *(float *)&a5;
  v9 = v6 + v8 + 8;
  v10 = v7 + *(uint32_t *)(v7 + 4) + 4 + 8 * *(uint32_t *)(v9 + 24);
  v11 = *(uint16_t *)(v9 + 30);
  v12 = (uint32_t *)(*(uint32_t *)(v10 + 4) + v10 + v11 * a3 + *(uint16_t *)(v9 + 28) + 4);
  v14[0] = *v12;
  v14[1] = *(uint32_t *)((char *)v12 + v11);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v14,
    (float *)v13,
    (const float *)((char *)&dword_0 + 2),
    a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::applyAddedValue  (binary VA: 0xdf82b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::applyAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::applyAddedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CMixin<float, 1, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float, float>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v7);
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_float_id_d97248(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::applyBlendedValue  (binary VA: 0xdf8320)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::applyBlendedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CMixin<float, 1, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float, float>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3, const float *a4, void *a5, glitch::collada::animation_track::CApplicatorInfo::Self *a6)
{
  int v7[2];

  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    a3,
    a4,
    (float *)v7);
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_float_id_d97248(
           a5,
           *((uint16_t *)a6 + 4),
           0,
           v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::applyKeyBasedValue  (binary VA: 0xdf8390)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CMixin<float, 1, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float, float>>, -1, float>>> *self, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6, glitch::collada::animation_track::CApplicatorInfo::Self *a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  typedef int _g4_t_v15;
  typedef float _g4_t_v16[2];
  typedef uint32_t _g4_t_v17[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);

  v16[1] = a5;
  v7 = *(uint32_t *)a2;
  v8 = *((uint32_t *)a2 + 1);
  v9 = *(uint32_t *)(*(uint32_t *)a2 + 8);
  v16[0] = 1.0 - a5;
  v10 = v7 + v9 + 8;
  v11 = v8 + *(uint32_t *)(v8 + 4) + 4 + 8 * *(uint32_t *)(v10 + 24);
  v12 = *(uint16_t *)(v10 + 30);
  v13 = (uint32_t *)(*(uint32_t *)(v11 + 4) + v11 + v12 * a3 + *(uint16_t *)(v10 + 28) + 4);
  v17[0] = *v13;
  v17[1] = *(uint32_t *)((char *)v13 + v12);
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    (glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *)v17,
    v16,
    (const float *)((char *)&dword_0 + 2),
    (float *)&v15);
  return glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_float_id_d97248(
           a6,
           *((uint16_t *)a7 + 4),
           0,
           &v15);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getAdditiveValue  (binary VA: 0xdf8450)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CMixin<float, 1, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float, float>>, -1, float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v3[5];

  v3[0] = -1.0;
  v3[1] = 1.0;
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    v3,
    (const float *)((char *)&dword_0 + 2),
    a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::getAdditiveValue  (binary VA: 0xdf84a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v3[5];

  v3[0] = -1.0;
  v3[1] = 1.0;
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    v3,
    (const float *)((char *)&dword_0 + 2),
    a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::getAdditiveValue  (binary VA: 0xdf84f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v3[5];

  v3[0] = -1.0;
  v3[1] = 1.0;
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    v3,
    (const float *)((char *)&dword_0 + 2),
    a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::getAdditiveValue  (binary VA: 0xdf8540)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v3[5];

  v3[0] = -1.0;
  v3[1] = 1.0;
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    v3,
    (const float *)((char *)&dword_0 + 2),
    a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::getAdditiveValue  (binary VA: 0xdf8590)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v3[5];

  v3[0] = -1.0;
  v3[1] = 1.0;
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    v3,
    (const float *)((char *)&dword_0 + 2),
    a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::getAdditiveValue  (binary VA: 0xdf85e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::getAdditiveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::getAdditiveValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CLightIntensityMixin<float>>> *self, glitch::collada::animation_track::CBlender<float, 1, glitch::collada::animation_track::SUseDefaultBlender> *a2, float *a3)
{
  float v3[5];

  v3[0] = -1.0;
  v3[1] = 1.0;
  glitch::collada::animation_track::CBlender_float_1_collada_animatio_51c404::getBlendedValueEx(
    a2,
    v3,
    (const float *)((char *)&dword_0 + 2),
    a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CInterpreterQuaternion_collada_animation_track_b4c3f7::getKeyBasedValueEx  (binary VA: 0xdf8630)
// Original: glitch::collada::animation_track::CInterpreterQuaternion<glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>,char>::getKeyBasedValueEx
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CInterpreterQuaternion_collada_animation_track_b4c3f7::getKeyBasedValueEx(glitch::collada::animation_track::CInterpreterQuaternion<glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>, char> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float a4, double *a5)
{
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  char *v11;
  float *v12;
  int v13;
  int v14;
  char *v15;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef char *_g4_t_v20;
  typedef float _g4_t_v21[2];
  typedef float _g4_t_v22[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v21)) > _g4_s4 ? (32u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v22)) > _g4_s5 ? (40u + sizeof(_g4_t_v22)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);

  v5 = 0;
  v6 = *(uint32_t *)self;
  v19 = (int *)(*(uint32_t *)self + 28);
  v7 = *v19;
  if ( *v19 != 0 )
    v5 = v7 + v6 + 28;
  v8 = nullptr;
  v9 = *(uint32_t *)(v5 + 4);
  v21[0] = 1.0 - a4;
  v10 = v5 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = nullptr;
  if ( v7 != 0 )
    v11 = (char *)v19 + v7;
  v12 = nullptr;
  v13 = *((uint32_t *)v11 + 2);
  v21[1] = a4;
  v14 = (int)(uintptr_t)(&v11[v13 + 8]);
  if ( v13 != 0 )
    v12 = (float *)v14;
  v17 = v6;
  v18 = *((uint32_t *)self + 1);
  v20 = (char *)sub_D8C1A0(v6, v18, (int)(uintptr_t)(a2));
  v15 = (char *)sub_D8C1A0(v17, v18, a3);
  v22[0] = (float)((float)*v20 * *v8) + *v12;
  v22[4] = (float)((float)*v15 * *v8) + *v12;
  v22[1] = (float)((float)v20[1] * v8[1]) + v12[1];
  v22[5] = (float)((float)v15[1] * v8[1]) + v12[1];
  v22[2] = (float)((float)v20[2] * v8[2]) + v12[2];
  v22[6] = (float)((float)v15[2] * v8[2]) + v12[2];
  v22[3] = (float)((float)v20[3] * v8[3]) + v12[3];
  v22[7] = (float)((float)v15[3] * v8[3]) + v12[3];
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *)v22,
           v21,
           (const float *)((char *)&dword_0 + 2),
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::applyKeyBasedValue  (binary VA: 0xdf87d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, glitch::collada::SAnimationAccessor *a3, int a4, float a5, void *a6)
{
  typedef double _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v7 = 0.0;
  v8 = 0;
  v9 = 1065353216;
  glitch::collada::animation_track::CInterpreterQuaternion_collada_animation_track_b4c3f7::getKeyBasedValueEx(
    (glitch::collada::animation_track::CInterpreterQuaternion<glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>, char> *)(a2),
    a3,
    a4,
    a5,
    &v7);
  return G4_VCALL<int>(a6, 176, &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::getKeyBasedValue  (binary VA: 0xdf8860)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>> *self, const glitch::collada::SAnimationAccessor *a2, glitch::collada::SAnimationAccessor *a3, int a4, float a5, double *a6)
{
  return glitch::collada::animation_track::CInterpreterQuaternion_collada_animation_track_b4c3f7::getKeyBasedValueEx(
           (glitch::collada::animation_track::CInterpreterQuaternion<glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>, char> *)(a2),
           a3,
           a4,
           a5,
           a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CInterpreterQuaternion_collada_animation_track_e7ca90::getKeyBasedValueEx  (binary VA: 0xdf88b0)
// Original: glitch::collada::animation_track::CInterpreterQuaternion<glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>,short>::getKeyBasedValueEx
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CInterpreterQuaternion_collada_animation_track_e7ca90::getKeyBasedValueEx(glitch::collada::animation_track::CInterpreterQuaternion<glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>, short> *self, const glitch::collada::SAnimationAccessor *a2, int a3, float a4, double *a5)
{
  int v5;
  int v6;
  int v7;
  float *v8;
  int v9;
  int v10;
  char *v11;
  float *v12;
  int v13;
  int v14;
  int16_t *v15;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int16_t *_g4_t_v20;
  typedef float _g4_t_v21[2];
  typedef float _g4_t_v22[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v21)) > _g4_s4 ? (32u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v22)) > _g4_s5 ? (40u + sizeof(_g4_t_v22)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);

  v5 = 0;
  v6 = *(uint32_t *)self;
  v19 = (int *)(*(uint32_t *)self + 28);
  v7 = *v19;
  if ( *v19 != 0 )
    v5 = v7 + v6 + 28;
  v8 = nullptr;
  v9 = *(uint32_t *)(v5 + 4);
  v21[0] = 1.0 - a4;
  v10 = v5 + v9 + 4;
  if ( v9 != 0 )
    v8 = (float *)v10;
  v11 = nullptr;
  if ( v7 != 0 )
    v11 = (char *)v19 + v7;
  v12 = nullptr;
  v13 = *((uint32_t *)v11 + 2);
  v21[1] = a4;
  v14 = (int)(uintptr_t)(&v11[v13 + 8]);
  if ( v13 != 0 )
    v12 = (float *)v14;
  v17 = v6;
  v18 = *((uint32_t *)self + 1);
  v20 = (int16_t *)sub_D8C1A0(v6, v18, (int)(uintptr_t)(a2));
  v15 = (int16_t *)sub_D8C1A0(v17, v18, a3);
  v22[0] = (float)((float)*v20 * *v8) + *v12;
  v22[4] = (float)((float)*v15 * *v8) + *v12;
  v22[1] = (float)((float)v20[1] * v8[1]) + v12[1];
  v22[5] = (float)((float)v15[1] * v8[1]) + v12[1];
  v22[2] = (float)((float)v20[2] * v8[2]) + v12[2];
  v22[6] = (float)((float)v15[2] * v8[2]) + v12[2];
  v22[3] = (float)((float)v20[3] * v8[3]) + v12[3];
  v22[7] = (float)((float)v15[3] * v8[3]) + v12[3];
  return glitch::collada::animation_track::CBlender_quaternion_1_quaternion_e566fb::getBlendedValueEx(
           (glitch::collada::animation_track::CBlender<glitch::core::quaternion::Self, 1, glitch::core::quaternion::Self> *)v22,
           v21,
           (const float *)((char *)&dword_0 + 2),
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::applyKeyBasedValue  (binary VA: 0xdf8a50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::applyKeyBasedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::applyKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, glitch::collada::SAnimationAccessor *a3, int a4, float a5, void *a6)
{
  typedef double _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v7 = 0.0;
  v8 = 0;
  v9 = 1065353216;
  glitch::collada::animation_track::CInterpreterQuaternion_collada_animation_track_e7ca90::getKeyBasedValueEx(
    (glitch::collada::animation_track::CInterpreterQuaternion<glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>, short> *)(a2),
    a3,
    a4,
    a5,
    &v7);
  return G4_VCALL<int>(a6, 176, &v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::getKeyBasedValue  (binary VA: 0xdf8ae0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::getKeyBasedValue
// ----------------------------------------------------------------------------
double * glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::getKeyBasedValue(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>> *self, const glitch::collada::SAnimationAccessor *a2, glitch::collada::SAnimationAccessor *a3, int a4, float a5, double *a6)
{
  return glitch::collada::animation_track::CInterpreterQuaternion_collada_animation_track_e7ca90::getKeyBasedValueEx(
           (glitch::collada::animation_track::CInterpreterQuaternion<glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>, short> *)(a2),
           a3,
           a4,
           a5,
           a6);
}


