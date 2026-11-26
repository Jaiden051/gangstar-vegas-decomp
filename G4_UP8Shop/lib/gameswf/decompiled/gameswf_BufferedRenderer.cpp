#include "Core/Utils/DecompTypes.h"
#include "gameswf_BufferedRenderer.h"

// ----------------------------------------------------------------------------
// Function: gameswf::BufferedRenderer::Construct  (binary VA: 0x10c8720)
// Original: gameswf::BufferedRenderer::BufferedRenderer
// ----------------------------------------------------------------------------
void gameswf::BufferedRenderer::Construct(gameswf::BufferedRenderer::Self *self, glitch::video::IVideoDriver::Self *a2)
{
  gameswf::BufferedRenderer::Self *v2;
  char *v3;
  uint16_t *v4;
  char *v5;
  uint16_t *v6;
  gameswf::BufferedRenderer::Self *v7;
  unsigned int v8;
  uint16_t *v9;
  uint16_t *v10;
  uint16_t *v11;
  unsigned int v12;
  uint16_t *v13;
  int v14;
  int v15;
  volatile int32_t *v16;
  int v17;
  int v18;
  volatile int32_t *v19;
  int v20;
  int v21;
  volatile int32_t *v22;
  int v23;
  volatile int32_t *v24;
  volatile int32_t *v25;
  int v26;
  volatile int32_t *v27;
  volatile int32_t *v28;
  int v29;
  volatile int32_t *v30;
  volatile int32_t *v31;
  int v32;
  volatile int32_t *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  bool v41; // cc
  void *v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef volatile int32_t *_g4_t_v46;
  typedef volatile int32_t *_g4_t_v47;
  typedef volatile int32_t *_g4_t_v48;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v49;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v50;
  typedef void *_g4_t_v51;
  typedef int _g4_t_v52[4];
  typedef uint32_t _g4_t_v53[6];
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef uint32_t _g4_t_v56[4];
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef gameswf::BufferedRenderer::Self **_g4_t_v59;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v43)) > _g4_s0 ? (0u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v44)) > _g4_s1 ? (0u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v45)) > _g4_s2 ? (0u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v46)) > _g4_s3 ? (4u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v47)) > _g4_s4 ? (4u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v48)) > _g4_s5 ? (4u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v49)) > _g4_s6 ? (8u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v50)) > _g4_s7 ? (12u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v51)) > _g4_s8 ? (12u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v52)) > _g4_s9 ? (16u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v53)) > _g4_s10 ? (32u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v54)) > _g4_s11 ? (56u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (57u + sizeof(_g4_t_v55)) > _g4_s12 ? (57u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v56)) > _g4_s13 ? (60u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v57)) > _g4_s14 ? (76u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (77u + sizeof(_g4_t_v58)) > _g4_s15 ? (77u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v59)) > _g4_s16 ? (88u + sizeof(_g4_t_v59)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 57u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 76u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 77u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);

  v59 = &self;
  v2 = self;
  v50 = a2;
  *(uint32_t *)self = 0;
  *((uint32_t *)v2 + 1) = 0;
  *((uint32_t *)v2 + 2) = 0;
  *((uint32_t *)v2 + 3) = 0;
  *((uint32_t *)v2 + 4) = 0;
  *((uint32_t *)v2 + 5) = 0;
  *((uint32_t *)v2 + 6) = 0;
  *((uint32_t *)v2 + 7) = 0;
  *((uint32_t *)v2 + 8) = 0;
  *((uint32_t *)v2 + 9) = 0;
  *((uint32_t *)v2 + 10) = 0;
  v3 = (char *)v2 + 80;
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)v2 + 11, 1u, 0x20000u);
  *((uint32_t *)v2 + 12) = 0;
  *((uint32_t *)v2 + 18) = (uint32_t)(uintptr_t)(v50);
  *((uint32_t *)v2 + 13) = 0;
  *((uint32_t *)v2 + 14) = 0;
  *((uint32_t *)v2 + 15) = 0;
  *((uint32_t *)v2 + 16) = 0;
  *((uint32_t *)v2 + 17) = 0;
  *((uint32_t *)v2 + 19) = 0;
  v4 = (uint16_t *)((char *)v2 + 96);
  v5 = (char *)v2 + 84;
  v49 = v2;
  v6 = (uint16_t *)((char *)v2 + 1256);
  do
  {
    *((uint32_t *)v4 - 4) = 0;
    *(uint32_t *)&v5[(char *)v4 - v3 - 16] = 0;
    *(v4 - 4) = -1;
    *(v4 - 3) = -1;
    *(v4 - 2) = -1;
    *(v4 - 1) = -1;
    *v4 = -1;
    v4[1] = -1;
    v4[2] = -1;
    v4[3] = -1;
    v4[4] = -1;
    v4[5] = -1;
    v4[6] = -1;
    v4[7] = -1;
    v4[8] = -1;
    v4[9] = -1;
    v4 += 20;
  }
  while ( v4 != v6 );
  v7 = v49;
  v8 = 64;
  v9 = (uint16_t *)((char *)v49 + 1280);
  *((uint32_t *)v49 + 310) = 0;
  *((uint32_t *)v49 + 311) = 0;
  *((uint32_t *)v49 + 312) = 0;
  *((uint32_t *)v49 + 313) = 0;
  *((uint32_t *)v49 + 314) = 0;
  *((uint32_t *)v49 + 315) = 0;
  *((uint32_t *)v49 + 316) = 0;
  *((uint32_t *)v49 + 317) = 0;
  *((uint32_t *)v49 + 318) = 0;
  *((uint32_t *)v49 + 319) = 1065353216;
  if ( (((unsigned int)(uintptr_t)(v49) + 1280) & 1) != 0 )
  {
    *((uint8_t *)v49 + 1280) = 0;
    v9 = (uint16_t *)((char *)v49 + 1281);
    LOBYTE(v8) = 63;
  }
  if ( ((uint8_t)(uintptr_t)v9 & 2) != 0 )
  {
    *v9 = 0;
    v8 -= 2;
    ++v9;
  }
  memset(v9, 0, 4 * (v8 >> 2));
  v10 = &v9[2 * (v8 >> 2)];
  if ( (v8 & 2) != 0 )
    *v10++ = 0;
  if ( (v8 & 1) != 0 )
    *(uint8_t *)v10 = 0;
  v11 = (uint16_t *)((char *)v49 + 1360);
  *((uint32_t *)v49 + 320) = 1065353216;
  *((uint32_t *)v49 + 325) = 1065353216;
  *((uint32_t *)v49 + 330) = 1065353216;
  *((uint32_t *)v49 + 335) = 1065353216;
  *((uint32_t *)v49 + 336) = 0;
  *((uint32_t *)v49 + 337) = 0;
  *((uint32_t *)v49 + 338) = 0;
  *((uint32_t *)v49 + 339) = 0;
  v12 = 64;
  if ( (((unsigned int)(uintptr_t)(v49) + 1360) & 1) != 0 )
  {
    v11 = (uint16_t *)((char *)v49 + 1361);
    *((uint8_t *)v49 + 1360) = 0;
    LOBYTE(v12) = 63;
    if ( (((unsigned int)(uintptr_t)(v49) + 1361) & 2) == 0 )
      goto LABEL_13;
  }
  else if ( ((uint8_t)(uintptr_t)v11 & 2) == 0 )
  {
    goto LABEL_13;
  }
  *v11 = 0;
  v12 -= 2;
  ++v11;
