#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASModel3D.h
// Library: gameswf | Module: gameswf_ASModel3D
// Binary Address Span: 0x114d670 .. 0x1162cc0 (35 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x114d670] (36 bytes) gameswf::ASModel3D::init(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::init(int a1);
// [0x114d6a0] (59 bytes) gameswf::ASModel3D::unload(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::unload(int a1);
// [0x114db90] (226 bytes) gameswf::ASModel3D::setTransitionTime(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::setTransitionTime(int a1);
// [0x114f660] (173 bytes) gameswf::ASModel3D::setWeight(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::setWeight(int a1);
// [0x114f710] (281 bytes) gameswf::ASModel3D::setLightDiffuse(gameswf::FunctionCall const&)
// float *gameswf::ASModel3D::setLightDiffuse(int a1);
// [0x114f830] (260 bytes) gameswf::ASModel3D::setLightPosition(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::setLightPosition(int a1);
// [0x114fff0] (402 bytes) gameswf::ASModel3D::advance(float)
// int gameswf::ASModel3D::advance(gameswf::ASModel3D *this, float a2);
// [0x11508f0] (837 bytes) gameswf::ASModel3D::setTechnique(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::setTechnique(__m128d a1, int a2);
// [0x1150c40] (584 bytes) gameswf::ASModel3D::addLight(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::addLight(int a1);
// [0x11512a0] (512 bytes) gameswf::ASModel3D::load(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::load(uint32_t *a1);
// [0x115a970] (1695 bytes) gameswf::ASModel3D::createClass(gameswf::Player *)
// gameswf **gameswf::ASModel3D::createClass(gameswf::ASModel3D *this);
// [0x115b010] (649 bytes) gameswf::ASModel3D::removeChild(gameswf::ASModel3D*)
// gameswf::ASModel3D *gameswf::ASModel3D::removeChild(gameswf::ASModel3D *this, gameswf **a2);
// [0x115b2a0] (155 bytes) gameswf::ASModel3D::removeChildNode(gameswf::FunctionCall const&)
// gameswf::ASModel3D *gameswf::ASModel3D::removeChildNode(int a1);
// [0x115b340] (633 bytes) gameswf::ASModel3D::unloadModel(void)
// uint32_t *gameswf::ASModel3D::unloadModel(gameswf::ASModel3D *this);
// [0x115b5c0] (1057 bytes) gameswf::ASModel3D::~ASModel3D()
// void gameswf::ASModel3D::~ASModel3D(volatile int32_t **this);
// [0x115b9f0] (56 bytes) gameswf::ASModel3D::~ASModel3D()
// void gameswf::ASModel3D::~ASModel3D(volatile int32_t **this);
// [0x115ba30] (500 bytes) gameswf::ASModel3D::addChild(gameswf::ASModel3D*)
// int gameswf::ASModel3D::addChild(gameswf **this, gameswf **a2);
// [0x115bc30] (155 bytes) gameswf::ASModel3D::addChildNode(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::addChildNode(int a1);
// [0x115bcd0] (1101 bytes) gameswf::ASModel3D::createScene(void)
// 0x115bcd0 gameswf::ASModel3D::createScene(void)
// [0x115c120] (457 bytes) gameswf::ASModel3D::ASModel3D(gameswf::Player *)
// gameswf::ASModel3D *gameswf::ASModel3D::ASModel3D(gameswf::ASModel3D *this, gameswf::Player *a2);
// [0x115c350] (76 bytes) gameswf::ASModel3D::newOp(gameswf::Player *)
// gameswf::ASModel3D *gameswf::ASModel3D::newOp(gameswf::ASModel3D *this);
// [0x115c3a0] (1107 bytes) gameswf::ASModel3D::addNodeAnimator(void)
// int gameswf::ASModel3D::addNodeAnimator(gameswf::ASModel3D *this);
// [0x115c800] (217 bytes) gameswf::ASModel3D::setMemberByName(gameswf::StringI const&,gameswf::ASValue const&)
// int gameswf::ASModel3D::setMemberByName( gameswf::ASModel3D *this, const gameswf::StringI *a2, const gameswf::ASValue *a3);
// [0x115c8e0] (2162 bytes) gameswf::ASModel3D::loadModel(gameswf::String const&,gameswf::ASArray *)
// void gameswf::ASModel3D::loadModel(gameswf::ASModel3D *this, const gameswf::String *a2, gameswf::ASArray *a3);
// [0x115d1a0] (80 bytes) gameswf::ASModel3D::getCurrentNodeAnimator(int)
// gameswf::ASModel3D *gameswf::ASModel3D::getCurrentNodeAnimator(gameswf::ASModel3D *this, int a2, int a3);
// [0x115d1f0] (208 bytes) gameswf::ASModel3D::getCurrentAnimation(gameswf::FunctionCall const&)
// void gameswf::ASModel3D::getCurrentAnimation(int a1);
// [0x115d2c0] (80 bytes) gameswf::ASModel3D::getNextNodeAnimator(int)
// gameswf::ASModel3D *gameswf::ASModel3D::getNextNodeAnimator(gameswf::ASModel3D *this, int a2, int a3);
// [0x115d310] (259 bytes) gameswf::ASModel3D::setCurrentAnimation(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::setCurrentAnimation(int a1);
// [0x115d420] (349 bytes) gameswf::ASModel3D::setLoop(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::setLoop(int a1);
// [0x115d580] (580 bytes) gameswf::ASModel3D::setClip(gameswf::FunctionCall const&)
// int gameswf::ASModel3D::setClip(int a1);
// [0x115e6b0] (873 bytes) gameswf::ASModel3D::updateChildTransformation(void)
// gameswf *gameswf::ASModel3D::updateChildTransformation(const gameswf::Matrix **this);
// [0x1161ba0] (133 bytes) gameswf::ASModel3D::display(void)
// int gameswf::ASModel3D::display(gameswf::ASModel3D *this);
// [0x1162150] (35 bytes) gameswf::ASModel3D::is(int)const
// bool gameswf::ASModel3D::is(gameswf::ASModel3D *this, int a2);
// [0x1162bf0] (196 bytes) gameswf::ASModel3D::Animator::~Animator()
// void gameswf::ASModel3D::Animator::~Animator(gameswf::ASModel3D::Animator *this);
// [0x1162cc0] (208 bytes) gameswf::ASModel3D::Animator::~Animator()
// void gameswf::ASModel3D::Animator::~Animator(gameswf::ASModel3D::Animator *this);
