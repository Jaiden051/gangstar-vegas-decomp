#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Atomic_int_.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Atomic_int_id_7c2220::Destroy  (binary VA: 0x13e6260)
// Original: glwebtools::Atomic<int>::~Atomic
// ----------------------------------------------------------------------------
void glwebtools::Atomic_int_id_7c2220::Destroy(glwebtools::Atomic<int> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094CE0);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Atomic_int_id_7c2220::Destroy_ea13e6280  (binary VA: 0x13e6280)
// Original: glwebtools::Atomic<int>::~Atomic
// ----------------------------------------------------------------------------
void glwebtools::Atomic_int_id_7c2220::Destroy_ea13e6280(glwebtools::Atomic<int> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094CE0);
  opDelete(self);
}


