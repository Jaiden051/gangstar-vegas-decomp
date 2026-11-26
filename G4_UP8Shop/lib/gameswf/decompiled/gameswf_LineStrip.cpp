#include "Core/Utils/DecompTypes.h"
#include "gameswf_LineStrip.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_LineStrip.cpp
// Library: gameswf | Module: gameswf_LineStrip
// Binary Address Span: 0x10dbb80 .. 0x10dbd10 (3 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x10dbb80 (size: 39 bytes)
// Symbol:    _ZN7gameswf9LineStripC2Ev
// Demangled: gameswf::LineStrip::LineStrip(void)
// ============================================================================
// Alternative name is '_ZN7gameswf9LineStripC1Ev'
struct gameswf::LineStrip::Self *gameswf::LineStrip::Construct(gameswf::LineStrip::Self *self)
{
  *(uint32_t *)self = -1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: gameswf::LineStrip::Construct  (binary VA: 0x10dbbb0)
// Original: gameswf::LineStrip::LineStrip
// ----------------------------------------------------------------------------
gameswf::LineStrip::Self * gameswf::LineStrip::Construct(gameswf::LineStrip::Self *self, int a2, const gameswf::Point::Self *src, int a4)
{
  gameswf::LineStrip::Self *result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  float v9; // xmm0_4
  float v10; // xmm2_4
  int v11;
  float v12; // xmm1_4
  float v13; // xmm3_4
  float *v14;
  float v15; // xmm4_4

  *(uint32_t *)self = a2;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  if ( a4 > 0 )
  {
    v5 = a4 + (a4 >> 1);
    *((uint32_t *)self + 3) = v5;
    v6 = gameswf::malloc_internal(8 * v5);
    *((uint32_t *)self + 1) = v6;
    v7 = 0;
    while ( 1 )
    {
      v8 = (uint32_t *)(v6 + 8 * v7);
      if ( v8 != nullptr )
      {
        *v8 = 0;
        v8[1] = 0;
      }
      if ( ++v7 == a4 )
        break;
      v6 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 2) = a4;
    memcpy(*((void **)self + 1), src, 8 * a4);
    *((uint32_t *)self + 5) = 2139095039;
    *((uint32_t *)self + 7) = 2139095039;
    v9 = 3.4028235e38f;
    v10 = 3.4028235e38f;
    *((uint32_t *)self + 6) = -8388609;
    *((uint32_t *)self + 8) = -8388609;
    v11 = *((uint32_t *)self + 1);
    v12 = -3.4028235e38f;
    v13 = -3.4028235e38f;
    result = nullptr;
    do
    {
      v14 = (float *)(v11 + 8 * (uint32_t)(uintptr_t)(result));
      result = (gameswf::LineStrip::Self *)((char *)result + 1);
      v15 = v14[1];
      v9 = fminf(v9, v15);
      v10 = fminf(v10, *v14);
      v13 = fmaxf(v13, *v14);
      v12 = fmaxf(v12, v15);
      *((float *)self + 7) = v9;
      *((float *)self + 5) = v10;
      *((float *)self + 6) = v13;
      *((float *)self + 8) = v12;
    }
    while ( result != (gameswf::LineStrip::Self *)a4 );
  }
  else
  {
    *((uint32_t *)self + 2) = a4;
    result = (gameswf::LineStrip::Self *)memcpy(nullptr, src, 8 * a4);
    *((uint32_t *)self + 5) = 2139095039;
    *((uint32_t *)self + 6) = -8388609;
    *((uint32_t *)self + 7) = 2139095039;
    *((uint32_t *)self + 8) = -8388609;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::LineStrip::display  (binary VA: 0x10dbd10)
// Original: gameswf::LineStrip::display
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::LineStrip::display(gameswf::LineStrip::Self *self, const gameswf::BaseLineStyle::Self *a2, float a3)
{
  int v3;
  gameswf::Self *result;
  typedef int _g4_t_v5[3];
  typedef int16_t _g4_t_v6;
  typedef int16_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (22u + sizeof(_g4_t_v7)) > _g4_s2 ? (22u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v9)) > _g4_s4 ? (28u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v10)) > _g4_s5 ? (32u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v11)) > _g4_s6 ? (36u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v12)) > _g4_s7 ? (40u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v13)) > _g4_s8 ? (44u + sizeof(_g4_t_v13)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 22u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  G4_VCALL<void>(a2, 8, LODWORD(a3));
  v3 = *((uint32_t *)self + 1);
  LOWORD(v5[0]) = 2;
  v5[1] = v3;
  v6 = *((uint32_t *)self + 2);
  v9 = *((uint32_t *)self + 5);
  v10 = *((uint32_t *)self + 6);
  v11 = *((uint32_t *)self + 7);
  v12 = *((uint32_t *)self + 8);
  v5[2] = 0;
  v7 = 0;
  v8 = 0;
  v13 = 0;
  result = (gameswf::Self *)gameswf::s_render_handler;
  if ( gameswf::s_render_handler != nullptr )
    return gameswf::RenderHandler::draw((gameswf::Root::Self **)gameswf::s_render_handler, (gameswf::Self *)v5);
  return result;
}


