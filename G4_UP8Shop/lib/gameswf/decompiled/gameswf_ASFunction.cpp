#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASFunction.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASFunction::is  (binary VA: 0x10797f0)
// Original: gameswf::ASFunction::is
// ----------------------------------------------------------------------------
bool gameswf::ASFunction::is(gameswf::ASFunction::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 5 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFunction::typeof  (binary VA: 0x1079810)
// Original: gameswf::ASFunction::_typeof
// ----------------------------------------------------------------------------
const char * gameswf::ASFunction::typeof()
{
  return "function";
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFunction::Destroy  (binary VA: 0x10798c0)
// Original: gameswf::ASFunction::~ASFunction
// ----------------------------------------------------------------------------
void gameswf::ASFunction::Destroy(gameswf::ASFunction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFunction::toString  (binary VA: 0x1079920)
// Original: gameswf::ASFunction::toString
// ----------------------------------------------------------------------------
char * gameswf::ASFunction::toString(gameswf::ASFunction::Self *self)
{
  snprintf(g4_fnstatic_6d9389d40e, 0x32u, "<function 0x%p>", self);
  return (char *)(uintptr_t)(g4_fnstatic_6d9389d40e);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASFunction::Destroy_ea1079aa0  (binary VA: 0x1079aa0)
// Original: gameswf::ASFunction::~ASFunction
// ----------------------------------------------------------------------------
void gameswf::ASFunction::Destroy_ea1079aa0(gameswf::ASFunction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


