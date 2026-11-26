#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASCppFunction.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASCppFunction.cpp
// Library: gameswf | Module: gameswf_ASCppFunction
// Binary Address Span: 0x109b2a0 .. 0x109c6a0 (6 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x109b2a0 (size: 29 bytes)
// Symbol:    _ZN7gameswf13ASCppFunctionclERKNS_12FunctionCallE
// Demangled: gameswf::ASCppFunction::operator()(gameswf::FunctionCall const&)
// ============================================================================
int (*gameswf::ASCppFunction::opCall(int a1, int a2))(int)
{
  int (*result)(int);

  result = *(int (**)(int))(a1 + 40);
  if ( result != nullptr )
    return (int (*)(int))result(a2);
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASCppFunction::Construct  (binary VA: 0x109c3c0)
// Original: gameswf::ASCppFunction::ASCppFunction
// ----------------------------------------------------------------------------
int gameswf::ASCppFunction::Construct(gameswf::ASObject::Self *a1, gameswf::Player::Self *a2, int a3)
{
  gameswf::ASObject::ASObject(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208E628);
  *((uint32_t *)a1 + 10) = a3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASCppFunction::is  (binary VA: 0x109c4b0)
// Original: gameswf::ASCppFunction::is
// ----------------------------------------------------------------------------
bool gameswf::ASCppFunction::is(gameswf::ASCppFunction::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 6 && a2 != 5 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASCppFunction::getMemberByName  (binary VA: 0x109c580)
// Original: gameswf::ASCppFunction::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASCppFunction::getMemberByName(gameswf::ASCppFunction::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  char builtin;
  int v4;

  builtin = gameswf::get_builtin(5, (int)(uintptr_t)(a2), a3);
  v4 = 1;
  if ( builtin == 0 )
    return gameswf::ASObject::getMemberByName(self, a2, a3);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASCppFunction::Destroy  (binary VA: 0x109c620)
// Original: gameswf::ASCppFunction::~ASCppFunction
// ----------------------------------------------------------------------------
void gameswf::ASCppFunction::Destroy(gameswf::ASCppFunction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASCppFunction::Destroy_ea109c6a0  (binary VA: 0x109c6a0)
// Original: gameswf::ASCppFunction::~ASCppFunction
// ----------------------------------------------------------------------------
void gameswf::ASCppFunction::Destroy_ea109c6a0(gameswf::ASCppFunction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


