#include "Core/Utils/DecompTypes.h"
#include "glitch_scene_part03.h"

// ----------------------------------------------------------------------------
// Function: glitch::scene::CStreamingSceneNode::Construct  (binary VA: 0xf4e3f0)
// Original: glitch::scene::CStreamingSceneNode::CStreamingSceneNode
// ----------------------------------------------------------------------------
int glitch::scene::CStreamingSceneNode::Construct(glitch::scene::CEmptySceneNode::Self *a1, int *a2, int a3, int *a4, int a5)
{
  int v5;
  int v6;
  bool v7;

  glitch::scene::CEmptySceneNode::Construct(a1, a2 + 1, a5);
  v5 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[7];
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 16)) = a2[8];
  v6 = *a4;
  v7 = *a4 == 0;
  *((uint32_t *)a1 + 71) = *a4;
  if ( !v7 )
    __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
  *((uint32_t *)a1 + 72) = 0;
  *((uint32_t *)a1 + 73) = 0;
  *((uint32_t *)a1 + 74) = 0;
  *((uint32_t *)a1 + 75) = 0;
  *((uint32_t *)a1 + 76) = 0;
  *((uint32_t *)a1 + 77) = 0;
  *((uint32_t *)a1 + 78) = a3;
  *((uint32_t *)a1 + 79) = 0;
  *((uint32_t *)a1 + 80) = 0;
  *((uint32_t *)a1 + 81) = 0;
  *((uint32_t *)a1 + 82) = 0;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::CTerrainSceneNode::Construct  (binary VA: 0xf4e4e0)
// Original: glitch::scene::CTerrainSceneNode::CTerrainSceneNode
// ----------------------------------------------------------------------------
volatile int32_t * glitch::scene::CTerrainSceneNode::Construct(int a1, int *a2, int a3, unsigned int a4, int a5, int a6, float *a7, uint32_t *a8, int a9)
{
  int v9;
  uint32_t *v10;
  float *v11;
  volatile int32_t *v12;
  int v13;
  bool v14;
  int v15;
  uint32_t *v16;
  glitch::video::CMaterialVertexAttributeMap::Self **v17;
  int v18;
  volatile int32_t *v19;
  volatile int32_t *result;
  typedef float *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef volatile int32_t *_g4_t_v31;
  typedef glitch::video::CMaterial::Self *_g4_t_v32;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v33[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v22)) > _g4_s1 ? (0u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v23)) > _g4_s2 ? (0u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v24)) > _g4_s3 ? (0u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v25)) > _g4_s4 ? (4u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v26)) > _g4_s5 ? (8u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v27)) > _g4_s6 ? (12u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v28)) > _g4_s7 ? (16u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v29)) > _g4_s8 ? (20u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v30)) > _g4_s9 ? (24u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v31)) > _g4_s10 ? (28u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v32)) > _g4_s11 ? (36u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v33)) > _g4_s12 ? (40u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);

  v33[3] = (glitch::video::CMaterialVertexAttributeMap::Self *)&a1;
  v27 = a2;
  v29 = a4;
  v28 = a6;
  v9 = a1;
  v26 = a3;
  v10 = a8;
  v25 = a5;
  v11 = a7;
  v30 = a9;
  *(uint32_t *)(a1 + 460) = ((uint32_t)(uintptr_t)&off_208A78C);
  *(uint32_t *)(v9 + 464) = (uint32_t)(uintptr_t)(&off_208A7AC);
  *(uint32_t *)(v9 + 468) = 0;
  v21 = v11;
  glitch::scene::ISceneNode::Construct((glitch::IObject::Self *)v9, (int *)&off_208A944, v26, v11, v10, (float *)v30);
  *(uint32_t *)(v9 + 260) = 0;
  *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_208A970);
  *(uint32_t *)(v9 + 460) = (uint32_t)(uintptr_t)(&off_208AAA4);
  *(uint32_t *)(v9 + 464) = ((uint32_t)(uintptr_t)&off_208AAC4);
  *(float *)(v9 + 264) = *v21;
  *(float *)(v9 + 268) = v21[1];
  *(float *)(v9 + 272) = v21[2];
  *(uint32_t *)(v9 + 276) = *v10;
  *(uint32_t *)(v9 + 280) = v10[1];
  *(uint32_t *)(v9 + 284) = v10[2];
  *(uint32_t *)(v9 + 288) = v10[3];
  *(uint32_t *)(v9 + 292) = 0;
  *(uint32_t *)(v9 + 296) = 0;
  *(uint32_t *)(v9 + 300) = 0;
  *(uint32_t *)(v9 + 304) = *(uint32_t *)v30;
  *(uint32_t *)(v9 + 308) = *(uint32_t *)(v30 + 4);
  *(uint32_t *)(v9 + 312) = *(uint32_t *)(v30 + 8);
  *(uint32_t *)(v9 + 316) = 0;
  *(uint32_t *)(v9 + 320) = 0;
  *(uint32_t *)(v9 + 324) = 0;
  *(uint32_t *)(v9 + 328) = v28;
  *(uint32_t *)(v9 + 340) = v25;
  *(uint32_t *)(v9 + 332) = v28 - 1;
  *(uint32_t *)(v9 + 336) = 0;
  *(uint32_t *)(v9 + 344) = 1203982323;
  *(uint32_t *)(v9 + 348) = 1203982323;
  *(uint32_t *)(v9 + 352) = 1203982323;
  *(uint32_t *)(v9 + 356) = -943501325;
  *(uint32_t *)(v9 + 360) = -943501325;
  *(uint32_t *)(v9 + 364) = -943501325;
  *(uint32_t *)(v9 + 368) = 0;
  *(uint32_t *)(v9 + 372) = 0;
  *(uint32_t *)(v9 + 376) = 0;
  *(uint32_t *)(v9 + 380) = 0;
  v12 = (volatile int32_t *)opNew(0x2Cu);
  glitch::scene::CMesh::Construct((glitch::scene::CMesh::Self *)v12);
  *(uint32_t *)(v9 + 384) = (uint32_t)(uintptr_t)(v12);
  if ( v12 != nullptr )
    __sync_add_and_fetch(v12 + 1, 1u);
  *(uint32_t *)(v9 + 388) = 0;
  *(uint32_t *)(v9 + 392) = 0;
  *(uint32_t *)(v9 + 396) = 0;
  *(uint8_t *)(v9 + 400) = 0;
  *(uint8_t *)(v9 + 401) = 0;
  *(uint8_t *)(v9 + 402) = 1;
  *(uint8_t *)(v9 + 403) = 0;
  *(uint32_t *)(v9 + 404) = -943501325;
  *(uint32_t *)(v9 + 408) = -943501325;
  *(uint32_t *)(v9 + 412) = -943501325;
  *(uint32_t *)(v9 + 416) = -943501325;
  *(uint32_t *)(v9 + 420) = -943501325;
  *(uint32_t *)(v9 + 424) = -943501325;
  *(uint32_t *)(v9 + 432) = 1092616192;
  *(uint32_t *)(v9 + 436) = 1065353216;
  *(uint32_t *)(v9 + 440) = 1036831949;
  *(uint32_t *)(v9 + 444) = 1065353216;
  *(uint32_t *)(v9 + 448) = 1065353216;
  *(uint32_t *)(v9 + 452) = (uint32_t)(uintptr_t)(byte_20D3E78);
  v13 = *v27;
  v14 = *v27 == 0;
  *(uint32_t *)(v9 + 456) = *v27;
  if ( !v14 )
    __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1u);
  v15 = opNew(0x2Cu);
  *(uint32_t *)(v15 + 4) = 0;
  *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_2081E88);
  v22 = v15;
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v15 + 8), v29);
  v31 = (volatile int32_t *)v22;
  *(uint32_t *)(v22 + 12) = 0;
  *(uint32_t *)(v22 + 16) = 0;
  *(uint32_t *)(v22 + 20) = 0;
  *(uint32_t *)(v22 + 24) = 0;
  *(uint32_t *)(v22 + 28) = 0;
  *(uint16_t *)(v22 + 32) = 255;
  *(uint16_t *)(v22 + 34) = 6;
  *(uint32_t *)(v22 + 36) = 0;
  *(uint8_t *)(v22 + 40) = 1;
  *(uint8_t *)(v22 + 41) = 0;
  __sync_add_and_fetch((volatile int32_t *)(v22 + 4), 1u);
  v16 = *(uint32_t **)(v9 + 384);
  v33[0] = nullptr;
  v32 = nullptr;
  glitch::scene::CMesh::addMeshBuffer(v16, (int *)&v31, &v32, (glitch::video::CMaterialVertexAttributeMap::Self ***)v33);
  sub_5ED4F0(&v32);
  v17 = (glitch::video::CMaterialVertexAttributeMap::Self **)v33[0];
  if ( v33[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v33[0], 0xFFFFFFFF) == 1 )
  {
    v24 = (int)(uintptr_t)(v17);
    glitch::video::CMaterialVertexAttributeMap::Destroy(v17);
    gll_operator_delete_arr(v24);
  }
  v18 = opNew(0x2Cu);
  *(uint32_t *)(v18 + 4) = 0;
  *(uint32_t *)v18 = ((uint32_t)(uintptr_t)&off_2081E88);
  v23 = v18;
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v18 + 8), v29);
  *(uint32_t *)(v23 + 12) = 0;
  *(uint32_t *)(v23 + 16) = 0;
  *(uint32_t *)(v23 + 20) = 0;
  *(uint32_t *)(v23 + 24) = 0;
  *(uint32_t *)(v23 + 28) = 0;
  *(uint16_t *)(v23 + 32) = 255;
  *(uint16_t *)(v23 + 34) = 6;
  *(uint32_t *)(v23 + 36) = 0;
  *(uint8_t *)(v23 + 40) = 1;
  *(uint8_t *)(v23 + 41) = 0;
  __sync_add_and_fetch((volatile int32_t *)(v23 + 4), 1u);
  v19 = *(volatile int32_t **)(v9 + 388);
  *(uint32_t *)(v9 + 388) = v23;
  if ( v19 != nullptr )
    sub_5459C0(v19);
  result = v31;
  if ( v31 != nullptr )
    return (volatile int32_t *)sub_5459C0(v31);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::CTerrainSceneNode::Construct  (binary VA: 0xf4e980)
