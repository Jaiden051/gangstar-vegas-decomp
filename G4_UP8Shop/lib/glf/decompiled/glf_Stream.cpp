#include "Core/Utils/DecompTypes.h"
#include "glf_Stream.h"

// ----------------------------------------------------------------------------
// Function: glf::Stream::Destroy  (binary VA: 0xcbefd0)
// Original: glf::Stream::~Stream
// ----------------------------------------------------------------------------
void glf::Stream::Destroy(glf::Stream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E448);
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::Read  (binary VA: 0xcbeff0)
// Original: glf::Stream::Read
// ----------------------------------------------------------------------------
int glf::Stream::Read()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::ReadWithOffset  (binary VA: 0xcbf000)
// Original: glf::Stream::ReadWithOffset
// ----------------------------------------------------------------------------
int glf::Stream::ReadWithOffset()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::ReadASync  (binary VA: 0xcbf010)
// Original: glf::Stream::ReadASync
// ----------------------------------------------------------------------------
int glf::Stream::ReadASync()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::Write  (binary VA: 0xcbf020)
// Original: glf::Stream::Write
// ----------------------------------------------------------------------------
int glf::Stream::Write()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::GetOffsetAlign  (binary VA: 0xcbf030)
// Original: glf::Stream::GetOffsetAlign
// ----------------------------------------------------------------------------
int glf::Stream::GetOffsetAlign()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::GetSizeAlign  (binary VA: 0xcbf040)
// Original: glf::Stream::GetSizeAlign
// ----------------------------------------------------------------------------
int glf::Stream::GetSizeAlign()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::GetBufferAlign  (binary VA: 0xcbf050)
// Original: glf::Stream::GetBufferAlign
// ----------------------------------------------------------------------------
int glf::Stream::GetBufferAlign()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::IsOpened  (binary VA: 0xcbf060)
// Original: glf::Stream::IsOpened
// ----------------------------------------------------------------------------
int glf::Stream::IsOpened(glf::Stream::Self *self)
{
  return *((uint8_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::Destroy_eacbf090  (binary VA: 0xcbf090)
// Original: glf::Stream::~Stream
// ----------------------------------------------------------------------------
void glf::Stream::Destroy_eacbf090(glf::Stream::Self *self)
{
  glf::Stream::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::Construct  (binary VA: 0xcbf0d0)
// Original: glf::Stream::Stream
// ----------------------------------------------------------------------------
glf::Stream::Self * glf::Stream::Construct(glf::Stream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E448);
  *((uint32_t *)self + 1) = 0;
  *((uint8_t *)self + 8) = 0;
  *((uint8_t *)self + 9) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::GetLastError  (binary VA: 0xcbf110)
// Original: glf::Stream::GetLastError
// ----------------------------------------------------------------------------
int glf::Stream::GetLastError(glf::Stream::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::IsBusy  (binary VA: 0xcbf120)
// Original: glf::Stream::IsBusy
// ----------------------------------------------------------------------------
int glf::Stream::IsBusy(glf::Stream::Self *self)
{
  return *((uint8_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: glf::Stream::WaitASync  (binary VA: 0xcbf130)
// Original: glf::Stream::WaitASync
// ----------------------------------------------------------------------------
int glf::Stream::WaitASync(glf::Stream::Self *self)
{
  while ( *((uint8_t *)self + 9) != 0 )
    glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
  return *((uint32_t *)self + 3);
}


