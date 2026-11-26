#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_render_handler_glitch.h
// Library: glitch | Module: glitch_render_handler_glitch
// Binary Address Span: 0x10c7ae0 .. 0x10d11f0 (40 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10c7ae0] (9 bytes) gameswf::render_handler_glitch::open(void)
// void gameswf::render_handler_glitch::open();
// [0x10c7af0] (9 bytes) gameswf::render_handler_glitch::getOrientation(void)
// int gameswf::render_handler_glitch::getOrientation();
// [0x10c7b00] (9 bytes) gameswf::render_handler_glitch::clearFrameBuffer(void)
// void gameswf::render_handler_glitch::clearFrameBuffer();
// [0x10c7b10] (9 bytes) gameswf::render_handler_glitch::readFrameBuffer(int,int,int,int,unsigned char *)
// void gameswf::render_handler_glitch::readFrameBuffer();
// [0x10c7b20] (17 bytes) gameswf::render_handler_glitch::setRenderMode(gameswf::RenderMode)
// int gameswf::render_handler_glitch::setRenderMode(int a1, int a2);
// [0x10c7b40] (62 bytes) gameswf::render_handler_glitch::setMatrixImpl(gameswf::Matrix const&)
// gameswf::render_handler_glitch *gameswf::render_handler_glitch::setMatrixImpl( gameswf::render_handler_glitch *this, const gameswf::Matrix *a2);
// [0x10c7b80] (80 bytes) gameswf::render_handler_glitch::setCxFormImpl(gameswf::CxForm const&)
// gameswf::render_handler_glitch *gameswf::render_handler_glitch::setCxFormImpl( gameswf::render_handler_glitch *this, const gameswf::CxForm *a2);
// [0x10c7bd0] (17 bytes) gameswf::render_handler_glitch::lineStyleWidthImpl(float)
// gameswf::render_handler_glitch *gameswf::render_handler_glitch::lineStyleWidthImpl( gameswf::render_handler_glitch *this, float a2);
// [0x10c7bf0] (56 bytes) gameswf::render_handler_glitch::isVisible(gameswf::Rect const&)
// bool gameswf::render_handler_glitch::isVisible(gameswf::render_handler_glitch *this, const gameswf::Rect *a2);
// [0x10c7c30] (34 bytes) gameswf::render_handler_glitch::beginDisplayCallback(void)
// int gameswf::render_handler_glitch::beginDisplayCallback(gameswf::render_handler_glitch *this);
// [0x10c7c60] (135 bytes) gameswf::render_handler_glitch::lineStyleColorImpl(gameswf::Color)
// int gameswf::render_handler_glitch::lineStyleColorImpl(int a1, unsigned int a2);
// [0x10c7cf0] (301 bytes) gameswf::render_handler_glitch::fillStyleBitmapImpl(int,gameswf::BitmapInfo *,gameswf::Matrix const&,gameswf::BitmapWrapMode)
// bool gameswf::render_handler_glitch::fillStyleBitmapImpl(uint32_t *a1, int a2, int a3, uint32_t *a4, int a5);
// [0x10c7e20] (148 bytes) gameswf::render_handler_glitch::endDisplayCallback(void)
// uint32_t *gameswf::render_handler_glitch::endDisplayCallback(gameswf::render_handler_glitch *this);
// [0x10c7ec0] (329 bytes) gameswf::render_handler_glitch::endDisplay(void)
// int gameswf::render_handler_glitch::endDisplay(gameswf::render_handler_glitch *this);
// [0x10c8120] (413 bytes) gameswf::render_handler_glitch::fillStyleColorImpl(int,gameswf::Color const&)
// int gameswf::render_handler_glitch::fillStyleColorImpl( gameswf::render_handler_glitch *this, int a2, const gameswf::Color *a3);
// [0x10c82c0] (346 bytes) gameswf::render_handler_glitch::setBufferCapacity(gameswf::RenderHandler::BufferMode,int)
// int gameswf::render_handler_glitch::setBufferCapacity(int a1, int a2, int a3);
// [0x10c9530] (940 bytes) gameswf::render_handler_glitch::getPostProcessTexture(void)
// int gameswf::render_handler_glitch::getPostProcessTexture(gameswf::render_handler_glitch *this);
// [0x10c98e0] (2482 bytes) gameswf::render_handler_glitch::~render_handler_glitch()
// void gameswf::render_handler_glitch::~render_handler_glitch(gameswf::render_handler_glitch *this);
// [0x10ca2a0] (56 bytes) gameswf::render_handler_glitch::~render_handler_glitch()
// void gameswf::render_handler_glitch::~render_handler_glitch(gameswf::render_handler_glitch *this);
// [0x10ca710] (848 bytes) gameswf::render_handler_glitch::createBitmapInfoParams(boost::intrusive_ptr<glitch::video::ITexture> const&)
// gameswf::render_handler_glitch *gameswf::render_handler_glitch::createBitmapInfoParams( gameswf **this, const boost::intrusive_ptr<glitch::video::ITexture> *a2, int *a3);
// [0x10caa60] (108 bytes) gameswf::render_handler_glitch::setContext(gameswf::PlayerContext *)
// gameswf::PlayerContext *gameswf::render_handler_glitch::setContext( gameswf::render_handler_glitch *this, gameswf::PlayerContext *a2);
// [0x10caad0] (98 bytes) gameswf::render_handler_glitch::createBitmapInfo(gameswf::BitmapInfo::Params const&)
// gameswf::RefCounted *gameswf::render_handler_glitch::createBitmapInfo(int a1, int a2);
// [0x10cac40] (25 bytes) gameswf::render_handler_glitch::flushImpl(void)
// gameswf::render_handler_glitch *gameswf::render_handler_glitch::flushImpl(gameswf::render_handler_glitch *this);
// [0x10caff0] (1745 bytes) gameswf::render_handler_glitch::draw(gameswf::RenderCache *,gameswf::Character *)
// int gameswf::render_handler_glitch::draw(gameswf::BufferedRenderer *a1, uint32_t *a2, int a3);
// [0x10cb920] (365 bytes) gameswf::render_handler_glitch::reset(void)
// int32_t gameswf::render_handler_glitch::reset(gameswf::render_handler_glitch *this);
// [0x10cba90] (1076 bytes) gameswf::render_handler_glitch::drawBitmap(gameswf::Matrix const&,gameswf::BitmapInfo *,gameswf::Rect const&,gameswf::Rect const&,gameswf::Color)
// 0x10cba90 gameswf::render_handler_glitch::drawBitmap(gameswf::Matrix const&,gameswf::BitmapInfo *,gameswf::Rect const&,gameswf::Rect const&,gameswf::Color)
// [0x10cbed0] (301 bytes) gameswf::render_handler_glitch::endSubmitMaskImpl(void)
// int gameswf::render_handler_glitch::endSubmitMaskImpl(gameswf::render_handler_glitch *this);
// [0x10cc000] (393 bytes) gameswf::render_handler_glitch::beginSubmitMaskImpl(void)
// int gameswf::render_handler_glitch::beginSubmitMaskImpl(gameswf::render_handler_glitch *this);
// [0x10cc190] (2466 bytes) gameswf::render_handler_glitch::beginDisplay(gameswf::Color,int,int,int,int,float,float,float,float)
// uint32_t *gameswf::render_handler_glitch::beginDisplay( int a1, int a2, int a3, int a4, int a5, int a6, float a7, float a8, float a9, float a10);
// [0x10ccb40] (642 bytes) gameswf::render_handler_glitch::beginEffect(void)
// void gameswf::render_handler_glitch::beginEffect(glitch::video::IVideoDriver **this);
// [0x10cd2b0] (148 bytes) gameswf::render_handler_glitch::setBlendModeImpl(gameswf::BlendMode::id)
// int gameswf::render_handler_glitch::setBlendModeImpl(uint32_t *a1, int a2);
// [0x10cd350] (87 bytes) gameswf::render_handler_glitch::disableMaskImpl(void)
// int gameswf::render_handler_glitch::disableMaskImpl(gameswf::render_handler_glitch *this);
// [0x10cd3b0] (2438 bytes) gameswf::render_handler_glitch::endEffect(gameswf::Effect const&,gameswf::Rect const&)
// int gameswf::render_handler_glitch::endEffect( gameswf::render_handler_glitch *this, const gameswf::Effect *a2, const gameswf::Rect *a3);
// [0x10cdd40] (538 bytes) gameswf::render_handler_glitch::drawVideoBitmap(gameswf::Matrix const&,gameswf::BitmapInfo *,gameswf::BitmapInfo *,gameswf::BitmapInfo *,gameswf::Rect const&,gameswf::Rect const&,gameswf::Color)
// int gameswf::render_handler_glitch::drawVideoBitmap( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
// [0x10cdf60] (1575 bytes) gameswf::render_handler_glitch::FillStyle::apply(glitch::video::IVideoDriver *,gameswf::BufferedRenderer &,gameswf::Matrix const&,float,gameswf::Point const*,bool const*,gameswf::Vertex *,int)const
// int16_t gameswf::render_handler_glitch::FillStyle::apply( gameswf::render_handler_glitch::FillStyle *this, glitch::video::IVideoDriver *a2, gameswf::BufferedRenderer *a3, const gameswf::Matrix *a4, float a5, const gameswf::Point *a6, const bool *a7, Vertex *a8, int a9);
// [0x10ce6a0] (1247 bytes) gameswf::render_handler_glitch::drawLineStrip(void const*,int)
// int gameswf::render_handler_glitch::drawLineStrip(gameswf::render_handler_glitch *this, float *a2, int a3);
// [0x10ceb80] (646 bytes) gameswf::render_handler_glitch::drawImpl(gameswf::PrimitiveInfo const&)
// int gameswf::render_handler_glitch::drawImpl(gameswf::RenderHandler *a1, int a2);
// [0x10cee10] (8121 bytes) gameswf::render_handler_glitch::render_handler_glitch(gameswf::InitializationParameters const&)
// void gameswf::render_handler_glitch::render_handler_glitch( __m128d a1, uint32_t *a2, glitch::video::IVideoDriver **a3);
// [0x10d0dd0] (710 bytes) gameswf::render_handler_glitch::drawAlphaMask(gameswf::PrimitiveInfo const&,gameswf::BitmapInfo *,gameswf::Rect const&,gameswf::Rect const&,gameswf::Matrix const&,gameswf::Matrix const&)
// int gameswf::render_handler_glitch::drawAlphaMask( gameswf::RenderHandler *a1, int a2, int a3, float *a4, float *a5, gameswf::Matrix *a6, gameswf::Matrix *a7);
// [0x10d11f0] (1524 bytes) gameswf::render_handler_glitch::setTargetImpl(gameswf::BitmapInfo *)
// void gameswf::render_handler_glitch::setTargetImpl( gameswf::render_handler_glitch *this, gameswf::BitmapInfo *a2);
