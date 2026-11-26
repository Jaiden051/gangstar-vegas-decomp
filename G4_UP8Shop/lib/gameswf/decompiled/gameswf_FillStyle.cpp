#include "Core/Utils/DecompTypes.h"
#include "gameswf_FillStyle.h"

// ----------------------------------------------------------------------------
// Function: gameswf::FillStyle::Destroy  (binary VA: 0x10ed900)
// Original: gameswf::FillStyle::~FillStyle
// ----------------------------------------------------------------------------
void gameswf::FillStyle::Destroy(gameswf::RefCounted::Self **self)
{
  int v1;
  uint32_t *v2;
  int v3;
  int v4;
  gameswf::Self *v5;

  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208F678);
  if ( *(self + 14) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 14));
  if ( *(self + 13) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 13));
  v1 = (int)(uintptr_t)(*(self + 10));
  v2 = (uint32_t *)(self + 9);
  if ( v1 < 0 )
  {
    v3 = 5 * v1;
    do
    {
      if ( *v2 + v3 != 0 )
        gameswf::gradientRecord::gradientRecord((gameswf::gradientRecord::Self *)(*v2 + v3));
      v3 += 5;
    }
    while ( v3 != 0 );
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
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208EB38);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FillStyle::Destroy_ea10ed9b0  (binary VA: 0x10ed9b0)
// Original: gameswf::FillStyle::~FillStyle
// ----------------------------------------------------------------------------
void gameswf::FillStyle::Destroy_ea10ed9b0(gameswf::RefCounted::Self **self)
{
  gameswf::FillStyle::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x10eda50 (size: 325 bytes)
// Symbol:    _ZN7gameswf9FillStyleC1Ev
// Demangled: gameswf::FillStyle::FillStyle(void)
// ============================================================================
// Alternative name is '_ZN7gameswf9FillStyleC2Ev'
struct gameswf::FillStyle::Self *gameswf::FillStyle::FillStyle(gameswf::FillStyle::Self *self)
{
  unsigned int v1;
  char *v2;
  char *v3;
  char *v4;
  unsigned int v5;
  struct gameswf::FillStyle::Self *result;
  char *v7;

  v1 = 24;
  v2 = (char *)self + 12;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F678);
  *((uint32_t *)self + 1) = 0;
  *((uint8_t *)self + 8) = -1;
  *((uint8_t *)self + 9) = -1;
  *((uint8_t *)self + 10) = -1;
  *((uint8_t *)self + 11) = -1;
  if ( (((unsigned int)(uintptr_t)(self) + 12) & 1) != 0 )
  {
    v2 = (char *)self + 13;
    *((uint8_t *)self + 12) = 0;
    LOWORD(v1) = 23;
    if ( (((unsigned int)(uintptr_t)(self) + 13) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v2 = 0;
  v1 -= 2;
  v2 += 2;
LABEL_3:
  memset(v2, 0, 4 * (v1 >> 2));
  v3 = &v2[4 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
  {
    *(uint16_t *)v3 = 0;
    v3 += 2;
  }
  if ( (v1 & 1) != 0 )
    *v3 = 0;
  v4 = (char *)self + 60;
  *((uint32_t *)self + 3) = 1065353216;
  *((uint32_t *)self + 7) = 1065353216;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  v5 = 24;
  if ( (((unsigned int)(uintptr_t)(self) + 60) & 1) != 0 )
  {
    v4 = (char *)self + 61;
    *((uint8_t *)self + 60) = 0;
    LOWORD(v5) = 23;
    if ( (((unsigned int)(uintptr_t)(self) + 61) & 2) == 0 )
      goto LABEL_9;
  }
  else if ( ((uint8_t)(uintptr_t)v4 & 2) == 0 )
  {
    goto LABEL_9;
  }
  *(uint16_t *)v4 = 0;
  v5 -= 2;
  v4 += 2;
LABEL_9:
  result = nullptr;
  memset(v4, 0, 4 * (v5 >> 2));
  v7 = &v4[4 * (v5 >> 2)];
  if ( (v5 & 2) != 0 )
  {
    *(uint16_t *)v7 = 0;
    v7 += 2;
  }
  if ( (v5 & 1) != 0 )
    *v7 = 0;
  *((uint32_t *)self + 15) = 1065353216;
  *((uint32_t *)self + 19) = 1065353216;
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::FillStyle::isBitmapFill  (binary VA: 0x10edba0)
// Original: gameswf::FillStyle::isBitmapFill
// ----------------------------------------------------------------------------
bool gameswf::FillStyle::isBitmapFill(gameswf::FillStyle::Self *self)
{
  return (unsigned int)(*((uint32_t *)self + 1) - 64) <= 3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FillStyle::sampleGradient  (binary VA: 0x10edbc0)
// Original: gameswf::FillStyle::sampleGradient
// ----------------------------------------------------------------------------
gameswf::FillStyle::Self * gameswf::FillStyle::sampleGradient(gameswf::FillStyle::Self *self, int a2, int a3)
{
  uint8_t *v3;
  uint8_t v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v9;
  float v10; // xmm0_4
  uint8_t *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v3 = *(uint8_t **)(a2 + 36);
  if ( *v3 > a3 )
  {
    *(uint32_t *)self = *(uint32_t *)(v3 + 1);
    return self;
  }
  v12 = *(uint32_t *)(a2 + 40);
  if ( v12 <= 1 )
  {
LABEL_7:
    *(uint32_t *)self = *(uint32_t *)&v3[5 * v12 - 4];
    return self;
  }
  v4 = v3[5];
  v5 = 10;
  v6 = v4;
  v7 = 1;
  if ( a3 > v4 )
  {
    while ( ++v7 != v12 )
    {
      v11 = &v3[v5];
      v5 += 5;
      v4 = *v11;
      v6 = *v11;
      if ( a3 <= v6 )
      {
        v7 = 5 * v7 - 5;
        goto LABEL_10;
      }
    }
    goto LABEL_7;
  }
  v11 = v3 + 5;
  LOBYTE(v7) = 0;
LABEL_10:
  v9 = &v3[v7];
  v10 = 0.0;
  if ( *v9 != v4 )
    v10 = (float)(a3 - *v9) / (float)(v6 - *v9);
  v13[0] = -1;
  gameswf::Color::setLerp(
    (gameswf::Color::Self *)v13,
    (const gameswf::Color::Self *)(v9 + 1),
    (const gameswf::Color::Self *)(v11 + 1),
    v10);
  *(uint32_t *)self = v13[0];
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FillStyle::createGradientBitmap  (binary VA: 0x10edcf0)
// Original: gameswf::FillStyle::createGradientBitmap
// ----------------------------------------------------------------------------
gameswf::render::DummyBitmapInfo::Self * gameswf::FillStyle::createGradientBitmap(__m128 a1, gameswf::FillStyle::Self *self)
{
  int v2;
  gameswf::ImageRGBA::Self *RGBA;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  float v10; // xmm2_4
  __m128 v11;
  int v12;
  typedef int _g4_t_v13;
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
  typedef uint8_t _g4_t_v24;
  typedef gameswf::FillStyle::Self *_g4_t_v25;
  typedef uint8_t _g4_t_v26;
  typedef uint8_t _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
  typedef int _g4_t_i;
  typedef uint32_t _g4_t_v30[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v15)) > _g4_s2 ? (4u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v16)) > _g4_s3 ? (8u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v17)) > _g4_s4 ? (8u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v18)) > _g4_s5 ? (12u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v19)) > _g4_s6 ? (16u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v20)) > _g4_s7 ? (20u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v21)) > _g4_s8 ? (24u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v22)) > _g4_s9 ? (28u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v23)) > _g4_s10 ? (32u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v24)) > _g4_s11 ? (40u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v25)) > _g4_s12 ? (44u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v26)) > _g4_s13 ? (48u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v27)) > _g4_s14 ? (52u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v28)) > _g4_s15 ? (56u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_i)) > _g4_s16 ? (56u + sizeof(_g4_t_i)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v30)) > _g4_s17 ? (60u + sizeof(_g4_t_v30)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);

  v30[3] = (uint32_t)(uintptr_t)(&self);
  v25 = self;
  v2 = *((uint32_t *)self + 1);
  if ( v2 == 16 )
  {
    RGBA = (gameswf::ImageRGBA::Self *)gameswf::createRGBA((gameswf::Self *)&dword_100, 8, v16);
    v5 = "GradientLinear";
    if ( *((int *)RGBA + 3) > 0 )
    {
      v6 = 0;
      do
      {
        gameswf::FillStyle::sampleGradient((gameswf::FillStyle::Self *)v30, (int)(uintptr_t)(v25), v6);
        *(uint32_t *)v28 = HIBYTE(v30[0]);
        v27 = BYTE2(v30[0]);
        v26 = BYTE1(v30[0]);
        v24 = v30[0];
        gameswf::ImageRGBA::set_pixel(RGBA, v6, 0, v30[0], BYTE1(v30[0]), BYTE2(v30[0]), HIBYTE(v30[0]));
        gameswf::ImageRGBA::set_pixel(RGBA, v6, 1, v24, v26, v27, v28[0]);
        gameswf::ImageRGBA::set_pixel(RGBA, v6, 2, v24, v26, v27, v28[0]);
        gameswf::ImageRGBA::set_pixel(RGBA, v6, 3, v24, v26, v27, v28[0]);
        gameswf::ImageRGBA::set_pixel(RGBA, v6, 4, v24, v26, v27, v28[0]);
        gameswf::ImageRGBA::set_pixel(RGBA, v6, 5, v24, v26, v27, v28[0]);
        gameswf::ImageRGBA::set_pixel(RGBA, v6, 6, v24, v26, v27, v28[0]);
        v13 = v6++;
        gameswf::ImageRGBA::set_pixel(RGBA, v13, 7, v24, v26, v27, v28[0]);
      }
      while ( *((uint32_t *)RGBA + 3) > v6 );
      v5 = "GradientLinear";
    }
  }
  else
  {
    if ( v2 != 18 )
      return gameswf::render::createBitmapInfoRGBA(nullptr, (gameswf::ImageRGBA::Self *)&unk_1B15112);
    RGBA = (gameswf::ImageRGBA::Self *)gameswf::createRGBA((gameswf::Self *)&dword_40, 64, v16);
    v7 = *((uint32_t *)RGBA + 4);
    v5 = "GradientRadial";
    if ( v7 > 0 )
    {
      v8 = *((uint32_t *)RGBA + 3);
      for ( i = 0; i < v7; ++i )
      {
        if ( v8 > 0 )
        {
g4_m128_lane<float>(a1, 0) = (float)i;
          v9 = 0;
          while ( 1 )
          {
            v10 = (float)(v7 - 1) * 0.5;
            *(double *)g4_m128_ptr<uint64_t>(a1) = sqrt((float)((float)((float)((float)(g4_m128_lane<float>(a1, 0) - v10) / v10)
                                                        * (float)((float)(g4_m128_lane<float>(a1, 0) - v10) / v10))
                                                + (float)((float)((float)((float)v9 - v10) / v10)
                                                        * (float)((float)((float)v9 - v10) / v10))))
                                   * 255.5;
g4_m128_lane<float>(a1, 0) = *(double *)g4_m128_ptr<uint64_t>(a1);
            v11 = _mm_and_ps(a1, g4_m128_u32(0x7FFFFFFFu));
            if (g4_m128_lane<float>(v11, 0) < 8388608.0 )
            {
g4_m128_lane<float>(v11, 0) = (float)(int)g4_m128_lane<float>(a1, 0);
g4_m128_lane<float>(v11, 0) =g4_m128_lane<float>(v11, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v11, a1), 0) & 0x3F800000);
              a1 = v11;
            }
            v12 = 255;
            if ( (int)g4_m128_lane<float>(a1, 0) <= 255 )
              v12 = (int)g4_m128_lane<float>(a1, 0);
            gameswf::FillStyle::sampleGradient((gameswf::FillStyle::Self *)v30, (int)(uintptr_t)(v25), v12);
            v15 = v9++;
            gameswf::ImageRGBA::set_pixel(RGBA, v15, i, v30[0], BYTE1(v30[0]), BYTE2(v30[0]), HIBYTE(v30[0]));
            v8 = *((uint32_t *)RGBA + 3);
            v7 = *((uint32_t *)RGBA + 4);
            if ( v8 <= v9 )
              break;
g4_m128_raw(a1) = COERCE_UNSIGNED_INT((float)i);
          }
        }
      }
      v5 = "GradientRadial";
    }
  }
  gameswf::render::createBitmapInfoRGBA(RGBA, (gameswf::ImageRGBA::Self *)v5);
  (**(void (***)(gameswf::ImageRGBA::Self *, int, int, int, int, int, int, int))RGBA)(
    RGBA,
    v14,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameswf::free_internal(RGBA);
  return (gameswf::render::DummyBitmapInfo::Self *)v23;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FillStyle::apply  (binary VA: 0x10ee0e0)
// Original: gameswf::FillStyle::apply
// ----------------------------------------------------------------------------
gameswf::render::DummyBitmapInfo::Self * gameswf::FillStyle::apply(__m128 a1, gameswf::FillStyle::Self *self)
{
  int v2;
  gameswf::render::DummyBitmapInfo::Self *result;
  int v4;
  gameswf::render::DummyBitmapInfo::Self *v5;
  int v6;
  uint32_t *v7;
  gameswf::RefCounted::Self *v8;

  v2 = *((uint32_t *)self + 1);
  if ( v2 == 0 )
  {
    result = (gameswf::render::DummyBitmapInfo::Self *)gameswf::s_render_handler;
    if ( gameswf::s_render_handler != nullptr )
    {
      v4 = *((uint32_t *)self + 2);
      gameswf::s_render_handler[43] = 0;
      *((uint32_t *)result + 50) = v4;
      *((uint32_t *)result + 52) = 0;
    }
    return result;
  }
  if ( v2 == 18 || v2 == 16 )
  {
    v5 = *((gameswf::render::DummyBitmapInfo::Self **)self + 13);
    if ( v5 == nullptr )
    {
      result = gameswf::FillStyle::createGradientBitmap(a1, self);
      v5 = *((gameswf::render::DummyBitmapInfo::Self **)self + 13);
      v8 = (gameswf::RefCounted::Self *)(result);
      if ( result != v5 )
      {
        if ( v5 != nullptr )
          result = (gameswf::render::DummyBitmapInfo::Self *)gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 13));
        *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v8);
        if ( v8 == nullptr )
          return result;
        result = (gameswf::render::DummyBitmapInfo::Self *)(gameswf::RefCounted::addRef(v8));
        v5 = *((gameswf::render::DummyBitmapInfo::Self **)self + 13);
      }
      if ( v5 == nullptr )
        return result;
    }
    result = (gameswf::render::DummyBitmapInfo::Self *)gameswf::s_render_handler;
    if ( gameswf::s_render_handler != nullptr )
    {
      gameswf::s_render_handler[43] = (uintptr_t)(uintptr_t)(v5);
      *((uint32_t *)result + 44) = *((uint32_t *)self + 3);
      *((uint32_t *)result + 45) = *((uint32_t *)self + 4);
      *((uint32_t *)result + 46) = *((uint32_t *)self + 5);
      *((uint32_t *)result + 47) = *((uint32_t *)self + 6);
      *((uint32_t *)result + 48) = *((uint32_t *)self + 7);
      *((uint32_t *)result + 49) = *((uint32_t *)self + 8);
      *((uint32_t *)result + 52) = 1;
    }
    return result;
  }
  v6 = *((uint32_t *)self + 14);
  if ( v6 != 0 )
  {
    result = (gameswf::render::DummyBitmapInfo::Self *)(*(int (**)(uint32_t))(*(uint32_t *)v6 + 40))(*((uint32_t *)self + 14));
    if ( result == nullptr )
      return result;
    v2 = *((uint32_t *)self + 1);
  }
  else
  {
    result = *((gameswf::render::DummyBitmapInfo::Self **)self + 13);
    if ( result == nullptr )
      return result;
  }
  v7 = (uint32_t *)(gameswf::s_render_handler);
  if ( gameswf::s_render_handler != nullptr )
  {
    gameswf::s_render_handler[43] = (uintptr_t)(uintptr_t)(result);
    v7[44] = *((uint32_t *)self + 15);
    v7[45] = *((uint32_t *)self + 16);
    v7[46] = *((uint32_t *)self + 17);
    v7[47] = *((uint32_t *)self + 18);
    v7[48] = *((uint32_t *)self + 19);
    v7[49] = *((uint32_t *)self + 20);
    result = (gameswf::render::DummyBitmapInfo::Self *)(v2 != 66);
    v7[52] = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FillStyle::read  (binary VA: 0x10ee280)
// Original: gameswf::FillStyle::read
// ----------------------------------------------------------------------------
unsigned int gameswf::FillStyle::read(__m128 a1, gameswf::FillStyle::Self *self, gameswf::Stream::Self *a3, int a4, gameswf::MovieDefinitionSub::Self *a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, unsigned int a29, float a30, int a31, float a32, float a33)
{
  gameswf::FillStyle::Self *v33;
  uint8_t U8;
  unsigned int result;
  uint16_t U16;
  gameswf::RefCounted::Self *v37;
  gameswf::RefCounted::Self *v38;
  __m128 v39;
  __m128 v40;
  __m128 v41;
  __m128 v42;
  __m128 v43;
  __m128 v44;
  __m128 v45;
  __m128 v46;
  bool v47;
  char *v48;
  unsigned int v49;
  char *v50;
  __m128 v51;
  __m128 v52;
  uint32_t v53; // xmm1_4
  float v54; // xmm4_4
  __m128 v55;
  uint32_t v56; // xmm1_4
  __m128 v57;
  uint32_t v58; // xmm2_4
  __m128 v59;
  __m128 v60;
  float v61; // xmm4_4
  __m128 v62;
  __m128 v63;
  uint32_t v64; // xmm2_4
  __m128 v65;
  float v66; // xmm2_4
  uint32_t v67; // xmm1_4
  __m128 v68;
  __m128 v69;
  uint32_t v70; // xmm1_4
  uint32_t v71; // xmm6_4
  uint32_t v72; // xmm5_4
  int32_t v73; // xmm3_4
  char v74;
  int v75;
  int v76;
  int v77;
  uint32_t *v78;
  int v79;
  int v80;
  gameswf::gradientRecord::Self *v81;
  gameswf::render::DummyBitmapInfo::Self *GradientBitmap;
  gameswf::RefCounted::Self *v83;
  gameswf::RefCounted::Self *v84;
  gameswf::render::DummyBitmapInfo::Self *BitmapInfoEmpty;
  char v86;
  int v87;
  char *v88;
  __m128 v89;
  __m128 v90;
  uint32_t v91; // xmm2_4
  float v92; // xmm3_4
  uint32_t v93; // xmm1_4
  __m128 v94;
  __m128 v95;
  uint32_t v96; // xmm2_4
  int v97;
  gameswf::Self *v98;
  typedef gameswf::Color::Self *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef gameswf::FillStyle::Self *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef unsigned int _g4_t_v118[6];
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef float _g4_t_v121[6];
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef uint32_t _g4_t_v125;
  typedef uint32_t _g4_t_v126;
  typedef uint32_t _g4_t_v127;
  typedef uint32_t _g4_t_v128;
  typedef int32_t _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v99)) > _g4_s0 ? (0u + sizeof(_g4_t_v99)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v100)) > _g4_s1 ? (4u + sizeof(_g4_t_v100)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v101)) > _g4_s2 ? (8u + sizeof(_g4_t_v101)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v102)) > _g4_s3 ? (12u + sizeof(_g4_t_v102)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v103)) > _g4_s4 ? (16u + sizeof(_g4_t_v103)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v104)) > _g4_s5 ? (20u + sizeof(_g4_t_v104)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v105)) > _g4_s6 ? (24u + sizeof(_g4_t_v105)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v106)) > _g4_s7 ? (28u + sizeof(_g4_t_v106)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v107)) > _g4_s8 ? (32u + sizeof(_g4_t_v107)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v108)) > _g4_s9 ? (36u + sizeof(_g4_t_v108)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v109)) > _g4_s10 ? (40u + sizeof(_g4_t_v109)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v110)) > _g4_s11 ? (44u + sizeof(_g4_t_v110)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v111)) > _g4_s12 ? (44u + sizeof(_g4_t_v111)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v112)) > _g4_s13 ? (48u + sizeof(_g4_t_v112)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v113)) > _g4_s14 ? (48u + sizeof(_g4_t_v113)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v114)) > _g4_s15 ? (52u + sizeof(_g4_t_v114)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v115)) > _g4_s16 ? (52u + sizeof(_g4_t_v115)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v116)) > _g4_s17 ? (56u + sizeof(_g4_t_v116)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v117)) > _g4_s18 ? (60u + sizeof(_g4_t_v117)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v118)) > _g4_s19 ? (64u + sizeof(_g4_t_v118)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v119)) > _g4_s20 ? (88u + sizeof(_g4_t_v119)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v120)) > _g4_s21 ? (92u + sizeof(_g4_t_v120)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v121)) > _g4_s22 ? (96u + sizeof(_g4_t_v121)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v122)) > _g4_s23 ? (120u + sizeof(_g4_t_v122)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v123)) > _g4_s24 ? (124u + sizeof(_g4_t_v123)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v124)) > _g4_s25 ? (128u + sizeof(_g4_t_v124)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v125)) > _g4_s26 ? (132u + sizeof(_g4_t_v125)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v126)) > _g4_s27 ? (136u + sizeof(_g4_t_v126)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v127)) > _g4_s28 ? (140u + sizeof(_g4_t_v127)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v128)) > _g4_s29 ? (144u + sizeof(_g4_t_v128)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v129)) > _g4_s30 ? (148u + sizeof(_g4_t_v129)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v130)) > _g4_s31 ? (152u + sizeof(_g4_t_v130)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v131)) > _g4_s32 ? (156u + sizeof(_g4_t_v131)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 0u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 4u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 8u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 12u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 16u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 20u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 24u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 28u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 32u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 36u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 40u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 44u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 44u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 48u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 48u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 52u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 52u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 56u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 60u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 64u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 88u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 92u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 96u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 120u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 124u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 128u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 132u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 136u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 140u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 144u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 148u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 152u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 156u);

  v33 = self;
  U8 = gameswf::Stream::readU8(a3);
  *((uint32_t *)self + 1) = U8;
  switch ( U8 )
  {
    case 0u:
      v99 = (gameswf::Color::Self *)((gameswf::FillStyle::Self *)((char *)self + 8));
      if ( a4 <= 22 )
        return gameswf::Color::read_rgb(v99, a3);
      else
        return gameswf::Color::read_rgba(v99, a3);
    case 0x12u:
    case 0x10u:
      memset(v118, 0, sizeof(v118));
      v118[0] = 1065353216;
      v118[4] = 1065353216;
      gameswf::Matrix::read(a1, (gameswf::Matrix::Self *)v118, a3);
g4_m128_raw(v43) = 0x3D4CCCCDu;
g4_m128_raw(v44) = v118[0];
      if ( (float)(*(float *)v118 * 0.05f) < -3.4028235e38f )
      {
g4_m128_lane<int32_t>(v44, 0) = 0;
      }
      else
      {
g4_m128_lane<float>(v44, 0) = *(float *)v118 * 0.05f;
g4_m128_lane<int32_t>(v44, 0) = COERCE_UNSIGNED_INT(*(float *)v118 * 0.05f)
                        &g4_m128_lane<uint32_t>(_mm_cmple_ss(v44, *(__m128 *)&dword_1C7B5E0), 0);
      }
      v118[0] =g4_m128_lane<int32_t>(v44, 0);
g4_m128_raw(v45) = v118[1];
      if ( (float)(*(float *)&v118[1] * 0.05f) < -3.4028235e38f )
      {
g4_m128_lane<int32_t>(v45, 0) = 0;
      }
      else
      {
g4_m128_lane<float>(v45, 0) = *(float *)&v118[1] * 0.05f;
g4_m128_lane<int32_t>(v45, 0) = COERCE_UNSIGNED_INT(*(float *)&v118[1] * 0.05f)
                        &g4_m128_lane<uint32_t>(_mm_cmple_ss(v45, *(__m128 *)&dword_1C7B5E0), 0);
      }
      v118[1] =g4_m128_lane<int32_t>(v45, 0);
g4_m128_raw(v46) = v118[3];
      if ( (float)(*(float *)&v118[3] * 0.05f) < -3.4028235e38f )
      {
g4_m128_lane<int32_t>(v46, 0) = 0;
      }
      else
      {
g4_m128_lane<float>(v46, 0) = *(float *)&v118[3] * 0.05f;
g4_m128_lane<int32_t>(v46, 0) = COERCE_UNSIGNED_INT(*(float *)&v118[3] * 0.05f)
                        &g4_m128_lane<uint32_t>(_mm_cmple_ss(v46, *(__m128 *)&dword_1C7B5E0), 0);
      }
      v118[3] =g4_m128_lane<int32_t>(v46, 0);
      if ( (float)(0.05f * *(float *)&v118[4]) < -3.4028235e38f )
      {
g4_m128_lane<int32_t>(v43, 0) = 0;
      }
      else
      {
g4_m128_lane<float>(v43, 0) = 0.05f * *(float *)&v118[4];
g4_m128_lane<int32_t>(v43, 0) = COERCE_UNSIGNED_INT(0.05f * *(float *)&v118[4])
                        &g4_m128_lane<uint32_t>(_mm_cmple_ss(v43, *(__m128 *)&dword_1C7B5E0), 0);
      }
      v47 = *((uint32_t *)self + 1) == 16;
      v48 = (char *)self + 12;
      v118[4] =g4_m128_lane<int32_t>(v43, 0);
      v49 = 24;
      if ( v47 )
      {
        if ( ((uint8_t)(uintptr_t)(v48) & 1) != 0 )
        {
          *((uint8_t *)self + 12) = 0;
          v48 = (char *)self + 13;
          LOBYTE(v49) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v48) & 2) != 0 )
        {
          *(uint16_t *)v48 = 0;
          v49 -= 2;
          v48 += 2;
        }
        memset(v48, 0, 4 * (v49 >> 2));
        v88 = &v48[4 * (v49 >> 2)];
        if ( (v49 & 2) != 0 )
        {
          *(uint16_t *)v88 = 0;
          v88 += 2;
        }
        if ( (v49 & 1) != 0 )
          *v88 = 0;
