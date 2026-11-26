#include "Core/Utils/DecompTypes.h"
#include "glf_TaskThreadImpl.h"

// ----------------------------------------------------------------------------
// Function: glf::TaskThreadImpl::Destroy  (binary VA: 0xcc5df0)
// Original: glf::TaskThreadImpl::~TaskThreadImpl
// ----------------------------------------------------------------------------
void glf::TaskThreadImpl::Destroy(pthread_t *self)
{
  *self = (pthread_t)((uint32_t)(uintptr_t)&off_206E6C8);
  glf::Thread::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskThreadImpl::Destroy_eacc5e20  (binary VA: 0xcc5e20)
// Original: glf::TaskThreadImpl::~TaskThreadImpl
// ----------------------------------------------------------------------------
void glf::TaskThreadImpl::Destroy_eacc5e20(pthread_t *self)
{
  glf::TaskThreadImpl::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0xcc5e60 (size: 78 bytes)
// Symbol:    _ZN3glf14TaskThreadImplC2Ev
// Demangled: glf::TaskThreadImpl::TaskThreadImpl(void)
// ============================================================================
// Alternative name is '_ZN3glf14TaskThreadImplC1Ev'
void (**glf::TaskThreadImpl::TaskThreadImpl(
        glf::TaskThreadImpl::Self *self))(glf::TaskThreadImpl::Self * self)
{
  glf::Thread::Thread(self, 0x10000u);
  *((uint8_t *)self + 28) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E6C8);
  *((uint32_t *)self + 8) = 0;
  return (void (**)(glf::TaskThreadImpl::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206E6C8));
}
// ----------------------------------------------------------------------------
// Function: glf::TaskThreadImpl::IsActive  (binary VA: 0xcc5eb0)
// Original: glf::TaskThreadImpl::IsActive
// ----------------------------------------------------------------------------
int glf::TaskThreadImpl::IsActive(glf::TaskThreadImpl::Self *self)
{
  return *((uint8_t *)self + 28);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskThreadImpl::SetTaskCondition  (binary VA: 0xcc5ec0)
// Original: glf::TaskThreadImpl::SetTaskCondition
// ----------------------------------------------------------------------------
glf::TaskThreadImpl::Self * glf::TaskThreadImpl::SetTaskCondition(glf::TaskThreadImpl::Self *self, glf::TaskCondition::Self *a2)
{
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskThreadImpl::Stop  (binary VA: 0xcc5ed0)
// Original: glf::TaskThreadImpl::Stop
// ----------------------------------------------------------------------------
glf::TaskCondition::Self * glf::TaskThreadImpl::Stop(glf::TaskThreadImpl::Self *self)
{
  glf::TaskCondition::Self *result;

  *((uint8_t *)self + 28) = 0;
  result = *((glf::TaskCondition::Self **)self + 8);
  if ( result != nullptr )
    return (glf::TaskCondition::Self *)glf::TaskCondition::Stop(result);
  return result;
}


