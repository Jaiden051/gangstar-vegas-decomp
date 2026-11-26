#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_DisplayList.h
// Library: gameswf | Module: gameswf_DisplayList
// Binary Address Span: 0x108dc00 .. 0x1090870 (22 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x108dc00] (218 bytes) gameswf::DisplayList::find_display_index(int)
// int gameswf::DisplayList::find_display_index(gameswf::DisplayList *this, int a2);
// [0x108dce0] (103 bytes) gameswf::DisplayList::get_display_index(int)
// int gameswf::DisplayList::get_display_index(gameswf::DisplayList *this, int a2);
// [0x108dd50] (70 bytes) gameswf::DisplayList::getCharacterAtDepth(int)
// int gameswf::DisplayList::getCharacterAtDepth(gameswf::DisplayList *this, int a2);
// [0x108dda0] (224 bytes) gameswf::DisplayList::getCharacterByName(gameswf::String const&)
// int gameswf::DisplayList::getCharacterByName(gameswf::DisplayList *this, const gameswf::String *a2);
// [0x108de80] (51 bytes) gameswf::DisplayList::getIndexOf(gameswf::Character const*)
// int gameswf::DisplayList::getIndexOf(gameswf::DisplayList *this, const gameswf::Character *a2);
// [0x108dec0] (1065 bytes) gameswf::DisplayList::remove(int)
// int gameswf::DisplayList::remove( gameswf::DisplayList *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, gameswf::RefCounted *a10, int a11, int a12, int a13, int a14, int a15, int a16, int16_t a17);
// [0x108e2f0] (1570 bytes) gameswf::DisplayList::addDisplayObject(gameswf::Character *,int,bool,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// int gameswf::DisplayList::addDisplayObject( gameswf::DisplayList *this, gameswf::Character *a2, int a3, bool a4, const gameswf::CxForm *a5, const gameswf::Matrix *a6, const gameswf::Effect *a7, float a8, uint16_t a9, int a10, int a11, int a12, int a13, int a14, int a15, char a16, int a17, int a18, gameswf *a19, int a20);
// [0x108e920] (489 bytes) gameswf::DisplayList::moveDisplayObject(int,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// int gameswf::DisplayList::moveDisplayObject( gameswf::DisplayList *this, char *a2, const gameswf::CxForm *a3, const gameswf::Matrix *a4, const gameswf::Effect *a5, float a6);
// [0x108eb10] (3238 bytes) gameswf::DisplayList::replaceDisplayObject(gameswf::Character *,int,gameswf::CxForm const*,gameswf::Matrix const*,gameswf::Effect const*,float,unsigned short)
// gameswf *gameswf::DisplayList::replaceDisplayObject( gameswf::DisplayList *this, gameswf::Character **a2, unsigned int a3, const gameswf::CxForm *a4, const gameswf::Matrix *a5, const gameswf::Effect *a6, float a7, uint16_t a8);
// [0x108f7c0] (72 bytes) gameswf::DisplayList::removeDisplayObject(gameswf::Character *)
// 0x108f7c0 gameswf::DisplayList::removeDisplayObject(gameswf::Character *)
// [0x108f810] (237 bytes) gameswf::DisplayList::removeDisplayObject(int,int)
// 0x108f810 gameswf::DisplayList::removeDisplayObject(int,int)
// [0x108f900] (62 bytes) gameswf::DisplayList::clear(void)
// 0x108f900 gameswf::DisplayList::clear(void)
// [0x108f940] (775 bytes) gameswf::DisplayList::construct(void)
// void gameswf::DisplayList::construct(gameswf::DisplayList *this);
// [0x108fc50] (834 bytes) gameswf::DisplayList::advance(float)
// int gameswf::DisplayList::advance(gameswf::DisplayList *this, float a2);
// [0x108ffa0] (692 bytes) gameswf::DisplayList::display(bool,bool)
// 0x108ffa0 gameswf::DisplayList::display(bool,bool)
// [0x1090260] (133 bytes) gameswf::DisplayList::clearUnaffected(gameswf::array<int> &)
// 0x1090260 gameswf::DisplayList::clearUnaffected(gameswf::array<int> &)
// [0x10902f0] (98 bytes) gameswf::DisplayList::clearAddedByPlayList(void)
// 0x10902f0 gameswf::DisplayList::clearAddedByPlayList(void)
// [0x1090360] (277 bytes) gameswf::DisplayList::swap_characters(gameswf::Character *,gameswf::Character *)
// int gameswf::DisplayList::swap_characters( gameswf::DisplayList *this, gameswf::Character *a2, gameswf::Character *a3);
// [0x1090480] (517 bytes) gameswf::DisplayList::change_character_depth(gameswf::Character *,int)
// int gameswf::DisplayList::change_character_depth(gameswf::DisplayList *this, gameswf::Character *a2, int a3);
// [0x1090690] (60 bytes) gameswf::DisplayList::getHighestDepth(void)
// int gameswf::DisplayList::getHighestDepth(gameswf::DisplayList *this);
// [0x10906d0] (403 bytes) gameswf::DisplayList::dump(gameswf::String &)
// int gameswf::DisplayList::dump(gameswf::DisplayList *this, gameswf::String *a2);
// [0x1090870] (1445 bytes) gameswf::DisplayList::getCharacterByNameI(gameswf::StringI const&)
// int gameswf::DisplayList::getCharacterByNameI(gameswf::DisplayList *this, const gameswf::StringI *a2);
