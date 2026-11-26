#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_RenderHandler.h
// Library: gameswf | Module: gameswf_RenderHandler
// Binary Address Span: 0x10bef10 .. 0x10c42c0 (30 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10bef10] (431 bytes) gameswf::RenderHandler::setCamera(float,gameswf::Size const&)
// int *gameswf::RenderHandler::setCamera(int a1, float a2, int *a3);
// [0x10c0340] (148 bytes) gameswf::RenderHandler::transformPositions(gameswf::vector3df *,int,int)
// float *gameswf::RenderHandler::transformPositions( gameswf::RenderHandler *this, gameswf::vector3df *a2, int a3, int a4);
// [0x10c03e0] (618 bytes) gameswf::RenderHandler::alignToPixel(gameswf::Point **,bool)
// gameswf::Point *gameswf::RenderHandler::alignToPixel( gameswf::RenderHandler *this, gameswf::Point **a2, bool a3);
// [0x10c0cd0] (844 bytes) gameswf::RenderHandler::drawMaskedQuad(gameswf::PrimitiveInfo const&,gameswf::StyleInfo const&)
// int gameswf::RenderHandler::drawMaskedQuad(float *a1, int a2, float *a3);
// [0x10c1020] (2599 bytes) gameswf::RenderHandler::flushList(gameswf::BatchList &)
// unsigned int gameswf::RenderHandler::flushList(gameswf::RenderHandler *this, gameswf::BatchList *a2);
// [0x10c1a50] (87 bytes) gameswf::RenderHandler::flush(void)
// int gameswf::RenderHandler::flush(gameswf::RenderHandler *this);
// [0x10c1ab0] (4700 bytes) gameswf::RenderHandler::draw(gameswf::PrimitiveInfo const&)
// gameswf *gameswf::RenderHandler::draw(gameswf::Root **a1, gameswf *a2);
// [0x10c2d10] (212 bytes) gameswf::RenderHandler::setClipBound(gameswf::Rect const&)
// int gameswf::RenderHandler::setClipBound(gameswf::RenderHandler *this, const gameswf::Rect *a2);
// [0x10c2df0] (56 bytes) gameswf::RenderHandler::beginSubmitMask(void)
// int gameswf::RenderHandler::beginSubmitMask(gameswf::RenderHandler *this);
// [0x10c2e30] (631 bytes) gameswf::RenderHandler::endSubmitMask(void)
// int gameswf::RenderHandler::endSubmitMask(gameswf::RenderHandler *this);
// [0x10c30b0] (259 bytes) gameswf::RenderHandler::disableMask(void)
// int gameswf::RenderHandler::disableMask(gameswf **this);
// [0x10c31c0] (75 bytes) gameswf::RenderHandler::setBitmapCache(gameswf::BitmapInfo *)
// int gameswf::RenderHandler::setBitmapCache(gameswf::RenderHandler *this, gameswf::BitmapInfo *a2);
// [0x10c34b0] (9 bytes) gameswf::RenderHandler::beginEffect(void)
// void gameswf::RenderHandler::beginEffect();
// [0x10c34c0] (9 bytes) gameswf::RenderHandler::endEffect(gameswf::Effect const&,gameswf::Rect const&)
// void gameswf::RenderHandler::endEffect();
// [0x10c34d0] (9 bytes) gameswf::RenderHandler::setRenderMode(gameswf::RenderMode)
// void gameswf::RenderHandler::setRenderMode();
// [0x10c34e0] (17 bytes) gameswf::RenderHandler::setRoot(gameswf::Root *)
// gameswf::RenderHandler *gameswf::RenderHandler::setRoot(gameswf::RenderHandler *this, gameswf::Root *a2);
// [0x10c3500] (9 bytes) gameswf::RenderHandler::drawVideoBitmap(gameswf::Matrix const&,gameswf::BitmapInfo *,gameswf::BitmapInfo *,gameswf::BitmapInfo *,gameswf::Rect const&,gameswf::Rect const&,gameswf::Color)
// void gameswf::RenderHandler::drawVideoBitmap();
// [0x10c3510] (9 bytes) gameswf::RenderHandler::drawAlphaMask(gameswf::PrimitiveInfo const&,gameswf::BitmapInfo *,gameswf::Rect const&,gameswf::Rect const&,gameswf::Matrix const&,gameswf::Matrix const&)
// void gameswf::RenderHandler::drawAlphaMask();
// [0x10c3520] (9 bytes) gameswf::RenderHandler::flushImpl(void)
// void gameswf::RenderHandler::flushImpl();
// [0x10c3530] (9 bytes) gameswf::RenderHandler::renderScreen(gameswf::ScreenType)
// void gameswf::RenderHandler::renderScreen();
// [0x10c3540] (9 bytes) gameswf::RenderHandler::setCursor(gameswf::RenderHandler::CursorType)
// void gameswf::RenderHandler::setCursor();
// [0x10c3550] (9 bytes) gameswf::RenderHandler::reset(void)
// void gameswf::RenderHandler::reset();
// [0x10c3560] (9 bytes) gameswf::RenderHandler::setOrientation(gameswf::OrientationMode)
// void gameswf::RenderHandler::setOrientation();
// [0x10c3570] (9 bytes) gameswf::RenderHandler::getOrientation(void)
// int gameswf::RenderHandler::getOrientation();
// [0x10c3580] (9 bytes) gameswf::RenderHandler::beginDisplayCallback(void)
// void gameswf::RenderHandler::beginDisplayCallback();
// [0x10c3590] (9 bytes) gameswf::RenderHandler::endDisplayCallback(void)
// void gameswf::RenderHandler::endDisplayCallback();
// [0x10c3760] (502 bytes) gameswf::RenderHandler::pushTransform(gameswf::Transform const&,gameswf::Character *)
// char *gameswf::RenderHandler::pushTransform( gameswf::RenderHandler *this, const gameswf::Transform *a2, gameswf::Character *a3);
// [0x10c3960] (347 bytes) gameswf::RenderHandler::popTransform(void)
// void gameswf::RenderHandler::popTransform(gameswf::RenderHandler *this);
// [0x10c3ac0] (2047 bytes) gameswf::RenderHandler::~RenderHandler()
// void gameswf::RenderHandler::~RenderHandler(gameswf::RenderHandler *this);
// [0x10c42c0] (56 bytes) gameswf::RenderHandler::~RenderHandler()
// void gameswf::RenderHandler::~RenderHandler(gameswf::RenderHandler *this);
