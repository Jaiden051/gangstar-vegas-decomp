#include "Core/Utils/DecompTypes.h"
#include "glitch_render_handler_glitch.h"

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::open  (binary VA: 0x10c7ae0)
// Original: gameswf::render_handler_glitch::open
// ----------------------------------------------------------------------------
void gameswf::render_handler_glitch::open()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::getOrientation  (binary VA: 0x10c7af0)
// Original: gameswf::render_handler_glitch::getOrientation
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::getOrientation()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::clearFrameBuffer  (binary VA: 0x10c7b00)
// Original: gameswf::render_handler_glitch::clearFrameBuffer
// ----------------------------------------------------------------------------
void gameswf::render_handler_glitch::clearFrameBuffer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::readFrameBuffer  (binary VA: 0x10c7b10)
// Original: gameswf::render_handler_glitch::readFrameBuffer
// ----------------------------------------------------------------------------
void gameswf::render_handler_glitch::readFrameBuffer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::setRenderMode  (binary VA: 0x10c7b20)
// Original: gameswf::render_handler_glitch::setRenderMode
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::setRenderMode(int a1, int a2)
{
  *(uint32_t *)(a1 + 820) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::setMatrixImpl  (binary VA: 0x10c7b40)
// Original: gameswf::render_handler_glitch::setMatrixImpl
// ----------------------------------------------------------------------------
gameswf::render_handler_glitch::Self * gameswf::render_handler_glitch::setMatrixImpl(gameswf::render_handler_glitch::Self *self, const gameswf::Matrix::Self *a2)
{
  *((uint32_t *)self + 597) = *(uint32_t *)a2;
  *((uint32_t *)self + 598) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 599) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 600) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 601) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 602) = *((uint32_t *)a2 + 5);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::setCxFormImpl  (binary VA: 0x10c7b80)
// Original: gameswf::render_handler_glitch::setCxFormImpl
// ----------------------------------------------------------------------------
gameswf::render_handler_glitch::Self * gameswf::render_handler_glitch::setCxFormImpl(gameswf::render_handler_glitch::Self *self, const gameswf::CxForm::Self *a2)
{
  *((uint32_t *)self + 603) = *(uint32_t *)a2;
  *((uint32_t *)self + 604) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 605) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 606) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 607) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 608) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 609) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 610) = *((uint32_t *)a2 + 7);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::lineStyleWidthImpl  (binary VA: 0x10c7bd0)
// Original: gameswf::render_handler_glitch::lineStyleWidthImpl
// ----------------------------------------------------------------------------
gameswf::render_handler_glitch::Self * gameswf::render_handler_glitch::lineStyleWidthImpl(gameswf::render_handler_glitch::Self *self, float a2)
{
  *((float *)self + 711) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::isVisible  (binary VA: 0x10c7bf0)
// Original: gameswf::render_handler_glitch::isVisible
// ----------------------------------------------------------------------------
bool gameswf::render_handler_glitch::isVisible(gameswf::render_handler_glitch::Self *self, const gameswf::Rect::Self *a2)
{
  bool result;

  result = false;
  if ( *(float *)a2 <= *((float *)self + 595) && *((float *)a2 + 1) >= 0.0 && *((float *)a2 + 3) >= 0.0 )
    return *((float *)self + 596) >= *((float *)a2 + 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::beginDisplayCallback  (binary VA: 0x10c7c30)
// Original: gameswf::render_handler_glitch::beginDisplayCallback
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::beginDisplayCallback(gameswf::render_handler_glitch::Self *self)
{
  return gameswf::RenderHandler::flush(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::lineStyleColorImpl  (binary VA: 0x10c7c60)
// Original: gameswf::render_handler_glitch::lineStyleColorImpl
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::lineStyleColorImpl(int a1, unsigned int a2)
{
  unsigned int v2;
  char v3; // edx^3
  unsigned int v4;
  int result;
  typedef unsigned int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  gameswf::CxForm::transform(&v6, (float *)(a1 + 2412), a2);
  v2 = v6;
  *(uint32_t *)(a1 + 2772) = 1;
  v3 = HIBYTE(v2);
  *(uint8_t *)(a1 + 2776) = v2;
  v4 = HIWORD(v2);
  result = BYTE1(v2);
  *(uint8_t *)(a1 + 2777) = result;
  *(uint8_t *)(a1 + 2778) = v4;
  *(uint8_t *)(a1 + 2779) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::fillStyleBitmapImpl  (binary VA: 0x10c7cf0)
// Original: gameswf::render_handler_glitch::fillStyleBitmapImpl
// ----------------------------------------------------------------------------
bool gameswf::render_handler_glitch::fillStyleBitmapImpl(uint32_t *a1, int a2, int a3, uint32_t *a4, int a5)
{
  int v5;
  int v6;
  float v7; // xmm1_4
  bool v8;
  bool result;

  v5 = (int)(uintptr_t)(&a1[19 * a2 + 655]);
  *(uint32_t *)v5 = 3 - (a5 == 0);
  *(uint32_t *)(v5 + 8) = a3;
  *(uint32_t *)(v5 + 12) = *a4;
  *(uint32_t *)(v5 + 16) = a4[1];
  *(uint32_t *)(v5 + 20) = a4[2];
  *(uint32_t *)(v5 + 24) = a4[3];
  *(uint32_t *)(v5 + 28) = a4[4];
  *(uint32_t *)(v5 + 32) = a4[5];
  *(uint32_t *)(v5 + 36) = a1[603];
  *(uint32_t *)(v5 + 40) = a1[604];
  *(uint32_t *)(v5 + 44) = a1[605];
  *(uint32_t *)(v5 + 48) = a1[606];
  *(uint32_t *)(v5 + 52) = a1[607];
  *(uint32_t *)(v5 + 56) = a1[608];
  *(uint32_t *)(v5 + 60) = a1[609];
  *(uint32_t *)(v5 + 64) = a1[610];
  gameswf::CxForm::clamp((gameswf::CxForm::Self *)&a1[19 * a2 + 664]);
  v6 = (int)(float)(*(float *)&a1[19 * a2 + 670] * 255.0);
  v7 = *(float *)&a1[19 * a2 + 666];
  *(uint8_t *)(v5 + 6) = (int)(float)(*(float *)(v5 + 52) * 255.0);
  v8 = *(float *)&a1[19 * a2 + 665] > 0.0;
  *(uint8_t *)(v5 + 4) = (int)(float)(255.0 * *(float *)&a1[19 * a2 + 664]);
  *(uint8_t *)(v5 + 7) = v6;
  *(uint8_t *)(v5 + 5) = (int)(float)(v7 * 255.0);
  result = true;
  if ( !v8 && *(float *)&a1[19 * a2 + 667] <= 0.0 && *(float *)&a1[19 * a2 + 669] <= 0.0 )
    result = *(float *)&a1[19 * a2 + 671] > 0.0;
  LOBYTE(a1[19 * a2 + 672]) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::endDisplayCallback  (binary VA: 0x10c7e20)
// Original: gameswf::render_handler_glitch::endDisplayCallback
// ----------------------------------------------------------------------------
uint32_t * gameswf::render_handler_glitch::endDisplayCallback(gameswf::render_handler_glitch::Self *self)
{
  glitch::video::IVideoDriver::setTransform(*((uint8_t **)self + 90), 0, (uint32_t *)self + 152, 0);
  glitch::video::IVideoDriver::setTransform(*((uint8_t **)self + 90), 1, (uint32_t *)self + 168, 0);
  return glitch::video::IVideoDriver::setTransform(*((uint8_t **)self + 90), 2, (uint32_t *)self + 184, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::endDisplay  (binary VA: 0x10c7ec0)
// Original: gameswf::render_handler_glitch::endDisplay
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::endDisplay(gameswf::render_handler_glitch::Self *self)
{
  int result;

  gameswf::RenderHandler::flush(self);
  G4_VCALL<void>(self, 132);
  glitch::video::IVideoDriver::setTransform(*((uint8_t **)self + 90), 0, (uint32_t *)self + 100, 0);
  glitch::video::IVideoDriver::setTransform(*((uint8_t **)self + 90), 1, (uint32_t *)self + 116, 0);
  glitch::video::IVideoDriver::setTransform(*((uint8_t **)self + 90), 2, (uint32_t *)self + 132, 0);
  (*(void (**)(uint32_t, char *))(***(uint32_t ***)(*((uint32_t *)self + 90) + 300) + 12))(
    **(uint32_t **)(*((uint32_t *)self + 90) + 300),
    (char *)self + 592);
  (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)self + 90) + 156))(
    *((uint32_t *)self + 90),
    2,
    *((uint8_t *)self + 2369));
  result = *((uint32_t *)self + 90);
  *(uint32_t *)(result + 36) = *((uint32_t *)self + 91);
  *(uint32_t *)(result + 40) = *((uint32_t *)self + 92);
  *(uint32_t *)(result + 44) = *((uint32_t *)self + 93);
  *(uint32_t *)(result + 48) = *((uint32_t *)self + 94);
  *(uint32_t *)(result + 52) = *((uint32_t *)self + 95);
  *(uint32_t *)(result + 56) = *((uint32_t *)self + 96);
  *(uint32_t *)(result + 60) = *((uint32_t *)self + 97);
  *(uint32_t *)(result + 64) = *((uint32_t *)self + 98);
  *(uint32_t *)(result + 68) = *((uint32_t *)self + 99);
  *(uint8_t *)(result + 780) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::fillStyleColorImpl  (binary VA: 0x10c8120)
// Original: gameswf::render_handler_glitch::fillStyleColorImpl
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::fillStyleColorImpl(gameswf::render_handler_glitch::Self *self, int a2, const gameswf::Color::Self *a3)
{
  char *v3;
  int v4;
  float v5; // xmm1_4
  float v6; // xmm0_4
  bool v7;
  bool v8;
  unsigned int v9;
  char v10; // edx^3
  unsigned int v11;
  int result;
  typedef int16_t _g4_t_v13;
  typedef uint32_t _g4_t_v14[16];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v14)) > _g4_s1 ? (28u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  memset(&v14[3], 0, 0x18u);
  v14[3] = 1065353216;
  v14[7] = 1065353216;
  v3 = (char *)self + 76 * a2 + 2608;
  *((uint32_t *)v3 + 3) = 2;
  *((uint32_t *)v3 + 5) = (uint32_t)(uintptr_t)((char *)self + 2528);
  *((uint32_t *)v3 + 7) = v14[4];
  *((uint32_t *)v3 + 8) = v14[5];
  *((uint32_t *)v3 + 9) = v14[6];
  v4 = v14[8];
  *((uint32_t *)v3 + 6) = 1065353216;
  *((uint32_t *)v3 + 10) = 1065353216;
  *((uint32_t *)v3 + 11) = v4;
  *((uint32_t *)v3 + 12) = *((uint32_t *)self + 603);
  *((uint32_t *)v3 + 13) = *((uint32_t *)self + 604);
  *((uint32_t *)v3 + 14) = *((uint32_t *)self + 605);
  *((uint32_t *)v3 + 15) = *((uint32_t *)self + 606);
  *((uint32_t *)v3 + 16) = *((uint32_t *)self + 607);
  *((uint32_t *)v3 + 17) = *((uint32_t *)self + 608);
  *((uint32_t *)v3 + 18) = *((uint32_t *)self + 609);
  *((uint32_t *)v3 + 19) = *((uint32_t *)self + 610);
  gameswf::CxForm::clamp((gameswf::render_handler_glitch::Self *)((char *)self + 76 * a2 + 2656));
  v13 = (int)(float)(*((float *)self + 19 * a2 + 670) * 255.0);
  v5 = *((float *)self + 19 * a2 + 666);
  v3[18] = (int)(float)(*((float *)v3 + 16) * 255.0);
  v6 = 255.0 * *((float *)self + 19 * a2 + 664);
  v3[19] = v13;
  v7 = true;
  v3[16] = (int)v6;
  v8 = *((float *)self + 19 * a2 + 665) > 0.0;
  v3[17] = (int)(float)(v5 * 255.0);
  if ( !v8 && *((float *)self + 19 * a2 + 667) <= 0.0 && *((float *)self + 19 * a2 + 669) <= 0.0 )
    v7 = *((float *)self + 19 * a2 + 671) > 0.0;
  *((uint8_t *)self + 76 * a2 + 2688) = v7;
  gameswf::CxForm::transform(v14, (float *)self + 603, *(uint32_t *)a3);
  v9 = v14[0];
  *((uint32_t *)self + 19 * a2 + 655) = 1;
  v10 = HIBYTE(v9);
  *((uint8_t *)self + 76 * a2 + 2624) = v9;
  v11 = HIWORD(v9);
  result = BYTE1(v9);
  *((uint8_t *)self + 76 * a2 + 2625) = result;
  *((uint8_t *)self + 76 * a2 + 2626) = v11;
  *((uint8_t *)self + 76 * a2 + 2627) = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::setBufferCapacity  (binary VA: 0x10c82c0)
// Original: gameswf::render_handler_glitch::setBufferCapacity
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::setBufferCapacity(int a1, int a2, int a3)
{
  int result;
  bool v4; // cc
  char *v5;
  char *v6;
  int v7;
  int v8;
  void *v9;

  result = a2;
  v4 = a3 <= *(uint32_t *)(a1 + 828);
  *(uint32_t *)(a1 + 816) = a2;
  if ( v4 )
  {
    if ( a3 <= *(uint32_t *)(a1 + 832) )
      return result;
LABEL_8:
    v9 = (void *)opNewArray(2 * a3);
    *(uint32_t *)(a1 + 884) = (uint32_t)(uintptr_t)(v9);
    result = glitch::video::IBuffer::reset(*(glitch::video::IBuffer::Self **)(a1 + 856), 2 * a3, v9, true);
    *(uint32_t *)(a1 + 832) = a3;
    return result;
  }
  v5 = (char *)opNewArray(24 * a3);
  if ( a3 != 0 )
  {
    v6 = v5 + 12;
    v7 = 0;
    do
    {
      v8 = v6 - (v5 + 12);
      ++v7;
      *(uint32_t *)&v5[v8] = 0;
      *(uint32_t *)&v5[v8 + 4] = 0;
      *(uint32_t *)&v5[v8 + 8] = 0;
      *(uint32_t *)v6 = 0;
      *((uint32_t *)v6 + 1) = 0;
      *((uint32_t *)v6 + 2) = 0;
      v6 += 24;
    }
    while ( a3 != v7 );
  }
  *(uint32_t *)(a1 + 880) = (uint32_t)(uintptr_t)(v5);
  result = glitch::video::IBuffer::reset(*(glitch::video::IBuffer::Self **)(a1 + 852), 24 * a3, v5, true);
  v4 = a3 <= *(uint32_t *)(a1 + 832);
  *(uint32_t *)(a1 + 828) = a3;
  if ( !v4 )
    goto LABEL_8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::getPostProcessTexture  (binary VA: 0x10c9530)
// Original: gameswf::render_handler_glitch::getPostProcessTexture
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::getPostProcessTexture(gameswf::render_handler_glitch::Self *self)
{
  gameswf::render_handler_glitch::Self *v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int j;
  int i;
  char *v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  char *v12;
  int *v13;
  bool v14;
  int v16;
  gameswf::Self *v17;
  int v18;
  int v19;
  int v20;
  volatile int32_t *v21;
  int v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v30[4];
  typedef uint32_t _g4_t_v31[9];
  typedef int _g4_t_v32[2];
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef gameswf::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef gameswf::render_handler_glitch::Self **_g4_t_v38;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v25)) > _g4_s2 ? (4u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v26)) > _g4_s3 ? (4u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v27)) > _g4_s4 ? (4u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v28)) > _g4_s5 ? (4u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v29)) > _g4_s6 ? (8u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v30)) > _g4_s7 ? (12u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v31)) > _g4_s8 ? (28u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v32)) > _g4_s9 ? (64u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v33)) > _g4_s10 ? (72u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (73u + sizeof(_g4_t_v34)) > _g4_s11 ? (73u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v35)) > _g4_s12 ? (76u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v36)) > _g4_s13 ? (84u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v37)) > _g4_s14 ? (88u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v38)) > _g4_s15 ? (100u + sizeof(_g4_t_v38)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 73u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 100u);

  v38 = &self;
  v1 = self;
  v2 = *((uint32_t *)self + 581);
  if ( v2 <= 0 )
  {
    v18 = *((uint32_t *)self + 577) - *((uint32_t *)self + 575);
    for ( i = 1; v18 > i; i *= 2 )
      ;
    v19 = *((uint32_t *)self + 576) - *((uint32_t *)self + 574);
    for ( j = 1; v19 > j; j *= 2 )
      ;
  }
  else
  {
    v3 = *((int **)self + 580);
    v29 = *v3;
    v4 = *v3;
    if ( *(uint8_t *)(*v3 + 65) == 0 )
      goto LABEL_17;
    v5 = 0;
    while ( ++v5 != v2 )
    {
      v4 = v3[v5];
      if ( *(uint8_t *)(v4 + 65) == 0 )
        goto LABEL_17;
    }
    j = *(uint32_t *)(v29 + 16);
    i = *(uint32_t *)(v29 + 20);
  }
  v31[2] = i;
  v31[1] = j;
  LOWORD(v37) = -1;
  v31[0] = 6;
  BYTE2(v37) = 127;
  HIBYTE(v37) |= 1u;
  memset(&v31[5], 0, 16);
  v31[3] = j;
  v32[0] = 0;
  v32[1] = 0;
  v33 = 1;
  v34 = 0;
  v31[4] = i;
  gameswf::String::resize((gameswf::String::Self *)&v33, 11);
  if ( v33 == -1 )
  {
    v8 = v35;
    v9 = v36;
  }
  else
  {
    v8 = (char *)v33;
    v9 = (gameswf::Self *)&v34;
  }
  gameswf::Strcpy_s(v9, v8, (gameswf::Self *)"PostProcess");
  v37 |= 0x7FFFFFu;
  v4 = G4_VCALL<int>(v1, 8, v31);
  if ( *((uint32_t *)v1 + 584) == 0 )
  {
    (*(void (**)(uint32_t *))(**((uint32_t **)v1 + 90) + 100))(v30);
    v20 = v30[0];
    if ( v30[0] != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v30[0] + 4), 1u);
    v21 = *((volatile int32_t **)v1 + 584);
    *((uint32_t *)v1 + 584) = v20;
    if ( v21 != nullptr && __sync_fetch_and_add(v21 + 1, 0xFFFFFFFF) == 1 )
    {
      v26 = v21;
      G4_VCALL<void>(v21, 8);
      G4_VCALL<void>(v26, 4);
    }
    v22 = v30[0];
    if ( v30[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v30[0] + 4), 0xFFFFFFFF) == 1 )
    {
      v27 = v22;
      G4_VCALL<void>(v22, 8);
      G4_VCALL<void>(v27, 4);
    }
    glitch::video::IMultipleRenderTarget::setTargetInternal(*(uint32_t *)(v4 + 72), 3, (int *)v1 + 584, 0xFFu, 1);
  }
  v10 = *((uint32_t *)v1 + 581);
  v23 = *((uint32_t *)v1 + 582);
  v11 = v10 + 1;
  if ( v10 + 1 <= v23 || *((uint32_t *)v1 + 583) != 0 )
  {
    v12 = *((char **)v1 + 580);
  }
  else
  {
    v16 = v11 + (v11 >> 1);
    *((uint32_t *)v1 + 582) = v16;
    if ( v16 != 0 )
    {
      v28 = v10 + 1;
      if ( *((uint32_t *)v1 + 580) != 0 )
        v12 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v1 + 580), 4 * v16, 4 * v23);
      else
        v12 = (char *)gameswf::malloc_internal(4 * v16);
      *((uint32_t *)v1 + 580) = (uint32_t)(uintptr_t)(v12);
      v10 = *((uint32_t *)v1 + 581);
      v11 = v28;
    }
    else
    {
      v17 = *((gameswf::Self **)v1 + 580);
      if ( v17 != nullptr )
      {
        v25 = v10 + 1;
        gameswf::free_internal(v17);
        v10 = *((uint32_t *)v1 + 581);
        v11 = v25;
      }
      *((uint32_t *)v1 + 580) = 0;
      v12 = nullptr;
    }
  }
  v13 = (int *)&v12[4 * v10];
  if ( v13 != nullptr )
  {
    *v13 = v4;
    if ( v4 != 0 )
    {
      v24 = v11;
      gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v4);
      v11 = v24;
    }
  }
  v14 = v33 == -1;
  *((uint32_t *)v1 + 581) = v11;
  if ( v14 && (v37 & 0x1000000) != 0 )
    gameswf::free_internal(v36);
  sub_5ED480(v32);
LABEL_17:
  *(uint8_t *)(v4 + 65) = 1;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::Destroy  (binary VA: 0x10c98e0)
