#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASModel3D.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::init  (binary VA: 0x114d670)
// Original: gameswf::ASModel3D::init
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::init(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 8, 67);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::unload  (binary VA: 0x114d6a0)
// Original: gameswf::ASModel3D::unload
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::unload(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = 0;
  return G4_VCALL<int>(v1, 376);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::setTransitionTime  (binary VA: 0x114db90)
// Original: gameswf::ASModel3D::setTransitionTime
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::setTransitionTime(int a1)
{
  uint32_t *v1;
  int v2;
  float v3; // xmm0_4
  int result;
  int v5;
  int v6;
  float v7; // xmm0_4

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v5 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v6 = v5;
    if ( *(int *)(a1 + 16) <= 1 )
    {
      v7 = fmaxf((float)v5, 1.0);
      v2 = 0;
      v3 = v7 * 0.001f;
    }
    else
    {
      v2 = 4
         * gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
      v3 = fmaxf((float)v6, 1.0) * 0.001f;
    }
  }
  else
  {
    v2 = 0;
    v3 = 0.001f;
  }
  result = *(uint32_t *)(v1[72] + v2);
  *(float *)(result + 48) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::setWeight  (binary VA: 0x114f660)
// Original: gameswf::ASModel3D::setWeight
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::setWeight(int a1)
{
  uint32_t *v1;
  long double v2; // fst7
  int v3;
  float v4; // xmm0_4
  int result;
  float v6;

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = nullptr;
  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v3 = 0;
  v4 = v2;
  if ( *(int *)(a1 + 16) > 1 )
  {
    v6 = v2;
    v3 = 4 * gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v4 = v6;
  }
  result = *(uint32_t *)(v1[72] + v3);
  *(float *)(result + 52) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::setLightDiffuse  (binary VA: 0x114f710)
// Original: gameswf::ASModel3D::setLightDiffuse
// ----------------------------------------------------------------------------
float * gameswf::ASModel3D::setLightDiffuse(int a1)
{
  uint32_t *v1;
  int v2;
  long double v3; // fst7
  float v4; // xmm0_4
  float *result;
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  double v9;
  double v10;
  double v11;

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = nullptr;
  v2 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v9 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v10 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
  v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 9)));
  v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 12)));
  v4 = v9;
  result = *(float **)(*(uint32_t *)(v1[79] + 4 * v2) + 264);
  result[5] = v4;
  v6 = v10;
  result[6] = v6;
  v7 = v11;
  result[7] = v7;
  v8 = v3;
  result[8] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::setLightPosition  (binary VA: 0x114f830)
// Original: gameswf::ASModel3D::setLightPosition
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::setLightPosition(int a1)
{
  uint32_t *v1;
  int v2;
  long double v3; // fst7
  float v4; // xmm0_4
  int *v5;
  int v6;
  float v7; // xmm0_4
  int (*v8)(int *, uint32_t *);
  float v9; // xmm0_4
  typedef double _g4_t_v11;
  typedef double _g4_t_v12;
  typedef uint32_t _g4_t_v13[6];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v13)) > _g4_s2 ? (36u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = nullptr;
  v2 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v12 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
  v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 9)));
  v4 = v11;
  v5 = *(int **)(v1[79] + 4 * v2);
  v6 = *v5;
  *(float *)v13 = v4;
  v7 = v12;
  *(float *)&v13[1] = v7;
  v8 = *(int (**)(int *, uint32_t *))(v6 + 184);
  v9 = v3;
  *(float *)&v13[2] = v9;
  return v8(v5, v13);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::advance  (binary VA: 0x114fff0)
// Original: gameswf::ASModel3D::advance
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::advance(gameswf::ASModel3D::Self *self, float a2)
{
  int v2;
  int v3;
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  int v7;
  float v8; // xmm0_4
  float *v9;
  int v10;
  float *v11;
  int v12;
  int v13;
  int result;
  int i;
  int v16;

  gameswf::ASDisplayObjectContainer::advance(self, a2);
  v2 = *((uint32_t *)self + 73);
  if ( v2 > 0 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 72) + 4 * i);
      if ( *(uint8_t *)(v3 + 40) != 0 )
      {
        v4 = *(float *)(v3 + 48);
        v16 = *(uint32_t *)(v3 + 32);
        v5 = *(float *)(v3 + 52);
        v6 = fminf(*(float *)(v3 + 44) + a2, v4);
        *(float *)(v3 + 44) = v6;
        v7 = *((uint32_t *)self + 76);
        v8 = v6 / v4;
        v9 = (float *)(*(uint32_t *)(v7 + 40) + 4 * v16);
        *(uint32_t *)(v7 + 76) -= *v9 > 0.00000011920929f;
        *v9 = (float)(1.0 - v8) * v5;
        *(uint32_t *)(v7 + 76) += *(float *)(*(uint32_t *)(v7 + 40) + 4 * v16) > 0.00000011920929f;
        v10 = *((uint32_t *)self + 76);
        v11 = (float *)(*(uint32_t *)(v10 + 40) + 4 * *(uint32_t *)(v3 + 36));
        v12 = *(uint32_t *)(v3 + 36);
        *(uint32_t *)(v10 + 76) -= *v11 > 0.00000011920929f;
        *v11 = v8 * v5;
        *(uint32_t *)(v10 + 76) += *(float *)(*(uint32_t *)(v10 + 40) + 4 * v12) > 0.00000011920929f;
        if ( *(uint8_t *)(v3 + 40) != 0 && *(float *)(v3 + 44) >= *(float *)(v3 + 48) )
        {
          v13 = *(uint32_t *)(v3 + 32);
          *(uint32_t *)(v3 + 32) = *(uint32_t *)(v3 + 36);
          *(uint32_t *)(v3 + 36) = v13;
          *(uint8_t *)(v3 + 40) = 0;
        }
        v2 = *((uint32_t *)self + 73);
      }
    }
  }
  result = *((uint32_t *)self + 77);
  if ( result != 0 )
    return G4_VCALL<int>(result, 88, -940498944, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::setTechnique  (binary VA: 0x11508f0)
// Original: gameswf::ASModel3D::setTechnique
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::setTechnique(__m128d a1, int a2)
{
  uint32_t **v2;
  int v3;
  int result;
  int v5;
  uint32_t *v6;
  int i;
  glitch::video::CMaterial::Self *v8;
  bool v9;
  glitch::video::CMaterial::Self *v10;
  volatile int32_t *v11;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v12;
  char TechniqueID;
  const char **v14;
  glitch::video::CMaterial::Self *v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef glitch::video::CMaterial::Self *_g4_t_v20;
  typedef glitch::video::CMaterial::Self *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef glitch::video::CMaterial::Self *_g4_t_v23;
  typedef glitch::video::CMaterial::Self *_g4_t_v24;
  typedef glitch::video::CMaterial::Self *_g4_t_v25;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v26;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v19)) > _g4_s3 ? (4u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v20)) > _g4_s4 ? (4u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v21)) > _g4_s5 ? (4u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v22)) > _g4_s6 ? (8u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v23)) > _g4_s7 ? (12u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v24)) > _g4_s8 ? (16u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v25)) > _g4_s9 ? (20u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v26)) > _g4_s10 ? (24u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);

  v2 = *(uint32_t ***)(a2 + 4);
  if ( v2 != nullptr && ((uint8_t (*)(uint32_t, int))(*v2)[2])(*(uint32_t *)(a2 + 4), 67) == 0 )
    v2 = nullptr;
  v3 = **(uint32_t **)(a2 + 12) + 12 * *(uint32_t *)(a2 + 20);
  if ( *(uint8_t *)v3 == 3 || *(uint8_t *)v3 == 4 )
  {
    v22 = *(char **)(v3 + 4);
  }
  else
  {
    v22 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v5 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v5;
      BYTE2(dword_20D6388) = BYTE2(v5) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v5) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  result = (*(int (**)(uint32_t *))(*v2[70] + 212))(v2[70]);
  if ( result == 1919246692 )
  {
    v6 = v2[70];
    if ( v6 != nullptr )
      __sync_add_and_fetch((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16) + 4), 1u);
    for ( i = 0; ; ++i )
    {
      (*(void (**)(glitch::video::CMaterial::Self **))(*v6 + 156))(&v23);
      v8 = v23;
      if ( v23 == nullptr )
        break;
      v9 = *(uint32_t *)v23 == 2;
      _mm_mfence();
      if ( v9 )
        glitch::video::CMaterial::removeFromRootSceneNode(v8);
      if ( __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v8);
        gll_operator_delete_arr((int)(uintptr_t)(v8));
      }
      (*(void (**)(glitch::video::CMaterial::Self **))(*v6 + 156))(&v24);
      v10 = v24;
      v11 = *((volatile int32_t **)v24 + 1);
      if ( v11 != nullptr )
      {
        __sync_add_and_fetch(v11, 1u);
        v10 = v24;
      }
      if ( v10 != nullptr )
      {
        v9 = *(uint32_t *)v10 == 2;
        _mm_mfence();
        if ( v9 )
        {
          v20 = v10;
          glitch::video::CMaterial::removeFromRootSceneNode(v10);
          v10 = v20;
        }
        if ( __sync_fetch_and_add((volatile int32_t *)v10, 0xFFFFFFFF) == 1 )
        {
          v16 = (int)(uintptr_t)(v10);
          glitch::video::CMaterial::Destroy(v10);
          gll_operator_delete_arr(v16);
        }
      }
      v12 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)(v22 + 1);
      if ( *v22 == -1 )
        v12 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v22 + 3);
      v26 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                     a1,
                                                                     v12,
                                                                     nullptr);
      TechniqueID = glitch::video::CMaterialRenderer::getTechniqueID(
                      (glitch::video::CMaterialRenderer::Self *)v11,
                      (const glitch::core::SSharedString::Self *)&v26);
      v14 = (const char **)v26;
      if ( v26 != nullptr && __sync_fetch_and_add((volatile int32_t *)v26, 0xFFFFFFFF) == 1 )
      {
        v19 = TechniqueID;
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v14);
        TechniqueID = v19;
      }
      if ( TechniqueID != -1 )
      {
        v17 = TechniqueID;
        (*(void (**)(glitch::video::CMaterial::Self **))(*v6 + 156))(&v25);
        v15 = v25;
        *((uint8_t *)v25 + 8) = v17;
        v9 = *(uint32_t *)v15 == 2;
        _mm_mfence();
        if ( v9 )
        {
          v21 = v15;
          glitch::video::CMaterial::removeFromRootSceneNode(v15);
          v15 = v21;
        }
        if ( __sync_fetch_and_add((volatile int32_t *)v15, 0xFFFFFFFF) == 1 )
        {
          v18 = (int)(uintptr_t)(v15);
          glitch::video::CMaterial::Destroy(v15);
          gll_operator_delete_arr(v18);
        }
      }
      if ( v11 != nullptr && __sync_fetch_and_add(v11, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterialRenderer::Destroy((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v11);
        gll_operator_delete_arr((int)(uintptr_t)(v11));
      }
    }
    return sub_5459C0((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16)));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::addLight  (binary VA: 0x1150c40)
