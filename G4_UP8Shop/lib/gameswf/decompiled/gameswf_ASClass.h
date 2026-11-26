#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASClass.h
// Library: gameswf | Module: gameswf_ASClass
// Binary Address Span: 0x106ef10 .. 0x1079e60 (21 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x106ef10] (93 bytes) gameswf::ASClass::toString(void)
// char *gameswf::ASClass::toString(gameswf::ASClass *this);
// [0x106efd0] (157 bytes) gameswf::ASClass::getMemberByName(gameswf::StringI const&,gameswf::ASValue *)
// int gameswf::ASClass::getMemberByName(gameswf::ASClass *this, const gameswf::StringI *a2, gameswf::ASValue *a3);
// [0x106f310] (283 bytes) gameswf::ASClass::operator()(gameswf::FunctionCall const&)
// int gameswf::ASClass::operator()(int a1, gameswf::ASValue **a2);
// [0x106f5e0] (614 bytes) gameswf::ASClass::ASClass(gameswf::Player *,gameswf::String const&,gameswf::ASObject * (*)(gameswf::Player *),gameswf::ASValue const&,bool)
// gameswf::ASClass *gameswf::ASClass::ASClass( gameswf **this, gameswf::Player *a2, const gameswf::String *a3, gameswf::ASObject *(*a4)(gameswf::Player *), const gameswf::ASValue *a5, bool a6);
// [0x106f850] (686 bytes) gameswf::ASClass::ASClass(gameswf::Player *,gameswf::ASClass*,gameswf::String const&,gameswf::ASObject * (*)(gameswf::Player *),gameswf::ASValue const&,gameswf::instance_info *)
// gameswf::ASClass *gameswf::ASClass::ASClass( gameswf **this, gameswf::Player *a2, gameswf::ASClass *a3, const gameswf::String *a4, gameswf::ASObject *(*a5)(gameswf::Player *), const gameswf::ASValue *a6, gameswf::instance_info *a7);
// [0x106fb00] (156 bytes) gameswf::ASClass::initializeInstance(gameswf::ASObject *)
// gameswf::abc_def **gameswf::ASClass::initializeInstance(gameswf::abc_def ***this, gameswf::ASObject *a2);
// [0x106fba0] (280 bytes) gameswf::ASClass::isInstanceOf(gameswf::ASClass*)
// int gameswf::ASClass::isInstanceOf(gameswf::ASClass *this, gameswf::ASClass *a2);
// [0x106fcc0] (295 bytes) gameswf::ASClass::findMethod(gameswf::ObjectInfo *,gameswf::String const&,gameswf::traits_info::kind)
// int gameswf::ASClass::findMethod(int a1, uint32_t *a2, int a3, int a4);
// [0x106fdf0] (63 bytes) gameswf::ASClass::findStaticMethod(gameswf::String const&)
// int gameswf::ASClass::findStaticMethod(gameswf::ASClass *this, const gameswf::String *a2);
// [0x106fe30] (63 bytes) gameswf::ASClass::findDeclaredMethod(gameswf::String const&,gameswf::traits_info::kind)
// int gameswf::ASClass::findDeclaredMethod(int a1, int a2, int a3);
// [0x106fe70] (573 bytes) gameswf::ASClass::findBuiltinMethod(gameswf::String const&,gameswf::ASValue *)
// int gameswf::ASClass::findBuiltinMethod( gameswf::ASClass *this, const gameswf::String *a2, gameswf::ASValue *a3);
// [0x10700b0] (655 bytes) gameswf::ASClass::enumerateMembers(gameswf::array<int> &,bool)
// gameswf *gameswf::ASClass::enumerateMembers(gameswf **this, gameswf::array<int> *a2, bool a3);
// [0x1070340] (635 bytes) gameswf::ASClass::enumerateStatics(gameswf::array<int> &,bool)
// gameswf *gameswf::ASClass::enumerateStatics(gameswf::ASClass *this, gameswf::array<int> *a2, bool a3);
// [0x10705c0] (896 bytes) gameswf::ASClass::enumerateBuiltinMethods(gameswf::array<gameswf::String> &)
// gameswf *gameswf::ASClass::enumerateBuiltinMethods(gameswf::ASClass *this, gameswf::array<gameswf::String> *a2);
// [0x1070940] (856 bytes) gameswf::ASClass::getFullClassName(void)
// gameswf::ASClass *gameswf::ASClass::getFullClassName(gameswf::ASClass *this, int a2);
// [0x1072370] (1969 bytes) gameswf::ASClass::initialize(void)
// void gameswf::ASClass::initialize(gameswf::ASClass *this);
// [0x1073240] (870 bytes) gameswf::ASClass::newOp(gameswf::Player *)
// int gameswf::ASClass::newOp(gameswf::ASClass *this, gameswf::Player *a2);
// [0x1079700] (93 bytes) gameswf::ASClass::builtinMethod(gameswf::String const&,gameswf::ASValue const&)
// int gameswf::ASClass::builtinMethod( gameswf::ASClass *this, const gameswf::String *a2, const gameswf::ASValue *a3);
// [0x1079830] (25 bytes) gameswf::ASClass::is(int)const
// bool gameswf::ASClass::is(gameswf::ASClass *this, int a2);
// [0x1079bd0] (649 bytes) gameswf::ASClass::~ASClass()
// void gameswf::ASClass::~ASClass(gameswf::ASClass *this);
// [0x1079e60] (56 bytes) gameswf::ASClass::~ASClass()
// void gameswf::ASClass::~ASClass(gameswf::ASClass *this);
