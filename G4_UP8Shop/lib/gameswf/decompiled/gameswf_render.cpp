#include "Core/Utils/DecompTypes.h"
#include "gameswf_render.h"

// ----------------------------------------------------------------------------
// Function: gameswf::render::createBitmapInfoEmpty  (binary VA: 0x10bf0c0)
// Original: gameswf::render::createBitmapInfoEmpty
// ----------------------------------------------------------------------------
gameswf::render::DummyBitmapInfo::Self * gameswf::render::createBitmapInfoEmpty(gameswf::render::Self *self, int a2)
{
  gameswf::render::DummyBitmapInfo::Self *v2;
  int v3;
  int32_t v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef gameswf::render::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef gameswf::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t _g4_t_v25[19];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v10)) > _g4_s4 ? (20u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v11)) > _g4_s5 ? (24u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v12)) > _g4_s6 ? (28u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v13)) > _g4_s7 ? (32u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v14)) > _g4_s8 ? (36u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v15)) > _g4_s9 ? (40u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v16)) > _g4_s10 ? (44u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v17)) > _g4_s11 ? (48u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v18)) > _g4_s12 ? (52u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v19)) > _g4_s13 ? (56u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v20)) > _g4_s14 ? (60u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v21)) > _g4_s15 ? (64u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v22)) > _g4_s16 ? (68u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v23)) > _g4_s17 ? (72u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v24)) > _g4_s18 ? (76u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v25)) > _g4_s19 ? (80u + sizeof(_g4_t_v25)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);

  v9 = 1;
  memset(v25, 0, 0x40u);
  LOBYTE(v25[0]) = -1;
  v10 = self;
  v11 = a2;
  v15 = 0;
  v24 |= 0x7FFFFFu;
  v16 = 0;
  v17 = 0;
  HIBYTE(v24) |= 1u;
  v14 = v25;
  v18 = 0;
  v19 = 0;
  BYTE2(v24) &= ~0x80u;
  LOWORD(v20) = 1;
  v12 = 8;
  v13 = 8;
  if ( gameswf::s_render_handler != nullptr )
  {
    v2 = (gameswf::render::DummyBitmapInfo::Self *)(*(int (**)(uint32_t *, int *))(*gameswf::s_render_handler + 8))(
                                               (uint32_t *)(gameswf::s_render_handler),
                                               &v9);
  }
  else
  {
    v6 = 0;
    v2 = (gameswf::render::DummyBitmapInfo::Self *)opNew(0x3Cu);
    gameswf::render::DummyBitmapInfo::DummyBitmapInfo(v2);
  }
  if ( (uint8_t)v20 == 0xFF && (v24 & 0x1000000) != 0 )
  {
    v6 = v22;
    gameswf::free_internal(v23);
  }
  v3 = v18;
  if ( v18 == 0 )
    return v2;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(v3 + 4);
      _mm_mfence();
      if ( v4 != 2 )
        break;
      if ( *(uint16_t *)(v3 + 32) == 0xFFFF )
        goto LABEL_7;
      glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v3);
    }
    if ( v4 == 1 )
      break;
LABEL_7:
    if ( v4 == __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v4, v4 - 1) )
      return v2;
  }
  G4_VCALL<void>(v3, 4, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25[0], v25[1], v25[2], v25[3], v25[4], v25[5], v25[6], v25[7], v25[8], v25[9], v25[10], v25[11], v25[12], v25[13], v25[14], v25[15]);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render::createBitmapInfoAlpha  (binary VA: 0x10bf250)