// Original: glitch::scene::CTerrainSceneNode::CTerrainSceneNode
// ----------------------------------------------------------------------------
volatile int32_t * glitch::scene::CTerrainSceneNode::Construct(glitch::IObject::Self *a1, int *a2, int *a3, int a4, unsigned int a5, int a6, int a7, float *a8, uint32_t *a9, float *a10)
{
  glitch::IObject::Self *v10;
  uint32_t *v11;
  int v12;
  volatile int32_t *v13;
  int v14;
  bool v15;
  int v16;
  uint32_t *v17;
  glitch::video::CMaterialVertexAttributeMap::Self **v18;
  int v19;
  volatile int32_t *v20;
  volatile int32_t *result;
  typedef float *_g4_t_v22;
  typedef float *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef int *_g4_t_v31;
  typedef volatile int32_t *_g4_t_v32;
  typedef glitch::video::CMaterial::Self *_g4_t_v33;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v34[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v25)) > _g4_s3 ? (8u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v26)) > _g4_s4 ? (8u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v27)) > _g4_s5 ? (16u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v28)) > _g4_s6 ? (20u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v29)) > _g4_s7 ? (24u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v31)) > _g4_s9 ? (36u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v32)) > _g4_s10 ? (40u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v33)) > _g4_s11 ? (48u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v34)) > _g4_s12 ? (52u + sizeof(_g4_t_v34)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);

  v34[3] = (glitch::video::CMaterialVertexAttributeMap::Self *)&a1;
  v28 = a3;
  v31 = a2;
  v30 = a5;
  v10 = a1;
  v11 = a9;
  v29 = a7;
  v22 = a10;
  v27 = a6;
  v23 = a8;
  glitch::scene::ISceneNode::Construct(a1, a2 + 1, a4, a8, a9, a10);
  v12 = *v31;
  *(uint32_t *)v10 = *v31;
  *(uint32_t *)((char *)v10 + *(uint32_t *)(v12 - 12)) = v31[4];
  *(uint32_t *)((char *)v10 + *(uint32_t *)(*(uint32_t *)v10 - 16)) = v31[5];
  *((uint32_t *)v10 + 65) = 0;
  *((float *)v10 + 66) = *v23;
  *((float *)v10 + 67) = v23[1];
  *((float *)v10 + 68) = v23[2];
  *((uint32_t *)v10 + 69) = *v11;
  *((uint32_t *)v10 + 70) = v11[1];
  *((uint32_t *)v10 + 71) = v11[2];
  *((uint32_t *)v10 + 72) = v11[3];
  *((uint32_t *)v10 + 73) = 0;
  *((uint32_t *)v10 + 74) = 0;
  *((uint32_t *)v10 + 75) = 0;
  *((float *)v10 + 76) = *v22;
  *((float *)v10 + 77) = v22[1];
  *((float *)v10 + 78) = v22[2];
  *((uint32_t *)v10 + 82) = v29;
  *((uint32_t *)v10 + 85) = v27;
  *((uint32_t *)v10 + 79) = 0;
  *((uint32_t *)v10 + 80) = 0;
  *((uint32_t *)v10 + 81) = 0;
  *((uint32_t *)v10 + 83) = v29 - 1;
  *((uint32_t *)v10 + 84) = 0;
  *((uint32_t *)v10 + 86) = 1203982323;
  *((uint32_t *)v10 + 87) = 1203982323;
  *((uint32_t *)v10 + 88) = 1203982323;
  *((uint32_t *)v10 + 89) = -943501325;
  *((uint32_t *)v10 + 90) = -943501325;
  *((uint32_t *)v10 + 91) = -943501325;
  *((uint32_t *)v10 + 92) = 0;
  *((uint32_t *)v10 + 93) = 0;
  *((uint32_t *)v10 + 94) = 0;
  *((uint32_t *)v10 + 95) = 0;
  v13 = (volatile int32_t *)opNew(0x2Cu);
  glitch::scene::CMesh::Construct((glitch::scene::CMesh::Self *)v13);
  *((uint32_t *)v10 + 96) = (uint32_t)(uintptr_t)(v13);
  if ( v13 != nullptr )
    __sync_add_and_fetch(v13 + 1, 1u);
  *((uint32_t *)v10 + 97) = 0;
  *((uint32_t *)v10 + 98) = 0;
  *((uint32_t *)v10 + 99) = 0;
  *((uint8_t *)v10 + 400) = 0;
  *((uint8_t *)v10 + 401) = 0;
  *((uint8_t *)v10 + 402) = 1;
  *((uint8_t *)v10 + 403) = 0;
  *((uint32_t *)v10 + 101) = -943501325;
  *((uint32_t *)v10 + 102) = -943501325;
  *((uint32_t *)v10 + 103) = -943501325;
  *((uint32_t *)v10 + 104) = -943501325;
  *((uint32_t *)v10 + 105) = -943501325;
  *((uint32_t *)v10 + 106) = -943501325;
  *((uint32_t *)v10 + 108) = 1092616192;
  *((uint32_t *)v10 + 109) = 1065353216;
  *((uint32_t *)v10 + 110) = 1036831949;
  *((uint32_t *)v10 + 111) = 1065353216;
  *((uint32_t *)v10 + 112) = 1065353216;
  *((uint32_t *)v10 + 113) = (uint32_t)(uintptr_t)(byte_20D3E78);
  v14 = *v28;
  v15 = *v28 == 0;
  *((uint32_t *)v10 + 114) = *v28;
  if ( !v15 )
    __sync_add_and_fetch((volatile int32_t *)(v14 + 4), 1u);
  v16 = opNew(0x2Cu);
  *(uint32_t *)(v16 + 4) = 0;
  *(uint32_t *)v16 = ((uint32_t)(uintptr_t)&off_2081E88);
  v24 = v16;
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v16 + 8), v30);
  v32 = (volatile int32_t *)v24;
  *(uint32_t *)(v24 + 12) = 0;
  *(uint32_t *)(v24 + 16) = 0;
  *(uint32_t *)(v24 + 20) = 0;
  *(uint32_t *)(v24 + 24) = 0;
  *(uint32_t *)(v24 + 28) = 0;
  *(uint16_t *)(v24 + 32) = 255;
  *(uint16_t *)(v24 + 34) = 6;
  *(uint32_t *)(v24 + 36) = 0;
  *(uint8_t *)(v24 + 40) = 1;
  *(uint8_t *)(v24 + 41) = 0;
  __sync_add_and_fetch((volatile int32_t *)(v24 + 4), 1u);
  v17 = *((uint32_t **)v10 + 96);
  v34[0] = nullptr;
  v33 = nullptr;
  glitch::scene::CMesh::addMeshBuffer(v17, (int *)&v32, &v33, (glitch::video::CMaterialVertexAttributeMap::Self ***)v34);
  sub_5ED4F0(&v33);
  v18 = (glitch::video::CMaterialVertexAttributeMap::Self **)v34[0];
  if ( v34[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v34[0], 0xFFFFFFFF) == 1 )
  {
    v26 = (int)(uintptr_t)(v18);
    glitch::video::CMaterialVertexAttributeMap::Destroy(v18);
    gll_operator_delete_arr(v26);
  }
  v19 = opNew(0x2Cu);
  *(uint32_t *)(v19 + 4) = 0;
  *(uint32_t *)v19 = ((uint32_t)(uintptr_t)&off_2081E88);
  v25 = v19;
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v19 + 8), v30);
  *(uint32_t *)(v25 + 12) = 0;
  *(uint32_t *)(v25 + 16) = 0;
  *(uint32_t *)(v25 + 20) = 0;
  *(uint32_t *)(v25 + 24) = 0;
  *(uint32_t *)(v25 + 28) = 0;
  *(uint16_t *)(v25 + 32) = 255;
  *(uint16_t *)(v25 + 34) = 6;
  *(uint32_t *)(v25 + 36) = 0;
  *(uint8_t *)(v25 + 40) = 1;
  *(uint8_t *)(v25 + 41) = 0;
  __sync_add_and_fetch((volatile int32_t *)(v25 + 4), 1u);
  v20 = *((volatile int32_t **)v10 + 97);
  *((uint32_t *)v10 + 97) = v25;
  if ( v20 != nullptr )
    sub_5459C0(v20);
  result = v32;
  if ( v32 != nullptr )
    return (volatile int32_t *)sub_5459C0(v32);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::CSkyDomeSceneNode::Construct  (binary VA: 0xf4edf0)
