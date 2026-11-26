#include "Core/Utils/DecompTypes.h"
#include "glotv3_Event.h"

// ----------------------------------------------------------------------------
// Function: glotv3::Event::Destroy  (binary VA: 0x133d770)
// Original: glotv3::Event::~Event
// ----------------------------------------------------------------------------
void glotv3::Event::Destroy(glotv3::Event::Self *self)
{
  void *v1;
  uint32_t *ptr;
  uint32_t *v3;
  void *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;

  v1 = *((void **)self + 30);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20939C8);
  if ( v1 != nullptr )
  {
    ptr = *(uint32_t **)v1;
    if ( *(uint32_t *)v1 != 0 && ptr != *((uint32_t **)v1 + 2) )
    {
      while ( 1 )
      {
        v3 = (uint32_t *)ptr[2];
        free(ptr);
        *(uint32_t *)v1 = (uint32_t)(uintptr_t)(v3);
        if ( v3 == nullptr || v3 == *((uint32_t **)v1 + 2) )
          break;
        ptr = v3;
      }
    }
    opDelete(*((void **)v1 + 4));
    opDelete(v1);
  }
  v4 = *((void **)self + 18);
  if ( v4 != nullptr )
  {
    v5 = *(uint32_t **)v4;
    if ( *(uint32_t *)v4 != 0 && v5 != *((uint32_t **)v4 + 2) )
    {
      while ( 1 )
      {
        v6 = (uint32_t *)v5[2];
        free(v5);
        *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v6);
        if ( v6 == nullptr || v6 == *((uint32_t **)v4 + 2) )
          break;
        v5 = v6;
      }
    }
    opDelete(*((void **)v4 + 4));
    opDelete(v4);
  }
  v7 = *((uint32_t **)self + 8);
  if ( v7 != nullptr && v7 != *((uint32_t **)self + 10) )
  {
    while ( 1 )
    {
      v8 = (uint32_t *)v7[2];
      free(v7);
      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v8);
      if ( v8 == nullptr || v8 == *((uint32_t **)self + 10) )
        break;
      v7 = v8;
    }
  }
  opDelete(*((void **)self + 12));
  v9 = *((uint32_t **)self + 3);
  if ( v9 != nullptr && v9 != *((uint32_t **)self + 5) )
  {
    while ( 1 )
    {
      v10 = (uint32_t *)v9[2];
      free(v9);
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v10);
      if ( v10 == nullptr || v10 == *((uint32_t **)self + 5) )
        break;
      v9 = v10;
    }
  }
  opDelete(*((void **)self + 7));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::Destroy_ea133d8a0  (binary VA: 0x133d8a0)
// Original: glotv3::Event::~Event
// ----------------------------------------------------------------------------
void glotv3::Event::Destroy_ea133d8a0(glotv3::Event::Self *self)
{
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setIsAutomatic  (binary VA: 0x133d8e0)
// Original: glotv3::Event::setIsAutomatic
// ----------------------------------------------------------------------------
glotv3::Event::Self * glotv3::Event::setIsAutomatic(glotv3::Event::Self *self, bool a2)
{
  *((uint8_t *)self + 4) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::isAutomatic  (binary VA: 0x133d8f0)
// Original: glotv3::Event::isAutomatic
// ----------------------------------------------------------------------------
int glotv3::Event::isAutomatic(glotv3::Event::Self *self)
{
  return *((uint8_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setPriority  (binary VA: 0x133d900)
// Original: glotv3::Event::setPriority
// ----------------------------------------------------------------------------
int glotv3::Event::setPriority(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getPriority  (binary VA: 0x133d910)
// Original: glotv3::Event::getPriority
// ----------------------------------------------------------------------------
int glotv3::Event::getPriority(glotv3::Event::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getRoot  (binary VA: 0x133da60)
// Original: glotv3::Event::getRoot
// ----------------------------------------------------------------------------
void * glotv3::Event::getRoot(glotv3::Event::Self *self)
{
  return rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
           (glotv3::Event::Self *)((char *)self + 52),
           glotv3::Event::keyEventRoot);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setRoot  (binary VA: 0x133daa0)
// Original: glotv3::Event::setRoot
// ----------------------------------------------------------------------------
const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> * glotv3::Event::setRoot(glotv3::Event::Self *self, const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2)
{
  uint32_t *v2;
  const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *result;
  const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;

  v2 = (uint32_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
         (glotv3::Event::Self *)((char *)self + 52),
         glotv3::Event::keyEventRoot));
  if ( v2 != nullptr )
  {
    v2[3] = 3;
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
  }
  result = (const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
  if ( result == a2 )
  {
    v4 = result;
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      237,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidjson::G"
      "enericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<"
      ">, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
      "this != & rhs");
    result = v4;
  }
  *(uint32_t *)result = *(uint32_t *)a2;
  *((uint32_t *)result + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)result + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)result + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 3) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setData  (binary VA: 0x133db80)
// Original: glotv3::Event::setData
// ----------------------------------------------------------------------------
void glotv3::Event::setData(glotv3::Event::Self *self, rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2)
{
  const char *v2;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;

  if ( *((uint32_t *)a2 + 3) == 3 )
  {
    v2 = (const char *)glotv3::Event::keyData;
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v3, v2);
    if ( a2 == v4 )
    {
      v5 = v4;
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        237,
        "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidjson:"
        ":GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAlloca"
        "tor<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
        "this != & rhs");
      v4 = v5;
    }
    *(uint32_t *)v4 = *(uint32_t *)a2;
    *((uint32_t *)v4 + 1) = *((uint32_t *)a2 + 1);
    *((uint32_t *)v4 + 2) = *((uint32_t *)a2 + 2);
    *((uint32_t *)v4 + 3) = *((uint32_t *)a2 + 3);
    *((uint32_t *)a2 + 3) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::removeKeyPair  (binary VA: 0x133dc50)
// Original: glotv3::Event::removeKeyPair
// ----------------------------------------------------------------------------
int glotv3::Event::removeKeyPair(int a1, uint8_t **a2)
{
  const char *s2;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  size_t n;
  uint8_t *v5;
  int result;
  int v7;
  int v8;
  unsigned int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint8_t *v12;
  int *v13;
  int v14;
  int v15;

  v12 = *a2;
  s2 = (const char *)glotv3::Event::keyData;
  v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52), glotv3::Event::keyEventRoot);
  v13 = (int *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                 v3,
                 s2);
  if ( v13[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      491,
      "bool rapidjson::GenericValue<Encoding, Allocator>::RemoveMember(const Ch*) [with Encoding = rapidjson::UTF8<>, All"
      "ocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  if ( v12 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( v13[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *v12 != 0 )
  {
    v5 = v12;
    do
      ++v5;
    while ( *v5 != 0 );
    n = v5 - v12;
  }
  v14 = *v13;
  v15 = v13[1];
  result = v15;
  v7 = *v13 + 32 * v15;
  if ( *v13 != v7 )
  {
    v8 = *v13;
    while ( 1 )
    {
      if ( *(uint32_t *)(v8 + 4) == n )
      {
        result = memcmp(*(const void **)v8, v12, n);
        if ( result == 0 )
          break;
      }
      v8 += 32;
      if ( v8 == v7 )
        return result;
    }
    if ( v8 != 0 )
    {
      if ( v15 == 0 )
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          496,
          "bool rapidjson::GenericValue<Encoding, Allocator>::RemoveMember(const Ch*) [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
          "data_.o.size > 0");
        v14 = *v13;
      }
      if ( v14 == 0 )
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          497,
          "bool rapidjson::GenericValue<Encoding, Allocator>::RemoveMember(const Ch*) [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
          "data_.o.members != 0");
        v14 = *v13;
      }
      v9 = v13[1];
      result = v9 - 1;
      v10 = (uint32_t *)(v14 + 32 * (v9 - 1));
      if ( v10 != (uint32_t *)v8 && v9 > 1 )
      {
        if ( v10 == (uint32_t *)v8 )
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            237,
            "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidj"
            "son::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPo"
            "olAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
            "this != & rhs");
        *(uint32_t *)v8 = *v10;
        *(uint32_t *)(v8 + 4) = v10[1];
        *(uint32_t *)(v8 + 8) = v10[2];
        *(uint32_t *)(v8 + 12) = v10[3];
        v11 = (uint32_t *)(v8 + 16);
        v10[3] = 0;
        if ( v10 + 4 == v11 )
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            237,
            "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidj"
            "son::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPo"
            "olAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
            "this != & rhs");
        *v11 = v10[4];
        v11[1] = v10[5];
        v11[2] = v10[6];
        v11[3] = v10[7];
        v10[7] = 0;
        result = v13[1] - 1;
      }
      v13[1] = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::removeRootPair  (binary VA: 0x133df30)
// Original: glotv3::Event::removeRootPair
// ----------------------------------------------------------------------------
int glotv3::Event::removeRootPair(int a1, uint8_t **a2)
{
  size_t n;
  uint8_t *v3;
  int result;
  int v5;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint8_t *s2;
  int *v11;
  int v12;
  int v13;

  s2 = *a2;
  v11 = (int *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                 (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52),
                 glotv3::Event::keyEventRoot);
  if ( v11[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      491,
      "bool rapidjson::GenericValue<Encoding, Allocator>::RemoveMember(const Ch*) [with Encoding = rapidjson::UTF8<>, All"
      "ocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  if ( s2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( v11[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *s2 != 0 )
  {
    v3 = s2;
    do
      ++v3;
    while ( *v3 != 0 );
    n = v3 - s2;
  }
  v12 = *v11;
  v13 = v11[1];
  result = v13;
  v5 = *v11 + 32 * v13;
  if ( *v11 != v5 )
  {
    v6 = *v11;
    while ( 1 )
    {
      if ( *(uint32_t *)(v6 + 4) == n )
      {
        result = memcmp(*(const void **)v6, s2, n);
        if ( result == 0 )
          break;
      }
      v6 += 32;
      if ( v6 == v5 )
        return result;
    }
    if ( v6 != 0 )
    {
      if ( v13 == 0 )
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          496,
          "bool rapidjson::GenericValue<Encoding, Allocator>::RemoveMember(const Ch*) [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
          "data_.o.size > 0");
        v12 = *v11;
      }
      if ( v12 == 0 )
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          497,
          "bool rapidjson::GenericValue<Encoding, Allocator>::RemoveMember(const Ch*) [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
          "data_.o.members != 0");
        v12 = *v11;
      }
      v7 = v11[1];
      result = v7 - 1;
      v8 = (uint32_t *)(v12 + 32 * (v7 - 1));
      if ( v8 != (uint32_t *)v6 && v7 > 1 )
      {
        if ( v8 == (uint32_t *)v6 )
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            237,
            "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidj"
            "son::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPo"
            "olAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
            "this != & rhs");
        *(uint32_t *)v6 = *v8;
        *(uint32_t *)(v6 + 4) = v8[1];
        *(uint32_t *)(v6 + 8) = v8[2];
        *(uint32_t *)(v6 + 12) = v8[3];
        v9 = (uint32_t *)(v6 + 16);
        v8[3] = 0;
        if ( v8 + 4 == v9 )
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            237,
            "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidj"
            "son::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPo"
            "olAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
            "this != & rhs");
        *v9 = v8[4];
        v9[1] = v8[5];
        v9[2] = v8[6];
        v9[3] = v8[7];
        v8[7] = 0;
        result = v11[1] - 1;
      }
      v11[1] = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasRootPair  (binary VA: 0x133e200)
// Original: glotv3::Event::hasRootPair
// ----------------------------------------------------------------------------
bool glotv3::Event::hasRootPair(int a1, uint8_t **a2)
{
  int *v2;
  size_t n;
  uint8_t *v4;
  int v5;
  bool result;
  int v7;
  uint8_t *s2;

  s2 = *a2;
  v2 = (int *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52),
                glotv3::Event::keyEventRoot);
  if ( s2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( v2[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *s2 != 0 )
  {
    v4 = s2;
    do
      ++v4;
    while ( *v4 != 0 );
    n = v4 - s2;
  }
  v5 = *v2;
  result = false;
  v7 = *v2 + 32 * v2[1];
  if ( v5 != v7 )
  {
    do
    {
      if ( *(uint32_t *)(v5 + 4) == n && memcmp(*(const void **)v5, s2, n) == 0 )
        return v5 != 0;
      v5 += 32;
    }
    while ( v5 != v7 );
    return false;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasToken  (binary VA: 0x133e320)
// Original: glotv3::Event::hasToken
// ----------------------------------------------------------------------------
bool glotv3::Event::hasToken(glotv3::Event::Self *self)
{
  return glotv3::Event::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keyToken));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasTimestamp  (binary VA: 0x133e350)
// Original: glotv3::Event::hasTimestamp
// ----------------------------------------------------------------------------
bool glotv3::Event::hasTimestamp(glotv3::Event::Self *self)
{
  return glotv3::Event::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keyTs));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getToken  (binary VA: 0x133e380)
// Original: glotv3::Event::getToken
// ----------------------------------------------------------------------------
int glotv3::Event::getToken(glotv3::Event::Self *self)
{
  int v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  uint8_t *v6;
  uint8_t *v7;
  char *v8;

  v1 = 0;
  if ( glotv3::Event::hasToken(self) )
  {
    v8 = (char *)(uintptr_t)(glotv3::Event::keyToken);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v3,
                       v8)
          + 13)
        & 8) != 0 )
    {
      v4 = (const char *)(uintptr_t)(glotv3::Event::keyToken);
      v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      v6 = (uint8_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
             v5,
             v4));
      v7 = v6;
      if ( (v6[13] & 8) != 0 )
      {
        return *(uint32_t *)v6;
      }
      else
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        return *(uint32_t *)v7;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getTimestamp  (binary VA: 0x133e470)
// Original: glotv3::Event::getTimestamp
// ----------------------------------------------------------------------------
int glotv3::Event::getTimestamp(glotv3::Event::Self *self)
{
  int v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  uint8_t *v6;
  uint8_t *v7;
  char *v8;

  v1 = 0;
  if ( glotv3::Event::hasTimestamp(self) )
  {
    v8 = (char *)(uintptr_t)(glotv3::Event::keyTs);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v3,
                       v8)
          + 13)
        & 8) != 0 )
    {
      v4 = (const char *)(uintptr_t)(glotv3::Event::keyTs);
      v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      v6 = (uint8_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
             v5,
             v4));
      v7 = v6;
      if ( (v6[13] & 8) != 0 )
      {
        return *(uint32_t *)v6;
      }
      else
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        return *(uint32_t *)v7;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasData  (binary VA: 0x133e560)
// Original: glotv3::Event::hasData
// ----------------------------------------------------------------------------
int glotv3::Event::hasData(glotv3::Event::Self *self)
{
  bool hasRootPair;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;

  hasRootPair = glotv3::Event::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keyData));
  v2 = 0;
  if ( hasRootPair )
  {
    v4 = (const char *)(uintptr_t)(glotv3::Event::keyData);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    LOBYTE(v2) = *((uint32_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                               v5,
                               v4)
                 + 3) == 3;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasKeyPair  (binary VA: 0x133e5e0)
// Original: glotv3::Event::hasKeyPair
// ----------------------------------------------------------------------------
bool glotv3::Event::hasKeyPair(int a1, uint8_t **a2)
{
  const char *s2;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  int *v4;
  size_t n;
  uint8_t *v6;
  int v7;
  bool result;
  int v9;
  uint8_t *v10;

  v10 = *a2;
  s2 = (const char *)(uintptr_t)(glotv3::Event::keyData);
  v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52), glotv3::Event::keyEventRoot);
  v4 = (int *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                v3,
                s2);
  if ( v10 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( v4[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *v10 != 0 )
  {
    v6 = v10;
    do
      ++v6;
    while ( *v6 != 0 );
    n = v6 - v10;
  }
  v7 = *v4;
  result = false;
  v9 = *v4 + 32 * v4[1];
  if ( v7 != v9 )
  {
    do
    {
      if ( *(uint32_t *)(v7 + 4) == n && memcmp(*(const void **)v7, v10, n) == 0 )
        return v7 != 0;
      v7 += 32;
    }
    while ( v7 != v9 );
    return false;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasSmartCount  (binary VA: 0x133e710)
// Original: glotv3::Event::hasSmartCount
// ----------------------------------------------------------------------------
bool glotv3::Event::hasSmartCount(glotv3::Event::Self *self)
{
  return glotv3::Event::hasKeyPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keyCountSmartBatch));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasCount  (binary VA: 0x133e740)
// Original: glotv3::Event::hasCount
// ----------------------------------------------------------------------------
bool glotv3::Event::hasCount(glotv3::Event::Self *self)
{
  return glotv3::Event::hasKeyPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keyCount));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasConnectivity  (binary VA: 0x133e770)
// Original: glotv3::Event::hasConnectivity
// ----------------------------------------------------------------------------
bool glotv3::Event::hasConnectivity(glotv3::Event::Self *self)
{
  return glotv3::Event::hasKeyPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keyConnectivity));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasGameTime  (binary VA: 0x133e7a0)
