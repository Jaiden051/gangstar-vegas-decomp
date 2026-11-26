#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_hash_int_gameswf.h
// Library: gameswf | Module: gameswf_hash_int_gameswf
// Binary Address Span: 0x108cd60 .. 0x10eab30 (29 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x108cd60] (237 bytes) gameswf::hash<int,gameswf::inst_info_avm2,gameswf::fixed_size_hash<int>>::~hash()
// void gameswf::hash<int,gameswf::inst_info_avm2,gameswf::fixed_size_hash<int>>::~hash(gameswf **this);
// [0x108cf40] (661 bytes) gameswf::hash<int,gameswf::inst_info_avm2,gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// gameswf *gameswf::hash<int,gameswf::inst_info_avm2,gameswf::fixed_size_hash<int>>::set_raw_capacity( gameswf **this, int a2);
// [0x108d1e0] (2418 bytes) gameswf::hash<int,gameswf::inst_info_avm2,gameswf::fixed_size_hash<int>>::add(int const&,gameswf::inst_info_avm2 const&)
// int gameswf::hash<int,gameswf::inst_info_avm2,gameswf::fixed_size_hash<int>>::add( gameswf **this, const int *a2, const gameswf::inst_info_avm2 *a3);
// [0x10a4e80] (119 bytes) gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::clear(void)
// void gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::clear(gameswf **this);
// [0x10a4f00] (119 bytes) gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::clear(void)
// void gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::clear(gameswf **this);
// [0x10a4f80] (180 bytes) gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::find_index(int const&)const
// int gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::find_index( gameswf::hash<int, gameswf::Matrix *, gameswf::fixed_size_hash<int>> *this, const int *a2);
// [0x10a5040] (180 bytes) gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::find_index(int const&)const
// int gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::find_index( gameswf::hash<int, gameswf::CxForm *, gameswf::fixed_size_hash<int>> *this, const int *a2);
// [0x10a5c80] (871 bytes) gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// void gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::set_raw_capacity( gameswf **this, int a2);
// [0x10a5ff0] (465 bytes) gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::add(int const&,gameswf::Matrix * const&)
// gameswf::Matrix *gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::add( gameswf **this, const int *a2, gameswf::Matrix **a3);
// [0x10a61d0] (871 bytes) gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// void gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::set_raw_capacity( gameswf **this, int a2);
// [0x10a6540] (465 bytes) gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::add(int const&,gameswf::CxForm * const&)
// gameswf::CxForm *gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::add( gameswf **this, const int *a2, gameswf::CxForm **a3);
// [0x10aee10] (135 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::fixed_size_hash<int>>::clear(void)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::fixed_size_hash<int>>::clear( gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef>, gameswf::fixed_size_hash<int>> **this);
// [0x10aeea0] (135 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::Font>,gameswf::fixed_size_hash<int>>::clear(void)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::Font>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::Font>,gameswf::fixed_size_hash<int>>::clear( gameswf::hash<int, gameswf::smart_ptr<gameswf::Font>, gameswf::fixed_size_hash<int>> **this);
// [0x10aef30] (135 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::BitmapCharacterDef>,gameswf::fixed_size_hash<int>>::clear(void)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::BitmapCharacterDef>,gameswf::fixed_size_hash<int>>::clear( gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef>, gameswf::fixed_size_hash<int>> **this);
// [0x10aefc0] (135 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::SoundSample>,gameswf::fixed_size_hash<int>>::clear(void)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::SoundSample>,gameswf::fixed_size_hash<int>>::clear( gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample>, gameswf::fixed_size_hash<int>> **this);
// [0x10af270] (164 bytes) gameswf::hash<int,gameswf::String,gameswf::fixed_size_hash<int>>::clear(void)
// gameswf *gameswf::hash<int,gameswf::String,gameswf::fixed_size_hash<int>>::clear( gameswf::hash<int, gameswf::String, gameswf::fixed_size_hash<int>> *this);
// [0x10af500] (1301 bytes) gameswf::hash<int,gameswf::String,gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// gameswf *gameswf::hash<int,gameswf::String,gameswf::fixed_size_hash<int>>::set_raw_capacity( gameswf::hash<int, gameswf::String, gameswf::fixed_size_hash<int>> *this, int a2);
// [0x10afa20] (521 bytes) gameswf::hash<int,gameswf::String,gameswf::fixed_size_hash<int>>::add(int const&,gameswf::String const&)
// void gameswf::hash<int,gameswf::String,gameswf::fixed_size_hash<int>>::add( int **this, const int *a2, const gameswf::String *a3);
// [0x10afc30] (348 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::fixed_size_hash<int>>::set_raw_capacity( gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef>, gameswf::fixed_size_hash<int>> **this, int a2);
// [0x10afd90] (545 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::fixed_size_hash<int>>::add(int const&,gameswf::smart_ptr<gameswf::CharacterDef> const&)
// gameswf::RefCounted *gameswf::hash<int,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::fixed_size_hash<int>>::add( gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef>, gameswf::fixed_size_hash<int>> **this, const int *a2, gameswf::RefCounted **a3);
// [0x10affc0] (348 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::Font>,gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::Font>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::Font>,gameswf::fixed_size_hash<int>>::set_raw_capacity( gameswf::hash<int, gameswf::smart_ptr<gameswf::Font>, gameswf::fixed_size_hash<int>> **this, int a2);
// [0x10b0120] (545 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::Font>,gameswf::fixed_size_hash<int>>::add(int const&,gameswf::smart_ptr<gameswf::Font> const&)
// gameswf::RefCounted *gameswf::hash<int,gameswf::smart_ptr<gameswf::Font>,gameswf::fixed_size_hash<int>>::add( gameswf::hash<int, gameswf::smart_ptr<gameswf::Font>, gameswf::fixed_size_hash<int>> **this, const int *a2, gameswf::RefCounted **a3);
// [0x10b0350] (348 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::BitmapCharacterDef>,gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::BitmapCharacterDef>,gameswf::fixed_size_hash<int>>::set_raw_capacity( gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef>, gameswf::fixed_size_hash<int>> **this, int a2);
// [0x10b04b0] (545 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::BitmapCharacterDef>,gameswf::fixed_size_hash<int>>::add(int const&,gameswf::smart_ptr<gameswf::BitmapCharacterDef> const&)
// gameswf::RefCounted *gameswf::hash<int,gameswf::smart_ptr<gameswf::BitmapCharacterDef>,gameswf::fixed_size_hash<int>>::add( gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef>, gameswf::fixed_size_hash<int>> **a1, uint8_t *a2, gameswf::RefCounted **a3);
// [0x10b06e0] (348 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::SoundSample>,gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::SoundSample>,gameswf::fixed_size_hash<int>>::set_raw_capacity( gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample>, gameswf::fixed_size_hash<int>> **this, int a2);
// [0x10b0840] (545 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::SoundSample>,gameswf::fixed_size_hash<int>>::add(int const&,gameswf::smart_ptr<gameswf::SoundSample> const&)
// gameswf::RefCounted *gameswf::hash<int,gameswf::smart_ptr<gameswf::SoundSample>,gameswf::fixed_size_hash<int>>::add( gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample>, gameswf::fixed_size_hash<int>> **a1, uint8_t *a2, gameswf::RefCounted **a3);
// [0x10ea940] (135 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::ASFunction>,gameswf::fixed_size_hash<int>>::clear(void)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::ASFunction>,gameswf::fixed_size_hash<int>>::clear( gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction>, gameswf::fixed_size_hash<int>> **this);
// [0x10ea9d0] (348 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::ASFunction>,gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction>, gameswf::fixed_size_hash<int>> *gameswf::hash<int,gameswf::smart_ptr<gameswf::ASFunction>,gameswf::fixed_size_hash<int>>::set_raw_capacity( gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction>, gameswf::fixed_size_hash<int>> **this, int a2);
// [0x10eab30] (545 bytes) gameswf::hash<int,gameswf::smart_ptr<gameswf::ASFunction>,gameswf::fixed_size_hash<int>>::add(int const&,gameswf::smart_ptr<gameswf::ASFunction> const&)
// gameswf::RefCounted *gameswf::hash<int,gameswf::smart_ptr<gameswf::ASFunction>,gameswf::fixed_size_hash<int>>::add( gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction>, gameswf::fixed_size_hash<int>> **a1, uint8_t *a2, gameswf::RefCounted **a3);