g4_m128_raw(v89) = 0x43000000u;
g4_m128_raw(v90) = *((unsigned int *)self + 5);
g4_m128_lane<float>(v90, 0) =g4_m128_lane<float>(v90, 0) + 128.0;
        if (g4_m128_lane<float>(v90, 0) < -3.4028235e38f )
          v91 = 0;
        else
          v91 =g4_m128_lane<int32_t>(v90, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v90, *(__m128 *)&dword_1C7B5E0), 0);
        v92 = *((float *)self + 6);
        *((uint32_t *)self + 5) = v91;
g4_m128_lane<float>(v89, 0) = (float)(128.0 * v92) + *((float *)self + 8);
        if (g4_m128_lane<float>(v89, 0) < -3.4028235e38f )
          v93 = 0;
        else
          v93 =g4_m128_lane<int32_t>(v89, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v89, *(__m128 *)&dword_1C7B5E0), 0);
        *((uint32_t *)self + 8) = v93;
g4_m128_raw(v95) = *((unsigned int *)self + 4);
g4_m128_raw(v94) = 0x3C000000u;
g4_m128_lane<float>(v95, 0) =g4_m128_lane<float>(v95, 0) * 0.0078125;
        *((uint32_t *)self + 3) = 1006632960;
        if (g4_m128_lane<float>(v95, 0) < -3.4028235e38f )
          v96 = 0;
        else
          v96 =g4_m128_lane<int32_t>(v95, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v95, *(__m128 *)&dword_1C7B5E0), 0);
        *((uint32_t *)self + 4) = v96;
        if ( (float)(0.0078125 * v92) < -3.4028235e38f )
        {
g4_m128_lane<int32_t>(v94, 0) = 0;
        }
        else
        {
g4_m128_lane<float>(v94, 0) = 0.0078125 * v92;
g4_m128_lane<int32_t>(v94, 0) = COERCE_UNSIGNED_INT(0.0078125 * v92)
                          &g4_m128_lane<uint32_t>(_mm_cmple_ss(v94, *(__m128 *)&dword_1C7B5E0), 0);
        }
        *((uint32_t *)self + 6) =g4_m128_lane<int32_t>(v94, 0);
        *((uint32_t *)self + 7) = 1006632960;
      }
      else
      {
        if ( ((uint8_t)(uintptr_t)(v48) & 1) != 0 )
        {
          *((uint8_t *)self + 12) = 0;
          v48 = (char *)self + 13;
          LOBYTE(v49) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v48) & 2) != 0 )
        {
          *(uint16_t *)v48 = 0;
          v49 -= 2;
          v48 += 2;
        }
        memset(v48, 0, 4 * (v49 >> 2));
        v50 = &v48[4 * (v49 >> 2)];
        if ( (v49 & 2) != 0 )
        {
          *(uint16_t *)v50 = 0;
          v50 += 2;
        }
        if ( (v49 & 1) != 0 )
          *v50 = 0;