// Original: glotv3::Event::hasGameTime
// ----------------------------------------------------------------------------
bool glotv3::Event::hasGameTime(glotv3::Event::Self *self)
{
  return glotv3::Event::hasKeyPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keyGameTime));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getSmartCount  (binary VA: 0x133e7d0)
// Original: glotv3::Event::getSmartCount
// ----------------------------------------------------------------------------
int glotv3::Event::getSmartCount(glotv3::Event::Self *self)
{
  int v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  const char *v5;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v6;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v7;
  uint8_t *v8;
  uint8_t *v9;
  char *v10;
  char *v11;
  char *v12;

  v1 = 0;
  if ( glotv3::Event::hasSmartCount(self) )
  {
    v10 = (char *)(uintptr_t)(glotv3::Event::keyCountSmartBatch);
    v11 = (char *)(uintptr_t)(glotv3::Event::keyData);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v3, v11);
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v4,
                       v10)
          + 13)
        & 8) != 0 )
    {
      v5 = (const char *)(uintptr_t)(glotv3::Event::keyCountSmartBatch);
      v12 = (char *)(uintptr_t)(glotv3::Event::keyData);
      v6 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      v7 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v6, v12);
      v8 = (uint8_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
             v7,
             v5));
      v9 = v8;
      if ( (v8[13] & 8) != 0 )
      {
        return *(uint32_t *)v8;
      }
      else
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        return *(uint32_t *)v9;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getCount  (binary VA: 0x133e900)
// Original: glotv3::Event::getCount
// ----------------------------------------------------------------------------
int glotv3::Event::getCount(glotv3::Event::Self *self)
{
  int v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  const char *v5;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v6;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v7;
  uint8_t *v8;
  uint8_t *v9;
  char *v10;
  char *v11;
  char *v12;

  v1 = 0;
  if ( glotv3::Event::hasCount(self) )
  {
    v10 = (char *)(uintptr_t)(glotv3::Event::keyCount);
    v11 = (char *)(uintptr_t)(glotv3::Event::keyData);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v3, v11);
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v4,
                       v10)
          + 13)
        & 8) != 0 )
    {
      v5 = (const char *)(uintptr_t)(glotv3::Event::keyCount);
      v12 = (char *)(uintptr_t)(glotv3::Event::keyData);
      v6 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      v7 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v6, v12);
      v8 = (uint8_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
             v7,
             v5));
      v9 = v8;
      if ( (v8[13] & 8) != 0 )
      {
        return *(uint32_t *)v8;
      }
      else
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        return *(uint32_t *)v9;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getSessionTime  (binary VA: 0x133ea30)
// Original: glotv3::Event::getSessionTime
// ----------------------------------------------------------------------------
long double glotv3::Event::getSessionTime(glotv3::Event::Self *self)
{
  long double result; // fst7
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v2;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v6;
  int *v7;
  int v8;
  char *v9;
  char *v10;
  char *v11;
  char *v12;
  char *v13;

  result = 0.0;
  if ( glotv3::Event::hasKeyPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keySessionTime)) )
  {
    v9 = (char *)(uintptr_t)(glotv3::Event::keySessionTime);
    v10 = (char *)(uintptr_t)(glotv3::Event::keyData);
    v2 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v2, v10);
    result = (double)0.0;
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v3,
                       v9)
          + 13)
        & 0x40) != 0 )
    {
      v4 = (const char *)(uintptr_t)(glotv3::Event::keySessionTime);
      v11 = (char *)(uintptr_t)(glotv3::Event::keyData);
      v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      v6 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v5, v11);
      v7 = (int *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    v6,
                    v4);
      v8 = v7[3];
      if ( (v8 & 0x200) == 0 )
      {
        v12 = (char *)v7;
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          704,
          "double rapidjson::GenericValue<Encoding, Allocator>::GetDouble() const [with Encoding = rapidjson::UTF8<>, All"
          "ocator = rapidjson::MemoryPoolAllocator<>]",
          "IsNumber ()");
        v7 = (int *)v12;
        v8 = *((uint32_t *)v12 + 3);
      }
      if ( (v8 & 0x4000) != 0 )
      {
        return *(double *)v7;
      }
      else if ( (v8 & 0x400) != 0 )
      {
        return (double)*v7;
      }
      else if ( (v8 & 0x800) != 0 )
      {
        return (double)(unsigned int)*v7;
      }
      else if ( (v8 & 0x1000) != 0 )
      {
        return (long double)*(int64_t *)v7;
      }
      else
      {
        if ( (v8 & 0x2000) == 0 )
        {
          v13 = (char *)v7;
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            731,
            "double rapidjson::GenericValue<Encoding, Allocator>::GetDouble() const [with Encoding = rapidjson::UTF8<>, A"
            "llocator = rapidjson::MemoryPoolAllocator<>]",
            "(flags_ & kUint64Flag) != 0");
          v7 = (int *)v13;
        }
        result = (long double)*(int64_t *)v7;
        if ( v7[1] < 0 )
          return result + 1.8446744e19f;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getSessionId  (binary VA: 0x133ec20)