// Original: gameswf::render::createBitmapInfoAlpha
// ----------------------------------------------------------------------------
gameswf::render::DummyBitmapInfo::Self * gameswf::render::createBitmapInfoAlpha(gameswf::render::Self *self, int a2, int a3)
{
  gameswf::render::DummyBitmapInfo::Self *v3;
  int v4;
  int32_t v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef gameswf::render::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef gameswf::render::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef gameswf::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v11)) > _g4_s4 ? (20u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v12)) > _g4_s5 ? (24u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v13)) > _g4_s6 ? (28u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v14)) > _g4_s7 ? (32u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v15)) > _g4_s8 ? (36u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v16)) > _g4_s9 ? (40u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v17)) > _g4_s10 ? (44u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v18)) > _g4_s11 ? (48u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v19)) > _g4_s12 ? (52u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v20)) > _g4_s13 ? (56u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v21)) > _g4_s14 ? (60u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v22)) > _g4_s15 ? (64u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v23)) > _g4_s16 ? (68u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v24)) > _g4_s17 ? (72u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v25)) > _g4_s18 ? (76u + sizeof(_g4_t_v25)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);

  v11 = self;
  v12 = a2;
  v10 = 1;
  v25 |= 0x7FFFFFu;
  v16 = 0;
  v17 = 0;
  HIBYTE(v25) |= 1u;
  v15 = a3;
  v13 = self;
  v18 = 0;
  v19 = 0;
  BYTE2(v25) &= ~0x80u;
  v20 = 0;
  LOWORD(v21) = 1;
  v14 = a2;
  if ( gameswf::s_render_handler != nullptr )
  {
    v3 = (gameswf::render::DummyBitmapInfo::Self *)(*(int (**)(uint32_t *, int *))(*gameswf::s_render_handler + 8))(
                                               (uint32_t *)(gameswf::s_render_handler),
                                               &v10);
  }
  else
  {
    v7 = 0;
    v3 = (gameswf::render::DummyBitmapInfo::Self *)opNew(0x3Cu);
    gameswf::render::DummyBitmapInfo::DummyBitmapInfo(v3);
  }
  if ( (uint8_t)v21 == 0xFF && (v25 & 0x1000000) != 0 )
  {
    v7 = v23;
    gameswf::free_internal(v24);
  }
  v4 = v19;
  if ( v19 == 0 )
    return v3;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(v4 + 4);
      _mm_mfence();
      if ( v5 != 2 )
        break;
      if ( *(uint16_t *)(v4 + 32) == 0xFFFF )
        goto LABEL_7;
      glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v4);
    }
    if ( v5 == 1 )
      break;
LABEL_7:
    if ( v5 == __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v5, v5 - 1) )
      return v3;
  }
  G4_VCALL<void>(v4, 4, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render::createBitmapInfoRGB  (binary VA: 0x10bf3c0)
// Original: gameswf::render::createBitmapInfoRGB
// ----------------------------------------------------------------------------
gameswf::render::DummyBitmapInfo::Self * gameswf::render::createBitmapInfoRGB(gameswf::render::Self *self, gameswf::ImageRGB::Self *s)
{
  int v2;
  size_t v3;
  char *v4;
  gameswf::Self *v5;
  gameswf::render::DummyBitmapInfo::Self *v6;
  int v7;
  int32_t v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef gameswf::render::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v17)) > _g4_s7 ? (36u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v18)) > _g4_s8 ? (40u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v19)) > _g4_s9 ? (44u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v20)) > _g4_s10 ? (48u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v21)) > _g4_s11 ? (52u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v22)) > _g4_s12 ? (56u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v23)) > _g4_s13 ? (60u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v24)) > _g4_s14 ? (64u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v25)) > _g4_s15 ? (68u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v26)) > _g4_s16 ? (72u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v27)) > _g4_s17 ? (76u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v28)) > _g4_s18 ? (80u + sizeof(_g4_t_v28)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);

  v13 = 2;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v2 = *((uint32_t *)self + 3);
  v15 = *((uint32_t *)self + 4);
  v14 = v2;
  LOWORD(v28) = -1;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  LOWORD(v24) = 1;
  BYTE2(v28) = 127;
  HIBYTE(v28) |= 1u;
  v19 = self;
  if ( s != nullptr )
  {
    v3 = strlen((const char *)s);
    gameswf::String::resize((gameswf::String::Self *)&v24, v3);
    if ( (uint8_t)v24 == 0xFF )
    {
      v4 = v25;
      v5 = v27;
    }
    else
    {
      v4 = (char *)(char)v24;
      v5 = (gameswf::Self *)((char *)&v24 + 1);
    }
    gameswf::Strcpy_s(v5, v4, s);
    v28 |= 0x7FFFFFu;
  }
  if ( gameswf::s_render_handler != nullptr )
  {
    v6 = (gameswf::render::DummyBitmapInfo::Self *)(*(int (**)(uint32_t *, int *))(*gameswf::s_render_handler + 8))(
                                               (uint32_t *)(gameswf::s_render_handler),
                                               &v13);
  }
  else
  {
    v10 = 0;
    v6 = (gameswf::render::DummyBitmapInfo::Self *)opNew(0x3Cu);
    gameswf::render::DummyBitmapInfo::DummyBitmapInfo(v6);
  }
  if ( (uint8_t)v24 == 0xFF && (v28 & 0x1000000) != 0 )
  {
    v10 = v26;
    gameswf::free_internal(v27);
  }
  v7 = v22;
  if ( v22 == 0 )
    return v6;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(uint32_t *)(v7 + 4);
      _mm_mfence();
      if ( v8 != 2 )
        break;
      if ( *(uint16_t *)(v7 + 32) == 0xFFFF )
        goto LABEL_11;
      glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v7);
    }
    if ( v8 == 1 )
      break;
