#include "Core/Utils/DecompTypes.h"
#include "glf_GlobalsBase.h"

// ----------------------------------------------------------------------------
// Function: glf::GlobalsBase::Destroy  (binary VA: 0xc71ce0)
// Original: glf::GlobalsBase::~GlobalsBase
// ----------------------------------------------------------------------------
void glf::GlobalsBase::Destroy(glf::GlobalsBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D500);
  glf::SpinLock::Destroy((glf::GlobalsBase::Self *)((char *)self + 584));
  glf::FileLogger::Destroy((glf::GlobalsBase::Self *)((char *)self + 556));
  glf::EventManager::Destroy((glf::GlobalsBase::Self *)((char *)self + 424));
  glf::InputManager::Destroy((glf::GlobalsBase::Self *)((char *)self + 384));
  glf::Fs::Destroy((glf::GlobalsBase::Self *)((char *)self + 64));
  glf::DebugDisplay::Destroy((glf::GlobalsBase::Self *)((char *)self + 36));
  glf::PropertyMap::Destroy((glf::GlobalsBase::Self *)((char *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: glf::GlobalsBase::Destroy_eac71dc0  (binary VA: 0xc71dc0)
// Original: glf::GlobalsBase::~GlobalsBase
// ----------------------------------------------------------------------------
void glf::GlobalsBase::Destroy_eac71dc0(glf::GlobalsBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D500);
  glf::SpinLock::Destroy((glf::GlobalsBase::Self *)((char *)self + 584));
  glf::FileLogger::Destroy((glf::GlobalsBase::Self *)((char *)self + 556));
  glf::EventManager::Destroy((glf::GlobalsBase::Self *)((char *)self + 424));
  glf::InputManager::Destroy((glf::GlobalsBase::Self *)((char *)self + 384));
  glf::Fs::Destroy((glf::GlobalsBase::Self *)((char *)self + 64));
  glf::DebugDisplay::Destroy((glf::GlobalsBase::Self *)((char *)self + 36));
  glf::PropertyMap::Destroy((glf::GlobalsBase::Self *)((char *)self + 4));
  opDelete(self);
}