g4_m128_raw(v51) = *((unsigned int *)self + 4);
g4_m128_raw(v52) = *((unsigned int *)self + 5);
g4_m128_lane<float>(v52, 0) = (float)(g4_m128_lane<float>(v52, 0) + 32.0) + (float)(*((float *)self + 4) * 32.0);
        if (g4_m128_lane<float>(v52, 0) < -3.4028235e38f )
          v53 = 0;
        else
          v53 =g4_m128_lane<int32_t>(v52, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v52, *(__m128 *)&dword_1C7B5E0), 0);
        *((uint32_t *)self + 5) = v53;
g4_m128_raw(v55) = *((unsigned int *)self + 8);
        v54 = *((float *)self + 6);
g4_m128_lane<float>(v55, 0) = (float)(g4_m128_lane<float>(v55, 0) + 32.0) + (float)(32.0 * v54);
        if (g4_m128_lane<float>(v55, 0) < -3.4028235e38f )
          v56 = 0;
        else
          v56 =g4_m128_lane<int32_t>(v55, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v55, *(__m128 *)&dword_1C7B5E0), 0);
        *((uint32_t *)self + 8) = v56;
g4_m128_raw(v57) = 0x3B000000u;
g4_m128_lane<float>(v51, 0) =g4_m128_lane<float>(v51, 0) * 0.001953125;
        *((uint32_t *)self + 3) = 989855744;
        if (g4_m128_lane<float>(v51, 0) < -3.4028235e38f )
          v58 = 0;
        else
          v58 =g4_m128_lane<int32_t>(v51, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v51, *(__m128 *)&dword_1C7B5E0), 0);
        *((uint32_t *)self + 4) = v58;
        if ( (float)(0.001953125 * v54) < -3.4028235e38f )
        {
g4_m128_lane<int32_t>(v57, 0) = 0;
        }
        else
        {
g4_m128_lane<float>(v57, 0) = 0.001953125 * v54;
g4_m128_lane<int32_t>(v57, 0) = COERCE_UNSIGNED_INT(0.001953125 * v54)
                          &g4_m128_lane<uint32_t>(_mm_cmple_ss(v57, *(__m128 *)&dword_1C7B5E0), 0);
        }
        *((uint32_t *)self + 6) =g4_m128_lane<int32_t>(v57, 0);
        *((uint32_t *)self + 7) = 989855744;
      }
      memset(v121, 0, sizeof(v121));
      v121[0] = 1.0;
      v121[4] = 1.0;
      gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v121, (const gameswf::Matrix::Self *)v118);