// Original: glotv3::Event::getSessionId
// ----------------------------------------------------------------------------
int glotv3::Event::getSessionId(glotv3::Event::Self *self)
{
  int v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  const char *v5;
  const char *v6;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v7;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v8;
  uint8_t *v9;
  uint8_t *v10;
  char *v11;
  char *v12;

  v1 = 0;
  if ( glotv3::Event::hasKeyPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keySessionId)) )
  {
    v12 = (char *)(uintptr_t)(glotv3::Event::keySessionId);
    v11 = (char *)(uintptr_t)(glotv3::Event::keyData);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v3, v11);
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v4,
                       v12)
          + 13)
        & 8) != 0 )
    {
      v5 = (const char *)(uintptr_t)(glotv3::Event::keySessionId);
      v6 = (const char *)(uintptr_t)(glotv3::Event::keyData);
      v7 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      v8 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v7, v6);
      v9 = (uint8_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
             v8,
             v5));
      v10 = v9;
      if ( (v9[13] & 8) != 0 )
      {
        return *(uint32_t *)v9;
      }
      else
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        return *(uint32_t *)v10;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getGameTime  (binary VA: 0x133ed50)
// Original: glotv3::Event::getGameTime
// ----------------------------------------------------------------------------
long double glotv3::Event::getGameTime(glotv3::Event::Self *self)
{
  long double result; // fst7
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v2;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v6;
  int *v7;
  int v8;
  char *v9;
  char *v10;
  char *v11;
  char *v12;
  char *v13;

  result = 0.0;
  if ( glotv3::Event::hasKeyPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keyGameTime)) )
  {
    v9 = (char *)(uintptr_t)(glotv3::Event::keyGameTime);
    v10 = (char *)(uintptr_t)(glotv3::Event::keyData);
    v2 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v2, v10);
    result = (double)0.0;
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v3,
                       v9)
          + 13)
        & 0x40) != 0 )
    {
      v4 = (const char *)(uintptr_t)(glotv3::Event::keyGameTime);
      v11 = (char *)(uintptr_t)(glotv3::Event::keyData);
      v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      v6 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v5, v11);
      v7 = (int *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    v6,
                    v4);
      v8 = v7[3];
      if ( (v8 & 0x200) == 0 )
      {
        v12 = (char *)v7;
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          704,
          "double rapidjson::GenericValue<Encoding, Allocator>::GetDouble() const [with Encoding = rapidjson::UTF8<>, All"
          "ocator = rapidjson::MemoryPoolAllocator<>]",
          "IsNumber ()");
        v7 = (int *)v12;
        v8 = *((uint32_t *)v12 + 3);
      }
      if ( (v8 & 0x4000) != 0 )
      {
        return *(double *)v7;
      }
      else if ( (v8 & 0x400) != 0 )
      {
        return (double)*v7;
      }
      else if ( (v8 & 0x800) != 0 )
      {
        return (double)(unsigned int)*v7;
      }
      else if ( (v8 & 0x1000) != 0 )
      {
        return (long double)*(int64_t *)v7;
      }
      else
      {
        if ( (v8 & 0x2000) == 0 )
        {
          v13 = (char *)v7;
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            731,
            "double rapidjson::GenericValue<Encoding, Allocator>::GetDouble() const [with Encoding = rapidjson::UTF8<>, A"
            "llocator = rapidjson::MemoryPoolAllocator<>]",
            "(flags_ & kUint64Flag) != 0");
          v7 = (int *)v13;
        }
        result = (long double)*(int64_t *)v7;
        if ( v7[1] < 0 )
          return result + 1.8446744e19f;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getConnectivity  (binary VA: 0x133ef40)
// Original: glotv3::Event::getConnectivity
// ----------------------------------------------------------------------------
int glotv3::Event::getConnectivity(glotv3::Event::Self *self)
{
  int v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  const char *v5;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v6;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v7;
  uint8_t *v8;
  uint8_t *v9;
  char *v10;
  char *v11;
  char *v12;

  v1 = 0;
  if ( glotv3::Event::hasConnectivity(self) )
  {
    v10 = (char *)(uintptr_t)(glotv3::Event::keyConnectivity);
    v11 = (char *)(uintptr_t)(glotv3::Event::keyData);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v3, v11);
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v4,
                       v10)
          + 13)
        & 8) != 0 )
    {
      v5 = (const char *)(uintptr_t)(glotv3::Event::keyConnectivity);
      v12 = (char *)(uintptr_t)(glotv3::Event::keyData);
      v6 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      v7 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v6, v12);
      v8 = (uint8_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
             v7,
             v5));
      v9 = v8;
      if ( (v8[13] & 8) != 0 )
      {
        return *(uint32_t *)v8;
      }
      else
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        return *(uint32_t *)v9;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getKeyPairAsDouble  (binary VA: 0x133f070)
// Original: glotv3::Event::getKeyPairAsDouble
// ----------------------------------------------------------------------------
long double glotv3::Event::getKeyPairAsDouble(int a1, char **a2)
{
  long double result; // fst7
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  const char *v5;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v6;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v7;
  int *v8;
  int v9;
  char *v10;
  char *v11;
  char *v12;
  char *v13;
  char *v14;

  result = 0.0;
  if ( glotv3::Event::hasKeyPair(a1, (uint8_t **)(a2)) )
  {
    v10 = *a2;
    v11 = (char *)(uintptr_t)(glotv3::Event::keyData);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52), glotv3::Event::keyEventRoot);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v3, v11);
    result = (double)0.0;
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v4,
                       v10)
          + 13)
        & 2) != 0 )
    {
      v5 = *a2;
      v12 = (char *)(uintptr_t)(glotv3::Event::keyData);
      v6 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52), glotv3::Event::keyEventRoot);
      v7 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v6, v12);
      v8 = (int *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    v7,
                    v5);
      v9 = v8[3];
      if ( (v9 & 0x200) == 0 )
      {
        v13 = (char *)v8;
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          704,
          "double rapidjson::GenericValue<Encoding, Allocator>::GetDouble() const [with Encoding = rapidjson::UTF8<>, All"
          "ocator = rapidjson::MemoryPoolAllocator<>]",
          "IsNumber ()");
        v8 = (int *)v13;
        v9 = *((uint32_t *)v13 + 3);
      }
      if ( (v9 & 0x4000) != 0 )
      {
        return *(double *)v8;
      }
      else if ( (v9 & 0x400) != 0 )
      {
        return (double)*v8;
      }
      else if ( (v9 & 0x800) != 0 )
      {
        return (double)(unsigned int)*v8;
      }
      else if ( (v9 & 0x1000) != 0 )
      {
        return (long double)*(int64_t *)v8;
      }
      else
      {
        if ( (v9 & 0x2000) == 0 )
        {
          v14 = (char *)v8;
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            731,
            "double rapidjson::GenericValue<Encoding, Allocator>::GetDouble() const [with Encoding = rapidjson::UTF8<>, A"
            "llocator = rapidjson::MemoryPoolAllocator<>]",
            "(flags_ & kUint64Flag) != 0");
          v8 = (int *)v14;
        }
        result = (long double)*(int64_t *)v8;
        if ( v8[1] < 0 )
          return result + 1.8446744e19f;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getKeyPairAsUInt  (binary VA: 0x133f260)
// Original: glotv3::Event::getKeyPairAsUInt
// ----------------------------------------------------------------------------
int glotv3::Event::getKeyPairAsUInt(int a1, char **a2)
{
  int v2;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  const char *v6;
  const char *v7;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v8;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v9;
  uint8_t *v10;
  uint8_t *v11;
  char *v12;
  char *v13;

  v2 = 0;
  if ( glotv3::Event::hasKeyPair(a1, (uint8_t **)(a2)) )
  {
    v13 = *a2;
    v12 = (char *)(uintptr_t)(glotv3::Event::keyData);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52), glotv3::Event::keyEventRoot);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v4, v12);
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v5,
                       v13)
          + 13)
        & 8) != 0 )
    {
      v6 = *a2;
      v7 = (const char *)(uintptr_t)(glotv3::Event::keyData);
      v8 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52), glotv3::Event::keyEventRoot);
      v9 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v8, v7);
      v10 = (uint8_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
              v9,
              v6));
      v11 = v10;
      if ( (v10[13] & 8) != 0 )
      {
        return *(uint32_t *)v10;
      }
      else
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        return *(uint32_t *)v11;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getKeyPairType  (binary VA: 0x133f380)
// Original: glotv3::Event::getKeyPairType
// ----------------------------------------------------------------------------
int glotv3::Event::getKeyPairType(int a1, const char **a2)
{
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v6;
  int v7;
  int v8;
  bool v9;
  char *v10;

  v2 = 0;
  if ( glotv3::Event::hasKeyPair(a1, (uint8_t **)a2) )
  {
    v4 = *a2;
    v10 = (char *)(uintptr_t)(glotv3::Event::keyData);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52), glotv3::Event::keyEventRoot);
    v6 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v5, v10);
    v7 = *((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                                v6,
                                v4)
         + 12);
    v9 = v7 == 5;
    v8 = v7 - 5;
    if ( v9 || v8 == 1 )
      return dword_1D04958[v8];
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getGameVersion  (binary VA: 0x133f430)
// Original: glotv3::Event::getGameVersion
// ----------------------------------------------------------------------------
glotv3::Event::Self * glotv3::Event::getGameVersion(glotv3::Event::Self *self, int a2)
{
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  char *v5;
  const char *v6;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v7;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v8;
  char **v9;
  typedef char *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_v13;
  typedef int _g4_t_v14[3];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v14)) > _g4_s4 ? (31u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 31u);

  if ( !glotv3::Event::hasKeyPair(a2, (uint8_t **)(&glotv3::Event::keyGameVersion)) )
    goto LABEL_2;
  v13 = (char *)(uintptr_t)(glotv3::Event::keyGameVersion);
  v10 = (char *)(uintptr_t)(glotv3::Event::keyData);
  v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a2 + 52), glotv3::Event::keyEventRoot);
  v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v3, v10);
  v5 = (char *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                 v4,
                 v13);
  if ( (v5[14] & 0x10) == 0 )
  {
    v12 = v5;
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      775,
      "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Allo"
      "cator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
      "IsString ()");
    if ( *(uint32_t *)v12 != 0 )
      goto LABEL_6;
LABEL_2:
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
    return self;
  }
  if ( *(uint32_t *)v5 == 0 )
    goto LABEL_2;
LABEL_6:
  v6 = (const char *)(uintptr_t)(glotv3::Event::keyData);
  v11 = (char *)(uintptr_t)(glotv3::Event::keyGameVersion);
  v7 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a2 + 52), glotv3::Event::keyEventRoot);
  v8 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v7, v6);
  v9 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                  v8,
                  v11);
  if ( (*((uint8_t *)v9 + 14) & 0x10) == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      775,
      "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Allo"
      "cator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
      "IsString ()");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), *v9, (int)(uintptr_t)(v14));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getKeyPair  (binary VA: 0x133f5d0)
