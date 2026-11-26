#include "Core/Utils/DecompTypes.h"
#include "glf_FileStreamSystemImpl.h"

// ----------------------------------------------------------------------------
// Function: glf::FileStreamSystemImpl::Destroy  (binary VA: 0xcb8da0)
// Original: glf::FileStreamSystemImpl::~FileStreamSystemImpl
// ----------------------------------------------------------------------------
void glf::FileStreamSystemImpl::Destroy(glf::FileStreamSystemImpl::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E1A8);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamSystemImpl::Destroy_eacb8dc0  (binary VA: 0xcb8dc0)
// Original: glf::FileStreamSystemImpl::~FileStreamSystemImpl
// ----------------------------------------------------------------------------
void glf::FileStreamSystemImpl::Destroy_eacb8dc0(glf::FileStreamSystemImpl::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E1A8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamSystemImpl::Tell  (binary VA: 0xcb8e80)
// Original: glf::FileStreamSystemImpl::Tell
// ----------------------------------------------------------------------------
int glf::FileStreamSystemImpl::Tell(FILE **self)
{
  return ftell(*(self + 2));
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamSystemImpl::Seek  (binary VA: 0xcb8eb0)
// Original: glf::FileStreamSystemImpl::Seek
// ----------------------------------------------------------------------------
bool glf::FileStreamSystemImpl::Seek(int a1, int off, int whence)
{
  return fseek(*(FILE **)(a1 + 8), off, whence) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamSystemImpl::Write  (binary VA: 0xcb8ef0)
// Original: glf::FileStreamSystemImpl::Write
// ----------------------------------------------------------------------------
size_t glf::FileStreamSystemImpl::Write(FILE **self, void *ptr, size_t n)
{
  return fwrite(ptr, 1u, n, *(self + 2));
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamSystemImpl::Read  (binary VA: 0xcb8f30)
// Original: glf::FileStreamSystemImpl::Read
// ----------------------------------------------------------------------------
size_t glf::FileStreamSystemImpl::Read(glf::FileStreamSystemImpl::Self *self, void *ptr, size_t a3)
{
  int v3;
  size_t n;

  v3 = (*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 52))(*((uint32_t *)self + 1));
  n = v3 - G4_VCALL<int>(self, 20);
  if ( n > a3 )
    n = a3;
  return fread(ptr, 1u, n, *((FILE **)self + 2));
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamSystemImpl::ReadWithOffset  (binary VA: 0xcb8fb0)
// Original: glf::FileStreamSystemImpl::ReadWithOffset
// ----------------------------------------------------------------------------
int glf::FileStreamSystemImpl::ReadWithOffset(glf::FileStreamSystemImpl::Self *self, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  int v6;
  const char **v8;

  v4 = a3;
  v5 = (*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 52))(*((uint32_t *)self + 1)) - a4;
  if ( v5 <= a3 )
    v4 = v5;
  v6 = pread(*(int16_t *)(*((uint32_t *)self + 2) + 14), a2, v4, a4);
  if ( v6 < 0 )
  {
    v8 = (const char **)__errno();
    glf::Console::Print((glf::Console::Self *)"ReadWithOffset error: %d\n", *v8);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamSystemImpl::Close  (binary VA: 0xcb9050)
// Original: glf::FileStreamSystemImpl::Close
// ----------------------------------------------------------------------------
int glf::FileStreamSystemImpl::Close(glf::FileStreamSystemImpl::Self *self)
{
  int result;

  result = *((uint32_t *)self + 2);
  if ( result != 0 )
  {
    result = fclose(*((FILE **)self + 2));
    *((uint32_t *)self + 2) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamSystemImpl::Open  (binary VA: 0xcb9090)
// Original: glf::FileStreamSystemImpl::Open
// ----------------------------------------------------------------------------
int glf::FileStreamSystemImpl::Open(int a1, char *filename, char a3)
{
  bool v3;
  int v4;
  const char *modes;
  FILE *v6;
  unsigned int v7;
  FILE *v9;

  v3 = (a3 & 2) != 0;
  *(uint32_t *)(a1 + 8) = 0;
  if ( (a3 & 1) != 0 || (v4 = 0, (a3 & 2) != 0) )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v9 = fopen(filename, "a+b");
      v4 = 0;
      if ( v9 == nullptr )
        return v4;
      fclose(v9);
      v3 = (a3 & 2) != 0;
    }
    modes = "rb";
    if ( v3 )
    {
      modes = "wb";
      if ( (a3 & 8) == 0 )
        modes = (const char *)&off_1B152A5;
    }
    v6 = fopen(filename, modes);
    v4 = 0;
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v6);
    if ( v6 != nullptr )
    {
      fseek(v6, 0, 2);
      v7 = ftell(*(FILE **)(a1 + 8));
      glf::IOStream::FilePosition::SetFileSize((glf::IOStream::FilePosition::Self *)(*(uint32_t *)(a1 + 4) + 24), v7);
      if ( (a3 & 4) == 0 )
        fseek(*(FILE **)(a1 + 8), 0, 0);
      LOBYTE(v4) = *(uint32_t *)(a1 + 8) != 0;
    }
  }
  return v4;
}


