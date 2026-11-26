#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASSprite.h
// Library: gameswf | Module: gameswf_ASSprite
// Binary Address Span: 0x113ede0 .. 0x1141dd0 (34 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x113ede0] (489 bytes) gameswf::ASSprite::ctor(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASSprite::ctor(gameswf::ASValue **a1);
// [0x113f050] (451 bytes) gameswf::ASSprite::hitTest(gameswf::FunctionCall const&)
// int gameswf::ASSprite::hitTest(int a1);
// [0x113f220] (2022 bytes) gameswf::ASSprite::getBounds(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASSprite::getBounds(int a1);
// [0x113ffa0] (117 bytes) gameswf::ASSprite::localToGlobal(gameswf::FunctionCall const&)
// void gameswf::ASSprite::localToGlobal(int a1);
// [0x1140020] (165 bytes) gameswf::ASSprite::globalToLocal(gameswf::FunctionCall const&)
// void gameswf::ASSprite::globalToLocal(int a1);
// [0x11400d0] (496 bytes) gameswf::ASSprite::startDrag(gameswf::FunctionCall const&)
// int gameswf::ASSprite::startDrag(int a1);
// [0x11402c0] (286 bytes) gameswf::ASSprite::stopDrag(gameswf::FunctionCall const&)
// gameswf::Root *gameswf::ASSprite::stopDrag(int a1);
// [0x11403e0] (53 bytes) gameswf::ASSprite::play(gameswf::FunctionCall const&)
// int gameswf::ASSprite::play(int a1);
// [0x1140420] (53 bytes) gameswf::ASSprite::stop(gameswf::FunctionCall const&)
// int gameswf::ASSprite::stop(int a1);
// [0x1140460] (291 bytes) gameswf::ASSprite::gotoAndPlay(gameswf::FunctionCall const&)
// int gameswf::ASSprite::gotoAndPlay(uint32_t *a1);
// [0x1140590] (283 bytes) gameswf::ASSprite::gotoAndStop(gameswf::FunctionCall const&)
// int gameswf::ASSprite::gotoAndStop(uint32_t *a1);
// [0x11406b0] (123 bytes) gameswf::ASSprite::nextFrame(gameswf::FunctionCall const&)
// int gameswf::ASSprite::nextFrame(int a1);
// [0x1140730] (102 bytes) gameswf::ASSprite::prevFrame(gameswf::FunctionCall const&)
// int gameswf::ASSprite::prevFrame(int a1);
// [0x11407a0] (76 bytes) gameswf::ASSprite::getBytesLoaded(gameswf::FunctionCall const&)
// int gameswf::ASSprite::getBytesLoaded(gameswf::ASValue **a1);
// [0x11407f0] (76 bytes) gameswf::ASSprite::getBytesTotal(gameswf::FunctionCall const&)
// int gameswf::ASSprite::getBytesTotal(gameswf::ASValue **a1);
// [0x1140840] (801 bytes) gameswf::ASSprite::swapDepths(gameswf::FunctionCall const&)
// int gameswf::ASSprite::swapDepths(int a1);
// [0x1140b70] (414 bytes) gameswf::ASSprite::duplicateMovieClip(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASSprite::duplicateMovieClip(int a1);
// [0x1140d10] (80 bytes) gameswf::ASSprite::getDepth(gameswf::FunctionCall const&)
// int gameswf::ASSprite::getDepth(gameswf::ASValue **a1);
// [0x1140d60] (173 bytes) gameswf::ASSprite::createEmptyMovieClip(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASSprite::createEmptyMovieClip(int a1);
// [0x1140e10] (158 bytes) gameswf::ASSprite::removeMovieClip(gameswf::FunctionCall const&)
// int gameswf::ASSprite::removeMovieClip(int a1);
// [0x1140eb0] (139 bytes) gameswf::ASSprite::loadMovie(gameswf::FunctionCall const&)
// int gameswf::ASSprite::loadMovie(int a1);
// [0x1140f40] (116 bytes) gameswf::ASSprite::unloadMovie(gameswf::FunctionCall const&)
// int gameswf::ASSprite::unloadMovie(int a1);
// [0x1140fc0] (81 bytes) gameswf::ASSprite::getNextHighestDepth(gameswf::FunctionCall const&)
// int gameswf::ASSprite::getNextHighestDepth(gameswf::ASValue **a1);
// [0x1141020] (163 bytes) gameswf::ASSprite::getInstanceAtDepth(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASSprite::getInstanceAtDepth(int a1);
// [0x11410d0] (347 bytes) gameswf::ASSprite::createTextField(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASSprite::createTextField(int a1);
// [0x1141230] (1830 bytes) gameswf::ASSprite::attachMovie(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASSprite::attachMovie(int a1);
// [0x1141960] (123 bytes) gameswf::ASSprite::setFPS(gameswf::FunctionCall const&)
// gameswf::MovieDefImpl *gameswf::ASSprite::setFPS(int a1);
// [0x11419e0] (264 bytes) gameswf::ASSprite::beginFill(gameswf::FunctionCall const&)
// int gameswf::ASSprite::beginFill(int a1);
// [0x1141af0] (50 bytes) gameswf::ASSprite::endFill(gameswf::FunctionCall const&)
// int gameswf::ASSprite::endFill(int a1);
// [0x1141b30] (103 bytes) gameswf::ASSprite::clear(gameswf::FunctionCall const&)
// int gameswf::ASSprite::clear(int a1);
// [0x1141ba0] (157 bytes) gameswf::ASSprite::moveTo(gameswf::FunctionCall const&)
// gameswf::Canvas *gameswf::ASSprite::moveTo(int a1);
// [0x1141c40] (157 bytes) gameswf::ASSprite::lineTo(gameswf::FunctionCall const&)
// gameswf::Canvas *gameswf::ASSprite::lineTo(int a1);
// [0x1141ce0] (239 bytes) gameswf::ASSprite::curveTo(gameswf::FunctionCall const&)
// gameswf::Canvas *gameswf::ASSprite::curveTo(int a1);
// [0x1141dd0] (376 bytes) gameswf::ASSprite::lineStyle(gameswf::FunctionCall const&)
// int gameswf::ASSprite::lineStyle(int a1);
