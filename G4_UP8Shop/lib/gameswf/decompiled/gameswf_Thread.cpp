#include "Core/Utils/DecompTypes.h"
#include "gameswf_Thread.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Thread::Run  (binary VA: 0x113b7b0)
// Original: gameswf::Thread::Run
// ----------------------------------------------------------------------------
int gameswf::Thread::Run(gameswf::Thread::Self *self)
{
  return (*((int (**)(uint32_t))self + 8))(*((uint32_t *)self + 9));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Thread::Destroy  (binary VA: 0x113b8f0)
// Original: gameswf::Thread::Destroy
// ----------------------------------------------------------------------------
void gameswf::Thread::Destroy(gameswf::Thread::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090040);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2090058);
  glf::Thread::Destroy((pthread_t *)self + 1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206A3C8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Thread::Destroy_ea113b950  (binary VA: 0x113b950)
// Original: gameswf::Thread::Destroy
// ----------------------------------------------------------------------------
void gameswf::Thread::Destroy_ea113b950(gameswf::Thread::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090040);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2090058);
  glf::Thread::Destroy((pthread_t *)self + 1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206A3C8);
  opDelete(self);
}