LABEL_13:
  memset(v11, 0, 4 * (v12 >> 2));
  v13 = &v11[2 * (v12 >> 2)];
  if ( (v12 & 2) != 0 )
    *v13++ = 0;
  if ( (v12 & 1) != 0 )
    *(uint8_t *)v13 = 0;
  *((uint32_t *)v49 + 340) = 1065353216;
  *((uint32_t *)v49 + 345) = 1065353216;
  *((uint32_t *)v49 + 350) = 1065353216;
  *((uint32_t *)v49 + 355) = 1065353216;
  *((uint8_t *)v49 + 1424) = 0;
  *((uint32_t *)v49 + 357) = 0;
  *((uint32_t *)v49 + 358) = 0;
  *((uint32_t *)v49 + 359) = 0;
  *((uint32_t *)v49 + 360) = 1065353216;
  *((uint32_t *)v49 + 361) = 0;
  *((uint32_t *)v49 + 362) = 0;
  *((uint32_t *)v49 + 363) = 0;
  *((uint32_t *)v49 + 364) = 0;
  *((uint32_t *)v49 + 365) = 0;
  *((uint32_t *)v49 + 366) = 0;
  *((uint32_t *)v49 + 367) = 0;
  *((uint32_t *)v49 + 368) = 0;
  *((uint32_t *)v49 + 369) = 0;
  if ( v50 != nullptr )
  {
    v53[2] = 0;
    v53[3] = 4;
    v53[4] = 0;
    v53[5] = 0;
    v54 = 1;
    v55 = 1;
    v14 = *(uint32_t *)v50;
    v56[0] = 1;
    v56[1] = 4;
    v56[2] = 0;
    v56[3] = 0;
    v57 = 1;
    v58 = 1;
    (*(void (**)(int *, glitch::video::IVideoDriver::Self *))(v14 + 88))(v52, v50);
    v15 = v52[0];
    if ( v52[0] != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v52[0] + 4), 1u);
    v16 = *((volatile int32_t **)v49 + 5);
    *((uint32_t *)v49 + 5) = v15;
    if ( v16 != nullptr && __sync_fetch_and_add(v16 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v16, 8);
      G4_VCALL<void>(v16, 4);
    }
    v17 = v52[0];
    if ( v52[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v52[0] + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v17, 8);
      G4_VCALL<void>(v17, 4);
    }
    (*(void (**)(uint32_t *, glitch::video::IVideoDriver::Self *, uint32_t *))(*(uint32_t *)v50 + 88))(v53, v50, v56);
    v18 = v53[0];
    if ( v53[0] != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v53[0] + 4), 1u);
    v19 = *((volatile int32_t **)v49 + 7);
    *((uint32_t *)v49 + 7) = v18;
    if ( v19 != nullptr && __sync_fetch_and_add(v19 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v19, 8);
      G4_VCALL<void>(v19, 4);
    }
    v20 = v53[0];
    if ( v53[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v53[0] + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v20, 8);
      G4_VCALL<void>(v20, 4);
    }
    v21 = *((uint32_t *)v49 + 5);
    if ( v21 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v21 + 4), 1u);
    v22 = *((volatile int32_t **)v49 + 9);
    *((uint32_t *)v49 + 9) = v21;
    if ( v22 != nullptr && __sync_fetch_and_add(v22 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v22, 8);
      G4_VCALL<void>(v22, 4);
    }
    v23 = *((uint32_t *)v49 + 7);
    if ( v23 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v23 + 4), 1u);
    v24 = *((volatile int32_t **)v49 + 10);
    *((uint32_t *)v49 + 10) = v23;
    if ( v24 != nullptr && __sync_fetch_and_add(v24 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v24, 8);
      G4_VCALL<void>(v24, 4);
    }
    v25 = *((volatile int32_t **)v49 + 9);
    if ( v25 != nullptr )
    {
      __sync_add_and_fetch(v25 + 1, 1u);
      v26 = *((uint32_t *)v49 + 11);
      __sync_add_and_fetch(v25 + 1, 1u);
    }
    else
    {
      v26 = *((uint32_t *)v49 + 11);
    }
    v27 = *(volatile int32_t **)(v26 + 20);
    *(uint32_t *)(v26 + 20) = (uint32_t)(uintptr_t)(v25);
    if ( v27 != nullptr && __sync_fetch_and_add(v27 + 1, 0xFFFFFFFF) == 1 )
    {
      v45 = v26;
      v48 = v27;
      G4_VCALL<void>(v27, 8);
      G4_VCALL<void>(v48, 4);
      v26 = v45;
    }
    *(uint32_t *)(v26 + 24) = 12;
    *(uint16_t *)(v26 + 30) = 6;
    *(uint16_t *)(v26 + 32) = 3;
    *(uint16_t *)(v26 + 34) = 24;
    glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v26, true);
    if ( v25 != nullptr && __sync_fetch_and_add(v25 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v25, 8);
      G4_VCALL<void>(v25, 4);
    }
    v28 = *((volatile int32_t **)v49 + 9);
    if ( v28 != nullptr )
    {
      __sync_add_and_fetch(v28 + 1, 1u);
      v29 = *((uint32_t *)v49 + 11);
      __sync_add_and_fetch(v28 + 1, 1u);
    }
    else
    {
      v29 = *((uint32_t *)v49 + 11);
    }
    v30 = *(volatile int32_t **)(v29 + 36);
    *(uint32_t *)(v29 + 36) = (uint32_t)(uintptr_t)(v28);
    if ( v30 != nullptr && __sync_fetch_and_add(v30 + 1, 0xFFFFFFFF) == 1 )
    {
      v44 = v29;
      v47 = v30;
      G4_VCALL<void>(v30, 8);
      G4_VCALL<void>(v47, 4);
      v29 = v44;
    }
    *(uint32_t *)(v29 + 40) = 0;
    *(uint16_t *)(v29 + 46) = 6;
    *(uint16_t *)(v29 + 48) = 2;
    *(uint16_t *)(v29 + 50) = 24;
    glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v29, true);
    if ( v28 != nullptr && __sync_fetch_and_add(v28 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v28, 8);
      G4_VCALL<void>(v28, 4);
    }
    v31 = *((volatile int32_t **)v49 + 9);
    if ( v31 != nullptr )
    {
      __sync_add_and_fetch(v31 + 1, 1u);
      v32 = *((uint32_t *)v49 + 11);
      __sync_add_and_fetch(v31 + 1, 1u);
    }
    else
    {
      v32 = *((uint32_t *)v49 + 11);
    }
    v33 = *(volatile int32_t **)(v32 + 52);
    *(uint32_t *)(v32 + 52) = (uint32_t)(uintptr_t)(v31);
    if ( v33 != nullptr && __sync_fetch_and_add(v33 + 1, 0xFFFFFFFF) == 1 )
    {
      v43 = v32;
      v46 = v33;
      G4_VCALL<void>(v33, 8);
      G4_VCALL<void>(v46, 4);
      v32 = v43;
    }
    *(uint32_t *)(v32 + 56) = 8;
    *(uint16_t *)(v32 + 62) = 1;
    *(uint16_t *)(v32 + 64) = 4;
    *(uint16_t *)(v32 + 66) = 24;
    glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v32, false);
    if ( v31 != nullptr && __sync_fetch_and_add(v31 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v31, 8);
      G4_VCALL<void>(v31, 4);
      if ( *((int *)v49 + 3) > 2047 )
      {
LABEL_68:
        if ( *((int *)v49 + 4) > 2047 )
          return;
LABEL_74:
        v42 = (void *)opNewArray(0x1000u);
        *((uint32_t *)v7 + 17) = (uint32_t)(uintptr_t)(v42);
        glitch::video::IBuffer::reset(*((glitch::video::IBuffer::Self **)v7 + 10), 0x1000u, v42, true);
        *((uint32_t *)v7 + 4) = 2048;
        return;
      }
    }
    else if ( *((int *)v49 + 3) > 2047 )
    {
      goto LABEL_68;
    }
    v34 = opNewArray(0xC000u);
    v35 = v34 + 12;
    v36 = v34 + 49164;
    v51 = (void *)v34;
    v37 = v34 + 8;
    v38 = v34 + 12;
    v39 = v36;
    do
    {
      v40 = v38 - (uint32_t)(uintptr_t)(v51);
      *(uint32_t *)(v38 - 12) = 0;
      *(uint32_t *)(v38 - 8) = 0;
      v38 += 24;
      *(uint32_t *)(v40 + v37 - 12) = 0;
      *(uint32_t *)(v40 + v35 - 12) = 0;
      *(uint32_t *)(v40 + v35 - 8) = 0;
      *(uint32_t *)(v40 + v35 - 4) = 0;
    }
    while ( v38 != v39 );
    v7 = v49;
    *((uint32_t *)v49 + 16) = (uint32_t)(uintptr_t)(v51);
    glitch::video::IBuffer::reset(*((glitch::video::IBuffer::Self **)v49 + 9), 0xC000u, v51, true);
    v41 = *((uint32_t *)v49 + 4) <= 2047;
    *((uint32_t *)v49 + 3) = 2048;
    if ( v41 )
      goto LABEL_74;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::BufferedRenderer::applyMaskState  (binary VA: 0x10c8fc0)
