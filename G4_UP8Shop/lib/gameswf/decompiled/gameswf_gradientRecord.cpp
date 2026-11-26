#include "Core/Utils/DecompTypes.h"
#include "gameswf_gradientRecord.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_gradientRecord.cpp
// Library: gameswf | Module: gameswf_gradientRecord
// Binary Address Span: 0x10ed8e0 .. 0x10ed9f0 (2 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x10ed8e0 (size: 24 bytes)
// Symbol:    _ZN7gameswf14gradientRecordC1Ev
// Demangled: gameswf::gradientRecord::gradientRecord(void)
// ============================================================================
// Alternative name is '_ZN7gameswf14gradientRecordC2Ev'
struct gameswf::gradientRecord::Self *gameswf::gradientRecord::gradientRecord(gameswf::gradientRecord::Self *self)
{
  *(uint8_t *)self = 0;
  *((uint8_t *)self + 1) = -1;
  *((uint8_t *)self + 2) = -1;
  *((uint8_t *)self + 3) = -1;
  *((uint8_t *)self + 4) = -1;
  return self;
}
// ----------------------------------------------------------------------------
// Function: gameswf::gradientRecord::read  (binary VA: 0x10ed9f0)
// Original: gameswf::gradientRecord::read
// ----------------------------------------------------------------------------
int gameswf::gradientRecord::read(gameswf::gradientRecord::Self *self, gameswf::Stream::Self *a2, int a3)
{
  *(uint8_t *)self = gameswf::Stream::readU8(a2);
  return gameswf::Color::read((gameswf::gradientRecord::Self *)((char *)self + 1), a2, a3);
}


