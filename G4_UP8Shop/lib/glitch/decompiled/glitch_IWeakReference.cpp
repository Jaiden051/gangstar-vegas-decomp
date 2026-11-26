#include "Core/Utils/DecompTypes.h"
#include "glitch_IWeakReference.h"

// ----------------------------------------------------------------------------
// Function: glitch::IWeakReference::Destroy  (binary VA: 0xd7e150)
// Original: glitch::IWeakReference::~IWeakReference
// ----------------------------------------------------------------------------
void glitch::IWeakReference::Destroy(glitch::IWeakReference::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::IWeakReference::Destroy_ead7e200  (binary VA: 0xd7e200)
// Original: glitch::IWeakReference::~IWeakReference
// ----------------------------------------------------------------------------
void glitch::IWeakReference::Destroy_ead7e200(glitch::IWeakReference::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}