// Original: glotv3::Event::getKeyPair
// ----------------------------------------------------------------------------
uint32_t * glotv3::Event::getKeyPair(uint32_t *a1, int a2, char **a3)
{
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  const char *v6;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v7;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v8;
  char **v9;
  typedef char *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13[3];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v13)) > _g4_s3 ? (31u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 31u);

  if ( glotv3::Event::hasKeyPair(a2, (uint8_t **)(a3))
    && (v10 = *a3,
        v11 = (char *)(uintptr_t)(glotv3::Event::keyData),
        v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a2 + 52), glotv3::Event::keyEventRoot),
        v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v4, v11),
        (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                      v5,
                      v10)
         + 14)
       & 0x10) != 0) )
  {
    v6 = (const char *)(uintptr_t)(glotv3::Event::keyData);
    v12 = *a3;
    v7 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a2 + 52), glotv3::Event::keyEventRoot);
    v8 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(v7, v6);
    v9 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    v8,
                    v12);
    if ( (*((uint8_t *)v9 + 14) & 0x10) == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        775,
        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Al"
        "locator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
        "IsString ()");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(a1), *v9, (int)(uintptr_t)(v13));
  }
  else
  {
    *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::hasType  (binary VA: 0x133f720)
// Original: glotv3::Event::hasType
// ----------------------------------------------------------------------------
int glotv3::Event::hasType(glotv3::Event::Self *self)
{
  size_t n;
  const char *v2;
  int v3;
  int v4;
  int v5;
  bool hasRootPair;
  const char *v7;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v8;
  const char *s2;

  s2 = (const char *)(uintptr_t)(glotv3::Event::keyEventRoot);
  if ( glotv3::Event::keyEventRoot == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( *((uint32_t *)self + 16) != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *s2 != 0 )
  {
    v2 = s2;
    do
      ++v2;
    while ( *v2 != 0 );
    n = v2 - s2;
  }
  v3 = *((uint32_t *)self + 13);
  v4 = 0;
  v5 = v3 + 32 * *((uint32_t *)self + 14);
  if ( v3 != v5 )
  {
    while ( *(uint32_t *)(v3 + 4) != n || memcmp(*(const void **)v3, s2, n) != 0 )
    {
      v3 += 32;
      if ( v3 == v5 )
        return 0;
    }
    if ( v3 == 0 )
      return 0;
    hasRootPair = glotv3::Event::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::Event::keyType));
    v4 = 0;
    if ( hasRootPair )
    {
      v7 = (const char *)(uintptr_t)(glotv3::Event::keyType);
      v8 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      LOBYTE(v4) = (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                                 v8,
                                 v7)
                    + 13)
                  & 8) != 0;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getEventType  (binary VA: 0x133f880)
// Original: glotv3::Event::getEventType
// ----------------------------------------------------------------------------
int glotv3::Event::getEventType(glotv3::Event::Self *self)
{
  int v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  uint8_t *v6;
  uint8_t *v7;
  char *v8;

  v1 = 0;
  if ( (uint8_t)glotv3::Event::hasType(self) != 0 )
  {
    v8 = (char *)(uintptr_t)(glotv3::Event::keyType);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v3,
                       v8)
          + 13)
        & 8) != 0 )
    {
      v4 = (const char *)(uintptr_t)(glotv3::Event::keyType);
      v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::Event::Self *)((char *)self + 52), glotv3::Event::keyEventRoot);
      v6 = (uint8_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
             v5,
             v4));
      v7 = v6;
      if ( (v6[13] & 8) != 0 )
      {
        return *(uint32_t *)v6;
      }
      else
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        return *(uint32_t *)v7;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::isLibspyEvent  (binary VA: 0x133f970)
// Original: glotv3::Event::isLibspyEvent
// ----------------------------------------------------------------------------
bool glotv3::Event::isLibspyEvent(glotv3::Event::Self *self)
{
  return (unsigned int)(glotv3::Event::getEventType(self) - 2) <= 3;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::getUUID  (binary VA: 0x133f9a0)
// Original: glotv3::Event::getUUID
// ----------------------------------------------------------------------------
glotv3::Event::Self * glotv3::Event::getUUID(glotv3::Event::Self *self, uint32_t *a2)
{
  size_t n;
  const char *v3;
  int v4;
  int v5;
  const char *v6;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v7;
  const char *v8;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v9;
  char **v10;
  typedef const char *_g4_t_s2;
  typedef int _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_s2)) > _g4_s0 ? (12u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v13)) > _g4_s1 ? (31u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 31u);

  s2 = (const char *)(uintptr_t)(glotv3::Event::keyEventRoot);
  if ( glotv3::Event::keyEventRoot == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( a2[16] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *s2 != 0 )
  {
    v3 = s2;
    do
      ++v3;
    while ( *v3 != 0 );
    n = v3 - s2;
  }
  v4 = a2[13];
  v5 = v4 + 32 * a2[14];
  if ( v4 == v5 )
    goto LABEL_20;
  while ( *(uint32_t *)(v4 + 4) != n || memcmp(*(const void **)v4, s2, n) != 0 )
  {
    v4 += 32;
    if ( v4 == v5 )
      goto LABEL_20;
  }
  if ( v4 != 0
    && glotv3::Event::hasRootPair((int)(uintptr_t)(a2), (uint8_t **)(&glotv3::Event::keyUuid))
    && (v6 = (const char *)(uintptr_t)(glotv3::Event::keyUuid),
        v7 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a2 + 13), glotv3::Event::keyEventRoot),
        (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                      v7,
                      v6)
         + 14)
       & 0x10) != 0) )
  {
    v8 = (const char *)(uintptr_t)(glotv3::Event::keyUuid);
    v9 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a2 + 13), glotv3::Event::keyEventRoot);
    v10 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                     v9,
                     v8);
    if ( (*((uint8_t *)v10 + 14) & 0x10) == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        775,
        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Al"
        "locator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
        "IsString ()");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), *v10, (int)(uintptr_t)(v13));
    return self;
  }
  else
  {
LABEL_20:
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::addKeyPairWithSerDesType  (binary VA: 0x13400b0)
// Original: glotv3::Event::addKeyPairWithSerDesType
// ----------------------------------------------------------------------------
char ** glotv3::Event::addKeyPairWithSerDesType(int a1, uint8_t **a2, uint32_t *a3)
{
  const char *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  size_t v5;
  uint8_t *v6;
  char *v7;
  int v8;
  int v9;
  size_t v10;
  uint8_t *v11;
  char *v12;
  int v13;
  char **result;
  int v15;
  void *v16;
  uint8_t *v17;
  unsigned int v18;
  uint8_t *v19;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v20;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char **_g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef uint8_t *_g4_t_v26;
  typedef uint32_t _g4_t_v27[4];
  typedef void *_g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v22)) > _g4_s1 ? (20u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v23)) > _g4_s2 ? (20u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v24)) > _g4_s3 ? (24u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v25)) > _g4_s4 ? (28u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v26)) > _g4_s5 ? (28u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v28)) > _g4_s7 ? (48u + sizeof(_g4_t_v28)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);

  v3 = (const char *)(uintptr_t)(glotv3::Event::keyData);
  v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52), glotv3::Event::keyEventRoot);
  v24 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                   v4,
                   v3);
  v25 = *a2;
  if ( *a2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( v24[3] != (char *)(uintptr_t)(uint8_t *)&dword_0 + 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v5 = 0;
  if ( *v25 != 0 )
  {
    v6 = v25;
    do
      ++v6;
    while ( *v6 != 0 );
    v5 = v6 - v25;
  }
  v7 = *v24;
  v8 = (int)(uintptr_t)(&(*v24)[32 * (uint32_t)(uintptr_t)(v24[1])]);
  if ( *v24 != (char *)v8 )
  {
    while ( 1 )
    {
      if ( *((uint32_t *)v7 + 1) == v5 )
      {
        v22 = v8;
        v9 = memcmp(*(const void **)v7, v25, v5);
        v8 = v22;
        if ( v9 == 0 )
          break;
      }
      v7 += 32;
      if ( v7 == (char *)v8 )
        goto LABEL_16;
    }
    if ( v7 != nullptr )
      glotv3::Event::removeKeyPair(a1, a2);
  }
LABEL_16:
  v26 = *a2;
  if ( *a2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( v24[3] != (char *)(uintptr_t)(uint8_t *)&dword_0 + 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v10 = 0;
  if ( *v26 != 0 )
  {
    v11 = v26;
    do
      ++v11;
    while ( *v11 != 0 );
    v10 = v11 - v26;
  }
  v12 = *v24;
  v13 = (int)(uintptr_t)(&(*v24)[32 * (uint32_t)(uintptr_t)(v24[1])]);
  if ( (char *)v13 == *v24 )
    goto LABEL_30;
  while ( 1 )
  {
    if ( *((uint32_t *)v12 + 1) == v10 )
    {
      v23 = v13;
      result = (char **)memcmp(*(const void **)v12, v26, v10);
      v13 = v23;
      if ( result == nullptr )
        break;
    }
    v12 += 32;
    if ( (char *)v13 == v12 )
      goto LABEL_30;
  }
  if ( v12 == nullptr )
  {
LABEL_30:
    v15 = a3[3];
    if ( (uint8_t)v15 == 5 )
    {
      v27[3] = 0;
      v20 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68);
      if ( (v15 & 0x100000) == 0 )
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          775,
          "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, "
          "Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
          "IsString ()");
      sub_133FEA0(v27, (uint8_t *)*a3, v20);
      sub_133FE10((int *)v28, *a2, *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68));
      return (char **)(uintptr_t)(sub_133FB80(v24, (int)(uintptr_t)(v28), v27, *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68)));
    }
    else
    {
      v16 = nullptr;
      v17 = *a2;
      v18 = 1;
      if ( **a2 != 0 )
      {
        v19 = *a2;
        do
          ++v19;
        while ( *v19 != 0 );
        v16 = (void *)(v19 - v17);
        v18 = (unsigned int)(uintptr_t)(v16) + 1;
      }
      v21 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68);
      v28[3] = (void *)(uintptr_t)3145733u;
      v28[0] = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v21, v18);
      v28[1] = v16;
      memcpy(v28[0], v17, (size_t)v16);
      *((uint8_t *)v28[0] + (unsigned int)(uintptr_t)(v16)) = 0;
      return (char **)(uintptr_t)(sub_133FB80(v24, (int)(uintptr_t)(v28), a3, *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68)));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::addKeyPair  (binary VA: 0x13403e0)
