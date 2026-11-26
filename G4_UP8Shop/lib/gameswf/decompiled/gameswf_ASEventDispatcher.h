#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASEventDispatcher.h
// Library: gameswf | Module: gameswf_ASEventDispatcher
// Binary Address Span: 0x1164400 .. 0x116d400 (22 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1164400] (9 bytes) gameswf::ASEventDispatcher::init(gameswf::FunctionCall const&)
// void gameswf::ASEventDispatcher::init();
// [0x1164ae0] (516 bytes) gameswf::ASEventDispatcher::clearRefs(int)
// char *gameswf::ASEventDispatcher::clearRefs(gameswf::ASEventDispatcher *this, int a2);
// [0x1165300] (526 bytes) gameswf::ASEventDispatcher::createClass(gameswf::Player *)
// gameswf **gameswf::ASEventDispatcher::createClass(gameswf::ASEventDispatcher *this);
// [0x1165510] (81 bytes) gameswf::ASEventDispatcher::ASEventDispatcher(gameswf::Player *)
// void (**gameswf::ASEventDispatcher::ASEventDispatcher( gameswf::ASEventDispatcher *this, gameswf::Player *a2))(gameswf::ASEventDispatcher *__hidden this);
// [0x1165570] (76 bytes) gameswf::ASEventDispatcher::newOp(gameswf::Player *)
// gameswf::ASEventDispatcher *gameswf::ASEventDispatcher::newOp(gameswf::ASEventDispatcher *this);
// [0x1165930] (110 bytes) gameswf::ASEventDispatcher::hasCaptureEventListener(gameswf::String const&)const
// bool gameswf::ASEventDispatcher::hasCaptureEventListener( gameswf::ASEventDispatcher *this, const gameswf::String *a2);
// [0x11659a0] (740 bytes) gameswf::ASEventDispatcher::dispatchCaptureEvent(gameswf::ASEvent *)
// int gameswf::ASEventDispatcher::dispatchCaptureEvent(gameswf::ASEventDispatcher *this, gameswf::ASEvent *a2);
// [0x1165c90] (222 bytes) gameswf::ASEventDispatcher::dispatchEvent(gameswf::FunctionCall const&)
// int gameswf::ASEventDispatcher::dispatchEvent(int a1);
// [0x1165d70] (110 bytes) gameswf::ASEventDispatcher::hasEventListener(gameswf::String const&)const
// bool gameswf::ASEventDispatcher::hasEventListener(gameswf::ASEventDispatcher *this, const gameswf::String *a2);
// [0x1165de0] (373 bytes) gameswf::ASEventDispatcher::hasEventListener(gameswf::FunctionCall const&)
// int gameswf::ASEventDispatcher::hasEventListener(int a1);
// [0x1165f60] (2387 bytes) gameswf::ASEventDispatcher::dispatchEvent(gameswf::ASEvent *)
// gameswf *gameswf::ASEventDispatcher::dispatchEvent(gameswf **this, gameswf::ASEvent *a2);
// [0x11668c0] (692 bytes) gameswf::ASEventDispatcher::thisAlive(void)
// char *gameswf::ASEventDispatcher::thisAlive(gameswf::ASEventDispatcher *this);
// [0x1168350] (1112 bytes) gameswf::ASEventDispatcher::removeEventListener(gameswf::String const&,gameswf::ASFunction *,bool)
// gameswf *gameswf::ASEventDispatcher::removeEventListener( gameswf::ASEventDispatcher *this, const gameswf::String *a2, gameswf::ASFunction *a3, bool a4);
// [0x11687b0] (373 bytes) gameswf::ASEventDispatcher::removeEventListener(gameswf::FunctionCall const&)
// int gameswf::ASEventDispatcher::removeEventListener(int a1);
// [0x116a1c0] (1461 bytes) gameswf::ASEventDispatcher::addEventListener(gameswf::String const&,gameswf::ASFunction *,bool,int,bool)
// gameswf *gameswf::ASEventDispatcher::addEventListener( gameswf::ASEventDispatcher *this, const gameswf::String *a2, gameswf::ASFunction *a3, bool a4, int a5, gameswf **a6, gameswf **a7);
// [0x116a780] (541 bytes) gameswf::ASEventDispatcher::addEventListener(gameswf::FunctionCall const&)
// int gameswf::ASEventDispatcher::addEventListener(int a1);
// [0x116a9c0] (20 bytes) gameswf::ASEventDispatcher::is(int)const
// bool gameswf::ASEventDispatcher::is(gameswf::ASEventDispatcher *this, int a2);
// [0x116af70] (521 bytes) gameswf::ASEventDispatcher::~ASEventDispatcher()
// void gameswf::ASEventDispatcher::~ASEventDispatcher(gameswf::ASEventDispatcher *this);
// [0x116b180] (537 bytes) gameswf::ASEventDispatcher::~ASEventDispatcher()
// void gameswf::ASEventDispatcher::~ASEventDispatcher(gameswf::ASEventDispatcher *this);
// [0x116c2d0] (279 bytes) gameswf::ASEventDispatcher::Entry * std::copy_backward<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *>(gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *)
// int std::copy_backward<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *>( int a1, int a2, int a3);
// [0x116cd00] (213 bytes) gameswf::ASEventDispatcher::Entry * std::copy<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *>(gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *)
// int std::copy<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *>(int a1, int a2, int a3);
// [0x116d400] (631 bytes) gameswf::ASEventDispatcher::Entry * std::__move_merge<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter>(gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter)
// int std::__move_merge<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter>( int a1, int a2, int a3, int a4, int a5);
