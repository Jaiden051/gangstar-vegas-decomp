#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASDisplayObjectContainer.h
// Library: gameswf | Module: gameswf_ASDisplayObjectContainer
// Binary Address Span: 0x10e9b70 .. 0x1161f70 (36 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10e9b70] (306 bytes) gameswf::ASDisplayObjectContainer::~ASDisplayObjectContainer()
// void gameswf::ASDisplayObjectContainer::~ASDisplayObjectContainer(gameswf::ASDisplayObjectContainer *this);
// [0x10e9cb0] (56 bytes) gameswf::ASDisplayObjectContainer::~ASDisplayObjectContainer()
// void gameswf::ASDisplayObjectContainer::~ASDisplayObjectContainer(gameswf::ASDisplayObjectContainer *this);
// [0x114d3e0] (9 bytes) gameswf::ASDisplayObjectContainer::newOp(gameswf::Player *)
// int gameswf::ASDisplayObjectContainer::newOp();
// [0x114d3f0] (9 bytes) gameswf::ASDisplayObjectContainer::init(gameswf::FunctionCall const&)
// void gameswf::ASDisplayObjectContainer::init();
// [0x114d830] (88 bytes) gameswf::ASDisplayObjectContainer::updateWorldMatrix(void)
// uint32_t gameswf::ASDisplayObjectContainer::updateWorldMatrix(gameswf::ASDisplayObjectContainer *this);
// [0x114d890] (88 bytes) gameswf::ASDisplayObjectContainer::updateWorldCxForm(void)
// uint32_t *gameswf::ASDisplayObjectContainer::updateWorldCxForm(gameswf::ASDisplayObjectContainer *this);
// [0x114de50] (101 bytes) gameswf::ASDisplayObjectContainer::clearRefs(int)
// int gameswf::ASDisplayObjectContainer::clearRefs(gameswf::ASDisplayObjectContainer *this, int a2);
// [0x114dec0] (103 bytes) gameswf::ASDisplayObjectContainer::thisAlive(void)
// uint32_t *gameswf::ASDisplayObjectContainer::thisAlive(gameswf::ASDisplayObjectContainer *this);
// [0x114e3d0] (163 bytes) gameswf::ASDisplayObjectContainer::removeChild(gameswf::FunctionCall const&)
// int gameswf::ASDisplayObjectContainer::removeChild(int a1);
// [0x114e480] (73 bytes) gameswf::ASDisplayObjectContainer::advance(float)
// int gameswf::ASDisplayObjectContainer::advance(gameswf::ASDisplayObjectContainer *this, float a2);
// [0x114e4d0] (242 bytes) gameswf::ASDisplayObjectContainer::swapChildren(gameswf::FunctionCall const&)
// void gameswf::ASDisplayObjectContainer::swapChildren(int a1);
// [0x114e5d0] (128 bytes) gameswf::ASDisplayObjectContainer::removeChildAt(gameswf::FunctionCall const&)
// 0x114e5d0 gameswf::ASDisplayObjectContainer::removeChildAt(gameswf::FunctionCall const&)
// [0x114e9c0] (117 bytes) gameswf::ASDisplayObjectContainer::notifyStageChanged(bool)
// int gameswf::ASDisplayObjectContainer::notifyStageChanged(gameswf::ASDisplayObjectContainer *this, bool a2);
// [0x114ea40] (411 bytes) gameswf::ASDisplayObjectContainer::getBoundInternal(gameswf::Rect *)
// 0x114ea40 gameswf::ASDisplayObjectContainer::getBoundInternal(gameswf::Rect *)
// [0x114ebe0] (220 bytes) gameswf::ASDisplayObjectContainer::contains(gameswf::FunctionCall const&)
// int gameswf::ASDisplayObjectContainer::contains(int a1);
// [0x114ecc0] (172 bytes) gameswf::ASDisplayObjectContainer::getChildAt(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASDisplayObjectContainer::getChildAt(int a1);
// [0x114f150] (226 bytes) gameswf::ASDisplayObjectContainer::getChildIndex(gameswf::FunctionCall const&)
// int gameswf::ASDisplayObjectContainer::getChildIndex(int a1);
// [0x1150420] (308 bytes) gameswf::ASDisplayObjectContainer::getChildByName(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASDisplayObjectContainer::getChildByName(int a1);
// [0x1150790] (350 bytes) gameswf::ASDisplayObjectContainer::swapChildrenAt(gameswf::FunctionCall const&)
// void gameswf::ASDisplayObjectContainer::swapChildrenAt(int a1);
// [0x1152360] (490 bytes) gameswf::ASDisplayObjectContainer::hitTest(float,float,bool)
// 0x1152360 gameswf::ASDisplayObjectContainer::hitTest(float,float,bool)
// [0x1152e20] (1237 bytes) gameswf::ASDisplayObjectContainer::createClass(gameswf::ASPackage *)
// gameswf **gameswf::ASDisplayObjectContainer::createClass(gameswf::ASDisplayObjectContainer *this);
// [0x1153300] (466 bytes) gameswf::ASDisplayObjectContainer::getTransform(gameswf::Transform &)const
// int gameswf::ASDisplayObjectContainer::getTransform(const gameswf::Matrix **this, gameswf::Transform *a2);
// [0x11534e0] (378 bytes) gameswf::ASDisplayObjectContainer::getBoundingBox(gameswf::Transform const&,gameswf::BoundingBox *)
// uint8_t *gameswf::ASDisplayObjectContainer::getBoundingBox(const gameswf::Matrix **a1, uint32_t *a2, int a3);
// [0x1153660] (1349 bytes) gameswf::ASDisplayObjectContainer::getWorldTransform(gameswf::Transform &)
// gameswf *gameswf::ASDisplayObjectContainer::getWorldTransform( gameswf::ASDisplayObjectContainer *this, gameswf::Transform *a2);
// [0x1153bb0] (137 bytes) gameswf::ASDisplayObjectContainer::updateChildTransform(void)
// int gameswf::ASDisplayObjectContainer::updateChildTransform(gameswf::ASDisplayObjectContainer *this);
// [0x1153c40] (1231 bytes) gameswf::ASDisplayObjectContainer::setTransform(void)
// gameswf *gameswf::ASDisplayObjectContainer::setTransform(gameswf **this);
// [0x1154110] (1928 bytes) gameswf::ASDisplayObjectContainer::setStandardMember(gameswf::as_standard_member,gameswf::ASValue const&)
// int gameswf::ASDisplayObjectContainer::setStandardMember( long double a1, __m128 a2, gameswf::Character *a3, int a4, gameswf::ASValue *a5);
// [0x11548a0] (1933 bytes) gameswf::ASDisplayObjectContainer::getStandardMember(gameswf::as_standard_member,gameswf::ASValue *)
// int gameswf::ASDisplayObjectContainer::getStandardMember( long double a1, gameswf::ASDisplayObjectContainer *a2, int a3, gameswf::ASValue *a4);
// [0x1155030] (137 bytes) gameswf::ASDisplayObjectContainer::hasWorldTransform(void)const
// int gameswf::ASDisplayObjectContainer::hasWorldTransform(gameswf::ASDisplayObjectContainer *this);
// [0x11556a0] (70 bytes) gameswf::ASDisplayObjectContainer::removeChild(gameswf::Character *)
// int gameswf::ASDisplayObjectContainer::removeChild( gameswf::ASDisplayObjectContainer *this, gameswf::Character *a2);
// [0x11557a0] (2652 bytes) gameswf::ASDisplayObjectContainer::addChild(gameswf::Character *)
// int gameswf::ASDisplayObjectContainer::addChild( gameswf::ASDisplayObjectContainer *this, gameswf::Character *a2);
// [0x1156200] (163 bytes) gameswf::ASDisplayObjectContainer::addChild(gameswf::FunctionCall const&)
// int gameswf::ASDisplayObjectContainer::addChild(int a1);
// [0x11562b0] (897 bytes) gameswf::ASDisplayObjectContainer::addChildAt(gameswf::FunctionCall const&)
// void gameswf::ASDisplayObjectContainer::addChildAt(int a1);
// [0x115f0b0] (3439 bytes) gameswf::ASDisplayObjectContainer::getTopmostMouseEntity(gameswf::Point,gameswf::line3d const&)
// gameswf::ASDisplayObjectContainer *gameswf::ASDisplayObjectContainer::getTopmostMouseEntity( gameswf::ASDisplayObjectContainer *a1, float a2, float a3, float *a4);
// [0x1160fa0] (3060 bytes) gameswf::ASDisplayObjectContainer::display(void)
// int gameswf::ASDisplayObjectContainer::display(gameswf **this);
// [0x1161f70] (30 bytes) gameswf::ASDisplayObjectContainer::is(int)const
// bool gameswf::ASDisplayObjectContainer::is(gameswf::ASDisplayObjectContainer *this, int a2);