// Original: gameswf::ASModel3D::addLight
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::addLight(int a1)
{
  uint32_t *v1;
  glitch::scene::CLightSceneNode::Self *v2;
  int v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  glitch::scene::CLightSceneNode::Self **v8;
  int v9;
  uint32_t *v10;
  int v11;
  void (*v12)(int, uint32_t **);
  uint32_t *v13;
  int result;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef gameswf::Self *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v16)) > _g4_s1 ? (20u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v18)) > _g4_s3 ? (44u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = nullptr;
  v2 = (glitch::scene::CLightSceneNode::Self *)opNew(0x138u);
  glitch::scene::CLightSceneNode::Construct(v2);
  v3 = v1[80];
  v4 = v1[81];
  v5 = v3 + 1;
  if ( v3 + 1 <= v4 || v1[82] != 0 )
  {
    v6 = (char *)v1[79];
    v7 = v1[80];
  }
  else
  {
    v16 = v5 + (v5 >> 1);
    v1[81] = v16;
    v17 = (gameswf::Self *)v1[79];
    if ( v16 != 0 )
    {
      if ( v1[79] != 0 )
      {
        v15 = 0;
        v6 = (char *)gameswf::realloc_internal(v17, 4 * v16, 4 * v4);
      }
      else
      {
        v6 = (char *)gameswf::malloc_internal(4 * v16);
      }
      v1[79] = (uint32_t)(uintptr_t)(v6);
      v7 = v1[80];
      v5 = v3 + 1;
    }
    else
    {
      v7 = v3;
      if ( v17 != nullptr )
      {
        gameswf::free_internal(v17);
        v7 = v1[80];
        v5 = v3 + 1;
      }
      v1[79] = 0;
      v6 = nullptr;
    }
  }
  v8 = (glitch::scene::CLightSceneNode::Self **)&v6[4 * v7];
  if ( v8 != nullptr )
  {
    *v8 = v2;
    if ( v2 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)((char *)v2 + *(uint32_t *)(*(uint32_t *)v2 - 16) + 4), 1u);
  }
  v9 = v1[79];
  v1[80] = v5;
  v10 = *(uint32_t **)(*(uint32_t *)(v9 + 4 * v3) + 264);
  v10[1] = 1065353216;
  v10[2] = 1065353216;
  v10[3] = 1065353216;
  v10[4] = 1065353216;
  *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v1[79] + 4 * v1[80] - 4) + 264) + 36) = 1065353216;
  (*(void (**)(uint32_t, uint32_t, uint32_t, int))(**(uint32_t **)(v1[79] + 4 * v1[80] - 4) + 188))(
    *(uint32_t *)(v1[79] + 4 * v1[80] - 4),
    0,
    0,
    v15);
  v11 = v1[70];
  v12 = *(void (**)(int, uint32_t **))(*(uint32_t *)v11 + 104);
  v13 = *(uint32_t **)(v1[79] + 4 * v1[80] - 4);
  v18 = v13;
  if ( v13 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v13 + *(uint32_t *)(*v13 - 16) + 4), 1u);
  v12(v11, &v18);
  result = (int)(uintptr_t)(v18);
  if ( v18 != nullptr )
    return sub_5459C0((uint32_t *)((char *)v18 + *(uint32_t *)(*v18 - 16)));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::load  (binary VA: 0x11512a0)
// Original: gameswf::ASModel3D::load
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::load(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  char *v4;
  gameswf::Self *v5;
  gameswf::Player::Self *v6;
  char *Workdir;
  int v8;
  int v9;
  int v11;
  typedef gameswf::Self *_g4_t_lpdso_handle;
  typedef g4_cxa_guard_t *_g4_t_v13;
  typedef uint8_t _g4_t_v14[20];
  typedef uint8_t _g4_t_v15[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_lpdso_handle)) > _g4_s0 ? (8u + sizeof(_g4_t_lpdso_handle)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v14)) > _g4_s2 ? (40u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v15)) > _g4_s3 ? (60u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);

  v1 = a1[1];
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(a1[1], 67) == 0 )
    v1 = 0;
  v2 = a1[3];
  v3 = *(uint32_t *)v2 + 12 * a1[5];
  if ( *(uint8_t *)v3 == 3 || *(uint8_t *)v3 == 4 )
  {
    v4 = *(char **)(v3 + 4);
  }
  else
  {
    v4 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        byte_20D6378 = 1;
        v11 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v11;
        BYTE2(dword_20D6388) = BYTE2(v11) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v11) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
      v2 = a1[3];
      if ( byte_20D6378 != -1 )
        goto LABEL_8;
LABEL_18:
      v5 = *((gameswf::Self **)v4 + 3);
      goto LABEL_9;
    }
  }
  if ( *v4 == -1 )
    goto LABEL_18;
LABEL_8:
  v5 = (gameswf::Self *)(v4 + 1);
LABEL_9:
  v6 = *(gameswf::Player::Self **)(v2 + 212);
  if ( v6 != nullptr && *(uint8_t *)(*(uint32_t *)(v2 + 208) + 2) == 0 )
  {
    v13 = (g4_cxa_guard_t *)v2;
    sub_7E5ED0((gameswf::Self **)(v2 + 208), nullptr);
    v6 = nullptr;
    v13[53] = 0;
  }
  Workdir = gameswf::Player::getWorkdir(v6);
  sub_776320((gameswf::String::Self *)v15, (gameswf::Self *)Workdir);
  lpdso_handle = v5;
  v8 = 0;
  gameswf::getFullURL((gameswf::Self *)v14, (const gameswf::String::Self *)v15, lpdso_handle);
  sub_59CE50((int)(uintptr_t)(v15));
  if ( (int)a1[4] > 1 )
  {
    v9 = *(uint32_t *)a1[3] + 4 * (3 * a1[5] - 3);
    if ( *(uint8_t *)v9 == 5 )
    {
      v8 = *(uint32_t *)(v9 + 4);
      if ( v8 != 0 && G4_VCALL<uint8_t>(v8, 8, 20) == 0 )
        v8 = 0;
    }
  }
  G4_VCALL<void>(v1, 372, v14, v8);
  return sub_59CE50((int)(uintptr_t)(v14));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::createClass  (binary VA: 0x115a970)
// Original: gameswf::ASModel3D::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASModel3D::createClass(gameswf::ASModel3D::Self *self)
{
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef gameswf::Self **_g4_t_v3;
  typedef uint8_t _g4_t_v4[12];
  typedef uint8_t _g4_t_v5[12];
  typedef uint8_t _g4_t_v6[12];
  typedef uint8_t _g4_t_v7[12];
  typedef uint8_t _g4_t_v8[12];
  typedef uint8_t _g4_t_v9[12];
  typedef uint8_t _g4_t_v10[12];
  typedef uint8_t _g4_t_v11[12];
  typedef uint8_t _g4_t_v12[12];
  typedef uint8_t _g4_t_v13[12];
  typedef uint8_t _g4_t_v14[12];
  typedef uint8_t _g4_t_v15[12];
  typedef uint8_t _g4_t_v16[12];
  typedef uint8_t _g4_t_v17[12];
  typedef uint8_t _g4_t_v18[12];
  typedef uint8_t _g4_t_v19[20];
  typedef uint8_t _g4_t_v20[20];
  typedef uint8_t _g4_t_v21[20];
  typedef uint8_t _g4_t_v22[20];
  typedef uint8_t _g4_t_v23[20];
  typedef uint8_t _g4_t_v24[20];
  typedef uint8_t _g4_t_v25[20];
  typedef uint8_t _g4_t_v26[20];
  typedef uint8_t _g4_t_v27[20];
  typedef uint8_t _g4_t_v28[20];
  typedef uint8_t _g4_t_v29[20];
  typedef uint8_t _g4_t_v30[20];
  typedef uint8_t _g4_t_v31[20];
  typedef uint8_t _g4_t_v32[20];
  typedef uint8_t _g4_t_v33[20];
  typedef uint8_t _g4_t_v34[20];
  typedef uint8_t _g4_t_v35[48];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (8u + sizeof(_g4_t_Class)) > _g4_s0 ? (8u + sizeof(_g4_t_Class)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v4)) > _g4_s2 ? (24u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v5)) > _g4_s3 ? (36u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v6)) > _g4_s4 ? (48u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v7)) > _g4_s5 ? (60u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v8)) > _g4_s6 ? (72u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v9)) > _g4_s7 ? (84u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v10)) > _g4_s8 ? (96u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v11)) > _g4_s9 ? (108u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (120u + sizeof(_g4_t_v12)) > _g4_s10 ? (120u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (132u + sizeof(_g4_t_v13)) > _g4_s11 ? (132u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v14)) > _g4_s12 ? (144u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (156u + sizeof(_g4_t_v15)) > _g4_s13 ? (156u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (168u + sizeof(_g4_t_v16)) > _g4_s14 ? (168u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (180u + sizeof(_g4_t_v17)) > _g4_s15 ? (180u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (192u + sizeof(_g4_t_v18)) > _g4_s16 ? (192u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (204u + sizeof(_g4_t_v19)) > _g4_s17 ? (204u + sizeof(_g4_t_v19)) : _g4_s17,
    _g4_s19 = (224u + sizeof(_g4_t_v20)) > _g4_s18 ? (224u + sizeof(_g4_t_v20)) : _g4_s18,
    _g4_s20 = (244u + sizeof(_g4_t_v21)) > _g4_s19 ? (244u + sizeof(_g4_t_v21)) : _g4_s19,
    _g4_s21 = (264u + sizeof(_g4_t_v22)) > _g4_s20 ? (264u + sizeof(_g4_t_v22)) : _g4_s20,
    _g4_s22 = (284u + sizeof(_g4_t_v23)) > _g4_s21 ? (284u + sizeof(_g4_t_v23)) : _g4_s21,
    _g4_s23 = (304u + sizeof(_g4_t_v24)) > _g4_s22 ? (304u + sizeof(_g4_t_v24)) : _g4_s22,
    _g4_s24 = (324u + sizeof(_g4_t_v25)) > _g4_s23 ? (324u + sizeof(_g4_t_v25)) : _g4_s23,
    _g4_s25 = (344u + sizeof(_g4_t_v26)) > _g4_s24 ? (344u + sizeof(_g4_t_v26)) : _g4_s24,
    _g4_s26 = (364u + sizeof(_g4_t_v27)) > _g4_s25 ? (364u + sizeof(_g4_t_v27)) : _g4_s25,
    _g4_s27 = (384u + sizeof(_g4_t_v28)) > _g4_s26 ? (384u + sizeof(_g4_t_v28)) : _g4_s26,
    _g4_s28 = (404u + sizeof(_g4_t_v29)) > _g4_s27 ? (404u + sizeof(_g4_t_v29)) : _g4_s27,
    _g4_s29 = (424u + sizeof(_g4_t_v30)) > _g4_s28 ? (424u + sizeof(_g4_t_v30)) : _g4_s28,
    _g4_s30 = (444u + sizeof(_g4_t_v31)) > _g4_s29 ? (444u + sizeof(_g4_t_v31)) : _g4_s29,
    _g4_s31 = (464u + sizeof(_g4_t_v32)) > _g4_s30 ? (464u + sizeof(_g4_t_v32)) : _g4_s30,
    _g4_s32 = (484u + sizeof(_g4_t_v33)) > _g4_s31 ? (484u + sizeof(_g4_t_v33)) : _g4_s31,
    _g4_s33 = (504u + sizeof(_g4_t_v34)) > _g4_s32 ? (504u + sizeof(_g4_t_v34)) : _g4_s32,
    _g4_s34 = (524u + sizeof(_g4_t_v35)) > _g4_s33 ? (524u + sizeof(_g4_t_v35)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 36u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 48u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 60u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 72u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 84u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 96u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 108u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 120u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 132u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 144u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 156u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 168u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 180u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 192u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 204u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 224u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 244u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 264u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 284u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 304u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 324u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 344u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 364u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 384u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 404u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 424u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 444u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 464u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 484u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 504u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 524u);

  sub_776320((gameswf::String::Self *)v20, (gameswf::Self *)"DisplayObjectContainer");
  sub_776320((gameswf::String::Self *)v19, (gameswf::Self *)"flash.display");
  Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                (gameswf::ASModel3D::Self *)((char *)self + 236),
                                (const gameswf::String::Self *)v19,
                                (const gameswf::String::Self *)v20,
                                true);
  sub_776320((gameswf::String::Self *)v21, (gameswf::Self *)"Model3D");
  v4[0] = 0;
  v4[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v4, (int)(uintptr_t)(gameswf::ASModel3D::init));
  v3 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v3,
    self,
    Class,
    (const gameswf::String::Self *)v21,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASModel3D::newOp,
    (const gameswf::ASValue::Self *)v4,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  sub_59CE50((int)(uintptr_t)(v21));
  sub_59CE50((int)(uintptr_t)(v19));
  sub_59CE50((int)(uintptr_t)(v20));
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)(gameswf::ASModel3D::load));
  sub_776320((gameswf::String::Self *)v22, (gameswf::Self *)"load");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v22, (const gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v22));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  v6[0] = 0;
  v6[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v6, (int)(uintptr_t)(gameswf::ASModel3D::unload));
  sub_776320((gameswf::String::Self *)v23, (gameswf::Self *)"unload");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v23, (const gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v23));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)(gameswf::ASModel3D::addChildNode));
  sub_776320((gameswf::String::Self *)v24, (gameswf::Self *)"addChildNode");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v24, (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v24));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::ASModel3D::removeChildNode));
  sub_776320((gameswf::String::Self *)v25, (gameswf::Self *)"removeChildNode");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v25, (const gameswf::ASValue::Self *)v8);
  sub_59CE50((int)(uintptr_t)(v25));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  v9[0] = 0;
  v9[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)(uintptr_t)(gameswf::ASModel3D::setCurrentAnimation));
  sub_776320((gameswf::String::Self *)v26, (gameswf::Self *)"setCurrentAnimation");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v26, (const gameswf::ASValue::Self *)v9);
  sub_59CE50((int)(uintptr_t)(v26));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  v10[0] = 0;
  v10[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)(gameswf::ASModel3D::setClip));
  sub_776320((gameswf::String::Self *)v27, (gameswf::Self *)"setClip");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v27, (const gameswf::ASValue::Self *)v10);
  sub_59CE50((int)(uintptr_t)(v27));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  v11[0] = 0;
  v11[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v11, (int)(uintptr_t)(gameswf::ASModel3D::setTransitionTime));
  sub_776320((gameswf::String::Self *)v28, (gameswf::Self *)"setTransitionTime");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v28, (const gameswf::ASValue::Self *)v11);
  sub_59CE50((int)(uintptr_t)(v28));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  v12[0] = 0;
  v12[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v12, (int)(uintptr_t)(gameswf::ASModel3D::setLoop));
  sub_776320((gameswf::String::Self *)v29, (gameswf::Self *)"setLoop");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v29, (const gameswf::ASValue::Self *)v12);
  sub_59CE50((int)(uintptr_t)(v29));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  v13[0] = 0;
  v13[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v13, (int)(uintptr_t)(gameswf::ASModel3D::setWeight));
  sub_776320((gameswf::String::Self *)v30, (gameswf::Self *)"setWeight");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v30, (const gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v30));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  v14[0] = 0;
  v14[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v14, (int)(uintptr_t)(gameswf::ASModel3D::getCurrentAnimation));
  sub_776320((gameswf::String::Self *)v31, (gameswf::Self *)"getCurrentAnimation");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v31, (const gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v31));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  v15[0] = 0;
  v15[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v15, (int)(uintptr_t)(gameswf::ASModel3D::setTechnique));
  sub_776320((gameswf::String::Self *)v32, (gameswf::Self *)"setTechnique");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v32, (const gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v32));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  v16[0] = 0;
  v16[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v16, (int)(uintptr_t)(gameswf::ASModel3D::addLight));
  sub_776320((gameswf::String::Self *)v33, (gameswf::Self *)"addLight");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v33, (const gameswf::ASValue::Self *)v16);
  sub_59CE50((int)(uintptr_t)(v33));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  v17[0] = 0;
  v17[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v17, (int)(uintptr_t)(gameswf::ASModel3D::setLightPosition));
  sub_776320((gameswf::String::Self *)v34, (gameswf::Self *)"setLightPosition");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v34, (const gameswf::ASValue::Self *)v17);
  sub_59CE50((int)(uintptr_t)(v34));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  v18[0] = 0;
  v18[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v18, (int)(uintptr_t)(gameswf::ASModel3D::setLightDiffuse));
  sub_776320((gameswf::String::Self *)v35, (gameswf::Self *)"setLightDiffuse");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v3, (const gameswf::String::Self *)v35, (const gameswf::ASValue::Self *)v18);
  sub_59CE50((int)(uintptr_t)(v35));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::removeChild  (binary VA: 0x115b010)
