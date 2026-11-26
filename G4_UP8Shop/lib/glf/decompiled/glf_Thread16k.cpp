#include "Core/Utils/DecompTypes.h"
#include "glf_Thread16k.h"

// ----------------------------------------------------------------------------
// Function: glf::Thread16k::Destroy  (binary VA: 0x113b820)
// Original: glf::Thread16k::~Thread16k
// ----------------------------------------------------------------------------
void glf::Thread16k::Destroy(pthread_t *self)
{
  *self = (pthread_t)((uint32_t)(uintptr_t)&off_2090058);
  glf::Thread::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Thread16k::Destroy_ea113b8a0  (binary VA: 0x113b8a0)
// Original: glf::Thread16k::~Thread16k
// ----------------------------------------------------------------------------
void glf::Thread16k::Destroy_ea113b8a0(pthread_t *self)
{
  *self = (pthread_t)((uint32_t)(uintptr_t)&off_2090058);
  glf::Thread::Destroy(self);
  opDelete(self);
}


