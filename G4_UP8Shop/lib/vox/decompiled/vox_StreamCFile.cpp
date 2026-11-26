#include "Core/Utils/DecompTypes.h"
#include "vox_StreamCFile.h"

// ----------------------------------------------------------------------------
// Function: vox::StreamCFile::DestroyCursor  (binary VA: 0x103b150)
// Original: vox::StreamCFile::DestroyCursor
// ----------------------------------------------------------------------------
int vox::StreamCFile::DestroyCursor(vox::StreamCFile::Self *self, vox::StreamCursorInterface::Self *a2)
{
  int result;

  if ( a2 != nullptr )
  {
    (**(void (***)(vox::StreamCursorInterface::Self *))a2)(a2);
    return VoxFreeInternal(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFile::Construct  (binary VA: 0x103bca0)
// Original: vox::StreamCFile::StreamCFile
// ----------------------------------------------------------------------------
vox::StreamCFile::Self * vox::StreamCFile::Construct(vox::StreamCFile::Self *self, char *s)
{
  vox::StreamCFile::Self *result;
  unsigned int n;
  char *v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  size_t v8;
  int v9;
  int v10;
  size_t v11;
  size_t v12;
  size_t v13;
  int v14;
  void *v15;

  result = (vox::StreamCFile::Self *)((uint32_t)(uintptr_t)&off_208D9A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D9A8);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(byte_20E1FB4);
  *((uint32_t *)self + 1) = -2;
  if ( s == nullptr )
    return result;
  n = strlen(s);
  v4 = (char *)(byte_20E1FB4);
  if ( n > 0x3FFFFFFC )
    sub_1900180("basic_string::assign");
  if ( s >= (char *)(byte_20E1FB4)
    && s <= (char *)(&byte_20E1FB4[g4_empty_string_rep[0]])
    && (int)g4_empty_string_rep[2] <= 0 )
  {
    if ( n <= s - (char *)(byte_20E1FB4) )
    {
      if ( n != 1 )
      {
        v13 = n;
        memcpy(byte_20E1FB4, s, n);
        v4 = *((char **)self + 2);
        n = v13;
        goto LABEL_27;
      }
    }
    else
    {
      if ( s == (char *)(byte_20E1FB4) )
        goto LABEL_27;
      if ( n != 1 )
      {
        v12 = n;
        memmove(byte_20E1FB4, s, n);
        v4 = *((char **)self + 2);
        n = v12;
        goto LABEL_27;
      }
    }
    byte_20E1FB4[0] = *s;
    v4 = *((char **)self + 2);
LABEL_27:
    result = (vox::StreamCFile::Self *)(v4 - 12);
    if ( v4 - 12 != (char *)g4_empty_string_rep )
    {
      *((uint32_t *)v4 - 1) = 0;
      *((uint32_t *)v4 - 3) = n;
      v4[n] = 0;
    }
    return result;
  }
  v5 = g4_empty_string_rep[1];
  if ( n > v5 )
  {
    v6 = 2 * v5;
    if ( n >= 2 * v5 )
      v6 = n;
    v15 = (void *)v6;
    goto LABEL_8;
  }
  v15 = (void *)n;
  if ( (int)g4_empty_string_rep[2] > 0 )
  {
LABEL_8:
    if ( (unsigned int)(uintptr_t)(v15) + 29 <= 0x1000 || v5 >= (unsigned int)(uintptr_t)(v15) )
    {
      v8 = (size_t)v15 + 13;
    }
    else
    {
      v7 = (unsigned int)(uintptr_t)(v15) - (((uint16_t)(uintptr_t)v15 + 29) & 0xFFF) + 4096;
      if ( v7 > 0x3FFFFFFC )
        v7 = 1073741820;
      v15 = (void *)v7;
      v8 = v7 + 13;
    }
    v11 = n;
    v9 = VoxAllocInternal(v8, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v9 + 8) = 0;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v15);
    v14 = v9;
    v10 = *((uint32_t *)self + 2);
    n = v11;
    if ( (uint32_t *)(v10 - 12) != (uint32_t *)(g4_empty_string_rep)
      && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    {
      VoxFreeInternal((void *)(v10 - 12));
      n = v11;
    }
    result = (vox::StreamCFile::Self *)(v14 + 12);
    *((uint32_t *)self + 2) = v14 + 12;
    goto LABEL_15;
  }
  result = (vox::StreamCFile::Self *)byte_20E1FB4;
LABEL_15:
  if ( (uint32_t *)((char *)result - 12) != (uint32_t *)(g4_empty_string_rep) )
  {
    *((uint32_t *)result - 1) = 0;
    *((uint32_t *)result - 3) = n;
    *((uint8_t *)result + n) = 0;
  }
  if ( n != 0 )
  {
    result = *((vox::StreamCFile::Self **)self + 2);
    if ( n == 1 )
      *(uint8_t *)result = *s;
    else
      return (vox::StreamCFile::Self *)memcpy(result, s, n);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFile::CreateNewCursor  (binary VA: 0x103bfc0)
// Original: vox::StreamCFile::CreateNewCursor
// ----------------------------------------------------------------------------
int vox::StreamCFile::CreateNewCursor(vox::StreamCFile::Self *self)
{
  int v1;
  int v2;
  void *v4;

  v1 = *((uint32_t *)self + 1);
  if ( v1 > 0 || (v2 = 0, v1 == -2) )
  {
    v2 = VoxAllocInternal(
           0x14u,
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_stream_cfile.cpp"),
           (int)(uintptr_t)("CreateNewCursor"),
           42);
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(self);
    *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_208D9E8);
    *(uint32_t *)(v2 + 8) = 0;
    *(uint32_t *)(v2 + 12) = -1;
    *(uint8_t *)(v2 + 16) = 0;
    vox::StreamCFileCursor::Init((vox::StreamCFileCursor::Self *)v2);
    if ( (uint8_t)vox::StreamCFileCursor::IsValid((vox::StreamCFileCursor::Self *)v2) == 0 )
    {
      (**(void (***)(int))v2)(v2);
      v4 = (void *)v2;
      v2 = 0;
      VoxFreeInternal(v4);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFile::Init  (binary VA: 0x103c080)
// Original: vox::StreamCFile::Init
// ----------------------------------------------------------------------------
void vox::StreamCFile::Init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFile::GetType  (binary VA: 0x103c090)
// Original: vox::StreamCFile::GetType
// ----------------------------------------------------------------------------
int vox::StreamCFile::GetType()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFile::Destroy  (binary VA: 0x103c0b0)
// Original: vox::StreamCFile::~StreamCFile
// ----------------------------------------------------------------------------
void vox::StreamCFile::Destroy(vox::StreamCFile::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D9A8);
  v1 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v1 - 12) != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v1 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CBA8);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFile::Destroy_ea103c1c0  (binary VA: 0x103c1c0)
// Original: vox::StreamCFile::~StreamCFile
// ----------------------------------------------------------------------------
void vox::StreamCFile::Destroy_ea103c1c0(vox::StreamCFile::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D9A8);
  v1 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v1 - 12) != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v1 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CBA8);
  opDelete(self);
}


