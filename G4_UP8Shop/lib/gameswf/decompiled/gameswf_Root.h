#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_Root.h
// Library: gameswf | Module: gameswf_Root
// Binary Address Span: 0x10d1850 .. 0x10d50b0 (41 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10d1850] (1529 bytes) gameswf::Root::~Root()
// void gameswf::Root::~Root(gameswf::Root *this);
// [0x10d1e50] (56 bytes) gameswf::Root::~Root()
// void gameswf::Root::~Root(gameswf::Root *this);
// [0x10d1eb0] (24 bytes) gameswf::Root::getMovieVersion(void)
// int gameswf::Root::getMovieVersion(gameswf::Root *this);
// [0x10d1ed0] (34 bytes) gameswf::Root::getMovieWidth(void)
// int gameswf::Root::getMovieWidth(gameswf::Root *this);
// [0x10d1f00] (34 bytes) gameswf::Root::getMovieHeight(void)
// int gameswf::Root::getMovieHeight(gameswf::Root *this);
// [0x10d1f30] (24 bytes) gameswf::Root::getMovieFPS(void)
// int gameswf::Root::getMovieFPS(gameswf::Root *this);
// [0x10d1f50] (86 bytes) gameswf::Root::setRootMovie(gameswf::Character *)
// gameswf::RefCounted *gameswf::Root::setRootMovie(gameswf::Root *this, gameswf::Character *a2);
// [0x10d1fb0] (1694 bytes) gameswf::Root::updateMatrices(void)
// int gameswf::Root::updateMatrices( __m128 a1, __m128 a2, gameswf::Root *this, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, unsigned int a30, float a31, float a32, unsigned int a33, float a34, float a35, int a36, int a37, uint32_t a38, uint32_t a39, uint32_t a40, uint32_t a41, uint32_t a42, uint32_t a43);
// [0x10d2650] (68 bytes) gameswf::Root::setStageSize(int,int)
// 0x10d2650 gameswf::Root::setStageSize(int,int)
// [0x10d26a0] (73 bytes) gameswf::Root::screenToLogical(gameswf::Point &)
// gameswf::Root *gameswf::Root::screenToLogical(gameswf::Root *this, gameswf::Point *a2);
// [0x10d26f0] (2817 bytes) gameswf::Root::setDisplayBounds(int,int,int,int)
// 0x10d26f0 gameswf::Root::setDisplayBounds(int,int,int,int)
// [0x10d3200] (76 bytes) gameswf::Root::setDisplayBounds(int,int,int,int,gameswf::ScaleMode)
// int gameswf::Root::setDisplayBounds(gameswf::Root *a1, int a2, int a3, int a4, int a5, int a6);
// [0x10d3250] (72 bytes) gameswf::Root::setAlignMode(gameswf::AlignMode)
// int gameswf::Root::setAlignMode(gameswf::Root *a1, int a2);
// [0x10d32a0] (88 bytes) gameswf::Root::logicalToScreen(gameswf::Point &)
// gameswf::Root *gameswf::Root::logicalToScreen(gameswf::Root *this, gameswf::Point *a2);
// [0x10d3300] (282 bytes) gameswf::Root::logicalToScreenInternal(gameswf::Point &)
// int gameswf::Root::logicalToScreenInternal(gameswf::Root *this, gameswf::Point *a2);
// [0x10d3420] (35 bytes) gameswf::Root::notifyMouseState(int,int,int)
// gameswf::Root *gameswf::Root::notifyMouseState(gameswf::Root *this, int a2, int a3, int a4);
// [0x10d3450] (41 bytes) gameswf::Root::getMouseState(int *,int *,int *)
// int *gameswf::Root::getMouseState(gameswf::Root *this, int *a2, int *a3, int *a4);
// [0x10d3480] (12 bytes) gameswf::Root::getRootMovie(void)
// int gameswf::Root::getRootMovie(gameswf::Root *this);
// [0x10d3490] (262 bytes) gameswf::Root::getStage(void)
// int gameswf::Root::getStage(gameswf::Root *this);
// [0x10d35a0] (537 bytes) gameswf::Root::setDisplayViewport(int,int,int,int,gameswf::ScaleMode)
// int gameswf::Root::setDisplayViewport(gameswf::Root *a1, int a2, unsigned int a3, char *a4, int a5, int a6);
// [0x10d37c0] (19 bytes) gameswf::Root::stopDrag(void)
// gameswf::Root *gameswf::Root::stopDrag(gameswf::Root *this);
// [0x10d37e0] (245 bytes) gameswf::Root::startDrag(gameswf::Character *,bool,bool,gameswf::Rect &)
// int gameswf::Root::startDrag(gameswf::Root *this, gameswf::Character *a2, bool a3, bool a4, gameswf::Rect *a5);
// [0x10d38e0] (27 bytes) gameswf::Root::getMovieDefinition(void)
// int gameswf::Root::getMovieDefinition(gameswf::Root *this);
// [0x10d3900] (27 bytes) gameswf::Root::getCurrentFrame(void)const
// int gameswf::Root::getCurrentFrame(gameswf::Root *this);
// [0x10d3920] (24 bytes) gameswf::Root::getFrameRate(void)const
// int gameswf::Root::getFrameRate(gameswf::Root *this);
// [0x10d3940] (99 bytes) gameswf::Root::setFrameRate(float)
// gameswf::MovieDefImpl *gameswf::Root::setFrameRate(gameswf::MovieDefImpl **this, float a2);
// [0x10d39b0] (12 bytes) gameswf::Root::getPixelScale(void)const
// long double gameswf::Root::getPixelScale(gameswf::Root *this);
// [0x10d39c0] (35 bytes) gameswf::Root::getCharacter(int)
// int gameswf::Root::getCharacter(gameswf::Root *this, int a2);
// [0x10d39f0] (17 bytes) gameswf::Root::setBackgroundColor(gameswf::Color const&)
// gameswf::Root *gameswf::Root::setBackgroundColor(gameswf::Root *this, const gameswf::Color *a2);
// [0x10d3a10] (68 bytes) gameswf::Root::setBackgroundAlpha(float)
// int gameswf::Root::setBackgroundAlpha(gameswf::Root *this, float a2);
// [0x10d3a60] (51 bytes) gameswf::Root::getBackgroundAlpha(void)const
// long double gameswf::Root::getBackgroundAlpha(gameswf::Root *this);
// [0x10d3aa0] (931 bytes) gameswf::Root::beginDisplay(void)
// uint32_t *gameswf::Root::beginDisplay(gameswf **this);
// [0x10d3e50] (109 bytes) gameswf::Root::setCameraFOV(float)
// int gameswf::Root::setCameraFOV(gameswf::Root *this, float a2);
// [0x10d3ec0] (1206 bytes) gameswf::Root::Root(gameswf::Player *,gameswf::MovieDefImpl *)
// gameswf::Root *gameswf::Root::Root(gameswf::Root *this, gameswf::Player *a2, gameswf::MovieDefImpl *a3);
// [0x10d4380] (124 bytes) gameswf::Root::projectPosition(gameswf::vector3df const&,gameswf::Point *)
// gameswf::Root *gameswf::Root::projectPosition( gameswf::Root *this, const gameswf::vector3df *a2, gameswf::Point *a3);
// [0x10d4400] (42 bytes) gameswf::Root::flushBufferedText(void)
// uint32_t *gameswf::Root::flushBufferedText();
// [0x10d4430] (112 bytes) gameswf::Root::endDisplay(void)
// uint32_t *gameswf::Root::endDisplay();
// [0x10d44a0] (9 bytes) gameswf::Root::renderVirtualKeyboard(void)
// void gameswf::Root::renderVirtualKeyboard();
// [0x10d44b0] (1189 bytes) gameswf::Root::setFlashVars(gameswf::String const&)
// void gameswf::Root::setFlashVars(gameswf::Root *this, const gameswf::String *a2);
// [0x10d4960] (1863 bytes) gameswf::Root::advance(float,bool)
// int gameswf::Root::advance(gameswf::Root *this, float a2, bool a3);
// [0x10d50b0] (130 bytes) gameswf::Root::display(void)
// uint32_t *gameswf::Root::display(gameswf::Root *this);