g4_m128_raw(v59) = LODWORD(v121[3]);
g4_m128_raw(v60) = *((unsigned int *)self + 3);
g4_m128_raw(v63) = LODWORD(v121[3]);
      v61 = *((float *)self + 4);
g4_m128_raw(v62) = 0xFF7FFFFF;
g4_m128_lane<float>(v63, 0) = (float)(v121[3] * v61) + (float)(v121[0] *g4_m128_lane<float>(v60, 0));
      if (g4_m128_lane<float>(v63, 0) < -3.4028235e38f )
        v64 = 0;
      else
        v64 =g4_m128_lane<int32_t>(v63, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v63, *(__m128 *)&dword_1C7B5E0), 0);
      v124 = v64;
g4_m128_raw(v65) = *((unsigned int *)self + 6);
      v66 = *((float *)self + 7);
g4_m128_lane<float>(v59, 0) = (float)(v121[3] * v66) + (float)(v121[0] *g4_m128_lane<float>(v65, 0));
      if (g4_m128_lane<float>(v59, 0) < -3.4028235e38f )
        v67 = 0;
      else
        v67 =g4_m128_lane<int32_t>(v59, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v59, *(__m128 *)&dword_1C7B5E0), 0);
      v127 = v67;
g4_m128_raw(v68) = LODWORD(v121[4]);
g4_m128_raw(v69) = LODWORD(v121[4]);
g4_m128_lane<float>(v69, 0) = (float)(v121[4] * v61) + (float)(v121[1] *g4_m128_lane<float>(v60, 0));
      if (g4_m128_lane<float>(v69, 0) < -3.4028235e38f )
        v70 = 0;
      else
        v70 =g4_m128_lane<int32_t>(v69, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v69, *(__m128 *)&dword_1C7B5E0), 0);
      v125 = v70;
