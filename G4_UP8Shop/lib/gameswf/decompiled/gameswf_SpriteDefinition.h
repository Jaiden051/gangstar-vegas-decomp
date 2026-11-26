#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_SpriteDefinition.h
// Library: gameswf | Module: gameswf_SpriteDefinition
// Binary Address Span: 0x10a1950 .. 0x10ebbe0 (43 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10a1950] (168 bytes) gameswf::SpriteDefinition::createCharacterInstance(gameswf::Character *,int)
// int gameswf::SpriteDefinition::createCharacterInstance( gameswf::SpriteDefinition *this, gameswf::Character *a2, int a3);
// [0x10eadc0] (470 bytes) gameswf::SpriteDefinition::~SpriteDefinition()
// void gameswf::SpriteDefinition::~SpriteDefinition(gameswf::SpriteDefinition *this);
// [0x10eafa0] (56 bytes) gameswf::SpriteDefinition::~SpriteDefinition()
// void gameswf::SpriteDefinition::~SpriteDefinition(gameswf::SpriteDefinition *this);
// [0x10eafe0] (697 bytes) gameswf::SpriteDefinition::SpriteDefinition(gameswf::Player *,gameswf::MovieDefinitionSub *)
// void (**gameswf::SpriteDefinition::SpriteDefinition( pthread_mutex_t **this, gameswf::Player *a2, gameswf::MovieDefinitionSub *a3))(gameswf::SpriteDefinition *__hidden this);
// [0x10eb2a0] (589 bytes) gameswf::SpriteDefinition::read(gameswf::Stream *)
// gameswf *gameswf::SpriteDefinition::read(gameswf::SpriteDefinition *this, gameswf::Stream *a2);
// [0x10eb4f0] (26 bytes) gameswf::SpriteDefinition::is(int)const
// bool gameswf::SpriteDefinition::is(gameswf::SpriteDefinition *this, int a2);
// [0x10eb510] (9 bytes) gameswf::SpriteDefinition::getWidthPixels(void)const
// long double gameswf::SpriteDefinition::getWidthPixels();
// [0x10eb520] (9 bytes) gameswf::SpriteDefinition::getHeightPixels(void)const
// long double gameswf::SpriteDefinition::getHeightPixels();
// [0x10eb530] (34 bytes) gameswf::SpriteDefinition::getFrameRate(void)const
// long double gameswf::SpriteDefinition::getFrameRate(gameswf::SpriteDefinition *this);
// [0x10eb560] (30 bytes) gameswf::SpriteDefinition::getVersion(void)const
// int gameswf::SpriteDefinition::getVersion(gameswf::SpriteDefinition *this);
// [0x10eb580] (9 bytes) gameswf::SpriteDefinition::addABC(gameswf::String &,gameswf::abc_def *)
// void gameswf::SpriteDefinition::addABC();
// [0x10eb590] (9 bytes) gameswf::SpriteDefinition::addSymbolClass(int,gameswf::String const&)
// void gameswf::SpriteDefinition::addSymbolClass();
// [0x10eb5a0] (9 bytes) gameswf::SpriteDefinition::addScene(int,gameswf::String const&)
// void gameswf::SpriteDefinition::addScene();
// [0x10eb5b0] (9 bytes) gameswf::SpriteDefinition::addFrameLabel(int,gameswf::String const&)
// void gameswf::SpriteDefinition::addFrameLabel();
// [0x10eb5c0] (32 bytes) gameswf::SpriteDefinition::getFont(int)
// int gameswf::SpriteDefinition::getFont(gameswf::SpriteDefinition *this, int a2);
// [0x10eb5e0] (9 bytes) gameswf::SpriteDefinition::setJpegLoader(gameswf::jpeg::input *)
// void gameswf::SpriteDefinition::setJpegLoader();
// [0x10eb5f0] (9 bytes) gameswf::SpriteDefinition::getJpegLoader(void)
// int gameswf::SpriteDefinition::getJpegLoader();
// [0x10eb600] (35 bytes) gameswf::SpriteDefinition::getBitmapCharacter(int)
// int gameswf::SpriteDefinition::getBitmapCharacter(gameswf::SpriteDefinition *this, int a2);
// [0x10eb630] (35 bytes) gameswf::SpriteDefinition::getSoundSample(int)
// int gameswf::SpriteDefinition::getSoundSample(gameswf::SpriteDefinition *this, int a2);
// [0x10eb660] (9 bytes) gameswf::SpriteDefinition::getCreateBitmaps(void)const
// int gameswf::SpriteDefinition::getCreateBitmaps();
// [0x10eb670] (9 bytes) gameswf::SpriteDefinition::getCreateFontShapes(void)const
// int gameswf::SpriteDefinition::getCreateFontShapes();
// [0x10eb680] (9 bytes) gameswf::SpriteDefinition::getBitmapInfoCount(void)const
// int gameswf::SpriteDefinition::getBitmapInfoCount();
// [0x10eb690] (9 bytes) gameswf::SpriteDefinition::getBitmapInfo(int)const
// int gameswf::SpriteDefinition::getBitmapInfo();
// [0x10eb6a0] (9 bytes) gameswf::SpriteDefinition::addBitmapInfo(gameswf::BitmapInfo *)
// void gameswf::SpriteDefinition::addBitmapInfo();
// [0x10eb6b0] (32 bytes) gameswf::SpriteDefinition::getExportedResource(gameswf::String const&)
// int gameswf::SpriteDefinition::getExportedResource(gameswf::SpriteDefinition *this, const gameswf::String *a2);
// [0x10eb6d0] (9 bytes) gameswf::SpriteDefinition::addImport(gameswf::MovieDefImpl *,int,gameswf::String const&)
// void gameswf::SpriteDefinition::addImport();
// [0x10eb6e0] (9 bytes) gameswf::SpriteDefinition::getImportCharacter(gameswf::String const&,unsigned short &)
// int gameswf::SpriteDefinition::getImportCharacter();
// [0x10eb6f0] (9 bytes) gameswf::SpriteDefinition::visitImportedMovies(gameswf::MovieDefinition::ImportVisitor *)
// void gameswf::SpriteDefinition::visitImportedMovies();
// [0x10eb700] (32 bytes) gameswf::SpriteDefinition::getCharacterDef(int)
// int gameswf::SpriteDefinition::getCharacterDef(gameswf::SpriteDefinition *this, int a2);
// [0x10eb720] (9 bytes) gameswf::SpriteDefinition::createInstance(void)
// int gameswf::SpriteDefinition::createInstance();
// [0x10eb730] (9 bytes) gameswf::SpriteDefinition::hasInitActions(void)
// int gameswf::SpriteDefinition::hasInitActions();
// [0x10eb740] (15 bytes) gameswf::SpriteDefinition::getPlaylist(int)
// int gameswf::SpriteDefinition::getPlaylist(gameswf::SpriteDefinition *this, int a2);
// [0x10eb750] (9 bytes) gameswf::SpriteDefinition::getInitActions(int)
// int gameswf::SpriteDefinition::getInitActions();
// [0x10eb760] (132 bytes) gameswf::SpriteDefinition::getCurrentLabels(void)
// gameswf::RefCounted *gameswf::SpriteDefinition::getCurrentLabels(gameswf::SpriteDefinition *this);
// [0x10eb7f0] (36 bytes) gameswf::SpriteDefinition::addInitAction(int,gameswf::ExecuteTag *)
// int gameswf::SpriteDefinition::addInitAction();
// [0x10eb820] (36 bytes) gameswf::SpriteDefinition::exportResource(gameswf::String const&,int,gameswf::CharacterDef *)
// int gameswf::SpriteDefinition::exportResource();
// [0x10eb850] (36 bytes) gameswf::SpriteDefinition::addSoundSample(int,gameswf::SoundSample *)
// int gameswf::SpriteDefinition::addSoundSample();
// [0x10eb880] (36 bytes) gameswf::SpriteDefinition::addBitmapCharacter(int,gameswf::BitmapCharacterDef *)
// int gameswf::SpriteDefinition::addBitmapCharacter();
// [0x10eb8b0] (36 bytes) gameswf::SpriteDefinition::addFont(int,gameswf::Font *)
// int gameswf::SpriteDefinition::addFont();
// [0x10eb8e0] (36 bytes) gameswf::SpriteDefinition::addCharacter(int,gameswf::CharacterDef *)
// int gameswf::SpriteDefinition::addCharacter();
// [0x10eb910] (486 bytes) gameswf::SpriteDefinition::getLabeledFrame(gameswf::StringI const&,int *)
// int gameswf::SpriteDefinition::getLabeledFrame( gameswf::SpriteDefinition *this, const gameswf::StringI *a2, int *a3);
// [0x10ebb00] (221 bytes) gameswf::SpriteDefinition::addExecuteTag(gameswf::ExecuteTag *)
// uint32_t *gameswf::SpriteDefinition::addExecuteTag(gameswf::SpriteDefinition *this, gameswf::ExecuteTag *a2);
// [0x10ebbe0] (3185 bytes) gameswf::SpriteDefinition::addFrameName(char const*)
// int gameswf::SpriteDefinition::addFrameName(gameswf::SpriteDefinition *this, char *s);
