#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_abc_def.h
// Library: gameswf | Module: gameswf_abc_def
// Binary Address Span: 0x1175870 .. 0x117bad0 (32 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1175870] (2680 bytes) gameswf::abc_def::~abc_def()
// void gameswf::abc_def::~abc_def(gameswf::abc_def *this);
// [0x11762f0] (56 bytes) gameswf::abc_def::~abc_def()
// void gameswf::abc_def::~abc_def(gameswf::abc_def *this);
// [0x1176630] (396 bytes) gameswf::abc_def::getMultiNamespace(int)
// char *gameswf::abc_def::getMultiNamespace(gameswf::abc_def *this, int a2);
// [0x11767c0] (116 bytes) gameswf::abc_def::getMultiNamespaceInfo(int)
// int gameswf::abc_def::getMultiNamespaceInfo(gameswf::abc_def *this, int a2);
// [0x1176e50] (870 bytes) gameswf::abc_def::abc_def(gameswf::Player *,gameswf::String const&)
// gameswf::abc_def *gameswf::abc_def::abc_def(gameswf **this, gameswf::Player *a2, const gameswf::String *a3);
// [0x11771c0] (2419 bytes) gameswf::abc_def::read_cpool(gameswf::Stream *)
// void gameswf::abc_def::read_cpool(gameswf::abc_def *this, gameswf::Stream *a2);
// [0x1177b40] (531 bytes) gameswf::abc_def::readMethodInfos(gameswf::Stream *,gameswf::fixed_array<gameswf::LoadMethodType> *)
// gameswf::RefCounted *gameswf::abc_def::readMethodInfos(gameswf::abc_def *a1, gameswf::Stream *a2, uint32_t *a3);
// [0x1177d60] (414 bytes) gameswf::abc_def::readInstanceInfos(gameswf::Stream *)
// char gameswf::abc_def::readInstanceInfos(gameswf::abc_def *this, gameswf::Stream *a2);
// [0x1177f00] (455 bytes) gameswf::abc_def::readClassInfos(gameswf::Stream *,gameswf::fixed_array<bool> &,gameswf::fixed_array<gameswf::LoadMethodType> &)
// void gameswf::abc_def::readClassInfos(gameswf::abc_def *a1, gameswf::Stream *a2, uint32_t *a3, uint32_t *a4);
// [0x11780d0] (507 bytes) gameswf::abc_def::readScriptInfos(gameswf::Stream *,gameswf::fixed_array<gameswf::LoadMethodType> &)
// int gameswf::abc_def::readScriptInfos(gameswf::abc_def *a1, gameswf::Stream *a2, uint32_t *a3);
// [0x11782d0] (455 bytes) gameswf::abc_def::readBodyInfos(gameswf::Stream *,gameswf::fixed_array<gameswf::LoadMethodType> &,bool)
// int gameswf::abc_def::readBodyInfos(uint32_t *a1, gameswf::Stream *a2, uint32_t *a3, char a4);
// [0x11784a0] (1402 bytes) gameswf::abc_def::assignClasses(gameswf::fixed_array<bool> &,gameswf::fixed_array<gameswf::LoadMethodType> &)
// int gameswf::abc_def::assignClasses(gameswf::abc_def *a1, uint32_t *a2, uint32_t *a3);
// [0x1178a20] (30 bytes) gameswf::abc_def::getClassConstructor(int)const
// int gameswf::abc_def::getClassConstructor(gameswf::abc_def *this, int a2);
// [0x1178a40] (76 bytes) gameswf::abc_def::findInstance(gameswf::String const&,gameswf::String const&)const
// int gameswf::abc_def::findInstance( gameswf::ASClassManager **this, const gameswf::String *a2, const gameswf::String *a3);
// [0x1178a90] (84 bytes) gameswf::abc_def::getClassConstructor(gameswf::String const&,gameswf::String const&)const
// int gameswf::abc_def::getClassConstructor( gameswf::ASClassManager **this, const gameswf::String *a2, const gameswf::String *a3);
// [0x1178af0] (76 bytes) gameswf::abc_def::findInstanceNoInit(gameswf::String const&,gameswf::String const&)const
// int gameswf::abc_def::findInstanceNoInit( gameswf::ASClassManager **this, const gameswf::String *a2, const gameswf::String *a3);
// [0x1178b40] (56 bytes) gameswf::abc_def::createObject(gameswf::String const&,gameswf::String const&)
// int gameswf::abc_def::createObject( gameswf::ASClassManager **this, const gameswf::String *a2, const gameswf::String *a3);
// [0x1178b80] (316 bytes) gameswf::abc_def::getFunctionName(int)const
// char *gameswf::abc_def::getFunctionName(gameswf::abc_def *this, int a2);
// [0x1178cc0] (462 bytes) gameswf::abc_def::getConstant(gameswf::constant::kind,int,gameswf::ASValue *)
// void *gameswf::abc_def::getConstant(uint32_t *a1, int a2, int a3, const gameswf::String **a4);
// [0x1178e90] (79 bytes) gameswf::abc_def::alive(void)
// int gameswf::abc_def::alive(gameswf::abc_def *this);
// [0x1178ee0] (36 bytes) gameswf::abc_def::getEntryScript(void)
// int gameswf::abc_def::getEntryScript(gameswf::abc_def *this);
// [0x1178f10] (217 bytes) gameswf::abc_def::clearScripts(void)
// int gameswf::abc_def::clearScripts(gameswf::abc_def *this);
// [0x1178ff0] (570 bytes) gameswf::abc_def::markUnusedMethods(gameswf::fixed_array<bool> &,gameswf::fixed_array<gameswf::LoadMethodType> &)
// int gameswf::abc_def::markUnusedMethods(int a1, uint32_t *a2, uint32_t *a3);
// [0x1179230] (546 bytes) gameswf::abc_def::clearUnusedClasses(gameswf::fixed_array<bool> const&)
// int gameswf::abc_def::clearUnusedClasses(uint32_t *a1, uint32_t *a2);
// [0x1179460] (313 bytes) gameswf::abc_def::clearUnusedMethods(void)
// void gameswf::abc_def::clearUnusedMethods(gameswf::abc_def *this);
// [0x11795a0] (2478 bytes) gameswf::abc_def::initializeTraits(gameswf::ASObject *,gameswf::ObjectInfo *)
// int gameswf::abc_def::initializeTraits(gameswf::abc_def *this, gameswf::ASObject *a2, gameswf::ObjectInfo *a3);
// [0x1179f50] (1296 bytes) gameswf::abc_def::createGlobalStringRemapping(void)
// int gameswf::abc_def::createGlobalStringRemapping(gameswf::abc_def *this);
// [0x117a460] (1032 bytes) gameswf::abc_def::readOptimized(gameswf::Stream *,gameswf::MovieDefinitionSub *)
// int gameswf::abc_def::readOptimized(gameswf::abc_def *this, gameswf::Stream *a2);
// [0x117a870] (864 bytes) gameswf::abc_def::read(gameswf::Stream *,gameswf::MovieDefinitionSub *)
// int gameswf::abc_def::read(gameswf::abc_def *this, gameswf::Stream *a2);
// [0x117ad90] (3166 bytes) gameswf::abc_def::initializeTraitsMapping(gameswf::ObjectInfo *,gameswf::ObjectInfo *,bool)
// int gameswf::abc_def::initializeTraitsMapping( gameswf::abc_def *this, gameswf::ObjectInfo *a2, gameswf::ObjectInfo *a3, bool a4);
// [0x117b9f0] (213 bytes) gameswf::abc_def::initializeObjectInfo(gameswf::ObjectInfo *,gameswf::ObjectInfo *)
// uint32_t *gameswf::abc_def::initializeObjectInfo( gameswf::abc_def *this, gameswf::ObjectInfo *a2, gameswf::ObjectInfo *a3);
// [0x117bad0] (417 bytes) gameswf::abc_def::initializeObjectInfo(gameswf::ObjectInfo *,gameswf::ASClass *)
// uint32_t *gameswf::abc_def::initializeObjectInfo( gameswf::abc_def *this, gameswf::ObjectInfo *a2, gameswf::ASClass *a3);