LABEL_11:
    if ( v8 == __sync_val_compare_and_swap((volatile int32_t *)(v7 + 4), v8, v8 - 1) )
      return v6;
  }
  G4_VCALL<void>(v7, 4, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render::createBitmapInfoRGBA  (binary VA: 0x10bf590)
// Original: gameswf::render::createBitmapInfoRGBA
// ----------------------------------------------------------------------------
gameswf::render::DummyBitmapInfo::Self * gameswf::render::createBitmapInfoRGBA(gameswf::render::Self *self, gameswf::ImageRGBA::Self *s)
{
  int v2;
  size_t v3;
  char *v4;
  gameswf::Self *v5;
  gameswf::render::DummyBitmapInfo::Self *v6;
  int v7;
  int32_t v8;
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
  typedef gameswf::render::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v17)) > _g4_s7 ? (36u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v18)) > _g4_s8 ? (40u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v19)) > _g4_s9 ? (44u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v20)) > _g4_s10 ? (48u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v21)) > _g4_s11 ? (52u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v22)) > _g4_s12 ? (56u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v23)) > _g4_s13 ? (60u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v24)) > _g4_s14 ? (64u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v25)) > _g4_s15 ? (68u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v26)) > _g4_s16 ? (72u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v27)) > _g4_s17 ? (76u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v28)) > _g4_s18 ? (80u + sizeof(_g4_t_v28)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);

  v13 = 3;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v2 = *((uint32_t *)self + 3);
  v15 = *((uint32_t *)self + 4);
  v14 = v2;
  LOWORD(v28) = -1;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  LOWORD(v24) = 1;
  BYTE2(v28) = 127;
  HIBYTE(v28) |= 1u;
  v20 = self;
  if ( s != nullptr )
  {
    v3 = strlen((const char *)s);
    gameswf::String::resize((gameswf::String::Self *)&v24, v3);
    if ( (uint8_t)v24 == 0xFF )
    {
      v4 = v25;
      v5 = v27;
    }
    else
    {
      v4 = (char *)(char)v24;
      v5 = (gameswf::Self *)((char *)&v24 + 1);
    }
    gameswf::Strcpy_s(v5, v4, s);
    v28 |= 0x7FFFFFu;
  }
  if ( gameswf::s_render_handler != nullptr )
  {
    v6 = (gameswf::render::DummyBitmapInfo::Self *)(*(int (**)(uint32_t *, int *))(*gameswf::s_render_handler + 8))(
                                               (uint32_t *)(gameswf::s_render_handler),
                                               &v13);
  }
  else
  {
    v10 = 0;
    v6 = (gameswf::render::DummyBitmapInfo::Self *)opNew(0x3Cu);
    gameswf::render::DummyBitmapInfo::DummyBitmapInfo(v6);
  }
  if ( (uint8_t)v24 == 0xFF && (v28 & 0x1000000) != 0 )
  {
    v10 = v26;
    gameswf::free_internal(v27);
  }
  v7 = v22;
  if ( v22 == 0 )
    return v6;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(uint32_t *)(v7 + 4);
      _mm_mfence();
      if ( v8 != 2 )
        break;
      if ( *(uint16_t *)(v7 + 32) == 0xFFFF )
        goto LABEL_11;
      glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v7);
    }
    if ( v8 == 1 )
      break;
