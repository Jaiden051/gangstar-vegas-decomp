#include "Core/Utils/DecompTypes.h"
#include "gameswf_SceneNode.h"

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::getCullingData  (binary VA: 0x10d51c0)
// Original: gameswf::SceneNode::getCullingData
// ----------------------------------------------------------------------------
int gameswf::SceneNode::getCullingData(gameswf::SceneNode::Self *self, glitch::scene::ICullingDataConsumer *a2)
{
  return G4_VCALL<int>(a2, 8, self, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::vthunk_Destroy  (binary VA: 0x10d5310)
// Original: `virtual thunk to'gameswf::SceneNode::~SceneNode
// ----------------------------------------------------------------------------
void gameswf::SceneNode::vthunk_Destroy(gameswf::SceneNode::Self *self)
{
  gameswf::SceneNode::Destroy((gameswf::SceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::Destroy  (binary VA: 0x10d5740)
// Original: gameswf::SceneNode::~SceneNode
// ----------------------------------------------------------------------------
void gameswf::SceneNode::Destroy(gameswf::SceneNode::Self *self)
{
  gameswf::SceneNode::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::Destroy  (binary VA: 0x10d5780)
// Original: gameswf::SceneNode::~SceneNode
// ----------------------------------------------------------------------------
void gameswf::SceneNode::Destroy(gameswf::SceneNode::Self *self, uint32_t *a2)
{
  gameswf::SceneNode::Self *v2;
  int v3;
  int v4;
  int v5;
  volatile int32_t *v6;
  uint16_t ParameterID;
  glitch::video::CMaterial::Self *v8;
  bool v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  gameswf::Self *v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  gameswf::Self *v20;
  int v21;
  volatile int32_t *v22;
  int v23;
  int32_t v24;
  int v25;
  int32_t v26;
  uint32_t *v27;
  volatile int32_t *v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36[3];
  typedef uint32_t _g4_t_v37[4];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v33)) > _g4_s4 ? (28u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v34)) > _g4_s5 ? (32u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v35)) > _g4_s6 ? (32u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v36)) > _g4_s7 ? (36u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v37)) > _g4_s8 ? (48u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v38)) > _g4_s9 ? (64u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v39)) > _g4_s10 ? (68u + sizeof(_g4_t_v39)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);

  v37[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v34 = a2;
  v3 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)v2 + *(uint32_t *)(v3 - 12)) = v34[4];
  *(uint32_t *)((char *)v2 + *(uint32_t *)(*(uint32_t *)v2 - 16)) = v34[5];
  (*(void (**)(uint32_t *, uint32_t, int, int, int, int, int, uint32_t *, uint32_t *, uint32_t *, uint32_t *))(**((uint32_t **)v2 + 65) + 288))(
    v37,
    *((uint32_t *)v2 + 65),
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v36[0],
    v36[1],
    v36[2]);
  v4 = *(uint32_t *)v37[0];
  v39 = 0;
  v38 = v37[0];
  (*(void (**)(uint32_t **))(v4 + 24))(v36);
  v5 = v37[0];
  if ( v37[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v37[0] + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v5, 8);
    G4_VCALL<void>(v5, 4);
  }
  if ( v36[0] != nullptr )
  {
    v6 = (volatile int32_t *)v36[0][1];
    if ( v6 != nullptr )
      __sync_add_and_fetch(v6, 1u);
    ParameterID = glitch::video::CMaterialRenderer::getParameterID((int)(uintptr_t)(v6), 2, 0, 0);
    *((uint16_t *)v2 + 138) = ParameterID;
    if ( ParameterID != 0xFFFF )
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
        v36[0],
        ParameterID,
        0,
        (int *)v2 + 67);
    if ( v6 != nullptr && __sync_fetch_and_add(v6, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterialRenderer::Destroy((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v6);
      gll_operator_delete_arr((int)(uintptr_t)(v6));
    }
    v8 = (glitch::video::CMaterial::Self *)v36[0];
    if ( v36[0] != nullptr )
    {
      v9 = *v36[0] == 2;
      _mm_mfence();
      if ( v9 )
        glitch::video::CMaterial::removeFromRootSceneNode(v8);
      if ( __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v8);
        gll_operator_delete_arr((int)(uintptr_t)(v8));
      }
    }
  }
  v10 = *((uint32_t *)v2 + 136);
  if ( v10 < 0 )
  {
    v11 = 4 * v10;
    do
    {
      v12 = (uint32_t *)(*((uint32_t *)v2 + 135) + v11);
      if ( v12 != nullptr )
        *v12 = 0;
      v11 += 4;
      ++v10;
    }
    while ( v10 != 0 );
  }
  v13 = *((uint32_t *)v2 + 138);
  *((uint32_t *)v2 + 136) = 0;
  if ( v13 == 0 )
  {
    v14 = *((gameswf::Self **)v2 + 135);
    v15 = *((uint32_t *)v2 + 137);
    *((uint32_t *)v2 + 137) = 0;
    if ( v14 != nullptr )
    {
      v38 = 4 * v15;
      gameswf::free_internal(v14);
    }
    *((uint32_t *)v2 + 135) = 0;
  }
  v16 = *((uint32_t *)v2 + 132);
  if ( v16 < 0 )
  {
    v17 = 4 * v16;
    do
    {
      v18 = (uint32_t *)(*((uint32_t *)v2 + 131) + v17);
      if ( v18 != nullptr )
        *v18 = 0;
      v17 += 4;
      ++v16;
    }
    while ( v16 != 0 );
  }
  v19 = *((uint32_t *)v2 + 134);
  *((uint32_t *)v2 + 132) = 0;
  if ( v19 == 0 )
  {
    v20 = *((gameswf::Self **)v2 + 131);
    v21 = *((uint32_t *)v2 + 133);
    *((uint32_t *)v2 + 133) = 0;
    if ( v20 != nullptr )
    {
      v38 = 4 * v21;
      gameswf::free_internal(v20);
    }
    *((uint32_t *)v2 + 131) = 0;
  }
  v22 = *((volatile int32_t **)v2 + 68);
  if ( v22 != nullptr && __sync_fetch_and_add(v22 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v22, 8);
    G4_VCALL<void>(v22, 4);
  }
  v23 = *((uint32_t *)v2 + 67);
  if ( v23 != 0 )
  {
    while ( 1 )
    {
      v24 = *(uint32_t *)(v23 + 4);
      _mm_mfence();
      if ( v24 == 2 )
      {
        if ( *(uint16_t *)(v23 + 32) == 0xFFFF )
          goto LABEL_41;
        glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v23);
      }
      else
      {
        if ( v24 == 1 )
        {
          G4_VCALL<void>(v23, 4);
          break;
        }
LABEL_41:
        if ( v24 == __sync_val_compare_and_swap((volatile int32_t *)(v23 + 4), v24, v24 - 1) )
          break;
      }
    }
  }
  v25 = *((uint32_t *)v2 + 66);
  if ( v25 != 0 )
  {
    while ( 1 )
    {
      v26 = *(uint32_t *)(v25 + 4);
      _mm_mfence();
      if ( v26 == 2 )
      {
        if ( *(uint16_t *)(v25 + 32) == 0xFFFF )
          goto LABEL_45;
        glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v25);
      }
      else
      {
        if ( v26 == 1 )
        {
          G4_VCALL<void>(v25, 4);
          break;
        }
LABEL_45:
        if ( v26 == __sync_val_compare_and_swap((volatile int32_t *)(v25 + 4), v26, v26 - 1) )
          break;
      }
    }
  }
  v27 = *((uint32_t **)v2 + 65);
  if ( v27 != nullptr )
  {
    v28 = (volatile int32_t *)((uint32_t *)((char *)v27 + *(uint32_t *)(*v27 - 16)));
    if ( __sync_fetch_and_add(v28 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v28, 8);
      G4_VCALL<void>(v28, 4);
    }
  }
  glitch::scene::ISceneNode::Destroy((volatile int32_t **)v2, (volatile int32_t **)(v35 + 4));
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::collectUVs  (binary VA: 0x10d5b40)
// Original: gameswf::SceneNode::collectUVs
// ----------------------------------------------------------------------------
unsigned int * gameswf::SceneNode::collectUVs(int a1, uint32_t *a2, glitch::video::SVertexStream::Self *a3, signed int a4)
{
  uint32_t *v4;
  unsigned int *result;
  int v6;
  int v7;
  signed int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int *v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  unsigned int v19;
  glitch::video::SVertexStream::Self *v20;
  unsigned int v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  float *v25;
  int v26;
  char *v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  int *v31;
  int v32; // xmm0_4
  int v33;
  uint32_t *v34;
  typedef gameswf::Point::Self *_g4_t_v35;
  typedef signed int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef glitch::video::SVertexStream::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef signed int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t _g4_t_v51[9];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v36)) > _g4_s1 ? (24u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v37)) > _g4_s2 ? (24u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v38)) > _g4_s3 ? (28u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v39)) > _g4_s4 ? (32u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v40)) > _g4_s5 ? (36u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v41)) > _g4_s6 ? (40u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v42)) > _g4_s7 ? (44u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v43)) > _g4_s8 ? (48u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v44)) > _g4_s9 ? (48u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v45)) > _g4_s10 ? (52u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v46)) > _g4_s11 ? (56u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v47)) > _g4_s12 ? (56u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v48)) > _g4_s13 ? (60u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v49)) > _g4_s14 ? (60u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v50)) > _g4_s15 ? (68u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v51)) > _g4_s16 ? (72u + sizeof(_g4_t_v51)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);

  v51[8] = (uint32_t)(uintptr_t)(&a1);
  v4 = a2;
  v45 = a3;
  v48 = a4;
  result = (unsigned int *)G4_VCALL<int>(*a2, 16);
  if ( result != nullptr )
  {
    result = (unsigned int *)(*(int (**)(int *))(*(uint32_t *)*v4 + 20))(&v50);
    v6 = v50;
    if ( v50 != 0 )
    {
      result = (unsigned int *)__sync_fetch_and_add((volatile int32_t *)(v50 + 4), 0xFFFFFFFF);
      if ( result == (unsigned int *)((char *)&dword_0 + 1) )
      {
        G4_VCALL<void>(v6, 8);
        result = (unsigned int *)G4_VCALL<int>(v6, 4);
      }
    }
    v7 = *(uint32_t *)(v6 + 8);
    v8 = *(uint32_t *)(v6 + 20);
    if ( v7 != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)v7, 1u);
      result = (unsigned int *)__sync_fetch_and_add((volatile int32_t *)v7, 0xFFFFFFFF);
      if ( result == (unsigned int *)((char *)&dword_0 + 1) )
      {
        v37 = v8;
        glitch::video::CVertexStreams::Destroy((glitch::video::CVertexStreams::Self *)v7);
        result = (unsigned int *)gll_operator_delete_arr(v7);
        v8 = v37;
      }
    }
    if ( *(uint8_t *)(v7 + 12) != 0 )
    {
      result = *(unsigned int **)(v6 + 12);
      if ( result != nullptr )
      {
        v36 = v8;
        result = (unsigned int *)glitch::video::IBuffer::mapInternal(
                                   (glitch::video::IBuffer::Self *)result,
                                   0,
                                   0,
                                   result[5],
                                   0);
        v9 = v36;
        if ( result != nullptr )
        {
          if ( v48 <= v36 )
            v9 = v48;
          v49 = v9;
          v46 = dword_20C15D4[*(uint16_t *)(v6 + 32)];
          if ( v9 != 0 )
          {
            v10 = 0;
            if ( dword_20C15D4[*(uint16_t *)(v6 + 32)] == 2 )
            {
              do
              {
                v11 = *(uint16_t *)result;
                result = (unsigned int *)((char *)result + v46);
                v51[v10++] = v11;
              }
              while ( v49 != v10 );
            }
            else if ( v46 == 4 )
            {
              do
              {
                v12 = *result;
                result = (unsigned int *)((char *)result + v46);
                v51[v10++] = v12;
              }
              while ( v49 != v10 );
            }
            else if ( v46 == 1 )
            {
              do
              {
                v13 = *(uint8_t *)result;
                result = (unsigned int *)((char *)result + v46);
                v51[v10++] = v13;
              }
              while ( v49 != v10 );
            }
            else
            {
              do
                ++v10;
              while ( v49 != v10 );
            }
          }
          if ( *(uint16_t *)(v7 + 48) != 2 )
            return (unsigned int *)glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v6 + 12));
          switch ( *(uint16_t *)(v7 + 46) )
          {
            case 0:
              gameswf::collect_signed_char_8e8080((gameswf::Self *)v51, (const unsigned int *)(v49 / 3), v7 + 36, v45, v35);
              break;
            case 1:
              gameswf::collect_unsigned_char_95eae6((gameswf::Self *)v51, (const unsigned int *)(v49 / 3), v7 + 36, v45, v35);
              break;
            case 2:
              gameswf::collect_short_id_68abf2((gameswf::Self *)v51, (const unsigned int *)(v49 / 3), v7 + 36, v45, v35);
              break;
            case 3:
              gameswf::collect_unsigned_short_d0e121((gameswf::Self *)v51, (const unsigned int *)(v49 / 3), v7 + 36, v45, v35);
              break;
            case 4:
              gameswf::collect_int_id_811f7a((gameswf::Self *)v51, (const unsigned int *)(v49 / 3), v7 + 36, v45, v35);
              break;
            case 5:
              gameswf::collect_unsigned_int_3a8354((gameswf::Self *)v51, (const unsigned int *)(v49 / 3), v7 + 36, v45, v35);
              break;
            case 6:
              v39 = v49 / 3;
              v26 = glitch::video::IBuffer::mapInternal(
                      *(glitch::video::IBuffer::Self **)(v7 + 36),
                      0,
                      0,
                      *(uint32_t *)(*(uint32_t *)(v7 + 36) + 20),
                      0);
              v47 = 0;
              if ( v26 != 0 )
                v47 = *(uint32_t *)(v7 + 40) + v26;
              if ( v39 != 0 )
              {
                v27 = (char *)v45;
                v42 = 0;
                v28 = v51;
                v38 = v6;
                v41 = (char *)v45 + 8;
                v40 = (char *)v45 + 16;
                do
                {
                  ++v42;
                  v29 = (uint32_t *)(v47 + *v28 * *(uint16_t *)(v7 + 50));
                  v30 = v29[1];
                  *(uint32_t *)v27 = *v29;
                  *((uint32_t *)v27 + 1) = v30;
                  v31 = (int *)(v47 + v28[1] * *(uint16_t *)(v7 + 50));
                  v43 = v31[1];
                  v32 = *v31;
                  v33 = v27 - (char *)v45;
                  v27 += 24;
                  *(uint32_t *)&v41[v33] = v32;
                  *(uint32_t *)&v41[v33 + 4] = v43;
                  v34 = (uint32_t *)(v47 + v28[2] * *(uint16_t *)(v7 + 50));
                  v28 += 3;
                  v44 = v34[1];
                  *(uint32_t *)&v40[v33] = *v34;
                  *(uint32_t *)&v40[v33 + 4] = v44;
                }
                while ( v42 != v39 );
                v6 = v38;
              }
              if ( v47 != 0 )
                glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v7 + 36));
              break;
            default:
              break;
          }
          v14 = *(unsigned int **)(v7 + 16);
