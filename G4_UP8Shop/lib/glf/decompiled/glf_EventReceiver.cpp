#include "Core/Utils/DecompTypes.h"
#include "glf_EventReceiver.h"

// ----------------------------------------------------------------------------
// Function: glf::EventReceiver::Destroy  (binary VA: 0xc71ad0)
// Original: glf::EventReceiver::~EventReceiver
// ----------------------------------------------------------------------------
void glf::EventReceiver::Destroy(glf::EventReceiver::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D428);
}

// ----------------------------------------------------------------------------
// Function: glf::EventReceiver::Destroy_eac71cb0  (binary VA: 0xc71cb0)
// Original: glf::EventReceiver::~EventReceiver
// ----------------------------------------------------------------------------
void glf::EventReceiver::Destroy_eac71cb0(glf::EventReceiver::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D428);
  opDelete(self);
}