// Original: glotv3::Event::addKeyPair
// ----------------------------------------------------------------------------
char ** glotv3::Event::addKeyPair(int a1, uint8_t **a2, glotv3::EventValue::Self *a3)
{
  char *v3;

  v3 = glotv3::EventValue::op_rapidjson::GenericValue_rapidjson_UTF8_char_rapi_ca157b(a3);
  return glotv3::Event::addKeyPairWithSerDesType(a1, a2, (uint32_t *)(v3));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setSmartCount  (binary VA: 0x1340420)
// Original: glotv3::Event::setSmartCount
// ----------------------------------------------------------------------------
void glotv3::Event::setSmartCount(glotv3::Event::Self *self, void *a2)
{
  uint32_t *v2;
  typedef void *_g4_t_v3[10];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v4)) > _g4_s1 ? (40u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v5)) > _g4_s2 ? (44u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  v3[2] = (void *)(uintptr_t)3;
  v3[6] = nullptr;
  v3[9] = nullptr;
  v3[8] = (void *)(uintptr_t)2048;
  v4 = opNew(1u);
  v5 = v4;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v3[7] = v2;
  v3[0] = a2;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::Event::keyCountSmartBatch,
    (glotv3::EventValue::Self *)v3);
  glotv3::EventValue::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setCount  (binary VA: 0x13404e0)
// Original: glotv3::Event::setCount
// ----------------------------------------------------------------------------
void glotv3::Event::setCount(glotv3::Event::Self *self, void *a2)
{
  uint32_t *v2;
  typedef void *_g4_t_v3[10];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v4)) > _g4_s1 ? (40u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v5)) > _g4_s2 ? (44u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  v3[2] = (void *)(uintptr_t)3;
  v3[6] = nullptr;
  v3[9] = nullptr;
  v3[8] = (void *)(uintptr_t)2048;
  v4 = opNew(1u);
  v5 = v4;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v3[7] = v2;
  v3[0] = a2;
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::Event::keyCount, (glotv3::EventValue::Self *)v3);
  glotv3::EventValue::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setSessionTime  (binary VA: 0x13405a0)
// Original: glotv3::Event::setSessionTime
// ----------------------------------------------------------------------------
void glotv3::Event::setSessionTime(glotv3::Event::Self *self, double a2)
{
  uint32_t *v2;
  typedef double _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v8)) > _g4_s5 ? (36u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v9)) > _g4_s6 ? (40u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v10)) > _g4_s7 ? (44u + sizeof(_g4_t_v10)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);

  v4 = 1;
  v5 = 0;
  v8 = 0;
  v7 = 2048;
  v9 = opNew(1u);
  v10 = v9;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v6 = v2;
  v3 = a2;
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::Event::keySessionTime, (glotv3::EventValue::Self *)&v3);
  glotv3::EventValue::Destroy((void **)&v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setSessionId  (binary VA: 0x1340670)
// Original: glotv3::Event::setSessionId
// ----------------------------------------------------------------------------
void glotv3::Event::setSessionId(glotv3::Event::Self *self, void *a2)
{
  uint32_t *v2;
  typedef void *_g4_t_v3[10];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v4)) > _g4_s1 ? (40u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v5)) > _g4_s2 ? (44u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  v3[2] = (void *)(uintptr_t)3;
  v3[6] = nullptr;
  v3[9] = nullptr;
  v3[8] = (void *)(uintptr_t)2048;
  v4 = opNew(1u);
  v5 = v4;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v3[7] = v2;
  v3[0] = a2;
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::Event::keySessionId, (glotv3::EventValue::Self *)v3);
  glotv3::EventValue::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setGameTime  (binary VA: 0x1340730)
// Original: glotv3::Event::setGameTime
// ----------------------------------------------------------------------------
void glotv3::Event::setGameTime(glotv3::Event::Self *self, double a2)
{
  uint32_t *v2;
  typedef double _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v8)) > _g4_s5 ? (36u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v9)) > _g4_s6 ? (40u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v10)) > _g4_s7 ? (44u + sizeof(_g4_t_v10)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);

  v4 = 1;
  v5 = 0;
  v8 = 0;
  v7 = 2048;
  v9 = opNew(1u);
  v10 = v9;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v6 = v2;
  v3 = a2;
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::Event::keyGameTime, (glotv3::EventValue::Self *)&v3);
  glotv3::EventValue::Destroy((void **)&v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setConnectivity  (binary VA: 0x1340800)
// Original: glotv3::Event::setConnectivity
// ----------------------------------------------------------------------------
void glotv3::Event::setConnectivity(int a1, void *a2)
{
  uint32_t *v2;
  typedef void *_g4_t_v3[10];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v4)) > _g4_s1 ? (40u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v5)) > _g4_s2 ? (44u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  v3[2] = (void *)(uintptr_t)2;
  v3[6] = nullptr;
  v3[9] = nullptr;
  v3[8] = (void *)(uintptr_t)2048;
  v4 = opNew(1u);
  v5 = v4;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v3[7] = v2;
  v3[0] = a2;
  glotv3::Event::addKeyPair(a1, &glotv3::Event::keyConnectivity, (glotv3::EventValue::Self *)v3);
  glotv3::EventValue::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::addKeyPair  (binary VA: 0x13408c0)
// Original: glotv3::Event::addKeyPair
// ----------------------------------------------------------------------------
char ** glotv3::Event::addKeyPair(int a1, uint8_t **a2, uint8_t **a3)
{
  void *n;
  uint8_t *src;
  unsigned int v5;
  uint8_t *v6;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_dest;
  typedef void *_g4_t_v9[3];
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  n = nullptr;
  v10 = 0;
  src = *a3;
  v5 = 1;
  if ( **a3 != 0 )
  {
    v6 = *a3;
    do
      ++v6;
    while ( *v6 != 0 );
    n = (void *)(v6 - src);
    v5 = (unsigned int)(uintptr_t)(n) + 1;
  }
  dest = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68);
  v10 = 3145733;
  v9[0] = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(dest, v5);
  v9[1] = n;
  memcpy(v9[0], src, (size_t)n);
  *((uint8_t *)v9[0] + (unsigned int)(uintptr_t)(n)) = 0;
  return glotv3::Event::addKeyPairWithSerDesType(a1, a2, (uint32_t *)(v9));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setGameVersion  (binary VA: 0x1340960)
// Original: glotv3::Event::setGameVersion
// ----------------------------------------------------------------------------
char ** glotv3::Event::setGameVersion(int a1, uint8_t **a2)
{
  return glotv3::Event::addKeyPair(a1, &glotv3::Event::keyGameVersion, a2);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::addRootPairWithSerDesType  (binary VA: 0x13409a0)
// Original: glotv3::Event::addRootPairWithSerDesType
// ----------------------------------------------------------------------------
char ** glotv3::Event::addRootPairWithSerDesType(int a1, uint8_t **a2, uint32_t *a3)
{
  size_t v3;
  uint8_t *v4;
  char *v5;
  int v6;
  int v7;
  size_t v8;
  uint8_t *v9;
  char *v10;
  int v11;
  char **result;
  int v13;
  void *v14;
  uint8_t *v15;
  unsigned int v16;
  uint8_t *v17;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v18;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char **_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef uint32_t _g4_t_v25[4];
  typedef void *_g4_t_v26[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v20)) > _g4_s1 ? (20u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v24)) > _g4_s5 ? (28u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v25)) > _g4_s6 ? (32u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v26)) > _g4_s7 ? (48u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);

  v22 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                   (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 52),
                   glotv3::Event::keyEventRoot);
  v23 = *a2;
  if ( *a2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( v22[3] != (char *)(uintptr_t)(uint8_t *)&dword_0 + 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v3 = 0;
  if ( *v23 != 0 )
  {
    v4 = v23;
    do
      ++v4;
    while ( *v4 != 0 );
    v3 = v4 - v23;
  }
  v5 = *v22;
  v6 = (int)(uintptr_t)(&(*v22)[32 * (uint32_t)(uintptr_t)(v22[1])]);
  if ( *v22 != (char *)v6 )
  {
    while ( 1 )
    {
      if ( *((uint32_t *)v5 + 1) == v3 )
      {
        v20 = v6;
        v7 = memcmp(*(const void **)v5, v23, v3);
        v6 = v20;
        if ( v7 == 0 )
          break;
      }
      v5 += 32;
      if ( v5 == (char *)v6 )
        goto LABEL_16;
    }
    if ( v5 != nullptr )
      glotv3::Event::removeRootPair(a1, a2);
  }
LABEL_16:
  v24 = *a2;
  if ( *a2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( v22[3] != (char *)(uintptr_t)(uint8_t *)&dword_0 + 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v8 = 0;
  if ( *v24 != 0 )
  {
    v9 = v24;
    do
      ++v9;
    while ( *v9 != 0 );
    v8 = v9 - v24;
  }
  v10 = *v22;
  v11 = (int)(uintptr_t)(&(*v22)[32 * (uint32_t)(uintptr_t)(v22[1])]);
  if ( (char *)v11 == *v22 )
    goto LABEL_30;
  while ( 1 )
  {
    if ( *((uint32_t *)v10 + 1) == v8 )
    {
      v21 = v11;
      result = (char **)memcmp(*(const void **)v10, v24, v8);
      v11 = v21;
      if ( result == nullptr )
        break;
    }
    v10 += 32;
    if ( (char *)v11 == v10 )
      goto LABEL_30;
  }
  if ( v10 == nullptr )
  {
LABEL_30:
    v13 = a3[3];
    if ( (uint8_t)v13 == 5 )
    {
      v25[3] = 0;
      v18 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68);
      if ( (v13 & 0x100000) == 0 )
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          775,
          "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, "
          "Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
          "IsString ()");
      sub_133FEA0(v25, (uint8_t *)*a3, v18);
      sub_133FE10((int *)v26, *a2, *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68));
      return (char **)(uintptr_t)(sub_133FB80(v22, (int)(uintptr_t)(v26), v25, *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68)));
    }
    else
    {
      v14 = nullptr;
      v15 = *a2;
      v16 = 1;
      if ( **a2 != 0 )
      {
        v17 = *a2;
        do
          ++v17;
        while ( *v17 != 0 );
        v14 = (void *)(v17 - v15);
        v16 = (unsigned int)(uintptr_t)(v14) + 1;
      }
      v19 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68);
      v26[3] = (void *)(uintptr_t)3145733u;
      v26[0] = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v19, v16);
      v26[1] = v14;
      memcpy(v26[0], v15, (size_t)v14);
      *((uint8_t *)v26[0] + (unsigned int)(uintptr_t)(v14)) = 0;
      return (char **)(uintptr_t)(sub_133FB80(v22, (int)(uintptr_t)(v26), a3, *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68)));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::addRootPair  (binary VA: 0x1340cc0)