LABEL_11:
    if ( v8 == __sync_val_compare_and_swap((volatile int32_t *)(v7 + 4), v8, v8 - 1) )
      return v6;
  }
  G4_VCALL<void>(v7, 4, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render::createBitmapInfoNative  (binary VA: 0x10bf760)
// Original: gameswf::render::createBitmapInfoNative
// ----------------------------------------------------------------------------
gameswf::render::DummyBitmapInfo::Self * gameswf::render::createBitmapInfoNative(gameswf::render::Self *self, int a2, int a3, const gameswf::MemBuf::Self *s)
{
  size_t v4;
  char *v5;
  gameswf::Self *v6;
  gameswf::render::DummyBitmapInfo::Self *v7;
  int v8;
  int32_t v9;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef gameswf::render::Self *_g4_t_v15;
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
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v19)) > _g4_s8 ? (40u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v20)) > _g4_s9 ? (44u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v21)) > _g4_s10 ? (48u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v22)) > _g4_s11 ? (52u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v23)) > _g4_s12 ? (56u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v24)) > _g4_s13 ? (60u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v25)) > _g4_s14 ? (64u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v26)) > _g4_s15 ? (68u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v27)) > _g4_s16 ? (72u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v28)) > _g4_s17 ? (76u + sizeof(_g4_t_v28)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v29)) > _g4_s18 ? (80u + sizeof(_g4_t_v29)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);

  v15 = self;
  v16 = a2;
  LOWORD(v29) = -1;
  v14 = 5;
  v17 = 0;
  HIBYTE(v29) = ((uint16_t)(HIWORD(v29) | 0x7F) >> 8) | 1;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  LOWORD(v25) = 1;
  BYTE2(v29) = 127;
  v24 = a3;
  if ( s != nullptr )
  {
    v4 = strlen((const char *)s);
    gameswf::String::resize((gameswf::String::Self *)&v25, v4);
    if ( (uint8_t)v25 == 0xFF )
    {
      v5 = v26;
      v6 = v28;
    }
    else
    {
      v5 = (char *)(char)v25;
      v6 = (gameswf::Self *)((char *)&v25 + 1);
    }
    gameswf::Strcpy_s(v6, v5, s);
    v29 |= 0x7FFFFFu;
  }
  if ( gameswf::s_render_handler != nullptr )
  {
    v7 = (gameswf::render::DummyBitmapInfo::Self *)(*(int (**)(uint32_t *, int *))(*gameswf::s_render_handler + 8))(
                                               (uint32_t *)(gameswf::s_render_handler),
                                               &v14);
  }
  else
  {
    v11 = 0;
    v7 = (gameswf::render::DummyBitmapInfo::Self *)opNew(0x3Cu);
    gameswf::render::DummyBitmapInfo::DummyBitmapInfo(v7);
  }
  if ( (uint8_t)v25 == 0xFF && (v29 & 0x1000000) != 0 )
  {
    v11 = v27;
    gameswf::free_internal(v28);
  }
  v8 = v23;
  if ( v23 == 0 )
    return v7;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(uint32_t *)(v8 + 4);
      _mm_mfence();
      if ( v9 != 2 )
        break;
      if ( *(uint16_t *)(v8 + 32) == 0xFFFF )
        goto LABEL_11;
      glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v8);
    }
    if ( v9 == 1 )
      break;