g4_m128_lane<float>(v68, 0) = (float)(v121[4] * v66) + (float)(v121[1] *g4_m128_lane<float>(v65, 0));
      if (g4_m128_lane<float>(v68, 0) < -3.4028235e38f )
        v71 = 0;
      else
        v71 =g4_m128_lane<int32_t>(v68, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v68, *(__m128 *)&dword_1C7B5E0), 0);
      v128 = v71;
g4_m128_lane<float>(v60, 0) = (float)((float)(g4_m128_lane<float>(v60, 0) * v121[2]) + (float)(v61 * v121[5])) + *((float *)self + 5);
      if (g4_m128_lane<float>(v60, 0) < -3.4028235e38f )
        v72 = 0;
      else
        v72 =g4_m128_lane<int32_t>(v60, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v60, *(__m128 *)&dword_1C7B5E0), 0);
      v126 = v72;
g4_m128_lane<float>(v65, 0) = (float)((float)(g4_m128_lane<float>(v65, 0) * v121[2]) + (float)(v66 * v121[5])) + *((float *)self + 8);
      if (g4_m128_lane<float>(v65, 0) < -3.4028235e38f )
      {
        v73 = 0;
      }
      else
      {
        v62 = _mm_cmple_ss(v65, *(__m128 *)&dword_1C7B5E0);
        v73 =g4_m128_lane<int32_t>(v65, 0) &g4_m128_lane<int32_t>(v62, 0);
      }
      *((uint32_t *)self + 3) = v124;
      *((uint32_t *)self + 4) = v125;
      *((uint32_t *)self + 5) = v126;
      *((uint32_t *)self + 6) = v127;
      *((uint32_t *)self + 7) = v128;
      v129 = v73;
      *((uint32_t *)self + 8) = v73;
      v74 = gameswf::Stream::readU8(a3);
      v75 = *((uint32_t *)self + 10);
      v76 = v74 & 0xF;
      v111 = v76;
      if ( (v74 & 0xF) != 0 )
      {
        v77 = *((uint32_t *)self + 11);
        if ( v76 > v77 && *((uint32_t *)self + 12) == 0 )
        {
          v97 = v76 + (v76 >> 1);
          v47 = v97 == 0;
          v116 = v97;
          *((uint32_t *)self + 11) = v97;
          v98 = *((gameswf::Self **)self + 9);
          if ( v47 )
          {
            if ( v98 != nullptr )
            {
              v108 = v75;
              v100 = 5 * v77;
              gameswf::free_internal(v98);
              v75 = v108;
            }
            *((uint32_t *)self + 9) = 0;
          }
          else
          {
            v108 = v75;
            if ( v98 != nullptr )
            {
              v102 = 0;
              *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*((gameswf::Self **)self + 9), 5 * v116, 5 * v77));
            }
            else
            {
              v100 = 0;
              *((uint32_t *)self + 9) = gameswf::malloc_internal(5 * v116);
            }
            v75 = v108;
          }
        }
      }
      v115 = 5 * v111;
      if ( v111 > v75 )
      {
        v109 = self;
        v78 = (uint32_t *)((char *)self + 36);
        v79 = 5 * v75;
        do
        {
          if ( *v78 + v79 != 0 )
            gameswf::gradientRecord::gradientRecord((gameswf::gradientRecord::Self *)(*v78 + v79));
          v79 += 5;
        }
        while ( v79 != v115 );
        v33 = self;
      }
      *((uint32_t *)v33 + 10) = v111;
      if ( v111 != 0 )
      {
        v80 = 0;
        v115 = 5 * v111;
        do
        {
          v81 = (gameswf::gradientRecord::Self *)(v80 + *((uint32_t *)v33 + 9));
          v80 += 5;
          gameswf::gradientRecord::read(v81, a3, a4);
        }
        while ( v80 != v115 );
        *((uint32_t *)v33 + 2) = *(uint32_t *)(*((uint32_t *)v33 + 9) + 1);
      }
      if ( G4_VCALL<int>(a5, 184, v100, v101, v102, -8388609, v104, v105, v106, v107, v108, v109, v111, v112, v115, v116, v118, v118[0], v118[1], v118[2], v118[3], v118[4], v118[5], v119, v120, LODWORD(v121[0]), LODWORD(v121[1]), LODWORD(v121[2]), LODWORD(v121[3]), LODWORD(v121[4]), LODWORD(v121[5]), v122, v123, v124, v125, v126, v127, v128, v129, v130, v131) != 0 )
      {
        BitmapInfoEmpty = gameswf::render::createBitmapInfoEmpty((gameswf::render::Self *)((char *)&dword_0 + 1), 1);
        v83 = *((gameswf::RefCounted::Self **)v33 + 13);
        v84 = (gameswf::RefCounted::Self *)(BitmapInfoEmpty);
        if ( BitmapInfoEmpty != (gameswf::render::DummyBitmapInfo::Self *)(uintptr_t)(v83) )
          goto LABEL_76;
      }
      else
      {
        GradientBitmap = gameswf::FillStyle::createGradientBitmap(v62, v33);
        v83 = *((gameswf::RefCounted::Self **)v33 + 13);
        v84 = (gameswf::RefCounted::Self *)(GradientBitmap);
        if ( GradientBitmap != (gameswf::render::DummyBitmapInfo::Self *)(uintptr_t)(v83) )
        {
LABEL_76:
          if ( v83 != nullptr )
            gameswf::RefCounted::dropRef(v83);
          v83 = nullptr;
          *((uint32_t *)v33 + 13) = (uint32_t)(uintptr_t)(v84);
          if ( v84 != nullptr )
          {
            gameswf::RefCounted::addRef(v84);
            v83 = *((gameswf::RefCounted::Self **)v33 + 13);
          }
        }
      }
      return G4_VCALL<int>(a5, 180, v83);
    case 0x13u:
      v86 = gameswf::Stream::readU8(a3);
      if ( (v86 & 0xF) != 0 )
      {
        v113 = v86 & 0xF;
        v87 = 0;
        do
        {
          ++v87;
          gameswf::Stream::readU8(a3);
          v124 = -1;
          gameswf::Color::read_rgba((gameswf::Color::Self *)&v124, a3);
        }
        while ( v87 != v113 );
      }
      return gameswf::Stream::readU8(a3);
    default:
      result = U8 - 64;
      if ( result <= 3 )
      {
        U16 = gameswf::Stream::readU16(a3);
        v37 = (gameswf::RefCounted::Self *)G4_VCALL<int>(a5, 152, U16, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v112, v114, v116, v117, v118[0], v118[1], v118[2], v118[3], v118[4], v118[5], v119, v120, LODWORD(v121[0]), LODWORD(v121[1]), LODWORD(v121[2]), LODWORD(v121[3]), LODWORD(v121[4]), LODWORD(v121[5]), v122, v123, v124, v125, v126, v127, v128, v129, v130, v131);
        v38 = *((gameswf::RefCounted::Self **)self + 14);
        if ( v37 != v38 )
        {
          if ( v38 != nullptr )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 14));
          *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v37);
          if ( v37 != nullptr )
            gameswf::RefCounted::addRef(v37);
        }
        memset(&a29, 0, 0x18u);
        *(float *)&a29 = 1.0;
        a33 = 1.0;
        gameswf::Matrix::read(a1, (gameswf::Matrix::Self *)&a29, a3);