// Original: gameswf::render_handler_glitch::~render_handler_glitch
// ----------------------------------------------------------------------------
void gameswf::render_handler_glitch::Destroy(gameswf::render_handler_glitch::Self *self)
{
  gameswf::render_handler_glitch::Self *v1;
  int v2;
  gameswf::RenderHandler::Self *v3;
  int v4;
  int i;
  int v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  gameswf::Self *v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  bool v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  gameswf::Self *v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  gameswf::Self *v23;
  int v24;
  gameswf::RenderHandler::Self *v25;
  gameswf::Self **v26;
  int v27;
  int v28;
  uint32_t *v29;
  gameswf::Self *v30;
  gameswf::Self *v31;
  int v32;
  gameswf::Self *v33;
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  uint32_t *v38;
  int v39;
  int v40;
  gameswf::Self *v41;
  int v42;
  int v43;
  volatile int32_t *v44;
  int v45;
  bool v46;
  int v47;
  int j;
  int v49;
  gameswf::Self *v50;
  gameswf::render_handler_glitch::Self *v51;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v52;
  glitch::video::CMaterial::Self *v53;
  int v54;
  int v55;
  uint32_t *v56;
  int v57;
  gameswf::Self *v58;
  glitch::video::CVertexStreams::Self *v59;
  volatile int32_t *v60;
  volatile int32_t *v61;
  gameswf::render_handler_glitch::Self *v62;
  char *v63;
  gameswf::render_handler_glitch::Self *v64;
  volatile int32_t *v65;
  gameswf::render_handler_glitch::Self *v66;
  char *v67;
  volatile int32_t *v68;
  uint32_t *v69;
  volatile int32_t *v70;
  int v71;
  uint32_t *v72;
  int v73;
  uint32_t *v74;
  int v75;
  int v76;
  uint32_t *v77;
  int v78;
  uint32_t *v79;
  typedef void *_g4_t_v80;
  typedef char *_g4_t_v81;
  typedef char *_g4_t_v82;
  typedef gameswf::render_handler_glitch::Self *_g4_t_v83;
  typedef gameswf::render_handler_glitch::Self *_g4_t_v84;
  typedef gameswf::RenderHandler::Self *_g4_t_v85;
  typedef gameswf::RenderHandler::Self *_g4_t_v86;
  typedef gameswf::RenderHandler::Self *_g4_t_v87;
  typedef gameswf::render_handler_glitch::Self *_g4_t_v88;
  typedef int _g4_t_v89[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v80)) > _g4_s0 ? (4u + sizeof(_g4_t_v80)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v81)) > _g4_s1 ? (20u + sizeof(_g4_t_v81)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v82)) > _g4_s2 ? (20u + sizeof(_g4_t_v82)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v83)) > _g4_s3 ? (24u + sizeof(_g4_t_v83)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v84)) > _g4_s4 ? (24u + sizeof(_g4_t_v84)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v85)) > _g4_s5 ? (28u + sizeof(_g4_t_v85)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v86)) > _g4_s6 ? (28u + sizeof(_g4_t_v86)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v87)) > _g4_s7 ? (28u + sizeof(_g4_t_v87)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v88)) > _g4_s8 ? (32u + sizeof(_g4_t_v88)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v89)) > _g4_s9 ? (60u + sizeof(_g4_t_v89)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 4u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 20u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 20u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 24u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 24u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 28u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 28u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 28u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 32u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 60u);

  v1 = self;
  v2 = *((uint32_t *)self + 581);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EF28);
  v3 = (gameswf::RenderHandler::Self *)((gameswf::render_handler_glitch::Self *)((char *)self + 2320));
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v78 = 4 * v2;
      do
      {
        v79 = (uint32_t *)(*(uint32_t *)v3 + v78);
        if ( v79 != nullptr )
          *v79 = 0;
        v78 += 4;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    v4 = v2;
    for ( i = 0; i != v4; ++i )
    {
      if ( *(uint32_t *)(*(uint32_t *)v3 + 4 * i) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*(uint32_t *)v3 + 4 * i));
    }
    v1 = self;
  }
  v6 = *((uint32_t *)v1 + 585);
  *((uint32_t *)v1 + 581) = 0;
  if ( v6 != 0 )
    *(uint8_t *)(v6 + 65) = 0;
  v7 = *((uint32_t *)v1 + 586);
  *((uint32_t *)v1 + 585) = 0;
  if ( v7 != 0 )
    *(uint8_t *)(v7 + 65) = 0;
  *((uint32_t *)v1 + 586) = 0;
  *((uint32_t *)v1 + 587) = 0;
  *((uint32_t *)v1 + 632) = ((uint32_t)(uintptr_t)&off_208EEC8);
  v8 = *((uint32_t *)v1 + 649);
  if ( v8 != 0 )
  {
    *((uint32_t *)v1 + 649) = 0;
    v89[0] = v8;
    sub_5ED480(v89);
  }
  v9 = *((volatile int32_t **)v1 + 651);
  if ( v9 != nullptr )
  {
    *((uint32_t *)v1 + 651) = 0;
    if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v9, 8);
      G4_VCALL<void>(v9, 4);
    }
  }
  v10 = *((gameswf::Self **)v1 + 652);
  if ( v10 != nullptr )
  {
    gameswf::MemBuf::Destroy(*((gameswf::MemBuf::Self **)v1 + 652));
    v80 = nullptr;
    gameswf::free_internal(v10);
    *((uint32_t *)v1 + 652) = 0;
  }
  v11 = *((volatile int32_t **)v1 + 651);
  if ( v11 != nullptr && __sync_fetch_and_add(v11 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v11, 8, v80);
    G4_VCALL<void>(v11, 4);
  }
  v12 = *((volatile int32_t **)v1 + 650);
  if ( v12 != nullptr && __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v12, 8);
    G4_VCALL<void>(v12, 4);
  }
  sub_5ED480((int *)v1 + 649);
  v13 = *((uint8_t *)v1 + 2568) == 0xFF;
  *((uint32_t *)v1 + 632) = ((uint32_t)(uintptr_t)&off_208EE08);
  if ( v13 && (*((uint8_t *)v1 + 2587) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)v1 + 645));
  gameswf::RefCounted::Destroy((gameswf::render_handler_glitch::Self *)((char *)v1 + 2528));
  gameswf::ImageRGBA::Destroy((gameswf::render_handler_glitch::Self *)((char *)v1 + 2504));
  v14 = *((uint32_t *)v1 + 623);
  if ( v14 < 0 )
  {
    v15 = 24 * v14;
    do
    {
      v16 = (uint32_t *)(*((uint32_t *)v1 + 622) + v15);
      if ( v16 != nullptr )
      {
        *v16 = 0;
        v16[1] = 0;
        v16[2] = 0;
        v16[3] = 0;
        v16[4] = 0;
        v16[5] = 0;
      }
      v15 += 24;
      ++v14;
    }
    while ( v14 != 0 );
  }
  v17 = *((uint32_t *)v1 + 625);
  *((uint32_t *)v1 + 623) = 0;
  if ( v17 == 0 )
  {
    v18 = *((gameswf::Self **)v1 + 622);
    *((uint32_t *)v1 + 624) = 0;
    if ( v18 != nullptr )
      gameswf::free_internal(v18);
    *((uint32_t *)v1 + 622) = 0;
  }
  gameswf::TriangleIntersector::Destroy((gameswf::render_handler_glitch::Self *)((char *)v1 + 2484));
  v19 = *((uint32_t *)v1 + 618);
  if ( v19 < 0 )
  {
    v20 = 8 * v19;
    do
    {
      v21 = (uint32_t *)(*((uint32_t *)v1 + 617) + v20);
      if ( v21 != nullptr )
      {
        *v21 = 0;
        v21[1] = 0;
      }
      v20 += 8;
      ++v19;
    }
    while ( v19 != 0 );
  }
  v22 = *((uint32_t *)v1 + 620);
  *((uint32_t *)v1 + 618) = 0;
  if ( v22 == 0 )
  {
    v23 = *((gameswf::Self **)v1 + 617);
    *((uint32_t *)v1 + 619) = 0;
    if ( v23 != nullptr )
      gameswf::free_internal(v23);
    *((uint32_t *)v1 + 617) = 0;
  }
  v24 = *((uint32_t *)v1 + 614);
  v85 = (gameswf::RenderHandler::Self *)v24;
  if ( v24 <= 0 )
  {
    if ( v24 < 0 )
    {
      v75 = *((uint32_t *)v1 + 614);
      v76 = 16 * v24;
      do
      {
        v77 = (uint32_t *)(*((uint32_t *)v1 + 613) + v76);
        if ( v77 != nullptr )
        {
          *v77 = 0;
          v77[1] = 0;
          v77[2] = 0;
          v77[3] = 0;
        }
        v76 += 16;
        ++v75;
      }
      while ( v75 != 0 );
    }
  }
  else
  {
    v25 = nullptr;
    do
    {
      v26 = (gameswf::Self **)(*((uint32_t *)v1 + 613) + 16 * (uint32_t)(uintptr_t)(v25));
      v27 = (int)(uintptr_t)(v26[1]);
      if ( v27 < 0 )
      {
        v28 = 8 * v27;
        do
        {
          v29 = (uint32_t *)((char *)*v26 + v28);
          if ( v29 != nullptr )
          {
            *v29 = 0;
            v29[1] = 0;
          }
          v28 += 8;
          ++v27;
        }
        while ( v27 != 0 );
      }
      v30 = v26[3];
      v26[1] = nullptr;
      if ( v30 == nullptr )
      {
        v31 = *v26;
        v13 = *v26 == nullptr;
        v26[2] = nullptr;
        if ( !v13 )
          gameswf::free_internal(v31);
        *v26 = nullptr;
      }
      v25 = (gameswf::RenderHandler::Self *)((char *)v25 + 1);
    }
    while ( v25 != v85 );
    v3 = (gameswf::RenderHandler::Self *)((gameswf::render_handler_glitch::Self *)((char *)self + 2320));
  }
  v32 = *((uint32_t *)v1 + 616);
  *((uint32_t *)v1 + 614) = 0;
  if ( v32 == 0 )
  {
    v33 = *((gameswf::Self **)v1 + 613);
    *((uint32_t *)v1 + 615) = 0;
    if ( v33 != nullptr )
      gameswf::free_internal(v33);
    *((uint32_t *)v1 + 613) = 0;
  }
  v34 = *((uint32_t *)v1 + 589);
  if ( v34 <= 0 )
  {
    if ( v34 < 0 )
    {
      v73 = 12 * v34;
      do
      {
        v74 = (uint32_t *)(*((uint32_t *)v1 + 588) + v73);
        if ( v74 != nullptr )
        {
          *v74 = 0;
          v74[1] = 0;
          v74[2] = 0;
        }
        v73 += 12;
        ++v34;
      }
      while ( v34 != 0 );
    }
  }
  else
  {
    v86 = v3;
    v35 = 0;
    v36 = (uint32_t *)((char *)v1 + 2352);
    v88 = v1;
    v37 = 0;
    do
    {
      v38 = (uint32_t *)(*v36 + v35);
      if ( *v38 != 0 )
        *(uint8_t *)(*v38 + 65) = 0;
      v39 = v38[1];
      *v38 = 0;
      if ( v39 != 0 )
        *(uint8_t *)(v39 + 65) = 0;
      ++v37;
      v35 += 12;
      v38[1] = 0;
      v38[2] = 0;
    }
    while ( v37 != v34 );
    v3 = v86;
    v1 = v88;
  }
  v40 = *((uint32_t *)v1 + 591);
  *((uint32_t *)v1 + 589) = 0;
  if ( v40 == 0 )
  {
    v41 = *((gameswf::Self **)v1 + 588);
    *((uint32_t *)v1 + 590) = 0;
    if ( v41 != nullptr )
      gameswf::free_internal(v41);
    *((uint32_t *)v1 + 588) = 0;
  }
  v42 = *((uint32_t *)v1 + 585);
  if ( v42 != 0 )
    *(uint8_t *)(v42 + 65) = 0;
  v43 = *((uint32_t *)v1 + 586);
  *((uint32_t *)v1 + 585) = 0;
  if ( v43 != 0 )
    *(uint8_t *)(v43 + 65) = 0;
  v44 = *((volatile int32_t **)v1 + 584);
  *((uint32_t *)v1 + 586) = 0;
  *((uint32_t *)v1 + 587) = 0;
  if ( v44 != nullptr && __sync_fetch_and_add(v44 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v44, 8);
    G4_VCALL<void>(v44, 4);
    v45 = *((uint32_t *)v1 + 581);
    v46 = v45 < 0;
    if ( v45 > 0 )
    {
LABEL_79:
      v87 = (gameswf::RenderHandler::Self *)(v1);
      v47 = v45;
      for ( j = 0; j != v47; ++j )
      {
        if ( *(uint32_t *)(*(uint32_t *)v3 + 4 * j) != 0 )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*(uint32_t *)v3 + 4 * j));
      }
      v1 = (gameswf::render_handler_glitch::Self *)(v87);
      goto LABEL_84;
    }
  }
  else
  {
    v45 = *((uint32_t *)v1 + 581);
    v46 = v45 < 0;
    if ( v45 > 0 )
      goto LABEL_79;
  }
  if ( v46 )
  {
    v71 = 4 * v45;
    do
    {
      v72 = (uint32_t *)(*(uint32_t *)v3 + v71);
      if ( v72 != nullptr )
        *v72 = 0;
      v71 += 4;
      ++v45;
    }
    while ( v45 != 0 );
  }
LABEL_84:
  v49 = *((uint32_t *)v1 + 583);
  *((uint32_t *)v1 + 581) = 0;
  if ( v49 == 0 )
  {
    v50 = *((gameswf::Self **)v1 + 580);
    *((uint32_t *)v1 + 582) = 0;
    if ( v50 != nullptr )
      gameswf::free_internal(v50);
    *((uint32_t *)v1 + 580) = 0;
  }
  sub_5ED480((int *)v1 + 565);
  sub_5ED480((int *)v1 + 518);
  sub_5ED480((int *)v1 + 517);
  sub_5ED480((int *)v1 + 516);
  sub_5ED480((int *)v1 + 515);
  sub_5ED480((int *)v1 + 514);
  v51 = (gameswf::render_handler_glitch::Self *)((char *)v1 + 2056);
  do
  {
    v53 = *((glitch::video::CMaterial::Self **)v51 - 9);
    if ( v53 != nullptr )
    {
      v13 = *(uint32_t *)v53 == 2;
      _mm_mfence();
      if ( v13 )
        glitch::video::CMaterial::removeFromRootSceneNode(v53);
      if ( __sync_fetch_and_add((volatile int32_t *)v53, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v53);
        gll_operator_delete_arr((int)(uintptr_t)(v53));
      }
    }
    v52 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ****)v51 - 10);
    if ( v52 != nullptr && __sync_fetch_and_add((volatile int32_t *)v52, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterialRenderer::Destroy(v52);
      gll_operator_delete_arr((int)(uintptr_t)(v52));
    }
    v51 = (gameswf::render_handler_glitch::Self *)((char *)v51 - 40);
  }
  while ( (gameswf::render_handler_glitch::Self *)((char *)v1 + 896) != v51 );
  v54 = *((uint32_t *)v1 + 217);
  if ( v54 < 0 )
  {
    v55 = 20 * v54;
    do
    {
      v56 = (uint32_t *)(*((uint32_t *)v1 + 216) + v55);
      if ( v56 != nullptr )
      {
        *v56 = 4;
        v56[1] = 0;
        v56[2] = 0;
        v56[3] = 0;
        v56[4] = 0;
      }
      v55 += 20;
      ++v54;
    }
    while ( v54 != 0 );
  }
  v57 = *((uint32_t *)v1 + 219);
  *((uint32_t *)v1 + 217) = 0;
  if ( v57 == 0 )
  {
    v58 = *((gameswf::Self **)v1 + 216);
    *((uint32_t *)v1 + 218) = 0;
    if ( v58 != nullptr )
      gameswf::free_internal(v58);
    *((uint32_t *)v1 + 216) = 0;
  }
  v59 = *((glitch::video::CVertexStreams::Self **)v1 + 215);
  if ( v59 != nullptr && __sync_fetch_and_add((volatile int32_t *)v59, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v59);
    gll_operator_delete_arr((int)(uintptr_t)(v59));
  }
  v60 = *((volatile int32_t **)v1 + 214);
  if ( v60 != nullptr && __sync_fetch_and_add(v60 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v60, 8);
    G4_VCALL<void>(v60, 4);
  }
  v61 = *((volatile int32_t **)v1 + 213);
  if ( v61 != nullptr && __sync_fetch_and_add(v61 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v61, 8);
    G4_VCALL<void>(v61, 4);
  }
  v62 = (gameswf::render_handler_glitch::Self *)((char *)v1 + 844);
  v63 = (char *)v1 + 848;
  v64 = (gameswf::render_handler_glitch::Self *)((char *)v1 + 852);
  do
  {
    v65 = *(volatile int32_t **)&v63[v64 - (gameswf::render_handler_glitch::Self *)((char *)v1 + 852)];
    if ( v65 != nullptr && __sync_fetch_and_add(v65 + 1, 0xFFFFFFFF) == 1 )
    {
      v83 = v62;
      v81 = v63;
      G4_VCALL<void>(v65, 8);
      G4_VCALL<void>(v65, 4);
      v62 = v83;
      v63 = v81;
    }
    v64 = (gameswf::render_handler_glitch::Self *)((char *)v64 - 4);
  }
  while ( v62 != v64 );
  v66 = v62;
  v67 = (char *)v62 - 4;
  do
  {
    v68 = *(volatile int32_t **)&v67[v66 - v62];
    if ( v68 != nullptr && __sync_fetch_and_add(v68 + 1, 0xFFFFFFFF) == 1 )
    {
      v84 = v62;
      v82 = v67;
      G4_VCALL<void>(v68, 8);
      G4_VCALL<void>(v68, 4);
      v62 = v84;
      v67 = v82;
    }
    v66 = (gameswf::render_handler_glitch::Self *)((char *)v66 - 4);
  }
  while ( (gameswf::render_handler_glitch::Self *)((char *)v1 + 836) != v66 );
  v69 = *((uint32_t **)v1 + 90);
  if ( v69 != nullptr )
  {
    v70 = (volatile int32_t *)((uint32_t *)((char *)v69 + *(uint32_t *)(*v69 - 12)));
    if ( __sync_fetch_and_add(v70 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v70, 8);
      G4_VCALL<void>(v70, 4);
    }
  }
  gameswf::RenderHandler::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::Destroy_ea10ca2a0  (binary VA: 0x10ca2a0)
// Original: gameswf::render_handler_glitch::~render_handler_glitch
// ----------------------------------------------------------------------------
void gameswf::render_handler_glitch::Destroy_ea10ca2a0(gameswf::render_handler_glitch::Self *self)
{
  gameswf::render_handler_glitch::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::createBitmapInfoParams  (binary VA: 0x10ca710)
// Original: gameswf::render_handler_glitch::createBitmapInfoParams
// ----------------------------------------------------------------------------
gameswf::render_handler_glitch::Self * gameswf::render_handler_glitch::createBitmapInfoParams(gameswf::Self **self, const boost::intrusive_ptr<glitch::video::ITexture::Self> *a2, int *a3)
{
  gameswf::render_handler_glitch::Self *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  gameswf::Self *v9;
  char v10;
  int v11;
  char *v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  int v15;
  unsigned int v16;
  gameswf::Self *v18;
  int v19;
  int v20;
  int v21;
  gameswf::Self *v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef gameswf::Self *_g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef gameswf::Self *_g4_t_v29;
  typedef gameswf::Self *_g4_t_v30;
  typedef gameswf::Self *_g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef gameswf::Self *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef gameswf::Self *_g4_t_v35;
  typedef char _g4_t_v36;
  typedef uint8_t _g4_t_v37[3];
  typedef int _g4_t_v38;
  typedef gameswf::Self *_g4_t_v39;
  typedef unsigned int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (14u + sizeof(_g4_t_v23)) > _g4_s0 ? (14u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v24)) > _g4_s1 ? (28u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v26)) > _g4_s3 ? (36u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v27)) > _g4_s4 ? (40u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v28)) > _g4_s5 ? (44u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v29)) > _g4_s6 ? (48u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v30)) > _g4_s7 ? (52u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v31)) > _g4_s8 ? (56u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v32)) > _g4_s9 ? (60u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v33)) > _g4_s10 ? (64u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v34)) > _g4_s11 ? (68u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v35)) > _g4_s12 ? (72u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v36)) > _g4_s13 ? (76u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (77u + sizeof(_g4_t_v37)) > _g4_s14 ? (77u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v38)) > _g4_s15 ? (80u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v39)) > _g4_s16 ? (88u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v40)) > _g4_s17 ? (92u + sizeof(_g4_t_v40)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 14u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 77u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);

  v3 = (gameswf::render_handler_glitch::Self *)self;
  v4 = *a3;
  if ( *a3 != 0 )
  {
    v5 = *(gameswf::Self **)(v4 + 20);
    v27 = *(gameswf::Self **)(v4 + 24);
    v26 = v5;
    LOWORD(v40) = -1;
    v25 = 4;
    v28 = nullptr;
    v29 = nullptr;
    v30 = nullptr;
    v31 = nullptr;
    v32 = nullptr;
    v33 = nullptr;
    v34 = 0;
    v35 = nullptr;
    v36 = 1;
    v37[0] = 0;
    BYTE2(v40) = 127;
    HIBYTE(v40) |= 1u;
    v24 = v4;
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1u);
    v6 = v24;
    v24 = v34;
    v34 = v6;
    sub_5ED480(&v24);
    v7 = v27;
    *self = (gameswf::Self *)v25;
    *(self + 1) = v26;
    *(self + 3) = v28;
    *(self + 5) = v30;
    *(self + 6) = v31;
    *(self + 7) = v32;
    *(self + 8) = v33;
    v8 = v34;
    *(self + 2) = v7;
    v9 = v29;
    *(self + 9) = (gameswf::Self *)v8;
    *(self + 4) = v9;
    if ( v8 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
    *(self + 10) = v35;
    *((uint8_t *)self + 44) = 1;
    v10 = v36;
    *((uint8_t *)self + 45) = 0;
    if ( v10 == -1 )
      v11 = v38 - 1;
    else
      v11 = v10 - 1;
    gameswf::String::resize((gameswf::String::Self *)(self + 11), v11);
    LOBYTE(v12) = *((uint8_t *)self + 44);
    v13 = (gameswf::Self *)v37;
    if ( v36 == -1 )
      v13 = v39;
    if ( (uint8_t)(uintptr_t)v12 == 0xFF )
    {
      v12 = (char *)*(self + 12);
      v14 = *(self + 14);
    }
    else
    {
      v12 = (char *)(char)(uintptr_t)v12;
      v14 = (gameswf::Self *)((char *)self + 45);
    }
    gameswf::Strcpy_s(v14, v12, v13);
    if ( (uint8_t *)(v40 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v23 = v36;
      if ( v36 == -1 )
      {
        v18 = v39;
        v19 = v38 - 1;
      }
      else
      {
        v18 = (gameswf::Self *)v37;
        v19 = v36 - 1;
      }
      v15 = 5381;
      if ( v19 > 0 )
      {
        do
        {
          --v19;
          v20 = 33 * v15;
          v21 = *((uint8_t *)v18 + v19) + 32;
          if ( (uint8_t)(*((uint8_t *)v18 + v19) - 65) > 0x19u )
            v21 = *((uint8_t *)v18 + v19);
          v15 = v20 ^ v21;
        }
        while ( v19 != 0 );
        v3 = (gameswf::render_handler_glitch::Self *)self;
        v15 = v15 << 9 >> 9;
      }
      v40 = v15 & 0x7FFFFF | v40 & 0xFF800000;
    }
    else
    {
      v23 = v36;
      v15 = (int)(v40 << 9) >> 9;
    }
    v16 = v15 & 0x7FFFFF | *((uint32_t *)v3 + 15) & 0xFF800000;
    *((uint32_t *)v3 + 15) = v16;
    *((uint8_t *)v3 + 62) = BYTE2(v16) & 0x7F;
    *((uint8_t *)v3 + 63) = HIBYTE(v16) | 1;
    if ( v23 == -1 && (v40 & 0x1000000) != 0 )
      gameswf::free_internal(v39);
    sub_5ED480(&v34);
    return v3;
  }
  else
  {
    v22 = *(self + 15);
    *self = nullptr;
    v22 = (gameswf::Self *)((unsigned int)(uintptr_t)(v22) | 0x7FFFFF);
    *(self + 1) = nullptr;
    *(self + 15) = v22;
    *(self + 2) = nullptr;
    *(self + 3) = nullptr;
    *((uint8_t *)self + 63) = HIBYTE(v22) | 1;
    *(self + 4) = nullptr;
    *(self + 5) = nullptr;
    *(self + 6) = nullptr;
    *(self + 7) = nullptr;
    *(self + 8) = nullptr;
    *(self + 9) = nullptr;
    *(self + 10) = nullptr;
    *((uint8_t *)self + 44) = 1;
    *((uint8_t *)self + 45) = 0;
    *((uint8_t *)self + 62) = BYTE2(v22) & 0x7F;
    return (gameswf::render_handler_glitch::Self *)self;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::setContext  (binary VA: 0x10caa60)
// Original: gameswf::render_handler_glitch::setContext
// ----------------------------------------------------------------------------
gameswf::PlayerContext::Self * gameswf::render_handler_glitch::setContext(gameswf::render_handler_glitch::Self *self, gameswf::PlayerContext::Self *a2)
{
  gameswf::PlayerContext::Self *result;
  int v3;
  int v4;
  int v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);

  result = a2;
  *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 223) = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr )
  {
    v3 = 0;
    v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 36) + 52) + 68);
    v6 = v4;
    if ( v4 != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1u);
      v3 = v6;
    }
    v5 = *((uint32_t *)self + 515);
    *((uint32_t *)self + 515) = v3;
    v6 = v5;
    return (gameswf::PlayerContext::Self *)sub_5ED480(&v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::createBitmapInfo  (binary VA: 0x10caad0)
// Original: gameswf::render_handler_glitch::createBitmapInfo
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::render_handler_glitch::createBitmapInfo(int a1, int a2)
{
  int v2;
  gameswf::RefCounted::Self *v3;

  v2 = *(uint32_t *)(a1 + 360);
  v3 = (gameswf::RefCounted::Self *)opNew(0x5Cu);
  gameswf::BitmapInfoImpl::BitmapInfoImpl(v3, v2, a2);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::flushImpl  (binary VA: 0x10cac40)
// Original: gameswf::render_handler_glitch::flushImpl
// ----------------------------------------------------------------------------
gameswf::render_handler_glitch::Self * gameswf::render_handler_glitch::flushImpl(gameswf::render_handler_glitch::Self *self)
{
  gameswf::render_handler_glitch::Self *result;

  result = self;
  if ( *((uint32_t *)self + 217) != 0 )
    return (gameswf::render_handler_glitch::Self *)sub_10C6160((int)(uintptr_t)(self) + 816);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::draw  (binary VA: 0x10caff0)
// Original: gameswf::render_handler_glitch::draw
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::draw(gameswf::BufferedRenderer::Self *a1, uint32_t *a2, int a3)
{
  gameswf::BufferedRenderer::Self *v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  gameswf::BufferedRenderer::Self *v11;
  int v12;
  int v13;
  int v14;
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  __m128 v20;
  __m128 v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  int v25;
  float *v26;
  int v27;
  int v28;
  int result;
  gameswf::BufferedRenderer::Self *v30;
  int v31;
  int v32;
  int v33;
  gameswf::RenderHandler::Self *v34;
  int v35;
  int v36;
  unsigned int *v37;
  unsigned int v38;
  char v39;
  signed int v40;
  signed int v41;
  int v42;
  uint8_t *v43;
  int v44;
  int v45;
  gameswf::Self *v46;
  int v47;
  gameswf::Self *v48;
  typedef signed int _g4_t_v49;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v52;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v55;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v56;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v57;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v58;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef gameswf::RenderHandler::Self *_g4_t_v63;
  typedef gameswf::RenderHandler::Self *_g4_t_v64;
  typedef gameswf::RenderHandler::Self *_g4_t_v65;
  typedef char _g4_t_v66;
  typedef gameswf::RenderHandler::Self *_g4_t_v67;
  typedef float _g4_t_v68;
  typedef int _g4_t_v69;
  typedef char _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v72;
  typedef float _g4_t_v73;
  typedef int _g4_t_v74;
  typedef uint32_t *_g4_t_v75;
  typedef char _g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef int _g4_t_v78[4];
  typedef gameswf::Point::Self *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef gameswf::BufferedRenderer::Self **_g4_t_v87;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v49)) > _g4_s0 ? (0u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (116u + sizeof(_g4_t_v50)) > _g4_s1 ? (116u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (116u + sizeof(_g4_t_v51)) > _g4_s2 ? (116u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (116u + sizeof(_g4_t_v52)) > _g4_s3 ? (116u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (116u + sizeof(_g4_t_v53)) > _g4_s4 ? (116u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (120u + sizeof(_g4_t_v54)) > _g4_s5 ? (120u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (120u + sizeof(_g4_t_v55)) > _g4_s6 ? (120u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (124u + sizeof(_g4_t_v56)) > _g4_s7 ? (124u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (124u + sizeof(_g4_t_v57)) > _g4_s8 ? (124u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v58)) > _g4_s9 ? (124u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (124u + sizeof(_g4_t_v59)) > _g4_s10 ? (124u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v60)) > _g4_s11 ? (128u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v61)) > _g4_s12 ? (128u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v62)) > _g4_s13 ? (128u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (132u + sizeof(_g4_t_v63)) > _g4_s14 ? (132u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (132u + sizeof(_g4_t_v64)) > _g4_s15 ? (132u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (132u + sizeof(_g4_t_v65)) > _g4_s16 ? (132u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v66)) > _g4_s17 ? (132u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v67)) > _g4_s18 ? (136u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v68)) > _g4_s19 ? (136u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v69)) > _g4_s20 ? (136u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v70)) > _g4_s21 ? (136u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v71)) > _g4_s22 ? (144u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v72)) > _g4_s23 ? (144u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v73)) > _g4_s24 ? (144u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v74)) > _g4_s25 ? (144u + sizeof(_g4_t_v74)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v75)) > _g4_s26 ? (144u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v76)) > _g4_s27 ? (144u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v77)) > _g4_s28 ? (148u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v78)) > _g4_s29 ? (152u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v79)) > _g4_s30 ? (168u + sizeof(_g4_t_v79)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v80)) > _g4_s31 ? (172u + sizeof(_g4_t_v80)) : _g4_s31,
    _g4_s33 = (176u + sizeof(_g4_t_v81)) > _g4_s32 ? (176u + sizeof(_g4_t_v81)) : _g4_s32,
    _g4_s34 = (180u + sizeof(_g4_t_v82)) > _g4_s33 ? (180u + sizeof(_g4_t_v82)) : _g4_s33,
    _g4_s35 = (184u + sizeof(_g4_t_v83)) > _g4_s34 ? (184u + sizeof(_g4_t_v83)) : _g4_s34,
    _g4_s36 = (188u + sizeof(_g4_t_v84)) > _g4_s35 ? (188u + sizeof(_g4_t_v84)) : _g4_s35,
    _g4_s37 = (192u + sizeof(_g4_t_v85)) > _g4_s36 ? (192u + sizeof(_g4_t_v85)) : _g4_s36,
    _g4_s38 = (196u + sizeof(_g4_t_v86)) > _g4_s37 ? (196u + sizeof(_g4_t_v86)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v87)) > _g4_s38 ? (208u + sizeof(_g4_t_v87)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 116u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 116u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 116u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 120u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 120u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 124u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 124u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 124u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 128u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 128u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 128u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 132u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 132u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 132u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 132u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 136u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 136u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 136u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 136u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 144u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 144u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 144u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 144u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 144u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 144u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 148u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 152u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 168u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 172u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 176u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 180u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 184u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 188u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 192u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 196u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 208u);

  v87 = &a1;
  v3 = a1;
  v4 = a2;
  v60 = a3;
  if ( a3 != 0 )
  {
    v5 = a2[5];
    v67 = (gameswf::RenderHandler::Self *)a2[13];
    v63 = (gameswf::RenderHandler::Self *)v5;
    if ( v67 != (gameswf::RenderHandler::Self *)v5 )
    {
      if ( v5 != 0 )
      {
        v44 = a2[14];
        if ( v5 > v44 && a2[15] == 0 )
        {
          v45 = v5 + (v5 >> 1);
          a2[14] = v45;
          if ( v45 != 0 )
          {
            v48 = (gameswf::Self *)v4[12];
            v53 = v3;
            if ( v48 != nullptr )
              v4[12] = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v48, 24 * v45, 24 * v44));
            else
              v4[12] = gameswf::malloc_internal(24 * v45);
            v3 = v53;
          }
          else
          {
            v46 = (gameswf::Self *)v4[12];
            if ( v46 != nullptr )
            {
              v52 = v3;
              gameswf::free_internal(v46);
              v3 = v52;
            }
            v4[12] = 0;
          }
        }
      }
      if ( (int)(uintptr_t)(v67) < (int)(uintptr_t)(v63) )
      {
        v71 = v4;
        v56 = v3;
        v6 = 24 * (uint32_t)(uintptr_t)(v67);
        do
        {
          v7 = (uint8_t *)(v71[12] + v6);
          if ( v7 != nullptr )
          {
            memset(v7, 0, 0x18u);
            v7[8] = -1;
            v7[9] = -1;
            v7[10] = -1;
            v7[11] = -1;
          }
          v67 = (gameswf::RenderHandler::Self *)((char *)v67 + 1);
          v6 += 24;
        }
        while ( v67 != v63 );
        v3 = v56;
        v4 = v71;
      }
      v8 = v4[9];
      v4[13] = (uint32_t)(uintptr_t)(v63);
      if ( v8 > 0 )
      {
        v9 = 0;
        v57 = nullptr;
        v72 = v3;
        do
        {
          v10 = v4[8];
          v11 = v57;
          v57 = (gameswf::BufferedRenderer::Self *)((char *)v57 + 1);
          v12 = *(uint32_t *)(v10 + 8 * (uint32_t)(uintptr_t)(v11));
          v13 = *(uint32_t *)(v10 + 8 * (uint32_t)(uintptr_t)(v11) + 4);
          v14 = v4[12];
          *(uint32_t *)(v14 + v9) = v12;
          *(uint32_t *)(v14 + v9 + 4) = v13;
          v9 += 24;
        }
        while ( v4[9] > (int)(uintptr_t)(v57) );
        v3 = v72;
      }
    }
    if ( *((uint8_t *)v4 + 97) != 0 )
    {
      v15 = *(float *)(v60 + 112);
      v16 = *(float *)(v60 + 116);
      v17 = *(float *)(v60 + 120);
      v18 = *(float *)(v60 + 124);
      v19 = *(float *)(v60 + 128);
g4_m128_raw(v20) = *(unsigned int *)(v60 + 132);
      if ( *((uint8_t *)v3 + 4) != 0 )
      {
g4_m128_raw(v21) = *((unsigned int *)v3 + 18);
        v68 =g4_m128_lane<float>(v21, 0);
        v73 = *((float *)v3 + 19);
g4_m128_lane<float>(v21, 0) = (float)(g4_m128_lane<float>(v21, 0) * v17) + 0.5;
        v22 = _mm_and_ps(v21, g4_m128_u32(0x7FFFFFFFu));
        if (g4_m128_lane<float>(v22, 0) < 8388608.0 )
        {
g4_m128_lane<float>(v22, 0) = (float)(int)g4_m128_lane<float>(v21, 0);
g4_m128_lane<float>(v21, 0) =g4_m128_lane<float>(v22, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v22, v21), 0) & 0x3F800000);
        }
