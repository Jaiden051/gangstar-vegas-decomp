#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASObject.h
// Library: gameswf | Module: gameswf_ASObject
// Binary Address Span: 0x1079760 .. 0x113cd30 (46 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1079760] (12 bytes) gameswf::ASObject::toBool(void)
// int gameswf::ASObject::toBool();
// [0x1079770] (22 bytes) gameswf::ASObject::_typeof(void)
// const char *gameswf::ASObject::_typeof();
// [0x1079790] (9 bytes) gameswf::ASObject::construct(void)
// void gameswf::ASObject::construct();
// [0x10797a0] (9 bytes) gameswf::ASObject::setStandardMember(gameswf::as_standard_member,gameswf::ASValue const&)
// int gameswf::ASObject::setStandardMember();
// [0x10797b0] (9 bytes) gameswf::ASObject::getStandardMember(gameswf::as_standard_member,gameswf::ASValue *)
// int gameswf::ASObject::getStandardMember();
// [0x10797c0] (9 bytes) gameswf::ASObject::getEnvironment(void)
// int gameswf::ASObject::getEnvironment();
// [0x10797d0] (9 bytes) gameswf::ASObject::advance(float)
// void gameswf::ASObject::advance();
// [0x10797e0] (9 bytes) gameswf::ASObject::notifySetMember(gameswf::String const&,gameswf::ASValue const&)
// void gameswf::ASObject::notifySetMember();
// [0x1094920] (127 bytes) gameswf::ASObject::getMember(gameswf::StringI const&,gameswf::ASValue *)
// int gameswf::ASObject::getMember(gameswf::ASObject *this, const gameswf::StringI *a2, gameswf::ASValue *a3);
// [0x10b1a30] (101 bytes) gameswf::ASObject::toString(void)
// const char *gameswf::ASObject::toString(gameswf::ASObject *this);
// [0x10b1aa0] (83 bytes) gameswf::ASObject::toNumber(void)
// long double gameswf::ASObject::toNumber(gameswf::ASObject *this);
// [0x10b1b00] (136 bytes) gameswf::ASObject::dump(void)
// int gameswf::ASObject::dump(gameswf::ASObject *this, char a2, int a3, int a4, gameswf *a5, int a6);
// [0x10b1b90] (185 bytes) gameswf::ASObject::deleteMemberByKey(gameswf::ASValue const&)
// int gameswf::ASObject::deleteMemberByKey( int a1, gameswf::ASObject *this, const gameswf::ASValue *a3, int a4, char a5, int a6, int a7, gameswf *a8, int a9);
// [0x10b1c50] (243 bytes) gameswf::ASObject::setMemberByKey(gameswf::ASValue const&,gameswf::ASValue const&)
// int gameswf::ASObject::setMemberByKey( gameswf::ASObject *this, const gameswf::ASValue *a2, const gameswf::ASValue *a3);
// [0x10b1d50] (243 bytes) gameswf::ASObject::getMemberByKey(gameswf::ASValue const&,gameswf::ASValue*)
// int gameswf::ASObject::getMemberByKey( gameswf::ASObject *this, const gameswf::ASValue *a2, gameswf::ASValue *a3);
// [0x10b1e50] (520 bytes) gameswf::ASObject::enumerate(gameswf::ASEnvironment *)
// void gameswf::ASObject::enumerate(gameswf::ASObject *this, gameswf::ASEnvironment *a2);
// [0x10b2060] (685 bytes) gameswf::ASObject::clearRefs(int)
// int gameswf::ASObject::clearRefs(gameswf::ASObject *this, int a2);
// [0x10b2310] (322 bytes) gameswf::ASObject::copyTo(gameswf::ASObject*)
// gameswf::ASObject *gameswf::ASObject::copyTo(gameswf::ASObject *this, gameswf::ASObject *a2);
// [0x10b2460] (1314 bytes) gameswf::ASObject::dump(gameswf::String &)
// int gameswf::ASObject::dump(gameswf::ASObject *this, gameswf::String *a2);
// [0x10b2990] (401 bytes) gameswf::ASObject::thisAlive(void)
// int gameswf::ASObject::thisAlive(gameswf::ASObject *this);
// [0x10b2b30] (309 bytes) gameswf::ASObject::~ASObject()
// void gameswf::ASObject::~ASObject(gameswf::ASObject *this);
// [0x10b2c70] (56 bytes) gameswf::ASObject::~ASObject()
// void gameswf::ASObject::~ASObject(gameswf::ASObject *this);
// [0x10b2cb0] (734 bytes) gameswf::ASObject::deleteMember(gameswf::StringI const&)
// int gameswf::ASObject::deleteMember(gameswf::ASObject *this, const gameswf::StringI *a2);
// [0x10b2f90] (1941 bytes) gameswf::ASObject::onEvent(gameswf::EventId const&)
// int gameswf::ASObject::onEvent(gameswf::ASObject *this, const gameswf::EventId *a2);
// [0x10b3730] (613 bytes) gameswf::ASObject::getMemberByName(gameswf::StringI const&,gameswf::ASValue *)
// int gameswf::ASObject::getMemberByName( gameswf::ASObject *this, const gameswf::StringI *a2, gameswf::ASValue *a3);
// [0x10b39a0] (136 bytes) gameswf::ASObject::ASObject(gameswf::Player *)
// void (**gameswf::ASObject::ASObject( gameswf::ASObject *this, gameswf::Player *a2))(gameswf::ASObject *__hidden this);
// [0x10b3a30] (122 bytes) gameswf::ASObject::builtinMember(gameswf::StringI const&,gameswf::ASValue const&)
// int gameswf::ASObject::builtinMember( gameswf::ASObject *this, const gameswf::StringI *a2, const gameswf::ASValue *a3);
// [0x10b3ab0] (740 bytes) gameswf::ASObject::getMemberAt(int,gameswf::String const&,gameswf::ASValue *)
// int gameswf::ASObject::getMemberAt( gameswf::ASObject *this, int a2, const gameswf::String *a3, gameswf::ASValue *a4);
// [0x10b3da0] (740 bytes) gameswf::ASObject::setMemberAt(int,gameswf::String const&,gameswf::ASValue const&)
// int gameswf::ASObject::setMemberAt( gameswf::ASObject *this, int a2, const gameswf::String *a3, const gameswf::ASValue *a4);
// [0x10b4090] (60 bytes) gameswf::ASObject::getSlot(int,gameswf::ASValue *)
// int gameswf::ASObject::getSlot(gameswf::ASObject *this, int a2, gameswf::ASValue *a3);
// [0x10b40d0] (60 bytes) gameswf::ASObject::setSlot(int,gameswf::ASValue const&)
// int gameswf::ASObject::setSlot(gameswf::ASObject *this, int a2, const gameswf::ASValue *a3);
// [0x10b4110] (922 bytes) gameswf::ASObject::getMemberIndex(gameswf::String const&)const
// int gameswf::ASObject::getMemberIndex(gameswf::ASObject *this, const gameswf::String *a2);
// [0x10b44b0] (722 bytes) gameswf::ASObject::findTarget(char const*)
// gameswf::Player **gameswf::ASObject::findTarget(gameswf::Player **this, char *s);
// [0x10b4790] (109 bytes) gameswf::ASObject::findTarget(gameswf::ASValue const&)
// gameswf::Player **gameswf::ASObject::findTarget(gameswf::Player **this, const gameswf::ASValue *a2);
// [0x10b4800] (140 bytes) gameswf::ASObject::isInstanceOf(gameswf::ASFunction const*)const
// int gameswf::ASObject::isInstanceOf(gameswf::ASObject *this, const gameswf::ASFunction *a2);
// [0x10b4890] (37 bytes) gameswf::ASObject::getGlobal(void)const
// int gameswf::ASObject::getGlobal(gameswf::Player **this);
// [0x10b48c0] (37 bytes) gameswf::ASObject::getRoot(void)const
// int gameswf::ASObject::getRoot(gameswf::Player **this);
// [0x10b48f0] (1253 bytes) gameswf::ASObject::setMemberByName(gameswf::StringI const&,gameswf::ASValue const&)
// int gameswf::ASObject::setMemberByName( gameswf::ASObject *this, const gameswf::StringI *a2, const gameswf::ASValue *a3);
// [0x10b4de0] (12 bytes) gameswf::ASObject::is(int)const
// bool gameswf::ASObject::is(gameswf::ASObject *this, int a2);
// [0x113c370] (76 bytes) gameswf::ASObject::newOp(gameswf::Player *)
// gameswf::ASObject *gameswf::ASObject::newOp(gameswf::ASObject *this);
// [0x113c3c0] (9 bytes) gameswf::ASObject::init(gameswf::FunctionCall const&)
// void gameswf::ASObject::init();
// [0x113c3d0] (193 bytes) gameswf::ASObject::ctor(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASObject::ctor(int a1);
// [0x113c4a0] (830 bytes) gameswf::ASObject::addProperty(gameswf::FunctionCall const&)
// int gameswf::ASObject::addProperty(int a1);
// [0x113c7e0] (487 bytes) gameswf::ASObject::registerClass(gameswf::FunctionCall const&)
// int gameswf::ASObject::registerClass(int a1);
// [0x113c9d0] (860 bytes) gameswf::ASObject::hasOwnProperty(gameswf::FunctionCall const&)
// int gameswf::ASObject::hasOwnProperty(int a1);
// [0x113cd30] (144 bytes) gameswf::ASObject::dump(gameswf::FunctionCall const&)
// int gameswf::ASObject::dump(int a1);