// Original: gameswf::BufferedRenderer::applyMaskState
// ----------------------------------------------------------------------------
int gameswf::BufferedRenderer::applyMaskState(gameswf::BufferedRenderer::Self *self)
{
  char *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  int result;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  bool v19;
  int v20;
  int v21;
  char v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  char v39;
  int v40;
  int v41;
  char v42;
  int v43;
  int v44;
  uint8_t v45;
  uint8_t v46;

  v1 = (char *)self + 80;
  if ( *((uint32_t *)self + 10 * *((uint32_t *)self + 315) + 21) != 0 )
    v1 = (char *)self + 40 * *((uint32_t *)self + 315) + 80;
  if ( *((uint32_t *)self + 1) != 0 )
  {
LABEL_4:
    v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                   + 12
                   * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                   + 4);
    v3 = *(uint32_t *)(v2 + 4);
    *(uint32_t *)(v2 + 4) = v3 & 0x7FFFFFFF;
    if ( v3 < 0 )
      *(uint8_t *)(v2 + 54) = 1;
    v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                   + 12
                   * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                   + 4);
    v5 = *(uint32_t *)v4 & 0xF000000;
    *(uint32_t *)v4 |= 0xF000000u;
    v6 = 1;
    if ( v5 == 251658240 )
      v6 = *(uint8_t *)(v4 + 54);
    *(uint8_t *)(v4 + 54) = v6;
    result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                       + 12
                       * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                       + 4);
    v8 = *(int *)result < 0;
    *(uint32_t *)result |= 0x80000000;
    if ( !v8 )
      *(uint8_t *)(result + 54) = 1;
    return result;
  }
  result = *((uint32_t *)self + 316);
  switch ( result )
  {
    case 0:
      goto LABEL_4;
    case 1:
      v9 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                     + 12
                     * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                     + 4);
      v10 = *(uint32_t *)(v9 + 4);
      *(uint32_t *)(v9 + 4) = v10 | 0x80000000;
      if ( v10 >= 0 )
        *(uint8_t *)(v9 + 54) = 1;
      v11 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v12 = *(uint32_t *)(v11 + 4);
      *(uint32_t *)(v11 + 4) = v12 & 0xFFFFFFC7 | 0x10;
      if ( (v12 & 0x38) != 0x10 )
        *(uint8_t *)(v11 + 54) = 1;
      v45 = *((uint8_t *)self + 1268);
      v13 = *(int **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                    + 12
                    * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                    + 4);
      v14 = *v13;
      v15 = *v13;
      BYTE1(v15) = 0;
      *v13 = (v45 << 8) | v15;
      if ( BYTE1(v14) != v45 )
        *((uint8_t *)v13 + 54) = 1;
      v16 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v17 = (*(uint32_t *)v16 & 0xFF0000u) >> 16;
      *(uint32_t *)v16 |= 0xFF0000u;
      if ( (uint8_t)v17 != 0xFF )
        *(uint8_t *)(v16 + 54) = 1;
      v18 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v19 = (*(uint32_t *)(v18 + 4) & 0x1C0) == 0;
      *(uint32_t *)(v18 + 4) &= 0xFFFFFE3F;
      if ( !v19 )
        *(uint8_t *)(v18 + 54) = 1;
      v20 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v21 = *(uint32_t *)(v20 + 4);
      BYTE1(v21) &= 0xF1u;
      v22 = BYTE1(*(uint32_t *)(v20 + 4)) & 0xE;
      *(uint32_t *)(v20 + 4) = v21;
      if ( v22 != 0 )
        *(uint8_t *)(v20 + 54) = 1;
      v23 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v24 = *(uint32_t *)(v23 + 4);
      v25 = v24 & 0x7000;
      BYTE1(v24) = BYTE1(v24) & 0x8F | 0x30;
      *(uint32_t *)(v23 + 4) = v24;
      if ( v25 != 12288 )
        *(uint8_t *)(v23 + 54) = 1;
      v26 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v8 = *(int *)v26 < 0;
      *(uint32_t *)v26 &= ~0x80000000;
      if ( v8 )
        *(uint8_t *)(v26 + 54) = 1;
      result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                         + 12
                         * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                         + 4);
      v19 = (*(uint32_t *)result & 0xF000000) == 0;
      *(uint32_t *)result &= 0xF0FFFFFF;
      if ( !v19 )
        *(uint8_t *)(result + 54) = 1;
      break;
    case 2:
      v27 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v28 = *(uint32_t *)(v27 + 4);
      *(uint32_t *)(v27 + 4) = v28 | 0x80000000;
      if ( v28 >= 0 )
        *(uint8_t *)(v27 + 54) = 1;
      v29 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v30 = *(uint32_t *)(v29 + 4);
      *(uint32_t *)(v29 + 4) = v30 & 0xFFFFFFC7 | 0x10;
      if ( (v30 & 0x38) != 0x10 )
        *(uint8_t *)(v29 + 54) = 1;
      v46 = *((uint8_t *)self + 1268);
      v31 = *(int **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                    + 12
                    * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                    + 4);
      v32 = *v31;
      v33 = *v31;
      BYTE1(v33) = 0;
      *v31 = (v46 << 8) | v33;
      if ( BYTE1(v32) != v46 )
        *((uint8_t *)v31 + 54) = 1;
      v34 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v35 = (*(uint32_t *)v34 & 0xFF0000u) >> 16;
      *(uint32_t *)v34 |= 0xFF0000u;
      if ( (uint8_t)v35 != 0xFF )
        *(uint8_t *)(v34 + 54) = 1;
      v36 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v19 = (*(uint32_t *)(v36 + 4) & 0x1C0) == 0;
      *(uint32_t *)(v36 + 4) &= 0xFFFFFE3F;
      if ( !v19 )
        *(uint8_t *)(v36 + 54) = 1;
      v37 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v38 = *(uint32_t *)(v37 + 4);
      BYTE1(v38) &= 0xF1u;
      v39 = BYTE1(*(uint32_t *)(v37 + 4)) & 0xE;
      *(uint32_t *)(v37 + 4) = v38;
      if ( v39 != 0 )
        *(uint8_t *)(v37 + 54) = 1;
      v40 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v41 = *(uint32_t *)(v40 + 4);
      BYTE1(v41) &= 0x8Fu;
      v42 = BYTE1(*(uint32_t *)(v40 + 4)) & 0x70;
      *(uint32_t *)(v40 + 4) = v41;
      if ( v42 != 0 )
        *(uint8_t *)(v40 + 54) = 1;
      v43 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                      + 12
                      * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                      + 4);
      v8 = *(int *)v43 < 0;
      *(uint32_t *)v43 |= 0x80000000;
      if ( !v8 )
        *(uint8_t *)(v43 + 54) = 1;
      result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 1) + 4) + 24)
                         + 12
                         * (uint8_t)glitch::video::CMaterial::getTechnique(*((glitch::video::CMaterial::Self **)v1 + 1))
                         + 4);
      v44 = *(uint32_t *)result & 0xF000000;
      *(uint32_t *)result |= 0xF000000u;
      if ( v44 != 251658240 )
        *(uint8_t *)(result + 54) = 1;
      break;
    default:
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BufferedRenderer::queueIndexedTriangles  (binary VA: 0x10cac60)
// Original: gameswf::BufferedRenderer::queueIndexedTriangles
// ----------------------------------------------------------------------------
int gameswf::BufferedRenderer::queueIndexedTriangles(gameswf::BufferedRenderer::Self *self, const Vertex *src, int a3, const uint16_t *a4, unsigned int a5)
{
  gameswf::BufferedRenderer::Self *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  __m128i v13;
  int v14;
  unsigned int v15;
  __m128i v16;
  signed int v17;
  int v18;
  void *v20;
  char *v21;
  int v22;
  char *v23;
  char *v24;
  int16_t v25;
  int v26;
  uint32_t *v27;
  int v28;
  unsigned int v29;
  signed int v30;
  unsigned int v31;
  char *v32;
  int v33;
  char *v34;
  int v35;
  int v36;

  v5 = self;
  v6 = (uint32_t *)(*((uint32_t *)self + 12) + 20 * *((uint32_t *)self + 2));
  if ( v6[3] + v6[1] + a3 >= *((uint32_t *)self + 3)
    || (signed int)(v6[4] + v6[2] + a5) > *((uint32_t *)self + 4)
    || *v6 != 6 )
  {
    if ( *((uint32_t *)self + 13) != 0 )
    {
      sub_10C6160((int)(uintptr_t)(self));
      v6 = (uint32_t *)(*((uint32_t *)self + 12) + 20 * *((uint32_t *)self + 2));
    }
    *v6 = 6;
    v6 = (uint32_t *)(*((uint32_t *)self + 12) + 20 * *((uint32_t *)self + 2));
    v30 = a5 + v6[2] + v6[4];
    v7 = a3 + v6[1] + v6[3];
    v35 = v7;
    if ( v7 > *((uint32_t *)self + 3) )
    {
      v29 = 24 * v7;
      v21 = (char *)opNewArray(24 * v7);
      v32 = v21;
      if ( v35 != 0 )
      {
        v34 = v21 + 12;
        v27 = v6;
        v22 = 0;
        v23 = v21 + 12;
        do
        {
          v24 = (char *)(v23 - v34);
          ++v22;
          *(uint32_t *)&v32[(uint32_t)(uintptr_t)(v24)] = 0;
          *(uint32_t *)&v32[(uint32_t)(uintptr_t)(v24) + 4] = 0;
          *(uint32_t *)&v32[(uint32_t)(uintptr_t)(v24) + 8] = 0;
          *(uint32_t *)v23 = 0;
          *((uint32_t *)v23 + 1) = 0;
          *((uint32_t *)v23 + 2) = 0;
          v23 += 24;
        }
        while ( v35 != v22 );
        v6 = v27;
        v5 = self;
        v21 = v32;
      }
      *((uint32_t *)v5 + 16) = (uint32_t)(uintptr_t)(v21);
      glitch::video::IBuffer::reset(*((glitch::video::IBuffer::Self **)v5 + 9), v29, v21, true);
      *((uint32_t *)v5 + 3) = v35;
    }
    if ( *((uint32_t *)v5 + 4) < v30 )
    {
      v20 = (void *)opNewArray(2 * v30);
      *((uint32_t *)v5 + 17) = (uint32_t)(uintptr_t)(v20);
      glitch::video::IBuffer::reset(*((glitch::video::IBuffer::Self **)v5 + 10), 2 * v30, v20, true);
      *((uint32_t *)v5 + 4) = v30;
    }
  }
  v28 = glitch::video::IBuffer::mapInternal(
          *((glitch::video::IBuffer::Self **)v5 + 9),
          2u,
          0,
          *(uint32_t *)(*((uint32_t *)v5 + 9) + 20),
          0)
      + 24 * v6[1];
  v8 = glitch::video::IBuffer::mapInternal(
         *((glitch::video::IBuffer::Self **)v5 + 10),
         2u,
         0,
         *(uint32_t *)(*((uint32_t *)v5 + 10) + 20),
         0);
  v9 = v6[2];
  v10 = v8;
  v26 = v8 + 2 * v9;
  v36 = v6[4];
  v33 = v6[1];
  v11 = v6[3];
  if ( (int)a5 > 0 )
  {
    v25 = v33 + v11;
    v12 = v10 + 2 * (v9 + v36);
    v31 = 8 * (a5 >> 3);
    if ( a5 > 8 && (v12 > (unsigned int)(uintptr_t)(a4 + 8) || (unsigned int)(uintptr_t)(a4) > v12 + 16) && v31 != 0 )
    {
      v13 = _mm_cvtsi32_si128(v33 + v11);
      v14 = 0;
      v15 = 0;
      v16 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v13, v13), 0);
      do
      {
        ++v15;
        *(__m128i *)(v12 + v14 * 2) = _mm_add_epi16(*(__m128i *)&a4[v14], v16);
        v14 += 8;
      }
      while ( a5 >> 3 > v15 );
      v17 = 8 * (a5 >> 3);
      v36 += v31;
      if ( v31 == a5 )
        goto LABEL_16;
    }
    else
    {
      v17 = 0;
    }
    v18 = v26 + 2 * (v36 - v17);
    do
    {
      *(uint16_t *)(v18 + 2 * v17) = a4[v17] + v25;
      ++v17;
    }
    while ( (int)a5 > v17 );
