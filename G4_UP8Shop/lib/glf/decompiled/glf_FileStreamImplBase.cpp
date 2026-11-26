#include "Core/Utils/DecompTypes.h"
#include "glf_FileStreamImplBase.h"

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImplBase::Destroy  (binary VA: 0xcb8d10)
// Original: glf::FileStreamImplBase::~FileStreamImplBase
// ----------------------------------------------------------------------------
void glf::FileStreamImplBase::Destroy(glf::FileStreamImplBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E1A8);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImplBase::Open  (binary VA: 0xcb8d30)
// Original: glf::FileStreamImplBase::Open
// ----------------------------------------------------------------------------
int glf::FileStreamImplBase::Open()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImplBase::Close  (binary VA: 0xcb8d40)
// Original: glf::FileStreamImplBase::Close
// ----------------------------------------------------------------------------
void glf::FileStreamImplBase::Close()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImplBase::Seek  (binary VA: 0xcb8d50)
// Original: glf::FileStreamImplBase::Seek
// ----------------------------------------------------------------------------
int glf::FileStreamImplBase::Seek()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImplBase::Tell  (binary VA: 0xcb8d60)
// Original: glf::FileStreamImplBase::Tell
// ----------------------------------------------------------------------------
int glf::FileStreamImplBase::Tell()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImplBase::Read  (binary VA: 0xcb8d70)
// Original: glf::FileStreamImplBase::Read
// ----------------------------------------------------------------------------
int glf::FileStreamImplBase::Read()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImplBase::ReadWithOffset  (binary VA: 0xcb8d80)
// Original: glf::FileStreamImplBase::ReadWithOffset
// ----------------------------------------------------------------------------
int glf::FileStreamImplBase::ReadWithOffset()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImplBase::Write  (binary VA: 0xcb8d90)
// Original: glf::FileStreamImplBase::Write
// ----------------------------------------------------------------------------
int glf::FileStreamImplBase::Write()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImplBase::Destroy_eacb8df0  (binary VA: 0xcb8df0)
// Original: glf::FileStreamImplBase::~FileStreamImplBase
// ----------------------------------------------------------------------------
void glf::FileStreamImplBase::Destroy_eacb8df0(glf::FileStreamImplBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E1A8);
  opDelete(self);
}