// Original: glotv3::Event::addRootPair
// ----------------------------------------------------------------------------
char ** glotv3::Event::addRootPair(int a1, uint8_t **a2, glotv3::EventValue::Self *a3)
{
  char *v3;

  v3 = glotv3::EventValue::op_rapidjson::GenericValue_rapidjson_UTF8_char_rapi_ca157b(a3);
  return glotv3::Event::addRootPairWithSerDesType(a1, a2, (uint32_t *)(v3));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setEventType  (binary VA: 0x1340d00)
// Original: glotv3::Event::setEventType
// ----------------------------------------------------------------------------
void glotv3::Event::setEventType(glotv3::Event::Self *self, void *a2)
{
  uint32_t *v2;
  typedef void *_g4_t_v3[10];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v4)) > _g4_s1 ? (40u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v5)) > _g4_s2 ? (44u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  v3[2] = (void *)(uintptr_t)3;
  v3[6] = nullptr;
  v3[9] = nullptr;
  v3[8] = (void *)(uintptr_t)2048;
  v4 = opNew(1u);
  v5 = v4;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v3[7] = v2;
  v3[0] = a2;
  glotv3::Event::addRootPair((int)(uintptr_t)(self), &glotv3::Event::keyType, (glotv3::EventValue::Self *)v3);
  glotv3::EventValue::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setToken  (binary VA: 0x1340dc0)
// Original: glotv3::Event::setToken
// ----------------------------------------------------------------------------
void glotv3::Event::setToken(glotv3::Event::Self *self, void *a2)
{
  uint32_t *v2;
  typedef void *_g4_t_v3[10];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v4)) > _g4_s1 ? (40u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v5)) > _g4_s2 ? (44u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  v3[2] = (void *)(uintptr_t)3;
  v3[6] = nullptr;
  v3[9] = nullptr;
  v3[8] = (void *)(uintptr_t)2048;
  v4 = opNew(1u);
  v5 = v4;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v3[7] = v2;
  v3[0] = a2;
  glotv3::Event::addRootPair((int)(uintptr_t)(self), &glotv3::Event::keyToken, (glotv3::EventValue::Self *)v3);
  glotv3::EventValue::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::addRootPair  (binary VA: 0x1340e80)
// Original: glotv3::Event::addRootPair
// ----------------------------------------------------------------------------
char ** glotv3::Event::addRootPair(int a1, uint8_t **a2, uint8_t **a3)
{
  void *n;
  uint8_t *src;
  unsigned int v5;
  uint8_t *v6;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_dest;
  typedef void *_g4_t_v9[3];
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  n = nullptr;
  v10 = 0;
  src = *a3;
  v5 = 1;
  if ( **a3 != 0 )
  {
    v6 = *a3;
    do
      ++v6;
    while ( *v6 != 0 );
    n = (void *)(v6 - src);
    v5 = (unsigned int)(uintptr_t)(n) + 1;
  }
  dest = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 68);
  v10 = 3145733;
  v9[0] = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(dest, v5);
  v9[1] = n;
  memcpy(v9[0], src, (size_t)n);
  *((uint8_t *)v9[0] + (unsigned int)(uintptr_t)(n)) = 0;
  return glotv3::Event::addRootPairWithSerDesType(a1, a2, (uint32_t *)(v9));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::setRootKeysValues  (binary VA: 0x1340f20)
// Original: glotv3::Event::setRootKeysValues
// ----------------------------------------------------------------------------
volatile int32_t * glotv3::Event::setRootKeysValues(glotv3::Event::Self *self)
{
  uint32_t *v1;
  void *TZTAsSeconds;
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  volatile int32_t *result;
  volatile int32_t *v8;
  typedef void *_g4_t_UTCAsSeconds;
  typedef volatile int32_t *_g4_t_v10;
  typedef void *_g4_t_v11[10];
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14[7];
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_UTCAsSeconds)) > _g4_s0 ? (12u + sizeof(_g4_t_UTCAsSeconds)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v12)) > _g4_s3 ? (72u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v13)) > _g4_s4 ? (76u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v14)) > _g4_s5 ? (80u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (108u + sizeof(_g4_t_v15)) > _g4_s6 ? (108u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v16)) > _g4_s7 ? (112u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (116u + sizeof(_g4_t_v17)) > _g4_s8 ? (116u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (120u + sizeof(_g4_t_v18)) > _g4_s9 ? (120u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (124u + sizeof(_g4_t_v19)) > _g4_s10 ? (124u + sizeof(_g4_t_v19)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_UTCAsSeconds &UTCAsSeconds = *reinterpret_cast<_g4_t_UTCAsSeconds *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 72u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 108u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 112u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 116u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 120u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 124u);

  UTCAsSeconds = (void *)glotv3::Utils::GetUTCAsSeconds();
  v11[2] = (void *)(uintptr_t)3;
  v11[6] = nullptr;
  v11[9] = nullptr;
  v11[8] = (void *)(uintptr_t)2048;
  v12 = opNew(1u);
  v13 = v12;
  v1 = (uint32_t *)(malloc(0x80Cu));
  *v1 = 2048;
  v1[2] = 0;
  v1[1] = 0;
  v11[7] = v1;
  v11[0] = UTCAsSeconds;
  glotv3::Event::addRootPair((int)(uintptr_t)(self), &glotv3::Event::keyTs, (glotv3::EventValue::Self *)v11);
  glotv3::EventValue::Destroy(v11);
  TZTAsSeconds = (void *)glotv3::Utils::GetTZTAsSeconds();
  v16 = 2048;
  v14[2] = (void *)(uintptr_t)3;
  v14[6] = nullptr;
  v15 = nullptr;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v3 = opNew(1u);
  v4 = v16;
  v18 = v3;
  v19 = v3;
  v5 = (uint32_t *)(malloc(v16 + 12));
  v6 = v15;
  *v5 = v4;
  v5[2] = (uint32_t)(uintptr_t)(v6);
  v5[1] = 0;
  v15 = v5;
  v14[0] = TZTAsSeconds;
  glotv3::Event::addRootPair((int)(uintptr_t)(self), &glotv3::Event::keyTsLocal, (glotv3::EventValue::Self *)v14);
  glotv3::EventValue::Destroy(v14);
  glotv3::Utils::GetUUID((glotv3::Utils::Self *)&v10);
  glotv3::Event::addRootPair((int)(uintptr_t)(self), &glotv3::Event::keyUuid, (uint8_t **)&v10);
  result = v10;
  v8 = v10 - 3;
  if ( v10 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v10 - 1, 0xFFFFFFFF) <= 0 )
    return (g4_std::string::Rep::M_destroy((void *)v8), (volatile int32_t *)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::Construct  (binary VA: 0x1341100)
// Original: glotv3::Event::Event
// ----------------------------------------------------------------------------
glotv3::Event::Self * glotv3::Event::Construct(glotv3::Event::Self *self, bool a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v8;
  int v9;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v10;
  int v11;
  const char *v12;
  const char *v13;
  size_t v14;
  const char *v15;
  unsigned int v16;
  unsigned int v17;
  char *v18;
  int v19;
  void *v20;
  const void *v21;
  char *v22;
  uint32_t *v23;
  size_t v24;
  unsigned int v25;
  uint8_t *v26;
  char **v27;
  unsigned int v28;
  unsigned int v29;
  char *v30;
  void *v31;
  const void *v32;
  char *v33;
  char *v34;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v36;
  int v37;
  int v38;
  uint32_t *v39;
  int *v40;
  int v41;
  int v42;
  uint32_t *v43;
  int v44;
  int v45;
  uint32_t *v46;
  uint32_t *v47;
  int v48;
  int v49;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v50;
  int *v51;
  size_t v52;
  const void *v53;
  uint8_t *v54;
  char *v55;
  int v56;
  char *v57;
  char *v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  size_t v62;
  unsigned int v63;
  size_t v64;
  const char *v65;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v66;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v67;
  void *v68;
  size_t v69;
  int v70;
  void *v71;
  size_t v72;
  int v73;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20939C8);
  *((uint8_t *)self + 4) = a2;
  *((uint32_t *)self + 2) = 1;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 4) = 2048;
  v2 = opNew(1u);
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 6) = v2;
  *((uint32_t *)self + 7) = v2;
  v48 = v3;
  v4 = (uint32_t *)(malloc(v3 + 12));
  v4[1] = 0;
  *v4 = v48;
  v4[2] = *((uint32_t *)self + 3);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 2048;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  v5 = opNew(1u);
  v6 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 11) = v5;
  *((uint32_t *)self + 12) = v5;
  v49 = v6;
  v7 = (uint32_t *)(malloc(v6 + 12));
  *v7 = v49;
  v7[1] = 0;
  v7[2] = *((uint32_t *)self + 8);
  v8 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)((glotv3::Event::Self *)((char *)self + 12));
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v7);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 2048;
  if ( self == (glotv3::Event::Self *)-12 )
  {
    v40 = (int *)opNew(0x14u);
    *v40 = 0;
    v40[1] = 2048;
    v40[2] = 0;
    v40[3] = 0;
    v40[4] = 0;
    v51 = v40;
    v41 = opNew(1u);
    v42 = v51[1];
    v51[3] = v41;
    v51[4] = v41;
    v56 = v42;
    v43 = (uint32_t *)(malloc(v42 + 12));
    v43[1] = 0;
    *v43 = v56;
    v8 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)v51;
    v43[2] = *v51;
    *v51 = (int)(uintptr_t)(v43);
    dword_38 = (int)(uintptr_t)(v51);
    off_3C[0] = (uint32_t)(uintptr_t)(v51);
  }
  v9 = (int)(uintptr_t)((void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v8, *((uint32_t *)self + 22)));
  *((uint32_t *)self + 19) = v9;
  *((uint32_t *)self + 20) = v9;
  v10 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)((glotv3::Event::Self *)((char *)self + 32));
  *((uint32_t *)self + 21) = *((uint32_t *)self + 22) + v9;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)((char *)self + 32);
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 2048;
  if ( self == (glotv3::Event::Self *)-32 )
  {
    v36 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)opNew(0x14u);
    *(uint32_t *)v36 = 0;
    *((uint32_t *)v36 + 1) = 2048;
    *((uint32_t *)v36 + 2) = 0;
    *((uint32_t *)v36 + 3) = 0;
    *((uint32_t *)v36 + 4) = 0;
    v50 = v36;
    v37 = opNew(1u);
    v38 = *((uint32_t *)v50 + 1);
    *((uint32_t *)v50 + 3) = v37;
    *((uint32_t *)v50 + 4) = v37;
    v39 = (uint32_t *)(malloc(v38 + 12));
    *v39 = v38;
    v39[1] = 0;
    v10 = v50;
    v39[2] = *(uint32_t *)v50;
    *(uint32_t *)v50 = (uint32_t)(uintptr_t)(v39);
    dword_54 = (int)(uintptr_t)(v50);
    dword_58 = (int)(uintptr_t)(v50);
  }
  v11 = (int)(uintptr_t)((void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v10, *((uint32_t *)self + 34)));
  *((uint32_t *)self + 31) = v11;
  *((uint32_t *)self + 32) = v11;
  *((uint32_t *)self + 33) = *((uint32_t *)self + 34) + v11;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 40) = 3;
  v12 = (const char *)(uintptr_t)(glotv3::Event::keyEventRoot);
  *((uint32_t *)self + 37) = 0;
  v65 = v12;
  v13 = v12;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  v14 = 0;
  *((uint32_t *)self + 44) = 3;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 16) = 3;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  v61 = 1;
  if ( *v13 != 0 )
  {
    v15 = v13;
    do
      ++v15;
    while ( *v15 != 0 );
    v14 = v15 - v65;
    v61 = v14 + 1;
  }
  v52 = v14;
  v68 = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(
                  *((rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)self + 17),
                  v61);
  v69 = v52;
  memcpy(v68, v65, v52);
  *((uint8_t *)v68 + v52) = 0;
  v66 = *((rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)self + 17);
  if ( *((uint32_t *)self + 16) != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      434,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "IsObject ()");
  v16 = *((uint32_t *)self + 14);
  v17 = *((uint32_t *)self + 15);
  if ( v16 < v17 )
  {
    v18 = *((char **)self + 13);
  }
  else
  {
    if ( v17 != 0 )
    {
      *((uint32_t *)self + 15) = 2 * v17;
      v59 = v17 << 6;
      v18 = *((char **)self + 13);
      if ( v18 == nullptr )
      {
        v18 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v66, v59);
        v16 = *((uint32_t *)self + 14);
        goto LABEL_20;
      }
      v62 = 32 * v17;
      if ( v59 > 32 * v17 )
      {
        v46 = *(uint32_t **)v66;
        v19 = *(uint32_t *)(*(uint32_t *)v66 + 4);
        if ( v18 == (char *)(*(uint32_t *)v66 - v62 + v19 + 12) && (unsigned int)(v45 = v19 + v59 - v62) <= *v46 )
        {
          v46[1] = v45;
          if ( ((uint8_t)(uintptr_t)(v18) & 3) != 0 )
          {
            v58 = v18;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              294,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "((uintptr_t) originalPtr & 3) == 0");
            v16 = *((uint32_t *)self + 14);
            v18 = v58;
            goto LABEL_20;
          }
        }
        else
        {
          v53 = *((const void **)self + 13);
          v20 = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v66, v59);
          v21 = v53;
          if ( v20 == nullptr )
          {
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              301,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "newBuffer != 0");
            v21 = v53;
            v20 = nullptr;
          }
          v18 = (char *)memcpy(v20, v21, v62);
        }
        v16 = *((uint32_t *)self + 14);
      }
