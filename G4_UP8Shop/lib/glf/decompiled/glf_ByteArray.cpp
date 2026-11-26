#include "Core/Utils/DecompTypes.h"
#include "glf_ByteArray.h"

// ----------------------------------------------------------------------------
// Function: glf::ByteArray::Destroy  (binary VA: 0xc7af60)
// Original: glf::ByteArray::~ByteArray
// ----------------------------------------------------------------------------
void glf::ByteArray::Destroy(glf::ByteArray::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D878);
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArray::Destroy_eac7b2f0  (binary VA: 0xc7b2f0)
// Original: glf::ByteArray::~ByteArray
// ----------------------------------------------------------------------------
void glf::ByteArray::Destroy_eac7b2f0(glf::ByteArray::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D878);
  opDelete(self);
}


