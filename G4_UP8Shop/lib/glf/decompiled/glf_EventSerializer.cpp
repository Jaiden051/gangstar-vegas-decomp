#include "Core/Utils/DecompTypes.h"
#include "glf_EventSerializer.h"

// ----------------------------------------------------------------------------
// Function: glf::EventSerializer::GetEventFlags  (binary VA: 0xc740c0)
// Original: glf::EventSerializer::GetEventFlags
// ----------------------------------------------------------------------------
int glf::EventSerializer::GetEventFlags(int a1, int a2)
{
  return a2 + 2;
}

// ----------------------------------------------------------------------------
// Function: glf::EventSerializer::GetEventFlags_eac740d0  (binary VA: 0xc740d0)
// Original: glf::EventSerializer::GetEventFlags
// ----------------------------------------------------------------------------
int glf::EventSerializer::GetEventFlags_eac740d0(int a1, int a2)
{
  return a2 + 2;
}

// ----------------------------------------------------------------------------
// Function: glf::EventSerializer::Destroy  (binary VA: 0xc7af80)
// Original: glf::EventSerializer::~EventSerializer
// ----------------------------------------------------------------------------
void glf::EventSerializer::Destroy(glf::EventSerializer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D830);
}

// ----------------------------------------------------------------------------
// Function: glf::EventSerializer::Destroy_eac7b2c0  (binary VA: 0xc7b2c0)
// Original: glf::EventSerializer::~EventSerializer
// ----------------------------------------------------------------------------
void glf::EventSerializer::Destroy_eac7b2c0(glf::EventSerializer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D830);
  opDelete(self);
}