LABEL_20:
      *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v18);
      goto LABEL_22;
    }
    *((uint32_t *)self + 15) = 16;
    v18 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v66, 0x200u);
    *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v18);
    v16 = *((uint32_t *)self + 14);
  }
LABEL_22:
  v22 = &v18[32 * v16];
  *(uint32_t *)v22 = (uint32_t)(uintptr_t)(v68);
  *((uint32_t *)v22 + 1) = v69;
  *((uint32_t *)v22 + 2) = v70;
  *((uint32_t *)v22 + 3) = 3145733;
  v23 = (uint32_t *)(*((uint32_t *)self + 13) + 32 * *((uint32_t *)self + 14));
  v23[4] = *((uint32_t *)self + 37);
  v23[5] = *((uint32_t *)self + 38);
  v23[6] = *((uint32_t *)self + 39);
  v23[7] = *((uint32_t *)self + 40);
  *((uint32_t *)self + 40) = 0;
  ++*((uint32_t *)self + 14);
  v24 = 0;
  v25 = 1;
  if ( *(uintptr_t *)(glotv3::Event::keyData) != 0 )
  {
    v26 = (uint8_t *)(uintptr_t)(glotv3::Event::keyData);
    do
      ++v26;
    while ( *v26 != 0 );
    v24 = (size_t)(uintptr_t)(v26 - glotv3::Event::keyData);
    v25 = v24 + 1;
  }
  v54 = (uint8_t *)(uintptr_t)(glotv3::Event::keyData);
  v72 = v24;
  v71 = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(
                  *((rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)self + 17),
                  v25);
  memcpy(v71, v54, v72);
  *((uint8_t *)v71 + v72) = 0;
  v67 = *((rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)self + 17);
  v27 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                   (glotv3::Event::Self *)((char *)self + 52),
                   glotv3::Event::keyEventRoot);
  if ( v27[3] != (char *)(uintptr_t)((uint8_t *)&dword_0 + 3) )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      434,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "IsObject ()");
  v28 = (unsigned int)(uintptr_t)(v27[1]);
  v29 = (unsigned int)(uintptr_t)(v27[2]);
  if ( v28 < v29 )
  {
    v30 = *v27;
  }
  else if ( v29 != 0 )
  {
    v27[2] = (char *)(2 * v29);
    v63 = v29 << 6;
    v30 = *v27;
    if ( *v27 == nullptr )
    {
      v30 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v67, v63);
      v28 = (unsigned int)(uintptr_t)(v27[1]);
      *v27 = v30;
      goto LABEL_40;
    }
    v64 = 32 * v29;
    if ( v63 > 32 * v29 )
    {
      v47 = *(uint32_t **)v67;
      v60 = *(uint32_t *)(*(uint32_t *)v67 + 4);
      if ( v30 == (char *)(*(uint32_t *)v67 - v64 + v60 + 12) && (unsigned int)(v44 = v60 + v63 - v64) <= *v47 )
      {
        v47[1] = v44;
        if ( ((uint8_t)(uintptr_t)(v30) & 3) != 0 )
        {
          v57 = v30;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            294,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = ra"
            "pidjson::CrtAllocator, size_t = unsigned int]",
            "((uintptr_t) originalPtr & 3) == 0");
          v30 = v57;
          v28 = (unsigned int)(uintptr_t)(v27[1]);
          *v27 = v57;
          goto LABEL_40;
        }
      }
      else
      {
        v55 = *v27;
        v31 = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v67, v63);
        v32 = v55;
        if ( v31 == nullptr )
        {
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            301,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = ra"
            "pidjson::CrtAllocator, size_t = unsigned int]",
            "newBuffer != 0");
          v32 = v55;
          v31 = nullptr;
        }
        v30 = (char *)memcpy(v31, v32, v64);
      }
      v28 = (unsigned int)(uintptr_t)(v27[1]);
    }
    *v27 = v30;
  }
  else
  {
    v27[2] = (char *)&word_10;
    v30 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v67, 0x200u);
    *v27 = v30;
    v28 = (unsigned int)(uintptr_t)(v27[1]);
  }
LABEL_40:
  v33 = &v30[32 * v28];
  *(uint32_t *)v33 = (uint32_t)(uintptr_t)(v71);
  *((uint32_t *)v33 + 1) = v72;
  *((uint32_t *)v33 + 2) = v73;
  *((uint32_t *)v33 + 3) = 3145733;
  v34 = &(*v27)[32 * (uint32_t)(uintptr_t)(v27[1])];
  *((uint32_t *)v34 + 4) = *((uint32_t *)self + 41);
  *((uint32_t *)v34 + 5) = *((uint32_t *)self + 42);
  *((uint32_t *)v34 + 6) = *((uint32_t *)self + 43);
  *((uint32_t *)v34 + 7) = *((uint32_t *)self + 44);
  *((uint32_t *)self + 44) = 0;
  ++v27[1];
  return (glotv3::Event::Self *)glotv3::Event::setRootKeysValues(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::serializeToImplementation  (binary VA: 0x1341e00)
// Original: glotv3::Event::serializeToImplementation
// ----------------------------------------------------------------------------
void glotv3::Event::serializeToImplementation(glotv3::Event::Self *a1, char **a2)
{
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v2;
  int v3;
  int v4;
  uint32_t *v5;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *Root;
  char *v7;
  int v8;
  size_t v9;
  char *v10;
  const char *v11;
  char *v12;
  unsigned int v13;
  char *v14;
  unsigned int v15;
  char *v16;
  char *v17;
  size_t v18;
  char *v19;
  char *v20;
  char *v21;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v22;
  uint32_t *v23;
  uint32_t *v24;
  size_t v25;
  const char *v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef const char *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef size_t _g4_t_v41;
  typedef const char *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef void *_g4_t_v44;
  typedef void *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t _g4_t_v50[2];
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v29)) > _g4_s1 ? (12u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v32)) > _g4_s4 ? (12u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v33)) > _g4_s5 ? (12u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v34)) > _g4_s6 ? (16u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v35)) > _g4_s7 ? (16u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v36)) > _g4_s8 ? (16u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v37)) > _g4_s9 ? (16u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v38)) > _g4_s10 ? (16u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v39)) > _g4_s11 ? (16u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v40)) > _g4_s12 ? (20u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v41)) > _g4_s13 ? (24u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v42)) > _g4_s14 ? (24u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v43)) > _g4_s15 ? (28u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v44)) > _g4_s16 ? (32u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v45)) > _g4_s17 ? (36u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v46)) > _g4_s18 ? (40u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v47)) > _g4_s19 ? (44u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v48)) > _g4_s20 ? (48u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v49)) > _g4_s21 ? (52u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v50)) > _g4_s22 ? (64u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v51)) > _g4_s23 ? (72u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v52)) > _g4_s24 ? (76u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v53)) > _g4_s25 ? (80u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v54)) > _g4_s26 ? (84u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v55)) > _g4_s27 ? (88u + sizeof(_g4_t_v55)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 76u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 80u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 84u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 88u);

  v49 = 256;
  v44 = (void *)opNew(1u);
  v45 = v44;
  v46 = (char *)malloc(0x100u);
  v47 = v46;
  v48 = v46 + 256;
  v50[1] = 0;
  v50[0] = (uint32_t)(uintptr_t)(&v44);
  v51 = nullptr;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 256;
  v2 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)opNew(0x14u);
  *(uint32_t *)v2 = 0;
  *((uint32_t *)v2 + 1) = 2048;
  *((uint32_t *)v2 + 2) = 0;
  *((uint32_t *)v2 + 3) = 0;
  *((uint32_t *)v2 + 4) = 0;
  v3 = opNew(1u);
  v4 = *((uint32_t *)v2 + 1);
  *((uint32_t *)v2 + 3) = v3;
  *((uint32_t *)v2 + 4) = v3;
  v28 = v4;
  v5 = (uint32_t *)(malloc(v4 + 12));
  v5[1] = 0;
  *v5 = v28;
  v5[2] = *(uint32_t *)v2;
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v5);
  v50[1] = (uint32_t)(uintptr_t)(v2);
  v51 = v2;
  v52 = (int)(uintptr_t)((void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v2, v55));
  v53 = v52;
  v54 = v55 + v52;
  Root = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)glotv3::Event::getRoot(a1);
  rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
    Root,
    (rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v50);
  v7 = v47;
  v8 = (int)(uintptr_t)(v47 + 1);
  if ( v47 + 1 >= v48 )
  {
    v9 = 2 * v49;
    v29 = v47 - v46;
    if ( v47 - v46 + 1 >= (unsigned int)(2 * v49) )
      v9 = v47 - v46 + 1;
    v10 = (char *)realloc(v46, v9);
    v49 = v9;
    v7 = &v10[v29];
    v46 = v10;
    v48 = &v10[v9];
    v8 = (int)(uintptr_t)(&v10[v29 + 1]);
  }
  v47 = (char *)v8;
  *v7 = 0;
  v11 = v46;
  v12 = v47;
  if ( v46 == v47 )
  {
    __assert2(
      "../../../../../lib/rapidjson/internal/stack.h",
      83,
      "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = char, Allocator = rapidjson::CrtAllocator, size_t = unsigned int]",
      "GetSize () >= count * sizeof (T)");
    v12 = v47;
    v11 = v46;
  }
  v47 = v12 - 1;
  v13 = strlen(v11);
  v14 = *a2;
  v43 = *a2;
  v15 = a2[2] - *a2;
  if ( v13 > v15 )
  {
    v30 = *a2;
    v34 = v13;
    v41 = a2[1] - v14;
    v43 = (char *)opNew(v13);
    v13 = v34;
    if ( v41 != 0 )
    {
      memmove(v43, v30, v41);
      v16 = *a2;
      v13 = v34;
      if ( *a2 == nullptr )
        goto LABEL_11;
    }
    else
    {
      v16 = *a2;
      if ( *a2 == nullptr )
      {
LABEL_11:
        v14 = v43;
        *a2 = v43;
        a2[1] = &v43[v41];
        a2[2] = &v43[v13];
        v15 = v13;
        goto LABEL_12;
      }
    }
    v35 = v13;
    opDelete(v16);
    v13 = v35;
    goto LABEL_11;
  }