// Original: glitch::scene::CSkyDomeSceneNode::CSkyDomeSceneNode
// ----------------------------------------------------------------------------
glitch::scene::CSkyDomeSceneNode::Self * glitch::scene::CSkyDomeSceneNode::Construct(glitch::scene::CSkyDomeSceneNode::Self *self, glitch::video::IVideoDriver::Self *a2, const boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, unsigned int a4, unsigned int a5, double a6, double a7, double a8, int a9)
{
  glitch::scene::CSkyDomeSceneNode::Self *v9;
  double v10; // xmm0_8
  double v11; // xmm1_8
  double v12; // xmm2_8
  int *v13;
  int v14;
  glitch::video::CMaterial::Self *v15;
  glitch::video::CMaterial::Self *v16;
  uint16_t v17;
  uint32_t *v18;
  glitch::video::IBuffer::Self *v19;
  int v20;
  int v21;
  volatile int32_t *v22;
  volatile int32_t *v23;
  int v24;
  int v25;
  size_t v26;
  void *v27;
  int v28;
  int v29;
  glitch::video::CMaterialVertexAttributeMap::Self *v30;
  glitch::video::CMaterialVertexAttributeMap::Self **v31;
  glitch::video::CMaterialVertexAttributeMap::Self **v32;
  glitch::video::CVertexStreams::Self *v33;
  float v34; // xmm2_4
  unsigned int v35;
  float *v36;
  double i; // xmm1_8
  int v38;
  int v39;
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  uint16_t j;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int16_t v49; // di
  glitch::scene::CSkyDomeSceneNode::Self *result;
  int v51;
  typedef uint16_t _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef glitch::video::IBuffer::Self *_g4_t_v55;
  typedef volatile int32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef int16_t _g4_t_v63;
  typedef double _g4_t_v64;
  typedef double _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef float _g4_t_v67;
  typedef double _g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef double _g4_t_v70;
  typedef uint16_t _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef void (*_g4_t_v75)(glitch::video::IBuffer::Self **, int *, uint32_t *);
  typedef volatile int32_t *_g4_t_v76;
  typedef int *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef double _g4_t_v79;
  typedef int16_t _g4_t_v80;
  typedef double _g4_t_v81;
  typedef int16_t _g4_t_v82;
  typedef uint16_t _g4_t_ParameterID;
  typedef int _g4_t_v84;
  typedef double _g4_t_v85;
  typedef glitch::video::IBuffer::Self *_g4_t_v86;
  typedef glitch::video::IBuffer::Self *_g4_t_v87[4];
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v88;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v89;
  typedef glitch::video::CMaterial::Self *_g4_t_v90;
  typedef uint8_t _g4_t_v91[4];
  typedef glitch::video::CMaterial::Self *_g4_t_v92;
  typedef int _g4_t_v93[3];
  typedef int _g4_t_v94[3];
  typedef int _g4_t_v95[4];
  typedef uint32_t _g4_t_v96[4];
  typedef char _g4_t_v97;
  typedef char _g4_t_v98;
  typedef uint32_t _g4_t_v99[4];
  typedef char _g4_t_v100;
  typedef char _g4_t_v101;
  typedef glitch::scene::CSkyDomeSceneNode::Self **_g4_t_v102;
  typedef size_t _g4_t_v103;
  typedef int _g4_t_v104;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (4u + sizeof(_g4_t_v52)) > _g4_s0 ? (4u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v53)) > _g4_s1 ? (48u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v54)) > _g4_s2 ? (48u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v55)) > _g4_s3 ? (52u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v56)) > _g4_s4 ? (52u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v57)) > _g4_s5 ? (52u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v58)) > _g4_s6 ? (56u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v59)) > _g4_s7 ? (64u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v60)) > _g4_s8 ? (68u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v61)) > _g4_s9 ? (80u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v62)) > _g4_s10 ? (88u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v63)) > _g4_s11 ? (92u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v64)) > _g4_s12 ? (96u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v65)) > _g4_s13 ? (104u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v66)) > _g4_s14 ? (112u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v67)) > _g4_s15 ? (116u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v68)) > _g4_s16 ? (120u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v69)) > _g4_s17 ? (120u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v70)) > _g4_s18 ? (128u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v71)) > _g4_s19 ? (128u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v72)) > _g4_s20 ? (136u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v73)) > _g4_s21 ? (136u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v74)) > _g4_s22 ? (144u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v75)) > _g4_s23 ? (148u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v76)) > _g4_s24 ? (148u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v77)) > _g4_s25 ? (152u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v78)) > _g4_s26 ? (152u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v79)) > _g4_s27 ? (152u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v80)) > _g4_s28 ? (152u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v81)) > _g4_s29 ? (160u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v82)) > _g4_s30 ? (160u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_ParameterID)) > _g4_s31 ? (168u + sizeof(_g4_t_ParameterID)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v84)) > _g4_s32 ? (168u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v85)) > _g4_s33 ? (168u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v86)) > _g4_s34 ? (176u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v87)) > _g4_s35 ? (192u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v88)) > _g4_s36 ? (208u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (224u + sizeof(_g4_t_v89)) > _g4_s37 ? (224u + sizeof(_g4_t_v89)) : _g4_s37,
    _g4_s39 = (228u + sizeof(_g4_t_v90)) > _g4_s38 ? (228u + sizeof(_g4_t_v90)) : _g4_s38,
    _g4_s40 = (232u + sizeof(_g4_t_v91)) > _g4_s39 ? (232u + sizeof(_g4_t_v91)) : _g4_s39,
    _g4_s41 = (236u + sizeof(_g4_t_v92)) > _g4_s40 ? (236u + sizeof(_g4_t_v92)) : _g4_s40,
    _g4_s42 = (240u + sizeof(_g4_t_v93)) > _g4_s41 ? (240u + sizeof(_g4_t_v93)) : _g4_s41,
    _g4_s43 = (252u + sizeof(_g4_t_v94)) > _g4_s42 ? (252u + sizeof(_g4_t_v94)) : _g4_s42,
    _g4_s44 = (264u + sizeof(_g4_t_v95)) > _g4_s43 ? (264u + sizeof(_g4_t_v95)) : _g4_s43,
    _g4_s45 = (280u + sizeof(_g4_t_v96)) > _g4_s44 ? (280u + sizeof(_g4_t_v96)) : _g4_s44,
    _g4_s46 = (296u + sizeof(_g4_t_v97)) > _g4_s45 ? (296u + sizeof(_g4_t_v97)) : _g4_s45,
    _g4_s47 = (297u + sizeof(_g4_t_v98)) > _g4_s46 ? (297u + sizeof(_g4_t_v98)) : _g4_s46,
    _g4_s48 = (300u + sizeof(_g4_t_v99)) > _g4_s47 ? (300u + sizeof(_g4_t_v99)) : _g4_s47,
    _g4_s49 = (316u + sizeof(_g4_t_v100)) > _g4_s48 ? (316u + sizeof(_g4_t_v100)) : _g4_s48,
    _g4_s50 = (317u + sizeof(_g4_t_v101)) > _g4_s49 ? (317u + sizeof(_g4_t_v101)) : _g4_s49,
    _g4_s51 = (328u + sizeof(_g4_t_v102)) > _g4_s50 ? (328u + sizeof(_g4_t_v102)) : _g4_s50,
    _g4_s52 = (332u + sizeof(_g4_t_v103)) > _g4_s51 ? (332u + sizeof(_g4_t_v103)) : _g4_s51,
    _g4_s53 = (336u + sizeof(_g4_t_v104)) > _g4_s52 ? (336u + sizeof(_g4_t_v104)) : _g4_s52
  };
  alignas(16) uint8_t _g4_sf[_g4_s53];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 88u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 92u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 104u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 112u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 116u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 120u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 120u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 128u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 128u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 136u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 136u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 144u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 148u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 148u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 152u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 152u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 152u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 152u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 160u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 160u);
  _g4_t_ParameterID &ParameterID = *reinterpret_cast<_g4_t_ParameterID *>(_g4_sf + 168u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 168u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 168u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 176u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 192u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 208u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 224u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 228u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 232u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 236u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 240u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 252u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 264u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 280u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 296u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 297u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 300u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 316u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 317u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 328u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 332u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 336u);

  v102 = &self;
  v9 = self;
  v77 = (int *)a3;
  v62 = a4;
  v10 = a6;
  v74 = a5;
  v11 = a7;
  v12 = a8;
  v13 = (int *)a2;
  *((uint32_t *)self + 77) = ((uint32_t)(uintptr_t)&off_208976C);
  v14 = a9;
  *((uint32_t *)v9 + 78) = (uint32_t)(uintptr_t)(&off_208978C);
  *((uint32_t *)v9 + 79) = 0;
  v81 = v12;
  v94[0] = 1065353216;
  v94[1] = 1065353216;
  v94[2] = 1065353216;
  memset(v95, 0, 12);
  v95[3] = 1065353216;
  memset(v93, 0, sizeof(v93));
  glitch::scene::ISceneNode::Construct(v9, (int *)&off_2089924, v14, (float *)v93, v95, (float *)v94);
  *((uint32_t *)v9 + 65) = 2139095039;
  *((uint32_t *)v9 + 66) = 2139095039;
  *((uint32_t *)v9 + 67) = 2139095039;
  *((uint32_t *)v9 + 68) = -8388609;
  *((uint32_t *)v9 + 69) = -8388609;
  *((uint32_t *)v9 + 70) = -8388609;
  *((uint32_t *)v9 + 71) = 0;
  *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_2089950);
  *((uint32_t *)v9 + 77) = (uint32_t)(uintptr_t)(&off_2089A84);
  *((uint32_t *)v9 + 78) = ((uint32_t)(uintptr_t)&off_2089AA4);
  *((uint32_t *)v9 + 72) = 0;
  *((uint32_t *)v9 + 73) = 0;
  *((uint32_t *)v9 + 74) = 0;
  *((uint32_t *)v9 + 75) = 0;
  *((uint32_t *)v9 + 76) = 0;
  glitch::video::CMaterialRendererManager::createMaterialInstance(&v90, v13[113], (int)(uintptr_t)(v13), 11, nullptr, nullptr);
  v15 = nullptr;
  v92 = v90;
  if ( v90 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v90, 1u);
    v15 = v92;
  }
  v16 = *((glitch::video::CMaterial::Self **)v9 + 72);
  *((uint32_t *)v9 + 72) = (uint32_t)(uintptr_t)(v15);
  v92 = v16;
  sub_5ED4F0(&v92);
  sub_5ED4F0(&v90);
  ParameterID = glitch::video::CMaterialRenderer::getParameterID(*(uint32_t *)(*((uint32_t *)v9 + 72) + 4), 2, 0, 0);
  v17 = glitch::video::CMaterialRenderer::getParameterID(*(uint32_t *)(*((uint32_t *)v9 + 72) + 4), 6, 0, 0);
  if ( v17 != 0xFFFF )
  {
    v52 = v17;
    v18 = *((uint32_t **)v9 + 72);
    v91[0] = 0xFFu;
    v91[1] = 0xFFu;
    v91[2] = 0xFFu;
    v91[3] = 0xFFu;
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
      v18,
      v52,
      0,
      v91);
  }
  glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
    *((uint32_t **)v9 + 72),
    ParameterID,
    0,
    v77);
  *((uint32_t *)v9 + 68) = 0;
  *((uint32_t *)v9 + 69) = 0;
  *((uint32_t *)v9 + 70) = 0;
  *((uint32_t *)v9 + 65) = 0;
  *((uint32_t *)v9 + 66) = 0;
  *((uint32_t *)v9 + 67) = 0;
  v63 = v74 + 1;
  v84 = v62 * (6 * v74 - 3);
  v78 = (v74 + 1) * (v62 + 1);
  v75 = *(void (**)(glitch::video::IBuffer::Self **, int *, uint32_t *))(*v13 + 88);
  v99[3] = opNewArray(2 * v84);
  v99[2] = 2 * v84;
  v99[0] = 1;
  v99[1] = 0;
  v100 = 1;
  v101 = 1;
  v75(&v86, v13, v99);
  v19 = v86;
  if ( v86 != nullptr )
  {
    v76 = (volatile int32_t *)((char *)v86 + 4);
    __sync_add_and_fetch((volatile int32_t *)v86 + 1, 1u);
    v55 = v19;
    v104 = 0;
    v20 = opNew(0x2Cu);
    *(uint32_t *)(v20 + 4) = 0;
    *(uint32_t *)v20 = ((uint32_t)(uintptr_t)&off_2081E88);
    v53 = v20;
    glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v20 + 8), 3u);
    v21 = v53;
    v22 = (volatile int32_t *)v55;
    *(uint32_t *)(v53 + 12) = (uint32_t)(uintptr_t)(v55);
    __sync_add_and_fetch(v76, 1u);
  }
  else
  {
    v104 = 0;
    v51 = opNew(0x2Cu);
    *(uint32_t *)(v51 + 4) = 0;
    *(uint32_t *)v51 = ((uint32_t)(uintptr_t)&off_2081E88);
    v54 = v51;
    glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v51 + 8), 3u);
    v21 = v54;
    *(uint32_t *)(v54 + 12) = 0;
    v22 = nullptr;
  }
  *(uint32_t *)(v21 + 16) = 0;
  *(uint32_t *)(v21 + 20) = v84;
  *(uint32_t *)(v21 + 24) = 0;
  *(uint32_t *)(v21 + 28) = v78;
  *(uint16_t *)(v21 + 32) = 1;
  *(uint16_t *)(v21 + 34) = 6;
  *(uint32_t *)(v21 + 36) = 0;
  *(uint8_t *)(v21 + 40) = 1;
  *(uint8_t *)(v21 + 41) = 0;
  __sync_add_and_fetch((volatile int32_t *)(v21 + 4), 1u);
  v23 = *((volatile int32_t **)v9 + 71);
  *((uint32_t *)v9 + 71) = v21;
  if ( v23 != nullptr )
  {
    v56 = v22;
    sub_5459C0(v23);
    v22 = v56;
  }
  if ( v22 != nullptr )
    sub_5459C0(v22);
  v24 = *((uint32_t *)v9 + 71);
  v25 = *v13;
  memset(v96, 0, sizeof(v96));
  v60 = *(glitch::video::CVertexStreams::Self **)(v24 + 8);
  v97 = 1;
  v98 = 1;
  (*(void (**)(glitch::video::IBuffer::Self **, int *, uint32_t *))(v25 + 88))(v87, v13, v96);
  v26 = v78
      * (uint16_t)glitch::video::CVertexStreams::setupStreams(v60, (volatile int32_t **)v87, -1, 0, 0);
  *((uint32_t *)v60 + 2) = v78;
  v103 = 0;
  v27 = (void *)opNewArray(v26);
  v103 = v26;
  v28 = 0;
  glitch::video::IBuffer::reset(v87[0], v103, v27, true);
  v59 = *((uint32_t *)v9 + 71);
  v29 = glitch::video::IBuffer::mapInternal(
          *(glitch::video::IBuffer::Self **)(v59 + 12),
          1u,
          0,
          *(uint32_t *)(*(uint32_t *)(v59 + 12) + 20),
          0);
  if ( v29 != 0 )
    v28 = *(uint32_t *)(v59 + 16) + v29;
  v61 = glitch::video::IBuffer::mapInternal(v87[0], 1u, 0, *((uint32_t *)v87[0] + 5), 0);
  v89 = v60;
  __sync_add_and_fetch((volatile int32_t *)v60, 1u);
  glitch::video::CMaterialVertexAttributeMap::allocate(
    (volatile int32_t **)&v88,
    (glitch::video::CMaterialVertexAttributeMap::Self **)(*((uint32_t *)v9 + 72) + 4),
    (const boost::intrusive_ptr<glitch::video::CVertexStreams::Self const> *)&v89);
  v30 = v88;
  if ( v88 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v88, 1u);
  v31 = *((glitch::video::CMaterialVertexAttributeMap::Self ***)v9 + 73);
  *((uint32_t *)v9 + 73) = (uint32_t)(uintptr_t)(v30);
  if ( v31 != nullptr && __sync_fetch_and_add((volatile int32_t *)v31, 0xFFFFFFFF) == 1 )
  {
    v57 = (int)(uintptr_t)(v31);
    glitch::video::CMaterialVertexAttributeMap::Destroy(v31);
    gll_operator_delete_arr(v57);
  }
  v32 = (glitch::video::CMaterialVertexAttributeMap::Self **)v88;
  if ( v88 != nullptr && __sync_fetch_and_add((volatile int32_t *)v88, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v32);
    gll_operator_delete_arr((int)(uintptr_t)(v32));
  }
  v33 = v89;
  if ( v89 != nullptr && __sync_fetch_and_add((volatile int32_t *)v89, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v33);
    gll_operator_delete_arr((int)(uintptr_t)(v33));
  }
  v66 = 0;
  v58 = v28;
  v34 = v10;
  v72 = 0;
  v65 = 1.5707963267948966 * fmin(fabs(v11), 2.0) / (double)v74;
  v68 = 0.0;
  v64 = 0.0;
  v67 = v34 / (float)((float)((float)HIWORD(v74) * 65536.0) + (float)(uint16_t)v74);
  v70 = 1.0;
  while ( 1 )
  {
    v79 = 1.0;
    v85 = 6.123233995736766e-17;
    v35 = 0;
    v36 = (float *)(v61 + 20 * v72);
    for ( i = 1.5707963267948966; ; i = i - v65 )
    {
      v38 = (uint16_t)v35;
      v39 = v35++ >> 16;
      v40 = v68 * (v85 * v81);
      *v36 = v40;
      v41 = v85 * v81 * v70;
      v36[2] = v41;
      v42 = v79 * v81 + 50.0;
      v36[1] = v42;
      v36[3] = (float)((float)(uint16_t)v66 + (float)(65536.0 * (float)HIWORD(v66)))
             * (float)(1.0 / (float)((float)((float)HIWORD(v62) * 65536.0) + (float)(uint16_t)v62));
      v36[4] = (float)((float)((float)v39 * 65536.0) + (float)v38) * v67;
      v36 += 5;
      if ( v74 < v35 )
        break;
      v85 = cos(i - v65);
      v79 = sin(i - v65);
    }
    if ( v62 < ++v66 )
      break;
    v64 = v64 + 6.283185307179586 / (double)v62;
    v68 = sin(v64);
    v70 = cos(v64);
    v72 += v35;
  }
  if ( v62 != 0 )
  {
    v71 = v74 + 2;
    v69 = 1;
    v80 = 0;
    v73 = 0;
    for ( j = v74 + 2; ; j = v71 )
    {
      *(uint16_t *)(v58 + 2 * v73) = j;
      v44 = v73 + 2;
      *(uint16_t *)(v58 + 2 * v73 + 2) = v80 + 1;
      v45 = v73 + 3;
      v73 += 3;
      *(uint16_t *)(v58 + 2 * v44) = v80;
      if ( v74 > 1 )
      {
        v82 = v80 + 2;
        v46 = 2 * v45;
        v47 = v71 + 1;
        v48 = 1;
        do
        {
          *(uint16_t *)(v58 + v46) = v47;
          *(uint16_t *)(v58 + v46 + 8) = v47;
          *(uint16_t *)(v58 + v46 + 10) = v48 + v80;
          *(uint16_t *)(v58 + v46 + 2) = v82;
          *(uint16_t *)(v58 + v46 + 4) = *(uint16_t *)(v58 + v46 + 10);
          ++v47;
          v49 = v80 + v63 + v48++;
          ++v82;
          *(uint16_t *)(v58 + v46 + 6) = v49;
          v46 += 12;
        }
        while ( v48 != v74 );
        v73 += 6 * v74 - 6;
      }
      v71 += v63;
      v80 += v63;
      if ( v62 <= v69 )
        break;
      ++v69;
    }
  }
  glitch::video::IBuffer::unmap(v87[0]);
  glitch::video::IBuffer::bind(v87[0], 7u, 0);
  if ( v58 != 0 )
    glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v59 + 12));
  glitch::video::IBuffer::bind(v86, 7u, 0);
  glitch::video::CVertexStreams::updateStates(v60, false);
  if ( v87[0] != nullptr )
    sub_5459C0((volatile int32_t *)v87[0]);
  result = (glitch::scene::CSkyDomeSceneNode::Self *)(v86);
  if ( v86 != nullptr )
    return (glitch::scene::CSkyDomeSceneNode::Self *)sub_5459C0((volatile int32_t *)v86);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::CSkyDomeSceneNode::Construct  (binary VA: 0xf4fa30)