g4_m128_raw(v15) = v14[6];
g4_m128_raw(v16) = v14[7];
g4_m128_raw(v17) = v14[9];
g4_m128_raw(v18) = v14[10];
          if (g4_m128_lane<float>(v15, 0) == 0.0 ||g4_m128_lane<float>(v16, 0) == 0.0 || v49 == 0 )
            return (unsigned int *)glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v6 + 12));
          v19 = 2 * (v49 >> 1);
          if ( v49 > 1 && v19 != 0 )
          {
            v20 = v45;
            v21 = 0;
g4_m128_lane<uint64_t>(v22, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v15, v16), 0);
g4_m128_lane<uint64_t>(v22, 1) =g4_m128_lane<uint64_t>(v22, 0);
g4_m128_lane<uint64_t>(v23, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v17, v18), 0);
g4_m128_lane<uint64_t>(v23, 1) =g4_m128_lane<uint64_t>(v23, 0);
            do
            {
              ++v21;
              v24 = _mm_add_ps(_mm_mul_ps(_mm_loadh_ps((const double *)v20 + 1), v22), v23);
              _mm_storel_ps((double *)v20, v24);
              _mm_storeh_ps((double *)v20 + 1, v24);
              v20 = (glitch::video::SVertexStream::Self *)((char *)v20 + 16);
            }
            while ( v49 >> 1 > v21 );
            if ( v49 == v19 )
              return (unsigned int *)glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v6 + 12));
          }
          else
          {
            v19 = 0;
          }
          v25 = (float *)((char *)v45 + 8 * v19);
          do
          {
            ++v19;
            *v25 = (float)(*v25 *g4_m128_lane<float>(v15, 0)) +g4_m128_lane<float>(v17, 0);
            v25[1] = (float)(v25[1] *g4_m128_lane<float>(v16, 0)) +g4_m128_lane<float>(v18, 0);
            v25 += 2;
          }
          while ( v49 > v19 );
          return (unsigned int *)glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v6 + 12));
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::initCorners  (binary VA: 0x10d6040)
// Original: gameswf::SceneNode::initCorners
// ----------------------------------------------------------------------------
int gameswf::SceneNode::initCorners(gameswf::SceneNode::Self *self)
{
  gameswf::SceneNode::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int result;
  void *retaddr;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t _g4_t_v37[4];
  typedef uint32_t _g4_t_v38[4];
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint64_t _g4_t_v42[6];
  typedef gameswf::SceneNode::Self **_g4_t_v43;
  typedef int _g4_t_v44;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v20)) > _g4_s4 ? (20u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v22)) > _g4_s6 ? (28u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v24)) > _g4_s8 ? (32u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v25)) > _g4_s9 ? (36u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v26)) > _g4_s10 ? (36u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v27)) > _g4_s11 ? (36u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v28)) > _g4_s12 ? (40u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v29)) > _g4_s13 ? (44u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v30)) > _g4_s14 ? (44u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v31)) > _g4_s15 ? (48u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v32)) > _g4_s16 ? (48u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v33)) > _g4_s17 ? (52u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v34)) > _g4_s18 ? (52u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v35)) > _g4_s19 ? (56u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v36)) > _g4_s20 ? (56u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v37)) > _g4_s21 ? (60u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v38)) > _g4_s22 ? (76u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v39)) > _g4_s23 ? (92u + sizeof(_g4_t_v39)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v40)) > _g4_s24 ? (100u + sizeof(_g4_t_v40)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v41)) > _g4_s25 ? (104u + sizeof(_g4_t_v41)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v42)) > _g4_s26 ? (108u + sizeof(_g4_t_v42)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v43)) > _g4_s27 ? (164u + sizeof(_g4_t_v43)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v44)) > _g4_s28 ? (172u + sizeof(_g4_t_v44)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 164u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 172u);

  v43 = &self;
  v1 = self;
  (*(void (**)(uint32_t *, uint32_t, int, int, int, int, int, int, int, int, int, uint32_t, int, int, int, int))(**((uint32_t **)self + 65) + 288))(
    v37,
    *((uint32_t *)self + 65),
    v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v25,
    *((uint32_t *)self + 65),
    v29,
    v31,
    v33,
    v35);
  v38[0] = v37[0];
  if ( v37[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v37[0] + 4), 1u);
  v44 = 0;
  v30 = (volatile int32_t *)opNew(0xA8u);
  glitch::scene::CTriangleSelector::Construct((int)(uintptr_t)(v30), v38, 0, 0);
  if ( v30 != nullptr )
    __sync_add_and_fetch(v30 + 1, 1u);
  v2 = v38[0];
  if ( v38[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v38[0] + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    G4_VCALL<void>(v2, 4);
  }
  v3 = v37[0];
  if ( v37[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v37[0] + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
  }
  v40 = 0;
  retaddr = nullptr;
  G4_VCALL<void>(v30, 16, (int)(uintptr_t)(v1) + 280, 2, &v40);
  v32 = v40;
  if ( v40 > 0 )
  {
    v36 = 0;
    v4 = 0;
    do
    {
      v5 = v36++;
      v6 = 9 * v5;
      v7 = (uint32_t *)((char *)v1 + 12 * v4 + 352);
      v34 = 4 * v6;
      v8 = (uint32_t *)((char *)v1 + 4 * v6 + 272);
      *v7 = v8[2];
      v7[1] = v8[3];
      v7[2] = v8[4];
      v9 = (uint32_t *)((char *)v1 + 12 * v4 + 364);
      *v9 = v8[5];
      v9[1] = v8[6];
      v9[2] = v8[7];
      v10 = (uint32_t *)((char *)v1 + 12 * v4 + 376);
      v4 += 3;
      *v10 = *(uint32_t *)((char *)v1 + v34 + 304);
      v10[1] = *(uint32_t *)((char *)v1 + v34 + 308);
      v10[2] = *(uint32_t *)((char *)v1 + v34 + 312);
    }
    while ( v36 != v32 );
  }
  memset(v42, 0, sizeof(v42));
  (*(void (**)(int *, int))(*(uint32_t *)v28 + 288))(&v39, v28);
  v41 = v39;
  if ( v39 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v39 + 4), 1u);
  gameswf::SceneNode::collectUVs((int)(uintptr_t)(v1), (uint32_t *)(&v41), (glitch::video::SVertexStream::Self *)v42, 3 * v32);
  v11 = v41;
  v12 = 3 * v32;
  if ( v41 != 0 && __sync_fetch_and_add((volatile int32_t *)(v41 + 4), 0xFFFFFFFF) == 1 )
  {
    v27 = v11;
    G4_VCALL<void>(v11, 8);
    G4_VCALL<void>(v27, 4);
    v12 = 3 * v32;
  }
  v13 = v39;
  if ( v39 != 0 && __sync_fetch_and_add((volatile int32_t *)(v39 + 4), 0xFFFFFFFF) == 1 )
  {
    v24 = v12;
    v26 = v13;
    G4_VCALL<void>(v13, 8);
    G4_VCALL<void>(v26, 4);
    v12 = v24;
  }
  if ( v12 != 0 )
  {
    v14 = 0;
    while ( *(float *)&v42[v14] >= 0.5 )
    {
      if ( *((float *)&v42[v14] + 1) <= 0.5 )
      {
        *((uint16_t *)v1 + 215) = v14;
LABEL_26:
        if ( ++v14 == v12 )
          goto LABEL_30;
      }
      else
      {
        *((uint16_t *)v1 + 214) = v14++;
        if ( v14 == v12 )
          goto LABEL_30;
      }
    }
    if ( *((float *)&v42[v14] + 1) <= 0.5 )
      *((uint16_t *)v1 + 213) = v14;
    else
      *((uint16_t *)v1 + 212) = v14;
    goto LABEL_26;
  }
LABEL_30:
  result = __sync_fetch_and_add(v30 + 1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    G4_VCALL<void>(v30, 8);
    return G4_VCALL<int>(v30, 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::buildDlist  (binary VA: 0x10d6400)
// Original: gameswf::SceneNode::buildDlist
// ----------------------------------------------------------------------------
void gameswf::SceneNode::buildDlist(gameswf::SceneNode::Self *self, gameswf::Character::Self *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  gameswf::Character::Self *v6;

  if ( *((uint8_t *)a2 + 148) != 0 && *((float *)gameswf::Character::getWorldCxForm(a2) + 6) >= 0.0 )
  {
    v2 = *((uint32_t *)a2 + 19);
    if ( v2 != 0 && *(gameswf::SceneNode::Self **)(v2 + 140) == self )
    {
      v4 = *((uint32_t *)self + 136) + 1;
      if ( v4 > *((uint32_t *)self + 137) )
        gameswf::array_gameswf_Character_c3efb8::reserve((gameswf::SceneNode::Self *)((char *)self + 540), v4 + (v4 >> 1));
      v5 = (uint32_t *)(*((uint32_t *)self + 135) + 4 * *((uint32_t *)self + 136));
      if ( v5 != nullptr )
        *v5 = (uint32_t)(uintptr_t)(a2);
      *((uint32_t *)self + 136) = v4;
    }
    if ( G4_VCALL<uint8_t>(a2, 8, 2) != 0
      && *((int *)a2 + 54) > 0 )
    {
      v3 = 0;
      do
      {
        v6 = *(gameswf::Character::Self **)(*((uint32_t *)a2 + 53) + 4 * v3++);
        gameswf::SceneNode::buildDlist(self, v6);
      }
      while ( v3 < *((uint32_t *)a2 + 54) );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::onRegisterSceneNodeInternal  (binary VA: 0x10d7960)
// Original: gameswf::SceneNode::onRegisterSceneNodeInternal
// ----------------------------------------------------------------------------
int gameswf::SceneNode::onRegisterSceneNodeInternal(gameswf::SceneNode::Self *self)
{
  int result;
  int v2;
  int v3;
  char v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  gameswf::Root::Self *Root;
  gameswf::Character::Self *RootMovie;
  int v11;
  int v12;
  int v13;
  int v14;
  gameswf::Self **v15;
  int v16;
  uint32_t *v17;
  int v18;
  gameswf::Self *v19;
  typedef int _g4_t_v20;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);

  result = 0;
  v2 = *((uint32_t *)self + 132);
  if ( v2 > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = *(uint32_t *)(*((uint32_t *)self + 131) + 4 * v3++);
      v4 |= *(uint8_t *)(v5 + 148);
    }
    while ( v3 != v2 );
    result = 0;
    if ( v4 != 0 )
    {
      v6 = *((uint32_t *)self + 136);
      if ( v6 < 0 )
      {
        v7 = 4 * v6;
        do
        {
          v8 = (uint32_t *)(*((uint32_t *)self + 135) + v7);
          if ( v8 != nullptr )
            *v8 = 0;
          v7 += 4;
          ++v6;
        }
        while ( v6 != 0 );
        v2 = *((uint32_t *)self + 132);
      }
      *((uint32_t *)self + 136) = 0;
      if ( v2 == 1 )
      {
        v16 = *((uint32_t *)self + 137);
        if ( v16 > 0 || *((uint32_t *)self + 138) != 0 )
        {
          v17 = *((uint32_t **)self + 135);
        }
        else
        {
          v19 = *((gameswf::Self **)self + 135);
          *((uint32_t *)self + 137) = 1;
          if ( v19 != nullptr )
            v17 = (uint32_t *)(gameswf::realloc_internal(v19, 4u, 4 * v16));
          else
            v17 = (uint32_t *)gameswf::malloc_internal(4u);
          *((uint32_t *)self + 135) = (uint32_t)(uintptr_t)(v17);
        }
        if ( v17 != nullptr )
        {
          *v17 = 0;
          *((uint32_t *)self + 136) = 1;
          v17 = *((uint32_t **)self + 135);
        }
        else
        {
          *((uint32_t *)self + 136) = 1;
        }
        v18 = 0;
        while ( 1 )
        {
          v17[v18] = *(uint32_t *)(*((uint32_t *)self + 131) + 4 * v18);
          if ( ++v18 >= *((uint32_t *)self + 136) )
            break;
          v17 = *((uint32_t **)self + 135);
        }
      }
      else
      {
        Root = (gameswf::Root::Self *)gameswf::Player::getRoot(*((gameswf::Player::Self **)self + 130));
        RootMovie = (gameswf::Character::Self *)gameswf::Root::getRootMovie(Root);
        gameswf::SceneNode::buildDlist(self, RootMovie);
      }
      (*(void (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(*((uint32_t *)self + 130) + 12) + 44) + 112))(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 130) + 12) + 44));
      glitch::video::IVideoDriver::clearBuffers(v21, 1);
      if ( *((int *)self + 136) > 0 )
      {
        v11 = 0;
        do
        {
          v12 = *(uint32_t *)(*((uint32_t *)self + 135) + 4 * v11++);
          v13 = *(uint32_t *)(v12 + 76);
          v14 = *(uint32_t *)(v13 + 140);
          *(uint32_t *)(v13 + 140) = 0;
          v20 = v14;
          v15 = (gameswf::Self **)gameswf::ASObject::getRoot((gameswf::Player::Self **)v12);
          gameswf::Root::beginDisplay(v15);
          G4_VCALL<void>(v12, 284);
          gameswf::ASObject::getRoot((gameswf::Player::Self **)v12);
          gameswf::Root::endDisplay();
          *(uint32_t *)(*(uint32_t *)(v12 + 76) + 140) = v20;
        }
        while ( v11 < *((uint32_t *)self + 136) );
      }
      (*(void (**)(uint8_t *))(*(uint32_t *)v21 + 116))(v23);
      result = 1;
      if ( v22 != nullptr && __sync_fetch_and_add(v22 + 1, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)())(*v22 + 8))();
        (*(void (**)())(*v22 + 4))();
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::getCollisionUV  (binary VA: 0x10d7bf0)
// Original: gameswf::SceneNode::getCollisionUV
// ----------------------------------------------------------------------------
int gameswf::SceneNode::getCollisionUV(int a1, float *a2, float *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, float a36, float a37, float a38, int a39, int a40, float a41, float a42, float a43, float a44, float a45, float a46, int a47, float a48, float a49, float a50, int a51, float a52, float a53, float a54, int a55, float a56, float a57, float a58, int a59, float a60, float a61, float a62, int a63, float a64)
{
  uint8_t STACK[512] = {0};
  int v64;
  float v65; // xmm4_4
  float v66; // xmm5_4
  float v67; // xmm3_4
  float v68; // xmm2_4
  float v69; // xmm6_4
  float v70; // xmm1_4
  float v71; // xmm7_4
  float v72; // xmm4_4
  float v73; // xmm0_4
  float v74; // xmm7_4
  float v75; // xmm6_4
  float v76; // xmm5_4
  float v77; // xmm6_4
  unsigned int v78; // xmm6_4
  float v79; // xmm4_4
  float v80; // xmm6_4
  unsigned int v81; // xmm0_4
  float v82; // xmm7_4
  float v83; // xmm4_4
  float v84; // xmm0_4
  float v85; // xmm7_4
  float v86; // xmm6_4
  float v87; // xmm5_4
  float v88; // xmm6_4
  unsigned int v89; // xmm6_4
  float v90; // xmm4_4
  float v91; // xmm6_4
  float v92; // xmm7_4
  float v93; // xmm6_4
  float v94; // xmm5_4
  unsigned int v95; // xmm6_4
  float v96; // xmm4_4
  float v97; // xmm6_4
  unsigned int v98; // xmm0_4
  float v99; // xmm7_4
  float v100; // xmm5_4
  float v101; // xmm0_4
  float v102; // xmm6_4
  float v103; // xmm5_4
  unsigned int v104; // xmm0_4
  unsigned int v105; // xmm6_4
  float v106; // xmm4_4
  float v107; // xmm6_4
  unsigned int v108; // xmm0_4
  float v109; // xmm7_4
  float v110; // xmm5_4
  float v111; // xmm0_4
  unsigned int v112; // xmm6_4
  float v113; // xmm5_4
  float v114; // xmm4_4
  float v115; // xmm0_4
  unsigned int v116; // xmm3_4
  float v117; // xmm1_4
  float v118; // xmm2_4
  float v119; // xmm5_4
  float v120; // xmm0_4
  float v121; // xmm3_4
  unsigned int v122; // xmm1_4
  float v123; // xmm2_4
  unsigned int v124; // xmm5_4
  float v125; // xmm1_4
  float v126; // xmm4_4
  float v127; // xmm0_4
  float v128; // xmm5_4
  float v129; // xmm0_4
  float v130; // xmm0_4
  int v131;
  float v132; // xmm3_4
  float v133; // xmm6_4
  float v135; // xmm7_4
  float v136; // xmm5_4
  float v137; // xmm2_4
  float v138; // xmm4_4
  float v139; // xmm5_4
  float v140; // xmm5_4
  float v141; // xmm6_4
  float *v142;
  float v143; // xmm5_4
  float v144; // xmm4_4
  float v145; // xmm1_4
  float v146; // xmm2_4
  bool v147;
  bool v148;
  bool v149;
  float v150; // xmm1_4
  float *v151;
  float v152; // xmm0_4
  float v153; // xmm7_4
  float v154; // xmm5_4
  float v155; // xmm6_4
  float v156; // xmm4_4
  float v157; // xmm1_4
  float v158; // xmm2_4
  float v159; // xmm0_4
  float v160; // xmm6_4
  float v161; // xmm5_4
  float v162; // xmm7_4
  float v163; // xmm7_4
  float *v164;
  float v165; // xmm7_4
  float v166; // xmm6_4
  float v167; // xmm5_4
  float v168; // xmm7_4
  float v169; // xmm3_4
  float v170; // xmm4_4
  float v171; // xmm4_4
  float retaddr;
  uint8_t v173;
  uint8_t v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  float v185;
  float v186;
  float v187;
  float v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float v193;
  float v194;
  float v195;
  float v196;
  float v197;
  float v198;
  float v199;
  float v200;
  float v201;
  float v202;
  float v203;
  float v204;
  float v205;
  float v206;
  float v207;
  float v208;
  float v209;
  float v210;
  float v211;

  v64 = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 260) + 72))(*(uint32_t *)(a1 + 260));
  a44 = *(float *)v64;
  a45 = *(float *)(v64 + 4);
  a46 = *(float *)(v64 + 8);
  a47 = *(uint32_t *)(v64 + 12);
  a48 = *(float *)(v64 + 16);
  v65 = *(float *)(a1 + 280);
  a49 = *(float *)(v64 + 20);
  v66 = *(float *)(a1 + 284);
  v67 = a44;
  v68 = a48;
  a50 = *(float *)(v64 + 24);
  a51 = *(uint32_t *)(v64 + 28);
  a52 = *(float *)(v64 + 32);
  a53 = *(float *)(v64 + 36);
  a54 = *(float *)(v64 + 40);
  a55 = *(uint32_t *)(v64 + 44);
  a56 = *(float *)(v64 + 48);
  v69 = *(float *)(a1 + 288);
  a57 = *(float *)(v64 + 52);
  v70 = a52;
  a58 = *(float *)(v64 + 56);
  a59 = *(uint32_t *)(v64 + 60);
  *(float *)&STACK[0x140] = (float)((float)((float)(v65 * a44) + (float)(v66 * a48)) + a56) + (float)(v69 * a52);
  v71 = a45 * v65;
  v72 = v65 * a46;
  v73 = (float)(a53 * v69) + v71;
  v74 = a49 * v66;
  v75 = (float)(v69 * a54) + (float)(v66 * a50);
  v76 = *(float *)(a1 + 296);
  v77 = v75 + a58;
  *(float *)&STACK[0x144] = (float)(v73 + a57) + v74;
  *(float *)&v78 = v77 + v72;
  v79 = *(float *)(a1 + 292);
  STACK[0x148] = v78;
  v80 = *(float *)(a1 + 300);
  *(float *)&v81 = (float)((float)((float)(v76 * v68) + (float)(v80 * v70)) + a56) + (float)(v79 * v67);
  v82 = a45 * v79;
  v83 = v79 * a46;
  STACK[0x14C] = v81;
  v84 = (float)(a49 * v76) + v82;
  v85 = a53 * v80;
  v86 = (float)(v80 * a54) + (float)(v76 * a50);
  v87 = *(float *)(a1 + 308);
  v88 = v86 + a58;
  *(float *)&STACK[0x150] = (float)(v84 + a57) + v85;
  *(float *)&v89 = v88 + v83;
  v90 = *(float *)(a1 + 312);
  STACK[0x154] = v89;
  v91 = *(float *)(a1 + 304);
  v92 = a49 * v87;
  *(float *)&STACK[0x158] = (float)((float)((float)(v87 * v68) + (float)(v90 * v70)) + a56) + (float)(v91 * v67);
  *(float *)&STACK[0x15C] = (float)((float)((float)(a45 * v91) + v92) + a57) + (float)(a53 * v90);
  v93 = (float)(v91 * a46) + (float)(v87 * a50);
  v94 = *(float *)(a1 + 320);
  *(float *)&v95 = (float)(v93 + a58) + (float)(v90 * a54);
  v96 = *(float *)(a1 + 324);
  STACK[0x160] = v95;
  v97 = *(float *)(a1 + 316);
  *(float *)&v98 = (float)((float)((float)(v97 * v67) + (float)(v94 * v68)) + a56) + (float)(v96 * v70);
  v99 = a49 * v94;
  v100 = v94 * a50;
  STACK[0x164] = v98;
  v101 = (float)(a45 * v97) + v99;
  v102 = (float)(v97 * a46) + v100;
  v103 = *(float *)(a1 + 332);
  *(float *)&v104 = (float)(v101 + a57) + (float)(a53 * v96);
  *(float *)&v105 = (float)(v102 + a58) + (float)(v96 * a54);
  v106 = *(float *)(a1 + 336);
  STACK[0x168] = v104;
  STACK[0x16C] = v105;
  v107 = *(float *)(a1 + 328);
  *(float *)&v108 = (float)((float)((float)(v107 * v67) + (float)(v103 * v68)) + a56) + (float)(v106 * v70);
  v109 = a49 * v103;
  v110 = v103 * a50;
  STACK[0x170] = v108;
  v111 = (float)(a45 * v107) + v109;
  *(float *)&v112 = (float)((float)((float)(v107 * a46) + v110) + a58) + (float)(v106 * a54);
  *(float *)&STACK[0x174] = (float)(v111 + a57) + (float)(a53 * v106);
  STACK[0x178] = v112;
  v113 = *(float *)(a1 + 340);
  v114 = *(float *)(a1 + 344);
  v115 = *(float *)(a1 + 348);
  v209 = a2[2];
  *(float *)&v116 = (float)((float)((float)(v67 * v113) + (float)(v68 * v114)) + a56) + (float)(v70 * v115);
  v117 = (float)(a45 * v113) + (float)(a49 * v114);
  v118 = a53 * v115;
  v119 = (float)(v113 * a46) + (float)(v114 * a50);
  v120 = v115 * a54;
  STACK[0x17C] = v116;
  v121 = *a2;
  *(float *)&v122 = (float)(v117 + a57) + v118;
  v123 = a2[4];
  *(float *)&v124 = (float)(v119 + a58) + v120;
  v205 = a2[5];
  STACK[0x180] = v122;
  v125 = a2[3];
  STACK[0x184] = v124;
  v198 = v205 - v209;
  v200 = v125 - v121;
  v126 = a2[1];
  v199 = v123 - v126;
  v127 = (float)((float)((float)(v123 - v126) * (float)(v123 - v126)) + (float)(v200 * v200))
       + (float)((float)(v205 - v209) * (float)(v205 - v209));
  if ( v127 != 0.0 )
  {
    v128 = fsqrt(v127);
    v129 = (float)((float)((float)(v127 * (float)(1.0 / v128)) * (float)(1.0 / v128)) + -3.0)
         * (float)((float)(1.0 / v128) * -0.5);
    v200 = v200 * v129;
    v199 = v199 * v129;
    v198 = v129 * v198;
  }
  a36 = 0.0;
  a37 = 0.0;
  a38 = 0.0;
  v201 = v121;
  v130 = (float)((float)((float)(v126 - v123) * (float)(v126 - v123))
               + (float)((float)(v121 - v125) * (float)(v121 - v125)))
       + (float)((float)(v209 - v205) * (float)(v209 - v205));
  if ( v125 <= v121 )
  {
    v201 = v125;
    v125 = v121;
  }
  v191 = v126;
  if ( v123 <= v126 )
  {
    v191 = v123;
    v123 = v126;
  }
  v189 = v209;
  if ( v205 <= v209 )
  {
    v189 = v205;
    v205 = v209;
  }
  v194 = *(float *)&STACK[0x140];
  if ( v201 > *(float *)&STACK[0x140] && v201 > *(float *)&STACK[0x14C] && v201 > *(float *)&STACK[0x158] )
    goto LABEL_12;
  if ( v194 > v125 && v125 < *(float *)&STACK[0x14C] && v125 < *(float *)&STACK[0x158] )
  {
LABEL_35:
    v131 = 0;
    v210 = 3.4028235e38f;
    goto LABEL_13;
  }
  v187 = *(float *)&STACK[0x144];
  if ( v191 <= *(float *)&STACK[0x144] || v191 <= *(float *)&STACK[0x150] || v191 <= *(float *)&STACK[0x15C] )
  {
    if ( v187 > v123 && v123 < *(float *)&STACK[0x150] && v123 < *(float *)&STACK[0x15C] )
    {
      v131 = 0;
      v210 = 3.4028235e38f;
      goto LABEL_13;
    }
    v185 = *(float *)&STACK[0x148];
    if ( v189 <= *(float *)&STACK[0x148] )
    {
      v182 = *(float *)&STACK[0x160];
      v183 = *(float *)&STACK[0x154];
    }
    else
    {
      v183 = *(float *)&STACK[0x154];
      if ( v189 <= *(float *)&STACK[0x154] )
      {
        v182 = *(float *)&STACK[0x160];
      }
      else
      {
        v182 = *(float *)&STACK[0x160];
        if ( v189 > *(float *)&STACK[0x160] )
        {
          v131 = 0;
          v210 = 3.4028235e38f;
          goto LABEL_13;
        }
      }
    }
    if ( v185 <= v205 || v183 <= v205 || v182 <= v205 )
    {
      if ( (float)((float)((float)((float)(v126 - v187) * (float)(v126 - v187))
                         + (float)((float)(v121 - v194) * (float)(v121 - v194)))
                 + (float)((float)(v209 - v185) * (float)(v209 - v185))) < 3.4028235e38f )
      {
        v162 = *(float *)&STACK[0x14C];
        v160 = *(float *)&STACK[0x158];
        v161 = *(float *)&STACK[0x15C];
        v180 = *(float *)&STACK[0x150];
      }
      else
      {
        v180 = *(float *)&STACK[0x150];
        v160 = *(float *)&STACK[0x158];
        if ( (float)((float)((float)((float)(v126 - v180) * (float)(v126 - v180))
                           + (float)((float)(v121 - *(float *)&STACK[0x14C]) * (float)(v121 - *(float *)&STACK[0x14C])))
                   + (float)((float)(v209 - v183) * (float)(v209 - v183))) >= 3.4028235e38f )
        {
          v131 = 0;
          v161 = *(float *)&STACK[0x15C];
          v168 = v121 - v160;
          v169 = v209 - v182;
          v210 = 3.4028235e38f;
          v170 = (float)((float)(v126 - v161) * (float)(v126 - v161)) + (float)(v168 * v168);
          v162 = *(float *)&STACK[0x14C];
          if ( (float)(v170 + (float)(v169 * v169)) >= 3.4028235e38f )
            goto LABEL_13;
        }
        else
        {
          v161 = *(float *)&STACK[0x15C];
          v162 = *(float *)&STACK[0x14C];
        }
      }
      v163 = v162 - v194;
      retaddr = v130;
      v181 = v180 - v187;
      a41 = (float)(v181 * (float)(v182 - v185)) - (float)((float)(v161 - v187) * (float)(v183 - v185));
      a42 = (float)((float)(v183 - v185) * (float)(v160 - v194)) - (float)(v163 * (float)(v182 - v185));
      a43 = (float)((float)(v161 - v187) * v163) - (float)(v181 * (float)(v160 - v194));
      v164 = sub_5ED3D0(&a41);
      v165 = v164[1];
      v166 = v164[2];
      v167 = (float)((float)(v199 * v165) + (float)(v200 * *v164)) + (float)(v198 * v166);
      if ( fabs(v167) <= 0.000001f )
        goto LABEL_67;
      v188 = *a2;
      v186 = a2[1];
      v184 = a2[2];
      v171 = (float)((float)((float)((float)((float)((float)(*(float *)&STACK[0x144] * v165)
                                                   + (float)(*v164 * *(float *)&STACK[0x140]))
                                           + (float)(*(float *)&STACK[0x148] * v166))
                                   - (float)(v184 * v166))
                           - (float)(v186 * v165))
                   - (float)(*v164 * *a2))
           / v167;
      v197 = (float)(v200 * v171) + *a2;
      a36 = v197;
      a37 = (float)(v199 * v171) + v186;
      v176 = a37;
      a38 = (float)(v198 * v171) + v184;
      v179 = a38;
      v130 = retaddr;
      if ( !sub_10D51F0(&a36, (float *)&STACK[0x140], (float *)&STACK[0x14C], (float *)&STACK[0x158])
        || (v130 = retaddr, !sub_10D51F0(&a36, (float *)&STACK[0x14C], (float *)&STACK[0x140], (float *)&STACK[0x158]))
        || (v130 = retaddr, !sub_10D51F0(&a36, (float *)&STACK[0x158], (float *)&STACK[0x140], (float *)&STACK[0x14C]))
        || (v210 = (float)((float)((float)(v176 - v186) * (float)(v176 - v186))
                         + (float)((float)(v179 - v184) * (float)(v179 - v184)))
                 + (float)((float)(v197 - v188) * (float)(v197 - v188)),
            retaddr <= v210)
        || retaddr <= (float)((float)((float)((float)(v176 - a2[4]) * (float)(v176 - a2[4]))
                                    + (float)((float)(v179 - a2[5]) * (float)(v179 - a2[5])))
                            + (float)((float)(v197 - a2[3]) * (float)(v197 - a2[3])))
        || (v131 = 1, v210 >= 3.4028235e38f) )
      {
LABEL_67:
        v131 = 0;
        v210 = 3.4028235e38f;
      }
      goto LABEL_13;
    }
    goto LABEL_35;
  }
LABEL_12:
  v131 = 0;
  v210 = 3.4028235e38f;
LABEL_13:
  v132 = *(float *)&STACK[0x164];
  if ( (v201 <= *(float *)&STACK[0x164] || v201 <= *(float *)&STACK[0x170] || v201 <= *(float *)&STACK[0x17C])
    && (v132 <= v125 || v125 >= *(float *)&STACK[0x170] || v125 >= *(float *)&STACK[0x17C]) )
  {
    v133 = *(float *)&STACK[0x168];
    if ( (v191 <= *(float *)&STACK[0x168] || v191 <= *(float *)&STACK[0x174] || v191 <= *(float *)&STACK[0x180])
      && (v133 <= v123 || v123 >= *(float *)&STACK[0x174] || v123 >= *(float *)&STACK[0x180]) )
    {
      v135 = *(float *)&STACK[0x16C];
      if ( v189 <= *(float *)&STACK[0x16C] )
      {
        v195 = *(float *)&STACK[0x184];
        v202 = *(float *)&STACK[0x178];
      }
      else
      {
        v202 = *(float *)&STACK[0x178];
        if ( v189 <= *(float *)&STACK[0x178] )
        {
          v195 = *(float *)&STACK[0x184];
        }
        else
        {
          v195 = *(float *)&STACK[0x184];
          if ( v189 > *(float *)&STACK[0x184] )
            goto LABEL_22;
        }
      }
      if ( v135 <= v205 || v202 <= v205 || v195 <= v205 )
      {
        v136 = *a2;
        v206 = a2[1];
        v192 = a2[2];
        if ( (float)((float)((float)((float)(v206 - v133) * (float)(v206 - v133))
                           + (float)((float)(*a2 - v132) * (float)(*a2 - v132)))
                   + (float)((float)(v192 - v135) * (float)(v192 - v135))) < v210 )
        {
          v139 = *(float *)&STACK[0x170];
          v137 = *(float *)&STACK[0x17C];
          v138 = *(float *)&STACK[0x180];
          v190 = *(float *)&STACK[0x174];
        }
        else
        {
          v190 = *(float *)&STACK[0x174];
          v137 = *(float *)&STACK[0x17C];
          if ( (float)((float)((float)((float)(v206 - v190) * (float)(v206 - v190))
                             + (float)((float)(v136 - *(float *)&STACK[0x170]) * (float)(v136 - *(float *)&STACK[0x170])))
                     + (float)((float)(v192 - v202) * (float)(v192 - v202))) >= v210 )
          {
            v138 = *(float *)&STACK[0x180];
            if ( (float)((float)((float)((float)(v206 - *(float *)&STACK[0x180])
                                       * (float)(v206 - *(float *)&STACK[0x180]))
                               + (float)((float)(v136 - v137) * (float)(v136 - v137)))
                       + (float)((float)(v192 - v195) * (float)(v192 - v195))) >= v210 )
              goto LABEL_22;
            v139 = *(float *)&STACK[0x170];
          }
          else
          {
            v138 = *(float *)&STACK[0x180];
            v139 = *(float *)&STACK[0x170];
          }
        }
        v173 = v131;
        v140 = v139 - v132;
        retaddr = v130;
        v193 = v138 - v133;
        v141 = v190 - v133;
        a43 = (float)(v140 * v193) - (float)(v141 * (float)(v137 - v132));
        a41 = (float)(v141 * (float)(v195 - v135)) - (float)(v193 * (float)(v202 - v135));
        a42 = (float)((float)(v202 - v135) * (float)(v137 - v132)) - (float)((float)(v195 - v135) * v140);
        v142 = sub_5ED3D0(&a41);
        v143 = v142[1];
        v144 = v142[2];
        v131 = v173;
        v145 = (float)((float)(v199 * v143) + (float)(v200 * *v142)) + (float)(v198 * v144);
        if ( fabs(v145) > 0.000001f )
        {
          v207 = *a2;
          v203 = a2[1];
          v196 = a2[2];
          v146 = (float)((float)((float)((float)((float)((float)(*(float *)&STACK[0x168] * v143)
                                                       + (float)(*(float *)&STACK[0x164] * *v142))
                                               + (float)(*(float *)&STACK[0x16C] * v144))
                                       - (float)(*a2 * *v142))
                               - (float)(v203 * v143))
                       - (float)(v144 * v196))
               / v145;
          a36 = (float)(v200 * v146) + *a2;
          a37 = (float)(v199 * v146) + v203;
          a38 = (float)(v198 * v146) + v196;
          v177 = a37;
          v178 = a36;
          v175 = a38;
          v147 = sub_10D51F0(&a36, (float *)&STACK[0x164], (float *)&STACK[0x170], (float *)&STACK[0x17C]);
          v131 = v173;
          if ( v147 )
          {
            v148 = sub_10D51F0(&a36, (float *)&STACK[0x170], (float *)&STACK[0x164], (float *)&STACK[0x17C]);
            v131 = v173;
            if ( v148 )
            {
              v149 = sub_10D51F0(&a36, (float *)&STACK[0x17C], (float *)&STACK[0x164], (float *)&STACK[0x170]);
              v131 = v173;
              if ( v149 )
              {
                v150 = (float)((float)((float)(v177 - v203) * (float)(v177 - v203))
                             + (float)((float)(v178 - v207) * (float)(v178 - v207)))
                     + (float)((float)(v175 - v196) * (float)(v175 - v196));
                if ( retaddr > v150
                  && retaddr > (float)((float)((float)((float)(v177 - a2[4]) * (float)(v177 - a2[4]))
                                             + (float)((float)(v178 - a2[3]) * (float)(v178 - a2[3])))
                                     + (float)((float)(v175 - a2[5]) * (float)(v175 - a2[5])))
                  && v210 > v150 )
                {
                  LOBYTE(v131) = 1;
                  goto LABEL_58;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_22:
  if ( (uint8_t)v131 == 0 )
    return v131;
LABEL_58:
  v174 = v131;
  if ( (uint8_t)sub_5F6220(&a44, &a60) != 0 )
  {
    a44 = a60;
    a45 = a61;
    a46 = a62;
    a48 = a64;
    a49 = *(float *)&STACK[0x114];
    a50 = *(float *)&STACK[0x118];
    a52 = *(float *)&STACK[0x120];
    a53 = *(float *)&STACK[0x124];
    a54 = *(float *)&STACK[0x128];
    a56 = *(float *)&STACK[0x130];
    a57 = *(float *)&STACK[0x134];
    a58 = *(float *)&STACK[0x138];
  }
  v151 = (float *)(a1 + 12 * *(uint16_t *)(a1 + 426) + 352);
  v152 = *(float *)(a1 + 12 * *(uint16_t *)(a1 + 426) + 356);
  v153 = *(float *)(a1 + 12 * *(uint16_t *)(a1 + 426) + 360);
  v154 = *(float *)(a1 + 12 * *(uint16_t *)(a1 + 430) + 352) - *v151;
  v155 = *(float *)(a1 + 12 * *(uint16_t *)(a1 + 430) + 356) - v152;
  v156 = *(float *)(a1 + 12 * *(uint16_t *)(a1 + 430) + 360) - v153;
  v211 = *(float *)(a1 + 12 * *(uint16_t *)(a1 + 424) + 352) - *v151;
  v208 = *(float *)(a1 + 12 * *(uint16_t *)(a1 + 424) + 356) - v152;
  v204 = *(float *)(a1 + 12 * *(uint16_t *)(a1 + 424) + 360) - v153;
  v157 = (float)((float)((float)((float)(a36 * a44) + (float)(a37 * a48)) + a56) + (float)(a38 * a52)) - *v151;
  v158 = (float)((float)((float)((float)(a36 * a45) + (float)(a37 * a49)) + a57) + (float)(a38 * a53)) - v152;
  v159 = (float)((float)((float)((float)(a36 * a46) + (float)(a37 * a50)) + a58) + (float)(a38 * a54)) - v153;
  *a3 = (float)((float)((float)(v158 * v155) + (float)(v157 * v154)) + (float)(v159 * v156))
      / (float)((float)((float)(v155 * v155) + (float)(v154 * v154)) + (float)(v156 * v156));
  a3[1] = (float)((float)((float)(v158 * v208) + (float)(v157 * v211)) + (float)(v159 * v204))
        / (float)((float)((float)(v208 * v208) + (float)(v211 * v211)) + (float)(v204 * v204));
  return v174;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::getLocalMouse  (binary VA: 0x10d9390)
// Original: gameswf::SceneNode::getLocalMouse
// ----------------------------------------------------------------------------
float * gameswf::SceneNode::getLocalMouse(gameswf::SceneNode::Self *self, gameswf::Character::Self *a2, float *a3, float *a4)
{
  gameswf::Character::Self *v4;
  float v5; // xmm2_4
  float v6; // xmm3_4
  gameswf::Self *v7;
  char *WorldMatrix;
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v13;
  float v14[6];

  gameswf::SceneNode::updateInverseTransform(self);
  v4 = *((gameswf::Character::Self **)a2 + 14);
  v5 = *((float *)self + 141);
  v6 = *((float *)self + 142);
  if ( v4 == nullptr )
  {
LABEL_8:
    v10 = v6;
    v9 = v5;
    goto LABEL_4;
  }
  v7 = *((gameswf::Self **)a2 + 13);
  if ( *((uint8_t *)v7 + 2) == 0 )
  {
    if ( (*(uint16_t *)v7)-- == 1 )
      gameswf::free_internal(v7);
    *((uint32_t *)a2 + 13) = 0;
    *((uint32_t *)a2 + 14) = 0;
    goto LABEL_8;
  }
  v13 = *((float *)self + 141);
  WorldMatrix = gameswf::Character::getWorldMatrix(v4);
  memset(v14, 0, sizeof(v14));
  v14[0] = 1.0;
  v14[4] = 1.0;
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v14, (const gameswf::Matrix::Self *)WorldMatrix);
  v9 = (float)((float)(v14[0] * v13) + (float)(v14[1] * v6)) + v14[2];
  v10 = (float)((float)(v14[3] * v13) + (float)(v6 * v14[4])) + v14[5];
LABEL_4:
  *a3 = v9;
  *a4 = v10;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::getWorldMouse  (binary VA: 0x10d97a0)
// Original: gameswf::SceneNode::getWorldMouse
// ----------------------------------------------------------------------------
int * gameswf::SceneNode::getWorldMouse(gameswf::SceneNode::Self *self, int *a2, int *a3)
{
  gameswf::SceneNode::updateInverseTransform(self);
  *a2 = (int)*((float *)self + 141);
  *a3 = (int)*((float *)self + 142);
  return a3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::render  (binary VA: 0x10d97f0)
// Original: gameswf::SceneNode::render
// ----------------------------------------------------------------------------
void gameswf::SceneNode::render()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::getBoundingBox  (binary VA: 0x10d9800)
// Original: gameswf::SceneNode::getBoundingBox
// ----------------------------------------------------------------------------
char * gameswf::SceneNode::getBoundingBox(gameswf::SceneNode::Self *self)
{
  return (char *)self + 496;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SceneNode::clone  (binary VA: 0x10d9810)
// Original: gameswf::SceneNode::clone
// ----------------------------------------------------------------------------
gameswf::SceneNode::Self * gameswf::SceneNode::clone(gameswf::SceneNode::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}