// Original: gameswf::ASModel3D::removeChild
// ----------------------------------------------------------------------------
gameswf::ASModel3D::Self * gameswf::ASModel3D::removeChild(gameswf::ASModel3D::Self *self, gameswf::Self **a2)
{
  gameswf::ASModel3D::Self *v2;
  gameswf::ASModel3D::Self *result;
  gameswf::Self *WeakProxy;
  int v5;
  gameswf::ASModel3D::Self *v6;
  int v7;
  gameswf::ASModel3D::Self *v8;
  gameswf::ASModel3D::Self *v9;
  int v10;
  gameswf::Self *v11;
  bool v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef gameswf::ASModel3D::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef gameswf::Self *_g4_t_v21;
  typedef gameswf::ASModel3D::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v22)) > _g4_s7 ? (36u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v23)) > _g4_s8 ? (40u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v24)) > _g4_s9 ? (44u + sizeof(_g4_t_v24)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);

  v2 = (gameswf::ASModel3D::Self *)a2;
  result = (gameswf::ASModel3D::Self *)(a2[64]);
  if ( result != nullptr && *((uint8_t *)a2[63] + 2) == 0 )
  {
    sub_7E5ED0(a2 + 63, nullptr);
    a2[64] = nullptr;
    result = nullptr;
  }
  if ( self == result )
  {
    v21 = nullptr;
    v22 = (gameswf::ASModel3D::Self *)a2;
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)a2);
    sub_7E5ED0(&v21, WeakProxy);
    if ( *((int *)self + 66) > 0 )
    {
      v5 = 0;
      v19 = (gameswf::ASModel3D::Self *)a2;
      v6 = self;
      while ( 1 )
      {
        v20 = 8 * v5;
        v7 = *((uint32_t *)v6 + 65) + 8 * v5;
        v8 = *(gameswf::ASModel3D::Self **)(v7 + 4);
        if ( v8 != nullptr && *(uint8_t *)(*(uint32_t *)v7 + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)v7, nullptr);
          *(uint32_t *)(v7 + 4) = 0;
          v8 = nullptr;
        }
        v9 = v22;
        if ( v22 != nullptr && *((uint8_t *)v21 + 2) == 0 )
        {
          sub_7E5ED0(&v21, nullptr);
          v22 = nullptr;
          v9 = nullptr;
          v8 = *(gameswf::ASModel3D::Self **)(v7 + 4);
        }
        if ( v9 == v8 )
          break;
        v6 = self;
        if ( ++v5 >= *((uint32_t *)self + 66) )
        {
          v2 = (gameswf::ASModel3D::Self *)a2;
          goto LABEL_21;
        }
      }
      v2 = (gameswf::ASModel3D::Self *)a2;
      v18 = *((uint32_t *)self + 66);
      if ( v18 == 1 )
      {
        v14 = **((gameswf::Self ***)self + 65);
        if ( v14 != nullptr )
        {
          v12 = (*(uint16_t *)v14)-- == 1;
          if ( v12 )
            gameswf::free_internal(v14);
        }
        *((uint32_t *)self + 66) = 0;
      }
      else
      {
        v10 = *((uint32_t *)self + 65);
        v19 = (gameswf::ASModel3D::Self *)(v20 + v10);
        v11 = *(gameswf::Self **)(v20 + v10);
        if ( v11 != nullptr )
        {
          v12 = (*(uint16_t *)v11)-- == 1;
          if ( v12 )
            gameswf::free_internal(v11);
          v18 = *((uint32_t *)self + 66);
          v10 = *((uint32_t *)self + 65);
          v19 = (gameswf::ASModel3D::Self *)(v10 + v20);
        }
        memmove(v19, (const void *)(v10 + 8 * v5 + 8), 8 * (v18 - 1 - v5));
        --*((uint32_t *)self + 66);
      }
    }
LABEL_21:
    v13 = v21;
    if ( v21 != nullptr )
    {
      v12 = (*(uint16_t *)v21)-- == 1;
      if ( v12 )
        gameswf::free_internal(v13);
    }
    *((uint32_t *)v2 + 64) = 0;
    sub_7E5ED0((gameswf::Self **)v2 + 63, nullptr);
    return (gameswf::ASModel3D::Self *)(*(int (**)(uint32_t, int, int, int, int, int, gameswf::ASModel3D::Self *, int, gameswf::Self *, gameswf::ASModel3D::Self *, int, int))(**((uint32_t **)self + 70) + 116))(
                                   *((uint32_t *)self + 70),
                                   (int)(uintptr_t)(v2) + 280,
                                   v15,
                                   v16,
                                   v17,
                                   v18,
                                   v19,
                                   v20,
                                   v21,
                                   v22,
                                   v23,
                                   v24);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::removeChildNode  (binary VA: 0x115b2a0)
