#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_CharacterHandle.h
// Library: gameswf | Module: gameswf_CharacterHandle
// Binary Address Span: 0x1082cc0 .. 0x1087280 (83 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1082cc0] (114 bytes) gameswf::CharacterHandle::~CharacterHandle()
// void gameswf::CharacterHandle::~CharacterHandle(gameswf **this);
// [0x1082d40] (830 bytes) gameswf::CharacterHandle::operator=(gameswf::Character *)
// int gameswf::CharacterHandle::operator=(gameswf::CharacterHandle *this, gameswf::Character *a2);
// [0x1083080] (171 bytes) gameswf::CharacterHandle::CharacterHandle(gameswf::ASValue const&)
// gameswf::CharacterHandle *gameswf::CharacterHandle::CharacterHandle( gameswf::CharacterHandle *this, const gameswf::ASValue *a2);
// [0x1083130] (106 bytes) gameswf::CharacterHandle::CharacterHandle(gameswf::Character *)
// gameswf::CharacterHandle *gameswf::CharacterHandle::CharacterHandle( gameswf::CharacterHandle *this, gameswf::Character *a2);
// [0x10831a0] (11 bytes) gameswf::CharacterHandle::getPlayer(void)const
// int gameswf::CharacterHandle::getPlayer(gameswf::CharacterHandle *this);
// [0x10831b0] (541 bytes) gameswf::CharacterHandle::getCharacter(void)const
// int gameswf::CharacterHandle::getCharacter(gameswf::CharacterHandle *this);
// [0x10833d0] (78 bytes) gameswf::CharacterHandle::toASValue(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::toASValue( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x1083420] (58 bytes) gameswf::CharacterHandle::isTextField(void)const
// int gameswf::CharacterHandle::isTextField(gameswf::CharacterHandle *this);
// [0x1083460] (58 bytes) gameswf::CharacterHandle::isSprite(void)const
// int gameswf::CharacterHandle::isSprite(gameswf::CharacterHandle *this);
// [0x10834a0] (39 bytes) gameswf::CharacterHandle::isValid(void)const
// bool gameswf::CharacterHandle::isValid(gameswf::CharacterHandle *this);
// [0x10834d0] (67 bytes) gameswf::CharacterHandle::operator<(gameswf::CharacterHandle const&)const
// bool gameswf::CharacterHandle::operator<(gameswf::CharacterHandle *this, const gameswf::CharacterHandle *a2);
// [0x1083520] (67 bytes) gameswf::CharacterHandle::operator!=(gameswf::CharacterHandle const&)const
// bool gameswf::CharacterHandle::operator!=(gameswf::CharacterHandle *this, const gameswf::CharacterHandle *a2);
// [0x1083570] (41 bytes) gameswf::CharacterHandle::operator!=(gameswf::Character const*)const
// bool gameswf::CharacterHandle::operator!=(gameswf::CharacterHandle *this, const gameswf::Character *a2);
// [0x10835a0] (67 bytes) gameswf::CharacterHandle::operator==(gameswf::CharacterHandle const&)const
// bool gameswf::CharacterHandle::operator==(gameswf::CharacterHandle *this, const gameswf::CharacterHandle *a2);
// [0x10835f0] (41 bytes) gameswf::CharacterHandle::operator==(gameswf::Character const*)const
// bool gameswf::CharacterHandle::operator==(gameswf::CharacterHandle *this, const gameswf::Character *a2);
// [0x1083620] (517 bytes) gameswf::CharacterHandle::operator=(gameswf::CharacterHandle)
// void gameswf::CharacterHandle::operator=(gameswf::CharacterHandle *a1, gameswf **a2);
// [0x1083830] (49 bytes) gameswf::CharacterHandle::getName(void)const
// char *gameswf::CharacterHandle::getName(gameswf::CharacterHandle *this);
// [0x1083870] (120 bytes) gameswf::CharacterHandle::getTarget(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getTarget( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x10838f0] (152 bytes) gameswf::CharacterHandle::getParent(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getParent( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x1083990] (918 bytes) gameswf::CharacterHandle::getChildren(gameswf::array<gameswf::CharacterHandle> &)const
// int gameswf::CharacterHandle::getChildren(gameswf::CharacterHandle *a1, gameswf **a2);
// [0x1083d30] (98 bytes) gameswf::CharacterHandle::addChild(gameswf::CharacterHandle)
// gameswf::ASDisplayObjectContainer *gameswf::CharacterHandle::addChild( gameswf::CharacterHandle *a1, gameswf::CharacterHandle *a2);
// [0x1083da0] (98 bytes) gameswf::CharacterHandle::removeChild(gameswf::CharacterHandle)
// gameswf::ASDisplayObjectContainer *gameswf::CharacterHandle::removeChild( gameswf::CharacterHandle *a1, gameswf::CharacterHandle *a2);
// [0x1083e10] (102 bytes) gameswf::CharacterHandle::setMember(gameswf::String const&,gameswf::ASValue const&)
// gameswf::ASObject *gameswf::CharacterHandle::setMember( gameswf::CharacterHandle *this, const gameswf::String *a2, const gameswf::ASValue *a3);
// [0x1083e80] (121 bytes) gameswf::CharacterHandle::getMember(gameswf::String const&)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getMember( gameswf::CharacterHandle *this, const gameswf::String *a2, gameswf::String *a3);
// [0x1083f00] (301 bytes) gameswf::CharacterHandle::setLocalVariable(char const*,gameswf::ASValue const&)
// int gameswf::CharacterHandle::setLocalVariable( gameswf::CharacterHandle *this, char *s, const gameswf::ASValue *a3);
// [0x1084030] (544 bytes) gameswf::CharacterHandle::getLocalVariable(char const*)
// gameswf::CharacterHandle *gameswf::CharacterHandle::getLocalVariable( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2, char *a3);
// [0x1084250] (113 bytes) gameswf::CharacterHandle::invokeMethod(char const*,gameswf::ASValue const*,int)
// gameswf::CharacterHandle *gameswf::CharacterHandle::invokeMethod( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2, const gameswf::ASValue *a3, gameswf::ASValue *a4, unsigned int a5);
// [0x10842d0] (65 bytes) gameswf::CharacterHandle::registerDisplayCallback(void (*)(gameswf::RenderState &,void *),void *)
// int gameswf::CharacterHandle::registerDisplayCallback(gameswf::CharacterHandle *a1, int a2, int a3);
// [0x1084320] (62 bytes) gameswf::CharacterHandle::attachSceneNode(glitch::scene::ISceneNode *,gameswf::SceneNodeParameters const&)
// char *gameswf::CharacterHandle::attachSceneNode(gameswf::CharacterHandle *a1, char *a2, int a3);
// [0x1084360] (46 bytes) gameswf::CharacterHandle::detachSceneNode(void)
// gameswf::Character *gameswf::CharacterHandle::detachSceneNode(gameswf::CharacterHandle *this);
// [0x1084390] (45 bytes) gameswf::CharacterHandle::setInputEventHandler(void)
// int gameswf::CharacterHandle::setInputEventHandler(gameswf::CharacterHandle *this);
// [0x10843c0] (197 bytes) gameswf::CharacterHandle::addEventListener(gameswf::String const&,void (*)(gameswf::ASNativeEventState const&),void *,bool,int)
// int gameswf::CharacterHandle::addEventListener( gameswf::CharacterHandle *this, const gameswf::String *a2, void (*a3)(const gameswf::ASNativeEventState *), void *a4, bool a5, int a6);
// [0x1084490] (181 bytes) gameswf::CharacterHandle::removeEventListener(gameswf::String const&,void (*)(gameswf::ASNativeEventState const&),bool)
// int gameswf::CharacterHandle::removeEventListener( gameswf::CharacterHandle *this, const gameswf::String *a2, void (*a3)(const gameswf::ASNativeEventState *), bool a4);
// [0x1084550] (397 bytes) gameswf::CharacterHandle::dispatchEvent(gameswf::String const&,gameswf::ASMember const*,int)
// uint32_t *gameswf::CharacterHandle::dispatchEvent( gameswf::CharacterHandle *a1, gameswf::String *a2, gameswf *a3, int a4);
// [0x10846e0] (93 bytes) gameswf::CharacterHandle::play(void)
// int gameswf::CharacterHandle::play(gameswf::CharacterHandle *this);
// [0x1084740] (93 bytes) gameswf::CharacterHandle::stop(void)
// int gameswf::CharacterHandle::stop(gameswf::CharacterHandle *this);
// [0x10847a0] (318 bytes) gameswf::CharacterHandle::gotoAndPlay(char const*)
// int gameswf::CharacterHandle::gotoAndPlay(gameswf::CharacterHandle *this, char *s);
// [0x10848e0] (318 bytes) gameswf::CharacterHandle::gotoAndStop(char const*)
// int gameswf::CharacterHandle::gotoAndStop(gameswf::CharacterHandle *this, char *s);
// [0x1084a20] (266 bytes) gameswf::CharacterHandle::getFrameIdFromLabel(char const*)const
// int gameswf::CharacterHandle::getFrameIdFromLabel(gameswf::CharacterHandle *this, char *s);
// [0x1084b30] (112 bytes) gameswf::CharacterHandle::gotoAndPlay(int)
// int gameswf::CharacterHandle::gotoAndPlay(gameswf::CharacterHandle *this, int a2);
// [0x1084ba0] (112 bytes) gameswf::CharacterHandle::gotoAndStop(int)
// int gameswf::CharacterHandle::gotoAndStop(gameswf::CharacterHandle *this, int a2);
// [0x1084c10] (99 bytes) gameswf::CharacterHandle::getTotalFrames(void)const
// int gameswf::CharacterHandle::getTotalFrames(gameswf::CharacterHandle *this);
// [0x1084c80] (99 bytes) gameswf::CharacterHandle::getCurrentFrame(void)const
// int gameswf::CharacterHandle::getCurrentFrame(gameswf::CharacterHandle *this);
// [0x1084cf0] (104 bytes) gameswf::CharacterHandle::isPlaying(void)const
// int gameswf::CharacterHandle::isPlaying(gameswf::CharacterHandle *this);
// [0x1084d60] (49 bytes) gameswf::CharacterHandle::isVisible(void)const
// int gameswf::CharacterHandle::isVisible(gameswf::CharacterHandle *this);
// [0x1084da0] (166 bytes) gameswf::CharacterHandle::setVisible(bool)
// int gameswf::CharacterHandle::setVisible(gameswf::CharacterHandle *this, bool a2);
// [0x1084e50] (53 bytes) gameswf::CharacterHandle::isEnabled(void)const
// int gameswf::CharacterHandle::isEnabled(gameswf::CharacterHandle *this);
// [0x1084e90] (94 bytes) gameswf::CharacterHandle::setEnabled(bool)
// int gameswf::CharacterHandle::setEnabled(gameswf::CharacterHandle *this, int a2);
// [0x1084ef0] (49 bytes) gameswf::CharacterHandle::getDepth(void)const
// int gameswf::CharacterHandle::getDepth(gameswf::CharacterHandle *this);
// [0x1084f30] (96 bytes) gameswf::CharacterHandle::getHighestDepth(void)const
// int gameswf::CharacterHandle::getHighestDepth(gameswf::CharacterHandle *this);
// [0x1084f90] (332 bytes) gameswf::CharacterHandle::swapDepths(int)
// int gameswf::CharacterHandle::swapDepths(gameswf::CharacterHandle *this, int a2);
// [0x10850e0] (136 bytes) gameswf::CharacterHandle::getMatrix(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getMatrix( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x1085170] (68 bytes) gameswf::CharacterHandle::getRotation(void)const
// void gameswf::CharacterHandle::getRotation(gameswf::CharacterHandle *this);
// [0x10851c0] (81 bytes) gameswf::CharacterHandle::getPosition(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getPosition( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x1085220] (136 bytes) gameswf::CharacterHandle::getWorldMatrix(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getWorldMatrix( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x10852b0] (81 bytes) gameswf::CharacterHandle::getWorldPosition(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getWorldPosition( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x1085310] (627 bytes) gameswf::CharacterHandle::setMatrix(gameswf::Matrix const&)
// gameswf::Character *gameswf::CharacterHandle::setMatrix( gameswf::CharacterHandle *this, const gameswf::Matrix *a2);
// [0x1085590] (229 bytes) gameswf::CharacterHandle::setRotation(float)
// gameswf::Character *gameswf::CharacterHandle::setRotation(gameswf::CharacterHandle *this, float a2);
// [0x1085680] (396 bytes) gameswf::CharacterHandle::setPosition(gameswf::Point const&)
// gameswf::Character *gameswf::CharacterHandle::setPosition( gameswf::CharacterHandle *this, const gameswf::Point *a2);
// [0x1085810] (88 bytes) gameswf::CharacterHandle::setY(float)
// gameswf::Character *gameswf::CharacterHandle::setY(gameswf::CharacterHandle *this, float a2);
// [0x1085870] (88 bytes) gameswf::CharacterHandle::setX(float)
// gameswf::Character *gameswf::CharacterHandle::setX(gameswf::CharacterHandle *this, float a2);
// [0x10858d0] (140 bytes) gameswf::CharacterHandle::getTransform(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getTransform( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x1085960] (140 bytes) gameswf::CharacterHandle::getWorldTransform(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getWorldTransform( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x10859f0] (92 bytes) gameswf::CharacterHandle::getBound(gameswf::Rect *)
// 0x10859f0 gameswf::CharacterHandle::getBound(gameswf::Rect *)
// [0x1085a50] (201 bytes) gameswf::CharacterHandle::getWorldBound(gameswf::Rect *)
// 0x1085a50 gameswf::CharacterHandle::getWorldBound(gameswf::Rect *)
// [0x1085b20] (137 bytes) gameswf::CharacterHandle::getCxForm(void)const
// gameswf::CharacterHandle *gameswf::CharacterHandle::getCxForm( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2);
// [0x1085bb0] (50 bytes) gameswf::CharacterHandle::getAlpha(void)const
// long double gameswf::CharacterHandle::getAlpha(gameswf::CharacterHandle *this);
// [0x1085bf0] (627 bytes) gameswf::CharacterHandle::setCxForm(gameswf::CxForm const&)const
// gameswf::Character *gameswf::CharacterHandle::setCxForm( gameswf::CharacterHandle *this, const gameswf::CxForm *a2);
// [0x1085e70] (134 bytes) gameswf::CharacterHandle::setAlpha(float)
// gameswf::Character *gameswf::CharacterHandle::setAlpha(gameswf::CharacterHandle *this, unsigned int a2);
// [0x1085f00] (576 bytes) gameswf::CharacterHandle::setCxForm(unsigned int,unsigned int)
// gameswf::Character *gameswf::CharacterHandle::setCxForm( __m128 a1, gameswf::CharacterHandle *this, unsigned int a3, unsigned int a4);
// [0x1086140] (509 bytes) gameswf::CharacterHandle::setColorFilter(int,unsigned int)
// gameswf *gameswf::CharacterHandle::setColorFilter(gameswf::CharacterHandle *this, int a2, unsigned int a3);
// [0x1086340] (916 bytes) gameswf::CharacterHandle::setEffect(gameswf::Effect const&)
// uint32_t *gameswf::CharacterHandle::setEffect(gameswf::CharacterHandle *this, const gameswf::Effect *a2);
// [0x10866e0] (187 bytes) gameswf::CharacterHandle::getEffect(void)const
// int *gameswf::CharacterHandle::getEffect(gameswf::CharacterHandle *this);
// [0x10867a0] (1202 bytes) gameswf::CharacterHandle::loadMovie(char const*)
// int gameswf::CharacterHandle::loadMovie(gameswf::CharacterHandle *this, const char *a2);
// [0x1086c60] (303 bytes) gameswf::CharacterHandle::duplicateMovieClip(char const*,int)
// gameswf::CharacterHandle *gameswf::CharacterHandle::duplicateMovieClip( gameswf::CharacterHandle *this, gameswf::CharacterHandle *a2, char *s, unsigned int a4);
// [0x1086d90] (209 bytes) gameswf::CharacterHandle::removeMovieClip(void)
// gameswf *gameswf::CharacterHandle::removeMovieClip(gameswf **this);
// [0x1086e70] (97 bytes) gameswf::CharacterHandle::getText(void)const
// char *gameswf::CharacterHandle::getText(gameswf::CharacterHandle *this);
// [0x1086ee0] (98 bytes) gameswf::CharacterHandle::setText(gameswf::String const&)
// int gameswf::CharacterHandle::setText(gameswf::CharacterHandle *this, const gameswf::String *a2);
// [0x1086f50] (98 bytes) gameswf::CharacterHandle::setHtml(gameswf::String const&)
// int gameswf::CharacterHandle::setHtml(gameswf::CharacterHandle *this, const gameswf::String *a2);
// [0x1086fc0] (296 bytes) gameswf::CharacterHandle::formatText(char const*,...)
// int gameswf::CharacterHandle::formatText(gameswf::CharacterHandle *this, char *format, ...);
// [0x10870f0] (296 bytes) gameswf::CharacterHandle::formatHtml(char const*,...)
// int gameswf::CharacterHandle::formatHtml(gameswf::CharacterHandle *this, char *format, ...);
// [0x1087220] (82 bytes) gameswf::CharacterHandle::preloadGlyphs(void)
// int gameswf::CharacterHandle::preloadGlyphs(gameswf::CharacterHandle *this);
// [0x1087280] (93 bytes) gameswf::CharacterHandle::hasMissingGlyphs(void)
// int gameswf::CharacterHandle::hasMissingGlyphs(gameswf::CharacterHandle *this);
