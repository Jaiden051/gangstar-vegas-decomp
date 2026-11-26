#include "Core/Utils/DecompTypes.h"
#include "glf_WaitForTime.h"

// ----------------------------------------------------------------------------
// Function: glf::WaitForTime::update  (binary VA: 0xc72c90)
// Original: glf::WaitForTime::update
// ----------------------------------------------------------------------------
void glf::WaitForTime::update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForTime::reset  (binary VA: 0xc72ca0)
// Original: glf::WaitForTime::reset
// ----------------------------------------------------------------------------
glf::WaitForTime::Self * glf::WaitForTime::reset(glf::WaitForTime::Self *self)
{
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForTime::initialized  (binary VA: 0xc72cd0)
// Original: glf::WaitForTime::initialized
// ----------------------------------------------------------------------------
unsigned int glf::WaitForTime::initialized(glf::WaitForTime::Self *self)
{
  int64_t v1; // rax

  HIDWORD(v1) = *((int *)self + 4) >> 31;
  LODWORD(v1) = HIDWORD(v1);
  return (unsigned int)((uint64_t)(v1 - *(uint64_t *)((char *)self + 12)) >> 32) >> 31;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForTime::check  (binary VA: 0xc72da0)
// Original: glf::WaitForTime::check
// ----------------------------------------------------------------------------
bool glf::WaitForTime::check(glf::WaitForTime::Self *self)
{
  int v1;
  int64_t v3; // rax

  v1 = 1;
  if ( (*(uint8_t (**)(glf::WaitForTime::Self *))(*(uint32_t *)self + 8))(self) != 0 )
  {
    LODWORD(v3) = glf::GetMilliseconds(self);
    return v3 > *(uint64_t *)((char *)self + 12) + *(uint64_t *)((char *)self + 4);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForTime::start  (binary VA: 0xc75a20)
// Original: glf::WaitForTime::start
// ----------------------------------------------------------------------------
int glf::WaitForTime::start(glf::WaitForTime::Self *self, int64_t a2)
{
  int result;
  int v3;
  glf::Self *v4;

  *(uint64_t *)((char *)self + 12) = a2;
  result = glf::GetMilliseconds(v4);
  *((uint32_t *)self + 1) = result;
  *((uint32_t *)self + 2) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForTime::Destroy  (binary VA: 0xc7b020)
// Original: glf::WaitForTime::~WaitForTime
// ----------------------------------------------------------------------------
void glf::WaitForTime::Destroy(glf::WaitForTime::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D668);
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForTime::Destroy_eac7b1d0  (binary VA: 0xc7b1d0)
// Original: glf::WaitForTime::~WaitForTime
// ----------------------------------------------------------------------------
void glf::WaitForTime::Destroy_eac7b1d0(glf::WaitForTime::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D668);
  opDelete(self);
}


