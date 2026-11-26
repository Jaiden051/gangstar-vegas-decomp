#include "Core/Utils/DecompTypes.h"
#include "glf_SpecificGlobals.h"

// ----------------------------------------------------------------------------
// Function: glf::SpecificGlobals::Destroy  (binary VA: 0xc71e50)
// Original: glf::SpecificGlobals::~SpecificGlobals
// ----------------------------------------------------------------------------
void glf::SpecificGlobals::Destroy(glf::SpecificGlobals::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D500);
  glf::SpinLock::Destroy((glf::SpecificGlobals::Self *)((char *)self + 584));
  glf::FileLogger::Destroy((glf::SpecificGlobals::Self *)((char *)self + 556));
  glf::EventManager::Destroy((glf::SpecificGlobals::Self *)((char *)self + 424));
  glf::InputManager::Destroy((glf::SpecificGlobals::Self *)((char *)self + 384));
  glf::Fs::Destroy((glf::SpecificGlobals::Self *)((char *)self + 64));
  glf::DebugDisplay::Destroy((glf::SpecificGlobals::Self *)((char *)self + 36));
  glf::PropertyMap::Destroy((glf::SpecificGlobals::Self *)((char *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: glf::SpecificGlobals::Destroy_eac71f60  (binary VA: 0xc71f60)
// Original: glf::SpecificGlobals::~SpecificGlobals
// ----------------------------------------------------------------------------
void glf::SpecificGlobals::Destroy_eac71f60(glf::SpecificGlobals::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D500);
  glf::SpinLock::Destroy((glf::SpecificGlobals::Self *)((char *)self + 584));
  glf::FileLogger::Destroy((glf::SpecificGlobals::Self *)((char *)self + 556));
  glf::EventManager::Destroy((glf::SpecificGlobals::Self *)((char *)self + 424));
  glf::InputManager::Destroy((glf::SpecificGlobals::Self *)((char *)self + 384));
  glf::Fs::Destroy((glf::SpecificGlobals::Self *)((char *)self + 64));
  glf::DebugDisplay::Destroy((glf::SpecificGlobals::Self *)((char *)self + 36));
  glf::PropertyMap::Destroy((glf::SpecificGlobals::Self *)((char *)self + 4));
  opDelete(self);
}


