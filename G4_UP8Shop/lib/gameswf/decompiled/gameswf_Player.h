#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_Player.h
// Library: gameswf | Module: gameswf_Player
// Binary Address Span: 0x10b5d50 .. 0x10bc710 (30 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10b5d50] (390 bytes) gameswf::Player::setFlashVars(gameswf::String const&)
// int gameswf::Player::setFlashVars(gameswf::Player *this, const gameswf::String *a2);
// [0x10b5ee0] (35 bytes) gameswf::Player::verboseAction(bool)
// uint8_t *gameswf::Player::verboseAction(gameswf::Player *this, bool a2);
// [0x10b5f10] (35 bytes) gameswf::Player::verboseParse(bool)
// void *gameswf::Player::verboseParse(gameswf::Player *this, bool a2);
// [0x10b5f40] (9 bytes) gameswf::Player::actionClear(void)
// void gameswf::Player::actionClear();
// [0x10b5f50] (12 bytes) gameswf::Player::getGlobal(void)const
// int gameswf::Player::getGlobal(gameswf::Player *this);
// [0x10b5f60] (12 bytes) gameswf::Player::getStage(void)const
// int gameswf::Player::getStage(gameswf::Player *this);
// [0x10b5f70] (129 bytes) gameswf::Player::getRoot(void)
// int gameswf::Player::getRoot(gameswf::Player *this);
// [0x10b6000] (9 bytes) gameswf::Player::notifyKeyEvent(gameswf::key::code,bool)
// void gameswf::Player::notifyKeyEvent();
// [0x10b6010] (199 bytes) gameswf::Player::setRoot(gameswf::Root *)
// gameswf *gameswf::Player::setRoot(gameswf::Player *this, gameswf::Root *a2);
// [0x10b60e0] (31 bytes) gameswf::Player::getWorkdir(void)const
// char *gameswf::Player::getWorkdir(gameswf::Player *this);
// [0x10b6100] (142 bytes) gameswf::Player::setWorkdir(char const*)
// void gameswf::Player::setWorkdir(gameswf::Player *this, gameswf *s);
// [0x10b6190] (14 bytes) gameswf::Player::getChardefLibrary(void)
// char *gameswf::Player::getChardefLibrary(gameswf::Player *this);
// [0x10b61a0] (494 bytes) gameswf::Player::clearLibrary(void)
// int gameswf::Player::clearLibrary(gameswf::Player *this);
// [0x10b6390] (690 bytes) gameswf::Player::clearGarbage(unsigned long long)
// int gameswf::Player::clearGarbage(gameswf::Player *this, uint64_t a2);
// [0x10b6650] (50 bytes) gameswf::Player::clearGarbageWait(void)
// int gameswf::Player::clearGarbageWait(gameswf::Player *this);
// [0x10b6690] (79 bytes) gameswf::Player::setAsGarbage(void)
// int gameswf::Player::setAsGarbage(gameswf::Player *this);
// [0x10b66e0] (245 bytes) gameswf::Player::clearHeap(void)
// gameswf::RefCounted *gameswf::Player::clearHeap(gameswf::Player *this);
// [0x10b67e0] (108 bytes) gameswf::Player::createSpriteInstance(gameswf::MovieDefinitionSub *,gameswf::Character *,gameswf::Character *,int)
// gameswf::SpriteInstance *gameswf::Player::createSpriteInstance( gameswf::Player *this, gameswf::MovieDefinitionSub *a2, gameswf::Character *a3, gameswf::Character *a4, char *a5);
// [0x10b6850] (174 bytes) gameswf::Player::createGenericCharacter(gameswf::CharacterDef *,gameswf::Character *,int)
// int gameswf::Player::createGenericCharacter( gameswf::Player *this, gameswf::CharacterDef *a2, gameswf::Character *a3, int a4);
// [0x10b6900] (100 bytes) gameswf::Player::createEditTextCharacter(gameswf::EditTextCharacterDef *,gameswf::Character *,int)
// gameswf::EditTextCharacter *gameswf::Player::createEditTextCharacter( gameswf::Player *this, gameswf::EditTextCharacterDef *a2, gameswf::Character *a3, char *a4);
// [0x10b6970] (334 bytes) gameswf::Player::registerObject(gameswf::ASObject *)
// int gameswf::Player::registerObject(gameswf::Player *this, gameswf::ASObject *a2);
// [0x10b6ac0] (63 bytes) gameswf::Player::contains(gameswf::ASObject const*)
// int gameswf::Player::contains(gameswf::Player *this, const gameswf::ASObject *a2);
// [0x10b6b00] (56 bytes) gameswf::Player::notifyFSCommand(char const*,char const*)
// int gameswf::Player::notifyFSCommand(gameswf::RenderFX **this, char *a2, char *a3);
// [0x10b6cb0] (1121 bytes) gameswf::Player::~Player()
// void gameswf::Player::~Player(gameswf::Player *this);
// [0x10b7120] (56 bytes) gameswf::Player::~Player()
// void gameswf::Player::~Player(gameswf::Player *this);
// [0x10b7160] (264 bytes) gameswf::Player::unregisterObject(gameswf::ASObject *)
// void gameswf::Player::unregisterObject(gameswf::Player *this, gameswf::ASObject *a2);
// [0x10baf10] (973 bytes) gameswf::Player::createMovie(char const*)
// pthread_mutex_t **gameswf::Player::createMovie(gameswf::Player *this, gameswf *a2);
// [0x10bb2e0] (577 bytes) gameswf::Player::loadFile(char const*)
// gameswf::Player *gameswf::Player::loadFile(gameswf::Player *this, gameswf::Player *a2, gameswf *a3);
// [0x10bb740] (4037 bytes) gameswf::Player::actionInit(void)
// int gameswf::Player::actionInit(gameswf::Player *this);
// [0x10bc710] (1493 bytes) gameswf::Player::Player(gameswf::PlayerContext *)
// gameswf::Player *gameswf::Player::Player(gameswf::RefCounted **this, gameswf::PlayerContext *a2);
