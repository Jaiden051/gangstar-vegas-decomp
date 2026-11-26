#include "Core/Utils/DecompTypes.h"
#include "glf_WaitForFrame.h"

// ----------------------------------------------------------------------------
// Function: glf::WaitForFrame::update  (binary VA: 0xc72c40)
// Original: glf::WaitForFrame::update
// ----------------------------------------------------------------------------
glf::WaitForFrame::Self * glf::WaitForFrame::update(glf::WaitForFrame::Self *self)
{
  glf::WaitForFrame::Self *result;
  int v2;

  result = self;
  v2 = *((uint32_t *)self + 1);
  if ( v2 != 0 )
    *((uint32_t *)self + 1) = v2 - 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForFrame::reset  (binary VA: 0xc72c60)
// Original: glf::WaitForFrame::reset
// ----------------------------------------------------------------------------
glf::WaitForFrame::Self * glf::WaitForFrame::reset(glf::WaitForFrame::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForFrame::initialized  (binary VA: 0xc72c70)
// Original: glf::WaitForFrame::initialized
// ----------------------------------------------------------------------------
bool glf::WaitForFrame::initialized(glf::WaitForFrame::Self *self)
{
  return *((uint32_t *)self + 1) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForFrame::check  (binary VA: 0xc72c80)
// Original: glf::WaitForFrame::check
// ----------------------------------------------------------------------------
bool glf::WaitForFrame::check(glf::WaitForFrame::Self *self)
{
  return *((uint32_t *)self + 1) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForFrame::start  (binary VA: 0xc75a10)
// Original: glf::WaitForFrame::start
// ----------------------------------------------------------------------------
glf::WaitForFrame::Self * glf::WaitForFrame::start(glf::WaitForFrame::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 1) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForFrame::Destroy  (binary VA: 0xc7b000)
// Original: glf::WaitForFrame::~WaitForFrame
// ----------------------------------------------------------------------------
void glf::WaitForFrame::Destroy(glf::WaitForFrame::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D668);
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForFrame::Destroy_eac7b200  (binary VA: 0xc7b200)
// Original: glf::WaitForFrame::~WaitForFrame
// ----------------------------------------------------------------------------
void glf::WaitForFrame::Destroy_eac7b200(glf::WaitForFrame::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D668);
  opDelete(self);
}