// Original: glitch::scene::CSkyDomeSceneNode::CSkyDomeSceneNode
// ----------------------------------------------------------------------------
glitch::scene::CSkyDomeSceneNode::Self * glitch::scene::CSkyDomeSceneNode::Construct(glitch::scene::CSkyDomeSceneNode::Self *self, glitch::video::IVideoDriver::Self *a2, const boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, int *a4, unsigned int a5, unsigned int a6, double a7, double a8, double a9, int a10)
{
  glitch::video::IVideoDriver::Self *v10;
  glitch::scene::CSkyDomeSceneNode::Self *v11;
  int v12;
  glitch::video::CMaterial::Self *v13;
  glitch::video::CMaterial::Self *v14;
  uint16_t ParameterID; // si
  uint16_t v16;
  uint32_t *v17;
  glitch::video::IBuffer::Self *v18;
  int v19;
  int v20;
  volatile int32_t *v21;
  int v22;
  int v23;
  size_t v24;
  void *v25;
  int v26;
  int v27;
  glitch::video::CMaterialVertexAttributeMap::Self *v28;
  glitch::video::CMaterialVertexAttributeMap::Self **v29;
  glitch::video::CMaterialVertexAttributeMap::Self **v30;
  glitch::video::CVertexStreams::Self *v31;
  float v32; // xmm2_4
  unsigned int v33;
  float *v34;
  double i; // xmm1_8
  int v36;
  int v37;
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  uint16_t j;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int16_t v47; // di
  glitch::scene::CSkyDomeSceneNode::Self *result;
  int v49;
  typedef uint16_t _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef int16_t _g4_t_v60;
  typedef double _g4_t_v61;
  typedef double _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef float _g4_t_v64;
  typedef double _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef double _g4_t_v67;
  typedef double _g4_t_v68;
  typedef uint16_t _g4_t_v69;
  typedef double _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef unsigned int _g4_t_v73;
  typedef void (*_g4_t_v74)(glitch::video::IBuffer::Self **, int *, uint32_t *);
  typedef volatile int32_t *_g4_t_v75;
  typedef int *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef double _g4_t_v78;
  typedef int16_t _g4_t_v79;
  typedef double _g4_t_v80;
  typedef int16_t _g4_t_v81;
  typedef int *_g4_t_v82;
  typedef double _g4_t_v83;
  typedef glitch::video::IBuffer::Self *_g4_t_v84;
  typedef glitch::video::IBuffer::Self *_g4_t_v85[4];
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v86;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v87;
  typedef glitch::video::CMaterial::Self *_g4_t_v88;
  typedef uint8_t _g4_t_v89[4];
  typedef glitch::video::CMaterial::Self *_g4_t_v90;
  typedef int _g4_t_v91[3];
  typedef float _g4_t_v92[3];
  typedef int _g4_t_v93[4];
  typedef uint32_t _g4_t_v94[4];
  typedef char _g4_t_v95;
  typedef char _g4_t_v96;
  typedef uint32_t _g4_t_v97[4];
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef glitch::scene::CSkyDomeSceneNode::Self **_g4_t_v100;
  typedef size_t _g4_t_v101;
  typedef int _g4_t_v102;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (4u + sizeof(_g4_t_v50)) > _g4_s0 ? (4u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v51)) > _g4_s1 ? (48u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v52)) > _g4_s2 ? (48u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v53)) > _g4_s3 ? (52u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v54)) > _g4_s4 ? (52u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v55)) > _g4_s5 ? (56u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v56)) > _g4_s6 ? (64u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v57)) > _g4_s7 ? (68u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v58)) > _g4_s8 ? (80u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v59)) > _g4_s9 ? (88u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v60)) > _g4_s10 ? (92u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v61)) > _g4_s11 ? (96u + sizeof(_g4_t_v61)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v62)) > _g4_s12 ? (104u + sizeof(_g4_t_v62)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v63)) > _g4_s13 ? (112u + sizeof(_g4_t_v63)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v64)) > _g4_s14 ? (116u + sizeof(_g4_t_v64)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v65)) > _g4_s15 ? (120u + sizeof(_g4_t_v65)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v66)) > _g4_s16 ? (120u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_v67)) > _g4_s17 ? (128u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v68)) > _g4_s18 ? (128u + sizeof(_g4_t_v68)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v69)) > _g4_s19 ? (128u + sizeof(_g4_t_v69)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v70)) > _g4_s20 ? (136u + sizeof(_g4_t_v70)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v71)) > _g4_s21 ? (136u + sizeof(_g4_t_v71)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v72)) > _g4_s22 ? (136u + sizeof(_g4_t_v72)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v73)) > _g4_s23 ? (144u + sizeof(_g4_t_v73)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v74)) > _g4_s24 ? (148u + sizeof(_g4_t_v74)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v75)) > _g4_s25 ? (148u + sizeof(_g4_t_v75)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v76)) > _g4_s26 ? (152u + sizeof(_g4_t_v76)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v77)) > _g4_s27 ? (152u + sizeof(_g4_t_v77)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v78)) > _g4_s28 ? (152u + sizeof(_g4_t_v78)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v79)) > _g4_s29 ? (152u + sizeof(_g4_t_v79)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v80)) > _g4_s30 ? (160u + sizeof(_g4_t_v80)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v81)) > _g4_s31 ? (160u + sizeof(_g4_t_v81)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v82)) > _g4_s32 ? (168u + sizeof(_g4_t_v82)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v83)) > _g4_s33 ? (168u + sizeof(_g4_t_v83)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v84)) > _g4_s34 ? (176u + sizeof(_g4_t_v84)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v85)) > _g4_s35 ? (192u + sizeof(_g4_t_v85)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v86)) > _g4_s36 ? (208u + sizeof(_g4_t_v86)) : _g4_s36,
    _g4_s38 = (224u + sizeof(_g4_t_v87)) > _g4_s37 ? (224u + sizeof(_g4_t_v87)) : _g4_s37,
    _g4_s39 = (228u + sizeof(_g4_t_v88)) > _g4_s38 ? (228u + sizeof(_g4_t_v88)) : _g4_s38,
    _g4_s40 = (232u + sizeof(_g4_t_v89)) > _g4_s39 ? (232u + sizeof(_g4_t_v89)) : _g4_s39,
    _g4_s41 = (236u + sizeof(_g4_t_v90)) > _g4_s40 ? (236u + sizeof(_g4_t_v90)) : _g4_s40,
    _g4_s42 = (240u + sizeof(_g4_t_v91)) > _g4_s41 ? (240u + sizeof(_g4_t_v91)) : _g4_s41,
    _g4_s43 = (252u + sizeof(_g4_t_v92)) > _g4_s42 ? (252u + sizeof(_g4_t_v92)) : _g4_s42,
    _g4_s44 = (264u + sizeof(_g4_t_v93)) > _g4_s43 ? (264u + sizeof(_g4_t_v93)) : _g4_s43,
    _g4_s45 = (280u + sizeof(_g4_t_v94)) > _g4_s44 ? (280u + sizeof(_g4_t_v94)) : _g4_s44,
    _g4_s46 = (296u + sizeof(_g4_t_v95)) > _g4_s45 ? (296u + sizeof(_g4_t_v95)) : _g4_s45,
    _g4_s47 = (297u + sizeof(_g4_t_v96)) > _g4_s46 ? (297u + sizeof(_g4_t_v96)) : _g4_s46,
    _g4_s48 = (300u + sizeof(_g4_t_v97)) > _g4_s47 ? (300u + sizeof(_g4_t_v97)) : _g4_s47,
    _g4_s49 = (316u + sizeof(_g4_t_v98)) > _g4_s48 ? (316u + sizeof(_g4_t_v98)) : _g4_s48,
    _g4_s50 = (317u + sizeof(_g4_t_v99)) > _g4_s49 ? (317u + sizeof(_g4_t_v99)) : _g4_s49,
    _g4_s51 = (328u + sizeof(_g4_t_v100)) > _g4_s50 ? (328u + sizeof(_g4_t_v100)) : _g4_s50,
    _g4_s52 = (332u + sizeof(_g4_t_v101)) > _g4_s51 ? (332u + sizeof(_g4_t_v101)) : _g4_s51,
    _g4_s53 = (336u + sizeof(_g4_t_v102)) > _g4_s52 ? (336u + sizeof(_g4_t_v102)) : _g4_s52
  };
  alignas(16) uint8_t _g4_sf[_g4_s53];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 64u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 68u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 96u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 104u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 116u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 120u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 120u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 128u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 128u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 136u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 136u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 136u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 144u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 148u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 148u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 152u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 152u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 152u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 152u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 160u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 160u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 168u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 168u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 176u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 192u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 208u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 224u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 228u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 232u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 236u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 240u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 252u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 264u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 280u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 296u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 297u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 300u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 316u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 317u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 328u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 332u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 336u);

  v100 = &self;
  v10 = a2;
  v82 = (int *)a3;
  v11 = self;
  v76 = a4;
  v59 = a5;
  v73 = a6;
  v92[0] = 1.0;
  v70 = a7;
  v92[1] = 1.0;
  v67 = a8;
  v92[2] = 1.0;
  v80 = a9;
  memset(v93, 0, 12);
  v93[3] = 1065353216;
  memset(v91, 0, sizeof(v91));
  glitch::scene::ISceneNode::Construct(self, (int *)a2 + 1, a10, (float *)v91, v93, v92);
  v12 = *(uint32_t *)v10;
  *(uint32_t *)v11 = *(uint32_t *)v10;
  *(uint32_t *)((char *)v11 + *(uint32_t *)(v12 - 12)) = *((uint32_t *)v10 + 4);
  *(uint32_t *)((char *)v11 + *(uint32_t *)(*(uint32_t *)v11 - 16)) = *((uint32_t *)v10 + 5);
  *((uint32_t *)v11 + 65) = 2139095039;
  *((uint32_t *)v11 + 66) = 2139095039;
  *((uint32_t *)v11 + 67) = 2139095039;
  *((uint32_t *)v11 + 68) = -8388609;
  *((uint32_t *)v11 + 69) = -8388609;
  *((uint32_t *)v11 + 70) = -8388609;
  *((uint32_t *)v11 + 71) = 0;
  *((uint32_t *)v11 + 72) = 0;
  *((uint32_t *)v11 + 73) = 0;
  *((uint32_t *)v11 + 74) = 0;
  *((uint32_t *)v11 + 75) = 0;
  *((uint32_t *)v11 + 76) = 0;
  glitch::video::CMaterialRendererManager::createMaterialInstance(&v88, v82[113], (int)(uintptr_t)(v82), 11, nullptr, nullptr);
  v13 = nullptr;
  v90 = v88;
  if ( v88 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v88, 1u);
    v13 = v90;
  }
  v14 = *((glitch::video::CMaterial::Self **)v11 + 72);
  *((uint32_t *)v11 + 72) = (uint32_t)(uintptr_t)(v13);
  v90 = v14;
  sub_5ED4F0(&v90);
  sub_5ED4F0(&v88);
  ParameterID = glitch::video::CMaterialRenderer::getParameterID(*(uint32_t *)(*((uint32_t *)v11 + 72) + 4), 2, 0, 0);
  v16 = glitch::video::CMaterialRenderer::getParameterID(*(uint32_t *)(*((uint32_t *)v11 + 72) + 4), 6, 0, 0);
  if ( v16 != 0xFFFF )
  {
    v50 = v16;
    v17 = *((uint32_t **)v11 + 72);
    v89[0] = 0xFFu;
    v89[1] = 0xFFu;
    v89[2] = 0xFFu;
    v89[3] = 0xFFu;
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
      v17,
      v50,
      0,
      v89);
  }
  glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
    *((uint32_t **)v11 + 72),
    ParameterID,
    0,
    v76);
  *((uint32_t *)v11 + 68) = 0;
  *((uint32_t *)v11 + 69) = 0;
  *((uint32_t *)v11 + 70) = 0;
  *((uint32_t *)v11 + 65) = 0;
  *((uint32_t *)v11 + 66) = 0;
  *((uint32_t *)v11 + 67) = 0;
  v60 = v73 + 1;
  v77 = (v73 + 1) * (v59 + 1);
  v53 = v59 * (6 * v73 - 3);
  v74 = *(void (**)(glitch::video::IBuffer::Self **, int *, uint32_t *))(*v82 + 88);
  v97[3] = opNewArray(2 * v53);
  v97[2] = 2 * v53;
  v97[0] = 1;
  v97[1] = 0;
  v98 = 1;
  v99 = 1;
  v74(&v84, v82, v97);
  v18 = v84;
  if ( v84 != nullptr )
  {
    v75 = (volatile int32_t *)((char *)v84 + 4);
    __sync_add_and_fetch((volatile int32_t *)v84 + 1, 1u);
    v53 = v59 * (6 * v73 - 3);
    v102 = 0;
    v19 = opNew(0x2Cu);
    *(uint32_t *)(v19 + 4) = 0;
    *(uint32_t *)v19 = ((uint32_t)(uintptr_t)&off_2081E88);
    v51 = v19;
    glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v19 + 8), 3u);
    v20 = v51;
    *(uint32_t *)(v51 + 12) = (uint32_t)(uintptr_t)(v18);
    __sync_add_and_fetch(v75, 1u);
  }
  else
  {
    v102 = 0;
    v49 = opNew(0x2Cu);
    *(uint32_t *)(v49 + 4) = 0;
    *(uint32_t *)v49 = ((uint32_t)(uintptr_t)&off_2081E88);
    v52 = v49;
    glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v49 + 8), 3u);
    v20 = v52;
    *(uint32_t *)(v52 + 12) = 0;
  }
  *(uint32_t *)(v20 + 20) = v53;
  *(uint32_t *)(v20 + 16) = 0;
  *(uint32_t *)(v20 + 24) = 0;
  *(uint32_t *)(v20 + 28) = v77;
  *(uint16_t *)(v20 + 32) = 1;
  *(uint16_t *)(v20 + 34) = 6;
  *(uint32_t *)(v20 + 36) = 0;
  *(uint8_t *)(v20 + 40) = 1;
  *(uint8_t *)(v20 + 41) = 0;
  __sync_add_and_fetch((volatile int32_t *)(v20 + 4), 1u);
  v21 = *((volatile int32_t **)v11 + 71);
  *((uint32_t *)v11 + 71) = v20;
  if ( v21 != nullptr )
    sub_5459C0(v21);
  if ( v18 != nullptr )
    sub_5459C0((volatile int32_t *)v18);
  v22 = *((uint32_t *)v11 + 71);
  memset(v94, 0, sizeof(v94));
  v57 = *(glitch::video::CVertexStreams::Self **)(v22 + 8);
  v23 = *v82;
  v95 = 1;
  v96 = 1;
  (*(void (**)(glitch::video::IBuffer::Self **, int *, uint32_t *))(v23 + 88))(v85, v82, v94);
  v24 = v77
      * (uint16_t)glitch::video::CVertexStreams::setupStreams(v57, (volatile int32_t **)v85, -1, 0, 0);
  *((uint32_t *)v57 + 2) = v77;
  v101 = 0;
  v25 = (void *)opNewArray(v24);
  v101 = v24;
  v26 = 0;
  glitch::video::IBuffer::reset(v85[0], v101, v25, true);
  v56 = *((uint32_t *)v11 + 71);
  v27 = glitch::video::IBuffer::mapInternal(
          *(glitch::video::IBuffer::Self **)(v56 + 12),
          1u,
          0,
          *(uint32_t *)(*(uint32_t *)(v56 + 12) + 20),
          0);
  if ( v27 != 0 )
    v26 = *(uint32_t *)(v56 + 16) + v27;
  v58 = glitch::video::IBuffer::mapInternal(v85[0], 1u, 0, *((uint32_t *)v85[0] + 5), 0);
  v87 = v57;
  __sync_add_and_fetch((volatile int32_t *)v57, 1u);
  glitch::video::CMaterialVertexAttributeMap::allocate(
    (volatile int32_t **)&v86,
    (glitch::video::CMaterialVertexAttributeMap::Self **)(*((uint32_t *)v11 + 72) + 4),
    (const boost::intrusive_ptr<glitch::video::CVertexStreams::Self const> *)&v87);
  v28 = v86;
  if ( v86 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v86, 1u);
  v29 = *((glitch::video::CMaterialVertexAttributeMap::Self ***)v11 + 73);
  *((uint32_t *)v11 + 73) = (uint32_t)(uintptr_t)(v28);
  if ( v29 != nullptr && __sync_fetch_and_add((volatile int32_t *)v29, 0xFFFFFFFF) == 1 )
  {
    v54 = (int)(uintptr_t)(v29);
    glitch::video::CMaterialVertexAttributeMap::Destroy(v29);
    gll_operator_delete_arr(v54);
  }
  v30 = (glitch::video::CMaterialVertexAttributeMap::Self **)v86;
  if ( v86 != nullptr && __sync_fetch_and_add((volatile int32_t *)v86, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v30);
    gll_operator_delete_arr((int)(uintptr_t)(v30));
  }
  v31 = v87;
  if ( v87 != nullptr && __sync_fetch_and_add((volatile int32_t *)v87, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v31);
    gll_operator_delete_arr((int)(uintptr_t)(v31));
  }
  v63 = 0;
  v55 = v26;
  v32 = v70;
  v71 = 0;
  v62 = 1.5707963267948966 * fmin(fabs(v67), 2.0) / (double)v73;
  v68 = 0.0;
  v61 = 0.0;
  v64 = v32 / (float)((float)((float)HIWORD(v73) * 65536.0) + (float)(uint16_t)v73);
  v65 = 1.0;
  while ( 1 )
  {
    v78 = 1.0;
    v83 = 6.123233995736766e-17;
    v33 = 0;
    v34 = (float *)(v58 + 20 * v71);
    for ( i = 1.5707963267948966; ; i = i - v62 )
    {
      v36 = (uint16_t)v33;
      v37 = v33++ >> 16;
      v38 = v68 * (v83 * v80);
      *v34 = v38;
      v39 = v83 * v80 * v65;
      v34[2] = v39;
      v40 = v78 * v80 + 50.0;
      v34[1] = v40;
      v34[3] = (float)((float)(uint16_t)v63 + (float)(65536.0 * (float)HIWORD(v63)))
             * (float)(1.0 / (float)((float)((float)HIWORD(v59) * 65536.0) + (float)(uint16_t)v59));
      v34[4] = (float)((float)((float)v37 * 65536.0) + (float)v36) * v64;
      v34 += 5;
      if ( v73 < v33 )
        break;
      v83 = cos(i - v62);
      v78 = sin(i - v62);
    }
    if ( v59 < ++v63 )
      break;
    v61 = v61 + 6.283185307179586 / (double)v59;
    v68 = sin(v61);
    v65 = cos(v61);
    v71 += v33;
  }
  if ( v59 != 0 )
  {
    v69 = v73 + 2;
    v66 = 1;
    v79 = 0;
    v72 = 0;
    for ( j = v73 + 2; ; j = v69 )
    {
      *(uint16_t *)(v55 + 2 * v72) = j;
      v42 = v72 + 2;
      *(uint16_t *)(v55 + 2 * v72 + 2) = v79 + 1;
      v43 = v72 + 3;
      v72 += 3;
      *(uint16_t *)(v55 + 2 * v42) = v79;
      if ( v73 > 1 )
      {
        v81 = v79 + 2;
        v44 = 2 * v43;
        v45 = v69 + 1;
        v46 = 1;
        do
        {
          *(uint16_t *)(v55 + v44) = v45;
          *(uint16_t *)(v55 + v44 + 8) = v45;
          *(uint16_t *)(v55 + v44 + 10) = v46 + v79;
          *(uint16_t *)(v55 + v44 + 2) = v81;
          *(uint16_t *)(v55 + v44 + 4) = *(uint16_t *)(v55 + v44 + 10);
          v47 = v46 + v79 + v60;
          ++v45;
          ++v46;
          ++v81;
          *(uint16_t *)(v55 + v44 + 6) = v47;
          v44 += 12;
        }
        while ( v46 != v73 );
        v72 += 6 * v73 - 6;
      }
      v69 += v60;
      v79 += v60;
      if ( v59 <= v66 )
        break;
      ++v66;
    }
  }
  glitch::video::IBuffer::unmap(v85[0]);
  glitch::video::IBuffer::bind(v85[0], 7u, 0);
  if ( v55 != 0 )
    glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v56 + 12));
  glitch::video::IBuffer::bind(v84, 7u, 0);
  glitch::video::CVertexStreams::updateStates(v57, false);
  if ( v85[0] != nullptr )
    sub_5459C0((volatile int32_t *)v85[0]);
  result = (glitch::scene::CSkyDomeSceneNode::Self *)(v84);
  if ( v84 != nullptr )
    return (glitch::scene::CSkyDomeSceneNode::Self *)sub_5459C0((volatile int32_t *)v84);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::CSkyCubeSceneNode::Construct  (binary VA: 0xf50630)
