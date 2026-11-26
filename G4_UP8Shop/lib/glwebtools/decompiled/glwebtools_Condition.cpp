#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Condition.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Condition::Destroy  (binary VA: 0x1405220)
// Original: glwebtools::Condition::~Condition
// ----------------------------------------------------------------------------
void glwebtools::Condition::Destroy(glwebtools::Condition::Self *self)
{
  glf::Condition::Self *v1;

  v1 = *((glf::Condition::Self **)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E88);
  if ( v1 != nullptr )
  {
    glf::Condition::Destroy(v1);
    sub_4EBEE0((int)(uintptr_t)(v1));
    *((uint32_t *)self + 1) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Condition::Destroy_ea1405290  (binary VA: 0x1405290)
// Original: glwebtools::Condition::~Condition
// ----------------------------------------------------------------------------
void glwebtools::Condition::Destroy_ea1405290(glwebtools::Condition::Self *self)
{
  glwebtools::Condition::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Condition::Construct  (binary VA: 0x14052d0)
// Original: glwebtools::Condition::Condition
// ----------------------------------------------------------------------------
glwebtools::Condition::Self * glwebtools::Condition::Construct(glwebtools::Condition::Self *self, glf::Mutex::Self **a2)
{
  glf::Condition::Self *v2;
  glwebtools::Condition::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E88);
  v2 = (glf::Condition::Self *)sub_4EBE70(4u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  result = (glwebtools::Condition::Self *)(glf::Condition::Construct(v2, a2[1]));
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Condition::Signal  (binary VA: 0x1405350)
// Original: glwebtools::Condition::Signal
// ----------------------------------------------------------------------------
int glwebtools::Condition::Signal(glwebtools::Condition::Self *self)
{
  bool v1;
  int v2;

  if ( *((uint32_t *)self + 1) == 0 )
    return -2147483647;
  v1 = glf::Condition::Signal(*((glf::Condition::Self **)self + 1));
  v2 = -2147483645;
  if ( v1 )
    return 0;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Condition::Broadcast  (binary VA: 0x14053a0)
// Original: glwebtools::Condition::Broadcast
// ----------------------------------------------------------------------------
int glwebtools::Condition::Broadcast(glwebtools::Condition::Self *self)
{
  bool v1;
  int v2;

  if ( *((uint32_t *)self + 1) == 0 )
    return -2147483647;
  v1 = glf::Condition::Broadcast(*((glf::Condition::Self **)self + 1));
  v2 = -2147483645;
  if ( v1 )
    return 0;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Condition::Wait  (binary VA: 0x14053f0)
// Original: glwebtools::Condition::Wait
// ----------------------------------------------------------------------------
int glwebtools::Condition::Wait(glwebtools::Condition::Self *self, unsigned int a2)
{
  bool v2;
  int v3;

  if ( *((uint32_t *)self + 1) == 0 )
    return -2147483647;
  v2 = glf::Condition::Wait(*((pthread_mutex_t *****)self + 1), a2);
  v3 = -2147483645;
  if ( v2 )
    return 0;
  return v3;
}