// Original: gameswf::ASModel3D::removeChildNode
// ----------------------------------------------------------------------------
gameswf::ASModel3D::Self * gameswf::ASModel3D::removeChildNode(int a1)
{
  gameswf::ASModel3D::Self *v1;
  gameswf::Self **v2;
  int v3;

  v1 = *(gameswf::ASModel3D::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = nullptr;
  v2 = nullptr;
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5 )
  {
    v2 = *(gameswf::Self ***)(v3 + 4);
    if ( v2 != nullptr && (*((uint8_t (**)(gameswf::Self **, int))*v2 + 2))(v2, 67) == 0 )
      v2 = nullptr;
  }
  return gameswf::ASModel3D::removeChild(v1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::unloadModel  (binary VA: 0x115b340)
// Original: gameswf::ASModel3D::unloadModel
// ----------------------------------------------------------------------------
uint32_t * gameswf::ASModel3D::unloadModel(gameswf::ASModel3D::Self *self)
{
  gameswf::ASModel3D::Self *v1;
  int v2;
  uint32_t *v3;
  int i;
  uint32_t *v5;
  volatile int32_t *v6;
  int v7;
  uint32_t *v8;
  int j;
  gameswf::RefCounted::Self *v10;
  uint32_t *v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  uint32_t *result;
  uint32_t *v15;
  volatile int32_t *v16;
  uint32_t *v17;
  volatile int32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;

  v1 = *((gameswf::ASModel3D::Self **)self + 64);
  if ( v1 != nullptr )
  {
    if ( *(uint8_t *)(*((uint32_t *)self + 63) + 2) != 0 )
    {
      gameswf::ASModel3D::removeChild(v1, (gameswf::Self **)self);
    }
    else
    {
      sub_7E5ED0((gameswf::Self **)self + 63, nullptr);
      *((uint32_t *)self + 64) = 0;
    }
  }
  v2 = *((uint32_t *)self + 80);
  v3 = (uint32_t *)((char *)self + 316);
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v21 = 4 * v2;
      do
      {
        v22 = (uint32_t *)(*v3 + v21);
        if ( v22 != nullptr )
          *v22 = 0;
        v21 += 4;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = *(uint32_t **)(*v3 + 4 * i);
      if ( v5 != nullptr )
      {
        v6 = (volatile int32_t *)((uint32_t *)((char *)v5 + *(uint32_t *)(*v5 - 16)));
        if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
        {
          v25 = i;
          v23 = v3;
          G4_VCALL<void>(v6, 8);
          G4_VCALL<void>(v6, 4);
          v3 = v23;
          i = v25;
        }
      }
    }
  }
  v7 = *((uint32_t *)self + 73);
  *((uint32_t *)self + 80) = 0;
  v8 = (uint32_t *)((char *)self + 288);
  if ( v7 <= 0 )
  {
    if ( v7 < 0 )
    {
      v19 = 4 * v7;
      do
      {
        v20 = (uint32_t *)(*v8 + v19);
        if ( v20 != nullptr )
          *v20 = 0;
        v19 += 4;
        ++v7;
      }
      while ( v7 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v7; ++j )
    {
      v10 = *(gameswf::RefCounted::Self **)(*v8 + 4 * j);
      if ( v10 != nullptr )
      {
        v24 = v8;
        gameswf::RefCounted::dropRef(v10);
        v8 = v24;
      }
    }
  }
  v11 = *((uint32_t **)self + 76);
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 76) = 0;
  if ( v11 != nullptr )
  {
    v12 = (volatile int32_t *)((uint32_t *)((char *)v11 + *(uint32_t *)(*v11 - 12)));
    if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v12, 8);
      G4_VCALL<void>(v12, 4);
    }
  }
  v13 = *((volatile int32_t **)self + 71);
  *((uint32_t *)self + 71) = 0;
  if ( v13 != nullptr )
    sub_5459C0(v13);
  result = *((uint32_t **)self + 70);
  *((uint32_t *)self + 70) = 0;
  if ( result != nullptr )
    result = (uint32_t *)sub_5459C0((uint32_t *)((char *)result + *(uint32_t *)(*result - 16)));
  v15 = *((uint32_t **)self + 78);
  *((uint32_t *)self + 78) = 0;
  if ( v15 != nullptr )
  {
    v16 = (volatile int32_t *)((uint32_t *)((char *)v15 + *(uint32_t *)(*v15 - 16)));
    result = (uint32_t *)__sync_fetch_and_add(v16 + 1, 0xFFFFFFFF);
    if ( result == (uint32_t *)((int *)((char *)&dword_0 + 1)) )
    {
      G4_VCALL<void>(v16, 8);
      result = (uint32_t *)G4_VCALL<int>(v16, 4);
    }
  }
  v17 = *((uint32_t **)self + 77);
  *((uint32_t *)self + 77) = 0;
  if ( v17 != nullptr )
  {
    v18 = (volatile int32_t *)((uint32_t *)((char *)v17 + *(uint32_t *)(*v17 - 16)));
    result = (uint32_t *)__sync_fetch_and_add(v18 + 1, 0xFFFFFFFF);
    if ( result == (uint32_t *)((int *)((char *)&dword_0 + 1)) )
    {
      G4_VCALL<void>(v18, 8);
      return (uint32_t *)G4_VCALL<int>(v18, 4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::Destroy  (binary VA: 0x115b5c0)
// Original: gameswf::ASModel3D::~ASModel3D
// ----------------------------------------------------------------------------
void gameswf::ASModel3D::Destroy(volatile int32_t **self)
{
  int v1;
  uint32_t *v2;
  int i;
  uint32_t *v4;
  volatile int32_t *v5;
  int v6;
  gameswf::Self *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int j;
  gameswf::RefCounted::Self *v14;
  int v15;
  gameswf::Self *v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  int k;
  gameswf::Self *v21;
  bool v22;
  int v23;
  gameswf::Self *v24;
  gameswf::Self *v25;
  gameswf::Self *v26;
  int v27;
  int v28;
  int m;
  uint32_t *v30;
  int v31;
  uint32_t *v32;
  int n;
  gameswf::RefCounted::Self *v34;
  int v35;
  gameswf::Self *v36;
  int v37;
  uint32_t *v38;
  int v39;
  uint32_t *v40;
  int v41;
  uint32_t *v42;
  int v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  int v49;

  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2090E08);
  gameswf::ASModel3D::unloadModel((gameswf::ASModel3D::Self *)self);
  v1 = (int)(uintptr_t)(*(self + 80));
  v2 = (uint32_t *)(self + 79);
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v43 = 4 * v1;
      do
      {
        v44 = (uint32_t *)(*v2 + v43);
        if ( v44 != nullptr )
          *v44 = 0;
        v43 += 4;
        ++v1;
      }
      while ( v1 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v1; ++i )
    {
      v4 = *(uint32_t **)(*v2 + 4 * i);
      if ( v4 != nullptr )
      {
        v5 = (volatile int32_t *)((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 16)));
        if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
        {
          v49 = i;
          v45 = v2;
          G4_VCALL<void>(v5, 8);
          G4_VCALL<void>(v5, 4);
          v2 = v45;
          i = v49;
        }
      }
    }
  }
  v6 = (int)(uintptr_t)(*(self + 82));
  *(self + 80) = nullptr;
  if ( v6 == 0 )
  {
    v7 = (gameswf::Self *)*(self + 79);
    *(self + 81) = nullptr;
    if ( v7 != nullptr )
      gameswf::free_internal(v7);
    *(self + 79) = nullptr;
  }
  v8 = (uint32_t *)(*(self + 78));
  if ( v8 != nullptr )
    sub_5459C0((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 16)));
  v9 = (uint32_t *)(*(self + 77));
  if ( v9 != nullptr )
    sub_5459C0((uint32_t *)((char *)v9 + *(uint32_t *)(*v9 - 16)));
  v10 = (uint32_t *)(*(self + 76));
  if ( v10 != nullptr )
    sub_5459C0((uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 12)));
  v11 = (int)(uintptr_t)(*(self + 73));
  v12 = (uint32_t *)(self + 72);
  if ( v11 <= 0 )
  {
    if ( v11 < 0 )
    {
      v41 = 4 * v11;
      do
      {
        v42 = (uint32_t *)(*v12 + v41);
        if ( v42 != nullptr )
          *v42 = 0;
        v41 += 4;
        ++v11;
      }
      while ( v11 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v11; ++j )
    {
      v14 = *(gameswf::RefCounted::Self **)(*v12 + 4 * j);
      if ( v14 != nullptr )
      {
        v46 = v12;
        gameswf::RefCounted::dropRef(v14);
        v12 = v46;
      }
    }
  }
  v15 = (int)(uintptr_t)(*(self + 75));
  *(self + 73) = nullptr;
  if ( v15 == 0 )
  {
    v16 = (gameswf::Self *)*(self + 72);
    *(self + 74) = nullptr;
    if ( v16 != nullptr )
      gameswf::free_internal(v16);
    *(self + 72) = nullptr;
  }
  if ( *(self + 71) != nullptr )
    sub_5459C0(*(self + 71));
  v17 = (uint32_t *)(*(self + 70));
  if ( v17 != nullptr )
    sub_5459C0((uint32_t *)((char *)v17 + *(uint32_t *)(*v17 - 16)));
  v18 = (int)(uintptr_t)(*(self + 66));
  v19 = (uint32_t *)(self + 65);
  if ( v18 <= 0 )
  {
    if ( v18 < 0 )
    {
      v39 = 8 * v18;
      do
      {
        v40 = (uint32_t *)(*v19 + v39);
        if ( v40 != nullptr )
        {
          *v40 = 0;
          v40[1] = 0;
        }
        v39 += 8;
        ++v18;
      }
      while ( v18 != 0 );
    }
  }
  else
  {
    for ( k = 0; k != v18; ++k )
    {
      v21 = *(gameswf::Self **)(*v19 + 8 * k);
      if ( v21 != nullptr )
      {
        v22 = (*(uint16_t *)v21)-- == 1;
        if ( v22 )
        {
          v47 = v19;
          gameswf::free_internal(v21);
          v19 = v47;
        }
      }
    }
  }
  v23 = (int)(uintptr_t)(*(self + 68));
  *(self + 66) = nullptr;
  if ( v23 == 0 )
  {
    v24 = (gameswf::Self *)*(self + 65);
    *(self + 67) = nullptr;
    if ( v24 != nullptr )
      gameswf::free_internal(v24);
    *(self + 65) = nullptr;
  }
  v25 = (gameswf::Self *)*(self + 63);
  if ( v25 != nullptr )
  {
    v22 = (*(uint16_t *)v25)-- == 1;
    if ( v22 )
      gameswf::free_internal(v25);
  }
  v26 = (gameswf::Self *)*(self + 57);
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2090408);
  if ( v26 != nullptr )
  {
    v27 = *((uint32_t *)v26 + 1);
    if ( v27 >= 0 )
    {
      v28 = 8;
      for ( m = 0; m <= v27; ++m )
      {
        v30 = (uint32_t *)((char *)v26 + v28);
        if ( *(uint32_t *)((char *)v26 + v28) != -2 )
        {
          *v30 = -2;
          v30[1] = 0;
          v26 = (gameswf::Self *)*(self + 57);
        }
        v28 += 16;
      }
    }
    gameswf::free_internal(v26);
    *(self + 57) = nullptr;
  }
  v31 = (int)(uintptr_t)(*(self + 54));
  v32 = (uint32_t *)(self + 53);
  if ( v31 <= 0 )
  {
    if ( v31 < 0 )
    {
      v37 = 4 * v31;
      do
      {
        v38 = (uint32_t *)(*v32 + v37);
        if ( v38 != nullptr )
          *v38 = 0;
        v37 += 4;
        ++v31;
      }
      while ( v31 != 0 );
    }
  }
  else
  {
    for ( n = 0; n != v31; ++n )
    {
      v34 = *(gameswf::RefCounted::Self **)(*v32 + 4 * n);
      if ( v34 != nullptr )
      {
        v48 = v32;
        gameswf::RefCounted::dropRef(v34);
        v32 = v48;
      }
    }
  }
  v35 = (int)(uintptr_t)(*(self + 56));
  *(self + 54) = nullptr;
  if ( v35 == 0 )
  {
    v36 = (gameswf::Self *)*(self + 53);
    *(self + 55) = nullptr;
    if ( v36 != nullptr )
      gameswf::free_internal(v36);
    *(self + 53) = nullptr;
  }
  gameswf::Character::Destroy((gameswf::Character::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::Destroy_ea115b9f0  (binary VA: 0x115b9f0)
// Original: gameswf::ASModel3D::~ASModel3D
// ----------------------------------------------------------------------------
void gameswf::ASModel3D::Destroy_ea115b9f0(volatile int32_t **self)
{
  gameswf::ASModel3D::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::addChild  (binary VA: 0x115ba30)
// Original: gameswf::ASModel3D::addChild
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::addChild(gameswf::Self **self, gameswf::Self **a2)
{
  gameswf::ASModel3D::Self *v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *WeakProxy;
  gameswf::Self *v9;
  gameswf::Self *v11;
  gameswf::Self *v12;
  int v13;
  int v14;
  int v15;
  gameswf::Self **v16;

  gameswf::ASModel3D::removeChild((gameswf::ASModel3D::Self *)self, a2);
  v2 = (gameswf::ASModel3D::Self *)(a2[64]);
  v16 = a2 + 63;
  if ( v2 != nullptr )
  {
    if ( *((uint8_t *)a2[63] + 2) != 0 )
    {
      gameswf::ASModel3D::removeChild(v2, a2);
    }
    else
    {
      sub_7E5ED0(v16, nullptr);
      a2[64] = nullptr;
    }
  }
  v3 = (int)(uintptr_t)(*(self + 66));
  v4 = (int)(uintptr_t)(*(self + 67));
  v5 = v3 + 1;
  if ( v3 + 1 <= v4 || *(self + 68) != nullptr )
  {
    v6 = *(self + 65);
  }
  else
  {
    v11 = (gameswf::Self *)(v5 + (v5 >> 1));
    *(self + 67) = v11;
    if ( v11 != nullptr )
    {
      v15 = v3 + 1;
      if ( *(self + 65) != nullptr )
        v6 = (gameswf::Self *)gameswf::realloc_internal(*(self + 65), 8 * (uint32_t)(uintptr_t)(v11), 8 * v4);
      else
        v6 = (gameswf::Self *)gameswf::malloc_internal(8 * (uint32_t)(uintptr_t)(v11));
      *(self + 65) = v6;
      v3 = (int)(uintptr_t)(*(self + 66));
      v5 = v15;
    }
    else
    {
      v12 = *(self + 65);
      if ( v12 != nullptr )
      {
        v14 = v3 + 1;
        gameswf::free_internal(v12);
        v3 = (int)(uintptr_t)(*(self + 66));
        v5 = v14;
      }
      *(self + 65) = nullptr;
      v6 = nullptr;
    }
  }
  v7 = (char *)v6 + 8 * v3;
  if ( v7 != nullptr )
  {
    *(uint32_t *)v7 = 0;
    *((uint32_t *)v7 + 1) = (uint32_t)(uintptr_t)(a2);
    v13 = v5;
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)a2);
    sub_7E5ED0((gameswf::Self **)v7, WeakProxy);
    v5 = v13;
  }
  *(self + 66) = (gameswf::Self *)v5;
  a2[64] = (gameswf::Self *)self;
  v9 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)self);
  sub_7E5ED0(v16, v9);
  return G4_VCALL<int>(*(self + 70), 104, (char *)a2 + 280);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::addChildNode  (binary VA: 0x115bc30)