g4_m128_raw(v23) = LODWORD(v73);
        if ( (float)(v73 *g4_m128_lane<float>(v21, 0)) >= -3.4028235e38f )
        {
g4_m128_lane<float>(v23, 0) = v73 *g4_m128_lane<float>(v21, 0);
          LODWORD(v17) = COERCE_UNSIGNED_INT(v73 *g4_m128_lane<float>(v21, 0))
                       &g4_m128_lane<uint32_t>(_mm_cmple_ss(v23, *(__m128 *)&dword_1C7B5E0), 0);
        }
        else
        {
          v17 = 0.0;
        }
g4_m128_lane<float>(v20, 0) = (float)(g4_m128_lane<float>(v20, 0) * v68) + 0.5;
        v24 = _mm_and_ps(v20, g4_m128_u32(0x7FFFFFFFu));
        if (g4_m128_lane<float>(v24, 0) < 8388608.0 )
        {
g4_m128_lane<float>(v24, 0) = (float)(int)g4_m128_lane<float>(v20, 0);
g4_m128_lane<float>(v24, 0) =g4_m128_lane<float>(v24, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v24, v20), 0) & 0x3F800000);
          v20 = v24;
        }
g4_m128_lane<float>(v20, 0) =g4_m128_lane<float>(v20, 0) * v73;
        if (g4_m128_lane<float>(v20, 0) < -3.4028235e38f )
g4_m128_lane<int32_t>(v20, 0) = 0;
        else
