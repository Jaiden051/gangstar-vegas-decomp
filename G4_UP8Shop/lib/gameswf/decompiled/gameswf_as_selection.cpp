#include "Core/Utils/DecompTypes.h"
#include "gameswf_as_selection.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_as_selection.cpp
// Library: gameswf | Module: gameswf_as_selection
// Binary Address Span: 0x113dbb0 .. 0x113dd70 (4 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x113dbb0 (size: 67 bytes)
// Symbol:    _ZN7gameswf12as_selectionC2EPNS_6PlayerE
// Demangled: gameswf::as_selection::as_selection(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf12as_selectionC1EPNS_6PlayerE'
void (**gameswf::as_selection::as_selection(
        gameswf::as_selection::Self *self,
        gameswf::Player::Self *a2))(gameswf::as_selection::Self * self)
{
  gameswf::ASObject::ASObject(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090108);
  return (void (**)(gameswf::as_selection::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2090108));
}
// ----------------------------------------------------------------------------
// Function: gameswf::as_selection::is  (binary VA: 0x113dd20)
// Original: gameswf::as_selection::is
// ----------------------------------------------------------------------------
bool gameswf::as_selection::is(gameswf::as_selection::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 28 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::as_selection::Destroy  (binary VA: 0x113dd40)
// Original: gameswf::as_selection::~as_selection
// ----------------------------------------------------------------------------
void gameswf::as_selection::Destroy(gameswf::as_selection::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090108);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::as_selection::Destroy_ea113dd70  (binary VA: 0x113dd70)
// Original: gameswf::as_selection::~as_selection
// ----------------------------------------------------------------------------
void gameswf::as_selection::Destroy_ea113dd70(gameswf::as_selection::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090108);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