// Original: gameswf::ASModel3D::addChildNode
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::addChildNode(int a1)
{
  gameswf::Self **v1;
  gameswf::Self **v2;
  int v3;

  v1 = *(gameswf::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = nullptr;
  v2 = nullptr;
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5 )
  {
    v2 = *(gameswf::Self ***)(v3 + 4);
    if ( v2 != nullptr && (*((uint8_t (**)(gameswf::Self **, int))*v2 + 2))(v2, 67) == 0 )
      v2 = nullptr;
  }
  return gameswf::ASModel3D::addChild(v1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::Construct  (binary VA: 0x115bcd0)
// Original: gameswf::ASModel3D::ASModel3D
// ----------------------------------------------------------------------------
gameswf::ASModel3D::Self * gameswf::ASModel3D::Construct(gameswf::ASModel3D::Self *self, gameswf::Player::Self *a2)
{
  uint8_t v3[20];
  uint8_t v4[48];

  gameswf::Character::Construct(self, a2, nullptr, -1, 67);
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090E08);
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 57) = 0;
  *((uint8_t *)self + 248) = 1;
  *((uint8_t *)self + 249) = 0;
  *((uint8_t *)self + 250) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 69) = 1065353216;
  *((uint32_t *)self + 70) = 0;
  *((uint32_t *)self + 71) = 0;
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint32_t *)self + 76) = 0;
  *((uint32_t *)self + 77) = 0;
  *((uint32_t *)self + 78) = 0;
  *((uint32_t *)self + 79) = 0;
  *((uint32_t *)self + 80) = 0;
  *((uint32_t *)self + 81) = 0;
  *((uint32_t *)self + 82) = 0;
  sub_776320((gameswf::String::Self *)v4, (gameswf::Self *)"Model3D");
  sub_776320((gameswf::String::Self *)v3, (gameswf::Self *)"gluic.extensions");
  *((uint32_t *)self + 6) = gameswf::ASClassManager::findClass(
                            (gameswf::ASClassManager::Self *)(*((uint32_t *)self + 4) + 236),
                            (const gameswf::String::Self *)v3,
                            (const gameswf::String::Self *)v4,
                            true);
  sub_59CE50((int)(uintptr_t)(v3));
  sub_59CE50((int)(uintptr_t)(v4));
  return (gameswf::ASModel3D::Self *)gameswf::ASModel3D::createScene(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::newOp  (binary VA: 0x115c350)
// Original: gameswf::ASModel3D::newOp
// ----------------------------------------------------------------------------
gameswf::ASModel3D::Self * gameswf::ASModel3D::newOp(gameswf::ASModel3D::Self *self)
{
  gameswf::ASModel3D::Self *v1;

  v1 = (gameswf::ASModel3D::Self *)opNew(0x14Cu);
  gameswf::ASModel3D::Construct(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::addNodeAnimator  (binary VA: 0x115c3a0)
// Original: gameswf::ASModel3D::addNodeAnimator
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::addNodeAnimator(gameswf::ASModel3D::Self *self)
{
  int result;
  gameswf::Self **v2;
  gameswf::Self *WeakProxy;
  gameswf::Self *v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  gameswf::Self ***v12;
  int v13;
  void (*v14)(int, gameswf::Self **);
  volatile int32_t *v15;
  int v16;
  void (*v17)(int, gameswf::Self **);
  volatile int32_t *v18;
  gameswf::Self *v19;
  int v20;
  float *v21;
  int v22;
  float *v23;
  gameswf::Self *v24;
  int v25;
  gameswf::Self *v26;
  gameswf::Self *v27;
  typedef int _g4_t_v28;
  typedef glitch::collada::ISceneNodeAnimator::Self *_g4_t_v29;
  typedef glitch::collada::ISceneNodeAnimator::Self *_g4_t_v30;
  typedef gameswf::Self *_g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v29)) > _g4_s1 ? (12u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v32)) > _g4_s4 ? (28u + sizeof(_g4_t_v32)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);

  result = *((uint32_t *)self + 76);
  if ( result != 0 )
  {
    v2 = (gameswf::Self **)opNew(0x38u);
    memset(v2, 0, 0x38u);
    gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v2);
    v2[3] = nullptr;
    v2[4] = nullptr;
    *v2 = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911B0);
    v2[6] = nullptr;
    v2[7] = nullptr;
    gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v2);
    v2[4] = (gameswf::Self *)(self);
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(self);
    sub_7E5ED0(v2 + 3, WeakProxy);
    v2[5] = *((gameswf::Self **)self + 73);
    v29 = (glitch::collada::ISceneNodeAnimator::Self *)opNew(0x5Cu);
    glitch::collada::CSceneNodeAnimatorSet::Construct(v29, (int *)self + 71);
    if ( v29 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)((char *)v29 + *(uint32_t *)(*(uint32_t *)v29 - 12) + 4), 1u);
    v4 = v2[6];
    v2[6] = (gameswf::Self *)(v29);
    if ( v4 != nullptr )
      sub_5459C0((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 12)));
    v30 = (glitch::collada::ISceneNodeAnimator::Self *)opNew(0x5Cu);
    glitch::collada::CSceneNodeAnimatorSet::Construct(v30, (int *)self + 71);
    if ( v30 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)((char *)v30 + *(uint32_t *)(*(uint32_t *)v30 - 12) + 4), 1u);
    v5 = v2[7];
    v2[7] = (gameswf::Self *)(v30);
    if ( v5 != nullptr )
      sub_5459C0((volatile int32_t *)((char *)v5 + *(uint32_t *)(*(uint32_t *)v5 - 12)));
    *((uint8_t *)v2 + 40) = 0;
    v2[8] = (gameswf::Self *)(2 * *((uint32_t *)self + 73));
    v6 = *((uint32_t *)self + 73);
    v2[11] = nullptr;
    v2[12] = (gameswf::Self *)981668463;
    v2[13] = (gameswf::Self *)1065353216;
    v2[9] = (gameswf::Self *)(2 * v6 + 1);
    v7 = *(uint32_t *)G4_VCALL<int>(v2[6], 68);
    *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(sub_1151870);
    *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v2);
    v8 = *(uint32_t *)G4_VCALL<int>(v2[7], 68);
    *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(sub_1151870);
    *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v2);
    v9 = *((uint32_t *)self + 73);
    v28 = *((uint32_t *)self + 74);
    v10 = v9 + 1;
    if ( v9 + 1 <= v28 || *((uint32_t *)self + 75) != 0 )
    {
      v11 = *((char **)self + 72);
    }
    else
    {
      v25 = v10 + (v10 >> 1);
      *((uint32_t *)self + 74) = v25;
      if ( v25 != 0 )
      {
        v27 = *((gameswf::Self **)self + 72);
        if ( v27 != nullptr )
          v11 = (char *)gameswf::realloc_internal(v27, 4 * v25, 4 * v28);
        else
          v11 = (char *)gameswf::malloc_internal(4 * v25);
        *((uint32_t *)self + 72) = (uint32_t)(uintptr_t)(v11);
        v9 = *((uint32_t *)self + 73);
      }
      else
      {
        v26 = *((gameswf::Self **)self + 72);
        if ( v26 != nullptr )
        {
          gameswf::free_internal(v26);
          v9 = *((uint32_t *)self + 73);
        }
        v11 = nullptr;
        *((uint32_t *)self + 72) = 0;
      }
    }
    v12 = (gameswf::Self ***)&v11[4 * v9];
    if ( v12 != nullptr )
    {
      *v12 = v2;
      gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v2);
    }
    *((uint32_t *)self + 73) = v10;
    v13 = *((uint32_t *)self + 76);
    v14 = *(void (**)(int, gameswf::Self **))(*(uint32_t *)v13 + 168);
    v32 = v2[6];
    if ( v32 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)((char *)v32 + *(uint32_t *)(*(uint32_t *)v32 - 12) + 4), 1u);
    v14(v13, &v32);
    if ( v32 != nullptr )
    {
      v15 = (volatile int32_t *)((char *)v32 + *(uint32_t *)(*(uint32_t *)v32 - 12));
      if ( __sync_fetch_and_add(v15 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v15, 8);
        G4_VCALL<void>(v15, 4);
      }
    }
    v16 = *((uint32_t *)self + 76);
    v17 = *(void (**)(int, gameswf::Self **))(*(uint32_t *)v16 + 168);
    v31 = v2[7];
    if ( v31 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)((char *)v31 + *(uint32_t *)(*(uint32_t *)v31 - 12) + 4), 1u);
    v17(v16, &v31);
    if ( v31 != nullptr )
    {
      v18 = (volatile int32_t *)((char *)v31 + *(uint32_t *)(*(uint32_t *)v31 - 12));
      if ( __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v18, 8);
        G4_VCALL<void>(v18, 4);
      }
    }
    (*(void (**)(uint32_t))(**((uint32_t **)self + 76) + 164))(*((uint32_t *)self + 76));
    v19 = v2[8];
    v20 = *((uint32_t *)self + 76);
    v21 = (float *)(*(uint32_t *)(v20 + 40) + 4 * (uint32_t)(uintptr_t)(v19));
    *(uint32_t *)(v20 + 76) -= *v21 > 0.00000011920929f;
    *v21 = 1.0;
    *(uint32_t *)(v20 + 76) += *(float *)(*(uint32_t *)(v20 + 40) + 4 * (uint32_t)(uintptr_t)(v19)) > 0.00000011920929f;
    v22 = *((uint32_t *)self + 76);
    v23 = (float *)(*(uint32_t *)(v22 + 40) + 4 * (uint32_t)(uintptr_t)(v2[9]));
    v24 = v2[9];
    *(uint32_t *)(v22 + 76) -= *v23 > 0.00000011920929f;
    *v23 = 0.0;
    *(uint32_t *)(v22 + 76) += *(float *)(*(uint32_t *)(v22 + 40) + 4 * (uint32_t)(uintptr_t)(v24)) > 0.00000011920929f;
    return gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::setMemberByName  (binary VA: 0x115c800)