g4_m128_lane<int32_t>(v20, 0) &=g4_m128_lane<uint32_t>(_mm_cmple_ss(v20, *(__m128 *)&dword_1C7B5E0), 0);
      }
      if ( (int)v4[5] > 0 )
      {
        v74 = -72;
        v25 = 0;
        v69 = 0;
        v64 = (gameswf::RenderHandler::Self *)(v3);
        do
        {
          v26 = (float *)(v25 + v4[4]);
          v27 = 2 * v25;
          v28 = 2 * v25 + v4[12];
          *(float *)(v28 + 12) = (float)((float)(v26[1] * v16) + (float)(*v26 * v15)) + v17;
          *(float *)(v28 + 16) = (float)((float)(v26[1] * v19) + (float)(*v26 * v18)) +g4_m128_lane<float>(v20, 0);
          if ( *((uint8_t *)v64 + 4) != 0 && (v69 & 3) == 3 )
          {
            v47 = v4[12];
            v79 = (gameswf::Point::Self *)(v47 + v74 + 12);
            v80 = v47 + v74 + 24 + 12;
            v81 = v47 + v74 + 60;
            v82 = v47 + v27 + 12;
            gameswf::RenderHandler::alignToPixel(v64, &v79, true);
            v27 = 2 * v25;
          }
          ++v69;
          v25 += 12;
          *(uint32_t *)(v4[12] + v27 + 20) = 0;
          v74 += 24;
        }
        while ( v4[5] > v69 );
        v3 = (gameswf::BufferedRenderer::Self *)(v64);
      }
      if ( *((uint8_t *)v3 + 52) == 0 && *((uint32_t *)v3 + 6) != 0 && (int)v4[13] > 0 )
      {
        v50 = v3;
        gameswf::RenderHandler::transformPositions(v3, (gameswf::vector3df::Self *)(v4[12] + 12), 24, v4[13]);
        v3 = v50;
      }
      *((uint8_t *)v4 + 97) = 0;
    }
    if ( *((uint8_t *)v4 + 98) != 0 )
    {
      v79 = *(gameswf::Point::Self **)(v60 + 80);
      v80 = *(uint32_t *)(v60 + 84);
      v81 = *(uint32_t *)(v60 + 88);
      v82 = *(uint32_t *)(v60 + 92);
      v83 = *(uint32_t *)(v60 + 96);
      v84 = *(uint32_t *)(v60 + 100);
      v85 = *(uint32_t *)(v60 + 104);
      v86 = *(uint32_t *)(v60 + 108);
      if ( (int)v4[1] > 0 )
      {
        v59 = nullptr;
        v55 = v3;
        do
        {
          v37 = (unsigned int *)(*v4 + 32 * (uint32_t)(uintptr_t)(v59));
          gameswf::CxForm::transform(&v77, (float *)&v79, v37[2]);
          v38 = v77;
          v39 = BYTE1(v77);
          v37[3] = v77;
          v76 = v39;
          v40 = v37[4];
          v66 = v38;
          v41 = v40 + v37[5];
          v70 = BYTE2(v38);
          v62 = HIBYTE(v38);
          if ( v40 < v41 )
          {
            v49 = v40;
            v42 = 24 * v40;
            do
            {
              ++v49;
              v43 = (uint8_t *)(v4[12] + v42);
              v42 += 24;
              v43[8] = v66;
              v43[9] = v76;
              v43[10] = v70;
              v43[11] = v62;
            }
            while ( v49 != v41 );
          }
          v59 = (gameswf::BufferedRenderer::Self *)((char *)v59 + 1);
        }
        while ( v4[1] > (int)(uintptr_t)(v59) );
        v3 = v55;
      }
      *((uint8_t *)v4 + 98) = 0;
    }
  }
  result = v4[13];
  if ( result != 0 )
  {
    v54 = *((uint32_t *)v3 + 611);
    if ( (int)v4[1] > 0 )
    {
      v61 = 0;
      v58 = (gameswf::BufferedRenderer::Self *)((char *)v3 + 816);
      v30 = v3;
      do
      {
        v75 = (uint32_t *)(32 * v61 + *v4);
        v31 = *(uint32_t *)(v75[1] + 68);
        if ( *((uint32_t *)v30 + 514) != v31 && *((uint32_t *)v30 + 217) != 0 )
        {
          v51 = v75[1];
          sub_10C6160((int)(uintptr_t)(v58));
          v31 = *(uint32_t *)(v51 + 68);
        }
        v32 = 0;
        v78[0] = v31;
        if ( v31 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v31 + 4), 1u);
          v32 = v78[0];
        }
        v33 = *((uint32_t *)v30 + 514);
        *((uint32_t *)v30 + 514) = v32;
        v78[0] = v33;
        sub_5ED480(v78);
        v34 = (gameswf::RenderHandler::Self *)v75[4];
        v35 = v75[5];
        if ( v54 > 0 )
        {
          v65 = (gameswf::RenderHandler::Self *)((char *)v34 + v35);
          if ( (int)(uintptr_t)(v34) < (int)(uintptr_t)((char *)v34 + v35) )
          {
            v36 = 24 * (uint32_t)(uintptr_t)(v34);
            do
            {
              v34 = (gameswf::RenderHandler::Self *)((char *)v34 + 1);
              *(uint32_t *)(v4[12] + v36 + 20) = *((uint32_t *)v30 + 612);
              v36 += 24;
            }
            while ( v34 != v65 );
            v34 = (gameswf::RenderHandler::Self *)v75[4];
            v35 = v75[5];
          }
        }
        result = gameswf::BufferedRenderer::queueIndexedTriangles(
                   v58,
                   (const Vertex *)(v4[12] + 24 * (uint32_t)(uintptr_t)(v34)),
                   v35,
                   (const uint16_t *)(v4[20] + 2 * v75[6]),
                   v75[7]);
        ++v61;
      }
      while ( v4[1] > v61 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::reset  (binary VA: 0x10cb920)
// Original: gameswf::render_handler_glitch::reset
// ----------------------------------------------------------------------------
int32_t gameswf::render_handler_glitch::reset(gameswf::render_handler_glitch::Self *self)
{
  glitch::video::IVideoDriver::Self *v1;
  glitch::video::CMaterialVertexAttributeMap::Self **v2;
  int32_t result;
  glitch::video::CMaterial::Self *v4;
  bool v5;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v6;
  typedef int _g4_t_v7;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self ***_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int16_t _g4_t_v10;
  typedef int16_t _g4_t_v11;
  typedef int16_t _g4_t_v12;
  typedef int16_t _g4_t_v13;
  typedef int16_t _g4_t_v14;
  typedef int16_t _g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef int16_t _g4_t_v17;
  typedef int16_t _g4_t_v18;
  typedef int16_t _g4_t_v19;
  typedef int16_t _g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef int16_t _g4_t_v22;
  typedef int16_t _g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (14u + sizeof(_g4_t_v11)) > _g4_s4 ? (14u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v12)) > _g4_s5 ? (16u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (18u + sizeof(_g4_t_v13)) > _g4_s6 ? (18u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v14)) > _g4_s7 ? (20u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (22u + sizeof(_g4_t_v15)) > _g4_s8 ? (22u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v16)) > _g4_s9 ? (24u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (26u + sizeof(_g4_t_v17)) > _g4_s10 ? (26u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v18)) > _g4_s11 ? (28u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (30u + sizeof(_g4_t_v19)) > _g4_s12 ? (30u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v20)) > _g4_s13 ? (32u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (34u + sizeof(_g4_t_v21)) > _g4_s14 ? (34u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v22)) > _g4_s15 ? (36u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (38u + sizeof(_g4_t_v23)) > _g4_s16 ? (38u + sizeof(_g4_t_v23)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 14u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 18u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 22u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 26u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 30u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 34u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 38u);

  v8 = nullptr;
  v9 = 0;
  v1 = *((glitch::video::IVideoDriver::Self **)self + 90);
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v7 = 0;
  glitch::video::IVideoDriver::setMaterial(v1, (glitch::video::CMaterial::Self **)&v9, (volatile int32_t **)&v7);
  v2 = (glitch::video::CMaterialVertexAttributeMap::Self **)v7;
  if ( v7 != 0 && __sync_fetch_and_add((volatile int32_t *)v7, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v2);
    gll_operator_delete_arr((int)(uintptr_t)(v2));
  }
  result = gameswf::BufferedRenderer::clearTextures((gameswf::render_handler_glitch::Self *)((char *)self + 816));
  v4 = (glitch::video::CMaterial::Self *)v9;
  if ( v9 != 0 )
  {
    v5 = *(uint32_t *)v9 == 2;
    _mm_mfence();
    if ( v5 )
      glitch::video::CMaterial::removeFromRootSceneNode(v4);
    result = __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF);
    if ( result == 1 )
    {
      glitch::video::CMaterial::Destroy(v4);
      result = gll_operator_delete_arr((int)(uintptr_t)(v4));
    }
  }
  v6 = v8;
  if ( v8 != nullptr )
  {
    result = __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF);
    if ( result == 1 )
    {
      glitch::video::CMaterialRenderer::Destroy(v6);
      return gll_operator_delete_arr((int)(uintptr_t)(v6));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::endSubmitMaskImpl  (binary VA: 0x10cba90)
// Original: gameswf::render_handler_glitch::endSubmitMaskImpl
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::endSubmitMaskImpl(gameswf::render_handler_glitch::Self *self)
{
  bool v1;
  int v2;
  int v3;
  void (*v4)(gameswf::render_handler_glitch::Self *, uint32_t *, char *, uint32_t *, uint32_t *, int);
  uint32_t v6[4];
  uint32_t v7[4];
  uint32_t v8[9];

  if ( *((uint32_t *)self + 519) != 0 && *((uint32_t *)self + 217) != 0 )
    sub_10C6160((int)(uintptr_t)(self) + 816);
  v1 = *((uint32_t *)self + 520) == 2;
  *((uint32_t *)self + 519) = 0;
  v2 = *((uint32_t *)self + 611);
  if ( !v1 && *((uint32_t *)self + 217) != 0 )
    sub_10C6160((int)(uintptr_t)(self) + 816);
  *((uint32_t *)self + 521) = v2;
  *((uint32_t *)self + 520) = 2;
  memset(v8, 0, 0x18u);
  v3 = *(uint32_t *)self;
  v8[0] = 1065353216;
  v8[4] = 1065353216;
  memset(v6, 0, sizeof(v6));
  v4 = *(void (**)(gameswf::render_handler_glitch::Self *, uint32_t *, char *, uint32_t *, uint32_t *, int))(v3 + 108);
  memset(v7, 0, sizeof(v7));
  v4(self, v8, (char *)self + 2528, v6, v7, -1);
  return gameswf::RenderHandler::flush(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::beginSubmitMaskImpl  (binary VA: 0x10cc000)
// Original: gameswf::render_handler_glitch::beginSubmitMaskImpl
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::beginSubmitMaskImpl(gameswf::render_handler_glitch::Self *self)
{
  int v1;
  glitch::video::CMaterial::Self *v2;
  char *v3;
  int v4;
  int v5;
  glitch::video::IVideoDriver::Self *v6;
  glitch::video::CMaterialVertexAttributeMap::Self **v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int result;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  if ( *((uint32_t *)self + 519) != 23 && *((uint32_t *)self + 217) != 0 )
    sub_10C6160((int)(uintptr_t)(self) + 816);
  v1 = *((uint32_t *)self + 611);
  *((uint32_t *)self + 519) = 23;
  if ( v1 == 0 )
  {
    v2 = *((glitch::video::CMaterial::Self **)self + 455);
    if ( v2 != nullptr )
    {
      v3 = (char *)self + 1816;
    }
    else
    {
      v3 = (char *)self + 896;
      v2 = *((glitch::video::CMaterial::Self **)self + 225);
    }
    v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v3 + 1) + 4) + 24)
                   + 12 * (uint8_t)glitch::video::CMaterial::getTechnique(v2)
                   + 4);
    v5 = *(uint32_t *)(v4 + 4);
    *(uint32_t *)(v4 + 4) = v5 | 0x80000000;
    if ( v5 >= 0 )
      *(uint8_t *)(v4 + 54) = 1;
    v6 = *((glitch::video::IVideoDriver::Self **)self + 222);
    v13 = nullptr;
    glitch::video::IVideoDriver::setMaterial(v6, (glitch::video::CMaterial::Self **)v3 + 1, (volatile int32_t **)&v13);
    v7 = (glitch::video::CMaterialVertexAttributeMap::Self **)v13;
    if ( v13 != nullptr && __sync_fetch_and_add((volatile int32_t *)v13, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterialVertexAttributeMap::Destroy(v7);
      gll_operator_delete_arr((int)(uintptr_t)(v7));
    }
    v8 = *((uint32_t *)self + 222);
    v9 = *(uint32_t *)(v8 + 36);
    v10 = v9;
    BYTE1(v10) = 0;
    *(uint32_t *)(v8 + 36) = v10;
    *(uint8_t *)(v8 + 780) |= BYTE1(v9) != 0;
    glitch::video::IVideoDriver::clearBuffers(*((glitch::video::IVideoDriver::Self **)self + 222), 4);
    v1 = *((uint32_t *)self + 611);
  }
  v11 = *((uint32_t *)self + 520) == 1;
  result = v1 + 1;
  *((uint32_t *)self + 611) = v1 + 1;
  if ( !v11 )
  {
    result = *((uint32_t *)self + 217);
    if ( result != 0 )
      result = sub_10C6160((int)(uintptr_t)(self) + 816);
  }
  *((uint32_t *)self + 520) = 1;
  *((uint32_t *)self + 521) = v1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::beginDisplay  (binary VA: 0x10cc190)
// Original: gameswf::render_handler_glitch::beginDisplay
// ----------------------------------------------------------------------------
uint32_t * gameswf::render_handler_glitch::beginDisplay(int a1, int a2, int a3, int a4, int a5, int a6, float a7, float a8, float a9, float a10)
{
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  char v17;
  int v18;
  bool v19;
  int v20;
  bool v21;
  int v22;
  int v23;
  int v24;
  int v25;
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm0_4
  float v30; // xmm7_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  int v35;
  char *v36;
  int v37;
  char *v38;
  int v39;
  gameswf::Self *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int savedregs;

  v10 = *(uint32_t *)(a1 + 360);
  *(float *)(a1 + 2372) = a7;
  *(float *)(a1 + 2376) = a9;
  *(float *)(a1 + 2380) = fabs(a8 - a7);
  *(float *)(a1 + 2384) = fabs(a10 - a9);
  *(uint32_t *)(a1 + 400) = *(uint32_t *)(v10 + 492);
  *(uint32_t *)(a1 + 404) = *(uint32_t *)(v10 + 496);
  *(uint32_t *)(a1 + 408) = *(uint32_t *)(v10 + 500);
  *(uint32_t *)(a1 + 412) = *(uint32_t *)(v10 + 504);
  *(uint32_t *)(a1 + 416) = *(uint32_t *)(v10 + 508);
  *(uint32_t *)(a1 + 420) = *(uint32_t *)(v10 + 512);
  *(uint32_t *)(a1 + 424) = *(uint32_t *)(v10 + 516);
  *(uint32_t *)(a1 + 428) = *(uint32_t *)(v10 + 520);
  *(uint32_t *)(a1 + 432) = *(uint32_t *)(v10 + 524);
  *(uint32_t *)(a1 + 436) = *(uint32_t *)(v10 + 528);
  *(uint32_t *)(a1 + 440) = *(uint32_t *)(v10 + 532);
  *(uint32_t *)(a1 + 444) = *(uint32_t *)(v10 + 536);
  *(uint32_t *)(a1 + 448) = *(uint32_t *)(v10 + 540);
  *(uint32_t *)(a1 + 452) = *(uint32_t *)(v10 + 544);
  *(uint32_t *)(a1 + 456) = *(uint32_t *)(v10 + 548);
  *(uint32_t *)(a1 + 460) = *(uint32_t *)(v10 + 552);
  *(uint32_t *)(a1 + 464) = *(uint32_t *)(v10 + 556);
  *(uint32_t *)(a1 + 468) = *(uint32_t *)(v10 + 560);
  *(uint32_t *)(a1 + 472) = *(uint32_t *)(v10 + 564);
  *(uint32_t *)(a1 + 476) = *(uint32_t *)(v10 + 568);
  *(uint32_t *)(a1 + 480) = *(uint32_t *)(v10 + 572);
  *(uint32_t *)(a1 + 484) = *(uint32_t *)(v10 + 576);
  *(uint32_t *)(a1 + 488) = *(uint32_t *)(v10 + 580);
  *(uint32_t *)(a1 + 492) = *(uint32_t *)(v10 + 584);
  *(uint32_t *)(a1 + 496) = *(uint32_t *)(v10 + 588);
  *(uint32_t *)(a1 + 500) = *(uint32_t *)(v10 + 592);
  *(uint32_t *)(a1 + 504) = *(uint32_t *)(v10 + 596);
  *(uint32_t *)(a1 + 508) = *(uint32_t *)(v10 + 600);
  *(uint32_t *)(a1 + 512) = *(uint32_t *)(v10 + 604);
  *(uint32_t *)(a1 + 516) = *(uint32_t *)(v10 + 608);
  *(uint32_t *)(a1 + 520) = *(uint32_t *)(v10 + 612);
  *(uint32_t *)(a1 + 524) = *(uint32_t *)(v10 + 616);
  *(uint32_t *)(a1 + 528) = *(uint32_t *)(v10 + 620);
  *(uint32_t *)(a1 + 532) = *(uint32_t *)(v10 + 624);
  *(uint32_t *)(a1 + 536) = *(uint32_t *)(v10 + 628);
  *(uint32_t *)(a1 + 540) = *(uint32_t *)(v10 + 632);
  *(uint32_t *)(a1 + 544) = *(uint32_t *)(v10 + 636);
  *(uint32_t *)(a1 + 548) = *(uint32_t *)(v10 + 640);
  *(uint32_t *)(a1 + 552) = *(uint32_t *)(v10 + 644);
  *(uint32_t *)(a1 + 556) = *(uint32_t *)(v10 + 648);
  *(uint32_t *)(a1 + 560) = *(uint32_t *)(v10 + 652);
  *(uint32_t *)(a1 + 564) = *(uint32_t *)(v10 + 656);
  *(uint32_t *)(a1 + 568) = *(uint32_t *)(v10 + 660);
  *(uint32_t *)(a1 + 572) = *(uint32_t *)(v10 + 664);
  *(uint32_t *)(a1 + 576) = *(uint32_t *)(v10 + 668);
  *(uint32_t *)(a1 + 580) = *(uint32_t *)(v10 + 672);
  *(uint32_t *)(a1 + 584) = *(uint32_t *)(v10 + 676);
  *(uint32_t *)(a1 + 588) = *(uint32_t *)(v10 + 680);
  v11 = **(uint32_t ***)(v10 + 300);
  *(uint32_t *)(a1 + 592) = v11[5];
  *(uint32_t *)(a1 + 596) = v11[6];
  *(uint32_t *)(a1 + 600) = v11[7];
  *(uint32_t *)(a1 + 604) = v11[8];
  *(uint8_t *)(a1 + 2369) = (*(uint8_t *)(v10 + 240) & 2) != 0;
  *(uint32_t *)(a1 + 364) = *(uint32_t *)(v10 + 36);
  *(uint32_t *)(a1 + 368) = *(uint32_t *)(v10 + 40);
  *(uint32_t *)(a1 + 372) = *(uint32_t *)(v10 + 44);
  *(uint32_t *)(a1 + 376) = *(uint32_t *)(v10 + 48);
  *(uint32_t *)(a1 + 380) = *(uint32_t *)(v10 + 52);
  *(uint32_t *)(a1 + 384) = *(uint32_t *)(v10 + 56);
  *(uint32_t *)(a1 + 388) = *(uint32_t *)(v10 + 60);
  *(uint32_t *)(a1 + 392) = *(uint32_t *)(v10 + 64);
  *(uint32_t *)(a1 + 396) = *(uint32_t *)(v10 + 68);
  *(uint32_t *)(a1 + 2296) = a3;
  *(uint32_t *)(a1 + 2304) = a5 + a3;
  *(uint32_t *)(a1 + 2308) = a4 + a6;
  *(uint32_t *)(a1 + 2300) = a4;
  (*(void (**)(uint32_t, int, int, int, int, int, int, int))(***(uint32_t ***)(v10 + 300) + 12))(
    **(uint32_t **)(v10 + 300),
    a1 + 2296,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  *(uint32_t *)(*(uint32_t *)(a1 + 860) + 8) = 0;
  v12 = *(uint32_t *)(a1 + 868);
  v13 = 0;
  *(uint32_t *)(a1 + 824) = 0;
  if ( v12 <= 0 )
  {
    v35 = *(uint32_t *)(a1 + 872);
    if ( v35 > 0 || *(uint32_t *)(a1 + 876) != 0 )
    {
      v36 = *(char **)(a1 + 864);
    }
    else
    {
      v40 = *(gameswf::Self **)(a1 + 864);
      *(uint32_t *)(a1 + 872) = 1;
      if ( v40 != nullptr )
      {
        savedregs = 0;
        v36 = (char *)gameswf::realloc_internal(v40, 0x14u, 20 * v35);
      }
      else
      {
        v36 = (char *)gameswf::malloc_internal(0x14u);
      }
      *(uint32_t *)(a1 + 864) = (uint32_t)(uintptr_t)(v36);
    }
    v37 = 20 * v12;
    while ( 1 )
    {
      v38 = &v36[v37];
      if ( v38 != nullptr )
      {
        *(uint32_t *)v38 = 4;
        *((uint32_t *)v38 + 1) = 0;
        *((uint32_t *)v38 + 2) = 0;
        *((uint32_t *)v38 + 3) = 0;
        *((uint32_t *)v38 + 4) = 0;
      }
      ++v12;
      v37 += 20;
      if ( v12 == 1 )
        break;
      v36 = *(char **)(a1 + 864);
    }
    v39 = *(uint32_t *)(a1 + 824);
    *(uint32_t *)(a1 + 868) = 1;
    v13 = 20 * v39;
  }
  v14 = (uint32_t *)(*(uint32_t *)(a1 + 864) + v13);
  v14[2] = 0;
  v14[1] = 0;
  v14[4] = 0;
  v14[3] = 0;
  if ( *(uint8_t *)(a1 + 2240) != 0 && *(uint32_t *)(a1 + 868) != 0 )
    sub_10C6160(a1 + 816);
  *(uint8_t *)(a1 + 2240) = 0;
  v15 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 900) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 900))
                  + 4);
  v16 = *(uint32_t *)v15 & 0xF000000;
  *(uint32_t *)v15 |= 0xF000000u;
  v17 = 1;
  if ( v16 == 251658240 )
    v17 = *(uint8_t *)(v15 + 54);
  *(uint8_t *)(v15 + 54) = v17;
  v18 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 900) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 900))
                  + 4);
  v19 = *(int *)v18 < 0;
  *(uint32_t *)v18 |= 0x80000000;
  if ( !v19 )
    *(uint8_t *)(v18 + 54) = 1;
  v20 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 900) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 900))
                  + 4);
  v21 = (*(uint32_t *)(v20 + 4) & 0x800000) == 0;
  *(uint32_t *)(v20 + 4) &= ~0x800000u;
  if ( !v21 )
    *(uint8_t *)(v20 + 54) = 1;
  v22 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 900) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 900))
                  + 4);
  v21 = (*(uint32_t *)(v22 + 4) & 0x60000) == 0;
  *(uint32_t *)(v22 + 4) &= 0xFFF9FFFF;
  if ( !v21 )
    *(uint8_t *)(v22 + 54) = 1;
  v23 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 900) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 900))
                  + 4);
  v21 = (*(uint32_t *)(v23 + 4) & 0x180000) == 0;
  *(uint32_t *)(v23 + 4) &= 0xFFE7FFFF;
  if ( !v21 )
    *(uint8_t *)(v23 + 54) = 1;
  v24 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 900) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 900))
                  + 4);
  v25 = *(uint32_t *)(v24 + 4);
  *(uint32_t *)(v24 + 4) = v25 & 0x7FFFFFFF;
  if ( v25 < 0 )
    *(uint8_t *)(v24 + 54) = 1;
  (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(a1 + 360) + 156))(*(uint32_t *)(a1 + 360), 2, 0);
  v26 = *(float *)(a1 + 16);
  *(uint32_t *)(a1 + 2448) = 0;
  v27 = *(float *)(a1 + 8) / v26;
  *(uint32_t *)(a1 + 612) = 0;
  *(uint32_t *)(a1 + 616) = 0;
  *(uint32_t *)(a1 + 620) = 0;
  *(uint32_t *)(a1 + 624) = 0;
  *(uint32_t *)(a1 + 632) = 0;
  *(uint32_t *)(a1 + 636) = 0;
  *(uint32_t *)(a1 + 640) = 0;
  *(uint32_t *)(a1 + 644) = 0;
  *(uint32_t *)(a1 + 652) = -1082130432;
  *(uint32_t *)(a1 + 656) = 0;
  *(uint32_t *)(a1 + 660) = 0;
  *(uint32_t *)(a1 + 668) = 0;
  v28 = 0.5 / v27;
  v29 = *(float *)(a1 + 2384);
  *(float *)(a1 + 648) = (float)(v26 + 200000.0) / (float)(v26 - 200000.0);
  *(float *)(a1 + 664) = (float)(200000.0 * (float)(v26 + v26)) / (float)(v26 - 200000.0);
  v30 = (float)(v26 + v26) / (float)((float)(v29 * v28) * -2.0);
  v31 = (float)(*(float *)(a1 + 2380) + *(float *)(a1 + 2380)) * v28;
  *(float *)(a1 + 628) = v30;
  *(float *)(a1 + 608) = (float)(v26 + v26) / v31;
  glitch::video::IVideoDriver::setTransform(*(uint8_t **)(a1 + 360), 0, (uint32_t *)(a1 + 608), 0);
  v32 = *(float *)(a1 + 2384);
  v33 = -*(float *)(a1 + 8);
  std::memcpy((void *)(a1 + 672), glitch::core::IdentityMatrix, 64);
  *(float *)(a1 + 720) = -(float)((float)(0.5 * *(float *)(a1 + 2380)) + a7);
  *(uint32_t *)(a1 + 672) = 1065353216;
  *(float *)(a1 + 724) = -(float)((float)(v32 * 0.5) + a9);
  *(uint32_t *)(a1 + 692) = 1065353216;
  *(float *)(a1 + 728) = v33;
  *(uint32_t *)(a1 + 712) = -1082130432;
  glitch::video::IVideoDriver::setTransform(*(uint8_t **)(a1 + 360), 1, (uint32_t *)(a1 + 672), 0);
  std::memcpy((void *)(a1 + 736), glitch::core::IdentityMatrix, 64);
  return glitch::video::IVideoDriver::setTransform(*(uint8_t **)(a1 + 360), 2, (uint32_t *)(a1 + 736), 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::beginEffect  (binary VA: 0x10ccb40)
// Original: gameswf::render_handler_glitch::beginEffect
// ----------------------------------------------------------------------------
void gameswf::render_handler_glitch::beginEffect(glitch::video::IVideoDriver::Self **self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  float *PostProcessTexture;
  int v6;
  int v7;
  float v8; // xmm1_4
  float *v9;
  float v10; // xmm1_4
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  char v15;
  int v16;
  int v17;
  int v18;
  float v19;

  gameswf::RenderHandler::flush((gameswf::RenderHandler::Self *)self);
  v1 = (int)(uintptr_t)(*(self + 578)) + 1;
  *(self + 578) = (glitch::video::IVideoDriver::Self *)v1;
  if ( v1 <= 1 )
  {
    if ( *(self + 519) != (glitch::video::IVideoDriver::Self *)&byte_9[6] && *(self + 217) != nullptr )
      sub_10C6160((int)(uintptr_t)(self + 204));
    v2 = (int)(uintptr_t)(*(self + 520));
    *(self + 519) = (glitch::video::IVideoDriver::Self *)(byte_9 + 6);
    if ( v2 != 0 && *(self + 217) != nullptr )
      sub_10C6160((int)(uintptr_t)(self + 204));
    v3 = (int)(uintptr_t)(*(self + 585));
    *(self + 520) = nullptr;
    *(self + 521) = nullptr;
    if ( v3 != 0 )
      *(uint8_t *)(v3 + 65) = 0;
    v4 = (int)(uintptr_t)(*(self + 586));
    *(self + 585) = nullptr;
    if ( v4 != 0 )
      *(uint8_t *)(v4 + 65) = 0;
    *(self + 586) = nullptr;
    *(self + 587) = nullptr;
    PostProcessTexture = (float *)gameswf::render_handler_glitch::getPostProcessTexture((gameswf::render_handler_glitch::Self *)self);
    *(self + 585) = (glitch::video::IVideoDriver::Self *)PostProcessTexture;
    *(self + 587) = (glitch::video::IVideoDriver::Self *)PostProcessTexture;
    v6 = (int)(float)((float)G4_VCALL<int>(PostProcessTexture, 56)
                    * (float)(PostProcessTexture[9] - PostProcessTexture[7]));
    v7 = G4_VCALL<int>(PostProcessTexture, 52);
    v8 = PostProcessTexture[8] - PostProcessTexture[6];
    v9 = (float *)*(self + 585);
    v18 = (int)(float)((float)v7 * v8);
    v19 = (float)G4_VCALL<int>(v9, 56) * v9[7];
    v10 = (float)G4_VCALL<int>(v9, 52) * v9[6];
    if ( *(self + 576) - *(self + 574) > v18 )
      *(self + 576) = (glitch::video::IVideoDriver::Self *)v18;
    if ( *(self + 577) - *(self + 575) > v6 )
      *(self + 577) = (glitch::video::IVideoDriver::Self *)v6;
    *(self + 574) = (glitch::video::IVideoDriver::Self *)(int)v10;
    v11 = (int)(uintptr_t)(*(self + 585));
    *(self + 575) = (glitch::video::IVideoDriver::Self *)(int)v19;
    v12 = (uint32_t *)(*(self + 90));
    *(self + 579) = (glitch::video::IVideoDriver::Self *)v12[10];
    G4_VCALL<void>(v12, 112, v11 + 72);
    (*(void (**)(uint32_t, char *))(***((uint32_t ***)*(self + 90) + 75) + 12))(
      **((uint32_t **)*(self + 90) + 75),
      (char *)self + 2296);
    v13 = (int)(uintptr_t)(*(self + 90));
    v14 = *(uint32_t *)(v13 + 4);
    *(uint32_t *)(v13 + 4) = v14 | 0xF000000;
    v15 = *(uint8_t *)(v13 + 778) | ((v14 & 0xF000000) != 251658240);
    *(uint8_t *)(v13 + 779) |= v15;
    *(uint8_t *)(v13 + 778) = v15;
    v16 = (int)(uintptr_t)(*(self + 90));
    v17 = *(uint32_t *)(v16 + 40);
    *(uint32_t *)(v16 + 40) = 0;
    *(uint8_t *)(v16 + 780) |= v17 != 0;
    glitch::video::IVideoDriver::clearBuffers(*(self + 90), 7);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::setBlendModeImpl  (binary VA: 0x10cd2b0)
// Original: gameswf::render_handler_glitch::setBlendModeImpl
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::setBlendModeImpl(uint32_t *a1, int a2)
{
  int result;

  result = a1[519];
  if ( result != 23 )
  {
    if ( *(uint32_t *)(a1[90] + 300) == a1[90] + 304 || a2 != 0 )
    {
      if ( result != a2 && a1[217] != 0 )
        result = sub_10C6160((int)(uintptr_t)(a1 + 204));
      a1[519] = a2;
    }
    else
    {
      if ( result != 15 && a1[217] != 0 )
        result = sub_10C6160((int)(uintptr_t)(a1 + 204));
      a1[519] = 15;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::disableMaskImpl  (binary VA: 0x10cd350)
// Original: gameswf::render_handler_glitch::disableMaskImpl
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::disableMaskImpl(gameswf::render_handler_glitch::Self *self)
{
  int result;
  bool v2;

  result = *((uint32_t *)self + 611) - 1;
  v2 = *((uint32_t *)self + 611) == 1;
  *((uint32_t *)self + 611) = result;
  if ( v2 )
  {
    result = *((uint32_t *)self + 520);
    if ( result != 0 )
    {
      result = *((uint32_t *)self + 217);
      if ( result != 0 )
        result = sub_10C6160((int)(uintptr_t)(self) + 816);
    }
    *((uint32_t *)self + 520) = 0;
    *((uint32_t *)self + 521) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::endEffect  (binary VA: 0x10cd3b0)
// Original: gameswf::render_handler_glitch::endEffect
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::endEffect(gameswf::render_handler_glitch::Self *self, const gameswf::Effect::Self *a2, const gameswf::Rect::Self *a3)
{
  gameswf::render_handler_glitch::Self *v3;
  float *v4;
  int result;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float v13; // xmm2_4
  float v14; // xmm1_4
  float *v15;
  int v16;
  float v17; // xmm6_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  int v23;
  int v24;
  float *v25;
  float v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  float v36; // xmm1_4
  float v37; // xmm0_4
  float *v38;
  float v39; // xmm2_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  int v45;
  int v46;
  int v47;
  float v48; // xmm3_4
  int v49;
  float v50; // xmm6_4
  float v51; // xmm0_4
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef gameswf::render_handler_glitch::Self *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef float **_g4_t_v89;
  typedef const gameswf::Effect::Self *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104[2];
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef gameswf::render_handler_glitch::Self **_g4_t_v107;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v52)) > _g4_s0 ? (12u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v53)) > _g4_s1 ? (16u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v54)) > _g4_s2 ? (20u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v55)) > _g4_s3 ? (24u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v56)) > _g4_s4 ? (28u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v57)) > _g4_s5 ? (32u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v58)) > _g4_s6 ? (32u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v59)) > _g4_s7 ? (36u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v60)) > _g4_s8 ? (40u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v61)) > _g4_s9 ? (44u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v62)) > _g4_s10 ? (48u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v63)) > _g4_s11 ? (52u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v64)) > _g4_s12 ? (56u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v65)) > _g4_s13 ? (60u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v66)) > _g4_s14 ? (64u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v67)) > _g4_s15 ? (68u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v68)) > _g4_s16 ? (72u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v69)) > _g4_s17 ? (76u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v70)) > _g4_s18 ? (80u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v71)) > _g4_s19 ? (84u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v72)) > _g4_s20 ? (88u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v73)) > _g4_s21 ? (92u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v74)) > _g4_s22 ? (96u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v75)) > _g4_s23 ? (100u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v76)) > _g4_s24 ? (104u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v77)) > _g4_s25 ? (108u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v78)) > _g4_s26 ? (112u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v79)) > _g4_s27 ? (112u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v80)) > _g4_s28 ? (112u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v81)) > _g4_s29 ? (116u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v82)) > _g4_s30 ? (116u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v83)) > _g4_s31 ? (120u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v84)) > _g4_s32 ? (124u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v85)) > _g4_s33 ? (124u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v86)) > _g4_s34 ? (128u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (132u + sizeof(_g4_t_v87)) > _g4_s35 ? (132u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v88)) > _g4_s36 ? (132u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (132u + sizeof(_g4_t_v89)) > _g4_s37 ? (132u + sizeof(_g4_t_v89)) : _g4_s37,
    _g4_s39 = (136u + sizeof(_g4_t_v90)) > _g4_s38 ? (136u + sizeof(_g4_t_v90)) : _g4_s38,
    _g4_s40 = (136u + sizeof(_g4_t_v91)) > _g4_s39 ? (136u + sizeof(_g4_t_v91)) : _g4_s39,
    _g4_s41 = (140u + sizeof(_g4_t_v92)) > _g4_s40 ? (140u + sizeof(_g4_t_v92)) : _g4_s40,
    _g4_s42 = (144u + sizeof(_g4_t_v93)) > _g4_s41 ? (144u + sizeof(_g4_t_v93)) : _g4_s41,
    _g4_s43 = (144u + sizeof(_g4_t_v94)) > _g4_s42 ? (144u + sizeof(_g4_t_v94)) : _g4_s42,
    _g4_s44 = (144u + sizeof(_g4_t_v95)) > _g4_s43 ? (144u + sizeof(_g4_t_v95)) : _g4_s43,
    _g4_s45 = (148u + sizeof(_g4_t_v96)) > _g4_s44 ? (148u + sizeof(_g4_t_v96)) : _g4_s44,
    _g4_s46 = (152u + sizeof(_g4_t_v97)) > _g4_s45 ? (152u + sizeof(_g4_t_v97)) : _g4_s45,
    _g4_s47 = (156u + sizeof(_g4_t_v98)) > _g4_s46 ? (156u + sizeof(_g4_t_v98)) : _g4_s46,
    _g4_s48 = (160u + sizeof(_g4_t_v99)) > _g4_s47 ? (160u + sizeof(_g4_t_v99)) : _g4_s47,
    _g4_s49 = (164u + sizeof(_g4_t_v100)) > _g4_s48 ? (164u + sizeof(_g4_t_v100)) : _g4_s48,
    _g4_s50 = (168u + sizeof(_g4_t_v101)) > _g4_s49 ? (168u + sizeof(_g4_t_v101)) : _g4_s49,
    _g4_s51 = (172u + sizeof(_g4_t_v102)) > _g4_s50 ? (172u + sizeof(_g4_t_v102)) : _g4_s50,
    _g4_s52 = (176u + sizeof(_g4_t_v103)) > _g4_s51 ? (176u + sizeof(_g4_t_v103)) : _g4_s51,
    _g4_s53 = (180u + sizeof(_g4_t_v104)) > _g4_s52 ? (180u + sizeof(_g4_t_v104)) : _g4_s52,
    _g4_s54 = (188u + sizeof(_g4_t_v105)) > _g4_s53 ? (188u + sizeof(_g4_t_v105)) : _g4_s53,
    _g4_s55 = (192u + sizeof(_g4_t_v106)) > _g4_s54 ? (192u + sizeof(_g4_t_v106)) : _g4_s54,
    _g4_s56 = (204u + sizeof(_g4_t_v107)) > _g4_s55 ? (204u + sizeof(_g4_t_v107)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 52u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 84u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 88u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 92u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 104u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 108u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 112u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 116u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 116u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 120u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 124u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 124u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 128u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 132u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 132u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 132u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 136u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 136u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 140u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 144u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 144u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 144u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 148u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 152u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 156u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 160u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 164u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 168u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 172u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 176u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 180u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 188u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 192u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 204u);

  v107 = &self;
  v3 = self;
  v4 = (float *)a3;
  v90 = a2;
  gameswf::RenderHandler::flush(self);
  result = *((uint32_t *)v3 + 578) - 1;
  v6 = *((uint32_t *)v3 + 578) == 1;
  *((uint32_t *)v3 + 578) = result;
  if ( !v6 )
    return result;
  (*(void (**)(int *, uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, const gameswf::Effect::Self *, int, int, int))(**((uint32_t **)v3 + 90) + 116))(
    &v97,
    *((uint32_t *)v3 + 90),
    v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v81,
    v83,
    v84,
    v86,
    v87,
    v90,
    v92,
    v93,
    v96);
  v7 = v97;
  if ( v97 != 0 && __sync_fetch_and_add((volatile int32_t *)(v97 + 4), 0xFFFFFFFF) == 1 )
  {
    v80 = v7;
    G4_VCALL<void>(v7, 8);
    G4_VCALL<void>(v80, 4);
  }
  *((uint32_t *)v3 + 586) = gameswf::render_handler_glitch::getPostProcessTexture(v3);
  v100 = *v4;
  v101 = v4[1];
  v8 = *(uint32_t *)(v91 + 8);
  v102 = v4[2];
  v103 = v4[3];
  v94 = v8;
  if ( v8 > 0 )
  {
    v9 = 0;
    v10 = 0;
    v85 = v3;
    v88 = *(uint32_t *)(v91 + 4);
    do
    {
      while ( 1 )
      {
        v11 = v88 + v9;
        v12 = *(uint32_t *)(v88 + v9);
        if ( gameswf::s_filterEnabled[v12] != 0 && v12 == 1 )
        {
          v13 = *(float *)(v11 + 84);
          v14 = *(float *)(v11 + 88);
          if ( v13 > 1.0 || v14 > 1.0 )
            break;
        }
        ++v10;
        v9 += 96;
        if ( v10 == v94 )
          goto LABEL_13;
      }
      ++v10;
      v9 += 96;
      v100 = v100 - v13;
      v101 = v101 + *(float *)(v11 + 84);
      v102 = v102 - v14;
      v103 = v14 + v103;
    }
    while ( v10 != v94 );
LABEL_13:
    v3 = v85;
  }
  v15 = *((float **)v3 + 585);
  v79 = (int)(float)((float)G4_VCALL<int>(v15, 56) * (float)(v15[9] - v15[7]));
  v16 = G4_VCALL<int>(v15, 52);
  v17 = *((float *)v3 + 593);
  v18 = *((float *)v3 + 595);
  v19 = *((float *)v3 + 594);
  v20 = (float)(*((uint32_t *)v3 + 576) - *((uint32_t *)v3 + 574))
      / (float)(int)(float)((float)v16 * (float)(v15[8] - v15[6]));
  v21 = (float)(*((uint32_t *)v3 + 577) - *((uint32_t *)v3 + 575)) / (float)v79;
  v22 = *((float *)v3 + 596);
  v23 = *(uint32_t *)(v91 + 8);
  v104[0] = (float)((float)(v100 - v17) / v18) * v20;
  v105 = (float)((float)(v102 - v19) / v22) * v21;
  v104[1] = (float)((float)(v101 - v17) / v18) * v20;
  v106 = (float)((float)(v103 - v19) / v22) * v21;
  if ( v23 > 0 )
  {
    v58 = 0;
    v95 = 0;
    v82 = (int)(uintptr_t)(v3) + 816;
    v24 = v23;
    v89 = (float **)((char *)v3 + 2340);
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = (float *)(*(uint32_t *)(v91 + 4) + v58);
        v26 = *v25;
        if ( gameswf::s_filterEnabled[*(uint32_t *)v25] != 0 )
        {
          if ( LODWORD(v26) == 6 )
          {
            *((float *)v3 + 524) = v25[1];
            *((float *)v3 + 525) = v25[2];
            *((float *)v3 + 526) = v25[3];
            *((float *)v3 + 527) = v25[4];
            *((float *)v3 + 528) = v25[5];
            *((float *)v3 + 529) = v25[6];
            *((float *)v3 + 530) = v25[7];
            *((float *)v3 + 531) = v25[8];
            *((float *)v3 + 532) = v25[9];
            *((float *)v3 + 533) = v25[10];
            *((float *)v3 + 534) = v25[11];
            *((float *)v3 + 535) = v25[12];
            *((float *)v3 + 536) = v25[13];
            *((float *)v3 + 537) = v25[14];
            *((float *)v3 + 538) = v25[15];
            *((float *)v3 + 539) = v25[16];
            v27 = *((uint32_t *)v25 + 20);
            v28 = *((uint32_t *)v25 + 19);
            v29 = *((uint32_t *)v25 + 18);
            v6 = *((uint32_t *)v3 + 519) == 19;
            *((float *)v3 + 540) = v25[17];
            *((uint32_t *)v3 + 541) = v29;
            *((uint32_t *)v3 + 542) = v28;
            *((uint32_t *)v3 + 543) = v27;
            if ( !v6 && *((uint32_t *)v3 + 217) != 0 )
              sub_10C6160(v82);
            *((uint32_t *)v3 + 519) = 19;
            goto LABEL_25;
          }
          if ( LODWORD(v26) == 8 )
          {
            v38 = *((float **)v3 + 587);
            v39 = v38[7];
            v40 = *((float *)v3 + 596);
            v41 = *((float *)v3 + 595);
            v42 = (float)((float)(v38[8] - v38[6]) * v104[0]) + v38[6];
            v43 = v38[9];
            v98 = *(uint32_t *)(*((uint32_t *)v3 + 585) + 68);
            v44 = (float)((float)(v43 - v39) * v105) + v39;
            if ( v98 != 0 )
              __sync_add_and_fetch((volatile int32_t *)(v98 + 4), 1u);
            v45 = 0;
            v99 = *(uint32_t *)(*((uint32_t *)v25 + 2) + 68);
            if ( v99 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v99 + 4), 1u);
              v96 = v99;
              if ( v99 != 0 )
              {
                __sync_add_and_fetch((volatile int32_t *)(v99 + 4), 1u);
                v45 = v96;
              }
            }
            v46 = *((uint32_t *)v3 + 565);
            *((uint32_t *)v3 + 565) = v45;
            v96 = v46;
            sub_5ED480(&v96);
            v47 = v98;
            *((uint32_t *)v3 + 566) = *((int16_t *)v25 + 2);
            *((uint32_t *)v3 + 567) = *((int16_t *)v25 + 3);
            v6 = *((uint32_t *)v3 + 519) == 20;
            v48 = v41 / (float)((float)(*((uint32_t *)v3 + 576) - *((uint32_t *)v3 + 574)) / (float)*(int *)(v47 + 20));
            v49 = v99;
            v50 = v40 / (float)((float)(*((uint32_t *)v3 + 577) - *((uint32_t *)v3 + 575)) / (float)*(int *)(v47 + 24));
            *((float *)v3 + 568) = (float)(v25[3] / v48) + v42;
            *((float *)v3 + 569) = (float)(v25[4] / v50) + v44;
            *((float *)v3 + 570) = v25[5] / v41;
            *((float *)v3 + 571) = v25[6] / v40;
            *((float *)v3 + 572) = v48 / (float)((float)*(int *)(v49 + 20) * v25[7]);
            *((float *)v3 + 573) = v50 / (float)((float)*(int *)(v49 + 24) * v25[8]);
            if ( !v6 && *((uint32_t *)v3 + 217) != 0 )
              sub_10C6160(v82);
            *((uint32_t *)v3 + 519) = 20;
            sub_5ED480(&v99);
            sub_5ED480(&v98);
            goto LABEL_25;
          }
          if ( LODWORD(v26) == 1 )
            break;
        }
        ++v95;
        v58 += 96;
        if ( v95 >= v24 )
          goto LABEL_26;
      }
      v36 = v25[21];
      if ( v36 > 1.0 )
        break;
      v6 = *((uint32_t *)v3 + 519) == 18;
      v51 = fmaxf((float)(v25[22] + -1.0) * 0.15384616f, 0.0);
      *((float *)v3 + 522) = v51 + v51;
      if ( !v6 )
        goto LABEL_51;
