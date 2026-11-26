#include "Core/Utils/DecompTypes.h"
#include "gameswf_ScriptScope.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ScriptScope::is  (binary VA: 0x1079890)
// Original: gameswf::ScriptScope::is
// ----------------------------------------------------------------------------
bool gameswf::ScriptScope::is(gameswf::ScriptScope::Self *self, int a2)
{
  return a2 == 59;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ScriptScope::toString  (binary VA: 0x10798a0)
// Original: gameswf::ScriptScope::toString
// ----------------------------------------------------------------------------
const char * gameswf::ScriptScope::toString()
{
  return "[object ScriptScope]";
}

// ----------------------------------------------------------------------------
// Function: gameswf::ScriptScope::Destroy  (binary VA: 0x10798f0)
// Original: gameswf::ScriptScope::~ScriptScope
// ----------------------------------------------------------------------------
void gameswf::ScriptScope::Destroy(gameswf::ScriptScope::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E308);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ScriptScope::Destroy_ea1079a50  (binary VA: 0x1079a50)
// Original: gameswf::ScriptScope::~ScriptScope
// ----------------------------------------------------------------------------
void gameswf::ScriptScope::Destroy_ea1079a50(gameswf::ScriptScope::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E308);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


