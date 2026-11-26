#include "Core/Utils/DecompTypes.h"
#include "glf_ThreadT_16384u_.h"

// ----------------------------------------------------------------------------
// Function: glf::ThreadT_16384u_784516::Destroy  (binary VA: 0x113b7f0)
// Original: glf::ThreadT<16384u>::~ThreadT
// ----------------------------------------------------------------------------
void glf::ThreadT_16384u_784516::Destroy(pthread_t *self)
{
  *self = (pthread_t)((uint32_t)(uintptr_t)&off_2090058);
  glf::Thread::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadT_16384u_784516::Destroy_ea113b850  (binary VA: 0x113b850)
// Original: glf::ThreadT<16384u>::~ThreadT
// ----------------------------------------------------------------------------
void glf::ThreadT_16384u_784516::Destroy_ea113b850(pthread_t *self)
{
  *self = (pthread_t)((uint32_t)(uintptr_t)&off_2090058);
  glf::Thread::Destroy(self);
  opDelete(self);
}