LABEL_53:
      *((uint32_t *)v3 + 519) = 18;
LABEL_25:
      sub_10C6AB0((int)(uintptr_t)(v3), v89, 1, &v100, v104, nullptr);
      ++v95;
      v58 += 96;
      v24 = *(uint32_t *)(v91 + 8);
      if ( v95 >= v24 )
        goto LABEL_26;
    }
    if ( v25[22] <= 1.0 )
    {
      v6 = *((uint32_t *)v3 + 519) == 17;
      *((float *)v3 + 522) = fmaxf((float)(v36 + -1.0) * 0.15384616f, 0.0);
      if ( !v6 && *((uint32_t *)v3 + 217) != 0 )
        sub_10C6160(v82);
      *((uint32_t *)v3 + 519) = 17;
      goto LABEL_25;
    }
    v6 = *((uint32_t *)v3 + 519) == 17;
    *((float *)v3 + 522) = fmaxf((float)(v36 + -1.0) * 0.15384616f, 0.0);
    if ( !v6 && *((uint32_t *)v3 + 217) != 0 )
      sub_10C6160(v82);
    *((uint32_t *)v3 + 519) = 17;
    sub_10C6AB0((int)(uintptr_t)(v3), v89, 1, &v100, v104, nullptr);
    v6 = *((uint32_t *)v3 + 519) == 18;
    v37 = fmaxf((float)(v25[22] + -1.0) * 0.15384616f, 0.0);
    *((float *)v3 + 522) = v37 + v37;
    if ( v6 )
      goto LABEL_53;
LABEL_51:
    if ( *((uint32_t *)v3 + 217) != 0 )
      sub_10C6160(v82);
    goto LABEL_53;
  }
  v82 = (int)(uintptr_t)(v3) + 816;
  v89 = (float **)((char *)v3 + 2340);
LABEL_26:
  if ( *((uint32_t *)v3 + 519) != 16 && *((uint32_t *)v3 + 217) != 0 )
    sub_10C6160(v82);
  v30 = *((uint32_t *)v3 + 611);
  *((uint32_t *)v3 + 519) = 16;
  if ( v30 > 0 )
  {
    if ( *((uint32_t *)v3 + 520) != 2 && *((uint32_t *)v3 + 217) != 0 )
      sub_10C6160(v82);
    *((uint32_t *)v3 + 520) = 2;
    *((uint32_t *)v3 + 521) = v30;
  }
  sub_10C6AB0((int)(uintptr_t)(v3), v89, 0, &v100, v104, nullptr);
  v31 = *((uint32_t *)v3 + 611);
  if ( v31 > 0 )
  {
    if ( *((uint32_t *)v3 + 520) != 0 && *((uint32_t *)v3 + 217) != 0 )
      sub_10C6160(v82);
    *((uint32_t *)v3 + 520) = 0;
    *((uint32_t *)v3 + 521) = v31;
  }
  if ( *((uint32_t *)v3 + 519) != 0 && *((uint32_t *)v3 + 217) != 0 )
    sub_10C6160(v82);
  v32 = *((uint32_t *)v3 + 90);
  *((uint32_t *)v3 + 519) = 0;
  v33 = *((uint32_t *)v3 + 579);
  v34 = *(uint32_t *)(v32 + 40);
  *(uint32_t *)(v32 + 40) = v33;
  *(uint8_t *)(v32 + 780) |= v33 != v34;
  *((uint32_t *)v3 + 574) = *((uint32_t *)v3 + 148);
  *((uint32_t *)v3 + 575) = *((uint32_t *)v3 + 149);
  *((uint32_t *)v3 + 576) = *((uint32_t *)v3 + 150);
  *((uint32_t *)v3 + 577) = *((uint32_t *)v3 + 151);
  (*(void (**)(uint32_t, int))(***(uint32_t ***)(*((uint32_t *)v3 + 90) + 300) + 12))(
    **(uint32_t **)(*((uint32_t *)v3 + 90) + 300),
    (int)(uintptr_t)(v3) + 2296);
  v35 = *((uint32_t *)v3 + 585);
  if ( v35 != 0 )
    *(uint8_t *)(v35 + 65) = 0;
  result = *((uint32_t *)v3 + 586);
  *((uint32_t *)v3 + 585) = 0;
  if ( result != 0 )
    *(uint8_t *)(result + 65) = 0;
  *((uint32_t *)v3 + 586) = 0;
  *((uint32_t *)v3 + 587) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::drawVideoBitmap  (binary VA: 0x10cdd40)
// Original: gameswf::render_handler_glitch::drawVideoBitmap
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::drawVideoBitmap(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[4];
  typedef int _g4_t_v24[3];
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v24)) > _g4_s7 ? (48u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v25)) > _g4_s8 ? (60u + sizeof(_g4_t_v25)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);

  v22 = (int)(uintptr_t)(a1 + 204);
  v8 = *(uint32_t *)(a3 + 68);
  if ( a1[514] != v8 && a1[217] != 0 )
  {
    sub_10C6160(v22);
    v8 = *(uint32_t *)(a3 + 68);
  }
  v9 = 0;
  v23[0] = v8;
  if ( v8 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
    v9 = v23[0];
  }
  v10 = a1[514];
  a1[514] = v9;
  v23[0] = v10;
  sub_5ED480(v23);
  if ( a1[217] != 0 )
    sub_10C6160(v22);
  v11 = 0;
  v24[0] = *(uint32_t *)(a4 + 68);
  if ( v24[0] != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v24[0] + 4), 1u);
    v11 = v24[0];
  }
  v12 = a1[516];
  a1[516] = v11;
  v24[0] = v12;
  sub_5ED480(v24);
  v13 = 0;
  v25 = *(uint32_t *)(a5 + 68);
  if ( v25 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v25 + 4), 1u);
    v13 = v25;
  }
  v14 = a1[517];
  a1[517] = v13;
  v25 = v14;
  sub_5ED480(&v25);
  v15 = a1[519];
  switch ( v15 )
  {
    case 3:
      if ( a1[217] != 0 )
        sub_10C6160(v22);
      a1[519] = 26;
      break;
    case 4:
      if ( a1[217] != 0 )
        sub_10C6160(v22);
      a1[519] = 27;
      break;
    case 13:
      if ( a1[217] != 0 )
        sub_10C6160(v22);
      a1[519] = 28;
      break;
    case 26:
    case 27:
    case 28:
      break;
    default:
      if ( v15 != 25 && a1[217] != 0 )
        sub_10C6160(v22);
      a1[519] = 25;
      break;
  }
  G4_VCALL<void>(a1, 108, a2, a3, a6, a7, a8, v17, v18, v19, v20, v21, v22, v23[0], v23[1], v23[2], v23[3], v24[0], v24[1], v24[2], v25);
  if ( a1[217] != 0 )
    sub_10C6160(a7);
  result = a1[519];
  if ( result != 0 )
  {
    result = a1[217];
    if ( result != 0 )
      result = sub_10C6160(a7);
  }
  a1[519] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::FillStyle::apply  (binary VA: 0x10cdf60)
// Original: gameswf::render_handler_glitch::FillStyle::apply
// ----------------------------------------------------------------------------
int16_t gameswf::render_handler_glitch::FillStyle::apply(gameswf::render_handler_glitch::FillStyle::Self *self, glitch::video::IVideoDriver::Self *a2, gameswf::BufferedRenderer::Self *a3, const gameswf::Matrix::Self *a4, float a5, const gameswf::Point::Self *a6, const bool *a7, Vertex *a8, int a9)
{
  gameswf::render_handler_glitch::FillStyle::Self *v9;
  gameswf::BufferedRenderer::Self *v10;
  const bool *v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  const gameswf::Point::Self *v22;
  int16_t *v23;
  int v24;
  float v25; // xmm0_4
  float v26; // xmm1_4
  Vertex *v27;
  bool v28;
  uint8_t *v29;
  int i;
  float v31; // xmm5_4
  float v32; // xmm5_4
  float v33; // xmm5_4
  float v34; // xmm5_4
  int v35;
  int v36;
  gameswf::render_handler_glitch::FillStyle::Self *v37;
  int v38;
  int v39;
  float *v40;
  float v41; // xmm4_4
  float v42; // xmm7_4
  float v43; // xmm6_4
  float v44; // xmm0_4
  float v45; // xmm4_4
  float v46; // xmm5_4
  float v47; // xmm6_4
  float v48; // xmm7_4
  int16_t *p_y;
  int v50;
  float v51; // xmm2_4
  float v52; // xmm1_4
  typedef float *_g4_t_p_x;
  typedef gameswf::render_handler_glitch::FillStyle::Self *_g4_t_v55;
  typedef float *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef glitch::video::ITexture::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef Vertex *_g4_t_v61;
  typedef float _g4_t_v62;
  typedef char _g4_t_v63;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef Vertex *_g4_t_v67;
  typedef Vertex *_g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_p_x)) > _g4_s0 ? (4u + sizeof(_g4_t_p_x)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v55)) > _g4_s1 ? (8u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v56)) > _g4_s2 ? (8u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v57)) > _g4_s3 ? (12u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v58)) > _g4_s4 ? (12u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v59)) > _g4_s5 ? (12u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v60)) > _g4_s6 ? (64u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v61)) > _g4_s7 ? (88u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v62)) > _g4_s8 ? (92u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v63)) > _g4_s9 ? (100u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (101u + sizeof(_g4_t_v64)) > _g4_s10 ? (101u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (102u + sizeof(_g4_t_v65)) > _g4_s11 ? (102u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (103u + sizeof(_g4_t_v66)) > _g4_s12 ? (103u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v67)) > _g4_s13 ? (104u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v68)) > _g4_s14 ? (104u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v69)) > _g4_s15 ? (108u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v70)) > _g4_s16 ? (108u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v71)) > _g4_s17 ? (108u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v72)) > _g4_s18 ? (112u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v73)) > _g4_s19 ? (128u + sizeof(_g4_t_v73)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_p_x &p_x = *reinterpret_cast<_g4_t_p_x *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 100u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 101u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 102u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 103u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 104u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 104u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 108u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 108u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 108u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 112u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 128u);

  v9 = self;
  v10 = a3;
  v11 = a7;
  v66 = *((uint8_t *)self + 6);
  v69 = *((uint32_t **)self + 2);
  v65 = *((uint8_t *)self + 5);
  v64 = *((uint8_t *)self + 4);
  v63 = *((uint8_t *)self + 7);
  if ( *((uint8_t *)self + 68) != 0 )
  {
g4_m128_raw(v15) = 0x3B808081u;
g4_m128_raw(v12) = *((unsigned int *)self + 16);
g4_m128_raw(v13) = *((unsigned int *)self + 14);
g4_m128_raw(v14) = *((unsigned int *)self + 12);
g4_m128_lane<float>(v12, 0) =g4_m128_lane<float>(v12, 0) * 0.003921569f;
g4_m128_lane<float>(v13, 0) =g4_m128_lane<float>(v13, 0) * 0.003921569f;
g4_m128_lane<float>(v14, 0) =g4_m128_lane<float>(v14, 0) * 0.003921569f;
g4_m128_lane<float>(v15, 0) = 0.003921569f * *((float *)self + 10);
    if ( *((uint8_t *)a3 + 1424) == 0
      || (v31 = *((float *)a3 + 357), (float)(g4_m128_lane<float>(v15, 0) + 0.000001f) < v31)
      || v31 < (float)(g4_m128_lane<float>(v15, 0) - 0.000001f)
      || (v32 = *((float *)a3 + 358), (float)(g4_m128_lane<float>(v14, 0) + 0.000001f) < v32)
      || v32 < (float)(g4_m128_lane<float>(v14, 0) - 0.000001f)
      || (v33 = *((float *)a3 + 359), (float)(g4_m128_lane<float>(v13, 0) + 0.000001f) < v33)
      || v33 < (float)(g4_m128_lane<float>(v13, 0) - 0.000001f)
      || (v34 = *((float *)a3 + 360), (float)(g4_m128_lane<float>(v12, 0) + 0.000001f) < v34)
      || v34 < (float)(g4_m128_lane<float>(v12, 0) - 0.000001f) )
    {
      if ( *((uint32_t *)a3 + 13) != 0 )
      {
        sub_10C6160((int)(uintptr_t)(a3));
g4_m128_raw(v12) =g4_m128_lane<uint32_t>(v12, 0);
        v10 = a3;
g4_m128_raw(v13) =g4_m128_lane<uint32_t>(v13, 0);
        v9 = self;
g4_m128_raw(v14) =g4_m128_lane<uint32_t>(v14, 0);
g4_m128_raw(v15) =g4_m128_lane<uint32_t>(v15, 0);
      }
    }
g4_m128_lane<uint64_t>(v16, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v15, v14), 0);
g4_m128_lane<uint64_t>(v16, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v13, v12), 0);
    *((uint8_t *)v10 + 1424) = 1;
    _mm_storel_ps((double *)((char *)v10 + 1428), v16);
    _mm_storeh_ps((double *)((char *)v10 + 1436), v16);
    v17 = *(uint32_t *)v9;
    if ( *(uint32_t *)v9 == 1 )
      goto LABEL_6;
LABEL_18:
    v28 = v17 == 2;
    v22 = (const gameswf::Point::Self *)(v17 - 2);
    if ( v28 || v22 == (const gameswf::Point::Self *)((char *)&dword_0 + 1) )
    {
      v55 = v9;
      v58 = (int)(uintptr_t)(v10);
      G4_VCALL<void>(v69, 8);
      v35 = v58;
      v36 = v69[17];
      v37 = v55;
      if ( *(uint32_t *)(v58 + 1240) != v36 && *(uint32_t *)(v58 + 52) != 0 )
      {
        sub_10C6160(v58);
        v36 = v69[17];
        v35 = v58;
        v37 = v55;
      }
      v38 = 0;
      v73 = v36;
      if ( v36 != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v36 + 4), 1u);
        v38 = v73;
      }
      v39 = *(uint32_t *)(v35 + 1240);
      *(uint32_t *)(v35 + 1240) = v38;
      v73 = v39;
      v56 = (float *)v37;
      sub_5ED480(&v73);
      v40 = v56;
      if ( v69[17] != 0 )
      {
        v59 = (glitch::video::ITexture::Self *)v69[17];
        v60 = 2 * (*(uint32_t *)v56 != 2);
        glitch::video::ITexture::setWrap(v59, 0, v60);
        glitch::video::ITexture::setWrap(v59, 1, v60);
        glitch::video::ITexture::setWrap(v59, 2, v60);
        v40 = v56;
      }
      v22 = *((const gameswf::Point::Self **)v40 + 2);
      v41 = *((float *)v22 + 8) / (float)*((int *)v22 + 4);
      v42 = *((float *)v22 + 9) / (float)*((int *)v22 + 5);
      v43 = v40[4] * v41;
      v44 = v40[3] * v41;
      v45 = v41 * v40[5];
      v62 = v43;
      v46 = v40[6] * v42;
      v47 = v40[7] * v42;
      v48 = v42 * v40[8];
      if ( a9 > 0 )
      {
        v22 = a6;
        v71 = 0;
        p_x = (float *)&a8->x;
        v68 = a8 + 2;
        p_y = &a8[1].y;
        do
        {
          v50 = (char *)p_x - (char *)a8;
          ++v71;
          *(float *)((char *)&v68->x + v50) = (float)((float)(*(float *)v22 * *(float *)a4)
                                                    + (float)(*((float *)v22 + 1) * *((float *)a4 + 1)))
                                            + *((float *)a4 + 2);
          *(float *)((char *)&v68->flags + v50) = (float)((float)(*(float *)v22 * *((float *)a4 + 3))
                                                        + (float)(*((float *)v22 + 1) * *((float *)a4 + 4)))
                                                + *((float *)a4 + 5);
          *(float *)((char *)&v68[1].y + v50) = a5;
          v51 = *(float *)v22;
          v52 = *((float *)v22 + 1);
          v22 = (const gameswf::Point::Self *)((char *)v22 + 8);
          *p_x = (float)((float)(v44 * v51) + (float)(v62 * v52)) + v45;
          p_x[1] = (float)((float)(v51 * v46) + (float)(v52 * v47)) + v48;
          *(uint8_t *)p_y = v64;
          *((uint8_t *)p_y + 1) = v65;
          *((uint8_t *)p_y + 2) = v66;
          *((uint8_t *)p_y + 3) = v63;
          p_x += 6;
          p_y += 12;
        }
        while ( v71 != a9 );
        v11 = a7;
      }
    }
    goto LABEL_19;
  }
  if ( *((uint8_t *)a3 + 1424) != 0 && *((uint32_t *)a3 + 13) != 0 )
  {
    sub_10C6160((int)(uintptr_t)(a3));
    v10 = a3;
    v9 = self;
  }
  *((uint8_t *)v10 + 1424) = 0;
  v17 = *(uint32_t *)v9;
  if ( *(uint32_t *)v9 != 1 )
    goto LABEL_18;
LABEL_6:
  v57 = (int)(uintptr_t)(v10);
  G4_VCALL<void>(v69, 8);
  v18 = v57;
  v19 = v69[17];
  if ( *(uint32_t *)(v57 + 1240) != v19 && *(uint32_t *)(v57 + 52) != 0 )
  {
    sub_10C6160(v57);
    v19 = v69[17];
    v18 = v57;
  }
  v20 = 0;
  v72 = v19;
  if ( v19 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v19 + 4), 1u);
    v20 = v72;
  }
  v21 = *(uint32_t *)(v18 + 1240);
  *(uint32_t *)(v18 + 1240) = v20;
  v72 = v21;
  sub_5ED480(&v72);
  LOWORD(v22) = a9;
  if ( a9 > 0 )
  {
    v22 = a6;
    v70 = 0;
    v61 = a8;
    v67 = a8 + 2;
    v23 = &a8[1].y;
    do
    {
      v24 = (char *)v61 - (char *)a8;
      ++v70;
      *(float *)((char *)&v67->x + v24) = (float)((float)(*(float *)v22 * *(float *)a4)
                                                + (float)(*((float *)v22 + 1) * *((float *)a4 + 1)))
                                        + *((float *)a4 + 2);
      v25 = *(float *)v22;
      v26 = *((float *)v22 + 1);
      v22 = (const gameswf::Point::Self *)((char *)v22 + 8);
      *(float *)((char *)&v67->flags + v24) = (float)((float)(v25 * *((float *)a4 + 3))
                                                    + (float)(v26 * *((float *)a4 + 4)))
                                            + *((float *)a4 + 5);
      *(float *)((char *)&v67[1].y + v24) = a5;
      v27 = v61;
      v61 += 4;
      v27->x = 0;
      v27->y = 0;
      *(uint32_t *)&v27->flags = 0;
      *(uint8_t *)v23 = v64;
      *((uint8_t *)v23 + 1) = v65;
      *((uint8_t *)v23 + 2) = v66;
      *((uint8_t *)v23 + 3) = v63;
      v23 += 12;
    }
    while ( v70 != a9 );
    if ( a7 == nullptr )
      return (int16_t)(uintptr_t)(v22);
    goto LABEL_20;
  }
LABEL_19:
  if ( v11 == nullptr )
    return (int16_t)(uintptr_t)(v22);
LABEL_20:
  if ( a9 > 0 )
  {
    v29 = (uint8_t *)((char *)&a8[1].flags + 1);
    for ( i = 0; i != a9; ++i )
    {
      LOWORD(v22) = (uint8_t)*v29 * v11[i];
      *v29 = (uint8_t)(uintptr_t)(v22);
      v29 += 24;
    }
  }
  return (int16_t)(uintptr_t)(v22);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::drawLineStrip  (binary VA: 0x10ce6a0)
