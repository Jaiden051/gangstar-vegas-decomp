#include "Core/Utils/DecompTypes.h"
#include "glf_RefCounted.h"

// ----------------------------------------------------------------------------
// Function: glf::RefCounted::Destroy  (binary VA: 0xc71b50)
// Original: glf::RefCounted::~RefCounted
// ----------------------------------------------------------------------------
void glf::RefCounted::Destroy(glf::RefCounted::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::RefCounted::OnDelete  (binary VA: 0xc71b70)
// Original: glf::RefCounted::OnDelete
// ----------------------------------------------------------------------------
void glf::RefCounted::OnDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::RefCounted::OnLastDrop  (binary VA: 0xc71b80)
// Original: glf::RefCounted::OnLastDrop
// ----------------------------------------------------------------------------
void glf::RefCounted::OnLastDrop()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::RefCounted::Delete  (binary VA: 0xc71b90)
// Original: glf::RefCounted::Delete
// ----------------------------------------------------------------------------
glf::RefCounted::Self * glf::RefCounted::Delete(glf::RefCounted::Self *self)
{
  glf::RefCounted::Self *result;

  result = self;
  if ( self != nullptr )
    return (glf::RefCounted::Self *)G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::RefCounted::Destroy_eac71c80  (binary VA: 0xc71c80)
// Original: glf::RefCounted::~RefCounted
// ----------------------------------------------------------------------------
void glf::RefCounted::Destroy_eac71c80(glf::RefCounted::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
  glf::MemObject::opDelete(self);
}