g4_m128_raw(v39) = 0x3D4CCCCDu;
g4_m128_raw(v40) = a29;
        if ( (float)(*(float *)&a29 * 0.05f) < -3.4028235e38f )
        {
g4_m128_lane<int32_t>(v40, 0) = 0;
        }
        else
        {
g4_m128_lane<float>(v40, 0) = *(float *)&a29 * 0.05f;
g4_m128_lane<int32_t>(v40, 0) = COERCE_UNSIGNED_INT(*(float *)&a29 * 0.05f)
                          &g4_m128_lane<uint32_t>(_mm_cmple_ss(v40, *(__m128 *)&dword_1C7B5E0), 0);
        }
        a29 =g4_m128_lane<uint32_t>(v40, 0);
g4_m128_raw(v41) = LODWORD(a30);
        if ( (float)(a30 * 0.05f) < -3.4028235e38f )
        {
g4_m128_lane<int32_t>(v41, 0) = 0;
        }
        else
        {
g4_m128_lane<float>(v41, 0) = a30 * 0.05f;
g4_m128_lane<int32_t>(v41, 0) = COERCE_UNSIGNED_INT(a30 * 0.05f) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v41, *(__m128 *)&dword_1C7B5E0), 0);
        }
        a30 =g4_m128_lane<float>(v41, 0);
