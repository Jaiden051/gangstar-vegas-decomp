#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_Stream.h
// Library: gameswf | Module: gameswf_Stream
// Binary Address Span: 0x10ec8b0 .. 0x10ed760 (25 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10ec8b0] (140 bytes) gameswf::Stream::Stream(gameswf::File *,bool)
// gameswf::Stream *gameswf::Stream::Stream(gameswf::Stream *this, gameswf::File *a2, bool a3);
// [0x10ec940] (201 bytes) gameswf::Stream::~Stream()
// void gameswf::Stream::~Stream(gameswf::Stream *this);
// [0x10eca10] (182 bytes) gameswf::Stream::readUInt(int)
// int gameswf::Stream::readUInt(gameswf::Stream *this, int a2);
// [0x10ecad0] (47 bytes) gameswf::Stream::readBool(void)
// bool gameswf::Stream::readBool(gameswf::Stream *this);
// [0x10ecb00] (75 bytes) gameswf::Stream::readSInt(int)
// int gameswf::Stream::readSInt(gameswf::Stream *this, int a2);
// [0x10ecb50] (81 bytes) gameswf::Stream::readFixed(void)
// long double gameswf::Stream::readFixed(gameswf::Stream *this);
// [0x10ecbb0] (99 bytes) gameswf::Stream::readFloat16(void)
// long double gameswf::Stream::readFloat16(gameswf::Stream *this);
// [0x10ecc20] (48 bytes) gameswf::Stream::readFloat(void)
// long double gameswf::Stream::readFloat(gameswf::Stream *this);
// [0x10ecc50] (48 bytes) gameswf::Stream::readDouble(void)
// long double gameswf::Stream::readDouble(gameswf::Stream *this);
// [0x10ecc80] (15 bytes) gameswf::Stream::align(void)
// gameswf::Stream *gameswf::Stream::align(gameswf::Stream *this);
// [0x10ecc90] (80 bytes) gameswf::Stream::readU8(void)
// int gameswf::Stream::readU8(gameswf::Stream *this);
// [0x10ecce0] (178 bytes) gameswf::Stream::readVU32(void)
// int gameswf::Stream::readVU32(gameswf::Stream *this);
// [0x10ecda0] (80 bytes) gameswf::Stream::readS8(void)
// int gameswf::Stream::readS8(gameswf::Stream *this);
// [0x10ecdf0] (80 bytes) gameswf::Stream::readU16(void)
// int gameswf::Stream::readU16(gameswf::Stream *this);
// [0x10ece40] (80 bytes) gameswf::Stream::readS16(void)
// int gameswf::Stream::readS16(gameswf::Stream *this);
// [0x10ece90] (79 bytes) gameswf::Stream::readU32(void)
// int gameswf::Stream::readU32(gameswf::Stream *this);
// [0x10ecee0] (79 bytes) gameswf::Stream::readS32(void)
// int gameswf::Stream::readS32(gameswf::Stream *this);
// [0x10ecf30] (549 bytes) gameswf::Stream::readString(gameswf::String *)
// char *gameswf::Stream::readString(gameswf **this, gameswf **a2);
// [0x10ed160] (633 bytes) gameswf::Stream::readStringWithLength(gameswf::String *)
// gameswf *gameswf::Stream::readStringWithLength(gameswf **this, gameswf **a2);
// [0x10ed3e0] (371 bytes) gameswf::Stream::readStringWithLength(int,gameswf::String *)
// int gameswf::Stream::readStringWithLength(gameswf::Stream *this, int a2, gameswf::String *a3);
// [0x10ed560] (24 bytes) gameswf::Stream::getPosition(void)
// int gameswf::Stream::getPosition(gameswf::Stream *this);
// [0x10ed580] (67 bytes) gameswf::Stream::setPosition(int)
// int gameswf::Stream::setPosition(gameswf::Stream *this, int a2);
// [0x10ed5d0] (15 bytes) gameswf::Stream::getTagEndPosition(void)
// int gameswf::Stream::getTagEndPosition(gameswf::Stream *this);
// [0x10ed5e0] (370 bytes) gameswf::Stream::openTag(void)
// int gameswf::Stream::openTag(gameswf **this);
// [0x10ed760] (229 bytes) gameswf::Stream::closeTag(void)
// int gameswf::Stream::closeTag(gameswf::Stream *this);
