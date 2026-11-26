#include "Core/Utils/DecompTypes.h"
#include "glf_WaitCondition.h"

// ----------------------------------------------------------------------------
// Function: glf::WaitCondition::Destroy  (binary VA: 0xc7afa0)
// Original: glf::WaitCondition::~WaitCondition
// ----------------------------------------------------------------------------
void glf::WaitCondition::Destroy(glf::WaitCondition::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D668);
}

// ----------------------------------------------------------------------------
// Function: glf::WaitCondition::Destroy_eac7b290  (binary VA: 0xc7b290)
// Original: glf::WaitCondition::~WaitCondition
// ----------------------------------------------------------------------------
void glf::WaitCondition::Destroy_eac7b290(glf::WaitCondition::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D668);
  opDelete(self);
}


