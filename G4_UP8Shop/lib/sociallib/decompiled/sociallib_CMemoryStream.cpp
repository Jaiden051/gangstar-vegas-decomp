#include "Core/Utils/DecompTypes.h"
#include "sociallib_CMemoryStream.h"

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::onWriteOOR  (binary VA: 0x1427300)
// Original: sociallib::CMemoryStream::onWriteOOR
// ----------------------------------------------------------------------------
void sociallib::CMemoryStream::onWriteOOR()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::Destroy  (binary VA: 0x1427310)
// Original: sociallib::CMemoryStream::~CMemoryStream
// ----------------------------------------------------------------------------
void sociallib::CMemoryStream::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2095570));
  if ( *(self + 1) != nullptr )
  {
    opDeleteArray(*(self + 1));
    *(self + 1) = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::Destroy_ea1427360  (binary VA: 0x1427360)
// Original: sociallib::CMemoryStream::~CMemoryStream
// ----------------------------------------------------------------------------
void sociallib::CMemoryStream::Destroy_ea1427360(void **self)
{
  sociallib::CMemoryStream::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x14273a0 (size: 151 bytes)
// Symbol:    _ZN9sociallib13CMemoryStreamC2EPKhj
// Demangled: sociallib::CMemoryStream::CMemoryStream(unsigned char const*,unsigned int)
// ============================================================================
// Alternative name is '_ZN9sociallib13CMemoryStreamC1EPKhj'
void (**sociallib::CMemoryStream::Construct(
        sociallib::CMemoryStream::Self *self,
        const uint8_t *src,
        size_t n))(sociallib::CMemoryStream::Self * self)
{
  void (**result)(sociallib::CMemoryStream::Self *);

  result = (void (**)(sociallib::CMemoryStream::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2095570));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095570);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  if ( n != 0 )
  {
    result = (void (**)(sociallib::CMemoryStream::Self *))opNewArray(n);
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
    *((uint32_t *)self + 3) = n;
    if ( src != nullptr )
    {
      result = (void (**)(sociallib::CMemoryStream::Self *))memcpy(result, src, n);
      *((uint32_t *)self + 2) = n;
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::clear  (binary VA: 0x1427440)
// Original: sociallib::CMemoryStream::clear
// ----------------------------------------------------------------------------
void sociallib::CMemoryStream::clear(void **self)
{
  if ( *(self + 1) != nullptr )
  {
    opDeleteArray(*(self + 1));
    *(self + 1) = nullptr;
  }
  *(self + 2) = nullptr;
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::resize  (binary VA: 0x14274a0)
// Original: sociallib::CMemoryStream::resize
// ----------------------------------------------------------------------------
void sociallib::CMemoryStream::resize(sociallib::CMemoryStream::Self *self, size_t n)
{
  void *s;

  if ( *((uint32_t *)self + 3) < n )
  {
    s = (void *)opNewArray(n);
    memset(s, 0, n);
    if ( *((uint32_t *)self + 2) != 0 )
      memcpy(s, *((const void **)self + 1), *((uint32_t *)self + 2));
    if ( *((uint32_t *)self + 1) != 0 )
      opDeleteArray(*((void **)self + 1));
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(s);
    *((uint32_t *)self + 3) = n;
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::getData  (binary VA: 0x1427540)
// Original: sociallib::CMemoryStream::getData
// ----------------------------------------------------------------------------
int sociallib::CMemoryStream::getData(sociallib::CMemoryStream::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::getSize  (binary VA: 0x1427550)
// Original: sociallib::CMemoryStream::getSize
// ----------------------------------------------------------------------------
int sociallib::CMemoryStream::getSize(sociallib::CMemoryStream::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::getMaxSize  (binary VA: 0x1427560)
// Original: sociallib::CMemoryStream::getMaxSize
// ----------------------------------------------------------------------------
int sociallib::CMemoryStream::getMaxSize(sociallib::CMemoryStream::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::opAssign  (binary VA: 0x1427570)
// Original: sociallib::CMemoryStream::operator=
// ----------------------------------------------------------------------------
sociallib::CMemoryStream::Self * sociallib::CMemoryStream::opAssign(sociallib::CMemoryStream::Self *self, const sociallib::CMemoryStream::Self *a2)
{
  signed int n;
  const void *src;
  int MaxSize;

  if ( self != a2 )
  {
    if ( *((uint32_t *)self + 1) != 0 )
    {
      opDeleteArray(*((void **)self + 1));
      *((uint32_t *)self + 1) = 0;
    }
    n = sociallib::CMemoryStream::getSize(a2);
    MaxSize = sociallib::CMemoryStream::getMaxSize((sociallib::CMemoryStream::Self *)(a2));
    *((uint32_t *)self + 4) = 0;
    if ( n > 0 && sociallib::CMemoryStream::getData((sociallib::CMemoryStream::Self *)(a2)) != 0 )
    {
      *((uint32_t *)self + 1) = opNewArray(MaxSize);
      *((uint32_t *)self + 3) = MaxSize;
      src = (const void *)sociallib::CMemoryStream::getData((sociallib::CMemoryStream::Self *)(a2));
      memcpy(*((void **)self + 1), src, n);
      *((uint32_t *)self + 2) = n;
    }
    else
    {
      *((uint32_t *)self + 1) = 0;
      *((uint32_t *)self + 3) = 0;
      *((uint32_t *)self + 2) = 0;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::Construct  (binary VA: 0x1427650)
// Original: sociallib::CMemoryStream::CMemoryStream
// ----------------------------------------------------------------------------
sociallib::CMemoryStream::Self * sociallib::CMemoryStream::Construct(sociallib::CMemoryStream::Self *self, const sociallib::CMemoryStream::Self *a2)
{
  signed int n;
  sociallib::CMemoryStream::Self *result;
  const void *src;
  sociallib::CMemoryStream::Self *v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095570);
  *((uint32_t *)self + 1) = 0;
  n = sociallib::CMemoryStream::getSize(a2);
  result = (sociallib::CMemoryStream::Self *)sociallib::CMemoryStream::getMaxSize((sociallib::CMemoryStream::Self *)(a2));
  v5 = result;
  *((uint32_t *)self + 4) = 0;
  if ( n > 0 && (result = (sociallib::CMemoryStream::Self *)sociallib::CMemoryStream::getData((sociallib::CMemoryStream::Self *)(a2))) != nullptr )
  {
    *((uint32_t *)self + 1) = opNewArray((size_t)v5);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v5);
    src = (const void *)sociallib::CMemoryStream::getData((sociallib::CMemoryStream::Self *)(a2));
    result = (sociallib::CMemoryStream::Self *)memcpy(*((void **)self + 1), src, n);
    *((uint32_t *)self + 2) = n;
  }
  else
  {
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 3) = 0;
    *((uint32_t *)self + 2) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::getPosition  (binary VA: 0x1427720)
// Original: sociallib::CMemoryStream::getPosition
// ----------------------------------------------------------------------------
int sociallib::CMemoryStream::getPosition(sociallib::CMemoryStream::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::getBytesAvailable  (binary VA: 0x1427730)
// Original: sociallib::CMemoryStream::getBytesAvailable
// ----------------------------------------------------------------------------
unsigned int sociallib::CMemoryStream::getBytesAvailable(sociallib::CMemoryStream::Self *self)
{
  unsigned int v1;
  unsigned int result;

  v1 = *((uint32_t *)self + 4);
  result = 0;
  if ( *((uint32_t *)self + 2) > v1 )
    return *((uint32_t *)self + 2) - v1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::setSize  (binary VA: 0x1427750)
// Original: sociallib::CMemoryStream::setSize
// ----------------------------------------------------------------------------
sociallib::CMemoryStream::Self * sociallib::CMemoryStream::setSize(sociallib::CMemoryStream::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 2) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::seek  (binary VA: 0x1427760)
// Original: sociallib::CMemoryStream::seek
// ----------------------------------------------------------------------------
int sociallib::CMemoryStream::seek(int a1, int a2, int a3)
{
  int result;
  int v4;

  result = a2;
  v4 = a3;
  switch ( a2 )
  {
    case 0:
      goto LABEL_6;
    case 1:
      v4 = *(uint32_t *)(a1 + 8) + a3;
LABEL_6:
      *(uint32_t *)(a1 + 16) = v4;
      return result;
    case 2:
      *(uint32_t *)(a1 + 16) += a3;
      return result;
    default:
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::readBytes  (binary VA: 0x1427790)
// Original: sociallib::CMemoryStream::readBytes
// ----------------------------------------------------------------------------
size_t sociallib::CMemoryStream::readBytes(sociallib::CMemoryStream::Self *self, char *dest, size_t a3)
{
  size_t n;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;

  n = a3;
  if ( a3 != 0 )
  {
    v4 = *((uint32_t *)self + 4);
    v5 = *((uint32_t *)self + 3);
    if ( v4 >= v5 )
    {
      return 0;
    }
    else
    {
      v6 = v5 - v4;
      if ( a3 > v6 )
        n = v6;
      memcpy(dest, (const void *)(*((uint32_t *)self + 1) + v4), n);
      *((uint32_t *)self + 4) += n;
    }
  }
  return n;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::readUTF8  (binary VA: 0x1427800)
// Original: sociallib::CMemoryStream::readUTF8
// ----------------------------------------------------------------------------
size_t sociallib::CMemoryStream::readUTF8(sociallib::CMemoryStream::Self *a1, int a2, uint16_t a3)
{
  size_t Bytes;
  void *s;

  Bytes = 0;
  if ( a3 != 0 )
  {
    s = (void *)opNewArray(a3);
    memset(s, 0, a3);
    Bytes = sociallib::CMemoryStream::readBytes(a1, (char *)s, a3);
    g4_std_compat::string_assign(a2, s, a3);
    if ( s != nullptr )
      opDeleteArray(s);
  }
  return Bytes;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::readUTF8  (binary VA: 0x14278b0)
// Original: sociallib::CMemoryStream::readUTF8
// ----------------------------------------------------------------------------
size_t sociallib::CMemoryStream::readUTF8(sociallib::CMemoryStream::Self *a1, int a2)
{
  size_t Bytes;
  char v4[2];

  *(uint16_t *)v4 = 0;
  Bytes = sociallib::CMemoryStream::readBytes(a1, v4, 2u);
  return Bytes + sociallib::CMemoryStream::readUTF8(a1, a2, *(uint16_t *)v4);
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::writeBytes  (binary VA: 0x1427920)
// Original: sociallib::CMemoryStream::writeBytes
// ----------------------------------------------------------------------------
size_t sociallib::CMemoryStream::writeBytes(sociallib::CMemoryStream::Self *self, const char *src, size_t n)
{
  unsigned int v3;
  unsigned int v4;
  size_t v5;
  bool v6; // cc

  if ( n == 0 )
    return n;
  v3 = *((uint32_t *)self + 4);
  v4 = *((uint32_t *)self + 3);
  if ( v3 < v4 )
  {
    if ( n <= v4 - v3 )
      goto LABEL_4;
    goto LABEL_7;
  }
  G4_VCALL<void>(self, 8, n);
  v3 = *((uint32_t *)self + 4);
  if ( n > *((uint32_t *)self + 3) - v3 )
  {
LABEL_7:
    G4_VCALL<void>(self, 8, n);
    v3 = *((uint32_t *)self + 4);
  }
LABEL_4:
  memcpy((void *)(*((uint32_t *)self + 1) + v3), src, n);
  v5 = n + *((uint32_t *)self + 4);
  v6 = v5 <= *((uint32_t *)self + 2);
  *((uint32_t *)self + 4) = v5;
  if ( !v6 )
    *((uint32_t *)self + 2) = v5;
  return n;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CMemoryStream::writeUTF8  (binary VA: 0x14279d0)
// Original: sociallib::CMemoryStream::writeUTF8
// ----------------------------------------------------------------------------
size_t sociallib::CMemoryStream::writeUTF8(sociallib::CMemoryStream::Self *a1, const char **a2)
{
  size_t v2;
  char v4[2];

  *(uint16_t *)v4 = *((uint32_t *)*a2 - 3);
  v2 = sociallib::CMemoryStream::writeBytes(a1, v4, 2u);
  return v2 + sociallib::CMemoryStream::writeBytes(a1, *a2, *(uint16_t *)v4);
}


