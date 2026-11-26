#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_SpriteInstance.h
// Library: gameswf | Module: gameswf_SpriteInstance
// Binary Address Span: 0x10e1e70 .. 0x10e9aa0 (77 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10e1e70] (16 bytes) gameswf::SpriteInstance::getPlayState(void)const
// int gameswf::SpriteInstance::getPlayState(gameswf::SpriteInstance *this);
// [0x10e1e80] (152 bytes) gameswf::SpriteInstance::findPreviousReplaceOrAddTag(int,int,int)
// int gameswf::SpriteInstance::findPreviousReplaceOrAddTag( gameswf::SpriteInstance *this, int a2, int a3, uint16_t a4);
// [0x10e1f20] (85 bytes) gameswf::SpriteInstance::gotoLabeledFrame(gameswf::StringI const&)
// int gameswf::SpriteInstance::gotoLabeledFrame(gameswf::SpriteInstance *this, const gameswf::StringI *a2);
// [0x10e1f80] (9 bytes) gameswf::SpriteInstance::addActionBuffer(gameswf::ActionBuffer *)
// void gameswf::SpriteInstance::addActionBuffer();
// [0x10e1f90] (9 bytes) gameswf::SpriteInstance::callFrameActions(gameswf::ASValue const&)
// void gameswf::SpriteInstance::callFrameActions();
// [0x10e1fa0] (9 bytes) gameswf::SpriteInstance::getEnvironment(void)
// int gameswf::SpriteInstance::getEnvironment();
// [0x10e1fb0] (111 bytes) gameswf::SpriteInstance::getDragState(gameswf::Character::DragState *)
// int gameswf::SpriteInstance::getDragState(gameswf::Player **a1, uint32_t *a2);
// [0x10e2020] (275 bytes) gameswf::SpriteInstance::dump(gameswf::String &)
// int gameswf::SpriteInstance::dump(gameswf::SpriteInstance *this, gameswf::String *a2);
// [0x10e2140] (70 bytes) gameswf::SpriteInstance::removeDisplayObject(gameswf::Character *)
// int gameswf::SpriteInstance::removeDisplayObject(gameswf::SpriteInstance *this, gameswf::Character *a2);
// [0x10e2190] (95 bytes) gameswf::SpriteInstance::removeDisplayObject(gameswf::String const&)
// int gameswf::SpriteInstance::removeDisplayObject(gameswf::SpriteInstance *this, const gameswf::String *a2);
// [0x10e21f0] (42 bytes) gameswf::SpriteInstance::stopDrag(void)
// gameswf::Root *gameswf::SpriteInstance::stopDrag(gameswf::Player **this);
// [0x10e2220] (39 bytes) gameswf::SpriteInstance::clearDisplayObjects(void)
// int gameswf::SpriteInstance::clearDisplayObjects(gameswf::SpriteInstance *this);
// [0x10e2250] (55 bytes) gameswf::SpriteInstance::removeDisplayObject(int,int)
// int gameswf::SpriteInstance::removeDisplayObject(gameswf::SpriteInstance *this, int a2, int a3);
// [0x10e2290] (111 bytes) gameswf::SpriteInstance::moveDisplayObject(int,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// int gameswf::SpriteInstance::moveDisplayObject( gameswf::SpriteInstance *this, char *a2, const gameswf::CxForm *a3, const gameswf::Matrix *a4, const gameswf::Effect *a5, float a6);
// [0x10e2300] (83 bytes) gameswf::SpriteInstance::doActions(gameswf::array<gameswf::ActionBuffer *> const&)
// gameswf *gameswf::SpriteInstance::doActions(int a1, int a2);
// [0x10e2360] (153 bytes) gameswf::SpriteInstance::getMemberByName(gameswf::StringI const&,gameswf::ASValue *)
// int gameswf::SpriteInstance::getMemberByName( gameswf::SpriteInstance *this, const gameswf::StringI *a2, gameswf::ASValue *a3);
// [0x10e2400] (117 bytes) gameswf::SpriteInstance::canHandleMouseEvent(void)
// int gameswf::SpriteInstance::canHandleMouseEvent(gameswf::SpriteInstance *this);
// [0x10e2640] (117 bytes) gameswf::SpriteInstance::construct(void)
// void gameswf::SpriteInstance::construct(gameswf::SpriteInstance *this);
// [0x10e26c0] (401 bytes) gameswf::SpriteInstance::thisAlive(void)
// uint32_t *gameswf::SpriteInstance::thisAlive(gameswf::SpriteInstance *this);
// [0x10e2860] (368 bytes) gameswf::SpriteInstance::clearRefs(int)
// uint32_t *gameswf::SpriteInstance::clearRefs(gameswf::RefCounted **this, int a2);
// [0x10e29d0] (456 bytes) gameswf::SpriteInstance::enumerate(gameswf::ASEnvironment *)
// int gameswf::SpriteInstance::enumerate(gameswf::SpriteInstance *this, gameswf::ASEnvironment *a2);
// [0x10e2ba0] (288 bytes) gameswf::SpriteInstance::hasKeypressEvent(void)
// int gameswf::SpriteInstance::hasKeypressEvent(gameswf::SpriteInstance *this);
// [0x10e2cc0] (520 bytes) gameswf::SpriteInstance::attachDisplayCallback(char const*,void (*)(gameswf::RenderState &,void *),void *)
// gameswf *gameswf::SpriteInstance::attachDisplayCallback(int a1, gameswf *a2, int a3, int a4);
// [0x10e34c0] (327 bytes) gameswf::SpriteInstance::replaceDisplayObject(gameswf::Character *,char const*,int,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// int gameswf::SpriteInstance::replaceDisplayObject( gameswf::SpriteInstance *this, gameswf::Character **a2, char *a3, unsigned int a4, const gameswf::CxForm *a5, const gameswf::Matrix *a6, const gameswf::Effect *a7, float a8, uint16_t a9);
// [0x10e3610] (300 bytes) gameswf::SpriteInstance::replaceMe(gameswf::CharacterDef *)
// int gameswf::SpriteInstance::replaceMe(gameswf::SpriteInstance *this, gameswf::CharacterDef *a2);
// [0x10e3740] (152 bytes) gameswf::SpriteInstance::isEnabled(void)const
// int gameswf::SpriteInstance::isEnabled(gameswf::SpriteInstance *this);
// [0x10e37e0] (196 bytes) gameswf::SpriteInstance::findExportedResource(gameswf::String const&)
// int gameswf::SpriteInstance::findExportedResource(gameswf::SpriteInstance *this, const gameswf::String *a2);
// [0x10e38b0] (3371 bytes) gameswf::SpriteInstance::display(void)
// void gameswf::SpriteInstance::display(gameswf::SpriteInstance *this);
// [0x10e45e0] (179 bytes) gameswf::SpriteInstance::setPlayState(gameswf::Character::PlayState)
// gameswf *gameswf::SpriteInstance::setPlayState(int a1, char a2);
// [0x10e46a0] (193 bytes) gameswf::SpriteInstance::setDragState(gameswf::Character::DragState const&)
// gameswf *gameswf::SpriteInstance::setDragState(gameswf::Player **a1, int *a2);
// [0x10e4770] (952 bytes) gameswf::SpriteInstance::notifySetMember(gameswf::String const&,gameswf::ASValue const&)
// char *gameswf::SpriteInstance::notifySetMember(gameswf::SpriteInstance *this, const gameswf::String *a2);
// [0x10e4b30] (365 bytes) gameswf::SpriteInstance::~SpriteInstance()
// void gameswf::SpriteInstance::~SpriteInstance(gameswf::SpriteInstance *this);
// [0x10e4ca0] (56 bytes) gameswf::SpriteInstance::~SpriteInstance()
// void gameswf::SpriteInstance::~SpriteInstance(gameswf::SpriteInstance *this);
// [0x10e4ce0] (725 bytes) gameswf::SpriteInstance::SpriteInstance(gameswf::Player *,gameswf::MovieDefinitionSub *,gameswf::Character *,gameswf::Character *,int)
// gameswf::SpriteInstance *gameswf::SpriteInstance::SpriteInstance( gameswf **this, gameswf::Player *a2, gameswf::MovieDefinitionSub *a3, gameswf::Character *a4, gameswf::Character *a5, char *a6);
// [0x10e4fc0] (397 bytes) gameswf::SpriteInstance::add_empty_movieclip(char const*,int)
// 0x10e4fc0 gameswf::SpriteInstance::add_empty_movieclip(char const*,int)
// [0x10e5150] (145 bytes) gameswf::SpriteInstance::executeFrameTagsReverse(int)
// int gameswf::SpriteInstance::executeFrameTagsReverse(gameswf::SpriteInstance *this, int a2);
// [0x10e51f0] (564 bytes) gameswf::SpriteInstance::gotoFrame(int)
// int gameswf::SpriteInstance::gotoFrame(gameswf::SpriteInstance *this, int a2);
// [0x10e5430] (106 bytes) gameswf::SpriteInstance::executeRemoveTags(int)
// int gameswf::SpriteInstance::executeRemoveTags(gameswf::SpriteInstance *this, int a2);
// [0x10e54a0] (600 bytes) gameswf::SpriteInstance::doActions(void)
// int gameswf::SpriteInstance::doActions(gameswf::SpriteInstance *this);
// [0x10e5700] (1761 bytes) gameswf::SpriteInstance::advance(float)
// void gameswf::SpriteInstance::advance(gameswf::SpriteInstance *this, int a2);
// [0x10e5df0] (617 bytes) gameswf::SpriteInstance::doInitActions(void)
// gameswf *gameswf::SpriteInstance::doInitActions(gameswf::SpriteInstance *this);
// [0x10e6060] (459 bytes) gameswf::SpriteInstance::replaceMe(gameswf::MovieDefinition *)
// gameswf::SpriteInstance *gameswf::SpriteInstance::replaceMe( gameswf::SpriteInstance *this, gameswf::MovieDefinition *a2);
// [0x10e6230] (544 bytes) gameswf::SpriteInstance::invokeConstructor(void)
// gameswf *gameswf::SpriteInstance::invokeConstructor(gameswf ***this);
// [0x10e6450] (484 bytes) gameswf::SpriteInstance::replaceDisplayObject(unsigned short,char const*,int,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// 0x10e6450 gameswf::SpriteInstance::replaceDisplayObject(unsigned short,char const*,int,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// [0x10e6640] (1021 bytes) gameswf::SpriteInstance::addDisplayObject(unsigned short,gameswf::String const&,gameswf::String const&,gameswf::array<gameswf::swf_event *> const&,int,bool,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short,bool)
// gameswf::Character *gameswf::SpriteInstance::addDisplayObject( gameswf::Character *a1, uint16_t a2, int a3, int a4, uint32_t *a5, int a6, char a7, gameswf::CxForm *a8, gameswf::Matrix *a9, gameswf::Effect *a10, float a11, uint16_t a12, char a13);
// [0x10e6a40] (363 bytes) gameswf::SpriteInstance::setFrameScript(int)
// gameswf *gameswf::SpriteInstance::setFrameScript(gameswf::RefCounted **this, int a2);
// [0x10e6bb0] (373 bytes) gameswf::SpriteInstance::executeFrameTags(int,bool)
// gameswf *gameswf::SpriteInstance::executeFrameTags(gameswf::SpriteInstance *this, int a2, bool a3);
// [0x10e6d30] (125 bytes) gameswf::SpriteInstance::gotoFrame(gameswf::String const&)
// int gameswf::SpriteInstance::gotoFrame(gameswf::SpriteInstance *this, const gameswf::String *a2);
// [0x10e6db0] (66 bytes) gameswf::SpriteInstance::getFrameIdFromLabel(gameswf::StringI const&)
// int gameswf::SpriteInstance::getFrameIdFromLabel(gameswf::SpriteInstance *this, const gameswf::StringI *a2);
// [0x10e6e00] (87 bytes) gameswf::SpriteInstance::getIdAtDepth(int)
// int gameswf::SpriteInstance::getIdAtDepth(gameswf::SpriteInstance *this, int a2);
// [0x10e6e60] (39 bytes) gameswf::SpriteInstance::getHighestDepth(void)
// int gameswf::SpriteInstance::getHighestDepth(gameswf::SpriteInstance *this);
// [0x10e6e90] (92 bytes) gameswf::SpriteInstance::getFileBytes(void)const
// int gameswf::SpriteInstance::getFileBytes(gameswf::SpriteInstance *this);
// [0x10e6ef0] (92 bytes) gameswf::SpriteInstance::getLoadedBytes(void)const
// int gameswf::SpriteInstance::getLoadedBytes(gameswf::SpriteInstance *this);
// [0x10e6f50] (1106 bytes) gameswf::SpriteInstance::createTextField(char const*,int,int,int,int,int)
// 0x10e6f50 gameswf::SpriteInstance::createTextField(char const*,int,int,int,int,int)
// [0x10e73b0] (286 bytes) gameswf::SpriteInstance::attachMovie(gameswf::String const&,gameswf::String,int)
// 0x10e73b0 gameswf::SpriteInstance::attachMovie(gameswf::String const&,gameswf::String,int)
// [0x10e74d0] (50 bytes) gameswf::SpriteInstance::setFPS(float)
// gameswf::MovieDefImpl *gameswf::SpriteInstance::setFPS(gameswf::Player **this, float a2);
// [0x10e7510] (313 bytes) gameswf::SpriteInstance::getCanvas(void)
// 0x10e7510 gameswf::SpriteInstance::getCanvas(void)
// [0x10e7650] (257 bytes) gameswf::SpriteInstance::getGraphics(void)
// 0x10e7650 gameswf::SpriteInstance::getGraphics(void)
// [0x10e7760] (183 bytes) gameswf::SpriteInstance::getASTransform(void)
// gameswf::RefCounted *gameswf::SpriteInstance::getASTransform(gameswf::SpriteInstance *this);
// [0x10e7820] (626 bytes) gameswf::SpriteInstance::getStandardMember(gameswf::as_standard_member,gameswf::ASValue *)
// int gameswf::SpriteInstance::getStandardMember(gameswf::ASObject *a1, int a2, gameswf::ASValue *a3);
// [0x10e7aa0] (1000 bytes) gameswf::SpriteInstance::onEvent(gameswf::EventId const&)
// 0x10e7aa0 gameswf::SpriteInstance::onEvent(gameswf::EventId const&)
// [0x10e7e90] (1866 bytes) gameswf::SpriteInstance::cloneDisplayObject(gameswf::String const&,int)
// gameswf::SpriteInstance *gameswf::SpriteInstance::cloneDisplayObject( gameswf::SpriteInstance *this, const gameswf::String *a2, int a3);
// [0x10e85e0] (4409 bytes) gameswf::SpriteInstance::setStandardMember(gameswf::as_standard_member,gameswf::ASValue const&)
// int gameswf::SpriteInstance::setStandardMember( long double a1, gameswf::RefCounted *a2, int a3, gameswf::RefCounted **a4);
// [0x10e9720] (461 bytes) gameswf::SpriteInstance::addScript(int,gameswf::ASFunction *)
// int gameswf::SpriteInstance::addScript(gameswf::SpriteInstance *this, int a2, gameswf::ASFunction *a3);
// [0x10e98f0] (35 bytes) gameswf::SpriteInstance::is(int)const
// bool gameswf::SpriteInstance::is(gameswf::SpriteInstance *this, int a2);
// [0x10e9920] (15 bytes) gameswf::SpriteInstance::getCharacterDef(void)
// int gameswf::SpriteInstance::getCharacterDef(gameswf::SpriteInstance *this);
// [0x10e9930] (15 bytes) gameswf::SpriteInstance::getMovieDefinition(void)
// int gameswf::SpriteInstance::getMovieDefinition(gameswf::SpriteInstance *this);
// [0x10e9940] (16 bytes) gameswf::SpriteInstance::getCurrentFrame(void)const
// int gameswf::SpriteInstance::getCurrentFrame(gameswf::SpriteInstance *this);
// [0x10e9950] (27 bytes) gameswf::SpriteInstance::getFrameCount(void)const
// int gameswf::SpriteInstance::getFrameCount(gameswf::SpriteInstance *this);
// [0x10e9970] (16 bytes) gameswf::SpriteInstance::getLoadingFrame(void)const
// int gameswf::SpriteInstance::getLoadingFrame(gameswf::SpriteInstance *this);
// [0x10e9980] (9 bytes) gameswf::SpriteInstance::getCharacter(int)
// int gameswf::SpriteInstance::getCharacter();
// [0x10e9990] (22 bytes) gameswf::SpriteInstance::_typeof(void)
// const char *gameswf::SpriteInstance::_typeof();
// [0x10e99b0] (50 bytes) gameswf::SpriteInstance::setBackgroundColor(gameswf::Color const&)
// gameswf::Root *gameswf::SpriteInstance::setBackgroundColor(gameswf::Player **this, const gameswf::Color *a2);
// [0x10e99f0] (66 bytes) gameswf::SpriteInstance::getMouseState(int *,int *,int *)
// int *gameswf::SpriteInstance::getMouseState(gameswf::Player **this, int *a2, int *a3, int *a4);
// [0x10e9a40] (42 bytes) gameswf::SpriteInstance::getPixelScale(void)const
// void gameswf::SpriteInstance::getPixelScale(gameswf::Player **this);
// [0x10e9a70] (42 bytes) gameswf::SpriteInstance::getBackgroundAlpha(void)const
// void gameswf::SpriteInstance::getBackgroundAlpha(gameswf::Player **this);
// [0x10e9aa0] (96 bytes) gameswf::SpriteInstance::getRootMovie(void)
// int gameswf::SpriteInstance::getRootMovie(gameswf::SpriteInstance *this);