// Original: gameswf::render_handler_glitch::drawLineStrip
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::drawLineStrip(gameswf::render_handler_glitch::Self *self, float *a2, int a3)
{
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  int v9;
  bool v10;
  int v11;
  int v12;
  float v13;
  uint32_t *v14;
  float *v15;
  uint8_t *v16;
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm7_4
  float v24; // xmm1_4
  typedef uint32_t *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef int _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef int _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef int _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t _g4_t_v58[16];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v27)) > _g4_s1 ? (32u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v28)) > _g4_s2 ? (36u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v29)) > _g4_s3 ? (40u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v30)) > _g4_s4 ? (44u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v31)) > _g4_s5 ? (48u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v32)) > _g4_s6 ? (52u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v33)) > _g4_s7 ? (56u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v34)) > _g4_s8 ? (60u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v35)) > _g4_s9 ? (64u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v36)) > _g4_s10 ? (68u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v37)) > _g4_s11 ? (72u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (73u + sizeof(_g4_t_v38)) > _g4_s12 ? (73u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (74u + sizeof(_g4_t_v39)) > _g4_s13 ? (74u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (75u + sizeof(_g4_t_v40)) > _g4_s14 ? (75u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v41)) > _g4_s15 ? (80u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v42)) > _g4_s16 ? (96u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v43)) > _g4_s17 ? (100u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v44)) > _g4_s18 ? (104u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v45)) > _g4_s19 ? (108u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v46)) > _g4_s20 ? (112u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v47)) > _g4_s21 ? (116u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v48)) > _g4_s22 ? (120u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v49)) > _g4_s23 ? (124u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v50)) > _g4_s24 ? (128u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v51)) > _g4_s25 ? (132u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v52)) > _g4_s26 ? (136u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v53)) > _g4_s27 ? (140u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v54)) > _g4_s28 ? (144u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v55)) > _g4_s29 ? (148u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v56)) > _g4_s30 ? (152u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v57)) > _g4_s31 ? (156u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v58)) > _g4_s32 ? (160u + sizeof(_g4_t_v58)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 73u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 74u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 75u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 132u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 144u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 148u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 152u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 156u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 160u);

  v3 = *((float *)self + 597);
  v4 = *((float *)self + 598);
  v5 = *((float *)self + 600);
  v6 = *((float *)self + 601);
  v7 = fsqrt((float)(v4 * v4) + (float)(v3 * v3));
  if ( (float)((float)(v3 * v6) - (float)(v4 * v5)) < 0.0 )
    v7 = -v7;
  v27 = (char *)self + 816;
  v8 = (float)(0.5 * *((float *)self + 711)) * (float)(fabs(fsqrt((float)(v5 * v5) + (float)(v6 * v6))) + fabs(v7));
  if ( v8 != *((float *)self + 523) && *((uint32_t *)self + 217) != 0 )
    sub_10C6160((int)(uintptr_t)(self) + 816);
  v9 = *((uint32_t *)self + 649);
  v10 = *((uint32_t *)self + 514) == v9;
  *((float *)self + 523) = v8;
  if ( !v10 && *((uint32_t *)self + 217) != 0 )
  {
    sub_10C6160((int)(uintptr_t)(v27));
    v9 = *((uint32_t *)self + 649);
  }
  v11 = 0;
  v41 = v9;
  if ( v9 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1u);
    v11 = v41;
  }
  v12 = *((uint32_t *)self + 514);
  *((uint32_t *)self + 514) = v11;
  v41 = v12;
  sub_5ED480(&v41);
  v40 = *((uint8_t *)self + 2778);
  v39 = *((uint8_t *)self + 2777);
  v38 = *((uint8_t *)self + 2776);
  v37 = *((uint8_t *)self + 2779);
  if ( a3 > *((uint32_t *)self + 623) )
    gameswf::array_gameswf_Vertex_1a1ff6::resize((gameswf::render_handler_glitch::Self *)((char *)self + 2488), a3);
  memset(v58, 0, sizeof(v58));
  v13 = *((float *)self + 597);
  v58[10] = 1065353216;
  *(float *)v58 = v13;
  v58[1] = *((uint32_t *)self + 600);
  v58[4] = *((uint32_t *)self + 598);
  v58[5] = *((uint32_t *)self + 601);
  v58[12] = *((uint32_t *)self + 599);
  v58[13] = *((uint32_t *)self + 602);
  v42 = v13;
  v43 = *(float *)&v58[1];
  v44 = *(float *)&v58[2];
  v45 = v58[3];
  v46 = *(float *)&v58[4];
  v47 = *(float *)&v58[5];
  v48 = *(float *)&v58[6];
  v49 = v58[7];
  v50 = *(float *)&v58[8];
  v58[15] = 1065353216;
  v51 = *(float *)&v58[9];
  v14 = *((uint32_t **)self + 622);
  v53 = v58[11];
  *(float *)&v52 = 1.0;
  v54 = *(float *)&v58[12];
  v55 = *(float *)&v58[13];
  v56 = *(float *)&v58[14];
  v57 = 1065353216;
  if ( v14 != &v14[6 * a3] )
  {
    v15 = (float *)(v14 + 3);
    v36 = v54;
    v16 = (uint8_t *)(v14 + 2);
    v35 = v43;
    v26 = v14;
    v34 = v47;
    v33 = v51;
    v32 = v55;
    v31 = v44;
    v30 = v48;
    v29 = *(float *)&v52;
    v18 = v42;
    v19 = v46;
    v20 = v50;
    v28 = v56;
    do
    {
      v21 = *((float *)self + 612);
      v22 = *a2;
      v23 = *a2 * v18;
      v24 = a2[1];
      a2 += 2;
      *v15 = (float)((float)((float)(v20 * v21) + v36) + v23) + (float)(v24 * v19);
      v15[1] = (float)((float)((float)(v33 * v21) + v32) + (float)(v35 * v22)) + (float)(v34 * v24);
      v15[2] = (float)((float)((float)(v21 * v29) + v28) + (float)(v22 * v31)) + (float)(v24 * v30);
      *v16 = v38;
      v15 += 6;
      v16[1] = v39;
      v16[2] = v40;
      v16[3] = v37;
      v16 += 24;
      *v26 = 0;
      v26[1] = 0;
      v26 += 6;
    }
    while ( &v14[6 * a3] != v26 );
    v14 = *((uint32_t **)self + 622);
  }
  if ( *((uint8_t *)self + 52) == 0 && *((uint32_t *)self + 6) != 0 )
  {
    gameswf::RenderHandler::transformPositions(self, (gameswf::vector3df::Self *)(v14 + 3), 24, a3);
    v14 = *((uint32_t **)self + 622);
  }
  return gameswf::BufferedRenderer::queueBuffer((int)(uintptr_t)(v27), v14, a3, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::drawImpl  (binary VA: 0x10ceb80)
// Original: gameswf::render_handler_glitch::drawImpl
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::drawImpl(gameswf::RenderHandler::Self *a1, int a2)
{
  int result;
  int v3;
  int v4;
  const bool *v5;
  gameswf::BufferedRenderer::Self *v6;
  uint16_t v7;
  typedef gameswf::Point::Self *_g4_t_v8;
  typedef uint32_t _g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  if ( *(uint8_t *)a2 == 2 )
    return gameswf::render_handler_glitch::drawLineStrip((gameswf::render_handler_glitch::Self *)(a1), *(float **)(a2 + 4), *(uint16_t *)(a2 + 12));
  result = *(uint8_t *)a2 != 1;
  v3 = 2 * result + 4;
  if ( (*((float *)a1 + 670) != 0.0 || *((float *)a1 + 671) != 0.0)
    && (*((uint32_t *)a1 + 655) != 1 || (float)(result = *((uint8_t *)a1 + 2627)) != 0.0) )
  {
    result = *(uint32_t *)(a2 + 16);
    if ( result == 0
      || *(uint8_t *)(result + 16) == 0
      || *((float *)a1 + 598) != 0.0
      || *((float *)a1 + 600) != 0.0
      || *((uint8_t *)a1 + 52) == 0 && *((uint32_t *)a1 + 6) != 0 )
    {
      v4 = *(uint16_t *)(a2 + 12);
      if ( v4 + 2 > *((uint32_t *)a1 + 623) )
      {
        gameswf::array_gameswf_Vertex_1a1ff6::resize((gameswf::RenderHandler::Self *)((char *)a1 + 2488), v4 + 2);
        v4 = *(uint16_t *)(a2 + 12);
        result = *(uint32_t *)(a2 + 16);
      }
      v8 = *(gameswf::Point::Self **)(a2 + 4);
      std::memcpy(v9, (char *)a1 + 2388, 24);
      v5 = nullptr;
      if ( result != 0 )
        v5 = *(const bool **)result;
      gameswf::render_handler_glitch::FillStyle::apply(
        (gameswf::render_handler_glitch::FillStyle::Self *)((gameswf::RenderHandler::Self *)((char *)a1 + 2620)),
        *((glitch::video::IVideoDriver::Self **)a1 + 90),
        (gameswf::BufferedRenderer::Self *)((gameswf::RenderHandler::Self *)((char *)a1 + 816)),
        (const gameswf::Matrix::Self *)v9,
        *((float *)a1 + 612),
        v8,
        v5,
        *((Vertex **)a1 + 622),
        v4);
      v6 = (gameswf::BufferedRenderer::Self *)((gameswf::RenderHandler::Self *)((char *)a1 + 816));
      if ( *((uint8_t *)a1 + 52) == 0 && *((uint32_t *)a1 + 6) != 0 )
      {
        gameswf::RenderHandler::transformPositions(
          a1,
          (gameswf::vector3df::Self *)(*((uint32_t *)a1 + 622) + 12),
          24,
          *(uint16_t *)(a2 + 12));
        v6 = (gameswf::BufferedRenderer::Self *)((gameswf::RenderHandler::Self *)((char *)a1 + 816));
      }
      if ( *(uint32_t *)(a2 + 8) != 0 && (v7 = *(uint16_t *)(a2 + 14)) != 0 )
        return gameswf::BufferedRenderer::queueIndexedTriangles(
                 v6,
                 *((const Vertex **)a1 + 622),
                 *(uint16_t *)(a2 + 12),
                 *(const uint16_t **)(a2 + 8),
                 v7);
      else
        return gameswf::BufferedRenderer::queueBuffer(
                 (int)(uintptr_t)(v6),
                 *((uint32_t **)a1 + 622),
                 *(uint16_t *)(a2 + 12),
                 v3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::Construct  (binary VA: 0x10cee10)
// Original: gameswf::render_handler_glitch::render_handler_glitch
// ----------------------------------------------------------------------------
void gameswf::render_handler_glitch::Construct(__m128d a1, uint32_t *a2, glitch::video::IVideoDriver::Self **a3)
{
  uint32_t *v3;
  uint16_t *v4;
  glitch::video::IVideoDriver::Self **v5;
  bool v6;
  unsigned int v7;
  uint16_t *v8;
  unsigned int v9;
  uint16_t *v10;
  uint16_t *v11;
  uint16_t *v12;
  unsigned int v13;
  uint16_t *v14;
  glitch::video::IVideoDriver::Self *v15;
  unsigned int v16;
  uint16_t *v17;
  uint16_t *v18;
  uint16_t *v19;
  unsigned int v20;
  uint16_t *v21;
  unsigned int v22;
  uint16_t *v23;
  uint16_t *v24;
  uint16_t *v25;
  unsigned int v26;
  uint16_t *v27;
  unsigned int v28;
  uint16_t *v29;
  uint16_t *v30;
  uint16_t *v31;
  unsigned int v32;
  uint16_t *v33;
  uint16_t *v34;
  unsigned int v35;
  uint16_t *v36;
  void *v37;
  char *v38;
  gameswf::Self *v39;
  unsigned int v40;
  uint16_t *v41;
  uint16_t *v42;
  uint16_t *v43;
  unsigned int v44;
  uint16_t *v45;
  unsigned int v46;
  uint16_t *v47;
  uint16_t *v48;
  bool v49; // cc
  volatile int32_t *v50;
  __m128d v51;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v52;
  __m128d v53;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v54;
  __m128d v55;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v56;
  __m128d v57;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v58;
  __m128d v59;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v60;
  __m128d v61;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v62;
  __m128d v63;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v64;
  volatile int32_t *v65;
  __m128d v66;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v67;
  __m128d v68;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v69;
  __m128d v70;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v71;
  __m128d v72;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v73;
  volatile int32_t *v74;
  __m128d v75;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v76;
  __m128d v77;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v78;
  __m128d v79;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v80;
  __m128d v81;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v82;
  __m128d v83;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v84;
  __m128d v85;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v86;
  __m128d v87;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v88;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v89;
  int v90;
  int v91;
  glitch::video::IVideoDriver::Self *v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  char *v98;
  float **v99;
  int v100;
  float *v101;
  float v102; // xmm0_4
  int v103;
  int v104;
  gameswf::Self *v105;
  glitch::video::IVideoDriver::Self *v106;
  int v107;
  int v108;
  int v109;
  gameswf::RefCounted::Self *v110;
  int v111;
  int v112;
  char *v113;
  gameswf::RefCounted::Self **v114;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v115;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v116;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v117;
  int v118;
  gameswf::Self *v119;
  gameswf::Self *v120;
  int savedregs;
  typedef size_t _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef glitch::video::IVideoDriver::Self **_g4_t_v127;
  typedef int _g4_t_v128;
  typedef float _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef float _g4_t_v133;
  typedef uint32_t *_g4_t_v134;
  typedef float _g4_t_v135;
  typedef gameswf::BitmapInfoImpl::Self *_g4_t_v136;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v137;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v138;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v139;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v140;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v141;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v142;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v143;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v144;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v145;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v146;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v147;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v148;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v149;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v150;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v151;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v152;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v153;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v154;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v155;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v156;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v157;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v158;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v159;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v160;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v161;
  typedef uint32_t *_g4_t_v162;
  typedef volatile int32_t *_g4_t_v163;
  typedef uint32_t *_g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef volatile int32_t **_g4_t_v167[5];
  typedef unsigned int _g4_t_v168[9];
  typedef int _g4_t_v169[2];
  typedef char _g4_t_v170;
  typedef char _g4_t_v171;
  typedef char *_g4_t_v172;
  typedef gameswf::Self *_g4_t_v173;
  typedef int _g4_t_v174;
  typedef unsigned int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef int _g4_t_v181;
  typedef int _g4_t_v182;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v183;
  typedef int _g4_t_v184[2];
  typedef char _g4_t_v185;
  typedef char _g4_t_v186;
  typedef gameswf::Self *_g4_t_v187;
  typedef int16_t _g4_t_v188;
  typedef char _g4_t_v189;
  typedef char _g4_t_v190;
  typedef uint32_t **_g4_t_v191;
  enum : size_t {
    _g4_s0 = 720u,
    _g4_s1 = (4u + sizeof(_g4_t_v121)) > _g4_s0 ? (4u + sizeof(_g4_t_v121)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v122)) > _g4_s1 ? (32u + sizeof(_g4_t_v122)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v123)) > _g4_s2 ? (36u + sizeof(_g4_t_v123)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v124)) > _g4_s3 ? (36u + sizeof(_g4_t_v124)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v125)) > _g4_s4 ? (36u + sizeof(_g4_t_v125)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v126)) > _g4_s5 ? (36u + sizeof(_g4_t_v126)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v127)) > _g4_s6 ? (40u + sizeof(_g4_t_v127)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v128)) > _g4_s7 ? (44u + sizeof(_g4_t_v128)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v129)) > _g4_s8 ? (48u + sizeof(_g4_t_v129)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v130)) > _g4_s9 ? (52u + sizeof(_g4_t_v130)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v131)) > _g4_s10 ? (56u + sizeof(_g4_t_v131)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v132)) > _g4_s11 ? (60u + sizeof(_g4_t_v132)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v133)) > _g4_s12 ? (76u + sizeof(_g4_t_v133)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v134)) > _g4_s13 ? (80u + sizeof(_g4_t_v134)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v135)) > _g4_s14 ? (84u + sizeof(_g4_t_v135)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v136)) > _g4_s15 ? (84u + sizeof(_g4_t_v136)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v137)) > _g4_s16 ? (88u + sizeof(_g4_t_v137)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v138)) > _g4_s17 ? (88u + sizeof(_g4_t_v138)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v139)) > _g4_s18 ? (92u + sizeof(_g4_t_v139)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v140)) > _g4_s19 ? (108u + sizeof(_g4_t_v140)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v141)) > _g4_s20 ? (124u + sizeof(_g4_t_v141)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v142)) > _g4_s21 ? (140u + sizeof(_g4_t_v142)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v143)) > _g4_s22 ? (156u + sizeof(_g4_t_v143)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v144)) > _g4_s23 ? (172u + sizeof(_g4_t_v144)) : _g4_s23,
    _g4_s25 = (188u + sizeof(_g4_t_v145)) > _g4_s24 ? (188u + sizeof(_g4_t_v145)) : _g4_s24,
    _g4_s26 = (204u + sizeof(_g4_t_v146)) > _g4_s25 ? (204u + sizeof(_g4_t_v146)) : _g4_s25,
    _g4_s27 = (220u + sizeof(_g4_t_v147)) > _g4_s26 ? (220u + sizeof(_g4_t_v147)) : _g4_s26,
    _g4_s28 = (236u + sizeof(_g4_t_v148)) > _g4_s27 ? (236u + sizeof(_g4_t_v148)) : _g4_s27,
    _g4_s29 = (252u + sizeof(_g4_t_v149)) > _g4_s28 ? (252u + sizeof(_g4_t_v149)) : _g4_s28,
    _g4_s30 = (268u + sizeof(_g4_t_v150)) > _g4_s29 ? (268u + sizeof(_g4_t_v150)) : _g4_s29,
    _g4_s31 = (284u + sizeof(_g4_t_v151)) > _g4_s30 ? (284u + sizeof(_g4_t_v151)) : _g4_s30,
    _g4_s32 = (300u + sizeof(_g4_t_v152)) > _g4_s31 ? (300u + sizeof(_g4_t_v152)) : _g4_s31,
    _g4_s33 = (316u + sizeof(_g4_t_v153)) > _g4_s32 ? (316u + sizeof(_g4_t_v153)) : _g4_s32,
    _g4_s34 = (332u + sizeof(_g4_t_v154)) > _g4_s33 ? (332u + sizeof(_g4_t_v154)) : _g4_s33,
    _g4_s35 = (348u + sizeof(_g4_t_v155)) > _g4_s34 ? (348u + sizeof(_g4_t_v155)) : _g4_s34,
    _g4_s36 = (364u + sizeof(_g4_t_v156)) > _g4_s35 ? (364u + sizeof(_g4_t_v156)) : _g4_s35,
    _g4_s37 = (380u + sizeof(_g4_t_v157)) > _g4_s36 ? (380u + sizeof(_g4_t_v157)) : _g4_s36,
    _g4_s38 = (396u + sizeof(_g4_t_v158)) > _g4_s37 ? (396u + sizeof(_g4_t_v158)) : _g4_s37,
    _g4_s39 = (412u + sizeof(_g4_t_v159)) > _g4_s38 ? (412u + sizeof(_g4_t_v159)) : _g4_s38,
    _g4_s40 = (428u + sizeof(_g4_t_v160)) > _g4_s39 ? (428u + sizeof(_g4_t_v160)) : _g4_s39,
    _g4_s41 = (444u + sizeof(_g4_t_v161)) > _g4_s40 ? (444u + sizeof(_g4_t_v161)) : _g4_s40,
    _g4_s42 = (452u + sizeof(_g4_t_v162)) > _g4_s41 ? (452u + sizeof(_g4_t_v162)) : _g4_s41,
    _g4_s43 = (456u + sizeof(_g4_t_v163)) > _g4_s42 ? (456u + sizeof(_g4_t_v163)) : _g4_s42,
    _g4_s44 = (460u + sizeof(_g4_t_v164)) > _g4_s43 ? (460u + sizeof(_g4_t_v164)) : _g4_s43,
    _g4_s45 = (464u + sizeof(_g4_t_v165)) > _g4_s44 ? (464u + sizeof(_g4_t_v165)) : _g4_s44,
    _g4_s46 = (468u + sizeof(_g4_t_v166)) > _g4_s45 ? (468u + sizeof(_g4_t_v166)) : _g4_s45,
    _g4_s47 = (472u + sizeof(_g4_t_v167)) > _g4_s46 ? (472u + sizeof(_g4_t_v167)) : _g4_s46,
    _g4_s48 = (492u + sizeof(_g4_t_v168)) > _g4_s47 ? (492u + sizeof(_g4_t_v168)) : _g4_s47,
    _g4_s49 = (528u + sizeof(_g4_t_v169)) > _g4_s48 ? (528u + sizeof(_g4_t_v169)) : _g4_s48,
    _g4_s50 = (536u + sizeof(_g4_t_v170)) > _g4_s49 ? (536u + sizeof(_g4_t_v170)) : _g4_s49,
    _g4_s51 = (537u + sizeof(_g4_t_v171)) > _g4_s50 ? (537u + sizeof(_g4_t_v171)) : _g4_s50,
    _g4_s52 = (540u + sizeof(_g4_t_v172)) > _g4_s51 ? (540u + sizeof(_g4_t_v172)) : _g4_s51,
    _g4_s53 = (548u + sizeof(_g4_t_v173)) > _g4_s52 ? (548u + sizeof(_g4_t_v173)) : _g4_s52,
    _g4_s54 = (552u + sizeof(_g4_t_v174)) > _g4_s53 ? (552u + sizeof(_g4_t_v174)) : _g4_s53,
    _g4_s55 = (556u + sizeof(_g4_t_v175)) > _g4_s54 ? (556u + sizeof(_g4_t_v175)) : _g4_s54,
    _g4_s56 = (560u + sizeof(_g4_t_v176)) > _g4_s55 ? (560u + sizeof(_g4_t_v176)) : _g4_s55,
    _g4_s57 = (564u + sizeof(_g4_t_v177)) > _g4_s56 ? (564u + sizeof(_g4_t_v177)) : _g4_s56,
    _g4_s58 = (568u + sizeof(_g4_t_v178)) > _g4_s57 ? (568u + sizeof(_g4_t_v178)) : _g4_s57,
    _g4_s59 = (572u + sizeof(_g4_t_v179)) > _g4_s58 ? (572u + sizeof(_g4_t_v179)) : _g4_s58,
    _g4_s60 = (576u + sizeof(_g4_t_v180)) > _g4_s59 ? (576u + sizeof(_g4_t_v180)) : _g4_s59,
    _g4_s61 = (580u + sizeof(_g4_t_v181)) > _g4_s60 ? (580u + sizeof(_g4_t_v181)) : _g4_s60,
    _g4_s62 = (584u + sizeof(_g4_t_v182)) > _g4_s61 ? (584u + sizeof(_g4_t_v182)) : _g4_s61,
    _g4_s63 = (588u + sizeof(_g4_t_v183)) > _g4_s62 ? (588u + sizeof(_g4_t_v183)) : _g4_s62,
    _g4_s64 = (592u + sizeof(_g4_t_v184)) > _g4_s63 ? (592u + sizeof(_g4_t_v184)) : _g4_s63,
    _g4_s65 = (600u + sizeof(_g4_t_v185)) > _g4_s64 ? (600u + sizeof(_g4_t_v185)) : _g4_s64,
    _g4_s66 = (601u + sizeof(_g4_t_v186)) > _g4_s65 ? (601u + sizeof(_g4_t_v186)) : _g4_s65,
    _g4_s67 = (612u + sizeof(_g4_t_v187)) > _g4_s66 ? (612u + sizeof(_g4_t_v187)) : _g4_s66,
    _g4_s68 = (616u + sizeof(_g4_t_v188)) > _g4_s67 ? (616u + sizeof(_g4_t_v188)) : _g4_s67,
    _g4_s69 = (618u + sizeof(_g4_t_v189)) > _g4_s68 ? (618u + sizeof(_g4_t_v189)) : _g4_s68,
    _g4_s70 = (619u + sizeof(_g4_t_v190)) > _g4_s69 ? (619u + sizeof(_g4_t_v190)) : _g4_s69,
    _g4_s71 = (628u + sizeof(_g4_t_v191)) > _g4_s70 ? (628u + sizeof(_g4_t_v191)) : _g4_s70
  };
  alignas(16) uint8_t _g4_sf[_g4_s71];
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 4u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 32u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 36u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 36u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 36u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 36u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 40u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 44u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 48u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 52u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 56u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 60u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 76u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 80u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 84u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 84u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 88u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 88u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 92u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 108u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 124u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 140u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 156u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 172u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 188u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 204u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 220u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 236u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 252u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 268u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 284u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 300u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 316u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 332u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 348u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 364u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 380u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 396u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 412u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 428u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 444u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 452u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 456u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 460u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 464u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 468u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 472u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 492u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 528u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 536u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 537u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 540u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 548u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 552u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 556u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 560u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 564u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 568u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 572u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 576u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 580u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 584u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 588u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 592u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 600u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 601u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 612u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 616u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 618u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 619u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 628u);

  v191 = &a2;
  v134 = a2;
  v3 = a2;
  v4 = (uint16_t *)(a2 + 29);
  v5 = a3;
  v6 = ((unsigned int)(uintptr_t)(a2 + 29) & 1) == 0;
  *a2 = ((uint32_t)(uintptr_t)&off_208ED48);
  *((uint8_t *)v3 + 4) = 1;
  v3[2] = 1148846080;
  v3[3] = 1119092736;
  v3[4] = 1065353216;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[12] = 0;
  *((uint8_t *)v3 + 52) = 1;
  v3[14] = 0;
  v3[15] = 0;
  v3[16] = 0;
  v3[17] = 1065353216;
  v3[18] = 1065353216;
  v127 = v5;
  v3[19] = 1065353216;
  v3[20] = 0;
  v3[21] = 0;
  v3[22] = 0;
  v3[23] = 0;
  v3[24] = 0;
  v7 = 24;
  if ( v6 )
  {
    if ( ((uint8_t)(uintptr_t)(v4) & 2) == 0 )
      goto LABEL_3;
  }
  else
  {
    LOBYTE(v7) = 23;
    v4 = (uint16_t *)((char *)v134 + 117);
    *((uint8_t *)v134 + 116) = 0;
    if ( (((unsigned int)(uintptr_t)(v134) + 117) & 2) == 0 )
      goto LABEL_3;
  }
  *v4 = 0;
  v7 -= 2;
  ++v4;