LABEL_16:
    v11 = v6[3];
  }
  memcpy((void *)(v28 + 24 * v11), src, 24 * a3);
  v6[3] += a3;
  v6[4] += a5;
  glitch::video::IBuffer::unmap(*((glitch::video::IBuffer::Self **)v5 + 9));
  return glitch::video::IBuffer::unmap(*((glitch::video::IBuffer::Self **)v5 + 10));
}

// ----------------------------------------------------------------------------
// Function: gameswf::BufferedRenderer::clearTextures  (binary VA: 0x10cb6d0)
// Original: gameswf::BufferedRenderer::clearTextures
// ----------------------------------------------------------------------------
int gameswf::BufferedRenderer::clearTextures(gameswf::BufferedRenderer::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint8_t v9;
  uint16_t v10;
  uint32_t *v11;
  int v12;
  uint8_t v13;
  typedef int _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v18)) > _g4_s3 ? (40u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v19)) > _g4_s4 ? (44u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  v15[0] = 0;
  v1 = *((uint32_t *)self + 310);
  if ( v1 != 0 && *((uint32_t *)self + 13) != 0 )
  {
    sub_10C6160((int)(uintptr_t)(self));
    v16 = v15[0];
    v1 = *((uint32_t *)self + 310);
  }
  v16 = v1;
  *((uint32_t *)self + 310) = 0;
  sub_5ED480(&v16);
  if ( *((uint32_t *)self + 13) != 0 )
    sub_10C6160((int)(uintptr_t)(self));
  v2 = 0;
  v17 = v15[0];
  if ( v15[0] != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v15[0] + 4), 1u);
    v2 = v17;
  }
  v3 = *((uint32_t *)self + 312);
  *((uint32_t *)self + 312) = v2;
  v17 = v3;
  sub_5ED480(&v17);
  v4 = 0;
  v18 = v15[0];
  if ( v15[0] != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v15[0] + 4), 1u);
    v4 = v18;
  }
  v5 = *((uint32_t *)self + 313);
  *((uint32_t *)self + 313) = v4;
  v18 = v5;
  sub_5ED480(&v18);
  v6 = 0;
  v19 = v15[0];
  if ( v15[0] != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v15[0] + 4), 1u);
    v6 = v19;
  }
  v7 = 0;
  v8 = *((uint32_t *)self + 311);
  *((uint32_t *)self + 311) = v6;
  v19 = v8;
  sub_5ED480(&v19);
  do
  {
    v11 = *((uint32_t **)self + 10 * v7 + 21);
    if ( v11 != nullptr )
    {
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
        v11,
        *((uint16_t *)self + 20 * v7 + 44),
        0,
        v15);
      v12 = *((uint32_t *)self + 10 * v7 + 21);
      v13 = *(uint8_t *)(v12 + 8);
      if ( v15[0] != 0 && *(uint32_t *)(*(uint32_t *)(v15[0] + 16) + 32) != 0 )
        v9 = *((uint8_t *)self + 40 * v7 + 117);
      else
        v9 = *((uint8_t *)self + 40 * v7 + 116);
      if ( v13 != v9 )
      {
        *(uint8_t *)(v12 + 8) = v9;
        glitch::video::CMaterialRenderer::setRenderState(
          *((uint32_t *)self + 10 * v7 + 20),
          v9,
          0,
          *(uint32_t **)(*(uint32_t *)(*((uint32_t *)self + 10 * v7 + 20) + 24) + 12 * v13 + 4));
      }
      v10 = *((uint16_t *)self + 20 * v7 + 45);
      if ( v10 != 0xFFFF && *((uint16_t *)self + 20 * v7 + 46) != 0xFFFF )
      {
        glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
          *((uint32_t **)self + 10 * v7 + 21),
          v10,
          0,
          v15);
        glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
          *((uint32_t **)self + 10 * v7 + 21),
          *((uint16_t *)self + 20 * v7 + 46),
          0,
          v15);
      }
    }
    ++v7;
  }
  while ( v7 != 29 );
  return sub_5ED480(v15);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BufferedRenderer::queueBuffer  (binary VA: 0x10ccdd0)
