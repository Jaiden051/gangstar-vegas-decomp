#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_Character.h
// Library: gameswf | Module: gameswf_Character
// Binary Address Span: 0x107baa0 .. 0x10e9b00 (100 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x107baa0] (42 bytes) gameswf::Character::enumerate(gameswf::ASEnvironment *)
// int gameswf::Character::enumerate(gameswf::Character *this, gameswf::ASEnvironment *a2);
// [0x107bad0] (90 bytes) gameswf::Character::getBoundInternal(gameswf::Rect *)
// gameswf::Rect *gameswf::Character::getBoundInternal(gameswf::Matrix **this, gameswf::Rect *a2);
// [0x107bb30] (73 bytes) gameswf::Character::thisAlive(void)
// uint32_t *gameswf::Character::thisAlive(gameswf::Character *this);
// [0x107bb80] (108 bytes) gameswf::Character::clearRefs(int)
// int gameswf::Character::clearRefs(gameswf::Character *this, int a2);
// [0x107bbf0] (350 bytes) gameswf::Character::notifyStageChanged(bool)
// int gameswf::Character::notifyStageChanged(gameswf::Character *this, bool a2);
// [0x107bd50] (534 bytes) gameswf::Character::Character(gameswf::Player *,gameswf::Character*,int,int)
// gameswf::Character *gameswf::Character::Character( gameswf::Character *this, gameswf::Player *a2, gameswf::Character *a3, int a4, int a5);
// [0x107bf70] (60 bytes) gameswf::Character::getHandle(void)const
// gameswf::Character *gameswf::Character::getHandle(gameswf::Character *this, gameswf::Character *a2);
// [0x107bfb0] (1414 bytes) gameswf::Character::getBound(gameswf::Rect *)
// int gameswf::Character::getBound( gameswf::Character *this, gameswf::Rect *a2, int a3, int a4, int a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, float a32, float a33, float a34, float a35, float a36, float a37, float a38, float a39, float a40, float a41, float a42, float a43, float a44, float a45, float a46, float a47, float a48, float a49, float a50, float a51, float a52, float a53, float a54, float a55);
// [0x107c540] (899 bytes) gameswf::Character::getBoundingBox(gameswf::Transform const&,gameswf::BoundingBox *)
// 0x107c540 gameswf::Character::getBoundingBox(gameswf::Transform const&,gameswf::BoundingBox *)
// [0x107c8d0] (99 bytes) gameswf::Character::getHeight(void)
// 0x107c8d0 gameswf::Character::getHeight(void)
// [0x107c940] (99 bytes) gameswf::Character::getWidth(void)
// 0x107c940 gameswf::Character::getWidth(void)
// [0x107c9b0] (196 bytes) gameswf::Character::doDisplayCallback(void)
// int gameswf::Character::doDisplayCallback(gameswf::Character *this);
// [0x107ca80] (1019 bytes) gameswf::Character::attachSceneNode(glitch::scene::ISceneNode *,gameswf::SceneNodeParameters const&)
// char *gameswf::Character::attachSceneNode(int a1, char *a2, int a3);
// [0x107ce80] (251 bytes) gameswf::Character::detachSceneNode(void)
// uint32_t *gameswf::Character::detachSceneNode(gameswf::Character *this);
// [0x107cf80] (1120 bytes) gameswf::Character::getTarget(void)const
// gameswf::String *gameswf::Character::getTarget(gameswf::Character *this, int a2);
// [0x107d3e0] (138 bytes) gameswf::Character::dispatchEvent(gameswf::ASEvent *)
// int gameswf::Character::dispatchEvent(gameswf::Character *this, gameswf::ASEvent *a2);
// [0x107d470] (70 bytes) gameswf::Character::getWorldCxFormRootChange(void)
// gameswf::Character *gameswf::Character::getWorldCxFormRootChange(gameswf::Character *this);
// [0x107d4c0] (66 bytes) gameswf::Character::getWorldCxForm(void)
// char *gameswf::Character::getWorldCxForm(gameswf::Character *this);
// [0x107d510] (70 bytes) gameswf::Character::getWorldMatrixRootChange(void)
// gameswf::Character *gameswf::Character::getWorldMatrixRootChange(gameswf::Character *this);
// [0x107d560] (66 bytes) gameswf::Character::getWorldMatrix(void)
// char *gameswf::Character::getWorldMatrix(gameswf::Character *this);
// [0x107d5b0] (1626 bytes) gameswf::Character::displayBitmapCache(bool)
// float *gameswf::Character::displayBitmapCache( gameswf::Character *this, bool a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38);
// [0x107dc10] (248 bytes) gameswf::Character::hitTestObject(gameswf::Character*)
// 0x107dc10 gameswf::Character::hitTestObject(gameswf::Character*)
// [0x107dd10] (1295 bytes) gameswf::Character::getProjectedBound(gameswf::Rect *)
// int gameswf::Character::getProjectedBound(gameswf::ASDisplayObjectContainer **this, gameswf::Rect *a2);
// [0x107e220] (178 bytes) gameswf::Character::updateWorldCxForm(void)
// uint32_t *gameswf::Character::updateWorldCxForm(gameswf::Character *this);
// [0x107e2e0] (597 bytes) gameswf::Character::updateWorldMatrix(void)
// uint32_t gameswf::Character::updateWorldMatrix(gameswf::Character *this);
// [0x107e540] (99 bytes) gameswf::Character::invalidateBitmapCache(void)
// int gameswf::Character::invalidateBitmapCache(gameswf::Character *this);
// [0x107e5b0] (1464 bytes) gameswf::Character::invokeMethod(char const*,gameswf::ASValue const*,int)
// gameswf *gameswf::Character::invokeMethod( gameswf::Character *this, gameswf::RefCounted *a2, const gameswf::ASValue *a3, gameswf::ASValue *a4, unsigned int a5);
// [0x107eb70] (1814 bytes) gameswf::Character::transformByInverse(gameswf::Point &)
// void gameswf::Character::transformByInverse(gameswf::Character *this, gameswf::Point *a2);
// [0x107f290] (1523 bytes) gameswf::Character::getStandardMember(gameswf::as_standard_member,gameswf::ASValue *)
// int gameswf::Character::getStandardMember( long double a1, gameswf::ASObject *a2, int a3, gameswf::ASValue *a4);
// [0x107f890] (4277 bytes) gameswf::Character::setStandardMember(gameswf::as_standard_member,gameswf::ASValue const&)
// int gameswf::Character::setStandardMember( long double a1, __m128 a2, gameswf::Character *a3, int a4, char **a5);
// [0x1080950] (3855 bytes) gameswf::Character::updateBitmapCache(void)
// void gameswf::Character::updateBitmapCache( long double a1, gameswf::Character *this, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, gameswf::RenderHandler **a14);
// [0x1081860] (385 bytes) gameswf::Character::~Character()
// void gameswf::Character::~Character(gameswf::Character *this);
// [0x10819f0] (56 bytes) gameswf::Character::~Character()
// void gameswf::Character::~Character(gameswf::Character *this);
// [0x1081a30] (25 bytes) gameswf::Character::is(int)const
// bool gameswf::Character::is(gameswf::Character *this, int a2);
// [0x1081a50] (9 bytes) gameswf::Character::getTopmostMouseEntity(float,float)
// int gameswf::Character::getTopmostMouseEntity();
// [0x1081a60] (37 bytes) gameswf::Character::getTopmostMouseEntity(gameswf::Point,gameswf::line3d const&)
// int gameswf::Character::getTopmostMouseEntity(int a1, int a2, int a3);
// [0x1081a90] (9 bytes) gameswf::Character::hitTest(float,float,bool)
// int gameswf::Character::hitTest();
// [0x1081aa0] (9 bytes) gameswf::Character::onGotFocus(void)
// void gameswf::Character::onGotFocus();
// [0x1081ab0] (9 bytes) gameswf::Character::onLostFocus(void)
// void gameswf::Character::onLostFocus();
// [0x1081ac0] (9 bytes) gameswf::Character::isFocusNeedsPress(void)const
// int gameswf::Character::isFocusNeedsPress();
// [0x1081ad0] (9 bytes) gameswf::Character::getTrackAsMenu(void)const
// int gameswf::Character::getTrackAsMenu();
// [0x1081ae0] (9 bytes) gameswf::Character::getPixelScale(void)const
// long double gameswf::Character::getPixelScale();
// [0x1081af0] (9 bytes) gameswf::Character::getCharacter(int)
// int gameswf::Character::getCharacter();
// [0x1081b00] (9 bytes) gameswf::Character::setPlayState(gameswf::Character::PlayState)
// void gameswf::Character::setPlayState();
// [0x1081b10] (12 bytes) gameswf::Character::getPlayState(void)const
// int gameswf::Character::getPlayState();
// [0x1081b20] (9 bytes) gameswf::Character::gotoLabeledFrame(gameswf::StringI const&)
// int gameswf::Character::gotoLabeledFrame();
// [0x1081b30] (9 bytes) gameswf::Character::findPreviousReplaceOrAddTag(int,int,int)
// int gameswf::Character::findPreviousReplaceOrAddTag();
// [0x1081b40] (9 bytes) gameswf::Character::clearDisplayObjects(void)
// void gameswf::Character::clearDisplayObjects();
// [0x1081b50] (9 bytes) gameswf::Character::removeDisplayObject(gameswf::Character*)
// void gameswf::Character::removeDisplayObject();
// [0x1081b60] (9 bytes) gameswf::Character::replaceMe(gameswf::CharacterDef *)
// int gameswf::Character::replaceMe();
// [0x1081b70] (9 bytes) gameswf::Character::replaceMe(gameswf::MovieDefinition *)
// int gameswf::Character::replaceMe();
// [0x1081b80] (9 bytes) gameswf::Character::addDisplayObject(unsigned short,gameswf::String const&,gameswf::String const&,gameswf::array<gameswf::swf_event *> const&,int,bool,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short,bool)
// int gameswf::Character::addDisplayObject();
// [0x1081b90] (9 bytes) gameswf::Character::moveDisplayObject(int,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// void gameswf::Character::moveDisplayObject();
// [0x1081ba0] (9 bytes) gameswf::Character::replaceDisplayObject(unsigned short,char const*,int,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// void gameswf::Character::replaceDisplayObject();
// [0x1081bb0] (9 bytes) gameswf::Character::replaceDisplayObject(gameswf::Character*,char const*,int,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// void gameswf::Character::replaceDisplayObject();
// [0x1081bc0] (9 bytes) gameswf::Character::removeDisplayObject(int,int)
// void gameswf::Character::removeDisplayObject();
// [0x1081bd0] (9 bytes) gameswf::Character::executeFrameTags(int,bool)
// void gameswf::Character::executeFrameTags();
// [0x1081be0] (9 bytes) gameswf::Character::addActionBuffer(gameswf::ActionBuffer *)
// void gameswf::Character::addActionBuffer();
// [0x1081bf0] (9 bytes) gameswf::Character::doActions(gameswf::array<gameswf::ActionBuffer *> const&)
// void gameswf::Character::doActions();
// [0x1081c00] (9 bytes) gameswf::Character::cloneDisplayObject(gameswf::String const&,int)
// int gameswf::Character::cloneDisplayObject();
// [0x1081c10] (9 bytes) gameswf::Character::removeDisplayObject(gameswf::String const&)
// void gameswf::Character::removeDisplayObject();
// [0x1081c20] (9 bytes) gameswf::Character::setDragState(gameswf::Character::DragState const&)
// void gameswf::Character::setDragState();
// [0x1081c30] (9 bytes) gameswf::Character::stopDrag(void)
// void gameswf::Character::stopDrag();
// [0x1081c40] (9 bytes) gameswf::Character::callFrameActions(gameswf::ASValue const&)
// void gameswf::Character::callFrameActions();
// [0x1081c50] (9 bytes) gameswf::Character::setBackgroundColor(gameswf::Color const&)
// void gameswf::Character::setBackgroundColor();
// [0x1081c60] (9 bytes) gameswf::Character::setBackgroundAlpha(float)
// void gameswf::Character::setBackgroundAlpha();
// [0x1081c70] (9 bytes) gameswf::Character::getBackgroundAlpha(void)const
// long double gameswf::Character::getBackgroundAlpha();
// [0x1081c80] (9 bytes) gameswf::Character::setDisplayViewport(int,int,int,int)
// void gameswf::Character::setDisplayViewport();
// [0x1081c90] (9 bytes) gameswf::Character::setDisplayBounds(int,int,int,int)
// void gameswf::Character::setDisplayBounds();
// [0x1081ca0] (9 bytes) gameswf::Character::getUserdata(void)
// int gameswf::Character::getUserdata();
// [0x1081cb0] (9 bytes) gameswf::Character::setUserdata(void *)
// void gameswf::Character::setUserdata();
// [0x1081cc0] (9 bytes) gameswf::Character::attachDisplayCallback(char const*,void (*)(gameswf::RenderState &,void *),void *)
// void gameswf::Character::attachDisplayCallback();
// [0x1081cd0] (9 bytes) gameswf::Character::display(void)
// void gameswf::Character::display();
// [0x1081ce0] (9 bytes) gameswf::Character::getCharacterDef(void)
// int gameswf::Character::getCharacterDef();
// [0x1081cf0] (12 bytes) gameswf::Character::getCurrentFrame(void)const
// int gameswf::Character::getCurrentFrame();
// [0x1081d00] (12 bytes) gameswf::Character::getFrameCount(void)const
// int gameswf::Character::getFrameCount();
// [0x1081d10] (12 bytes) gameswf::Character::getLoadingFrame(void)const
// int gameswf::Character::getLoadingFrame();
// [0x1081d20] (9 bytes) gameswf::Character::hasLooped(void)const
// int gameswf::Character::hasLooped();
// [0x1081d30] (16 bytes) gameswf::Character::advance(float)
// gameswf::Character *gameswf::Character::advance(gameswf::Character *this);
// [0x1081d40] (9 bytes) gameswf::Character::gotoFrame(int)
// int gameswf::Character::gotoFrame();
// [0x1081d50] (12 bytes) gameswf::Character::getAcceptAnimMoves(void)const
// int gameswf::Character::getAcceptAnimMoves();
// [0x1081d60] (9 bytes) gameswf::Character::hasKeypressEvent(void)
// int gameswf::Character::hasKeypressEvent();
// [0x1081d70] (9 bytes) gameswf::Character::canHandleMouseEvent(void)
// int gameswf::Character::canHandleMouseEvent();
// [0x1081d80] (9 bytes) gameswf::Character::getMovieVersion(void)
// int gameswf::Character::getMovieVersion();
// [0x1081d90] (9 bytes) gameswf::Character::getMovieWidth(void)
// int gameswf::Character::getMovieWidth();
// [0x1081da0] (9 bytes) gameswf::Character::getMovieHeight(void)
// int gameswf::Character::getMovieHeight();
// [0x1081db0] (9 bytes) gameswf::Character::getMovieFPS(void)
// long double gameswf::Character::getMovieFPS();
// [0x1081dc0] (12 bytes) gameswf::Character::isEnabled(void)const
// int gameswf::Character::isEnabled();
// [0x1081e10] (864 bytes) gameswf::Character::setDisplayCallback(void (*)(gameswf::RenderState &,void *),void *)
// int gameswf::Character::setDisplayCallback(int a1, int a2, int a3);
// [0x1082380] (79 bytes) gameswf::Character::findExportedResource(gameswf::String const&)
// int gameswf::Character::findExportedResource(gameswf **this, const gameswf::String *a2);
// [0x10823d0] (71 bytes) gameswf::Character::getMovieDefinition(void)
// int gameswf::Character::getMovieDefinition(gameswf **this);
// [0x1082420] (149 bytes) gameswf::Character::getMouseState(int *,int *,int *)
// int *gameswf::Character::getMouseState(gameswf **this, int *a2, int *a3, int *a4);
// [0x10824c0] (90 bytes) gameswf::Character::getRootMovie(void)
// int gameswf::Character::getRootMovie(gameswf **this);
// [0x1082520] (73 bytes) gameswf::Character::getDragState(gameswf::Character::DragState *)
// int gameswf::Character::getDragState(int a1, int a2);
// [0x1082570] (570 bytes) gameswf::Character::setCxForm(gameswf::CxForm const&)
// void gameswf::Character::setCxForm(gameswf::Character *this, const gameswf::CxForm *a2);
// [0x10827b0] (570 bytes) gameswf::Character::setMatrix(gameswf::Matrix const&)
// int gameswf::Character::setMatrix(gameswf::Character *this, const gameswf::Matrix *a2);
// [0x1087380] (874 bytes) gameswf::Character::setEffect(gameswf::Effect const&)
// gameswf::Character *gameswf::Character::setEffect(gameswf::Character *this, const gameswf::Effect *a2);
// [0x109f820] (1416 bytes) gameswf::Character::doMouseDrag(void)
// int gameswf::Character::doMouseDrag( gameswf **this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, float a28, float a29, float a30, float a31, float a32, float a33, int a34, int a35, gameswf **a36, int a37, unsigned int a38, unsigned int a39, float a40, float a41, float a42, float a43);
// [0x10a4960] (824 bytes) gameswf::Character::updateMatrices(void)
// void gameswf::Character::updateMatrices(gameswf::Character *this);
// [0x10e9b00] (105 bytes) gameswf::Character::notifyNeedAdvance(void)
// gameswf *gameswf::Character::notifyNeedAdvance(gameswf **this);
