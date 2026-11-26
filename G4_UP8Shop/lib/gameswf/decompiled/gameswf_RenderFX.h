#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_RenderFX.h
// Library: gameswf | Module: gameswf_RenderFX
// Binary Address Span: 0x1115430 .. 0x111b8e0 (65 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1115430] (39 bytes) gameswf::RenderFX::notifyClassInitialized(gameswf::ASClass *)
// int gameswf::RenderFX::notifyClassInitialized(gameswf::RenderFX *this, gameswf::ASClass *a2);
// [0x1115530] (713 bytes) gameswf::RenderFX::RenderFX(void)
// gameswf::RenderFX *gameswf::RenderFX::RenderFX(gameswf::RenderFX *this);
// [0x1115800] (425 bytes) gameswf::RenderFX::forceTexturesToVRAM(bool)
// int gameswf::RenderFX::forceTexturesToVRAM(gameswf::RenderFX *this, bool a2);
// [0x11159b0] (84 bytes) gameswf::RenderFX::unloadTextures(void)
// int gameswf::RenderFX::unloadTextures(gameswf::Player **this);
// [0x1115a10] (17 bytes) gameswf::RenderFX::setEventListener(gameswf::RenderFX::EventListener *)
// int gameswf::RenderFX::setEventListener(int a1, int a2);
// [0x1115b20] (22 bytes) gameswf::RenderFX::getController(int)
// char *gameswf::RenderFX::getController(gameswf::RenderFX *this, int a2);
// [0x1115b40] (25 bytes) gameswf::RenderFX::setControllerEnabled(int,bool)
// char *gameswf::RenderFX::setControllerEnabled(gameswf::RenderFX *this, int a2, bool a3);
// [0x1115b60] (17 bytes) gameswf::RenderFX::setInputBehavior(int)
// gameswf::RenderFX *gameswf::RenderFX::setInputBehavior(gameswf::RenderFX *this, int a2);
// [0x1115b80] (89 bytes) gameswf::RenderFX::forceFlashInputBehavior(bool)
// gameswf::RenderFX *gameswf::RenderFX::forceFlashInputBehavior(gameswf::RenderFX *this, bool a2);
// [0x1115be0] (70 bytes) gameswf::RenderFX::getRootHandle(void)const
// gameswf::RenderFX *gameswf::RenderFX::getRootHandle(gameswf::RenderFX *this, int a2);
// [0x1115c30] (113 bytes) gameswf::RenderFX::getStage(void)const
// gameswf::RenderFX *gameswf::RenderFX::getStage(gameswf::RenderFX *this, int a2);
// [0x1115cb0] (12 bytes) gameswf::RenderFX::getRoot(void)const
// int gameswf::RenderFX::getRoot(gameswf::RenderFX *this);
// [0x1115cc0] (162 bytes) gameswf::RenderFX::findClass(gameswf::String const&,gameswf::String const&)const
// gameswf::RenderFX *gameswf::RenderFX::findClass( gameswf::RenderFX *this, const gameswf::String *a2, const gameswf::String *a3, gameswf::String *a4);
// [0x1115d70] (174 bytes) gameswf::RenderFX::createObject(gameswf::String const&,gameswf::String const&)
// gameswf::RenderFX *gameswf::RenderFX::createObject( gameswf::RenderFX *this, const gameswf::String *a2, const gameswf::String *a3, const gameswf::String *a4);
// [0x1115e20] (1313 bytes) gameswf::RenderFX::createBitmap(boost::intrusive_ptr<glitch::video::ITexture> const&,gameswf::Size const&)
// gameswf::CharacterHandle *gameswf::RenderFX::createBitmap( gameswf::CharacterHandle *a1, int a2, int a3, int a4);
// [0x1116350] (18 bytes) gameswf::RenderFX::setTextBufferingEnabled(bool)
// int gameswf::RenderFX::setTextBufferingEnabled(gameswf::RenderFX *this, bool a2);
// [0x1116370] (37 bytes) gameswf::RenderFX::flushBufferedText(void)
// uint32_t *gameswf::RenderFX::flushBufferedText();
// [0x11163a0] (18 bytes) gameswf::RenderFX::setAutoLoadGlyphsEnabled(bool)
// int gameswf::RenderFX::setAutoLoadGlyphsEnabled(gameswf::RenderFX *this, bool a2);
// [0x11163c0] (18 bytes) gameswf::RenderFX::setRenderCachingEnabled(bool)
// int gameswf::RenderFX::setRenderCachingEnabled(gameswf::RenderFX *this, bool a2);
// [0x11163e0] (704 bytes) gameswf::RenderFX::preloadGlyphs(unsigned short *,int,char const*,int,bool,bool,gameswf::Filter const*)
// int gameswf::RenderFX::preloadGlyphs(int a1, int a2, int a3, char *s, int a5, char a6, char a7);
// [0x11166a0] (350 bytes) gameswf::RenderFX::preloadGlyphs(char const*,char const*,int,bool,bool,gameswf::Filter const*)
// int gameswf::RenderFX::preloadGlyphs(int a1, char *a2, char *s, int a4, char a5, char a6);
// [0x1116800] (605 bytes) gameswf::RenderFX::replaceTexture(char const*,boost::intrusive_ptr<glitch::video::ITexture> const&,gameswf::Size const*)
// uint32_t *gameswf::RenderFX::replaceTexture( int a1, char *s, int a3, int *a4, int a5, int a6, gameswf *a7, int a8);
// [0x1116a60] (701 bytes) gameswf::RenderFX::traceHierarchy(gameswf::Character *,int,int)
// void gameswf::RenderFX::traceHierarchy(gameswf::RenderFX *this, gameswf::Character *a2, int a3, int a4);
// [0x1116d20] (66 bytes) gameswf::RenderFX::traceHierarchy(gameswf::CharacterHandle,int)
// void gameswf::RenderFX::traceHierarchy(gameswf::RenderFX *a1, gameswf::CharacterHandle *a2, int a3);
// [0x1116d70] (47 bytes) gameswf::RenderFX::notifyFSCommand(char const*,char const*)
// int gameswf::RenderFX::notifyFSCommand(gameswf::RenderFX *this, const char *a2, const char *a3);
// [0x1116da0] (1203 bytes) gameswf::RenderFX::sendEvent(gameswf::RenderFX::Event &)
// int gameswf::RenderFX::sendEvent(gameswf::RenderFX *this, Event *a2);
// [0x1117260] (1610 bytes) gameswf::RenderFX::setFocus(gameswf::CharacterHandle,int,bool)
// void gameswf::RenderFX::setFocus(gameswf::Character **a1, gameswf::CharacterHandle *a2, int a3, char a4);
// [0x11178b0] (141 bytes) gameswf::RenderFX::resetFocus(int)
// int gameswf::RenderFX::resetFocus(gameswf::Character **this, int a2);
// [0x1117940] (744 bytes) gameswf::RenderFX::update(int,bool)
// int gameswf::RenderFX::update(gameswf::Root **this, int a2, bool a3);
// [0x1119410] (41 bytes) gameswf::RenderFX::updateCursor(gameswf::RenderFX::Cursor &,int)
// char gameswf::RenderFX::updateCursor( size_t a1, float a2, size_t a3, size_t a4, gameswf::RenderFX *this, Cursor *a6, unsigned int a7);
// [0x1119440] (194 bytes) gameswf::RenderFX::setViewport(int,int,int,int,gameswf::ScaleMode)
// int gameswf::RenderFX::setViewport(int a1, int a2, unsigned int a3, char *a4, int a5, int a6);
// [0x1119510] (194 bytes) gameswf::RenderFX::setBounds(int,int,int,int,gameswf::ScaleMode)
// int gameswf::RenderFX::setBounds(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x11195e0] (142 bytes) gameswf::RenderFX::setStageSize(int,int)
// int gameswf::RenderFX::setStageSize(gameswf::Player **this, int a2, int a3);
// [0x1119670] (72 bytes) gameswf::RenderFX::setOrientation(gameswf::OrientationMode)
// 0x1119670 gameswf::RenderFX::setOrientation(gameswf::OrientationMode)
// [0x11196c0] (18 bytes) gameswf::RenderFX::setGarbageCollectorTime(int)
// int gameswf::RenderFX::setGarbageCollectorTime(gameswf::RenderFX *this, int a2);
// [0x11196e0] (18 bytes) gameswf::RenderFX::setGarbageCollectorIntervalTime(int)
// int gameswf::RenderFX::setGarbageCollectorIntervalTime(gameswf::RenderFX *this, int a2);
// [0x1119700] (18 bytes) gameswf::RenderFX::setGarbageCollectorObjectThreshold(int)
// int gameswf::RenderFX::setGarbageCollectorObjectThreshold(gameswf::RenderFX *this, int a2);
// [0x1119720] (13 bytes) gameswf::RenderFX::getViewportWidth(void)const
// int gameswf::RenderFX::getViewportWidth(gameswf::RenderFX *this);
// [0x1119730] (13 bytes) gameswf::RenderFX::getViewportHeight(void)const
// int gameswf::RenderFX::getViewportHeight(gameswf::RenderFX *this);
// [0x1119740] (13 bytes) gameswf::RenderFX::getBoundWidth(void)const
// int gameswf::RenderFX::getBoundWidth(gameswf::RenderFX *this);
// [0x1119750] (13 bytes) gameswf::RenderFX::getBoundHeight(void)const
// int gameswf::RenderFX::getBoundHeight(gameswf::RenderFX *this);
// [0x1119760] (37 bytes) gameswf::RenderFX::getMovieWidth(void)const
// int gameswf::RenderFX::getMovieWidth(gameswf::Root **this);
// [0x1119790] (37 bytes) gameswf::RenderFX::getMovieHeight(void)const
// int gameswf::RenderFX::getMovieHeight(gameswf::Root **this);
// [0x11197c0] (45 bytes) gameswf::RenderFX::logicalToScreen(gameswf::Point &)const
// gameswf::Root *gameswf::RenderFX::logicalToScreen(gameswf::Root **this, gameswf::Point *a2);
// [0x11197f0] (45 bytes) gameswf::RenderFX::screenToLogical(gameswf::Point &)const
// gameswf::Root *gameswf::RenderFX::screenToLogical(gameswf::Root **this, gameswf::Point *a2);
// [0x1119820] (113 bytes) gameswf::RenderFX::beginDisplay(void)
// uint32_t *gameswf::RenderFX::beginDisplay(gameswf::Player **this);
// [0x11198a0] (113 bytes) gameswf::RenderFX::endDisplay(void)
// uint32_t *gameswf::RenderFX::endDisplay(gameswf::Player **this);
// [0x1119920] (162 bytes) gameswf::RenderFX::render(gameswf::ScreenType)
// uint32_t *gameswf::RenderFX::render(int a1, int a2);
// [0x11199d0] (454 bytes) gameswf::RenderFX::setContext(gameswf::CharacterHandle)
// void gameswf::RenderFX::setContext(int a1, int a2);
// [0x1119ba0] (793 bytes) gameswf::RenderFX::unload(void)
// void gameswf::RenderFX::unload(gameswf::RefCounted **this);
// [0x1119ec0] (593 bytes) gameswf::RenderFX::~RenderFX()
// void gameswf::RenderFX::~RenderFX(gameswf::RenderFX *this);
// [0x111a120] (56 bytes) gameswf::RenderFX::~RenderFX()
// void gameswf::RenderFX::~RenderFX(gameswf::RenderFX *this);
// [0x111a160] (656 bytes) gameswf::RenderFX::load(char const*,gameswf::PlayerContext *)
// void gameswf::RenderFX::load(gameswf::RenderFX *this, char *a2, gameswf::PlayerContext *a3);
// [0x111a3f0] (422 bytes) gameswf::RenderFX::getContext(void)
// gameswf::RenderFX *gameswf::RenderFX::getContext(gameswf::RenderFX *this, int a2);
// [0x111a5a0] (722 bytes) gameswf::RenderFX::collectCharacters(gameswf::array<gameswf::CharacterHandle> &,gameswf::Character *,char const*,int)
// char gameswf::RenderFX::collectCharacters(int a1, int a2, gameswf::Character *a3, char *needle, int a5);
// [0x111a880] (211 bytes) gameswf::RenderFX::findCharacters(gameswf::array<gameswf::CharacterHandle> &,gameswf::CharacterHandle,char const*,int)
// int gameswf::RenderFX::findCharacters(int a1, uint32_t *a2, gameswf::CharacterHandle *a3, char *needle, int a5);
// [0x111a960] (831 bytes) gameswf::RenderFX::preloadGlyphs(gameswf::CharacterHandle)
// int gameswf::RenderFX::preloadGlyphs(int a1, gameswf::CharacterHandle *a2);
// [0x111aca0] (994 bytes) gameswf::RenderFX::depthSearch(int)
// int gameswf::RenderFX::depthSearch(gameswf::RenderFX *this, int a2);
// [0x111b090] (296 bytes) gameswf::RenderFX::findTarget(char const*,gameswf::Character *)
// int gameswf::RenderFX::findTarget(gameswf::Root **this, char *s, gameswf::Character *a3);
// [0x111b1c0] (92 bytes) gameswf::RenderFX::find(char const*,gameswf::CharacterHandle)
// gameswf::CharacterHandle *gameswf::RenderFX::find( gameswf::CharacterHandle *a1, gameswf::Root **a2, char *s, gameswf::CharacterHandle *a4);
// [0x111b220] (1583 bytes) gameswf::RenderFX::forwardEvent(glf::CoreEvent const&)
// void gameswf::RenderFX::forwardEvent(long double a1, gameswf::RenderFX *a2, int16_t *a3);
// [0x111b850] (58 bytes) gameswf::RenderFX::GlfEventReceiver::OnEvent(glf::CoreEvent const&)
// int gameswf::RenderFX::GlfEventReceiver::OnEvent(long double a1, int a2, int16_t *a3);
// [0x111b890] (27 bytes) gameswf::RenderFX::GlfEventReceiver::~GlfEventReceiver()
// void gameswf::RenderFX::GlfEventReceiver::~GlfEventReceiver(gameswf::RenderFX::GlfEventReceiver *this);
// [0x111b8b0] (45 bytes) gameswf::RenderFX::GlfEventReceiver::~GlfEventReceiver()
// void gameswf::RenderFX::GlfEventReceiver::~GlfEventReceiver(gameswf::RenderFX::GlfEventReceiver *this);
// [0x111b8e0] (434 bytes) gameswf::RenderFX::DepthSearchData::Init(gameswf::Character *,char const*)
// char *gameswf::RenderFX::DepthSearchData::Init( gameswf::RenderFX::DepthSearchData *this, gameswf::Character *a2, const char *a3);
