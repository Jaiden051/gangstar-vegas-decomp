#include "Core/Utils/DecompTypes.h"
#include "glf_MemObject.h"

// ----------------------------------------------------------------------------
// Function: glf::MemObject::opNew  (binary VA: 0xc6c550)
// Original: glf::MemObject::operator new
// ----------------------------------------------------------------------------
void * glf::MemObject::opNew(size_t self)
{
  return glf::Alloc(self);
}

// ----------------------------------------------------------------------------
// Function: glf::MemObject::opDelete  (binary VA: 0xc6c580)
// Original: glf::MemObject::operator delete
// ----------------------------------------------------------------------------
void glf::MemObject::opDelete(glf::Self *a1)
{
  glf::Free(a1);
}