// Original: gameswf::ASModel3D::setMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::setMemberByName(gameswf::ASModel3D::Self *self, const gameswf::StringI::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::String::Self *v3;
  gameswf::String::Self *v4;
  int i;
  long double v7; // fst7
  float v8; // xmm0_4

  v3 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
  if ( *(uint8_t *)a2 == 0xFF )
    v3 = *((gameswf::String::Self **)a2 + 3);
  if ( gameswf::String::stricmp(v3, "scale") != 0 )
  {
    v4 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
    if ( *(uint8_t *)a2 == 0xFF )
      v4 = *((gameswf::String::Self **)a2 + 3);
    if ( gameswf::String::stricmp(v4, "animatorCount") != 0 )
    {
      return gameswf::ASObject::setMemberByName(self, a2, a3);
    }
    else
    {
      for ( i = *((uint32_t *)self + 73); i < gameswf::ASValue::toInt(a3); ++i )
        gameswf::ASModel3D::addNodeAnimator(self);
      return 1;
    }
  }
  else
  {
    v7 = gameswf::ASValue::toNumber(a3);
    v8 = v7;
    *((float *)self + 69) = v8;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::loadModel  (binary VA: 0x115c8e0)
// Original: gameswf::ASModel3D::loadModel
// ----------------------------------------------------------------------------
void gameswf::ASModel3D::loadModel(gameswf::ASModel3D::Self *self, const gameswf::String::Self *a2, gameswf::ASArray::Self *a3)
{
  gameswf::ASModel3D::Self *v3;
  const gameswf::String::Self *v4;
  glitch::collada::CColladaDatabase::Self *v5;
  glitch::scene::ISceneNode::Self *v6;
  uint32_t *v7;
  int v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  gameswf::Self *v11;
  char *Workdir;
  char *v13;
  int v14;
  char *v15;
  int v16;
  glitch::collada::CSceneNodeAnimatorBlender::Self *v17;
  uint32_t *v18;
  glitch::scene::ISceneNode::Self *v19;
  void (*v20)(glitch::scene::ISceneNode::Self *, uint32_t **);
  int v21;
  void (*v22)(int, uint32_t *);
  volatile int32_t *v23;
  char *Animators;
  char *v25;
  char *v26;
  gameswf::RefCounted::Self *v27;
  int v28;
  uint32_t *v29;
  gameswf::Self *v30;
  gameswf::Self **v31;
  gameswf::Self *WeakProxy;
  gameswf::Self *v33;
  gameswf::Self *v34;
  gameswf::Self *v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  char *v40;
  gameswf::Self ***v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  int v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v57;
  typedef gameswf::Self *_g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef gameswf::RefCounted::Self *_g4_t_v70;
  typedef gameswf::RefCounted::Self *_g4_t_v71;
  typedef gameswf::RefCounted::Self *_g4_t_v72;
  typedef gameswf::RefCounted::Self *_g4_t_v73;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v74[4];
  typedef uint32_t _g4_t_v75[4];
  typedef uint32_t *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint32_t *_g4_t_v80;
  typedef uint32_t **_g4_t_v81;
  typedef int _g4_t_v82;
  typedef char *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef volatile int32_t **_g4_t_v86[5];
  typedef uint32_t _g4_t_v87[7];
  typedef gameswf::Self *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v46)) > _g4_s0 ? (8u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v47)) > _g4_s1 ? (12u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v48)) > _g4_s2 ? (16u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v49)) > _g4_s3 ? (20u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v50)) > _g4_s4 ? (24u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v51)) > _g4_s5 ? (28u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v52)) > _g4_s6 ? (32u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v53)) > _g4_s7 ? (32u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v54)) > _g4_s8 ? (36u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v55)) > _g4_s9 ? (36u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v56)) > _g4_s10 ? (40u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v57)) > _g4_s11 ? (40u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v58)) > _g4_s12 ? (40u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v59)) > _g4_s13 ? (40u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v60)) > _g4_s14 ? (40u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v61)) > _g4_s15 ? (40u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v62)) > _g4_s16 ? (40u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v63)) > _g4_s17 ? (44u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v64)) > _g4_s18 ? (48u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v65)) > _g4_s19 ? (52u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v66)) > _g4_s20 ? (56u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v67)) > _g4_s21 ? (60u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v68)) > _g4_s22 ? (60u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v69)) > _g4_s23 ? (60u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v70)) > _g4_s24 ? (64u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v71)) > _g4_s25 ? (64u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v72)) > _g4_s26 ? (64u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v73)) > _g4_s27 ? (64u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v74)) > _g4_s28 ? (68u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (84u + sizeof(_g4_t_v75)) > _g4_s29 ? (84u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v76)) > _g4_s30 ? (100u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v77)) > _g4_s31 ? (104u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v78)) > _g4_s32 ? (108u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v79)) > _g4_s33 ? (112u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v80)) > _g4_s34 ? (116u + sizeof(_g4_t_v80)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v81)) > _g4_s35 ? (120u + sizeof(_g4_t_v81)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v82)) > _g4_s36 ? (124u + sizeof(_g4_t_v82)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v83)) > _g4_s37 ? (128u + sizeof(_g4_t_v83)) : _g4_s37,
    _g4_s39 = (132u + sizeof(_g4_t_v84)) > _g4_s38 ? (132u + sizeof(_g4_t_v84)) : _g4_s38,
    _g4_s40 = (136u + sizeof(_g4_t_v85)) > _g4_s39 ? (136u + sizeof(_g4_t_v85)) : _g4_s39,
    _g4_s41 = (140u + sizeof(_g4_t_v86)) > _g4_s40 ? (140u + sizeof(_g4_t_v86)) : _g4_s40,
    _g4_s42 = (160u + sizeof(_g4_t_v87)) > _g4_s41 ? (160u + sizeof(_g4_t_v87)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v88)) > _g4_s42 ? (188u + sizeof(_g4_t_v88)) : _g4_s42,
    _g4_s44 = (192u + sizeof(_g4_t_v89)) > _g4_s43 ? (192u + sizeof(_g4_t_v89)) : _g4_s43,
    _g4_s45 = (200u + sizeof(_g4_t_v90)) > _g4_s44 ? (200u + sizeof(_g4_t_v90)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 60u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 64u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 64u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 64u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 64u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 68u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 84u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 100u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 104u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 108u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 116u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 120u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 124u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 128u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 132u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 136u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 140u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 160u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 188u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 192u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 200u);

  v88 = (gameswf::Self *)&self;
  v3 = self;
  v4 = a2;
  G4_VCALL<void>(self, 376, v46, v47, v48, v49, v50, v51, v52, v54, v56, v63, v64, v65, a3, v67, v70, v74[0], v74[1], v74[2], v74[3], v75[0], v75[1], v75[2], v75[3], v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86[0], v86[1], v86[2], v86[3], v86[4], v87[0], v87[1], v87[2], v87[3], v87[4], v87[5], v87[6]);
  gameswf::ASModel3D::createScene(v3);
  if ( *(uint8_t *)v4 == 0xFF )
    v5 = *((glitch::collada::CColladaDatabase::Self **)v4 + 3);
  else
    v5 = (glitch::collada::CColladaDatabase::Self *)((const gameswf::String::Self *)((char *)v4 + 1));
  v57 = *(glitch::video::IVideoDriver::Self **)(*(uint32_t *)(*((uint32_t *)v3 + 4) + 12) + 44);
  glitch::collada::CColladaDatabase::Construct((glitch::collada::CColladaDatabase::Self *)v86, v5, nullptr);
  glitch::collada::CColladaDatabase::constructScene(
    (glitch::collada::CColladaDatabase::Self *)v74,
    (glitch::video::IVideoDriver::Self *)v86,
    v57,
    1u);
  v6 = v74[0];
  if ( v74[0] != nullptr )
    __sync_add_and_fetch((volatile int32_t *)((char *)v74[0] + *(uint32_t *)(*(uint32_t *)v74[0] - 16) + 4), 1u);
  v7 = *((uint32_t **)v3 + 70);
  *((uint32_t *)v3 + 70) = (uint32_t)(uintptr_t)(v6);
  if ( v7 != nullptr )
    sub_5459C0((uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 16)));
  v8 = *(uint32_t *)v74[0];
  v77 = 1065353216;
  v78 = -1082130432;
  v79 = 1065353216;
  (*(void (**)(glitch::scene::ISceneNode::Self *, int *))(v8 + 168))(v74[0], &v77);
  v89 = 0;
  v9 = (volatile int32_t *)opNew(0x90u);
  glitch::collada::CAnimationSet::Construct((glitch::collada::CAnimationSet::Self *)v9);
  if ( v9 != nullptr )
    __sync_add_and_fetch(v9 + 1, 1u);
  v10 = *((volatile int32_t **)v3 + 71);
  *((uint32_t *)v3 + 71) = (uint32_t)(uintptr_t)(v9);
  if ( v10 != nullptr )
    sub_5459C0(v10);
  if ( v66 != 0 )
  {
    if ( *(int *)(v66 + 64) > 0 )
    {
      v68 = 0;
      v71 = nullptr;
      do
      {
        v14 = *(uint32_t *)(v66 + 60) + v68;
        if ( *(uint8_t *)v14 == 3 || *(uint8_t *)v14 == 4 )
        {
          v15 = *(char **)(v14 + 4);
        }
        else
        {
          v15 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
          {
            byte_20D6378 = 1;
            v16 = dword_20D6388 | 0x7FFFFF;
            byte_20D6379 = 0;
            dword_20D6388 = v16;
            BYTE2(dword_20D6388) = BYTE2(v16) & 0x7F;
            HIBYTE(dword_20D6388) = HIBYTE(v16) | 1;
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
            __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          }
        }
        if ( *v15 == -1 )
          v11 = *((gameswf::Self **)v15 + 3);
        else
          v11 = (gameswf::Self *)(v15 + 1);
        Workdir = gameswf::Player::getWorkdir(*((gameswf::Player::Self **)v3 + 4));
        sub_776320((gameswf::String::Self *)v87, (gameswf::Self *)Workdir);
        gameswf::getFullURL((gameswf::Self *)&v80, (const gameswf::String::Self *)v87, v11);
        sub_59CE50((int)(uintptr_t)(v87));
        v13 = (char *)&v80 + 1;
        if ( (uint8_t)(uintptr_t)(v80) == 0xFF )
          v13 = v83;
        (*(void (**)(uint32_t, char *))(**((uint32_t **)v3 + 71) + 24))(*((uint32_t *)v3 + 71), v13);
        sub_59CE50((int)(uintptr_t)(&v80));
        v71 = (gameswf::RefCounted::Self *)((char *)v71 + 1);
        v68 += 12;
      }
      while ( (int)(uintptr_t)(v71) < *(uint32_t *)(v66 + 64) );
    }
    (*(void (**)(uint32_t))(**((uint32_t **)v3 + 71) + 40))(*((uint32_t *)v3 + 71));
    v89 = 0;
    v17 = (glitch::collada::CSceneNodeAnimatorBlender::Self *)opNew(0x5Cu);
    glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(v17);
    if ( v17 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)((char *)v17 + *(uint32_t *)(*(uint32_t *)v17 - 12) + 4), 1u);
    v18 = *((uint32_t **)v3 + 76);
    *((uint32_t *)v3 + 76) = (uint32_t)(uintptr_t)(v17);
    if ( v18 != nullptr )
      sub_5459C0((uint32_t *)((char *)v18 + *(uint32_t *)(*v18 - 12)));
    gameswf::ASModel3D::addNodeAnimator(v3);
    v19 = v74[0];
    v20 = *(void (**)(glitch::scene::ISceneNode::Self *, uint32_t **))(*(uint32_t *)v74[0] + 144);
    v76 = *((uint32_t **)v3 + 76);
    if ( v76 != nullptr )
      __sync_add_and_fetch((uint32_t *)((char *)v76 + *(uint32_t *)(*v76 - 12) + 4), 1u);
    v20(v19, &v76);
    if ( v76 != nullptr )
      sub_5459C0((uint32_t *)((char *)v76 + *(uint32_t *)(*v76 - 12)));
  }
  else
  {
    Animators = (char *)(uintptr_t)(glitch::scene::ISceneNode::getAnimators(v74[0]));
    v25 = *(char **)Animators;
    if ( Animators != *(char **)Animators )
    {
      do
        v25 = *(char **)v25;
      while ( Animators != v25 );
      v26 = (char *)(uintptr_t)(glitch::scene::ISceneNode::getAnimators(v74[0]));
      v80 = (uint32_t *)(&v80);
      v81 = &v80;
      v27 = *(gameswf::RefCounted::Self **)v26;
      v72 = (gameswf::RefCounted::Self *)v26;
      if ( v26 != *(char **)v26 )
      {
        do
        {
          v89 = 0;
          v28 = sub_4EBDC0(0xCu);
          if ( v28 != -8 )
          {
            v29 = *((uint32_t **)v27 + 2);
            *(uint32_t *)(v28 + 8) = (uint32_t)(uintptr_t)(v29);
            if ( v29 != nullptr )
              __sync_add_and_fetch((uint32_t *)((char *)v29 + *(uint32_t *)(*v29 - 12) + 4), 1u);
          }
          sub_1901920(v28, &v80);
          v27 = *(gameswf::RefCounted::Self **)v27;
        }
        while ( v72 != v27 );
        v69 = v80;
        if ( v80 != (uint32_t *)(uintptr_t)(&v80) )
        {
          v73 = (gameswf::RefCounted::Self *)(v3);
          do
          {
            v30 = (gameswf::Self *)v69[2];
            if ( v30 != nullptr )
              __sync_add_and_fetch((volatile int32_t *)((char *)v30 + *(uint32_t *)(*(uint32_t *)v30 - 12) + 4), 1u);
            v58 = v30;
            v89 = 0;
            v31 = (gameswf::Self **)opNew(0x38u);
            memset(v31, 0, 0x38u);
            gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v31);
            v31[3] = nullptr;
            *v31 = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911B0);
            v31[4] = nullptr;
            v31[6] = nullptr;
            v31[7] = nullptr;
            gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v31);
            v31[4] = (gameswf::Self *)(v73);
            WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v73);
            sub_7E5ED0(v31 + 3, WeakProxy);
            v31[5] = *((gameswf::Self **)v73 + 73);
            v33 = v58;
            if ( v58 != nullptr )
              __sync_add_and_fetch((volatile int32_t *)((char *)v58 + *(uint32_t *)(*(uint32_t *)v58 - 12) + 4), 1u);
            v34 = v31[6];
            v31[6] = v58;
            if ( v34 != nullptr )
            {
              sub_5459C0((volatile int32_t *)((char *)v34 + *(uint32_t *)(*(uint32_t *)v34 - 12)));
              v33 = v58;
            }
            if ( v33 != nullptr )
              __sync_add_and_fetch((volatile int32_t *)((char *)v33 + *(uint32_t *)(*(uint32_t *)v33 - 12) + 4), 1u);
            v35 = v31[7];
            v31[7] = v33;
            if ( v35 != nullptr )
            {
              v59 = (unsigned int)(uintptr_t)(v33);
              sub_5459C0((volatile int32_t *)((char *)v35 + *(uint32_t *)(*(uint32_t *)v35 - 12)));
              v33 = (gameswf::Self *)v59;
            }
            *((uint8_t *)v31 + 40) = 0;
            v31[8] = (gameswf::Self *)(2 * *((uint32_t *)v73 + 73));
            v36 = *((uint32_t *)v73 + 73);
            v31[11] = nullptr;
            v31[12] = (gameswf::Self *)981668463;
            v31[13] = (gameswf::Self *)1065353216;
            v31[9] = (gameswf::Self *)(2 * v36 + 1);
            v60 = (unsigned int)(uintptr_t)(v33);
            v37 = *(uint32_t *)G4_VCALL<int>(v33, 68);
            *(uint32_t *)(v37 + 8) = (uint32_t)(uintptr_t)(sub_1151870);
            *(uint32_t *)(v37 + 12) = (uint32_t)(uintptr_t)(v31);
            v38 = *((uint32_t *)v73 + 73);
            v39 = (uint32_t *)v60;
            v55 = v38 + 1;
            v53 = *((uint32_t *)v73 + 74);
            if ( v38 + 1 > v53 )
            {
              if ( *((uint32_t *)v73 + 75) != 0 )
              {
                v40 = *((char **)v73 + 72);
              }
              else
              {
                v45 = v55 + (v55 >> 1);
                *((uint32_t *)v73 + 74) = v45;
                if ( v45 != 0 )
                {
                  if ( *((uint32_t *)v73 + 72) != 0 )
                  {
                    v88 = *((gameswf::Self **)v73 + 72);
                    v90 = 0;
                    v40 = (char *)gameswf::realloc_internal(v88, 4 * v45, 4 * v53);
                  }
                  else
                  {
                    v89 = 0;
                    v40 = (char *)gameswf::malloc_internal(4 * v45);
                  }
                  *((uint32_t *)v73 + 72) = (uint32_t)(uintptr_t)(v40);
                  v38 = *((uint32_t *)v73 + 73);
                  v39 = (uint32_t *)v60;
                }
                else
                {
                  if ( *((uint32_t *)v73 + 72) != 0 )
                  {
                    v88 = *((gameswf::Self **)v73 + 72);
                    v89 = 4 * v53;
                    gameswf::free_internal(v88);
                    v39 = (uint32_t *)v60;
                    v38 = *((uint32_t *)v73 + 73);
                  }
                  v40 = nullptr;
                  *((uint32_t *)v73 + 72) = 0;
                }
              }
            }
            else
            {
              v40 = *((char **)v73 + 72);
            }
            v41 = (gameswf::Self ***)&v40[4 * v38];
            if ( v41 != nullptr )
            {
              *v41 = v31;
              v61 = (unsigned int)(uintptr_t)(v39);
              gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v31);
              *((uint32_t *)v73 + 73) = v55;
              v39 = (uint32_t *)v61;
            }
            else
            {
              *((uint32_t *)v73 + 73) = v55;
            }
            v62 = v39;
            gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v31);
            sub_5459C0((uint32_t *)((char *)v62 + *(uint32_t *)(*v62 - 12)));
            v69 = (uint32_t *)*v69;
          }
          while ( v69 != (uint32_t *)(uintptr_t)(&v80) );
          v42 = v80;
          v3 = (gameswf::ASModel3D::Self *)(v73);
          if ( v80 != (uint32_t *)(uintptr_t)(&v80) )
          {
            while ( 1 )
            {
              v43 = (uint32_t *)v42[2];
              v44 = (uint32_t *)*v42;
              if ( v43 != nullptr )
                sub_5459C0((uint32_t *)((char *)v43 + *(uint32_t *)(*v43 - 12)));
              gll_operator_delete_arr((int)(uintptr_t)(v42));
              if ( v44 == (uint32_t *)(uintptr_t)(&v80) )
                break;
              v42 = v44;
            }
            v3 = (gameswf::ASModel3D::Self *)(v73);
          }
        }
      }
    }
  }
  v21 = *(uint32_t *)(*((uint32_t *)v3 + 77) + 4);
  v22 = *(void (**)(int, uint32_t *))(*(uint32_t *)v21 + 104);
  v75[0] = (uint32_t)(uintptr_t)(v74[0]);
  if ( v74[0] != nullptr )
    __sync_add_and_fetch((volatile int32_t *)((char *)v74[0] + *(uint32_t *)(*(uint32_t *)v74[0] - 16) + 4), 1u);
  v22(v21, v75);
  if ( v75[0] != 0 )
    sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v75[0] - 16) + v75[0]));
  if ( v74[0] != nullptr )
  {
    v23 = (volatile int32_t *)((char *)v74[0] + *(uint32_t *)(*(uint32_t *)v74[0] - 16));
    if ( __sync_fetch_and_add(v23 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v23, 8);
      G4_VCALL<void>(v23, 4);
    }
  }
  glitch::collada::CColladaDatabase::Destroy(v86);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::getCurrentNodeAnimator  (binary VA: 0x115d1a0)