g4_m128_raw(v42) = LODWORD(a32);
        if ( (float)(a32 * 0.05f) < -3.4028235e38f )
        {
g4_m128_lane<int32_t>(v42, 0) = 0;
        }
        else
        {
g4_m128_lane<float>(v42, 0) = a32 * 0.05f;
g4_m128_lane<int32_t>(v42, 0) = COERCE_UNSIGNED_INT(a32 * 0.05f) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v42, *(__m128 *)&dword_1C7B5E0), 0);
        }
        a32 =g4_m128_lane<float>(v42, 0);
        if ( (float)(0.05f * a33) < -3.4028235e38f )
        {
g4_m128_lane<int32_t>(v39, 0) = 0;
        }
        else
        {
g4_m128_lane<float>(v39, 0) = 0.05f * a33;
g4_m128_lane<int32_t>(v39, 0) = COERCE_UNSIGNED_INT(0.05f * a33) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v39, *(__m128 *)&dword_1C7B5E0), 0);
        }
        a33 =g4_m128_lane<float>(v39, 0);
        return gameswf::Matrix::setInverse((gameswf::FillStyle::Self *)((char *)self + 60), (const gameswf::Matrix::Self *)&a29);
      }
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FillStyle::setLerp  (binary VA: 0x10eec80)
// Original: gameswf::FillStyle::setLerp
// ----------------------------------------------------------------------------
gameswf::Matrix::Self * gameswf::FillStyle::setLerp(gameswf::FillStyle::Self *self, const gameswf::FillStyle::Self *a2, const gameswf::FillStyle::Self *a3, float a4)
{
  char v4; // si
  char v5; // bp
  char v6; // si
  const gameswf::FillStyle::Self *v7;
  const gameswf::FillStyle::Self *v8;
  int v9;
  float v10; // xmm1_4
  gameswf::RefCounted::Self *v11;
  gameswf::RefCounted::Self *v12;
  gameswf::RefCounted::Self *v13;
  typedef gameswf::Matrix::Self *_g4_t_v15;
  typedef gameswf::Matrix::Self *_g4_t_v16;
  typedef gameswf::Matrix::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef const gameswf::FillStyle::Self *_g4_t_v19;
  typedef const gameswf::FillStyle::Self *_g4_t_v20;
  typedef const gameswf::FillStyle::Self *_g4_t_v21;
  typedef const gameswf::FillStyle::Self *_g4_t_v22;
  typedef const gameswf::FillStyle::Self *_g4_t_v23;
  typedef const gameswf::FillStyle::Self *_g4_t_v24;
  typedef const gameswf::FillStyle::Self *_g4_t_v25;
  typedef const gameswf::FillStyle::Self *_g4_t_v26;
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[32];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v20)) > _g4_s5 ? (32u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v22)) > _g4_s7 ? (32u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v23)) > _g4_s8 ? (36u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v24)) > _g4_s9 ? (36u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v25)) > _g4_s10 ? (36u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v26)) > _g4_s11 ? (36u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v27)) > _g4_s12 ? (56u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v28)) > _g4_s13 ? (60u + sizeof(_g4_t_v28)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);

  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  v4 = *((uint8_t *)a3 + 9);
  v28[0] = *((uint8_t *)a3 + 8);
  v28[1] = v4;
  v5 = *((uint8_t *)a2 + 8);
  v28[2] = *((uint8_t *)a3 + 10);
  v6 = *((uint8_t *)a2 + 9);
  v28[3] = *((uint8_t *)a3 + 11);
  v27[0] = v5;
  v27[1] = v6;
  v27[2] = *((uint8_t *)a2 + 10);
  v27[3] = *((uint8_t *)a2 + 11);
  gameswf::Color::setLerp(
    (gameswf::FillStyle::Self *)((char *)self + 8),
    (const gameswf::Color::Self *)v27,
    (const gameswf::Color::Self *)v28,
    a4);
  gameswf::Matrix::setLerp(
    (gameswf::FillStyle::Self *)((char *)self + 12),
    (const gameswf::FillStyle::Self *)((char *)a2 + 12),
    (const gameswf::FillStyle::Self *)((char *)a3 + 12),
    a4);
  v7 = a2;
  v8 = a3;
  if ( *((int *)self + 10) > 0 )
  {
    v9 = 0;
    v18 = 0;
    do
    {
      v10 = (float)((float)0 * 65536.0) + (float)*(uint8_t *)(*((uint32_t *)v7 + 9) + v9);
      *(uint8_t *)(*((uint32_t *)self + 9) + v9) = (int)(float)((float)(v10 + 0.5)
                                                          + (float)((float)((float)((float)((float)0 * 65536.0)
                                                                                  + (float)*(uint8_t *)(*((uint32_t *)v8 + 9) + v9))
                                                                          - v10)
                                                                  * a4));
      v17 = (gameswf::Matrix::Self *)(v9 + *((uint32_t *)v8 + 9) + 1);
      v16 = (gameswf::Matrix::Self *)(v9 + *((uint32_t *)v7 + 9) + 1);
      v23 = v7;
      v19 = v8;
      v15 = (gameswf::Matrix::Self *)(v9 + *((uint32_t *)self + 9) + 1);
      v9 += 5;
      gameswf::Color::setLerp(v15, v16, v17, a4);
      ++v18;
      v7 = v23;
      v8 = v19;
    }
    while ( *((uint32_t *)self + 10) > v18 );
  }
  v11 = *((gameswf::RefCounted::Self **)self + 13);
  if ( v11 != nullptr )
  {
    v24 = v7;
    v20 = v8;
    gameswf::RefCounted::dropRef(v11);
    *((uint32_t *)self + 13) = 0;
    v8 = v20;
    v7 = v24;
  }
  v12 = *((gameswf::RefCounted::Self **)v7 + 14);
  v13 = *((gameswf::RefCounted::Self **)self + 14);
  if ( v12 != v13 )
  {
    if ( v13 != nullptr )
    {
      v25 = v7;
      v21 = v8;
      gameswf::RefCounted::dropRef(v13);
      v8 = v21;
      v7 = v25;
    }
    *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v12);
    if ( v12 != nullptr )
    {
      v26 = v7;
      v22 = v8;
      gameswf::RefCounted::addRef(v12);
      v8 = v22;
      v7 = v26;
    }
  }
  return gameswf::Matrix::setLerp(
           (gameswf::FillStyle::Self *)((char *)self + 60),
           (const gameswf::FillStyle::Self *)((char *)v7 + 60),
           (const gameswf::FillStyle::Self *)((char *)v8 + 60),
           a4);
}


