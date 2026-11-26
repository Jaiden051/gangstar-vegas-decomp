#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASEnvironment.h
// Library: gameswf | Module: gameswf_ASEnvironment
// Binary Address Span: 0x107a0e0 .. 0x1093ac0 (21 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x107a0e0] (330 bytes) gameswf::ASEnvironment::ASEnvironment(gameswf::Player *,int)
// gameswf::ASEnvironment *gameswf::ASEnvironment::ASEnvironment( gameswf::ASEnvironment *this, gameswf::Player *a2, unsigned int a3);
// [0x107a4b0] (460 bytes) gameswf::ASEnvironment::~ASEnvironment()
// void gameswf::ASEnvironment::~ASEnvironment(gameswf::ASEnvironment *this);
// [0x1091930] (53 bytes) gameswf::ASEnvironment::get_target(void)const
// int gameswf::ASEnvironment::get_target(gameswf::ASEnvironment *this);
// [0x1091970] (92 bytes) gameswf::ASEnvironment::setTarget(gameswf::Character *)
// gameswf::RefCounted *gameswf::ASEnvironment::setTarget(gameswf::ASEnvironment *this, gameswf::Character *a2);
// [0x10919d0] (1093 bytes) gameswf::ASEnvironment::addLocal(gameswf::String const&,gameswf::ASValue const&)
// int gameswf::ASEnvironment::addLocal( gameswf::ASEnvironment *this, const gameswf::String *a2, const gameswf::ASValue *a3);
// [0x1091e20] (293 bytes) gameswf::ASEnvironment::find_local(gameswf::String const&,bool)const
// int gameswf::ASEnvironment::find_local(gameswf::ASEnvironment *this, const gameswf::String *a2, bool a3);
// [0x1091f50] (128 bytes) gameswf::ASEnvironment::declareLocal(gameswf::String const&)
// int gameswf::ASEnvironment::declareLocal(gameswf::ASEnvironment *this, const gameswf::String *a2);
// [0x1091fd0] (130 bytes) gameswf::ASEnvironment::setLocal(gameswf::String const&,gameswf::ASValue const&)
// int gameswf::ASEnvironment::setLocal( gameswf::ASEnvironment *this, const gameswf::String *a2, const gameswf::ASValue *a3);
// [0x1092060] (495 bytes) gameswf::ASEnvironment::setVariableRaw(gameswf::String const&,gameswf::ASValue const&,gameswf::array<gameswf::WithStackEntry> const&)
// int gameswf::ASEnvironment::setVariableRaw( gameswf::ASEnvironment *a1, gameswf::String *a2, gameswf::ASValue *a3, uint32_t *a4);
// [0x1092250] (856 bytes) gameswf::ASEnvironment::getVariableRaw(gameswf::String const&,gameswf::array<gameswf::WithStackEntry> const&,int *)const
// gameswf::ASValue *gameswf::ASEnvironment::getVariableRaw( gameswf::ASValue *a1, gameswf::ASEnvironment *a2, gameswf::String *a3, uint32_t *a4, int *a5);
// [0x10925b0] (1046 bytes) gameswf::ASEnvironment::parsePath(gameswf::String const&,gameswf::String*,gameswf::String*)
// int gameswf::ASEnvironment::parsePath(gameswf **this, gameswf **a2, gameswf **a3);
// [0x10929d0] (54 bytes) gameswf::ASEnvironment::findTarget(gameswf::ASValue const&)const
// int gameswf::ASEnvironment::findTarget(gameswf::ASObject **this, const gameswf::ASValue *a2);
// [0x1092a10] (54 bytes) gameswf::ASEnvironment::findTarget(char const*)const
// int gameswf::ASEnvironment::findTarget(gameswf::ASObject **this, char *s);
// [0x1092a50] (832 bytes) gameswf::ASEnvironment::setVariable(gameswf::String const&,gameswf::ASValue const&,gameswf::array<gameswf::WithStackEntry> const&)
// int gameswf::ASEnvironment::setVariable( gameswf::ASEnvironment *a1, gameswf::ASEnvironment *a2, gameswf::ASValue *a3, uint32_t *a4);
// [0x1092d90] (1324 bytes) gameswf::ASEnvironment::getVariable(gameswf::String const&,gameswf::array<gameswf::WithStackEntry> const&,int *)const
// gameswf::ASValue *gameswf::ASEnvironment::getVariable( gameswf::ASValue *a1, gameswf::ASEnvironment *a2, gameswf::String *a3, uint32_t *a4, int *a5);
// [0x10932c0] (662 bytes) gameswf::ASEnvironment::setTarget(gameswf::ASValue &,gameswf::Character *)
// gameswf::RefCounted *gameswf::ASEnvironment::setTarget( gameswf::ASEnvironment *this, gameswf::ASValue *a2, gameswf::Character *a3);
// [0x1093560] (132 bytes) gameswf::ASEnvironment::setMember(gameswf::StringI const&,gameswf::ASValue const&)
// int gameswf::ASEnvironment::setMember( gameswf::ASEnvironment *this, const gameswf::StringI *a2, const gameswf::ASValue *a3);
// [0x10935f0] (132 bytes) gameswf::ASEnvironment::getMember(gameswf::StringI const&,gameswf::ASValue *)
// int gameswf::ASEnvironment::getMember( gameswf::ASEnvironment *this, const gameswf::StringI *a2, gameswf::ASValue *a3);
// [0x1093680] (422 bytes) gameswf::ASEnvironment::thisAlive(void)
// uint32_t *gameswf::ASEnvironment::thisAlive(gameswf::ASEnvironment *this);
// [0x1093830] (647 bytes) gameswf::ASEnvironment::clearRefs(int)
// int gameswf::ASEnvironment::clearRefs(gameswf::RefCounted **this, int a2);
// [0x1093ac0] (2319 bytes) gameswf::ASEnvironment::loadFile(char const*,gameswf::ASValue const&)
// gameswf *gameswf::ASEnvironment::loadFile(gameswf::ASObject **this, gameswf *a2, const gameswf::ASValue *a3);