LABEL_12:
  v42 = &v11[v13];
  if ( v13 > v15 )
  {
    v36 = v13;
    v17 = (char *)opNew(v13);
    v18 = v36;
    v19 = v17;
    if ( v36 != 0 )
    {
      v33 = v17;
      memmove(v17, v11, v36);
      v20 = *a2;
      v18 = v36;
      v19 = v33;
      if ( *a2 == nullptr )
        goto LABEL_16;
    }
    else
    {
      v20 = *a2;
      if ( *a2 == nullptr )
      {
LABEL_16:
        *a2 = v19;
        v21 = &v19[v18];
        a2[1] = v21;
        a2[2] = v21;
        goto LABEL_17;
      }
    }
    v31 = v19;
    v37 = v18;
    opDelete(v20);
    v18 = v37;
    v19 = v31;
    goto LABEL_16;
  }
  v40 = a2[1];
  v25 = v40 - v43;
  if ( v13 > v40 - v43 )
  {
    v26 = &v11[v25];
    if ( v25 != 0 )
    {
      v39 = &v11[v25];
      memmove(v14, v11, v25);
      v26 = v39;
      v40 = a2[1];
    }
    v27 = 0;
    if ( v42 != v26 )
    {
      v27 = v42 - v26;
      memmove(v40, v26, v42 - v26);
    }
    a2[1] = &v40[v27];
  }
  else
  {
    if ( v13 != 0 )
    {
      v32 = v14;
      v38 = v13;
      memmove(v14, v11, v13);
      v13 = v38;
      v14 = v32;
    }
    a2[1] = &v14[v13];
  }
LABEL_17:
  v22 = v51;
  if ( v51 != nullptr )
  {
    v23 = *(uint32_t **)v51;
    if ( *(uint32_t *)v51 != 0 && v23 != *((uint32_t **)v51 + 2) )
    {
      while ( 1 )
      {
        v24 = (uint32_t *)v23[2];
        free(v23);
        *(uint32_t *)v22 = (uint32_t)(uintptr_t)(v24);
        if ( v24 == nullptr || v24 == *((uint32_t **)v22 + 2) )
          break;
        v23 = v24;
      }
    }
    opDelete(*((void **)v22 + 4));
    opDelete(v22);
  }
  free(v46);
  opDelete(v45);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Event::deserializeToImplementation  (binary VA: 0x1342390)
// Original: glotv3::Event::deserializeToImplementation
// ----------------------------------------------------------------------------
const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> * glotv3::Event::deserializeToImplementation(glotv3::Event::Self *self, std::vector<char> *a2)
{
  glotv3::Event::Self *v2;
  uint8_t *v3;
  char *v4;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  void **v11;
  uint32_t *v12;
  void **v13;
  uint32_t *v14;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  const void *v20;
  int v21;
  int v22;
  size_t v23;
  char *v24;
  typedef const void *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef void **_g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef const void *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36[4];
  typedef int _g4_t_v37;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v28)) > _g4_s3 ? (12u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v29)) > _g4_s4 ? (12u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v30)) > _g4_s5 ? (12u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v31)) > _g4_s6 ? (16u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v32)) > _g4_s7 ? (20u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v33)) > _g4_s8 ? (24u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v34)) > _g4_s9 ? (28u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v35)) > _g4_s10 ? (28u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v36)) > _g4_s11 ? (32u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v37)) > _g4_s12 ? (48u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v38)) > _g4_s13 ? (52u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v39)) > _g4_s14 ? (56u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v40)) > _g4_s15 ? (60u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v41)) > _g4_s16 ? (64u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v42)) > _g4_s17 ? (68u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v43)) > _g4_s18 ? (112u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v44)) > _g4_s19 ? (116u + sizeof(_g4_t_v44)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 116u);

  v2 = self;
  v3 = *((uint8_t **)a2 + 1);
  if ( *(v3 - 1) == 0 )
    goto LABEL_4;
  if ( v3 != *((uint8_t **)a2 + 2) )
  {
    *v3 = 0;
    ++*((uint32_t *)a2 + 1);
LABEL_4:
    v4 = *(char **)a2;
    goto LABEL_5;
  }
  v17 = (unsigned int)(uintptr_t)(&v3[-*(uint32_t *)a2]);
  if ( v17 == -1 )
    sub_1900180("vector::_M_insert_aux");
  v33 = 1;
  if ( v17 != 0 )
  {
    v18 = 2 * v17;
    if ( v17 > 2 * v17 )
      v18 = -1;
    v33 = v18;
  }
  v28 = &v3[-*(uint32_t *)a2];
  v31 = *((const void **)a2 + 1);
  v19 = opNew(v33);
  v35 = (char *)v19;
  v20 = v31;
  if ( &v28[v19] != nullptr )
    v28[v19] = 0;
  v21 = 0;
  v25 = *(const void **)a2;
  if ( v31 != *(const void **)a2 )
  {
    memmove((void *)v19, v25, (uint8_t *)v31 - (uint8_t *)v25);
    v20 = v31;
    v21 = (uint8_t *)v31 - (uint8_t *)v25;
  }
  v32 = &v35[v21 + 1];
  v22 = 0;
  v23 = *((uint32_t *)a2 + 1) - (uint32_t)(uintptr_t)(v20);
  if ( v23 != 0 )
  {
    v30 = *((uint32_t *)a2 + 1) - (uint32_t)(uintptr_t)(v20);
    memmove(v32, v20, v23);
    v22 = v30;
  }
  v24 = &v32[v22];
  if ( *(uint32_t *)a2 != 0 )
  {
    v29 = v24;
    opDelete(*(void **)a2);
    v24 = v29;
  }
  *((uint32_t *)a2 + 1) = (uint32_t)(uintptr_t)(v24);
  *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v35);
  *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(&v35[v33]);
  v4 = v35;
LABEL_5:
  v36[0] = v4;
  v36[1] = v4;
  v34 = (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)((glotv3::Event::Self *)((char *)self + 100));
  if ( self != (glotv3::Event::Self *)-100 )
    *((uint32_t *)self + 28) = 0;
  v37 = 0;
  v38 = nullptr;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 256;
  v5 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)opNew(0x14u);
  *(uint32_t *)v5 = 0;
  *((uint32_t *)v5 + 1) = 2048;
  *((uint32_t *)v5 + 2) = 0;
  *((uint32_t *)v5 + 3) = 0;
  *((uint32_t *)v5 + 4) = 0;
  v6 = opNew(1u);
  v7 = *((uint32_t *)v5 + 1);
  *((uint32_t *)v5 + 3) = v6;
  *((uint32_t *)v5 + 4) = v6;
  v26 = v7;
  v8 = (uint32_t *)(malloc(v7 + 12));
  v8[1] = 0;
  *v8 = v26;
  v8[2] = *(uint32_t *)v5;
  *(uint32_t *)v5 = (uint32_t)(uintptr_t)(v8);
  v37 = (int)(uintptr_t)(v5);
  v38 = v5;
  v39 = (int)(uintptr_t)((void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v5, v42));
  v40 = v39;
  v41 = v42 + v39;
  v43 = 0;
  v44 = 0;
  if ( (uint8_t)rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Parse<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
                          (int)(uintptr_t)(&v37),
                          v36,
                          v34) != 0 )
  {
    v9 = *((uint32_t *)self + 32);
    if ( v9 - *((uint32_t *)self + 31) != 16 )
    {
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1135,
        "rapidjson::GenericDocument<Encoding, Allocator>& rapidjson::GenericDocument<Encoding, Allocator>::ParseStream(St"
        "ream&) [with unsigned int parseFlags = 0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Encoding"
        " = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericDocument<Encoding, Allocat"
        "or> = rapidjson::GenericDocument<rapidjson::UTF8<> >]",
        "stack_.GetSize () == sizeof (ValueType)");
      v9 = *((uint32_t *)self + 32);
      if ( (unsigned int)(v9 - *((uint32_t *)self + 31)) <= 0xF )
      {
        __assert2(
          "../../../../../lib/rapidjson/internal/stack.h",
          83,
          "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = rapidjson::GenericValue<rapidjson::UTF8<> >, A"
          "llocator = rapidjson::MemoryPoolAllocator<>, size_t = unsigned int]",
          "GetSize () >= count * sizeof (T)");
        v9 = *((uint32_t *)self + 32);
      }
    }
    *((uint32_t *)self + 32) = v9 - 16;
    *((uint32_t *)self + 25) = *(uint32_t *)(v9 - 16);
    *((uint32_t *)self + 26) = *(uint32_t *)(v9 - 12);
    *((uint32_t *)self + 27) = *(uint32_t *)(v9 - 8);
    *((uint32_t *)self + 28) = *(uint32_t *)(v9 - 4);
    *(uint32_t *)(v9 - 4) = 0;
    *((uint32_t *)self + 35) = 0;
    *((uint32_t *)self + 36) = 0;
    v10 = 0;
  }
  else
  {
    v10 = v43;
    *((uint32_t *)self + 36) = v44;
    v16 = *((uint32_t *)self + 31);
    *((uint32_t *)self + 35) = v10;
    *((uint32_t *)self + 32) = v16;
  }
  v11 = (void **)v38;
  if ( v38 != nullptr )
  {
    v12 = *(uint32_t **)v38;
    if ( *(uint32_t *)v38 != 0 && v12 != *((uint32_t **)v38 + 2) )
    {
      v13 = (void **)v38;
      while ( 1 )
      {
        v14 = (uint32_t *)v12[2];
        free(v12);
        *v13 = v14;
        if ( v14 == nullptr || v14 == v13[2] )
          break;
        v12 = v14;
      }
      v11 = v13;
      v2 = self;
    }
    v27 = v11;
    opDelete(v11[4]);
    opDelete(v27);
    v10 = *((uint32_t *)v2 + 35);
  }
  if ( v10 != 0 )
    return (const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)glotv3::Glotv3Logger::WriteLog(&glotv3::errors::DESER_FAILED_ON_BUFFER);
  else
    return glotv3::Event::setRoot(v2, v34);
}


