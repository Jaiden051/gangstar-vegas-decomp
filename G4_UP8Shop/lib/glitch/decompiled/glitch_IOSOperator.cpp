#include "Core/Utils/DecompTypes.h"
#include "glitch_IOSOperator.h"

// ----------------------------------------------------------------------------
// Function: glitch::IOSOperator::Destroy  (binary VA: 0xcef0b0)
// Original: glitch::IOSOperator::~IOSOperator
// ----------------------------------------------------------------------------
void glitch::IOSOperator::Destroy(glitch::IOSOperator::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::IOSOperator::Destroy_eacef390  (binary VA: 0xcef390)
// Original: glitch::IOSOperator::~IOSOperator
// ----------------------------------------------------------------------------
void glitch::IOSOperator::Destroy_eacef390(glitch::IOSOperator::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}


