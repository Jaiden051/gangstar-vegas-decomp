#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_MovieDefImpl.h
// Library: gameswf | Module: gameswf_MovieDefImpl
// Binary Address Span: 0x10a2280 .. 0x10ae6f0 (52 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10a2280] (813 bytes) gameswf::MovieDefImpl::createRoot(void)
// gameswf::Root *gameswf::MovieDefImpl::createRoot(gameswf::MovieDefImpl *this);
// [0x10a25b0] (34 bytes) gameswf::MovieDefImpl::createInstance(void)
// gameswf::Root *gameswf::MovieDefImpl::createInstance(gameswf::MovieDefImpl *this);
// [0x10aa5e0] (15 bytes) gameswf::MovieDefImpl::getFrameRate(void)const
// long double gameswf::MovieDefImpl::getFrameRate(gameswf::MovieDefImpl *this);
// [0x10aa5f0] (15 bytes) gameswf::MovieDefImpl::getVersion(void)const
// int gameswf::MovieDefImpl::getVersion(gameswf::MovieDefImpl *this);
// [0x10aa600] (15 bytes) gameswf::MovieDefImpl::getCreateBitmaps(void)const
// int gameswf::MovieDefImpl::getCreateBitmaps(gameswf::MovieDefImpl *this);
// [0x10aa610] (15 bytes) gameswf::MovieDefImpl::getCreateFontShapes(void)const
// int gameswf::MovieDefImpl::getCreateFontShapes(gameswf::MovieDefImpl *this);
// [0x10aa620] (15 bytes) gameswf::MovieDefImpl::getBitmapInfoCount(void)const
// int gameswf::MovieDefImpl::getBitmapInfoCount(gameswf::MovieDefImpl *this);
// [0x10aa630] (18 bytes) gameswf::MovieDefImpl::getBitmapInfo(int)const
// int gameswf::MovieDefImpl::getBitmapInfo(gameswf::MovieDefImpl *this, int a2);
// [0x10aa650] (9 bytes) gameswf::MovieDefImpl::visitImportedMovies(gameswf::MovieDefinition::ImportVisitor *)
// void gameswf::MovieDefImpl::visitImportedMovies();
// [0x10aa660] (17 bytes) gameswf::MovieDefImpl::setJpegLoader(gameswf::jpeg::input *)
// gameswf::MovieDefImpl *gameswf::MovieDefImpl::setJpegLoader( gameswf::MovieDefImpl *this, gameswf::jpeg::input *a2);
// [0x10aa680] (15 bytes) gameswf::MovieDefImpl::getJpegLoader(void)
// int gameswf::MovieDefImpl::getJpegLoader(gameswf::MovieDefImpl *this);
// [0x10aa690] (15 bytes) gameswf::MovieDefImpl::getPlaylist(int)
// int gameswf::MovieDefImpl::getPlaylist(gameswf::MovieDefImpl *this, int a2);
// [0x10aa6a0] (15 bytes) gameswf::MovieDefImpl::getInitActions(int)
// int gameswf::MovieDefImpl::getInitActions(gameswf::MovieDefImpl *this, int a2);
// [0x10aa6b0] (108 bytes) gameswf::MovieDefImpl::getWidthPixels(void)const
// long double gameswf::MovieDefImpl::getWidthPixels(gameswf::MovieDefImpl *this);
// [0x10aa720] (108 bytes) gameswf::MovieDefImpl::getHeightPixels(void)const
// long double gameswf::MovieDefImpl::getHeightPixels(gameswf::MovieDefImpl *this);
// [0x10aa790] (284 bytes) gameswf::MovieDefImpl::addBitmapInfo(gameswf::BitmapInfo *)
// gameswf::RefCounted *gameswf::MovieDefImpl::addBitmapInfo(gameswf::MovieDefImpl *this, gameswf::BitmapInfo *a2);
// [0x10aa8b0] (221 bytes) gameswf::MovieDefImpl::addExecuteTag(gameswf::ExecuteTag *)
// uint32_t *gameswf::MovieDefImpl::addExecuteTag(gameswf::MovieDefImpl *this, gameswf::ExecuteTag *a2);
// [0x10aa990] (251 bytes) gameswf::MovieDefImpl::getFont(int)
// gameswf::RefCounted *gameswf::MovieDefImpl::getFont(gameswf::MovieDefImpl *this, int a2);
// [0x10aaa90] (251 bytes) gameswf::MovieDefImpl::getSoundSample(int)
// gameswf::RefCounted *gameswf::MovieDefImpl::getSoundSample(gameswf::MovieDefImpl *this, int a2);
// [0x10aab90] (132 bytes) gameswf::MovieDefImpl::getCurrentLabels(void)
// gameswf::RefCounted *gameswf::MovieDefImpl::getCurrentLabels(gameswf::MovieDefImpl *this);
// [0x10aac20] (237 bytes) gameswf::MovieDefImpl::addInitAction(int,gameswf::ExecuteTag *)
// uint32_t *gameswf::MovieDefImpl::addInitAction(gameswf::MovieDefImpl *this, int a2, gameswf::ExecuteTag *a3);
// [0x10aaeb0] (71 bytes) gameswf::MovieDefImpl::getLabeledFrame(gameswf::StringI const&,int *)
// int gameswf::MovieDefImpl::getLabeledFrame(gameswf::MovieDefImpl *this, const gameswf::StringI *a2, int *a3);
// [0x10aaf00] (253 bytes) gameswf::MovieDefImpl::getBitmapCharacter(int)
// gameswf::RefCounted *gameswf::MovieDefImpl::getBitmapCharacter(gameswf::MovieDefImpl *this, int a2);
// [0x10ab000] (253 bytes) gameswf::MovieDefImpl::getCharacterDef(int)
// gameswf::RefCounted *gameswf::MovieDefImpl::getCharacterDef(gameswf::MovieDefImpl *this, int a2);
// [0x10ab100] (673 bytes) gameswf::MovieDefImpl::getMovieDefinition(gameswf::String const&,int &)const
// gameswf::RefCounted *gameswf::MovieDefImpl::getMovieDefinition( gameswf::MovieDefImpl *this, const gameswf::String *a2, int *a3);
// [0x10ab3b0] (430 bytes) gameswf::MovieDefImpl::addABC(gameswf::String &,gameswf::abc_def *)
// int gameswf::MovieDefImpl::addABC(gameswf::MovieDefImpl *this, gameswf **a2, gameswf::abc_def *a3);
// [0x10ab560] (481 bytes) gameswf::MovieDefImpl::getImportCharacter(gameswf::String const&,unsigned short &)
// gameswf::RefCounted *gameswf::MovieDefImpl::getImportCharacter( gameswf::MovieDefImpl *this, const gameswf::String *a2, uint16_t *a3);
// [0x10ab750] (541 bytes) gameswf::MovieDefImpl::getExportedResource(gameswf::String const&)
// gameswf::RefCounted *gameswf::MovieDefImpl::getExportedResource( gameswf::MovieDefImpl *this, const gameswf::String *a2);
// [0x10ab970] (718 bytes) gameswf::MovieDefImpl::instanciateClass(gameswf::Character *)const
// void gameswf::MovieDefImpl::instanciateClass(gameswf::MovieDefImpl *this, gameswf::Character *a2);
// [0x10abdc0] (765 bytes) gameswf::MovieDefImpl::MovieDefImpl(gameswf::Player *,gameswf::CreateBitmapsFlag,gameswf::CreateFontShapesFlag,gameswf::String const&)
// pthread_mutex_t *gameswf::MovieDefImpl::MovieDefImpl( pthread_mutex_t **a1, gameswf::RefCounted *a2, pthread_mutex_t *a3, pthread_mutex_t *a4, char *a5);
// [0x10ac0c0] (17 bytes) gameswf::MovieDefImpl::setFrameRate(float)
// gameswf::MovieDefImpl *gameswf::MovieDefImpl::setFrameRate(gameswf::MovieDefImpl *this, float a2);
// [0x10ac0e0] (15 bytes) gameswf::MovieDefImpl::getFileBytes(void)const
// int gameswf::MovieDefImpl::getFileBytes(gameswf::MovieDefImpl *this);
// [0x10ac0f0] (15 bytes) gameswf::MovieDefImpl::getLoadedBytes(void)const
// int gameswf::MovieDefImpl::getLoadedBytes(gameswf::MovieDefImpl *this);
// [0x10ac100] (9 bytes) gameswf::MovieDefImpl::inImportTable(int)
// int gameswf::MovieDefImpl::inImportTable();
// [0x10ac110] (859 bytes) gameswf::MovieDefImpl::read_tags(void)
// unsigned int gameswf::MovieDefImpl::read_tags(gameswf::Stream **this);
// [0x10ac4a0] (754 bytes) gameswf::MovieDefImpl::read(gameswf::File *)
// unsigned int gameswf::MovieDefImpl::read(gameswf::MovieDefImpl *this, gameswf::File *a2);
// [0x10ac7a0] (1255 bytes) gameswf::MovieDefImpl::get_owned_fonts(gameswf::array<gameswf::Font *> *)
// void gameswf::MovieDefImpl::get_owned_fonts(int a1, uint32_t *a2);
// [0x10acc90] (2109 bytes) gameswf::MovieDefImpl::~MovieDefImpl()
// void gameswf::MovieDefImpl::~MovieDefImpl(gameswf **this);
// [0x10ad4d0] (56 bytes) gameswf::MovieDefImpl::~MovieDefImpl()
// void gameswf::MovieDefImpl::~MovieDefImpl(gameswf **this);
// [0x10ad5b0] (55 bytes) gameswf::MovieDefImpl::addFrameLabel(int,gameswf::String const&)
// int gameswf::MovieDefImpl::addFrameLabel(gameswf::MovieDefImpl *this, int a2, const gameswf::String *a3);
// [0x10ad5f0] (55 bytes) gameswf::MovieDefImpl::addScene(int,gameswf::String const&)
// int gameswf::MovieDefImpl::addScene(gameswf::MovieDefImpl *this, int a2, const gameswf::String *a3);
// [0x10ad630] (1451 bytes) gameswf::MovieDefImpl::addSymbolClass(int,gameswf::String const&)
// gameswf::RefCounted *gameswf::MovieDefImpl::addSymbolClass( gameswf::RefCounted **this, int a2, const gameswf::String *a3);
// [0x10adbe0] (91 bytes) gameswf::MovieDefImpl::addCharacter(int,gameswf::CharacterDef *)
// gameswf::RefCounted *gameswf::MovieDefImpl::addCharacter( gameswf::MovieDefImpl *this, const int a2, gameswf::CharacterDef *a3);
// [0x10adc40] (91 bytes) gameswf::MovieDefImpl::addFont(int,gameswf::Font *)
// gameswf::RefCounted *gameswf::MovieDefImpl::addFont( gameswf::MovieDefImpl *this, const int a2, gameswf::Font *a3);
// [0x10adca0] (139 bytes) gameswf::MovieDefImpl::addBitmapCharacter(int,gameswf::BitmapCharacterDef *)
// int gameswf::MovieDefImpl::addBitmapCharacter( gameswf::MovieDefImpl *a1, int a2, gameswf::MovieDefImpl *this, char a4, gameswf::BitmapCharacterDef *a5);
// [0x10add30] (91 bytes) gameswf::MovieDefImpl::addSoundSample(int,gameswf::SoundSample *)
// int gameswf::MovieDefImpl::addSoundSample(gameswf::MovieDefImpl *this, char a2, gameswf::SoundSample *a3);
// [0x10ae000] (315 bytes) gameswf::MovieDefImpl::addFrameName(char const*)
// int gameswf::MovieDefImpl::addFrameName(gameswf::MovieDefImpl *this, char *s);
// [0x10ae140] (672 bytes) gameswf::MovieDefImpl::exportResource(gameswf::String const&,int,gameswf::CharacterDef *)
// gameswf::RefCounted *gameswf::MovieDefImpl::exportResource( gameswf::MovieDefImpl *this, const gameswf::String *a2, int a3, gameswf::CharacterDef *a4);
// [0x10ae3e0] (734 bytes) gameswf::MovieDefImpl::addImport(gameswf::MovieDefImpl*,int,gameswf::String const&)
// gameswf::RefCounted *gameswf::MovieDefImpl::addImport( gameswf::MovieDefImpl *this, gameswf::MovieDefImpl *a2, int a3, const gameswf::String *a4);
// [0x10ae6c0] (26 bytes) gameswf::MovieDefImpl::is(int)const
// bool gameswf::MovieDefImpl::is(gameswf::MovieDefImpl *this, int a2);
// [0x10ae6e0] (16 bytes) gameswf::MovieDefImpl::hasInitActions(void)
// int gameswf::MovieDefImpl::hasInitActions(gameswf::MovieDefImpl *this);
// [0x10ae6f0] (16 bytes) gameswf::MovieDefImpl::isMultiThread(void)const
// bool gameswf::MovieDefImpl::isMultiThread(gameswf::MovieDefImpl *this);
