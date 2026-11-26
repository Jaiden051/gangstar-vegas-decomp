#include "Core/Utils/DecompTypes.h"
#include "glf_MemoryStream.h"

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::CanSeek  (binary VA: 0xcbea80)
// Original: glf::MemoryStream::CanSeek
// ----------------------------------------------------------------------------
int glf::MemoryStream::CanSeek()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::CanRead  (binary VA: 0xcbea90)
// Original: glf::MemoryStream::CanRead
// ----------------------------------------------------------------------------
int glf::MemoryStream::CanRead()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::CanWrite  (binary VA: 0xcbeaa0)
// Original: glf::MemoryStream::CanWrite
// ----------------------------------------------------------------------------
int glf::MemoryStream::CanWrite()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Tell  (binary VA: 0xcbeab0)
// Original: glf::MemoryStream::Tell
// ----------------------------------------------------------------------------
int glf::MemoryStream::Tell(glf::MemoryStream::Self *self)
{
  return glf::IOStream::FilePosition::Tell((glf::MemoryStream::Self *)((char *)self + 24));
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::GetSize  (binary VA: 0xcbeae0)
// Original: glf::MemoryStream::GetSize
// ----------------------------------------------------------------------------
int glf::MemoryStream::GetSize(glf::MemoryStream::Self *self)
{
  return glf::IOStream::FilePosition::GetFileSize((glf::MemoryStream::Self *)((char *)self + 24));
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Read  (binary VA: 0xcbeb10)
// Original: glf::MemoryStream::Read
// ----------------------------------------------------------------------------
unsigned int glf::MemoryStream::Read(glf::MemoryStream::Self *self, glf::Self *a2, signed int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  int FileSize;

  v3 = a3;
  FileSize = glf::IOStream::FilePosition::GetFileSize((glf::MemoryStream::Self *)((char *)self + 24));
  v4 = glf::IOStream::FilePosition::Tell((glf::MemoryStream::Self *)((char *)self + 24));
  v5 = *((uint32_t *)self + 9);
  if ( FileSize - v4 <= a3 )
    v3 = FileSize - v4;
  v6 = glf::IOStream::FilePosition::Tell((glf::MemoryStream::Self *)((char *)self + 24));
  glf::Memcpy(a2, (void *)(v6 + v5), v3);
  glf::IOStream::FilePosition::Skip((glf::MemoryStream::Self *)((char *)self + 24), v3);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Write  (binary VA: 0xcbeba0)
// Original: glf::MemoryStream::Write
// ----------------------------------------------------------------------------
unsigned int glf::MemoryStream::Write(glf::MemoryStream::Self *self, void *a2, unsigned int a3)
{
  unsigned int v3;
  unsigned int v4;
  int v6;

  v3 = a3;
  v6 = glf::IOStream::FilePosition::Tell((glf::MemoryStream::Self *)((char *)self + 24));
  v4 = glf::IOStream::FilePosition::GetFileSize((glf::MemoryStream::Self *)((char *)self + 24)) - v6;
  if ( v4 <= a3 )
    v3 = v4;
  glf::Memcpy((glf::Self *)(*((uint32_t *)self + 9) + v6), a2, v3);
  glf::IOStream::FilePosition::Skip((glf::MemoryStream::Self *)((char *)self + 24), v3);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Seek  (binary VA: 0xcbec30)
// Original: glf::MemoryStream::Seek
// ----------------------------------------------------------------------------
int glf::MemoryStream::Seek(int a1, int a2, int a3)
{
  return glf::IOStream::FilePosition::Seek((glf::IOStream::FilePosition::Self *)(a1 + 24), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Close  (binary VA: 0xcbec70)
// Original: glf::MemoryStream::Close
// ----------------------------------------------------------------------------
int glf::MemoryStream::Close(void **self)
{
  int result;

  if ( *((uint8_t *)self + 32) != 0 && *(self + 9) != nullptr )
  {
    opDeleteArray(*(self + 9));
    *((uint8_t *)self + 32) = 0;
  }
  *(self + 9) = nullptr;
  glf::IOStream::FilePosition::Seek((glf::IOStream::FilePosition::Self *)(self + 6), 0, 0);
  result = (int)(uintptr_t)(glf::IOStream::FilePosition::SetFileSize((glf::IOStream::FilePosition::Self *)(self + 6), 0));
  *((uint8_t *)self + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Destroy  (binary VA: 0xcbecf0)
// Original: glf::MemoryStream::~MemoryStream
// ----------------------------------------------------------------------------
void glf::MemoryStream::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206E3A8));
  glf::MemoryStream::Close(self);
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206E488));
  glf::Stream::Destroy((glf::Stream::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Destroy_eacbed40  (binary VA: 0xcbed40)
// Original: glf::MemoryStream::~MemoryStream
// ----------------------------------------------------------------------------
void glf::MemoryStream::Destroy_eacbed40(void **self)
{
  glf::MemoryStream::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0xcbed80 (size: 70 bytes)
// Symbol:    _ZN3glf12MemoryStreamC2Ev
// Demangled: glf::MemoryStream::MemoryStream(void)
// ============================================================================
// Alternative name is '_ZN3glf12MemoryStreamC1Ev'
void (**glf::MemoryStream::Construct(glf::MemoryStream::Self *self))(glf::MemoryStream::Self * self)
{
  glf::IOStream::Construct(self);
  *((uint8_t *)self + 32) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E3A8);
  *((uint32_t *)self + 9) = 0;
  return (void (**)(glf::MemoryStream::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206E3A8));
}
// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Open  (binary VA: 0xcbedd0)
// Original: glf::MemoryStream::Open
// ----------------------------------------------------------------------------
bool glf::MemoryStream::Open(void **self, void *a2, unsigned int a3, bool a4)
{
  glf::MemoryStream::Close(self);
  *(self + 9) = a2;
  *((uint8_t *)self + 32) = a4;
  glf::IOStream::FilePosition::SetFileSize((glf::IOStream::FilePosition::Self *)(self + 6), a3);
  *((uint8_t *)self + 8) = 1;
  return a2 != nullptr;
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::LoadFileStream  (binary VA: 0xcbee40)
// Original: glf::MemoryStream::LoadFileStream
// ----------------------------------------------------------------------------
size_t glf::MemoryStream::LoadFileStream(void **a1, int a2)
{
  size_t result;
  unsigned int v3;
  void *v4;

  result = G4_VCALL<int>(a2, 48);
  if ( (uint8_t)result != 0 )
  {
    result = G4_VCALL<int>(a2, 44);
    if ( (uint8_t)result != 0 )
    {
      result = G4_VCALL<int>(a2, 52);
      v3 = result;
      if ( result != 0 )
      {
        v4 = (void *)opNewArray(result);
        glf::MemoryStream::Open(a1, v4, v3, true);
        return G4_VCALL<int>(a2, 12, a1[9], v3);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Construct  (binary VA: 0xcbeee0)
// Original: glf::MemoryStream::MemoryStream
// ----------------------------------------------------------------------------
size_t glf::MemoryStream::Construct(glf::IOStream::Self *a1, int a2)
{
  glf::IOStream::Construct(a1);
  *((uint8_t *)a1 + 32) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206E3A8);
  *((uint32_t *)a1 + 9) = 0;
  return glf::MemoryStream::LoadFileStream((void **)a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::Construct  (binary VA: 0xcbef40)
// Original: glf::MemoryStream::MemoryStream
// ----------------------------------------------------------------------------
bool glf::MemoryStream::Construct(glf::MemoryStream::Self *self, void *a2, unsigned int a3, bool a4)
{
  glf::IOStream::Construct(self);
  *((uint8_t *)self + 32) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E3A8);
  *((uint32_t *)self + 9) = 0;
  return glf::MemoryStream::Open((void **)self, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glf::MemoryStream::CanCancel  (binary VA: 0xcbefc0)
// Original: glf::MemoryStream::CanCancel
// ----------------------------------------------------------------------------
int glf::MemoryStream::CanCancel()
{
  return 0;
}


