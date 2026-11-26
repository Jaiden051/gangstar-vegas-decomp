#include "Core/Utils/DecompTypes.h"
#include "glf_thread.h"

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::UpdateName  (binary VA: 0xc82080)
// Original: glf::thread::ImplBase::UpdateName
// ----------------------------------------------------------------------------
void glf::thread::ImplBase::UpdateName()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::GetNativeHandle  (binary VA: 0xc82090)
// Original: glf::thread::ImplBase::GetNativeHandle
// ----------------------------------------------------------------------------
int glf::thread::ImplBase::GetNativeHandle()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::IsSuspended  (binary VA: 0xc820a0)
// Original: glf::thread::ImplBase::IsSuspended
// ----------------------------------------------------------------------------
int glf::thread::ImplBase::IsSuspended()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::SetPriority  (binary VA: 0xc820b0)
// Original: glf::thread::ImplBase::SetPriority
// ----------------------------------------------------------------------------
glf::thread::ImplBase::Self * glf::thread::ImplBase::SetPriority(glf::thread::ImplBase::Self *self, int a2)
{
  *((uint32_t *)self + 3) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::GetPriority  (binary VA: 0xc820c0)
// Original: glf::thread::ImplBase::GetPriority
// ----------------------------------------------------------------------------
int glf::thread::ImplBase::GetPriority(glf::thread::ImplBase::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::SetCoreAffinity  (binary VA: 0xc820d0)
// Original: glf::thread::ImplBase::SetCoreAffinity
// ----------------------------------------------------------------------------
void glf::thread::ImplBase::SetCoreAffinity()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::GetCoreAffinity  (binary VA: 0xc820e0)
// Original: glf::thread::ImplBase::GetCoreAffinity
// ----------------------------------------------------------------------------
int glf::thread::ImplBase::GetCoreAffinity()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::GetSchedulingPolicy  (binary VA: 0xc820f0)
// Original: glf::thread::ImplBase::GetSchedulingPolicy
// ----------------------------------------------------------------------------
int glf::thread::ImplBase::GetSchedulingPolicy()
{
  return 5;
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::SetSchedulingPolicy  (binary VA: 0xc82100)
// Original: glf::thread::ImplBase::SetSchedulingPolicy
// ----------------------------------------------------------------------------
void glf::thread::ImplBase::SetSchedulingPolicy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::Resume  (binary VA: 0xc82280)
// Original: glf::thread::ImplBase::Resume
// ----------------------------------------------------------------------------
int glf::thread::ImplBase::Resume()
{
  return puts("[glf] Thread::Resume not supported");
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::Suspend  (binary VA: 0xc822b0)
// Original: glf::thread::ImplBase::Suspend
// ----------------------------------------------------------------------------
int glf::thread::ImplBase::Suspend()
{
  return puts("[glf] Thread::Suspend not supported");
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::SetName  (binary VA: 0xc82340)
// Original: glf::thread::ImplBase::SetName
// ----------------------------------------------------------------------------
int glf::thread::ImplBase::SetName(glf::thread::ImplBase::Self *self, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(self) + 8, s, v2));
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::Destroy  (binary VA: 0xc82390)
// Original: glf::thread::ImplBase::~ImplBase
// ----------------------------------------------------------------------------
void glf::thread::ImplBase::Destroy(glf::thread::ImplBase::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D928);
  v1 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::thread::ImplBase::Destroy_eac82470  (binary VA: 0xc82470)
// Original: glf::thread::ImplBase::~ImplBase
// ----------------------------------------------------------------------------
void glf::thread::ImplBase::Destroy_eac82470(glf::thread::ImplBase::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D928);
  v1 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
}