LABEL_3:
  memset(v4, 0, 4 * (v7 >> 2));
  v8 = &v4[2 * (v7 >> 2)];
  if ( (v7 & 2) != 0 )
    *v8++ = 0;
  if ( (v7 & 1) != 0 )
    *(uint8_t *)v8 = 0;
  v9 = 24;
  v10 = (uint16_t *)(v134 + 44);
  v134[29] = 1065353216;
  v134[33] = 1065353216;
  v134[35] = 1065353216;
  v134[37] = 1065353216;
  v134[39] = 1065353216;
  v134[41] = 1065353216;
  v134[36] = 0;
  v134[38] = 0;
  v134[40] = 0;
  v134[42] = 0;
  v134[43] = 0;
  if ( ((unsigned int)(uintptr_t)(v134 + 44) & 1) != 0 )
  {
    v10 = (uint16_t *)((char *)v134 + 177);
    *((uint8_t *)v134 + 176) = 0;
    LOBYTE(v9) = 23;
    if ( (((unsigned int)(uintptr_t)(v134) + 177) & 2) == 0 )
      goto LABEL_9;
  }
  else if ( (((uint8_t)(uintptr_t)(v134) - 80) & 2) == 0 )
  {
    goto LABEL_9;
  }
  *v10 = 0;
  v9 -= 2;
  ++v10;
LABEL_9:
  memset(v10, 0, 4 * (v9 >> 2));
  v11 = &v10[2 * (v9 >> 2)];
  if ( (v9 & 2) != 0 )
    *v11++ = 0;
  if ( (v9 & 1) != 0 )
    *(uint8_t *)v11 = 0;
  v12 = (uint16_t *)(v134 + 54);
  v134[44] = 1065353216;
  v134[48] = 1065353216;
  *((uint8_t *)v134 + 200) = -1;
  *((uint8_t *)v134 + 201) = -1;
  *((uint8_t *)v134 + 202) = -1;
  *((uint8_t *)v134 + 203) = -1;
  v134[51] = 1065353216;
  v134[52] = 0;
  v134[53] = 0;
  v13 = 64;
  if ( ((unsigned int)(uintptr_t)(v134 + 54) & 1) != 0 )
  {
    LOBYTE(v13) = 63;
    v12 = (uint16_t *)((char *)v134 + 217);
    *((uint8_t *)v134 + 216) = 0;
    if ( (((unsigned int)(uintptr_t)(v134) + 217) & 2) == 0 )
      goto LABEL_15;
  }
  else if ( (((uint8_t)(uintptr_t)(v134) - 40) & 2) == 0 )
  {
    goto LABEL_15;
  }
  *v12 = 0;
  v13 -= 2;
  ++v12;
LABEL_15:
  memset(v12, 0, 4 * (v13 >> 2));
  v14 = &v12[2 * (v13 >> 2)];
  if ( (v13 & 2) != 0 )
    *v14++ = 0;
  if ( (v13 & 1) != 0 )
    *(uint8_t *)v14 = 0;
  v134[69] = 1065353216;
  v134[64] = 1065353216;
  v134[59] = 1065353216;
  v134[54] = 1065353216;
  *((uint8_t *)v134 + 280) = 0;
  v134[71] = 0;
  v134[72] = 0;
  v134[73] = 0;
  v134[74] = 0;
  v134[75] = 0;
  v134[76] = 0;
  v134[77] = 0;
  v134[78] = 0;
  v134[79] = 0;
  v134[80] = 0;
  v134[81] = 0;
  v134[82] = 0;
  v134[83] = 0;
  v134[84] = 0;
  v134[85] = 0;
  v134[86] = 0;
  *((uint8_t *)v134 + 348) = 0;
  v134[88] = 0;
  v134[89] = 0;
  *v134 = ((uint32_t)(uintptr_t)&off_208EF28);
  v15 = *v5;
  v6 = *v5 == nullptr;
  v134[90] = (uint32_t)(uintptr_t)(*v5);
  if ( !v6 )
    __sync_add_and_fetch((volatile int32_t *)((char *)v15 + *(uint32_t *)(*(uint32_t *)v15 - 12) + 4), 1u);
  v16 = 64;
  v17 = (uint16_t *)(v134 + 100);
  *((uint8_t *)v134 + 368) = 0;
  *((uint8_t *)v134 + 369) = 0;
  *((uint8_t *)v134 + 370) = 0;
  *((uint8_t *)v134 + 371) = 0;
  v134[93] = 0;
  v134[94] = 1065353216;
  v134[95] = 1065353216;
  v134[96] = 0;
  v134[97] = 0;
  v134[98] = 0;
  v134[99] = 0;
  v134[91] = 65791;
  if ( ((unsigned int)(uintptr_t)(v134 + 100) & 1) != 0 )
  {
    *((uint8_t *)v134 + 400) = 0;
    v17 = (uint16_t *)((char *)v134 + 401);
    LOBYTE(v16) = 63;
  }
  if ( ((uint8_t)(uintptr_t)(v17) & 2) != 0 )
  {
    *v17 = 0;
    v16 -= 2;
    ++v17;
  }
  memset(v17, 0, 4 * (v16 >> 2));
  v18 = &v17[2 * (v16 >> 2)];
  if ( (v16 & 2) != 0 )
    *v18++ = 0;
  if ( (v16 & 1) != 0 )
    *(uint8_t *)v18 = 0;
  v19 = (uint16_t *)(v134 + 116);
  v134[100] = 1065353216;
  v134[105] = 1065353216;
  v134[110] = 1065353216;
  v134[115] = 1065353216;
  v20 = 64;
  if ( ((unsigned int)(uintptr_t)(v134 + 116) & 1) != 0 )
  {
    LOBYTE(v20) = 63;
    v19 = (uint16_t *)((char *)v134 + 465);
    *((uint8_t *)v134 + 464) = 0;
    if ( (((unsigned int)(uintptr_t)(v134) + 465) & 2) == 0 )
      goto LABEL_31;
  }
  else if ( (((uint8_t)(uintptr_t)(v134) - 48) & 2) == 0 )
  {
    goto LABEL_31;
  }
  *v19 = 0;
  v20 -= 2;
  ++v19;
LABEL_31:
  memset(v19, 0, 4 * (v20 >> 2));
  v21 = &v19[2 * (v20 >> 2)];
  if ( (v20 & 2) != 0 )
    *v21++ = 0;
  if ( (v20 & 1) != 0 )
    *(uint8_t *)v21 = 0;
  v22 = 64;
  v23 = (uint16_t *)(v134 + 132);
  v134[116] = 1065353216;
  v134[121] = 1065353216;
  v134[126] = 1065353216;
  v134[131] = 1065353216;
  if ( ((unsigned int)(uintptr_t)(v134 + 132) & 1) != 0 )
  {
    *((uint8_t *)v134 + 528) = 0;
    v23 = (uint16_t *)((char *)v134 + 529);
    LOBYTE(v22) = 63;
  }
  if ( ((uint8_t)(uintptr_t)(v23) & 2) != 0 )
  {
    *v23 = 0;
    v22 -= 2;
    ++v23;
  }
  memset(v23, 0, 4 * (v22 >> 2));
  v24 = &v23[2 * (v22 >> 2)];
  if ( (v22 & 2) != 0 )
    *v24++ = 0;
  if ( (v22 & 1) != 0 )
    *(uint8_t *)v24 = 0;
  v25 = (uint16_t *)(v134 + 152);
  v134[132] = 1065353216;
  v134[137] = 1065353216;
  v134[142] = 1065353216;
  v134[147] = 1065353216;
  v134[148] = 0;
  v134[149] = 0;
  v134[150] = 0;
  v134[151] = 0;
  v26 = 64;
  if ( ((unsigned int)(uintptr_t)(v134 + 152) & 1) != 0 )
  {
    LOBYTE(v26) = 63;
    v25 = (uint16_t *)((char *)v134 + 609);
    *((uint8_t *)v134 + 608) = 0;
    if ( (((unsigned int)(uintptr_t)(v134) + 609) & 2) == 0 )
      goto LABEL_45;
  }
  else if ( ((uint8_t)(uintptr_t)(v25) & 2) == 0 )
  {
    goto LABEL_45;
  }
  *v25 = 0;
  v26 -= 2;
  ++v25;
LABEL_45:
  memset(v25, 0, 4 * (v26 >> 2));
  v27 = &v25[2 * (v26 >> 2)];
  if ( (v26 & 2) != 0 )
    *v27++ = 0;
  if ( (v26 & 1) != 0 )
    *(uint8_t *)v27 = 0;
  v28 = 64;
  v29 = (uint16_t *)(v134 + 168);
  v134[152] = 1065353216;
  v134[157] = 1065353216;
  v134[162] = 1065353216;
  v134[167] = 1065353216;
  if ( ((unsigned int)(uintptr_t)(v134 + 168) & 1) != 0 )
  {
    *((uint8_t *)v134 + 672) = 0;
    v29 = (uint16_t *)((char *)v134 + 673);
    LOBYTE(v28) = 63;
  }
  if ( ((uint8_t)(uintptr_t)(v29) & 2) != 0 )
  {
    *v29 = 0;
    v28 -= 2;
    ++v29;
  }
  memset(v29, 0, 4 * (v28 >> 2));
  v30 = &v29[2 * (v28 >> 2)];
  if ( (v28 & 2) != 0 )
    *v30++ = 0;
  if ( (v28 & 1) != 0 )
    *(uint8_t *)v30 = 0;
  v31 = (uint16_t *)(v134 + 184);
  v134[168] = 1065353216;
  v134[173] = 1065353216;
  v134[178] = 1065353216;
  v134[183] = 1065353216;
  v32 = 64;
  if ( ((unsigned int)(uintptr_t)(v134 + 184) & 1) != 0 )
  {
    LOBYTE(v32) = 63;
    v31 = (uint16_t *)((char *)v134 + 737);
    *((uint8_t *)v134 + 736) = 0;
    if ( (((unsigned int)(uintptr_t)(v134) + 737) & 2) == 0 )
      goto LABEL_59;
  }
  else if ( (((uint8_t)(uintptr_t)(v134) - 32) & 2) == 0 )
  {
    goto LABEL_59;
  }
  *v31 = 0;
  v32 -= 2;
  ++v31;
LABEL_59:
  memset(v31, 0, 4 * (v32 >> 2));
  v33 = &v31[2 * (v32 >> 2)];
  if ( (v32 & 2) != 0 )
    *v33++ = 0;
  if ( (v32 & 1) != 0 )
    *(uint8_t *)v33 = 0;
  v134[184] = 1065353216;
  v134[189] = 1065353216;
  v134[194] = 1065353216;
  v134[199] = 1065353216;
  v134[200] = 0;
  v134[201] = 0;
  v134[202] = 0;
  v134[203] = 0;
  v137 = (gameswf::BufferedRenderer::Self *)(v134 + 204);
  gameswf::BufferedRenderer::Construct((gameswf::BufferedRenderer::Self *)(v134 + 204), *v5);
  v34 = (uint16_t *)(v134 + 597);
  v134[574] = 0;
  v134[575] = 0;
  v134[576] = 0;
  v134[577] = 0;
  v134[578] = 0;
  v134[579] = 0;
  v134[580] = 0;
  v134[581] = 0;
  v134[582] = 0;
  v134[583] = 0;
  v134[584] = 0;
  v134[585] = 0;
  v134[586] = 0;
  v134[587] = 0;
  v134[588] = 0;
  v134[589] = 0;
  v134[590] = 0;
  v134[591] = 0;
  *((uint8_t *)v134 + 2368) = 0;
  *((uint8_t *)v134 + 2369) = 0;
  v134[593] = 0;
  v134[594] = 0;
  v134[595] = 0;
  v134[596] = 0;
  v35 = 24;
  if ( ((unsigned int)(uintptr_t)(v134 + 597) & 1) != 0 )
  {
    LOBYTE(v35) = 23;
    v34 = (uint16_t *)((char *)v134 + 2389);
    *((uint8_t *)v134 + 2388) = 0;
    if ( (((unsigned int)(uintptr_t)(v134) + 2389) & 2) == 0 )
      goto LABEL_65;
  }
  else if ( ((uint8_t)(uintptr_t)(v34) & 2) == 0 )
  {
    goto LABEL_65;
  }
  *v34 = 0;
  v35 -= 2;
  ++v34;
LABEL_65:
  memset(v34, 0, 4 * (v35 >> 2));
  v36 = &v34[2 * (v35 >> 2)];
  if ( (v35 & 2) != 0 )
    *v36++ = 0;
  if ( (v35 & 1) != 0 )
    *(uint8_t *)v36 = 0;
  v134[597] = 1065353216;
  v134[601] = 1065353216;
  v134[603] = 1065353216;
  v134[605] = 1065353216;
  v134[607] = 1065353216;
  v134[609] = 1065353216;
  v134[604] = 0;
  v134[606] = 0;
  v134[608] = 0;
  v134[610] = 0;
  v134[611] = 0;
  v134[612] = 0;
  v134[613] = 0;
  v134[614] = 0;
  v134[615] = 0;
  v134[616] = 0;
  v134[617] = 0;
  v134[618] = 0;
  v134[619] = 0;
  v134[620] = 0;
  gameswf::TriangleIntersector::TriangleIntersector((gameswf::TriangleIntersector::Self *)(v134 + 621));
  v134[622] = 0;
  v134[623] = 0;
  v134[624] = 0;
  v134[625] = 0;
  gameswf::ImageRGBA::Construct((gameswf::ImageRGBA::Self *)(v134 + 626), 8, 8);
  v168[1] = 8;
  LOWORD(v174) = -1;
  v168[2] = 8;
  v168[0] = 3;
  HIBYTE(v174) = ((uint16_t)(HIWORD(v174) | 0x7F) >> 8) | 1;
  BYTE2(v174) = 127;
  v168[3] = 8;
  v121 = v134[630] * v134[631];
  v37 = (void *)v134[628];
  v168[4] = 8;
  v168[5] = 0;
  v168[6] = 0;
  v168[8] = 0;
  v169[0] = 0;
  v169[1] = 0;
  v170 = 1;
  v171 = 0;
  memset(v37, 255, v121);
  v168[7] = (unsigned int)(uintptr_t)(v134 + 626);
  gameswf::String::resize((gameswf::String::Self *)&v170, 4);
  if ( v170 == -1 )
  {
    v38 = v172;
    v39 = v173;
  }
  else
  {
    v38 = (char *)v170;
    v39 = (gameswf::Self *)&v171;
  }
  gameswf::Strcpy_s(v39, v38, (gameswf::Self *)"None");
  v174 |= 0x7FFFFFu;
  gameswf::BitmapInfoImpl::BitmapInfoImpl((gameswf::RefCounted::Self *)(v134 + 632), v134[90], (int)(uintptr_t)(v168));
  if ( v170 == -1 && (v174 & 0x1000000) != 0 )
    gameswf::free_internal(v173);
  sub_5ED480(v169);
  v40 = 24;
  v41 = (uint16_t *)(v134 + 658);
  v134[655] = 0;
  *((uint8_t *)v134 + 2624) = -1;
  *((uint8_t *)v134 + 2625) = -1;
  *((uint8_t *)v134 + 2626) = -1;
  *((uint8_t *)v134 + 2627) = -1;
  if ( ((unsigned int)(uintptr_t)(v134 + 658) & 1) != 0 )
  {
    v41 = (uint16_t *)((char *)v134 + 2633);
    *((uint8_t *)v134 + 2632) = 0;
    LOBYTE(v40) = 23;
    if ( (((unsigned int)(uintptr_t)(v134) + 2633) & 2) == 0 )
      goto LABEL_74;
  }
  else if ( ((uint8_t)(uintptr_t)(v41) & 2) == 0 )
  {
    goto LABEL_74;
  }
  *v41 = 0;
  v40 -= 2;
  ++v41;
LABEL_74:
  memset(v41, 0, 4 * (v40 >> 2));
  v42 = &v41[2 * (v40 >> 2)];
  if ( (v40 & 2) != 0 )
    *v42++ = 0;
  if ( (v40 & 1) != 0 )
    *(uint8_t *)v42 = 0;
  v43 = (uint16_t *)(v134 + 677);
  v134[658] = 1065353216;
  v134[662] = 1065353216;
  v134[664] = 1065353216;
  v134[666] = 1065353216;
  v134[668] = 1065353216;
  v134[670] = 1065353216;
  v134[665] = 0;
  v134[667] = 0;
  v134[669] = 0;
  v134[671] = 0;
  *((uint8_t *)v134 + 2688) = 0;
  v134[674] = 0;
  *((uint8_t *)v134 + 2700) = -1;
  *((uint8_t *)v134 + 2701) = -1;
  *((uint8_t *)v134 + 2702) = -1;
  *((uint8_t *)v134 + 2703) = -1;
  v44 = 24;
  if ( ((unsigned int)(uintptr_t)(v134 + 677) & 1) != 0 )
  {
    LOBYTE(v44) = 23;
    v43 = (uint16_t *)((char *)v134 + 2709);
    *((uint8_t *)v134 + 2708) = 0;
    if ( (((unsigned int)(uintptr_t)(v134) + 2709) & 2) == 0 )
      goto LABEL_80;
  }
  else if ( (((uint8_t)(uintptr_t)(v134) - 108) & 2) == 0 )
  {
    goto LABEL_80;
  }
  *v43 = 0;
  v44 -= 2;
  ++v43;
LABEL_80:
  memset(v43, 0, 4 * (v44 >> 2));
  v45 = &v43[2 * (v44 >> 2)];
  if ( (v44 & 2) != 0 )
    *v45++ = 0;
  if ( (v44 & 1) != 0 )
    *(uint8_t *)v45 = 0;
  v46 = 24;
  v47 = (uint16_t *)(v134 + 696);
  v134[677] = 1065353216;
  v134[681] = 1065353216;
  v134[683] = 1065353216;
  v134[685] = 1065353216;
  v134[687] = 1065353216;
  v134[689] = 1065353216;
  v134[684] = 0;
  v134[686] = 0;
  v134[688] = 0;
  v134[690] = 0;
  *((uint8_t *)v134 + 2764) = 0;
  v134[693] = 0;
  *((uint8_t *)v134 + 2776) = -1;
  *((uint8_t *)v134 + 2777) = -1;
  *((uint8_t *)v134 + 2778) = -1;
  *((uint8_t *)v134 + 2779) = -1;
  if ( ((unsigned int)(uintptr_t)(v134 + 696) & 1) != 0 )
  {
    v47 = (uint16_t *)((char *)v134 + 2785);
    *((uint8_t *)v134 + 2784) = 0;
    LOBYTE(v46) = 23;
    if ( (((unsigned int)(uintptr_t)(v134) + 2785) & 2) == 0 )
      goto LABEL_86;
  }
  else if ( (((uint8_t)(uintptr_t)(v134) - 32) & 2) == 0 )
  {
    goto LABEL_86;
  }
  *v47 = 0;
  v46 -= 2;
  ++v47;
