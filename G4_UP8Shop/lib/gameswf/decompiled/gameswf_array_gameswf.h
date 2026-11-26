#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_array_gameswf.h
// Library: gameswf | Module: gameswf_array_gameswf
// Binary Address Span: 0x106dcb0 .. 0x118ab60 (33 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x106dcb0] (256 bytes) gameswf::array<gameswf::StringI>::~array()
// void gameswf::array<gameswf::StringI>::~array(gameswf::array<gameswf::StringI> *this);
// [0x107a2b0] (186 bytes) gameswf::array<gameswf::ASValue>::reserve(int)
// void *gameswf::array<gameswf::ASValue>::reserve(gameswf::array<gameswf::ASValue> *this, int a2);
// [0x107a370] (119 bytes) void gameswf::array<gameswf::ASValue>::push_back<gameswf::ASValue>(gameswf::ASValue const&)
// void gameswf::array<gameswf::ASValue>::push_back<gameswf::ASValue>( gameswf::array<gameswf::ASValue> *this, const gameswf::ASValue *a2);
// [0x107a3f0] (180 bytes) gameswf::array<gameswf::ASValue>::resize(int)
// int gameswf::array<gameswf::ASValue>::resize(gameswf::array<gameswf::ASValue> *this, int a2);
// [0x107a680] (229 bytes) void gameswf::array<gameswf::smart_ptr<gameswf::ASObject>>::push_back<gameswf::ASObject*>(gameswf::ASObject* const&)
// void gameswf::array<gameswf::smart_ptr<gameswf::ASObject>>::push_back<gameswf::ASObject*>( gameswf::array<gameswf::smart_ptr<gameswf::ASObject>> *this, gameswf::RefCounted **a2);
// [0x107a970] (119 bytes) void gameswf::array<gameswf::ASValue>::push_back<bool>(bool const&)
// void gameswf::array<gameswf::ASValue>::push_back<bool>(gameswf::array<gameswf::ASValue> *this, const bool *a2);
// [0x107ac30] (167 bytes) gameswf::array<gameswf::smart_ptr<gameswf::ASObject>>::reserve(int)
// void *gameswf::array<gameswf::smart_ptr<gameswf::ASObject>>::reserve( gameswf::array<gameswf::smart_ptr<gameswf::ASObject>> *this, int a2);
// [0x107ace0] (278 bytes) gameswf::array<gameswf::smart_ptr<gameswf::ASObject>>::resize(int)
// int gameswf::array<gameswf::smart_ptr<gameswf::ASObject>>::resize( gameswf::array<gameswf::smart_ptr<gameswf::ASObject>> *this, int a2);
// [0x1082230] (214 bytes) gameswf::array<gameswf::Character *>::resize(int)
// int gameswf::array<gameswf::Character *>::resize(gameswf::array<gameswf::Character *> *this, int a2);
// [0x10a4dd0] (167 bytes) gameswf::array<gameswf::ASValue>::~array()
// void gameswf::array<gameswf::ASValue>::~array(gameswf::array<gameswf::ASValue> *this);
// [0x10bcd90] (216 bytes) gameswf::array<gameswf::String>::~array()
// void gameswf::array<gameswf::String>::~array(gameswf::array<gameswf::String> *this);
// [0x10bd2c0] (384 bytes) gameswf::array<gameswf::array<char>>::resize(int)
// int gameswf::array<gameswf::array<char>>::resize(gameswf::array<gameswf::array<char>> *this, int a2);
// [0x10cab40] (253 bytes) gameswf::array<gameswf::BufferedRenderer::Batch>::resize(int)
// void gameswf::array<gameswf::BufferedRenderer::Batch>::resize( gameswf::array<gameswf::BufferedRenderer::Batch> *this, int a2);
// [0x10ce590] (261 bytes) gameswf::array<gameswf::Vertex>::resize(int)
// void gameswf::array<gameswf::Vertex>::resize(gameswf::array<gameswf::Vertex> *this, int a2);
// [0x10d10a0] (330 bytes) gameswf::array<gameswf::render_handler_glitch::PostProcessChain>::resize(int)
// void gameswf::array<gameswf::render_handler_glitch::PostProcessChain>::resize( gameswf::array<gameswf::render_handler_glitch::PostProcessChain> *this, int a2);
// [0x10da710] (167 bytes) gameswf::array<gameswf::Character *>::reserve(int)
// void *gameswf::array<gameswf::Character *>::reserve(gameswf::array<gameswf::Character *> *this, int a2);
// [0x10e9cf0] (877 bytes) gameswf::array<gameswf::Path>::operator=(gameswf::array<gameswf::Path> const&)
// void gameswf::array<gameswf::Path>::operator=( gameswf::array<gameswf::Path> *this, const gameswf::array<gameswf::Path> *a2);
// [0x10ea830] (269 bytes) gameswf::array<gameswf::Filter>::resize(int)
// void gameswf::array<gameswf::Filter>::resize(gameswf::array<gameswf::Filter> *this, int a2);
// [0x10f6f70] (221 bytes) void gameswf::array<gameswf::Point>::push_back<gameswf::Point>(gameswf::Point const&)
// void gameswf::array<gameswf::Point>::push_back<gameswf::Point>( gameswf::array<gameswf::Point> *this, const gameswf::Point *a2);
// [0x10f7050] (222 bytes) gameswf::array<gameswf::Point>::resize(int)
// int gameswf::array<gameswf::Point>::resize(gameswf::array<gameswf::Point> *this, int a2);
// [0x1108420] (313 bytes) gameswf::array<gameswf::Glyph>::resize(int)
// void gameswf::array<gameswf::Glyph>::resize(gameswf::array<gameswf::Glyph> *this, int a2);
// [0x1108560] (592 bytes) gameswf::array<gameswf::TextGlyphRecord>::resize(int)
// void gameswf::array<gameswf::TextGlyphRecord>::resize(gameswf::array<gameswf::TextGlyphRecord> *this, int a2);
// [0x1108a40] (325 bytes) void gameswf::array<gameswf::TextAttributes>::push_back<gameswf::TextAttributes>(gameswf::TextAttributes const&)
// char *gameswf::array<gameswf::TextAttributes>::push_back<gameswf::TextAttributes>(int a1, int a2);
// [0x1108b90] (234 bytes) gameswf::array<gameswf::html_reader::LeftToRightInfo>::resize(int)
// int gameswf::array<gameswf::html_reader::LeftToRightInfo>::resize( gameswf::array<gameswf::html_reader::LeftToRightInfo> *this, int a2);
// [0x1108c80] (822 bytes) gameswf::array<gameswf::TextGlyphRecord>::append(gameswf::array<gameswf::TextGlyphRecord> const&)
// int gameswf::array<gameswf::TextGlyphRecord>::append( gameswf::array<gameswf::TextGlyphRecord> *this, const gameswf::array<gameswf::TextGlyphRecord> *a2);
// [0x1109940] (357 bytes) gameswf::array<gameswf::TextAttributes>::resize(int)
// void gameswf::array<gameswf::TextAttributes>::resize(gameswf::array<gameswf::TextAttributes> *this, int a2);
// [0x1109b50] (229 bytes) gameswf::array<gameswf::Glyph>::operator=(gameswf::array<gameswf::Glyph> const&)
// void gameswf::array<gameswf::Glyph>::operator=( gameswf::array<gameswf::Glyph> *this, const gameswf::array<gameswf::Glyph> *a2);
// [0x11633a0] (379 bytes) gameswf::array<gameswf::Transform>::resize(int)
// int gameswf::array<gameswf::Transform>::resize(gameswf::array<gameswf::Transform> *this, int a2);
// [0x1163990] (167 bytes) gameswf::array<gameswf::BlendMode::id>::reserve(int)
// void *gameswf::array<gameswf::BlendMode::id>::reserve(gameswf::array<gameswf::BlendMode::id> *this, int a2);
// [0x116b590] (341 bytes) gameswf::array<gameswf::ASEventDispatcher::Entry>::resize(int)
// int gameswf::array<gameswf::ASEventDispatcher::Entry>::resize( gameswf::array<gameswf::ASEventDispatcher::Entry> *this, int a2);
// [0x116b6f0] (170 bytes) gameswf::array<gameswf::ASEventDispatcher::Entry>::remove(int)
// void *gameswf::array<gameswf::ASEventDispatcher::Entry>::remove( gameswf::array<gameswf::ASEventDispatcher::Entry> *this, int a2);
// [0x116b7a0] (169 bytes) gameswf::array<gameswf::ASEventDispatcher::Entry>::operator=(gameswf::array<gameswf::ASEventDispatcher::Entry> const&)
// int gameswf::array<gameswf::ASEventDispatcher::Entry>::operator=( gameswf::array<gameswf::ASEventDispatcher::Entry> *this, const gameswf::array<gameswf::ASEventDispatcher::Entry> *a2);
// [0x118ab60] (436 bytes) gameswf::array<gameswf::Font::zone_record>::resize(int)
// void gameswf::array<gameswf::Font::zone_record>::resize( gameswf::array<gameswf::Font::zone_record> *this, int a2);
