#include "Core/Utils/DecompTypes.h"
#include "glf_IOStream.h"

// ----------------------------------------------------------------------------
// Function: glf::IOStream::Seek  (binary VA: 0xcbf070)
// Original: glf::IOStream::Seek
// ----------------------------------------------------------------------------
int glf::IOStream::Seek()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::Peek  (binary VA: 0xcbf080)
// Original: glf::IOStream::Peek
// ----------------------------------------------------------------------------
int glf::IOStream::Peek()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::IsEof  (binary VA: 0xcbf170)
// Original: glf::IOStream::IsEof
// ----------------------------------------------------------------------------
bool glf::IOStream::IsEof(glf::IOStream::Self *self)
{
  unsigned int v1;

  v1 = G4_VCALL<int>(self, 64);
  return v1 >= G4_VCALL<int>(self, 52);
}



// ============================================================================
// Address:   0xcbf1b0 (size: 20 bytes)
// Symbol:    _ZN3glf8IOStream12FilePositionC2Ev
// Demangled: glf::IOStream::FilePosition::FilePosition(void)
// ============================================================================
// Alternative name is '_ZN3glf8IOStream12FilePositionC1Ev'
struct glf::IOStream::FilePosition::Self *glf::IOStream::FilePosition::FilePosition(
        glf::IOStream::FilePosition::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::IOStream::Construct  (binary VA: 0xcbf1d0)
// Original: glf::IOStream::IOStream
// ----------------------------------------------------------------------------
glf::IOStream::Self * glf::IOStream::Construct(glf::IOStream::Self *self)
{
  glf::Stream::Construct(self);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E488);
  return (glf::IOStream::Self *)(glf::IOStream::FilePosition::FilePosition((glf::IOStream::FilePosition::Self *)((glf::IOStream::Self *)((char *)self + 24))));
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::FilePosition::SetFileSize  (binary VA: 0xcbf220)
// Original: glf::IOStream::FilePosition::SetFileSize
// ----------------------------------------------------------------------------
glf::IOStream::FilePosition::Self * glf::IOStream::FilePosition::SetFileSize(glf::IOStream::FilePosition::Self *self, unsigned int a2)
{
  *(uint32_t *)self = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::FilePosition::GetFileSize  (binary VA: 0xcbf230)
// Original: glf::IOStream::FilePosition::GetFileSize
// ----------------------------------------------------------------------------
int glf::IOStream::FilePosition::GetFileSize(glf::IOStream::FilePosition::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::FilePosition::Skip  (binary VA: 0xcbf240)
// Original: glf::IOStream::FilePosition::Skip
// ----------------------------------------------------------------------------
int glf::IOStream::FilePosition::Skip(glf::IOStream::FilePosition::Self *self, int a2)
{
  int result;

  if ( a2 == 0 )
    return *((uint32_t *)self + 1);
  result = *((uint32_t *)self + 1) + a2;
  *((uint32_t *)self + 1) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::FilePosition::Append  (binary VA: 0xcbf260)
// Original: glf::IOStream::FilePosition::Append
// ----------------------------------------------------------------------------
unsigned int glf::IOStream::FilePosition::Append(glf::IOStream::FilePosition::Self *self, int a2)
{
  int v2;
  unsigned int result;
  bool v4;

  v2 = *(uint32_t *)self;
  result = *((uint32_t *)self + 1) + a2;
  v4 = result < *(uint32_t *)self;
  *((uint32_t *)self + 1) = result;
  if ( !v4 )
    v2 = result;
  *(uint32_t *)self = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::FilePosition::Seek  (binary VA: 0xcbf280)
// Original: glf::IOStream::FilePosition::Seek
// ----------------------------------------------------------------------------
int glf::IOStream::FilePosition::Seek(glf::IOStream::FilePosition::Self *a1, int a2, int a3)
{
  if ( a3 != 0 )
  {
    if ( a3 == 2 )
      *((uint32_t *)a1 + 1) = *(uint32_t *)a1;
  }
  else
  {
    *((uint32_t *)a1 + 1) = 0;
  }
  glf::IOStream::FilePosition::Skip(a1, a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::FilePosition::Tell  (binary VA: 0xcbf2e0)
// Original: glf::IOStream::FilePosition::Tell
// ----------------------------------------------------------------------------
int glf::IOStream::FilePosition::Tell(glf::IOStream::FilePosition::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::Destroy  (binary VA: 0xcbf2f0)
// Original: glf::IOStream::~IOStream
// ----------------------------------------------------------------------------
void glf::IOStream::Destroy(glf::IOStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E488);
  glf::Stream::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::IOStream::Destroy_eacbf320  (binary VA: 0xcbf320)
// Original: glf::IOStream::~IOStream
// ----------------------------------------------------------------------------
void glf::IOStream::Destroy_eacbf320(glf::IOStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E488);
  glf::Stream::Destroy(self);
  opDelete(self);
}


