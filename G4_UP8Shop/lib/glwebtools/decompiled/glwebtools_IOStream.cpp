#include "Core/Utils/DecompTypes.h"
#include "glwebtools_IOStream.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::IsOpened  (binary VA: 0x1405720)
// Original: glwebtools::IOStream::IsOpened
// ----------------------------------------------------------------------------
int glwebtools::IOStream::IsOpened(glwebtools::IOStream::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 1);
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 48))(*((uint32_t *)self + 1));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::Close  (binary VA: 0x1405740)
// Original: glwebtools::IOStream::Close
// ----------------------------------------------------------------------------
int glwebtools::IOStream::Close(glwebtools::IOStream::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 1);
  if ( v1 == 0 || (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 48))(*((uint32_t *)self + 1)) == 0 )
    return 0;
  G4_VCALL<void>(v1, 8);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::Read  (binary VA: 0x14057a0)
// Original: glwebtools::IOStream::Read
// ----------------------------------------------------------------------------
int glwebtools::IOStream::Read(glwebtools::IOStream::Self *self, void *a2, unsigned int a3)
{
  int v3;

  v3 = *((uint32_t *)self + 1);
  if ( v3 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v3 + 48))(*((uint32_t *)self + 1)) != 0 )
    return G4_VCALL<int>(v3, 12, a2, a3);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::Write  (binary VA: 0x1405810)
// Original: glwebtools::IOStream::Write
// ----------------------------------------------------------------------------
int glwebtools::IOStream::Write(glwebtools::IOStream::Self *self, const void *a2, unsigned int a3)
{
  int v3;

  v3 = *((uint32_t *)self + 1);
  if ( v3 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v3 + 48))(*((uint32_t *)self + 1)) != 0 )
    return G4_VCALL<int>(v3, 20, a2, a3);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::Seek  (binary VA: 0x1405880)
// Original: glwebtools::IOStream::Seek
// ----------------------------------------------------------------------------
int glwebtools::IOStream::Seek(int a1, int a2, int a3)
{
  int v3;
  char v4;

  v3 = *(uint32_t *)(a1 + 4);
  if ( v3 != 0 )
  {
    switch ( a3 )
    {
      case 1:
        v4 = G4_VCALL<int>(v3, 60, a2, 2);
        return -(v4 == 0);
      case 2:
        v4 = G4_VCALL<int>(v3, 60, a2, 0);
        return -(v4 == 0);
      case 0:
        v4 = G4_VCALL<int>(v3, 60, a2, 1);
        return -(v4 == 0);
      default:
        break;
    }
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::Tell  (binary VA: 0x1405900)
// Original: glwebtools::IOStream::Tell
// ----------------------------------------------------------------------------
int glwebtools::IOStream::Tell(glwebtools::IOStream::Self *self)
{
  int v1;
  char v2;
  int result;

  v1 = *((uint32_t *)self + 1);
  if ( v1 == 0 )
    return -1;
  v2 = (*(int (**)(uint32_t))(*(uint32_t *)v1 + 48))(*((uint32_t *)self + 1));
  result = -1;
  if ( v2 != 0 )
    return G4_VCALL<int>(v1, 64);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::GetSize  (binary VA: 0x1405940)
// Original: glwebtools::IOStream::GetSize
// ----------------------------------------------------------------------------
int glwebtools::IOStream::GetSize(glwebtools::IOStream::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 48))(*((uint32_t *)self + 1)) != 0 )
    return G4_VCALL<int>(v1, 52);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::Reserve  (binary VA: 0x14059a0)
// Original: glwebtools::IOStream::Reserve
// ----------------------------------------------------------------------------
int glwebtools::IOStream::Reserve()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::Open  (binary VA: 0x14059b0)
// Original: glwebtools::IOStream::Open
// ----------------------------------------------------------------------------
int glwebtools::IOStream::Open(int a1, char *a2, int16_t a3)
{
  int result;
  int v4;
  char *v5;

  result = 0;
  if ( a2 != nullptr )
  {
    v4 = *(uint32_t *)(a1 + 4);
    if ( v4 != 0 )
    {
      v5 = (char *)(a3 & 1);
      if ( (a3 & 2) != 0 )
        v5 = (char *)(a3 & 1 | 0x1A);
      if ( (a3 & 0x100) == 0 && (a3 & 0x200) != 0 )
        BYTE1(v5) |= 0x10u;
      return glf::FileStreamImpl::Open(v4, a2, v5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::Destroy  (binary VA: 0x1405a30)
// Original: glwebtools::IOStream::~IOStream
// ----------------------------------------------------------------------------
void glwebtools::IOStream::Destroy(glwebtools::IOStream::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094EA8);
  if ( v1 != 0 )
  {
    if ( G4_VCALL<uint8_t>(v1, 48) != 0 )
      G4_VCALL<void>(v1, 8);
    (**(void (***)(int))v1)(v1);
    sub_4EBEE0(v1);
    *((uint32_t *)self + 1) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::IOStream::Destroy_ea1405ab0  (binary VA: 0x1405ab0)
// Original: glwebtools::IOStream::~IOStream
// ----------------------------------------------------------------------------
void glwebtools::IOStream::Destroy_ea1405ab0(glwebtools::IOStream::Self *self)
{
  glwebtools::IOStream::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x1405af0 (size: 132 bytes)
// Symbol:    _ZN10glwebtools8IOStreamC1Ev
// Demangled: glwebtools::IOStream::IOStream(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools8IOStreamC2Ev'
int (**glwebtools::IOStream::IOStream(glwebtools::IOStream::Self *self))(glf::FileStreamImpl::Self *)
{
  glf::FileStreamImpl::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094EA8);
  *((uint32_t *)self + 1) = 0;
  v1 = (glf::FileStreamImpl::Self *)sub_4EBE70(0x34u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  glf::FileStreamImpl::Construct(v1);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2048D28);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v1);
  return (int (**)(glf::FileStreamImpl::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2048D28));
}