// Original: gameswf::ASModel3D::getCurrentNodeAnimator
// ----------------------------------------------------------------------------
gameswf::ASModel3D::Self * gameswf::ASModel3D::getCurrentNodeAnimator(gameswf::ASModel3D::Self *self, int a2, int a3)
{
  gameswf::ASModel3D::Self *result;
  int v4;
  uint32_t **v5;
  uint32_t *v6;
  bool v7;

  result = self;
  v4 = *(uint32_t *)(*(uint32_t *)(a2 + 288) + 4 * a3);
  v5 = (uint32_t **)(v4 + 24);
  if ( *(uint32_t *)(v4 + 32) >= *(uint32_t *)(v4 + 36) )
    v5 = (uint32_t **)(v4 + 28);
  v6 = *v5;
  v7 = *v5 == nullptr;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(*v5);
  if ( !v7 )
    __sync_add_and_fetch((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12) + 4), 1u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::getCurrentAnimation  (binary VA: 0x115d1f0)
// Original: gameswf::ASModel3D::getCurrentAnimation
// ----------------------------------------------------------------------------
void gameswf::ASModel3D::getCurrentAnimation(int a1)
{
  uint32_t *v1;
  int v2;
  double CurrentAnimation; // xmm0_8
  typedef glitch::collada::CSceneNodeAnimatorSet::Self *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = nullptr;
  if ( v1[76] != 0 )
  {
    v2 = 0;
    if ( *(int *)(a1 + 16) > 0 )
      v2 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    gameswf::ASModel3D::getCurrentNodeAnimator((gameswf::ASModel3D::Self *)&v4, (int)(uintptr_t)(v1), v2);
    CurrentAnimation = (double)glitch::collada::CSceneNodeAnimatorSet::getCurrentAnimation(v4);
    gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, CurrentAnimation);
    if ( v4 != nullptr )
      sub_5459C0((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 12)));
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::getNextNodeAnimator  (binary VA: 0x115d2c0)
// Original: gameswf::ASModel3D::getNextNodeAnimator
// ----------------------------------------------------------------------------
gameswf::ASModel3D::Self * gameswf::ASModel3D::getNextNodeAnimator(gameswf::ASModel3D::Self *self, int a2, int a3)
{
  gameswf::ASModel3D::Self *result;
  int v4;
  uint32_t **v5;
  uint32_t *v6;
  bool v7;

  result = self;
  v4 = *(uint32_t *)(*(uint32_t *)(a2 + 288) + 4 * a3);
  v5 = (uint32_t **)(v4 + 28);
  if ( *(uint32_t *)(v4 + 32) >= *(uint32_t *)(v4 + 36) )
    v5 = (uint32_t **)(v4 + 24);
  v6 = *v5;
  v7 = *v5 == nullptr;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(*v5);
  if ( !v7 )
    __sync_add_and_fetch((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12) + 4), 1u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::setCurrentAnimation  (binary VA: 0x115d310)
// Original: gameswf::ASModel3D::setCurrentAnimation
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::setCurrentAnimation(int a1)
{
  uint32_t *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7[4];

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = nullptr;
  result = v1[76];
  if ( result != 0 )
  {
    v3 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v4 = 0;
    v5 = 0;
    if ( *(int *)(a1 + 16) > 1 )
    {
      v5 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
      v4 = 4 * v5;
    }
    v6 = *(uint32_t *)(v1[72] + v4);
    gameswf::ASModel3D::getNextNodeAnimator((gameswf::ASModel3D::Self *)v7, (int)(uintptr_t)(v1), v5);
    G4_VCALL<void>(v7[0], 164, v3);
    result = v7[0];
    if ( v7[0] != 0 )
      result = sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v7[0] - 12) + v7[0]));
    *(uint32_t *)(v6 + 44) = 0;
    *(uint8_t *)(v6 + 40) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::setLoop  (binary VA: 0x115d420)
// Original: gameswf::ASModel3D::setLoop
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::setLoop(int a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  volatile int32_t *v4;
  uint32_t *v5;
  int result;
  volatile int32_t *v7;
  typedef volatile int32_t *_g4_t_v8;
  typedef uint8_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v9)) > _g4_s1 ? (15u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 67) == 0 )
    v1 = 0;
  v2 = 0;
  v9 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  if ( *(int *)(a1 + 16) > 1 )
    v2 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  gameswf::ASModel3D::getCurrentNodeAnimator((gameswf::ASModel3D::Self *)&v10, v1, v2);
  v3 = (uint32_t *)G4_VCALL<int>(v10, 68);
  G4_VCALL<void>(*v3, 72, v9);
  if ( v10 != 0 )
  {
    v4 = (volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v10 - 12) + v10);
    if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
    {
      v8 = v4;
      G4_VCALL<void>(v4, 8);
      G4_VCALL<void>(v8, 4);
    }
  }
  gameswf::ASModel3D::getNextNodeAnimator((gameswf::ASModel3D::Self *)v11, v1, v2);
  v5 = (uint32_t *)G4_VCALL<int>(v11[0], 68);
  result = G4_VCALL<int>(*v5, 72, v9);
  if ( v11[0] != 0 )
  {
    v7 = (volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v11[0] - 12) + v11[0]);
    result = __sync_fetch_and_add(v7 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      G4_VCALL<void>(v7, 8);
      return G4_VCALL<int>(v7, 4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::setClip  (binary VA: 0x115d580)
// Original: gameswf::ASModel3D::setClip
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::setClip(int a1)
{
  int v1;
  int v2;
  char v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  char *v14;
  uint32_t *v15;
  int v17;
  int v18;
  int v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef void *_g4_t_obj;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef void (*_g4_t_v39)(int, char *);
  typedef void (*_g4_t_v40)(int, int);
  typedef uint32_t _g4_t_v41[4];
  typedef int _g4_t_v42;
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int *_g4_t_v48;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v24)) > _g4_s3 ? (12u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v25)) > _g4_s4 ? (16u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v26)) > _g4_s5 ? (20u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v27)) > _g4_s6 ? (20u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v28)) > _g4_s7 ? (20u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v29)) > _g4_s8 ? (20u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_obj)) > _g4_s9 ? (24u + sizeof(_g4_t_obj)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v31)) > _g4_s10 ? (28u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v32)) > _g4_s11 ? (32u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v33)) > _g4_s12 ? (36u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v34)) > _g4_s13 ? (40u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v35)) > _g4_s14 ? (44u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v36)) > _g4_s15 ? (48u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v37)) > _g4_s16 ? (52u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v38)) > _g4_s17 ? (56u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v39)) > _g4_s18 ? (56u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v40)) > _g4_s19 ? (56u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v41)) > _g4_s20 ? (60u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v42)) > _g4_s21 ? (76u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v43)) > _g4_s22 ? (80u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v44)) > _g4_s23 ? (84u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v45)) > _g4_s24 ? (88u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v46)) > _g4_s25 ? (92u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v47)) > _g4_s26 ? (96u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v48)) > _g4_s27 ? (100u + sizeof(_g4_t_v48)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 92u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);

  v48 = &a1;
  v1 = a1;
  v2 = *(uint32_t *)(a1 + 4);
  if ( v2 != 0 )
  {
    v26 = *(uint32_t *)(a1 + 4);
    v3 = (*(int (**)(int, int))(*(uint32_t *)v2 + 8))(v26, 67);
    v2 = v26;
    if ( v3 == 0 )
      v2 = 0;
  }
  v4 = **(uint32_t **)(v1 + 12);
  v5 = 3 * *(uint32_t *)(v1 + 20);
  v27 = v2;
  LOWORD(v42) = 0;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v42, (const gameswf::ASValue::Self *)(v4 + 4 * v5));
  v6 = 0;
  v7 = 0;
  v8 = v27;
  if ( *(int *)(v1 + 16) > 1 )
  {
    v7 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 4 * (3 * *(uint32_t *)(v1 + 20) - 3)));
    v6 = 4 * v7;
    v8 = v27;
  }
  v9 = *(uint32_t *)(*(uint32_t *)(v8 + 288) + v6);
  if ( *(float *)(v9 + 48) <= 0.0 )
    gameswf::ASModel3D::getNextNodeAnimator((gameswf::ASModel3D::Self *)v41, v8, v7);
  else
    gameswf::ASModel3D::getCurrentNodeAnimator((gameswf::ASModel3D::Self *)v41, v8, v7);
  v10 = *(uint32_t *)v41[0];
  if ( (uint8_t)v42 != 2 )
  {
    v11 = (*(int (**)(uint32_t, int, int, int, int, int, int, void *, int, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, int, char *, int, int, int, int))(v10 + 68))(
            v41[0],
            v21,
            v22,
            v23,
            v24,
            v25,
            v27,
            obj,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v41[0],
            v41[1],
            v41[2],
            v41[3],
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
    v12 = *(uint32_t *)v11;
    v39 = *(void (**)(int, char *))(**(uint32_t **)v11 + 24);
    if ( (uint8_t)v42 == 3 || (uint8_t)v42 == 4 )
    {
      v13 = v43;
      if ( *v43 != -1 )
      {
LABEL_13:
        v14 = v13 + 1;
LABEL_14:
        v39(v12, v14);
        goto LABEL_15;
      }
    }
    else
    {
      v13 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 )
      {
        v29 = *(uint32_t *)v11;
        v19 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
        v12 = v29;
        v13 = (char *)(&byte_20D6378);
        if ( v19 != 0 )
        {
          v20 = dword_20D6388;
          byte_20D6378 = 1;
          byte_20D6379 = 0;
          dword_20D6388 |= 0x7FFFFFu;
          BYTE2(dword_20D6388) &= ~0x80u;
          HIBYTE(dword_20D6388) = ((v20 | 0x7FFFFFu) >> 24) | 1;
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
          __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          v13 = (char *)(&byte_20D6378);
          v12 = v29;
        }
      }
      if ( byte_20D6378 != -1 )
        goto LABEL_13;
    }
    v14 = *((char **)v13 + 3);
    goto LABEL_14;
  }
  v17 = (*(int (**)(uint32_t, int, int, int, int, int, int, void *, int, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, int, char *, int, int, int, int))(v10 + 68))(
          v41[0],
          v21,
          v22,
          v23,
          v24,
          v25,
          v27,
          obj,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v41[0],
          v41[1],
          v41[2],
          v41[3],
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
  v28 = *(uint32_t *)v17;
  v40 = *(void (**)(int, int))(**(uint32_t **)v17 + 20);
  v18 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)&v42);
  v40(v28, v18);
