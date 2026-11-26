#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_File.h
// Library: gameswf | Module: gameswf_File
// Binary Address Span: 0x1172e50 .. 0x1173580 (15 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1172e50] (67 bytes) gameswf::File::File(void *,int (*)(void *,int,void *),int (*)(void const*,int,void *),int (*)(int,void *),int (*)(void *),int (*)(void const*),bool (*)(void *),int (*)(void *))
// struct gameswf::File *gameswf::File::File( gameswf::File *this, void *a2, int (*a3)(void *, int, void *), int (*a4)(const void *, int, void *), int (*a5)(int, void *), int (*a6)(void *), int (*a7)(const void *), bool (*a8)(void *), int (*a9)(void *));
// [0x1172ea0] (104 bytes) gameswf::File::File(__sFILE *,bool)
// int gameswf::File::File(uint32_t *a1, int a2, char a3);
// [0x1172f10] (265 bytes) gameswf::File::File(char const*,char const*)
// gameswf::File *gameswf::File::File(gameswf::File *this, const char *a2, const char *a3);
// [0x1173020] (161 bytes) gameswf::File::File(gameswf::File::memory_buffer_enum)
// int (*gameswf::File::File(int *a1))(gameswf *a1);
// [0x11730d0] (185 bytes) gameswf::File::File(gameswf::File::memory_buffer_enum,int,void *)
// int (*gameswf::File::File(int *a1, int a2, int a3, int a4))(gameswf *a1);
// [0x1173190] (70 bytes) gameswf::File::close(void)
// int (*gameswf::File::close(gameswf::File *this))(uint32_t);
// [0x11731e0] (34 bytes) gameswf::File::~File()
// void gameswf::File::~File(gameswf::File *this);
// [0x1173210] (94 bytes) gameswf::File::copyFrom(gameswf::File*)
// int gameswf::File::copyFrom(gameswf::File *this, gameswf::File *a2);
// [0x1173270] (200 bytes) gameswf::File::copyTo(gameswf::MemBuf *)
// int gameswf::File::copyTo(gameswf::File *this, gameswf::MemBuf *a2);
// [0x1173340] (112 bytes) gameswf::File::readFully(gameswf::MemBuf *,int)
// int gameswf::File::readFully(gameswf::File *this, gameswf::MemBuf *a2, int a3);
// [0x11733b0] (67 bytes) gameswf::File::readFully(void *,int)
// void gameswf::File::readFully(gameswf::File *this, char *a2, int a3);
// [0x1173400] (146 bytes) gameswf::File::copyBytes(gameswf::File*,int)
// int gameswf::File::copyBytes(gameswf::File *this, gameswf::File *a2, int a3);
// [0x11734a0] (69 bytes) gameswf::File::writeString(char const*)
// int gameswf::File::writeString(gameswf::File *this, const char *a2);
// [0x11734f0] (132 bytes) gameswf::File::readString(char *,int,char)
// int gameswf::File::readString(gameswf::File *this, char *a2, int a3, uint8_t a4);
// [0x1173580] (183 bytes) gameswf::File::printf(char const*,...)
// int gameswf::File::printf(gameswf::File *this, char *format, ...);
