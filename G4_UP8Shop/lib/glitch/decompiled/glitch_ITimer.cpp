#include "Core/Utils/DecompTypes.h"
#include "glitch_ITimer.h"

// ----------------------------------------------------------------------------
// Function: glitch::ITimer::Destroy  (binary VA: 0xcef090)
// Original: glitch::ITimer::~ITimer
// ----------------------------------------------------------------------------
void glitch::ITimer::Destroy(glitch::ITimer::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::ITimer::Destroy_eacef3c0  (binary VA: 0xcef3c0)
// Original: glitch::ITimer::~ITimer
// ----------------------------------------------------------------------------
void glitch::ITimer::Destroy_eacef3c0(glitch::ITimer::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}