LABEL_15:
  v15 = (uint32_t *)v41[0];
  *(uint32_t *)(v9 + 44) = 0;
  *(uint8_t *)(v9 + 40) = 1;
  if ( v15 != nullptr )
    sub_5459C0((uint32_t *)((char *)v15 + *(uint32_t *)(*v15 - 12)));
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v42);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::updateChildTransformation  (binary VA: 0x115e6b0)
// Original: gameswf::ASModel3D::updateChildTransformation
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASModel3D::updateChildTransformation(const gameswf::Matrix::Self **self)
{
  float v1;
  gameswf::Self *result;
  int v3;
  int v4;
  gameswf::Self **v5;
  typedef uint32_t _g4_t_v6[16];
  typedef float _g4_t_v7[3];
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef float _g4_t_v21[16];
  typedef float _g4_t_v22[23];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v7)) > _g4_s1 ? (64u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v8)) > _g4_s2 ? (76u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v9)) > _g4_s3 ? (80u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v10)) > _g4_s4 ? (84u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v11)) > _g4_s5 ? (88u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v12)) > _g4_s6 ? (92u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v13)) > _g4_s7 ? (96u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v14)) > _g4_s8 ? (100u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v15)) > _g4_s9 ? (104u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v16)) > _g4_s10 ? (108u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v17)) > _g4_s11 ? (112u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v18)) > _g4_s12 ? (116u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v19)) > _g4_s13 ? (120u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (124u + sizeof(_g4_t_v20)) > _g4_s14 ? (124u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v21)) > _g4_s15 ? (128u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (192u + sizeof(_g4_t_v22)) > _g4_s16 ? (192u + sizeof(_g4_t_v22)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 64u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 76u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 80u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 84u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 88u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 92u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 96u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 100u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 104u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 108u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 112u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 116u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 120u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 124u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 128u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 192u);

  memset(v6, 0, sizeof(v6));
  v6[15] = 1065353216;
  v6[10] = 1065353216;
  v6[5] = 1065353216;
  v6[0] = 1065353216;
  gameswf::ASDisplayObjectContainer::getTransform(self, (gameswf::Transform::Self *)v6);
  v7[0] = *(float *)v6;
  v8 = v6[3];
  v10 = v6[5];
  v12 = v6[7];
  v15 = v6[10];
  v19 = v6[14];
  v20 = v6[15];
  v9 = v6[1];
  v7[1] = *(float *)&v6[4];
  v14 = v6[6];
  v7[2] = *(float *)&v6[8];
  v11 = v6[9];
  v13 = v6[2];
  v16 = v6[14];
  v17 = v6[3];
  v18 = v6[7];
  memset(v21, 0, sizeof(v21));
  v1 = *((float *)self + 69);
  v12 = v6[13];
  v8 = v6[12];
  v21[0] = v1;
  v21[5] = v1;
  v21[10] = v1;
  v19 = v6[11];
  v21[15] = 1.0;
  v22[0] = *(float *)v6;
  v22[1] = *(float *)&v6[4];
  v22[2] = *(float *)&v6[8];
  v22[3] = *(float *)&v6[12];
  v22[4] = *(float *)&v6[1];
  v22[5] = *(float *)&v6[5];
  v22[6] = *(float *)&v6[9];
  v22[7] = *(float *)&v6[13];
  v22[8] = *(float *)&v6[2];
  v22[9] = *(float *)&v6[6];
  v22[10] = *(float *)&v6[10];
  v22[11] = *(float *)&v6[14];
  v22[12] = *(float *)&v6[3];
  v22[13] = *(float *)&v6[7];
  v22[14] = *(float *)&v6[11];
  v22[15] = *(float *)&v6[15];
  sub_819AF0(v7, v22, v21);
  result = (gameswf::Self *)glitch::scene::ISceneNode::setRelativeTransformation(
                        *(self + 70),
                        (const glitch::core::CMatrix4<float> *)v7);
  v3 = (int)(uintptr_t)(*(self + 66));
  if ( v3 > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = (gameswf::Self **)((char *)*(self + 65) + 8 * v4);
      result = v5[1];
      if ( result == nullptr )
        goto LABEL_4;
      if ( *((uint8_t *)*v5 + 2) != 0 )
      {
        result = (gameswf::Self *)gameswf::ASModel3D::updateChildTransformation((const gameswf::Matrix::Self **)(v5[1]));
        v3 = (int)(uintptr_t)(*(self + 66));
LABEL_4:
        if ( ++v4 >= v3 )
          return result;
      }
      else
      {
        ++v4;
        result = sub_7E5ED0(v5, nullptr);
        v5[1] = nullptr;
        v3 = (int)(uintptr_t)(*(self + 66));
        if ( v4 >= v3 )
          return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::display  (binary VA: 0x1161ba0)
// Original: gameswf::ASModel3D::display
// ----------------------------------------------------------------------------
int gameswf::ASModel3D::display(gameswf::ASModel3D::Self *self)
{
  int result;

  if ( *((uint32_t *)self + 64) != 0 )
  {
    result = *((uint32_t *)self + 63);
    if ( *(uint8_t *)(result + 2) != 0 )
      return result;
    sub_7E5ED0((gameswf::Self **)self + 63, nullptr);
    *((uint32_t *)self + 64) = 0;
  }
  gameswf::ASDisplayObjectContainer::display((gameswf::Self **)self);
  result = *((uint32_t *)self + 77);
  if ( result != 0 )
    return sub_115EA20((int)(uintptr_t)(self));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::is  (binary VA: 0x1162150)
// Original: gameswf::ASModel3D::is
// ----------------------------------------------------------------------------
bool gameswf::ASModel3D::is(gameswf::ASModel3D::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 67 && a2 != 4 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::Animator::Destroy  (binary VA: 0x1162bf0)
// Original: gameswf::ASModel3D::Animator::~Animator
// ----------------------------------------------------------------------------
void gameswf::ASModel3D::Animator::Destroy(gameswf::ASModel3D::Animator::Self *self)
{
  gameswf::ASModel3D::Animator::Self *v1;
  char *v2;
  gameswf::ASModel3D::Animator::Self *v3;
  uint32_t *v4;
  volatile int32_t *v5;
  gameswf::Self *v6;
  char *v8;
  gameswf::ASModel3D::Animator::Self *v9;

  v1 = (gameswf::ASModel3D::Animator::Self *)((char *)self + 32);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20911B0);
  v2 = (char *)self + 28;
  v3 = (gameswf::ASModel3D::Animator::Self *)((char *)self + 32);
  do
  {
    v4 = *(uint32_t **)&v2[v1 - v3];
    if ( v4 != nullptr )
    {
      v5 = (volatile int32_t *)((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 12)));
      if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
      {
        v8 = v2;
        v9 = v3;
        G4_VCALL<void>(v5, 8);
        G4_VCALL<void>(v5, 4);
        v2 = v8;
        v3 = v9;
      }
    }
    v1 = (gameswf::ASModel3D::Animator::Self *)((char *)v1 - 4);
  }
  while ( (gameswf::ASModel3D::Animator::Self *)((char *)self + 24) != v1 );
  v6 = *((gameswf::Self **)self + 3);
  if ( v6 != nullptr && (*(uint16_t *)v6)-- == 1 )
    gameswf::free_internal(v6);
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3D::Animator::Destroy_ea1162cc0  (binary VA: 0x1162cc0)
// Original: gameswf::ASModel3D::Animator::~Animator
// ----------------------------------------------------------------------------
void gameswf::ASModel3D::Animator::Destroy_ea1162cc0(gameswf::ASModel3D::Animator::Self *self)
{
  gameswf::ASModel3D::Animator::Self *v1;
  char *v2;
  gameswf::ASModel3D::Animator::Self *v3;
  uint32_t *v4;
  volatile int32_t *v5;
  gameswf::Self *v6;
  char *v8;
  gameswf::ASModel3D::Animator::Self *v9;

  v1 = (gameswf::ASModel3D::Animator::Self *)((char *)self + 32);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20911B0);
  v2 = (char *)self + 28;
  v3 = (gameswf::ASModel3D::Animator::Self *)((char *)self + 32);
  do
  {
    v4 = *(uint32_t **)&v2[v1 - v3];
    if ( v4 != nullptr )
    {
      v5 = (volatile int32_t *)((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 12)));
      if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
      {
        v8 = v2;
        v9 = v3;
        G4_VCALL<void>(v5, 8);
        G4_VCALL<void>(v5, 4);
        v2 = v8;
        v3 = v9;
      }
    }
    v1 = (gameswf::ASModel3D::Animator::Self *)((char *)v1 - 4);
  }
  while ( (gameswf::ASModel3D::Animator::Self *)((char *)self + 24) != v1 );
  v6 = *((gameswf::Self **)self + 3);
  if ( v6 != nullptr && (*(uint16_t *)v6)-- == 1 )
    gameswf::free_internal(v6);
  gameswf::RefCounted::Destroy(self);
  opDelete(self);
}