// Original: glitch::scene::CSkyCubeSceneNode::CSkyCubeSceneNode
// ----------------------------------------------------------------------------
glitch::scene::CSkyCubeSceneNode::Self * glitch::scene::CSkyCubeSceneNode::Construct(glitch::scene::CSkyCubeSceneNode::Self *self, glitch::video::IVideoDriver::Self *a2, glitch::video::ITexture::Self **a3, int a4)
{
  glitch::scene::CSkyCubeSceneNode::Self *v4;
  glitch::video::IVideoDriver::Self *v5;
  int v6;
  uint16_t MaterialRenderer;
  glitch::video::CMaterialRenderer::Self **v8;
  int v9;
  glitch::video::CMaterialRenderer::Self *v10;
  glitch::video::CMaterialRenderer::Self *v11;
  glitch::video::CMaterial::Self *v12;
  glitch::video::CMaterial::Self *v13;
  uint32_t *v14;
  int v15;
  volatile int32_t *v16;
  int v17;
  int v18;
  int v19;
  glitch::video::IBuffer::Self *v20;
  volatile int32_t *v21;
  void *v22;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  glitch::video::CMaterialVertexAttributeMap::Self *v32;
  glitch::video::CMaterialVertexAttributeMap::Self **v33;
  glitch::video::CMaterialVertexAttributeMap::Self **v34;
  glitch::video::CVertexStreams::Self *v35;
  void *v36;
  glitch::video::IBuffer::Self *v37;
  uint16_t *v38;
  int v39;
  volatile int32_t *v40;
  glitch::scene::CSkyCubeSceneNode::Self *result;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef glitch::video::ITexture::Self *_g4_t_v49;
  typedef glitch::video::ITexture::Self *_g4_t_v50;
  typedef glitch::video::ITexture::Self *_g4_t_v51;
  typedef glitch::video::ITexture::Self *_g4_t_v52;
  typedef glitch::video::ITexture::Self *_g4_t_v53;
  typedef glitch::video::ITexture::Self *_g4_t_v54;
  typedef glitch::video::ITexture::Self **_g4_t_v55;
  typedef int _g4_t_v56;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v57[4];
  typedef glitch::video::IBuffer::Self *_g4_t_v58;
  typedef glitch::video::IBuffer::Self *_g4_t_v59;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v60;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v61;
  typedef glitch::video::CMaterial::Self *_g4_t_v62;
  typedef uint8_t _g4_t_v63[4];
  typedef glitch::video::CMaterial::Self *_g4_t_v64;
  typedef int _g4_t_v65[3];
  typedef int _g4_t_v66[3];
  typedef int _g4_t_v67[4];
  typedef uint32_t _g4_t_v68[4];
  typedef char _g4_t_v69;
  typedef char _g4_t_v70;
  typedef glitch::scene::CSkyCubeSceneNode::Self **_g4_t_v71;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v72;
  typedef glitch::video::ITexture::Self *_g4_t_v73;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v44)) > _g4_s1 ? (12u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v45)) > _g4_s2 ? (16u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v46)) > _g4_s3 ? (20u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v47)) > _g4_s4 ? (24u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v48)) > _g4_s5 ? (28u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v49)) > _g4_s6 ? (32u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v50)) > _g4_s7 ? (32u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v51)) > _g4_s8 ? (32u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v52)) > _g4_s9 ? (32u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v53)) > _g4_s10 ? (32u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v54)) > _g4_s11 ? (32u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v55)) > _g4_s12 ? (36u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v56)) > _g4_s13 ? (40u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v57)) > _g4_s14 ? (44u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v58)) > _g4_s15 ? (60u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v59)) > _g4_s16 ? (76u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v60)) > _g4_s17 ? (92u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v61)) > _g4_s18 ? (108u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v62)) > _g4_s19 ? (116u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v63)) > _g4_s20 ? (120u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v64)) > _g4_s21 ? (124u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v65)) > _g4_s22 ? (128u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v66)) > _g4_s23 ? (140u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v67)) > _g4_s24 ? (152u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (168u + sizeof(_g4_t_v68)) > _g4_s25 ? (168u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v69)) > _g4_s26 ? (184u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (185u + sizeof(_g4_t_v70)) > _g4_s27 ? (185u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (196u + sizeof(_g4_t_v71)) > _g4_s28 ? (196u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (200u + sizeof(_g4_t_v72)) > _g4_s29 ? (200u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (204u + sizeof(_g4_t_v73)) > _g4_s30 ? (204u + sizeof(_g4_t_v73)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 108u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 116u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 120u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 124u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 128u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 152u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 168u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 184u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 185u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 196u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 200u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 204u);

  v71 = &self;
  v4 = self;
  v5 = a2;
  v55 = a3;
  v6 = a4;
  v66[0] = 1065353216;
  *((uint32_t *)self + 75) = ((uint32_t)(uintptr_t)&off_208940C);
  *((uint32_t *)v4 + 76) = (uint32_t)(uintptr_t)(&off_208942C);
  *((uint32_t *)v4 + 77) = 0;
  v66[1] = 1065353216;
  v66[2] = 1065353216;
  memset(v67, 0, 12);
  v67[3] = 1065353216;
  memset(v65, 0, sizeof(v65));
  glitch::scene::ISceneNode::Construct(v4, (int *)&off_20895C4, v6, (float *)v65, v67, (float *)v66);
  *((uint32_t *)v4 + 71) = 0;
  *((uint32_t *)v4 + 72) = 0;
  *((uint32_t *)v4 + 73) = 0;
  *((uint16_t *)v4 + 148) = -1;
  *((uint32_t *)v4 + 68) = 0;
  *((uint32_t *)v4 + 69) = 0;
  *((uint32_t *)v4 + 70) = 0;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_20895F0);
  *((uint32_t *)v4 + 75) = (uint32_t)(uintptr_t)(&off_2089724);
  *((uint32_t *)v4 + 76) = ((uint32_t)(uintptr_t)&off_2089744);
  *((uint32_t *)v4 + 65) = 0;
  *((uint32_t *)v4 + 66) = 0;
  *((uint32_t *)v4 + 67) = 0;
  v49 = *((glitch::video::ITexture::Self **)v5 + 113);
  MaterialRenderer = glitch::video::CMaterialRendererManager::createMaterialRenderer((int)(uintptr_t)(v49), (int)(uintptr_t)(v5), 13, nullptr);
  v56 = *((uint32_t *)v49 + 5);
  v8 = (glitch::video::CMaterialRenderer::Self **)&glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer::Self>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties::Self,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid;
  if ( MaterialRenderer < (unsigned int)((*((uint32_t *)v49 + 6) - v56) >> 2) )
  {
    v9 = *(uint32_t *)(v56 + 4 * MaterialRenderer);
    if ( v9 != 0 )
      v8 = (glitch::video::CMaterialRenderer::Self **)(v9 + 24);
  }
  v10 = *v8;
  v11 = nullptr;
  v57[0] = *v8;
  if ( v57[0] != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v10, 1u);
    v11 = v57[0];
  }
  *((uint16_t *)v4 + 148) = glitch::video::CMaterialRenderer::getParameterID((int)(uintptr_t)(v11), 2, 0, 0);
  LOWORD(v56) = glitch::video::CMaterialRenderer::getParameterID((int)(uintptr_t)(v57[0]), 6, 0, 0);
  glitch::video::CMaterial::allocate(&v62, (volatile int32_t **)v57, nullptr, 0);
  v12 = nullptr;
  v64 = v62;
  if ( v62 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v62, 1u);
    v12 = v64;
  }
  v13 = *((glitch::video::CMaterial::Self **)v4 + 72);
  *((uint32_t *)v4 + 72) = (uint32_t)(uintptr_t)(v12);
  v64 = v13;
  sub_5ED4F0(&v64);
  sub_5ED4F0(&v62);
  if ( *v55 != nullptr )
  {
    v50 = *v55;
    glitch::video::ITexture::setWrap(*v55, 0, 2);
    glitch::video::ITexture::setWrap(v50, 1, 2);
    glitch::video::ITexture::setWrap(v50, 2, 2);
  }
  glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
    *((uint32_t **)v4 + 72),
    *((uint16_t *)v4 + 148),
    0,
    (int *)v55);
  if ( (uint16_t)v56 != 0xFFFF )
  {
    v14 = *((uint32_t **)v4 + 72);
    v63[0] = 0xFFu;
    v63[1] = 0xFFu;
    v63[2] = 0xFFu;
    v63[3] = 0xFFu;
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
      v14,
      v56,
      0,
      v63);
  }
  v15 = opNew(0x2Cu);
  *(uint32_t *)(v15 + 4) = 0;
  *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_2081E88);
  v51 = (glitch::video::ITexture::Self *)v15;
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v15 + 8), 1u);
  *((uint32_t *)v51 + 3) = 0;
  *((uint32_t *)v51 + 4) = 0;
  *((uint32_t *)v51 + 5) = 0;
  *((uint32_t *)v51 + 6) = 0;
  *((uint32_t *)v51 + 7) = 0;
  *((uint16_t *)v51 + 16) = 255;
  *((uint16_t *)v51 + 17) = 6;
  *((uint32_t *)v51 + 9) = 0;
  *((uint8_t *)v51 + 40) = 1;
  *((uint8_t *)v51 + 41) = 0;
  __sync_add_and_fetch((volatile int32_t *)v51 + 1, 1u);
  v16 = *((volatile int32_t **)v4 + 71);
  *((uint32_t *)v4 + 71) = (uint32_t)(uintptr_t)(v51);
  if ( v16 != nullptr )
    sub_5459C0(v16);
  v17 = *(uint32_t *)v5;
  memset(v68, 0, sizeof(v68));
  v69 = 1;
  v70 = 1;
  (*(void (**)(glitch::video::IBuffer::Self **, glitch::video::IVideoDriver::Self *, uint32_t *, int, int, int, int, int, int, uint32_t *, glitch::video::ITexture::Self **, int, glitch::video::CMaterialRenderer::Self *, glitch::video::CMaterialRenderer::Self *, glitch::video::CMaterialRenderer::Self *, glitch::video::CMaterialRenderer::Self *))(v17 + 88))(
    &v58,
    v5,
    v68,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v68,
    v55,
    v56,
    v57[0],
    v57[1],
    v57[2],
    v57[3]);
  v18 = *(uint32_t *)v5;
  v68[0] = 1;
  v73 = v52;
  v72 = v5;
  (*(void (**)(glitch::video::IBuffer::Self **))(v18 + 88))(&v59);
  v19 = *(uint32_t *)(*((uint32_t *)v4 + 71) + 8);
  v20 = v58;
  if ( v58 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v58 + 1, 1u);
    __sync_add_and_fetch((volatile int32_t *)v20 + 1, 1u);
  }
  v21 = *(volatile int32_t **)(v19 + 20);
  *(uint32_t *)(v19 + 20) = (uint32_t)(uintptr_t)(v20);
  if ( v21 != nullptr )
  {
    v53 = (glitch::video::ITexture::Self *)(v20);
    sub_5459C0(v21);
    v20 = (glitch::video::IBuffer::Self *)(v53);
  }
  *(uint32_t *)(v19 + 24) = 0;
  *(uint16_t *)(v19 + 30) = 6;
  *(uint16_t *)(v19 + 32) = 3;
  *(uint16_t *)(v19 + 34) = 12;
  v54 = (glitch::video::ITexture::Self *)(v20);
  glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v19, false);
  if ( v54 != nullptr )
    sub_5459C0((volatile int32_t *)v54);
  *(uint32_t *)(v19 + 8) = 8;
  v72 = nullptr;
  v22 = (void *)opNewArray(0x60u);
  glitch::video::IBuffer::reset(v58, 0x60u, v22, true);
  v23 = glitch::video::IBuffer::mapInternal(
          *(glitch::video::IBuffer::Self **)(v19 + 20),
          1u,
          0,
          *(uint32_t *)(*(uint32_t *)(v19 + 20) + 20),
          0);
  v24 = nullptr;
  if ( v23 != 0 )
    v24 = (uint32_t *)(v23 + *(uint32_t *)(v19 + 24));
  *v24 = -1054867456;
  v24[1] = -1054867456;
  v24[2] = -1054867456;
  v25 = (uint32_t *)((char *)v24 + *(uint16_t *)(v19 + 34));
  *v25 = -1054867456;
  v25[1] = -1054867456;
  v25[2] = 1092616192;
  v26 = (uint32_t *)((char *)v24 + 2 * *(uint16_t *)(v19 + 34));
  *v26 = -1054867456;
  v26[1] = 1092616192;
  v26[2] = -1054867456;
  v27 = (uint32_t *)((char *)v24 + 3 * *(uint16_t *)(v19 + 34));
  *v27 = -1054867456;
  v27[1] = 1092616192;
  v27[2] = 1092616192;
  v28 = &v24[*(uint16_t *)(v19 + 34)];
  *v28 = 1092616192;
  v28[1] = -1054867456;
  v28[2] = -1054867456;
  v29 = (uint32_t *)((char *)v24 + 5 * *(uint16_t *)(v19 + 34));
  *v29 = 1092616192;
  v29[1] = -1054867456;
  v29[2] = 1092616192;
  v30 = (uint32_t *)((char *)v24 + 6 * *(uint16_t *)(v19 + 34));
  *v30 = 1092616192;
  v30[1] = 1092616192;
  v30[2] = -1054867456;
  v31 = (uint32_t *)((char *)&v24[2 * *(uint16_t *)(v19 + 34)] - *(uint16_t *)(v19 + 34));
  *v31 = 1092616192;
  v31[1] = 1092616192;
  v31[2] = 1092616192;
  glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v19 + 20));
  glitch::video::IBuffer::bind(v58, 1u, 0);
  glitch::video::CVertexStreams::updateStates((glitch::video::CVertexStreams::Self *)v19, false);
  v61 = (glitch::video::CVertexStreams::Self *)v19;
  __sync_add_and_fetch((volatile int32_t *)v19, 1u);
  glitch::video::CMaterialVertexAttributeMap::allocate(
    (volatile int32_t **)&v60,
    v57,
    (const boost::intrusive_ptr<glitch::video::CVertexStreams::Self const> *)&v61);
  v32 = v60;
  if ( v60 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v60, 1u);
  v33 = *((glitch::video::CMaterialVertexAttributeMap::Self ***)v4 + 73);
  *((uint32_t *)v4 + 73) = (uint32_t)(uintptr_t)(v32);
  if ( v33 != nullptr && __sync_fetch_and_add((volatile int32_t *)v33, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v33);
    gll_operator_delete_arr((int)(uintptr_t)(v33));
  }
  v34 = (glitch::video::CMaterialVertexAttributeMap::Self **)v60;
  if ( v60 != nullptr && __sync_fetch_and_add((volatile int32_t *)v60, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v34);
    gll_operator_delete_arr((int)(uintptr_t)(v34));
  }
  v35 = v61;
  if ( v61 != nullptr && __sync_fetch_and_add((volatile int32_t *)v61, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v35);
    gll_operator_delete_arr((int)(uintptr_t)(v35));
  }
  *(uint8_t *)(*(uint32_t *)(*((uint32_t *)v4 + 73)
                       - 613566756
                       * ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v4 + 73) + 4) + 24) + 4)
                         - *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v4 + 73) + 4) + 28)) >> 3)
                       + 8)
           + 5) = 0;
  v72 = nullptr;
  v36 = (void *)opNewArray(0x48u);
  glitch::video::IBuffer::reset(v59, 0x48u, v36, true);
  v37 = v59;
  if ( v59 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v59 + 1, 1u);
  v38 = (uint16_t *)glitch::video::IBuffer::mapInternal(v37, 1u, 0, *((uint32_t *)v37 + 5), 0);
  *v38 = 3;
  v38[1] = 1;
  v38[2] = 2;
  v38[3] = 2;
  v38[4] = 1;
  v38[5] = 0;
  v38[6] = 2;
  v38[7] = 0;
  v38[8] = 6;
  v38[9] = 6;
  v38[10] = 0;
  v38[11] = 4;
  v38[12] = 6;
  v38[13] = 4;
  v38[14] = 7;
  v38[15] = 7;
  v38[16] = 4;
  v38[17] = 5;
  v38[18] = 7;
  v38[19] = 5;
  v38[20] = 3;
  v38[21] = 3;
  v38[22] = 5;
  v38[23] = 1;
  v38[24] = 1;
  v38[25] = 5;
  v38[26] = 0;
  v38[27] = 0;
  v38[28] = 5;
  v38[29] = 4;
  v38[30] = 3;
  v38[31] = 2;
  v38[32] = 7;
  v38[33] = 7;
  v38[34] = 2;
  v38[35] = 6;
  glitch::video::IBuffer::unmap(v37);
  glitch::video::IBuffer::bind(v59, 1u, 0);
  v39 = *((uint32_t *)v4 + 71);
  __sync_add_and_fetch((volatile int32_t *)v37 + 1, 1u);
  v40 = *(volatile int32_t **)(v39 + 12);
  *(uint32_t *)(v39 + 12) = (uint32_t)(uintptr_t)(v37);
  if ( v40 != nullptr )
    sub_5459C0(v40);
  *(uint16_t *)(v39 + 32) = 1;
  *(g4_int128_t *)(v39 + 16) = xmmword_1C7C590;
  *(uint16_t *)(v39 + 34) = 6;
  sub_5459C0((volatile int32_t *)v37);
  if ( v59 != nullptr )
    sub_5459C0((volatile int32_t *)v59);
  result = (glitch::scene::CSkyCubeSceneNode::Self *)(v58);
  if ( v58 != nullptr )
    result = (glitch::scene::CSkyCubeSceneNode::Self *)sub_5459C0((volatile int32_t *)v58);
  v42 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v57[0];
  if ( v57[0] != nullptr )
  {
    result = (glitch::scene::CSkyCubeSceneNode::Self *)__sync_fetch_and_add((volatile int32_t *)v57[0], 0xFFFFFFFF);
    if ( result == (glitch::scene::CSkyCubeSceneNode::Self *)((char *)&dword_0 + 1) )
    {
      glitch::video::CMaterialRenderer::Destroy(v42);
      return (glitch::scene::CSkyCubeSceneNode::Self *)gll_operator_delete_arr((int)(uintptr_t)(v42));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::CSkyCubeSceneNode::Construct  (binary VA: 0xf50f90)
// Original: glitch::scene::CSkyCubeSceneNode::CSkyCubeSceneNode
// ----------------------------------------------------------------------------
glitch::scene::CSkyCubeSceneNode::Self * glitch::scene::CSkyCubeSceneNode::Construct(glitch::scene::CSkyCubeSceneNode::Self *self, glitch::video::IVideoDriver::Self *a2, const boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, glitch::video::ITexture::Self **a4, int a5)
{
  glitch::scene::CSkyCubeSceneNode::Self *v5;
  const boost::intrusive_ptr<glitch::video::ITexture::Self> *v6;
  int v7;
  uint16_t MaterialRenderer;
  glitch::video::CMaterialRenderer::Self **v9;
  int v10;
  glitch::video::CMaterialRenderer::Self *v11;
  glitch::video::CMaterialRenderer::Self *v12;
  glitch::video::CMaterial::Self *v13;
  glitch::video::CMaterial::Self *v14;
  uint32_t *v15;
  int v16;
  volatile int32_t *v17;
  int v18;
  int v19;
  int v20;
  glitch::video::IBuffer::Self *v21;
  volatile int32_t *v22;
  void *v23;
  int v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  glitch::video::CMaterialVertexAttributeMap::Self *v33;
  glitch::video::CMaterialVertexAttributeMap::Self **v34;
  glitch::video::CMaterialVertexAttributeMap::Self **v35;
  glitch::video::CVertexStreams::Self *v36;
  void *v37;
  glitch::video::IBuffer::Self *v38;
  uint16_t *v39;
  int v40;
  volatile int32_t *v41;
  glitch::scene::CSkyCubeSceneNode::Self *result;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef glitch::video::ITexture::Self *_g4_t_v50;
  typedef glitch::video::ITexture::Self *_g4_t_v51;
  typedef glitch::video::ITexture::Self *_g4_t_v52;
  typedef glitch::video::ITexture::Self *_g4_t_v53;
  typedef glitch::video::ITexture::Self *_g4_t_v54;
  typedef glitch::video::ITexture::Self *_g4_t_v55;
  typedef glitch::video::ITexture::Self *_g4_t_v56;
  typedef glitch::video::ITexture::Self **_g4_t_v57;
  typedef int _g4_t_v58;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v59[4];
  typedef glitch::video::IBuffer::Self *_g4_t_v60;
  typedef glitch::video::IBuffer::Self *_g4_t_v61;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v62;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v63;
  typedef glitch::video::CMaterial::Self *_g4_t_v64;
  typedef uint8_t _g4_t_v65[4];
  typedef glitch::video::CMaterial::Self *_g4_t_v66;
  typedef int _g4_t_v67[3];
  typedef int _g4_t_v68[3];
  typedef int _g4_t_v69[4];
  typedef uint32_t _g4_t_v70[4];
  typedef char _g4_t_v71;
  typedef char _g4_t_v72;
  typedef glitch::scene::CSkyCubeSceneNode::Self **_g4_t_v73;
  typedef const boost::intrusive_ptr<glitch::video::ITexture::Self> *_g4_t_v74;
  typedef glitch::video::ITexture::Self *_g4_t_v75;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v44)) > _g4_s0 ? (8u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v45)) > _g4_s1 ? (12u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v46)) > _g4_s2 ? (16u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v47)) > _g4_s3 ? (20u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v48)) > _g4_s4 ? (24u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v49)) > _g4_s5 ? (28u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v50)) > _g4_s6 ? (32u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v51)) > _g4_s7 ? (32u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v52)) > _g4_s8 ? (32u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v53)) > _g4_s9 ? (32u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v54)) > _g4_s10 ? (32u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v55)) > _g4_s11 ? (32u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v56)) > _g4_s12 ? (32u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v57)) > _g4_s13 ? (36u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v58)) > _g4_s14 ? (40u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v59)) > _g4_s15 ? (44u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v60)) > _g4_s16 ? (60u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v61)) > _g4_s17 ? (76u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v62)) > _g4_s18 ? (92u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v63)) > _g4_s19 ? (108u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v64)) > _g4_s20 ? (116u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v65)) > _g4_s21 ? (120u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v66)) > _g4_s22 ? (124u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v67)) > _g4_s23 ? (128u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v68)) > _g4_s24 ? (140u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v69)) > _g4_s25 ? (152u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v70)) > _g4_s26 ? (168u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (184u + sizeof(_g4_t_v71)) > _g4_s27 ? (184u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (185u + sizeof(_g4_t_v72)) > _g4_s28 ? (185u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (196u + sizeof(_g4_t_v73)) > _g4_s29 ? (196u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v74)) > _g4_s30 ? (200u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v75)) > _g4_s31 ? (204u + sizeof(_g4_t_v75)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 108u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 116u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 120u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 124u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 128u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 140u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 152u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 168u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 184u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 185u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 196u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 200u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 204u);

  v73 = &self;
  v5 = self;
  v57 = a4;
  v6 = a3;
  v68[0] = 1065353216;
  v50 = (glitch::video::ITexture::Self *)(a2);
  v68[1] = 1065353216;
  v68[2] = 1065353216;
  memset(v69, 0, 12);
  v69[3] = 1065353216;
  memset(v67, 0, sizeof(v67));
  glitch::scene::ISceneNode::Construct(self, (int *)a2 + 1, a5, (float *)v67, v69, (float *)v68);
  v7 = *(uint32_t *)v50;
  *(uint32_t *)v5 = *(uint32_t *)v50;
  *(uint32_t *)((char *)v5 + *(uint32_t *)(v7 - 12)) = *((uint32_t *)v50 + 4);
  *(uint32_t *)((char *)v5 + *(uint32_t *)(*(uint32_t *)v5 - 16)) = *((uint32_t *)v50 + 5);
  *((uint32_t *)v5 + 71) = 0;
  *((uint32_t *)v5 + 72) = 0;
  *((uint32_t *)v5 + 73) = 0;
  *((uint16_t *)v5 + 148) = -1;
  *((uint32_t *)v5 + 68) = 0;
  *((uint32_t *)v5 + 69) = 0;
  *((uint32_t *)v5 + 70) = 0;
  *((uint32_t *)v5 + 65) = 0;
  *((uint32_t *)v5 + 66) = 0;
  *((uint32_t *)v5 + 67) = 0;
  v51 = *((glitch::video::ITexture::Self **)v6 + 113);
  MaterialRenderer = glitch::video::CMaterialRendererManager::createMaterialRenderer((int)(uintptr_t)(v51), (int)(uintptr_t)(v6), 13, nullptr);
  v58 = *((uint32_t *)v51 + 5);
  v9 = (glitch::video::CMaterialRenderer::Self **)&glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer::Self>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties::Self,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid;
  if ( MaterialRenderer < (unsigned int)((*((uint32_t *)v51 + 6) - v58) >> 2) )
  {
    v10 = *(uint32_t *)(v58 + 4 * MaterialRenderer);
    if ( v10 != 0 )
      v9 = (glitch::video::CMaterialRenderer::Self **)(v10 + 24);
  }
  v11 = *v9;
  v12 = nullptr;
  v59[0] = *v9;
  if ( v59[0] != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v11, 1u);
    v12 = v59[0];
  }
  *((uint16_t *)v5 + 148) = glitch::video::CMaterialRenderer::getParameterID((int)(uintptr_t)(v12), 2, 0, 0);
  LOWORD(v58) = glitch::video::CMaterialRenderer::getParameterID((int)(uintptr_t)(v59[0]), 6, 0, 0);
  glitch::video::CMaterial::allocate(&v64, (volatile int32_t **)v59, nullptr, 0);
  v13 = nullptr;
  v66 = v64;
  if ( v64 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v64, 1u);
    v13 = v66;
  }
  v14 = *((glitch::video::CMaterial::Self **)v5 + 72);
  *((uint32_t *)v5 + 72) = (uint32_t)(uintptr_t)(v13);
  v66 = v14;
  sub_5ED4F0(&v66);
  sub_5ED4F0(&v64);
  if ( *v57 != nullptr )
  {
    v52 = *v57;
    glitch::video::ITexture::setWrap(*v57, 0, 2);
    glitch::video::ITexture::setWrap(v52, 1, 2);
    glitch::video::ITexture::setWrap(v52, 2, 2);
  }
  glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
    *((uint32_t **)v5 + 72),
    *((uint16_t *)v5 + 148),
    0,
    (int *)v57);
  if ( (uint16_t)v58 != 0xFFFF )
  {
    v15 = *((uint32_t **)v5 + 72);
    v65[0] = 0xFFu;
    v65[1] = 0xFFu;
    v65[2] = 0xFFu;
    v65[3] = 0xFFu;
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(
      v15,
      v58,
      0,
      v65);
  }
  v16 = opNew(0x2Cu);
  *(uint32_t *)(v16 + 4) = 0;
  *(uint32_t *)v16 = ((uint32_t)(uintptr_t)&off_2081E88);
  v53 = (glitch::video::ITexture::Self *)v16;
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v16 + 8), 1u);
  *((uint32_t *)v53 + 3) = 0;
  *((uint32_t *)v53 + 4) = 0;
  *((uint32_t *)v53 + 5) = 0;
  *((uint32_t *)v53 + 6) = 0;
  *((uint32_t *)v53 + 7) = 0;
  *((uint16_t *)v53 + 16) = 255;
  *((uint16_t *)v53 + 17) = 6;
  *((uint32_t *)v53 + 9) = 0;
  *((uint8_t *)v53 + 40) = 1;
  *((uint8_t *)v53 + 41) = 0;
  __sync_add_and_fetch((volatile int32_t *)v53 + 1, 1u);
  v17 = *((volatile int32_t **)v5 + 71);
  *((uint32_t *)v5 + 71) = (uint32_t)(uintptr_t)(v53);
  if ( v17 != nullptr )
    sub_5459C0(v17);
  v18 = *(uint32_t *)v6;
  memset(v70, 0, sizeof(v70));
  v71 = 1;
  v72 = 1;
  (*(void (**)(glitch::video::IBuffer::Self **, const boost::intrusive_ptr<glitch::video::ITexture::Self> *, uint32_t *, int, int, int, int, int, int, uint32_t *, glitch::video::ITexture::Self **, int, glitch::video::CMaterialRenderer::Self *, glitch::video::CMaterialRenderer::Self *, glitch::video::CMaterialRenderer::Self *, glitch::video::CMaterialRenderer::Self *))(v18 + 88))(
    &v60,
    v6,
    v70,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v70,
    v57,
    v58,
    v59[0],
    v59[1],
    v59[2],
    v59[3]);
  v19 = *(uint32_t *)v6;
  v70[0] = 1;
  v75 = v54;
  v74 = v6;
  (*(void (**)(glitch::video::IBuffer::Self **))(v19 + 88))(&v61);
  v20 = *(uint32_t *)(*((uint32_t *)v5 + 71) + 8);
  v21 = v60;
  if ( v60 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v60 + 1, 1u);
    __sync_add_and_fetch((volatile int32_t *)v21 + 1, 1u);
  }
  v22 = *(volatile int32_t **)(v20 + 20);
  *(uint32_t *)(v20 + 20) = (uint32_t)(uintptr_t)(v21);
  if ( v22 != nullptr )
  {
    v55 = (glitch::video::ITexture::Self *)(v21);
    sub_5459C0(v22);
    v21 = (glitch::video::IBuffer::Self *)(v55);
  }
  *(uint32_t *)(v20 + 24) = 0;
  *(uint16_t *)(v20 + 30) = 6;
  *(uint16_t *)(v20 + 32) = 3;
  *(uint16_t *)(v20 + 34) = 12;
  v56 = (glitch::video::ITexture::Self *)(v21);
  glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v20, false);
  if ( v56 != nullptr )
    sub_5459C0((volatile int32_t *)v56);
  *(uint32_t *)(v20 + 8) = 8;
  v74 = nullptr;
  v23 = (void *)opNewArray(0x60u);
  glitch::video::IBuffer::reset(v60, 0x60u, v23, true);
  v24 = glitch::video::IBuffer::mapInternal(
          *(glitch::video::IBuffer::Self **)(v20 + 20),
          1u,
          0,
          *(uint32_t *)(*(uint32_t *)(v20 + 20) + 20),
          0);
  v25 = nullptr;
  if ( v24 != 0 )
    v25 = (uint32_t *)(v24 + *(uint32_t *)(v20 + 24));
  *v25 = -1054867456;
  v25[1] = -1054867456;
  v25[2] = -1054867456;
  v26 = (uint32_t *)((char *)v25 + *(uint16_t *)(v20 + 34));
  *v26 = -1054867456;
  v26[1] = -1054867456;
  v26[2] = 1092616192;
  v27 = (uint32_t *)((char *)v25 + 2 * *(uint16_t *)(v20 + 34));
  *v27 = -1054867456;
  v27[1] = 1092616192;
  v27[2] = -1054867456;
  v28 = (uint32_t *)((char *)v25 + 3 * *(uint16_t *)(v20 + 34));
  *v28 = -1054867456;
  v28[1] = 1092616192;
  v28[2] = 1092616192;
  v29 = &v25[*(uint16_t *)(v20 + 34)];
  *v29 = 1092616192;
  v29[1] = -1054867456;
  v29[2] = -1054867456;
  v30 = (uint32_t *)((char *)v25 + 5 * *(uint16_t *)(v20 + 34));
  *v30 = 1092616192;
  v30[1] = -1054867456;
  v30[2] = 1092616192;
  v31 = (uint32_t *)((char *)v25 + 6 * *(uint16_t *)(v20 + 34));
  *v31 = 1092616192;
  v31[1] = 1092616192;
  v31[2] = -1054867456;
  v32 = (uint32_t *)((char *)&v25[2 * *(uint16_t *)(v20 + 34)] - *(uint16_t *)(v20 + 34));
  *v32 = 1092616192;
  v32[1] = 1092616192;
  v32[2] = 1092616192;
  glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v20 + 20));
  glitch::video::IBuffer::bind(v60, 1u, 0);
  glitch::video::CVertexStreams::updateStates((glitch::video::CVertexStreams::Self *)v20, false);
  v63 = (glitch::video::CVertexStreams::Self *)v20;
  __sync_add_and_fetch((volatile int32_t *)v20, 1u);
  glitch::video::CMaterialVertexAttributeMap::allocate(
    (volatile int32_t **)&v62,
    v59,
    (const boost::intrusive_ptr<glitch::video::CVertexStreams::Self const> *)&v63);
  v33 = v62;
  if ( v62 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v62, 1u);
  v34 = *((glitch::video::CMaterialVertexAttributeMap::Self ***)v5 + 73);
  *((uint32_t *)v5 + 73) = (uint32_t)(uintptr_t)(v33);
  if ( v34 != nullptr && __sync_fetch_and_add((volatile int32_t *)v34, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v34);
    gll_operator_delete_arr((int)(uintptr_t)(v34));
  }
  v35 = (glitch::video::CMaterialVertexAttributeMap::Self **)v62;
  if ( v62 != nullptr && __sync_fetch_and_add((volatile int32_t *)v62, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v35);
    gll_operator_delete_arr((int)(uintptr_t)(v35));
  }
  v36 = v63;
  if ( v63 != nullptr && __sync_fetch_and_add((volatile int32_t *)v63, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v36);
    gll_operator_delete_arr((int)(uintptr_t)(v36));
  }
  *(uint8_t *)(*(uint32_t *)(*((uint32_t *)v5 + 73)
                       - 613566756
                       * ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 73) + 4) + 24) + 4)
                         - *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 73) + 4) + 28)) >> 3)
                       + 8)
           + 5) = 0;
  v74 = nullptr;
  v37 = (void *)opNewArray(0x48u);
  glitch::video::IBuffer::reset(v61, 0x48u, v37, true);
  v38 = v61;
  if ( v61 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v61 + 1, 1u);
  v39 = (uint16_t *)glitch::video::IBuffer::mapInternal(v38, 1u, 0, *((uint32_t *)v38 + 5), 0);
  *v39 = 3;
  v39[1] = 1;
  v39[2] = 2;
  v39[3] = 2;
  v39[4] = 1;
  v39[5] = 0;
  v39[6] = 2;
  v39[7] = 0;
  v39[8] = 6;
  v39[9] = 6;
  v39[10] = 0;
  v39[11] = 4;
  v39[12] = 6;
  v39[13] = 4;
  v39[14] = 7;
  v39[15] = 7;
  v39[16] = 4;
  v39[17] = 5;
  v39[18] = 7;
  v39[19] = 5;
  v39[20] = 3;
  v39[21] = 3;
  v39[22] = 5;
  v39[23] = 1;
  v39[24] = 1;
  v39[25] = 5;
  v39[26] = 0;
  v39[27] = 0;
  v39[28] = 5;
  v39[29] = 4;
  v39[30] = 3;
  v39[31] = 2;
  v39[32] = 7;
  v39[33] = 7;
  v39[34] = 2;
  v39[35] = 6;
  glitch::video::IBuffer::unmap(v38);
  glitch::video::IBuffer::bind(v61, 1u, 0);
  v40 = *((uint32_t *)v5 + 71);
  __sync_add_and_fetch((volatile int32_t *)v38 + 1, 1u);
  v41 = *(volatile int32_t **)(v40 + 12);
  *(uint32_t *)(v40 + 12) = (uint32_t)(uintptr_t)(v38);
  if ( v41 != nullptr )
    sub_5459C0(v41);
  *(uint16_t *)(v40 + 32) = 1;
  *(g4_int128_t *)(v40 + 16) = xmmword_1C7C590;
  *(uint16_t *)(v40 + 34) = 6;
  sub_5459C0((volatile int32_t *)v38);
  if ( v61 != nullptr )
    sub_5459C0((volatile int32_t *)v61);
  result = (glitch::scene::CSkyCubeSceneNode::Self *)(v60);
  if ( v60 != nullptr )
    result = (glitch::scene::CSkyCubeSceneNode::Self *)sub_5459C0((volatile int32_t *)v60);
  v43 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v59[0];
  if ( v59[0] != nullptr )
  {
    result = (glitch::scene::CSkyCubeSceneNode::Self *)__sync_fetch_and_add((volatile int32_t *)v59[0], 0xFFFFFFFF);
    if ( result == (glitch::scene::CSkyCubeSceneNode::Self *)((char *)&dword_0 + 1) )
    {
      glitch::video::CMaterialRenderer::Destroy(v43);
      return (glitch::scene::CSkyCubeSceneNode::Self *)gll_operator_delete_arr((int)(uintptr_t)(v43));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::CCameraTargetTrackerSceneNode::onRegisterSceneNodeInternal  (binary VA: 0xf518d0)
// Original: glitch::scene::CCameraTargetTrackerSceneNode::onRegisterSceneNodeInternal
// ----------------------------------------------------------------------------
int glitch::scene::CCameraTargetTrackerSceneNode::onRegisterSceneNodeInternal(glitch::scene::CCameraTargetTrackerSceneNode::Self *self, void *a2)
{
  int *v2;
  int v3;
  float *v4;
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  int v8;
  float *v9;
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  float v18; // xmm0_4
  __m128 v19;
  float *v21;
  float *v22;
  float *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
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
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  double v60;
  double v61;
  double v62;
  double v63;
  double v64;
  double v65;
  double v66;
  double v67;
  double v68;
  __m128 v69;
  __m128 v70;

  v2 = *((int **)self + 209);
  if ( v2 != nullptr )
  {
    v3 = *v2;
    v24 = *((uint32_t *)self + 209);
    if ( (*((uint8_t *)v2 + 245) & 8) != 0 )
    {
      v22 = (float *)(*(int (**)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(v3 + 64))(
                       v24,
                       v25,
                       v26,
                       v27,
                       v28,
                       v29,
                       v30,
                       v31,
                       v32,
                       v33,
                       v34,
                       v35,
                       v36,
                       v37,
                       v38,
                       v39,
                       v40,
                       v41,
                       v42,
                       v43,
                       v44,
                       v45,
                       v46,
                       v47,
                       v48,
                       v49,
                       v50,
                       v51,
                       v52,
                       v53,
                       v54,
                       v55,
                       v56,
                       v57,
                       v58,
                       v59);
      v7 = (float)(v22[3] + *v22) * 0.5;
      v6 = (float)(v22[4] + v22[1]) * 0.5;
      v5 = (float)(v22[5] + v22[2]) * 0.5;
    }
    else
    {
      v4 = (float *)(*(int (**)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(v3 + 72))(
                      v24,
                      v25,
                      v26,
                      v27,
                      v28,
                      v29,
                      v30,
                      v31,
                      v32,
                      v33,
                      v34,
                      v35,
                      v36,
                      v37,
                      v38,
                      v39,
                      v40,
                      v41,
                      v42,
                      v43,
                      v44,
                      v45,
                      v46,
                      v47,
                      v48,
                      v49,
                      v50,
                      v51,
                      v52,
                      v53,
                      v54,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59);
      v5 = v4[14];
      v6 = v4[13];
      v7 = v4[12];
    }
    *((float *)self + 67) = v7;
    *((float *)self + 68) = v6;
    *((float *)self + 69) = v5;
    glitch::scene::ISceneNode::updateAbsolutePosition(self, false);
    v8 = *(uint32_t *)self;
    if ( (*((uint8_t *)self + 245) & 8) != 0 )
    {
      v21 = (float *)(*(int (**)(glitch::scene::CCameraTargetTrackerSceneNode::Self *))(v8 + 64))(self);
      v12 = (float)(v21[3] + *v21) * 0.5;
      v11 = (float)(v21[4] + v21[1]) * 0.5;
      v10 = (float)(v21[5] + v21[2]) * 0.5;
    }
    else
    {
      v9 = (float *)(*(int (**)(glitch::scene::CCameraTargetTrackerSceneNode::Self *))(v8 + 72))(self);
      v10 = v9[14];
      v11 = v9[13];
      v12 = v9[12];
    }
    v62 = (float)(*((float *)self + 67) - v12) * 0.5;
    v61 = sin(v62);
    v68 = cos(v62);
    v63 = (float)(*((float *)self + 68) - v11) * 0.5;
    v67 = sin(v63);
    v65 = cos(v63);
    v64 = (float)(*((float *)self + 69) - v10) * 0.5;
    v66 = sin(v64);
    v60 = cos(v64);
g4_m128_raw(v15) = *(uint64_t *)&v65;
g4_m128_raw(v14) = *(uint64_t *)&v61;
g4_m128_lane<uint64_t>(v13, 1) = 0;
    *(double *)g4_m128_ptr<uint64_t>(v13) = v66 * v67 * v61 + v68 * (v60 * v65);
g4_m128_raw(v16) = *(uint64_t *)&v68;
g4_m128_lane<float>(v13, 0) = *(double *)g4_m128_ptr<uint64_t>(v13);
    *(double *)g4_m128_ptr<uint64_t>(v14) = v61 * (v60 * v65) - v66 * v67 * v68;
    *(double *)g4_m128_ptr<uint64_t>(v15) = v65 * v66 * v61 + v60 * v67 * v68;
    *(double *)g4_m128_ptr<uint64_t>(v16) = v68 * (v65 * v66) - v60 * v67 * v61;
g4_m128_lane<float>(v14, 0) = *(double *)g4_m128_ptr<uint64_t>(v14);
g4_m128_lane<float>(v15, 0) = *(double *)g4_m128_ptr<uint64_t>(v15);
g4_m128_lane<float>(v16, 0) = *(double *)g4_m128_ptr<uint64_t>(v16);
    v17 = v15;
g4_m128_lane<uint64_t>(v69, 0) = __PAIR64__(g4_m128_lane<uint32_t>(v15, 0),g4_m128_lane<uint32_t>(v14, 0));
g4_m128_lane<uint64_t>(v69, 1) = __PAIR64__(g4_m128_lane<uint32_t>(v13, 0),g4_m128_lane<uint32_t>(v16, 0));
g4_m128_lane<float>(v17, 0) = (float)((float)((float)(g4_m128_lane<float>(v15, 0) *g4_m128_lane<float>(v15, 0))
                                    + (float)(g4_m128_lane<float>(v14, 0) *g4_m128_lane<float>(v14, 0)))
                            + (float)(g4_m128_lane<float>(v16, 0) *g4_m128_lane<float>(v16, 0)))
                    + (float)(g4_m128_lane<float>(v13, 0) *g4_m128_lane<float>(v13, 0));
    if (g4_m128_lane<float>(v17, 0) != 0.0 )
    {
      v18 = fsqrt(g4_m128_lane<float>(v17, 0));
g4_m128_lane<float>(v17, 0) = (float)((float)((float)(g4_m128_lane<float>(v17, 0) * (float)(1.0 / v18)) * (float)(1.0 / v18)) + -3.0)
                      * (float)((float)(1.0 / v18) * -0.5);
      v70 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v69);
g4_m128_raw(v14) =g4_m128_lane<uint32_t>(v70, 0);
g4_m128_raw(v15) =g4_m128_lane<uint32_t>(v70, 1);
g4_m128_raw(v16) =g4_m128_lane<uint32_t>(v70, 2);
g4_m128_raw(v13) =g4_m128_lane<uint32_t>(v70, 3);
    }
g4_m128_lane<uint64_t>(v19, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v14, v15), 0);
g4_m128_lane<uint64_t>(v19, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v16, v13), 0);
    _mm_storel_ps((double *)((char *)self + 156), v19);
    _mm_storeh_ps((double *)((char *)self + 164), v19);
  }
  else
  {
    v23 = (float *)G4_VCALL<int>(self, 72, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59);
    *((float *)self + 67) = (float)(v23[8] * -100.0) + v23[12];
    *((float *)self + 68) = (float)(v23[9] * -100.0) + v23[13];
    *((float *)self + 69) = (float)(-100.0 * v23[10]) + v23[14];
  }
  return glitch::scene::CCameraSceneNode::onRegisterSceneNodeInternal(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::Construct  (binary VA: 0xf51ca0)
// Original: glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::SGeoMipMapTrianglePatch
// ----------------------------------------------------------------------------
int glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::Construct(glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::Self *self, const glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::Self *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int result;
  uint32_t *v12;
  int v13;
  int v14;

  v2 = 0;
  v13 = 0;
  v3 = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( 954437177 * v3 != 0 )
  {
    v2 = 4 * v3;
    v13 = sub_4EBDC0(4 * v3);
  }
  v4 = (uint32_t *)v13;
  *((uint32_t *)self + 1) = v13;
  *(uint32_t *)self = v13;
  *((uint32_t *)self + 2) = v13 + v2;
  v5 = *(uint32_t *)a2;
  v14 = *(uint32_t *)a2;
  v12 = *((uint32_t **)a2 + 1);
  if ( v12 != *(uint32_t **)a2 )
  {
    v6 = *(uint32_t **)a2;
    v7 = (uint32_t *)(v5 + 16);
    v8 = (uint32_t *)(v13 + 16);
    v9 = (uint32_t *)(v5 + 24);
    v10 = (uint32_t *)(v13 + 24);
    do
    {
      if ( v4 != nullptr )
      {
        *v4 = *v6;
        v4[1] = v6[1];
        v4[2] = v6[2];
        *(v8 - 1) = *(v7 - 1);
        *v8 = *v7;
        v8[1] = v7[1];
        *v10 = *v9;
        v10[1] = v9[1];
        v10[2] = v9[2];
      }
      v6 += 9;
      v4 += 9;
      v7 += 9;
      v8 += 9;
      v9 += 9;
      v10 += 9;
    }
    while ( v12 != v6 );
    v4 = (uint32_t *)(v13 + 4 * (((unsigned int)(uintptr_t)(v12) - v14 - 36) >> 2) + 36);
  }
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  result = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 9) = result;
  return result;
}