LABEL_11:
    if ( v9 == __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v9, v9 - 1) )
      return v7;
  }
  G4_VCALL<void>(v8, 4, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render::setMaskBound  (binary VA: 0x10bf930)
// Original: gameswf::render::setMaskBound
// ----------------------------------------------------------------------------
int gameswf::render::setMaskBound(gameswf::render::Self *self)
{
  int result;

  dword_20E5544 = *(uint32_t *)self;
  dword_20E5548 = *((uint32_t *)self + 1);
  dword_20E554C = *((uint32_t *)self + 2);
  result = *((uint32_t *)self + 3);
  dword_20E5550 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render::getMaskBound  (binary VA: 0x10bf970)
// Original: gameswf::render::getMaskBound
// ----------------------------------------------------------------------------
int * gameswf::render::getMaskBound()
{
  return (int *)(&dword_20E5544);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render::DummyBitmapInfo::Destroy  (binary VA: 0x10c3610)
// Original: gameswf::render::DummyBitmapInfo::~DummyBitmapInfo
// ----------------------------------------------------------------------------
void gameswf::render::DummyBitmapInfo::Destroy(gameswf::render::DummyBitmapInfo::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EE08);
  if ( v1 && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render::DummyBitmapInfo::Destroy_ea10c3680  (binary VA: 0x10c3680)
// Original: gameswf::render::DummyBitmapInfo::~DummyBitmapInfo
// ----------------------------------------------------------------------------
void gameswf::render::DummyBitmapInfo::Destroy_ea10c3680(gameswf::render::DummyBitmapInfo::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EE08);
  if ( v1 && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::RefCounted::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x10c4300 (size: 732 bytes)
// Symbol:    _ZN7gameswf6render15DummyBitmapInfoC2Ev
// Demangled: gameswf::render::DummyBitmapInfo::DummyBitmapInfo(void)
// ============================================================================
// Alternative name is '_ZN7gameswf6render15DummyBitmapInfoC1Ev'
void (**gameswf::render::DummyBitmapInfo::DummyBitmapInfo(
        gameswf::Self **self))(gameswf::render::DummyBitmapInfo::Self * self)
{
  gameswf::render::DummyBitmapInfo::Self *v1;
  char v2;
  int v3;
  char *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  int v7;
  unsigned int v8;
  gameswf::Self *v10;
  int v11;
  int v12;
  int v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint8_t _g4_t_v17[3];
  typedef int _g4_t_v18;
  typedef gameswf::Self *_g4_t_v19;
  typedef unsigned int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (14u + sizeof(_g4_t_v14)) > _g4_s0 ? (14u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (59u + sizeof(_g4_t_v15)) > _g4_s1 ? (59u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v16)) > _g4_s2 ? (60u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (61u + sizeof(_g4_t_v17)) > _g4_s3 ? (61u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v18)) > _g4_s4 ? (64u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v19)) > _g4_s5 ? (72u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v20)) > _g4_s6 ? (76u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 14u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 59u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 61u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);

  v1 = (gameswf::render::DummyBitmapInfo::Self *)self;
  LOWORD(v20) = -1;
  BYTE2(v20) = 127;
  HIBYTE(v20) |= 1u;
  v15 = 0;
  v16 = 1;
  v17[0] = 0;
  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *(self + 5) = nullptr;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208EE08);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *(self + 6) = nullptr;
  v2 = v16;
  *(self + 7) = nullptr;
  *(self + 8) = (gameswf::Self *)1065353216;
  *(self + 9) = (gameswf::Self *)1065353216;
  *((uint8_t *)self + 40) = 1;
  *((uint8_t *)self + 41) = 0;
  if ( v2 == -1 )
    v3 = v18 - 1;
  else
    v3 = v2 - 1;
  gameswf::String::resize((gameswf::String::Self *)(self + 10), v3);
  LOBYTE(v4) = *((uint8_t *)self + 40);
  v5 = (gameswf::Self *)v17;
  if ( v16 == -1 )
    v5 = v19;
  if ( (uint8_t)(uintptr_t)v4 == 0xFF )
  {
    v4 = (char *)*(self + 11);
    v6 = *(self + 13);
  }
  else
  {
    v4 = (char *)(char)(uintptr_t)v4;
    v6 = (gameswf::Self *)((char *)self + 41);
  }
  gameswf::Strcpy_s(v6, v4, v5);
  if ( (uint8_t *)(v20 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v14 = v16;
    if ( v16 == -1 )
    {
      v10 = v19;
      v11 = v18 - 1;
    }
    else
    {
      v10 = (gameswf::Self *)v17;
      v11 = v16 - 1;
    }
    v7 = 5381;
    if ( v11 > 0 )
    {
      do
      {
        --v11;
        v12 = 33 * v7;
        v13 = *((uint8_t *)v10 + v11) + 32;
        if ( (uint8_t)(*((uint8_t *)v10 + v11) - 65) > 0x19u )
          v13 = *((uint8_t *)v10 + v11);
        v7 = v12 ^ v13;
      }
      while ( v11 != 0 );
      v1 = (gameswf::render::DummyBitmapInfo::Self *)self;
      v7 = v7 << 9 >> 9;
    }
    v20 = v7 & 0x7FFFFF | v20 & 0xFF800000;
  }
  else
  {
    v14 = v16;
    v7 = (int)(v20 << 9) >> 9;
  }
  v8 = v7 & 0x7FFFFF | *((uint32_t *)v1 + 14) & 0xFF800000;
  *((uint32_t *)v1 + 14) = v8;
  *((uint8_t *)v1 + 58) = BYTE2(v8) & 0x7F;
  *((uint8_t *)v1 + 59) = HIBYTE(v8) | 1;
  if ( v14 == -1 && (v20 & 0x1000000) != 0 )
    gameswf::free_internal(v19);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208EE68);
  return (void (**)(gameswf::render::DummyBitmapInfo::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208EE68));
}