LABEL_86:
  memset(v47, 0, 4 * (v46 >> 2));
  v48 = &v47[2 * (v46 >> 2)];
  if ( (v46 & 2) != 0 )
    *v48++ = 0;
  if ( (v46 & 1) != 0 )
    *(uint8_t *)v48 = 0;
  v49 = v134[623] <= 255;
  v134[696] = 1065353216;
  v134[700] = 1065353216;
  v134[702] = 1065353216;
  v134[704] = 1065353216;
  v134[706] = 1065353216;
  v134[708] = 1065353216;
  v134[703] = 0;
  v134[705] = 0;
  v134[707] = 0;
  v134[709] = 0;
  *((uint8_t *)v134 + 2840) = 0;
  if ( v49 )
    gameswf::array_gameswf_Vertex_1a1ff6::resize((gameswf::array<gameswf::Vertex> *)(v134 + 622), 256);
  glitch::collada::CColladaDatabase::Construct(
    (glitch::collada::CColladaDatabase::Self *)v167,
    (glitch::collada::CColladaDatabase::Self *)"gameswf_effects.bdae",
    nullptr);
  v162 = nullptr;
  glitch::collada::CColladaDatabase::constructEffect(
    (int)(uintptr_t)(&v139),
    (glitch::collada::CColladaDatabase::Self *)v167,
    v134[90],
    "gameswf-fx");
  if ( v162 != nullptr )
  {
    v50 = (volatile int32_t *)((uint32_t *)((char *)v162 + *(uint32_t *)(*v162 - 16)));
    if ( __sync_fetch_and_add(v50 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v50, 8);
      G4_VCALL<void>(v50, 4);
    }
  }
  v142 = v139;
  if ( v139 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v139, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v142,
    a1,
    0,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"default");
  v52 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v142;
  if ( v142 != nullptr && __sync_fetch_and_add((volatile int32_t *)v142, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v52);
    gll_operator_delete_arr((int)(uintptr_t)(v52));
  }
  v143 = v139;
  if ( v139 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v139, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v143,
    v51,
    1,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"default");
  v54 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v143;
  if ( v143 != nullptr && __sync_fetch_and_add((volatile int32_t *)v143, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v54);
    gll_operator_delete_arr((int)(uintptr_t)(v54));
  }
  v144 = v139;
  if ( v139 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v139, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v144,
    v53,
    3,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"multiply");
  v56 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v144;
  if ( v144 != nullptr && __sync_fetch_and_add((volatile int32_t *)v144, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v56);
    gll_operator_delete_arr((int)(uintptr_t)(v56));
  }
  v145 = v139;
  if ( v139 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v139, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v145,
    v55,
    4,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"screen");
  v58 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v145;
  if ( v145 != nullptr && __sync_fetch_and_add((volatile int32_t *)v145, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v58);
    gll_operator_delete_arr((int)(uintptr_t)(v58));
  }
  v146 = v139;
  if ( v139 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v139, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v146,
    v57,
    13,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"overlay");
  v60 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v146;
  if ( v146 != nullptr && __sync_fetch_and_add((volatile int32_t *)v146, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v60);
    gll_operator_delete_arr((int)(uintptr_t)(v60));
  }
  v147 = v139;
  if ( v139 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v139, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v147,
    v59,
    23,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"default");
  v62 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v147;
  if ( v147 != nullptr && __sync_fetch_and_add((volatile int32_t *)v147, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v62);
    gll_operator_delete_arr((int)(uintptr_t)(v62));
  }
  v148 = v139;
  if ( v139 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v139, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v148,
    v61,
    24,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"default");
  v64 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v148;
  if ( v148 != nullptr && __sync_fetch_and_add((volatile int32_t *)v148, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v64);
    gll_operator_delete_arr((int)(uintptr_t)(v64));
  }
  v163 = nullptr;
  glitch::collada::CColladaDatabase::constructEffect(
    (int)(uintptr_t)(&v140),
    (glitch::collada::CColladaDatabase::Self *)v167,
    v134[90],
    "gameswf-video-fx");
  v65 = v163;
  if ( v163 != nullptr )
  {
    v65 = (volatile int32_t *)((char *)v163 + *(uint32_t *)(*v163 - 16));
    if ( __sync_fetch_and_add(v65 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v65, 8);
      G4_VCALL<void>(v65, 4);
    }
  }
  v149 = v140;
  if ( v140 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v140, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v149,
    v63,
    25,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"default");
  v67 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v149;
  if ( v149 != nullptr && __sync_fetch_and_add((volatile int32_t *)v149, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v67);
    gll_operator_delete_arr((int)(uintptr_t)(v67));
  }
  v150 = v140;
  if ( v140 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v140, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v150,
    v66,
    26,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"multiply");
  v69 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v150;
  if ( v150 != nullptr && __sync_fetch_and_add((volatile int32_t *)v150, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v69);
    gll_operator_delete_arr((int)(uintptr_t)(v69));
  }
  v151 = v140;
  if ( v140 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v140, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v151,
    v68,
    27,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"screen");
  v71 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v151;
  if ( v151 != nullptr && __sync_fetch_and_add((volatile int32_t *)v151, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v71);
    gll_operator_delete_arr((int)(uintptr_t)(v71));
  }
  v152 = v140;
  if ( v140 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v140, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v152,
    v70,
    28,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"overlay");
  v73 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v152;
  if ( v152 != nullptr && __sync_fetch_and_add((volatile int32_t *)v152, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v73);
    gll_operator_delete_arr((int)(uintptr_t)(v73));
  }
  v164 = nullptr;
  glitch::collada::CColladaDatabase::constructEffect(
    (int)(uintptr_t)(&v141),
    (glitch::collada::CColladaDatabase::Self *)v167,
    v134[90],
    "gameswf-post-fx");
  if ( v164 != nullptr )
  {
    v74 = (volatile int32_t *)((uint32_t *)((char *)v164 + *(uint32_t *)(*v164 - 16)));
    if ( __sync_fetch_and_add(v74 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v74, 8);
      G4_VCALL<void>(v74, 4);
    }
  }
  v153 = v141;
  if ( v141 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v141, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v153,
    v72,
    15,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"default_premultiply");
  v76 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v153;
  if ( v153 != nullptr && __sync_fetch_and_add((volatile int32_t *)v153, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v76);
    gll_operator_delete_arr((int)(uintptr_t)(v76));
  }
  v154 = v141;
  if ( v141 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v141, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v154,
    v75,
    16,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"demultiply");
  v78 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v154;
  if ( v154 != nullptr && __sync_fetch_and_add((volatile int32_t *)v154, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v78);
    gll_operator_delete_arr((int)(uintptr_t)(v78));
  }
  v155 = v141;
  if ( v141 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v141, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v155,
    v77,
    17,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"blurh");
  v80 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v155;
  if ( v155 != nullptr && __sync_fetch_and_add((volatile int32_t *)v155, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v80);
    gll_operator_delete_arr((int)(uintptr_t)(v80));
  }
  v156 = v141;
  if ( v141 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v141, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v156,
    v79,
    18,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"blurv");
  v82 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v156;
  if ( v156 != nullptr && __sync_fetch_and_add((volatile int32_t *)v156, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v82);
    gll_operator_delete_arr((int)(uintptr_t)(v82));
  }
  v157 = v141;
  if ( v141 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v141, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v157,
    v81,
    19,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"color");
  v84 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v157;
  if ( v157 != nullptr && __sync_fetch_and_add((volatile int32_t *)v157, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v84);
    gll_operator_delete_arr((int)(uintptr_t)(v84));
  }
  v158 = v141;
  if ( v141 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v141, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v158,
    v83,
    20,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"displacement");
  v86 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v158;
  if ( v158 != nullptr && __sync_fetch_and_add((volatile int32_t *)v158, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v86);
    gll_operator_delete_arr((int)(uintptr_t)(v86));
  }
  v159 = v141;
  if ( v141 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v141, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v159,
    v85,
    21,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"alphamask");
  v88 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v159;
  if ( v159 != nullptr && __sync_fetch_and_add((volatile int32_t *)v159, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v88);
    gll_operator_delete_arr((int)(uintptr_t)(v88));
  }
  v160 = v141;
  if ( v141 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v141, 1u);
  sub_10C4960(
    (int)(uintptr_t)(v137),
    (volatile int32_t **)&v160,
    v87,
    22,
    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"demultiplypost");
  v89 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v160;
  if ( v160 != nullptr && __sync_fetch_and_add((volatile int32_t *)v160, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v89);
    gll_operator_delete_arr((int)(uintptr_t)(v89));
  }
  gameswf::BitmapInfoImpl::layout(
    (int)(uintptr_t)(dword_20B9FF4),
    (int)(uintptr_t)(&savedregs),
    (int)(uintptr_t)(v65),
    (int)(uintptr_t)(v89),
    (gameswf::BitmapInfoImpl::Self *)(v134 + 632));
  v90 = 0;
  v165 = v134[649];
  if ( v165 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v165 + 4), 1u);
    v90 = v165;
  }
  v91 = v134[518];
  v134[518] = v90;
  v165 = v91;
  sub_5ED480(&v165);
  v92 = v127[1];
  if ( v92 != nullptr )
  {
    v93 = *((uint32_t *)v92 + 3);
    v177 = *((uint32_t *)v92 + 4);
    v176 = v93;
    v188 = -1;
    v183 = v92;
    v189 = 127;
    v175 = 6;
    v190 |= 1u;
    v94 = 0;
    v95 = (int)(uintptr_t)(v127[2]);
    v96 = 0;
    v180 = 0;
    v181 = 0;
    v182 = 0;
    v184[0] = 0;
    v184[1] = 0;
    v185 = 1;
    v186 = 0;
    v178 = v176;
    v179 = v177;
    v166 = v95;
    if ( v95 != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v95 + 4), 1u);
      v94 = v166;
      v96 = v184[0];
    }
    v184[0] = v94;
    v166 = v96;
    sub_5ED480(&v166);
    v97 = (int)(uintptr_t)(v127[4]);
    v132 = (int)(uintptr_t)(v127[3]);
    v128 = v97;
    if ( v97 > 0 )
    {
      v131 = 1;
      v129 = 1.0 / (float)v97;
      v133 = 1.0 / (float)(int)(uintptr_t)(v127[3]);
      do
      {
        if ( v132 <= 0 )
        {
          v130 = v131;
        }
        else
        {
          v138 = nullptr;
          v130 = v131;
          v135 = (float)0;
          do
          {
            v124 = v134[90];
            v101 = (float *)opNew(0x5Cu);
            gameswf::BitmapInfoImpl::BitmapInfoImpl((gameswf::RefCounted::Self *)v101, v124, (int)(uintptr_t)(&v175));
            v138 = (gameswf::BufferedRenderer::Self *)((char *)v138 + 1);
            v102 = v135 * v133;
            v135 = (float)(int)(uintptr_t)(v138);
            v101[6] = v102;
            v101[7] = (float)(v131 - 1) * v129;
            v101[8] = v133 * (float)(int)(uintptr_t)(v138);
            v101[9] = v129 * (float)v131;
            v103 = v134[581];
            v122 = v134[582];
            v100 = v103 + 1;
            if ( v103 + 1 <= v122 || v134[583] != 0 )
            {
              v98 = (char *)v134[580];
            }
            else
            {
              v104 = v100 + (v100 >> 1);
              v134[582] = v104;
              if ( v104 != 0 )
              {
                v126 = v103 + 1;
                if ( v134[580] != 0 )
                  v98 = (char *)gameswf::realloc_internal((gameswf::Self *)v134[580], 4 * v104, 4 * v122);
                else
                  v98 = (char *)gameswf::malloc_internal(4 * v104);
                v134[580] = (uint32_t)(uintptr_t)(v98);
                v103 = v134[581];
                v100 = v126;
              }
              else
              {
                v105 = (gameswf::Self *)v134[580];
                if ( v105 != nullptr )
                {
                  v125 = v103 + 1;
                  gameswf::free_internal(v105);
                  v103 = v134[581];
                  v100 = v125;
                }
                v134[580] = 0;
                v98 = nullptr;
              }
            }
            v99 = (float **)&v98[4 * v103];
            if ( v99 != nullptr )
            {
              *v99 = v101;
              v123 = v100;
              gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v101);
              v100 = v123;
            }
            v134[581] = v100;
          }
          while ( v138 != (gameswf::BufferedRenderer::Self *)v132 );
        }
        ++v131;
      }
      while ( v128 > v130 );
    }
    v106 = v127[5];
    if ( v106 != nullptr && v106 != v127[1] )
    {
      v183 = v127[5];
      v107 = 0;
      v161 = v127[6];
      if ( v161 != nullptr )
      {
        __sync_add_and_fetch((volatile int32_t *)v161 + 1, 1u);
        v107 = (int)(uintptr_t)(v161);
      }
      v108 = v184[0];
      v184[0] = v107;
      v161 = (glitch::video::IVideoDriver::Self *)v108;
      sub_5ED480((int *)&v161);
      v109 = v134[90];
      v110 = (gameswf::RefCounted::Self *)opNew(0x5Cu);
      gameswf::BitmapInfoImpl::BitmapInfoImpl(v110, v109, (int)(uintptr_t)(&v175));
      v111 = v134[581];
      v136 = (gameswf::BitmapInfoImpl::Self *)v134[582];
      v112 = v111 + 1;
      if ( v111 + 1 <= (int)(uintptr_t)(v136) || v134[583] != 0 )
      {
        v113 = (char *)v134[580];
      }
      else
      {
        v118 = v112 + (v112 >> 1);
        v134[582] = v118;
        if ( v118 != 0 )
        {
          v120 = (gameswf::Self *)v134[580];
          if ( v120 != nullptr )
            v113 = (char *)gameswf::realloc_internal(v120, 4 * v118, 4 * (uint32_t)(uintptr_t)(v136));
          else
            v113 = (char *)gameswf::malloc_internal(4 * v118);
          v134[580] = (uint32_t)(uintptr_t)(v113);
          v111 = v134[581];
        }
        else
        {
          v119 = (gameswf::Self *)v134[580];
          if ( v119 != nullptr )
          {
            gameswf::free_internal(v119);
            v111 = v134[581];
          }
          v113 = nullptr;
          v134[580] = 0;
        }
      }
      v114 = (gameswf::RefCounted::Self **)&v113[4 * v111];
      if ( v114 != nullptr )
      {
        *v114 = v110;
        if ( v110 != nullptr )
          gameswf::RefCounted::addRef(v110);
      }
      v134[581] = v112;
    }
    if ( v185 == -1 && (v190 & 1) != 0 )
      gameswf::free_internal(v187);
    sub_5ED480(v184);
  }
  v115 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v141;
  if ( v141 != nullptr && __sync_fetch_and_add((volatile int32_t *)v141, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v115);
    gll_operator_delete_arr((int)(uintptr_t)(v115));
  }
  v116 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v140;
  if ( v140 != nullptr && __sync_fetch_and_add((volatile int32_t *)v140, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v116);
    gll_operator_delete_arr((int)(uintptr_t)(v116));
  }
  v117 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v139;
  if ( v139 != nullptr && __sync_fetch_and_add((volatile int32_t *)v139, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v117);
    gll_operator_delete_arr((int)(uintptr_t)(v117));
  }
  glitch::collada::CColladaDatabase::Destroy(v167);
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::drawAlphaMask  (binary VA: 0x10d0dd0)
// Original: gameswf::render_handler_glitch::drawAlphaMask
// ----------------------------------------------------------------------------
int gameswf::render_handler_glitch::drawAlphaMask(gameswf::RenderHandler::Self *a1, int a2, int a3, float *a4, float *a5, gameswf::Matrix::Self *a6, gameswf::Matrix::Self *a7)
{
  int v7;
  int v8;
  int result;
  const bool *v10;
  int v11;
  uint16_t v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef const gameswf::Point::Self *_g4_t_v16;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v17;
  typedef int _g4_t_v18[2];
  typedef uint8_t _g4_t_v19[36];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v15)) > _g4_s2 ? (4u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  v18[0] = *(uint32_t *)(a3 + 68);
  if ( v18[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v18[0] + 4), 1u);
  v17 = (gameswf::BufferedRenderer::Self *)((gameswf::RenderHandler::Self *)((char *)a1 + 816));
  sub_10C71A0((int)(uintptr_t)(a1) + 816, v18, a4, a5, a6, a7);
  sub_5ED480(v18);
  v7 = 2 * (*(uint8_t *)a2 != 1) + 4;
  if ( (*((float *)a1 + 670) != 0.0 || *((float *)a1 + 671) != 0.0)
    && (*((uint32_t *)a1 + 655) != 1 || (float)*((uint8_t *)a1 + 2627) != 0.0) )
  {
    v8 = *(uint32_t *)(a2 + 16);
    if ( v8 == 0
      || *(uint8_t *)(v8 + 16) == 0
      || *((float *)a1 + 598) != 0.0
      || *((float *)a1 + 600) != 0.0
      || *((uint8_t *)a1 + 52) == 0 && *((uint32_t *)a1 + 6) != 0 )
    {
      v13 = *(uint16_t *)(a2 + 12);
      if ( v13 + 2 > *((uint32_t *)a1 + 623) )
      {
        v15 = 2 * (*(uint8_t *)a2 != 1) + 4;
        gameswf::array_gameswf_Vertex_1a1ff6::resize((gameswf::RenderHandler::Self *)((char *)a1 + 2488), v13 + 2);
        v8 = *(uint32_t *)(a2 + 16);
        v13 = *(uint16_t *)(a2 + 12);
        v7 = v15;
      }
      v16 = *(const gameswf::Point::Self **)(a2 + 4);
      std::memcpy(v19, (char *)a1 + 2388, 24);
      v10 = nullptr;
      if ( v8 != 0 )
        v10 = *(const bool **)v8;
      v14 = v7;
      gameswf::render_handler_glitch::FillStyle::apply(
        (gameswf::render_handler_glitch::FillStyle::Self *)((gameswf::RenderHandler::Self *)((char *)a1 + 2620)),
        *((glitch::video::IVideoDriver::Self **)a1 + 90),
        v17,
        (const gameswf::Matrix::Self *)v19,
        *((float *)a1 + 612),
        v16,
        v10,
        *((Vertex **)a1 + 622),
        v13);
      v11 = v14;
      if ( *((uint8_t *)a1 + 52) == 0 && *((uint32_t *)a1 + 6) != 0 )
      {
        gameswf::RenderHandler::transformPositions(
          a1,
          (gameswf::vector3df::Self *)(*((uint32_t *)a1 + 622) + 12),
          24,
          *(uint16_t *)(a2 + 12));
        v11 = v14;
      }
      if ( *(uint32_t *)(a2 + 8) != 0 && (v12 = *(uint16_t *)(a2 + 14)) != 0 )
        gameswf::BufferedRenderer::queueIndexedTriangles(
          v17,
          *((const Vertex **)a1 + 622),
          *(uint16_t *)(a2 + 12),
          *(const uint16_t **)(a2 + 8),
          v12);
      else
        gameswf::BufferedRenderer::queueBuffer((int)(uintptr_t)(v17), *((uint32_t **)a1 + 622), *(uint16_t *)(a2 + 12), v11);
    }
  }
  result = *((uint32_t *)a1 + 519);
  if ( result != 0 )
  {
    result = *((uint32_t *)a1 + 217);
    if ( result != 0 )
      result = sub_10C6160((int)(uintptr_t)(v17));
  }
  *((uint32_t *)a1 + 519) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::render_handler_glitch::setTargetImpl  (binary VA: 0x10d11f0)
// Original: gameswf::render_handler_glitch::setTargetImpl
// ----------------------------------------------------------------------------
void gameswf::render_handler_glitch::setTargetImpl(gameswf::render_handler_glitch::Self *self, gameswf::BitmapInfo::Self *a2)
{
  int v2;
  int v3;
  char *v4;
  int v5;
  char *v6;
  int v7;
  int *v8;
  uint32_t *v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  bool v22;
  gameswf::Self *v23;
  int v24;
  int v25;
  float **v26;
  float *v27;
  float v28; // xmm2_4
  float v29; // xmm1_4
  float *v30;
  int v31;
  int v32;
  float v33; // xmm4_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  int v37;
  typedef size_t _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef gameswf::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef float _g4_t_v52[4];
  typedef float _g4_t_v53[4];
  typedef int _g4_t_v54;
  typedef float _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58[4];
  typedef uint32_t _g4_t_v59[16];
  typedef int _g4_t_v60[16];
  typedef int _g4_t_v61[27];
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (8u + sizeof(_g4_t_v38)) > _g4_s0 ? (8u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v39)) > _g4_s1 ? (20u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v40)) > _g4_s2 ? (36u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v41)) > _g4_s3 ? (64u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v42)) > _g4_s4 ? (64u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v43)) > _g4_s5 ? (68u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v44)) > _g4_s6 ? (72u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v45)) > _g4_s7 ? (72u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v46)) > _g4_s8 ? (72u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v47)) > _g4_s9 ? (76u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v48)) > _g4_s10 ? (80u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v49)) > _g4_s11 ? (88u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v50)) > _g4_s12 ? (92u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v51)) > _g4_s13 ? (96u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v52)) > _g4_s14 ? (100u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v53)) > _g4_s15 ? (116u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (132u + sizeof(_g4_t_v54)) > _g4_s16 ? (132u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (136u + sizeof(_g4_t_v55)) > _g4_s17 ? (136u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (140u + sizeof(_g4_t_v56)) > _g4_s18 ? (140u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v57)) > _g4_s19 ? (144u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (148u + sizeof(_g4_t_v58)) > _g4_s20 ? (148u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v59)) > _g4_s21 ? (164u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (228u + sizeof(_g4_t_v60)) > _g4_s22 ? (228u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (292u + sizeof(_g4_t_v61)) > _g4_s23 ? (292u + sizeof(_g4_t_v61)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 76u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 80u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 88u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 92u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 96u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 100u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 116u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 136u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 140u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 144u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 148u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 164u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 228u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 292u);

  if ( a2 != nullptr )
  {
    v2 = *((uint32_t *)self + 589);
    v3 = v2 + 1;
    if ( v2 == -1 || (v20 = *((uint32_t *)self + 590), v3 <= v20) || *((uint32_t *)self + 591) != 0 )
    {
      v4 = *((char **)self + 588);
    }
    else
    {
      v21 = v3 + (v3 >> 1);
      v22 = v21 == 0;
      v45 = v21;
      *((uint32_t *)self + 590) = v21;
      v23 = *((gameswf::Self **)self + 588);
      if ( v22 )
      {
        if ( v23 != nullptr )
        {
          v41 = v2;
          v38 = 12 * v20;
          gameswf::free_internal(v23);
          v2 = v41;
        }
        *((uint32_t *)self + 588) = 0;
        v4 = nullptr;
      }
      else
      {
        v42 = v2;
        if ( v23 != nullptr )
        {
          v4 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 588), 12 * v45, 12 * v20);
        }
        else
        {
          v38 = 0;
          v4 = (char *)gameswf::malloc_internal(12 * v45);
        }
        *((uint32_t *)self + 588) = (uint32_t)(uintptr_t)(v4);
        v2 = v42;
      }
    }
    v5 = 12 * v2;
    v6 = &v4[v5];
    if ( v6 != nullptr )
    {
      *(uint32_t *)v6 = 0;
      *((uint32_t *)v6 + 1) = 0;
      *((uint32_t *)v6 + 2) = 0;
      v6 = (char *)(v5 + *((uint32_t *)self + 588));
    }
    *((uint32_t *)self + 589) = v3;
    if ( *(uint32_t *)v6 != 0 )
      *(uint8_t *)(*(uint32_t *)v6 + 65) = 0;
    v7 = *((uint32_t *)v6 + 1);
    *(uint32_t *)v6 = 0;
    if ( v7 != 0 )
      *(uint8_t *)(v7 + 65) = 0;
    *((uint32_t *)v6 + 1) = 0;
    *((uint32_t *)v6 + 2) = 0;
    v8 = (int *)(*((uint32_t *)self + 588) + 4 * (3 * *((uint32_t *)self + 589) - 3));
    *v8 = gameswf::render_handler_glitch::getPostProcessTexture(self);
    *(uint32_t *)(*((uint32_t *)self + 588) + 4 * (3 * *((uint32_t *)self + 589) - 3) + 4) = (uint32_t)(uintptr_t)(a2);
    v9 = (uint32_t *)(*((uint32_t *)self + 588) + 4 * (3 * *((uint32_t *)self + 589) - 3));
    v9[2] = *v9;
    v10 = *(float **)(*((uint32_t *)self + 588) + 4 * (3 * *((uint32_t *)self + 589) - 3));
    v39 = (float)G4_VCALL<int>(v10, 56, v38) * v10[7];
    v40 = (float)G4_VCALL<int>(v10, 52) * v10[6];
    (*(void (**)(uint32_t, int))(**((uint32_t **)self + 90) + 112))(
      *((uint32_t *)self + 90),
      *(uint32_t *)(*((uint32_t *)self + 588) + 4 * (3 * *((uint32_t *)self + 589) - 3)) + 72);
    v44 = (int)v39 + G4_VCALL<int>(a2, 56);
    v11 = G4_VCALL<int>(a2, 52);
    v54 = (int)v40;
    v12 = v11 + (int)v40;
    v13 = *((uint32_t *)self + 90);
    LODWORD(v55) = (int)v39;
    v56 = v12;
    v57 = *(float *)&v44;
    (*(void (**)(uint32_t, int *))(***(uint32_t ***)(v13 + 300) + 12))(**(uint32_t **)(v13 + 300), &v54);
    v14 = G4_VCALL<int>(a2, 56);
    v15 = G4_VCALL<int>(a2, 52);
    v52[0] = v40;
    v52[2] = v39;
    v52[1] = (float)v15;
    v52[3] = (float)v14;
    sub_10C4AC0((int)(uintptr_t)(v59), (int)(uintptr_t)(self), (int *)self + 14, v52);
    glitch::video::IVideoDriver::setTransform(*((uint8_t **)self + 90), 0, v59, 0);
    glitch::video::IVideoDriver::setTransform(*((uint8_t **)self + 90), 1, v60, 0);
    glitch::video::IVideoDriver::setTransform(*((uint8_t **)self + 90), 2, v61, 0);
    v16 = *((uint32_t *)self + 90);
    v17 = *(uint32_t *)(v16 + 40);
    *(uint32_t *)(v16 + 40) = 0;
    *(uint8_t *)(v16 + 780) |= v17 != 0;
    glitch::video::IVideoDriver::clearBuffers(*((glitch::video::IVideoDriver::Self **)self + 90), 7);
    v18 = *((uint32_t *)self + 90);
    v19 = *(uint32_t *)(v18 + 40);
    *(uint32_t *)(v18 + 40) = v17;
    *(uint8_t *)(v18 + 780) |= v19 != v17;
  }
  else
  {
    (*(void (**)(int *))(**((uint32_t **)self + 90) + 116))(&v49);
    v24 = v49;
    if ( v49 != 0 && __sync_fetch_and_add((volatile int32_t *)(v49 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v24, 8);
      G4_VCALL<void>(v24, 4);
    }
    v25 = *((uint32_t *)self + 589);
    v43 = *((gameswf::Self **)self + 574);
    v46 = *((uint32_t *)self + 575);
    v47 = *((uint32_t *)self + 576);
    v53[0] = 0.0;
    v48 = *((uint32_t *)self + 577);
    v26 = (float **)(*((uint32_t *)self + 588) + 4 * (3 * v25 - 3));
    v27 = v26[2];
    v28 = v27[9] - v27[7];
    v29 = v27[8] - v27[6];
    v30 = v26[1];
    v53[2] = 0.0;
    v31 = *((uint32_t *)v30 + 5);
    v32 = *((uint32_t *)v30 + 4);
    *((uint32_t *)self + 574) = 0;
    *((uint32_t *)self + 575) = 0;
    *((uint32_t *)self + 576) = v32;
    *((uint32_t *)self + 577) = v31;
    v53[1] = (float)v32;
    v50 = v32;
    v53[3] = (float)v31;
    v51 = v31;
    v33 = (float)v31 / (float)((float)*((int *)*v26 + 5) * v28);
    v34 = (float)*((int *)*v26 + 4) * v29;
    v54 = 0;
    v55 = (float)v32 / v34;
    v56 = 0;
    v22 = *((uint32_t *)self + 519) == 22;
    v57 = v33;
    if ( !v22 && *((uint32_t *)self + 217) != 0 )
      sub_10C6160((int)(uintptr_t)(self) + 816);
    v35 = (float)v51;
    v36 = (float)v50;
    *((uint32_t *)self + 519) = 22;
    v58[1] = v36;
    v58[0] = 0.0;
    v58[3] = v35;
    v58[2] = 0.0;
    sub_10C4AC0((int)(uintptr_t)(v59), (int)(uintptr_t)(self), &v50, v58);
    sub_10C6AB0((int)(uintptr_t)(self), v26, 1, v53, (float *)&v54, v59);
    v37 = *((uint32_t *)self + 589);
    *((uint32_t *)self + 574) = (uint32_t)(uintptr_t)(v43);
    *((uint32_t *)self + 575) = v46;
    *((uint32_t *)self + 576) = v47;
    *((uint32_t *)self + 577) = v48;
    gameswf::array_gameswf_render_handler_g_eea1b3::resize(
      (gameswf::render_handler_glitch::Self *)((char *)self + 2352),
      v37 - 1);
  }
}