// Original: gameswf::BufferedRenderer::queueBuffer
// ----------------------------------------------------------------------------
int gameswf::BufferedRenderer::queueBuffer(int a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int i;
  __m128i v15;
  unsigned int v16;
  __m128i *v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  int16_t v22;
  int v23;
  uint32_t *v24;
  unsigned int v25;
  int result;
  void *v27;
  char *v28;
  int v29;
  char *v30;
  int v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  int v35;
  int v36;
  int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  int v43;
  uint32_t *v44;

  v44 = (uint32_t *)(*(uint32_t *)(a1 + 48) + 20 * *(uint32_t *)(a1 + 8));
  v4 = *(uint32_t *)(a1 + 12);
  v42 = v44[3] + v44[1] + a3 + 2;
  v5 = *(uint32_t *)(a1 + 16);
  if ( v4 <= v5 )
    v5 = *(uint32_t *)(a1 + 12);
  if ( v42 >= v5 || *v44 != a4 )
  {
    if ( *(uint32_t *)(a1 + 52) != 0 )
    {
      sub_10C6160(a1);
      v44 = (uint32_t *)(*(uint32_t *)(a1 + 48) + 20 * *(uint32_t *)(a1 + 8));
    }
    *v44 = a4;
    v44 = (uint32_t *)(20 * *(uint32_t *)(a1 + 8) + *(uint32_t *)(a1 + 48));
    v42 = v44[1] + v44[3] + a3 + 2;
    v4 = *(uint32_t *)(a1 + 12);
  }
  if ( v42 > v4 )
  {
    v28 = (char *)opNewArray(24 * v42);
    if ( v42 != 0 )
    {
      v29 = 0;
      v30 = v28 + 12;
      do
      {
        v31 = v30 - (v28 + 12);
        ++v29;
        *(uint32_t *)&v28[v31] = 0;
        *(uint32_t *)&v28[v31 + 4] = 0;
        *(uint32_t *)&v28[v31 + 8] = 0;
        *(uint32_t *)v30 = 0;
        *((uint32_t *)v30 + 1) = 0;
        *((uint32_t *)v30 + 2) = 0;
        v30 += 24;
      }
      while ( v42 != v29 );
    }
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v28);
    glitch::video::IBuffer::reset(*(glitch::video::IBuffer::Self **)(a1 + 36), 24 * v42, v28, true);
    *(uint32_t *)(a1 + 12) = v42;
  }
  v6 = a1;
  if ( *(uint32_t *)(a1 + 16) < v42 )
  {
    v27 = (void *)opNewArray(2 * v42);
    *(uint32_t *)(a1 + 68) = (uint32_t)(uintptr_t)(v27);
    glitch::video::IBuffer::reset(*(glitch::video::IBuffer::Self **)(a1 + 40), 2 * v42, v27, true);
    v6 = a1;
    *(uint32_t *)(a1 + 16) = v42;
  }
  v35 = *(uint32_t *)(v6 + 64);
  v7 = v44[2];
  v8 = *(uint32_t *)(a1 + 68);
  v9 = v44[3];
  v37 = v8 + 2 * v7;
  v41 = v9 + v44[1];
  v43 = v44[4];
  if ( v9 > 0 && *v44 == 4 )
  {
    v34 = (uint32_t *)(v35 + 24 * v41);
    *v34 = *a2;
    v34[1] = a2[1];
    v34[2] = a2[2];
    v34[3] = a2[3];
    v34[4] = a2[4];
    v34[5] = a2[5];
    LOWORD(v34) = v41++;
    *(uint16_t *)(v37 + 2 * v43++) = (uint16_t)(uintptr_t)v34;
  }
  if ( a3 > 0 )
  {
    v36 = v8 + 2 * (v43 + v7);
    v10 = -((uint8_t)(v36 & 0xF) >> 1) & 7;
    if ( v10 > a3 )
      v10 = a3;
    v40 = v10;
    if ( v10 != 0 )
    {
      v11 = v10;
      v12 = v43;
      v13 = v41;
      for ( i = 0; i < v11; ++i )
        *(uint16_t *)(v37 + 2 * v12++) = v13++;
      if ( v40 == a3 )
      {
LABEL_28:
        v43 += a3;
        goto LABEL_29;
      }
    }
    else
    {
      v13 = v41;
      v12 = v43;
      i = 0;
    }
    v38 = (a3 - v40) >> 3;
    v39 = 8 * v38;
    if ( 8 * v38 == 0 )
      goto LABEL_26;
g4_m128_lane<int64_t>(v15, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v13 + 1)), 0);
g4_m128_lane<int64_t>(v15, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13 + 2), _mm_cvtsi32_si128(v13 + 3)), 0);
    v16 = 0;
    v17 = (__m128i *)(v36 + 2 * v40);
    while ( 1 )
    {
      v18 = _mm_add_epi32(v15, G4_BITCAST<__m128i>(xmmword_1C7C400));
      v19 = _mm_unpackhi_epi16(v15, v18);
      v20 = _mm_unpacklo_epi16(v15, v18);
      ++v16;
      v21 = _mm_add_epi32(v15, G4_BITCAST<__m128i>(xmmword_1C7C9F0));
      *v17++ = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v20, v19), _mm_unpackhi_epi16(v20, v19));
      if ( v16 >= v38 )
        break;
      v15 = v21;
    }
    LOWORD(v13) = v39 + v13;
    v12 += v39;
    i += v39;
    if ( a3 - v40 != v39 )
    {
LABEL_26:
      v22 = v13 - i;
      v23 = v37 + 2 * (v12 - i);
      do
      {
        *(uint16_t *)(v23 + 2 * i) = v22 + i;
        ++i;
      }
      while ( a3 > i );
    }
    goto LABEL_28;
  }
LABEL_29:
  memcpy((void *)(v35 + 24 * v41), a2, 24 * a3);
  v24 = v44;
  v25 = a3 + v41;
  result = *v44;
  if ( *v44 == 4 )
  {
    v32 = &a2[6 * a3 - 6];
    v33 = (uint32_t *)(v35 + 24 * v25);
    *v33 = *v32;
    v33[1] = v32[1];
    v33[2] = v32[2];
    v33[3] = v32[3];
    v33[4] = v32[4];
    v33[5] = v32[5];
    *(uint16_t *)(v37 + 2 * v43++) = v25++;
    result = *v44;
    v24 = v44;
  }
  v24[3] = v25 - v24[1] - v24[3];
  v24[4] = v43;
  if ( result == 1 )
  {
    result = a1;
    if ( *(uint32_t *)(a1 + 52) != 0 )
      return sub_10C6160(a1);
  }
  return result;
}


