#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASValue.h
// Library: gameswf | Module: gameswf_ASValue
// Binary Address Span: 0x110e4e0 .. 0x11115c0 (35 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x110e4e0] (184 bytes) gameswf::ASValue::toCStr(void)const
// char *gameswf::ASValue::toCStr(gameswf::ASValue *this);
// [0x110e5a0] (254 bytes) gameswf::ASValue::toHexString(void)const
// char *gameswf::ASValue::toHexString(gameswf::ASValue *this);
// [0x110e6a0] (57 bytes) gameswf::ASValue::toFunction(void)const
// int gameswf::ASValue::toFunction(gameswf::ASValue *this);
// [0x110e6e0] (178 bytes) gameswf::ASValue::dropRefs(void)
// int gameswf::ASValue::dropRefs(gameswf::ASValue *this);
// [0x110e7a0] (95 bytes) gameswf::ASValue::setObject(gameswf::ASObject *)
// gameswf::RefCounted *gameswf::ASValue::setObject(gameswf::ASValue *this, gameswf::ASObject *a2);
// [0x110ead0] (15 bytes) gameswf::ASValue::toProperty(void)const
// int gameswf::ASValue::toProperty(gameswf::ASValue *this);
// [0x110eae0] (15 bytes) gameswf::ASValue::getPropertyTarget(void)const
// int gameswf::ASValue::getPropertyTarget(gameswf::ASValue *this);
// [0x110eaf0] (82 bytes) gameswf::ASValue::setPropertyTarget(gameswf::ASObject *)
// gameswf::RefCounted *gameswf::ASValue::setPropertyTarget(gameswf::ASValue *this, gameswf::ASObject *a2);
// [0x110eb50] (549 bytes) gameswf::ASValue::invokeGetter(gameswf::ASObject *,gameswf::ASValue*)
// int gameswf::ASValue::invokeGetter(gameswf::ASValue *this, gameswf::ASObject *a2, gameswf::ASValue *a3);
// [0x110ed80] (70 bytes) gameswf::ASValue::setGetter(gameswf::ASFunction *)
// gameswf::ASFunction *gameswf::ASValue::setGetter(gameswf::ASValue *this, gameswf::ASFunction *a2);
// [0x110edd0] (70 bytes) gameswf::ASValue::setSetter(gameswf::ASFunction *)
// gameswf::ASFunction *gameswf::ASValue::setSetter(gameswf::ASValue *this, gameswf::ASFunction *a2);
// [0x110ee20] (74 bytes) gameswf::ASValue::setDouble(double)
// int gameswf::ASValue::setDouble(gameswf::ASValue *this, double a2);
// [0x110ee70] (68 bytes) gameswf::ASValue::setBool(bool)
// int gameswf::ASValue::setBool(gameswf::ASValue *this, int a2);
// [0x110eec0] (52 bytes) gameswf::ASValue::isFunction(void)const
// int gameswf::ASValue::isFunction(gameswf::ASValue *this);
// [0x110ef00] (98 bytes) gameswf::ASValue::setASCppFunction(void (*)(gameswf::FunctionCall const&))
// gameswf::RefCounted *gameswf::ASValue::setASCppFunction(gameswf::ASValue *a1, int a2);
// [0x110ef70] (336 bytes) gameswf::ASValue::isInstanceOf(gameswf::ASFunction const*)const
// int gameswf::ASValue::isInstanceOf(gameswf::ASValue *this, const gameswf::ASFunction *a2);
// [0x110f0c0] (1454 bytes) gameswf::ASValue::getMember(gameswf::String const&,gameswf::ASValue*)const
// int gameswf::ASValue::getMember(gameswf::ASValue *this, gameswf **a2, gameswf::ASValue *a3);
// [0x110f670] (233 bytes) gameswf::ASValue::getMemberAt(int,gameswf::String const&,gameswf::ASValue*)const
// int gameswf::ASValue::getMemberAt( gameswf::ASValue *this, int a2, const gameswf::String *a3, gameswf::ASValue *a4);
// [0x110f760] (112 bytes) gameswf::ASValue::setMember(gameswf::String const&,gameswf::ASValue const&)
// int gameswf::ASValue::setMember( gameswf::ASObject **this, const gameswf::String *a2, const gameswf::ASValue *a3);
// [0x110f7d0] (501 bytes) gameswf::ASValue::invokeMethod(gameswf::String const&,gameswf::ASValue const*,int)
// gameswf::ASValue *gameswf::ASValue::invokeMethod( gameswf::ASValue *this, const gameswf::String *a2, const gameswf::ASValue *a3, gameswf::ASValue *a4, unsigned int a5);
// [0x110f9d0] (518 bytes) gameswf::ASValue::setString(gameswf::String const&)
// char *gameswf::ASValue::setString(const gameswf::String **this, const gameswf::String *a2);
// [0x110fbe0] (708 bytes) gameswf::ASValue::setString(char const*)
// int gameswf::ASValue::setString(gameswf::ASValue *this, char *s);
// [0x110feb0] (84 bytes) gameswf::ASValue::ASValue(wchar_t const*)
// gameswf::ASValue *gameswf::ASValue::ASValue(gameswf::ASValue *this, wchar_t *a2);
// [0x1110240] (52 bytes) gameswf::ASValue::getProperty(gameswf::ASValue*)const
// gameswf *gameswf::ASValue::getProperty(gameswf::ASProperty **this, gameswf::ASValue *a2);
// [0x1110280] (243 bytes) gameswf::ASValue::_typeof(void)const
// const char *gameswf::ASValue::_typeof(gameswf::ASValue *this);
// [0x1110380] (301 bytes) gameswf::ASValue::operator=(gameswf::ASValue const&)
// void *gameswf::ASValue::operator=(gameswf::ASValue *this, const gameswf::ASValue *a2);
// [0x1110800] (52 bytes) gameswf::ASValue::setProperty(gameswf::ASValue const&)
// gameswf *gameswf::ASValue::setProperty(gameswf::ASProperty **this, const gameswf::ASValue *a2);
// [0x1110840] (895 bytes) gameswf::ASValue::invokeSetter(gameswf::ASObject *,gameswf::ASValue const&)
// int gameswf::ASValue::invokeSetter(gameswf::ASValue *this, gameswf::ASObject *a2, const gameswf::ASValue *a3);
// [0x1110bc0] (267 bytes) gameswf::ASValue::toBool(void)const
// char gameswf::ASValue::toBool(gameswf::ASValue *this);
// [0x1110cd0] (272 bytes) gameswf::ASValue::toNumber(void)const
// long double gameswf::ASValue::toNumber(gameswf::ASValue *this);
// [0x1110de0] (44 bytes) gameswf::ASValue::toInt(void)const
// int gameswf::ASValue::toInt(gameswf::ASValue *this);
// [0x1110e10] (680 bytes) gameswf::ASValue::operator==(gameswf::ASValue const&)const
// char gameswf::ASValue::operator==(gameswf::ASValue *this, const gameswf::ASValue *a2);
// [0x11110c0] (45 bytes) gameswf::ASValue::operator!=(gameswf::ASValue const&)const
// int gameswf::ASValue::operator!=(gameswf::ASValue *this, const gameswf::ASValue *a2);
// [0x11110f0] (1094 bytes) gameswf::ASValue::toString(gameswf::String &)const
// gameswf::String *gameswf::ASValue::toString(gameswf::ASValue *this, gameswf **a2);
// [0x11115c0] (53 bytes) gameswf::ASValue::getProperty(gameswf::ASValue const&,gameswf::ASValue*)const
// int *gameswf::ASValue::getProperty( gameswf::ASProperty **this, const gameswf::ASValue *a2, gameswf::ASValue *a3);
