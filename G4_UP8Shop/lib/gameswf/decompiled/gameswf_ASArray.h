#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASArray.h
// Library: gameswf | Module: gameswf_ASArray
// Binary Address Span: 0x111bb10 .. 0x1121c80 (35 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x111bb10] (70 bytes) gameswf::ASArray::getStandardMember(gameswf::as_standard_member,gameswf::ASValue *)
// int gameswf::ASArray::getStandardMember(int a1, int a2, gameswf::ASValue *a3);
// [0x111bb60] (155 bytes) gameswf::ASArray::thisAlive(void)
// uint32_t *gameswf::ASArray::thisAlive(gameswf::ASArray *this);
// [0x111bd80] (300 bytes) gameswf::ASArray::enumerate(gameswf::ASEnvironment *)
// void gameswf::ASArray::enumerate(gameswf::ASArray *this, gameswf::ASEnvironment *a2);
// [0x111beb0] (699 bytes) gameswf::ASArray::toString(void)
// char *gameswf::ASArray::toString(gameswf::ASArray *this);
// [0x111c6c0] (103 bytes) gameswf::ASArray::toString(gameswf::FunctionCall const&)
// int gameswf::ASArray::toString(int a1);
// [0x111c730] (1406 bytes) gameswf::ASArray::join(gameswf::FunctionCall const&)
// char *gameswf::ASArray::join(int a1);
// [0x111ccb0] (210 bytes) gameswf::ASArray::reverse(gameswf::FunctionCall const&)
// int gameswf::ASArray::reverse(int a1);
// [0x111ea40] (272 bytes) gameswf::ASArray::indexOf(gameswf::FunctionCall const&)
// int gameswf::ASArray::indexOf(int a1);
// [0x111eb50] (272 bytes) gameswf::ASArray::lastIndexOf(gameswf::FunctionCall const&)
// int gameswf::ASArray::lastIndexOf(int a1);
// [0x111ec60] (1657 bytes) gameswf::ASArray::createClass(gameswf::Player *)
// gameswf **gameswf::ASArray::createClass(gameswf::ASArray *this);
// [0x111f2e0] (122 bytes) gameswf::ASArray::ASArray(gameswf::Player *)
// gameswf::ASArray *gameswf::ASArray::ASArray(gameswf::ASArray *this, gameswf::Player *a2);
// [0x111f360] (76 bytes) gameswf::ASArray::newOp(gameswf::Player *)
// gameswf::ASArray *gameswf::ASArray::newOp(gameswf::ASArray *this);
// [0x111f570] (71 bytes) gameswf::ASArray::getMemberByIndex(int,gameswf::ASValue *)
// int gameswf::ASArray::getMemberByIndex(gameswf::ASArray *this, int a2, gameswf::ASValue *a3);
// [0x111f5c0] (58 bytes) gameswf::ASArray::getMemberByKey(gameswf::ASValue const&,gameswf::ASValue*)
// int gameswf::ASArray::getMemberByKey(gameswf::ASArray *this, const gameswf::ASValue *a2, gameswf::ASValue *a3);
// [0x111f600] (257 bytes) gameswf::ASArray::push(gameswf::ASValue const&)
// gameswf::ASValue *gameswf::ASArray::push(gameswf::ASArray *this, const gameswf::ASValue *a2);
// [0x111f710] (138 bytes) gameswf::ASArray::push(gameswf::FunctionCall const&)
// int gameswf::ASArray::push(int a1);
// [0x111f7a0] (438 bytes) gameswf::ASArray::slice(gameswf::FunctionCall const&)
// int gameswf::ASArray::slice(int a1);
// [0x111f960] (447 bytes) gameswf::ASArray::concat(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASArray::concat(int a1);
// [0x111fb20] (81 bytes) gameswf::ASArray::isIndex(gameswf::StringI const&)
// int gameswf::ASArray::isIndex(gameswf::ASArray *this, const gameswf::StringI *a2);
// [0x111fb80] (189 bytes) gameswf::ASArray::getMemberByName(gameswf::StringI const&,gameswf::ASValue *)
// int gameswf::ASArray::getMemberByName(gameswf::ASArray *this, const gameswf::StringI *a2, gameswf::ASValue *a3);
// [0x111fc40] (117 bytes) gameswf::ASArray::pop(gameswf::ASValue *)
// int gameswf::ASArray::pop(gameswf::ASArray *this, gameswf::ASValue *a2);
// [0x111fcc0] (137 bytes) gameswf::ASArray::pop(gameswf::FunctionCall const&)
// int gameswf::ASArray::pop(gameswf::ASValue **a1);
// [0x111fd50] (124 bytes) gameswf::ASArray::setMemberByIndex(int,gameswf::ASValue const&)
// int gameswf::ASArray::setMemberByIndex(gameswf::ASArray *this, int a2, const gameswf::ASValue *a3);
// [0x111fdd0] (58 bytes) gameswf::ASArray::setMemberByKey(gameswf::ASValue const&,gameswf::ASValue const&)
// int gameswf::ASArray::setMemberByKey( gameswf::ASArray *this, const gameswf::ASValue *a2, const gameswf::ASValue *a3);
// [0x111fe10] (149 bytes) gameswf::ASArray::setMemberByName(gameswf::StringI const&,gameswf::ASValue const&)
// int gameswf::ASArray::setMemberByName( gameswf::ASArray *this, const gameswf::StringI *a2, const gameswf::ASValue *a3);
// [0x111feb0] (333 bytes) gameswf::ASArray::shift(gameswf::FunctionCall const&)
// int gameswf::ASArray::shift(int a1);
// [0x1120000] (466 bytes) gameswf::ASArray::init(gameswf::FunctionCall const&)
// gameswf::ASValue *gameswf::ASArray::init(uint32_t *a1);
// [0x11201e0] (259 bytes) gameswf::ASArray::ctor(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::ASArray::ctor(gameswf::ASValue **a1);
// [0x11202f0] (441 bytes) gameswf::ASArray::unshift(gameswf::FunctionCall const&)
// gameswf *gameswf::ASArray::unshift(int a1);
// [0x11204b0] (1380 bytes) gameswf::ASArray::splice(gameswf::FunctionCall const&)
// int gameswf::ASArray::splice(int a1);
// [0x1120a20] (1232 bytes) gameswf::ASArray::sortOn(gameswf::FunctionCall const&)
// int gameswf::ASArray::sortOn(int a1);
// [0x1120ef0] (1039 bytes) gameswf::ASArray::sort(gameswf::FunctionCall const&)
// int gameswf::ASArray::sort(int a1);
// [0x1121300] (20 bytes) gameswf::ASArray::is(int)const
// bool gameswf::ASArray::is(gameswf::ASArray *this, int a2);
// [0x1121bd0] (162 bytes) gameswf::ASArray::~ASArray()
// void gameswf::ASArray::~ASArray(gameswf::ASArray *this);
// [0x1121c80] (162 bytes) gameswf::ASArray::~ASArray()
// void gameswf::ASArray::~ASArray(gameswf::ASArray *this);
