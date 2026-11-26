#include "Core/Utils/DecompTypes.h"
#include "glf_Globals.h"

// ----------------------------------------------------------------------------
// Function: glf::Globals::Destroy  (binary VA: 0xc71ed0)
// Original: glf::Globals::~Globals
// ----------------------------------------------------------------------------
void glf::Globals::Destroy(glf::Globals::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D500);
  glf::SpinLock::Destroy((glf::Globals::Self *)((char *)self + 584));
  glf::FileLogger::Destroy((glf::Globals::Self *)((char *)self + 556));
  glf::EventManager::Destroy((glf::Globals::Self *)((char *)self + 424));
  glf::InputManager::Destroy((glf::Globals::Self *)((char *)self + 384));
  glf::Fs::Destroy((glf::Globals::Self *)((char *)self + 64));
  glf::DebugDisplay::Destroy((glf::Globals::Self *)((char *)self + 36));
  glf::PropertyMap::Destroy((glf::Globals::Self *)((char *)self + 4));
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Globals::Destroy_eac71ff0  (binary VA: 0xc71ff0)
// Original: glf::Globals::~Globals
// ----------------------------------------------------------------------------
void glf::Globals::Destroy_eac71ff0(glf::Globals::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D500);
  glf::SpinLock::Destroy((glf::Globals::Self *)((char *)self + 584));
  glf::FileLogger::Destroy((glf::Globals::Self *)((char *)self + 556));
  glf::EventManager::Destroy((glf::Globals::Self *)((char *)self + 424));
  glf::InputManager::Destroy((glf::Globals::Self *)((char *)self + 384));
  glf::Fs::Destroy((glf::Globals::Self *)((char *)self + 64));
  glf::DebugDisplay::Destroy((glf::Globals::Self *)((char *)self + 36));
  glf::PropertyMap::Destroy((glf::Globals::Self *)((char *)self + 4));
}


