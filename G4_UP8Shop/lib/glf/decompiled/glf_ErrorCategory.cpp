#include "Core/Utils/DecompTypes.h"
#include "glf_ErrorCategory.h"

// ----------------------------------------------------------------------------
// Function: glf::ErrorCategory::Destroy  (binary VA: 0xca4a30)
// Original: glf::ErrorCategory::~ErrorCategory
// ----------------------------------------------------------------------------
void glf::ErrorCategory::Destroy(glf::ErrorCategory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DD70);
}

// ----------------------------------------------------------------------------
// Function: glf::ErrorCategory::GetSystemError  (binary VA: 0xca4a50)
// Original: glf::ErrorCategory::GetSystemError
// ----------------------------------------------------------------------------
int glf::ErrorCategory::GetSystemError(glf::ErrorCategory::Self *self, int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glf::ErrorCategory::Destroy_eaca4ae0  (binary VA: 0xca4ae0)
// Original: glf::ErrorCategory::~ErrorCategory
// ----------------------------------------------------------------------------
void glf::ErrorCategory::Destroy_eaca4ae0(glf::ErrorCategory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DD70);
  opDelete(self);
}


