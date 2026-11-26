#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Managed.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Managed::Destroy  (binary VA: 0x13dca40)
// Original: glwebtools::Managed::~Managed
// ----------------------------------------------------------------------------
void glwebtools::Managed::Destroy(glwebtools::Managed::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Managed::Grab  (binary VA: 0x13dca60)
// Original: glwebtools::Managed::Grab
// ----------------------------------------------------------------------------
int glwebtools::Managed::Grab(glwebtools::Managed::Self *self)
{
  int result;

  result = *((uint32_t *)self + 1) + 1;
  *((uint32_t *)self + 1) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Managed::Destroy_ea13dca70  (binary VA: 0x13dca70)
// Original: glwebtools::Managed::~Managed
// ----------------------------------------------------------------------------
void glwebtools::Managed::Destroy_ea13dca70(glwebtools::Managed::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Managed::Drop  (binary VA: 0x13dcaa0)
// Original: glwebtools::Managed::Drop
// ----------------------------------------------------------------------------
int glwebtools::Managed::Drop(glwebtools::Managed::Self *self)
{
  int result;

  result = *((uint32_t *)self + 1);
  if ( result > 0 )
    *((uint32_t *)self + 1) = --result;
  return result;
}


