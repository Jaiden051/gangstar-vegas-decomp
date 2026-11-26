#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventList.h"

int sub_1376070(int *a1, uint8_t *src, uint32_t *a3);
void **sub_1377840(void **a1, int a2, uint32_t *a3, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *a4);

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::isValidRootPair  (binary VA: 0x1376190)
// Original: glotv3::EventList::isValidRootPair
// ----------------------------------------------------------------------------
int glotv3::EventList::isValidRootPair(int a1, const void **a2, uint32_t *a3)
{
  int v3;
  size_t v4;
  size_t n;
  size_t v6;
  int v8;
  typedef char _g4_t_v9[4];
  typedef char _g4_t_v10[4];
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v3 = 1;
  v4 = *((uint32_t *)*a2 - 3);
  n = v4;
  v6 = *((uint32_t *)glotv3::EventList::keyGDID - 3);
  if ( v6 <= v4 )
    n = *((uint32_t *)glotv3::EventList::keyGDID - 3);
  if ( memcmp(*a2, glotv3::EventList::keyGDID, n) == 0
    && v4 == v6
    && (sub_19382B0((int)(uintptr_t)(a3), glotv3::system::ALL_DIGITS, 0, *((uint32_t *)glotv3::system::ALL_DIGITS - 3)) != -1
     || (unsigned int)(v8 = *(uint32_t *)(*a3 - 12)) > 0x14
     || v8 == 0) )
  {
    g4_std::string::construct_copy(v9, &glotv3::errors::VALIDATION_FAILED_KEY_VALUE);
    g4_std::string::append_str(v9, a2);
    g4_std::string::construct_copy(v10, v9);
    g4_std::string::append_str(v10, &glotv3::system::HASHTAG);
    g4_std::string::construct_copy(v11, v10);
    g4_std::string::append_str(v11, a3);
    glotv3::Glotv3Logger::WriteLog(v11);
    v3 = 0;
    g4_std::string::Destroy(v11);
    g4_std::string::Destroy(v10);
    g4_std::string::Destroy(v9);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::Destroy  (binary VA: 0x13762f0)
// Original: glotv3::EventList::~EventList
// ----------------------------------------------------------------------------
void glotv3::EventList::Destroy(glotv3::EventList::Self *self)
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

  v1 = *((void **)self + 27);
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
  v4 = *((void **)self + 15);
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
  v7 = *((uint32_t **)self + 5);
  if ( v7 != nullptr && v7 != *((uint32_t **)self + 7) )
  {
    while ( 1 )
    {
      v8 = (uint32_t *)v7[2];
      free(v7);
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v8);
      if ( v8 == nullptr || v8 == *((uint32_t **)self + 7) )
        break;
      v7 = v8;
    }
  }
  opDelete(*((void **)self + 9));
  v9 = *(uint32_t **)self;
  if ( *(uint32_t *)self != 0 && v9 != *((uint32_t **)self + 2) )
  {
    while ( 1 )
    {
      v10 = (uint32_t *)v9[2];
      free(v9);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v10);
      if ( v10 == nullptr || v10 == *((uint32_t **)self + 2) )
        break;
      v9 = v10;
    }
  }
  opDelete(*((void **)self + 4));
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getRoot  (binary VA: 0x1376410)
// Original: glotv3::EventList::getRoot
// ----------------------------------------------------------------------------
void * glotv3::EventList::getRoot(glotv3::EventList::Self *self)
{
  return rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
           (glotv3::EventList::Self *)((char *)self + 40),
           glotv3::EventList::keyListRoot);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::setRoot  (binary VA: 0x1376450)
// Original: glotv3::EventList::setRoot
// ----------------------------------------------------------------------------
const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> * glotv3::EventList::setRoot(glotv3::EventList::Self *self, const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2)
{
  uint32_t *v2;
  const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *result;
  const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;

  v2 = (uint32_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
         (glotv3::EventList::Self *)((char *)self + 40),
         glotv3::EventList::keyListRoot));
  if ( v2 != nullptr )
  {
    v2[3] = 3;
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
  }
  result = (const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
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
// Function: glotv3::EventList::clear  (binary VA: 0x1376530)
// Original: glotv3::EventList::clear
// ----------------------------------------------------------------------------
uint32_t * glotv3::EventList::clear(glotv3::EventList::Self *self)
{
  const char *v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v2;
  uint32_t *result;
  uint32_t *v4;

  v1 = (const char *)glotv3::EventList::keyEvents;
  v2 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
  result = (uint32_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
             v2,
             v1));
  v4 = result;
  if ( result[3] != 4 )
    result = (__assert2(
                         "../../../../../lib/rapidjson/document.h",
                         555,
                         "void rapidjson::GenericValue<Encoding, Allocator>::Clear() [with Encoding = rapidjson::UTF8<>, "
                         "Allocator = rapidjson::MemoryPoolAllocator<>]",
                         "IsArray ()"), (uint32_t *)0);
  v4[1] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getEvents  (binary VA: 0x13765b0)
// Original: glotv3::EventList::getEvents
// ----------------------------------------------------------------------------
void * glotv3::EventList::getEvents(glotv3::EventList::Self *self)
{
  const char *v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v2;

  v1 = (const char *)glotv3::EventList::keyEvents;
  v2 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
  return rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
           v2,
           v1);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::hasRootPair  (binary VA: 0x1376610)
// Original: glotv3::EventList::hasRootPair
// ----------------------------------------------------------------------------
bool glotv3::EventList::hasRootPair(int a1, uint8_t **a2)
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
                (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 40),
                glotv3::EventList::keyListRoot);
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
// Function: glotv3::EventList::hasEvents  (binary VA: 0x1376730)
// Original: glotv3::EventList::hasEvents
// ----------------------------------------------------------------------------
int glotv3::EventList::hasEvents(glotv3::EventList::Self *self)
{
  bool hasRootPair;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;

  hasRootPair = glotv3::EventList::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::EventList::keyEvents));
  v2 = 0;
  if ( hasRootPair )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyEvents);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    LOBYTE(v2) = *((uint32_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                               v5,
                               v4)
                 + 3) == 4;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getCount  (binary VA: 0x13767b0)
// Original: glotv3::EventList::getCount
// ----------------------------------------------------------------------------
int glotv3::EventList::getCount(glotv3::EventList::Self *self)
{
  char hasEvents;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  uint32_t *v6;

  hasEvents = glotv3::EventList::hasEvents(self);
  v2 = 0;
  if ( hasEvents != 0 )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyEvents);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    v6 = (uint32_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
           v5,
           v4));
    if ( v6[3] != 4 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        534,
        "rapidjson::SizeType rapidjson::GenericValue<Encoding, Allocator>::Size() const [with Encoding = rapidjson::UTF8<"
        ">, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::SizeType = unsigned int]",
        "IsArray ()");
    return v6[1];
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::hasIDFV  (binary VA: 0x1376860)
// Original: glotv3::EventList::hasIDFV
// ----------------------------------------------------------------------------
int glotv3::EventList::hasIDFV(glotv3::EventList::Self *self)
{
  bool hasRootPair;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;

  hasRootPair = glotv3::EventList::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::EventList::keyIDFV));
  v2 = 0;
  if ( hasRootPair )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyIDFV);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    LOBYTE(v2) = (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                               v5,
                               v4)
                  + 14)
                & 0x10) != 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getIDFV  (binary VA: 0x13768e0)
// Original: glotv3::EventList::getIDFV
// ----------------------------------------------------------------------------
glotv3::EventList::Self * glotv3::EventList::getIDFV(glotv3::EventList::Self *self, glotv3::EventList::Self *a2)
{
  const char *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  char **v5;
  int v6[3];

  if ( (uint8_t)glotv3::EventList::hasIDFV(a2) != 0 )
  {
    v3 = (const char *)(uintptr_t)(glotv3::EventList::keyIDFV);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)a2 + 40), glotv3::EventList::keyListRoot);
    v5 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    v4,
                    v3);
    if ( (*((uint8_t *)v5 + 14) & 0x10) == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        775,
        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Al"
        "locator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
        "IsString ()");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), *v5, (int)(uintptr_t)(v6));
  }
  else
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::hasHDIDFV  (binary VA: 0x13769c0)
// Original: glotv3::EventList::hasHDIDFV
// ----------------------------------------------------------------------------
int glotv3::EventList::hasHDIDFV(glotv3::EventList::Self *self)
{
  bool hasRootPair;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;

  hasRootPair = glotv3::EventList::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::EventList::keyHDIDFV));
  v2 = 0;
  if ( hasRootPair )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyHDIDFV);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    LOBYTE(v2) = (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                               v5,
                               v4)
                  + 14)
                & 0x10) != 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getHDIDFV  (binary VA: 0x1376a40)
// Original: glotv3::EventList::getHDIDFV
// ----------------------------------------------------------------------------
glotv3::EventList::Self * glotv3::EventList::getHDIDFV(glotv3::EventList::Self *self, glotv3::EventList::Self *a2)
{
  const char *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  char **v5;
  int v6[3];

  if ( (uint8_t)glotv3::EventList::hasHDIDFV(a2) != 0 )
  {
    v3 = (const char *)(uintptr_t)(glotv3::EventList::keyHDIDFV);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)a2 + 40), glotv3::EventList::keyListRoot);
    v5 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    v4,
                    v3);
    if ( (*((uint8_t *)v5 + 14) & 0x10) == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        775,
        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Al"
        "locator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
        "IsString ()");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), *v5, (int)(uintptr_t)(v6));
  }
  else
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::hasAnonymous  (binary VA: 0x1376b20)
// Original: glotv3::EventList::hasAnonymous
// ----------------------------------------------------------------------------
int glotv3::EventList::hasAnonymous(glotv3::EventList::Self *self)
{
  bool hasRootPair;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;

  hasRootPair = glotv3::EventList::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::EventList::keyAnonymousId));
  v2 = 0;
  if ( hasRootPair )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyAnonymousId);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    LOBYTE(v2) = (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                               v5,
                               v4)
                  + 14)
                & 0x10) != 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getAnonymousId  (binary VA: 0x1376ba0)
// Original: glotv3::EventList::getAnonymousId
// ----------------------------------------------------------------------------
glotv3::EventList::Self * glotv3::EventList::getAnonymousId(glotv3::EventList::Self *self, glotv3::EventList::Self *a2)
{
  const char *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  char **v5;
  int v6[3];

  if ( (uint8_t)glotv3::EventList::hasAnonymous(a2) != 0 )
  {
    v3 = (const char *)(uintptr_t)(glotv3::EventList::keyAnonymousId);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)a2 + 40), glotv3::EventList::keyListRoot);
    v5 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    v4,
                    v3);
    if ( (*((uint8_t *)v5 + 14) & 0x10) == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        775,
        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Al"
        "locator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
        "IsString ()");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), *v5, (int)(uintptr_t)(v6));
  }
  else
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::hasPackageTimestamp  (binary VA: 0x1376c80)
// Original: glotv3::EventList::hasPackageTimestamp
// ----------------------------------------------------------------------------
int glotv3::EventList::hasPackageTimestamp(glotv3::EventList::Self *self)
{
  bool hasRootPair;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;

  hasRootPair = glotv3::EventList::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::EventList::keyPackageTimestamp));
  v2 = 0;
  if ( hasRootPair )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyPackageTimestamp);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    LOBYTE(v2) = (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                               v5,
                               v4)
                  + 13)
                & 8) != 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getPackageTimestamp  (binary VA: 0x1376d00)
// Original: glotv3::EventList::getPackageTimestamp
// ----------------------------------------------------------------------------
int glotv3::EventList::getPackageTimestamp(glotv3::EventList::Self *self)
{
  char hasPackageTimestamp;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  uint8_t *v6;
  uint8_t *v7;

  hasPackageTimestamp = glotv3::EventList::hasPackageTimestamp(self);
  v2 = 0;
  if ( hasPackageTimestamp != 0 )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyPackageTimestamp);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    v6 = (uint8_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
           v5,
           v4));
    if ( (v6[13] & 8) != 0 )
    {
      return *(uint32_t *)v6;
    }
    else
    {
      v7 = v6;
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        685,
        "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>, A"
        "llocator = rapidjson::MemoryPoolAllocator<>]",
        "flags_ & kUintFlag");
      return *(uint32_t *)v7;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::hasGameVersionString  (binary VA: 0x1376dc0)
// Original: glotv3::EventList::hasGameVersionString
// ----------------------------------------------------------------------------
int glotv3::EventList::hasGameVersionString(glotv3::EventList::Self *self)
{
  bool hasRootPair;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;

  hasRootPair = glotv3::EventList::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::EventList::keyGameVersionString));
  v2 = 0;
  if ( hasRootPair )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyGameVersionString);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    LOBYTE(v2) = (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                               v5,
                               v4)
                  + 14)
                & 0x10) != 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getGameVersionString  (binary VA: 0x1376e40)
// Original: glotv3::EventList::getGameVersionString
// ----------------------------------------------------------------------------
glotv3::EventList::Self * glotv3::EventList::getGameVersionString(glotv3::EventList::Self *self, glotv3::EventList::Self *a2)
{
  const char *v3;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v4;
  char **v5;
  int v6[3];

  if ( (uint8_t)glotv3::EventList::hasGameVersionString(a2) != 0 )
  {
    v3 = (const char *)(uintptr_t)(glotv3::EventList::keyGameVersionString);
    v4 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)a2 + 40), glotv3::EventList::keyListRoot);
    v5 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    v4,
                    v3);
    if ( (*((uint8_t *)v5 + 14) & 0x10) == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        775,
        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Al"
        "locator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
        "IsString ()");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), *v5, (int)(uintptr_t)(v6));
  }
  else
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::hasGGID  (binary VA: 0x1376f20)
// Original: glotv3::EventList::hasGGID
// ----------------------------------------------------------------------------
int glotv3::EventList::hasGGID(glotv3::EventList::Self *self)
{
  bool hasRootPair;
  int v2;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;

  hasRootPair = glotv3::EventList::hasRootPair((int)(uintptr_t)(self), (uint8_t **)(&glotv3::EventList::keyGGID));
  v2 = 0;
  if ( hasRootPair )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyGGID);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    LOBYTE(v2) = (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                               v5,
                               v4)
                  + 13)
                & 8) != 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getGGID  (binary VA: 0x1376fa0)
// Original: glotv3::EventList::getGGID
// ----------------------------------------------------------------------------
int glotv3::EventList::getGGID(glotv3::EventList::Self *self)
{
  int v1;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  char *v6;
  char *v7;
  char *v8;

  v1 = 0;
  if ( (uint8_t)glotv3::EventList::hasGGID(self) != 0 )
  {
    v7 = (char *)(uintptr_t)(glotv3::EventList::keyGGID);
    v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
    if ( (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                       v3,
                       v7)
          + 13)
        & 8) != 0 )
    {
      v4 = (const char *)(uintptr_t)(glotv3::EventList::keyGGID);
      v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((glotv3::EventList::Self *)((char *)self + 40), glotv3::EventList::keyListRoot);
      v6 = (char *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                     v5,
                     v4);
      if ( (v6[13] & 8) != 0 )
      {
        return *(uint32_t *)v6;
      }
      else
      {
        v8 = v6;
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        return *(uint32_t *)v8;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getPHID  (binary VA: 0x1377090)
// Original: glotv3::EventList::getPHID
// ----------------------------------------------------------------------------
glotv3::EventList::Self * glotv3::EventList::getPHID(glotv3::EventList::Self *self, int a2)
{
  char **v3;
  int v4[3];

  if ( glotv3::EventList::hasRootPair(a2, (uint8_t **)&glotv3::EventList::keyPHID) )
  {
    v3 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a2 + 136),
                    glotv3::EventList::keyPHID);
    if ( (*((uint8_t *)v3 + 14) & 0x10) == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        775,
        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Al"
        "locator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
        "IsString ()");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), *v3, (int)(uintptr_t)(v4));
  }
  else
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::getUUID  (binary VA: 0x1377160)
// Original: glotv3::EventList::getUUID
// ----------------------------------------------------------------------------
glotv3::EventList::Self * glotv3::EventList::getUUID(glotv3::EventList::Self *self, int a2)
{
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v3;
  const char *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  char **v6;
  typedef char *_g4_t_v7;
  typedef int _g4_t_v8[3];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v8)) > _g4_s1 ? (31u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);

  if ( glotv3::EventList::hasRootPair(a2, (uint8_t **)(&glotv3::EventList::keyUuid))
    && (v7 = (char *)(uintptr_t)(glotv3::EventList::keyUuid),
        v3 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a2 + 40), glotv3::EventList::keyListRoot),
        (*((uint8_t *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                      v3,
                      v7)
         + 14)
       & 0x10) != 0) )
  {
    v4 = (const char *)(uintptr_t)(glotv3::EventList::keyUuid);
    v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a2 + 40), glotv3::EventList::keyListRoot);
    v6 = (char **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                    v5,
                    v4);
    if ( (*((uint8_t *)v6 + 14) & 0x10) == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        775,
        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Al"
        "locator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
        "IsString ()");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), *v6, (int)(uintptr_t)(v8));
  }
  else
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::addEvent  (binary VA: 0x1377690)
// Original: glotv3::EventList::addEvent
// ----------------------------------------------------------------------------
char * glotv3::EventList::addEvent(int a1, glotv3::Event::Self **a2)
{
  glotv3::Event::Self *v2;
  uint32_t *Root;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v4;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v5;
  void **v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  char *v10;
  char *result;
  char *v12;
  char *v13;
  char *v14;

  v2 = *a2;
  if ( *a2 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = const glotv3:"
      ":Event, typename boost::detail::sp_member_access<T>::type = const glotv3::Event::Self*]",
      "px != 0");
    v2 = *a2;
  }
  Root = (uint32_t *)(glotv3::Event::getRoot(v2));
  v4 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 56);
  v12 = (char *)(uintptr_t)(glotv3::EventList::keyEvents);
  v5 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex((rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 40), glotv3::EventList::keyListRoot);
  v6 = (void **)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                  v5,
                  v12);
  if ( v6[3] != &loc_4 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      647,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::PushBack(rapidjson::Ge"
      "nericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoo"
      "lAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
      "IsArray ()");
  v7 = (unsigned int)(uintptr_t)(v6[1]);
  v8 = (unsigned int)(uintptr_t)(v6[2]);
  if ( v7 < v8 )
  {
    v10 = (char *)*v6;
  }
  else
  {
    v9 = 16;
    if ( v8 != 0 )
      v9 = 2 * v8;
    if ( v6[3] != &loc_4 )
    {
      v13 = (char *)v9;
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        622,
        "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::Reserve(rapidjson::S"
        "izeType, Allocator&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson"
        "::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
        "IsArray ()");
      v8 = (unsigned int)(uintptr_t)(v6[2]);
      v9 = (unsigned int)(uintptr_t)(v13);
    }
    if ( v9 > v8 )
    {
      v14 = (char *)v9;
      v10 = (char *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(v4, *v6, 16 * v8, 16 * v9);
      *v6 = v10;
      v6[2] = v14;
    }
    else
    {
      v10 = (char *)*v6;
    }
    v7 = (unsigned int)(uintptr_t)(v6[1]);
  }
  v6[1] = (void *)(v7 + 1);
  result = &v10[16 * v7];
  *(uint32_t *)result = *Root;
  *((uint32_t *)result + 1) = Root[1];
  *((uint32_t *)result + 2) = Root[2];
  *((uint32_t *)result + 3) = Root[3];
  Root[3] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::addRootPairWithSerDesType  (binary VA: 0x13779b0)
// Original: glotv3::EventList::addRootPairWithSerDesType
// ----------------------------------------------------------------------------
void ** glotv3::EventList::addRootPairWithSerDesType(int a1, uint8_t **a2, uint32_t *a3)
{
  unsigned int *v3;
  size_t v4;
  uint8_t *v5;
  const void **v6;
  int v7;
  int v8;
  size_t v9;
  uint8_t *v10;
  int v11;
  const void **v12;
  int v13;
  unsigned int v14;
  int v15;
  const void **v16;
  size_t v17;
  uint8_t *v18;
  const void **v19;
  int v20;
  void **result;
  int v22;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v23;
  size_t v24;
  unsigned int v25;
  uint8_t *v26;
  uint8_t *v27;
  uint32_t *v28;
  const void **v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef const void **_g4_t_v35;
  typedef unsigned int *_g4_t_v36;
  typedef uint8_t *_g4_t_v37;
  typedef uint8_t *_g4_t_v38;
  typedef uint8_t *_g4_t_v39;
  typedef int _g4_t_v40[3];
  typedef int _g4_t_v41;
  typedef int _g4_t_v42[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v32)) > _g4_s2 ? (12u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v33)) > _g4_s3 ? (12u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v34)) > _g4_s4 ? (16u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v35)) > _g4_s5 ? (20u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v36)) > _g4_s6 ? (24u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v37)) > _g4_s7 ? (28u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v38)) > _g4_s8 ? (28u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v39)) > _g4_s9 ? (28u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v40)) > _g4_s10 ? (32u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v41)) > _g4_s11 ? (44u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v42)) > _g4_s12 ? (48u + sizeof(_g4_t_v42)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);

  v3 = (unsigned int *)rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
                         (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 40),
                         glotv3::EventList::keyListRoot);
  v36 = v3;
  v37 = *a2;
  if ( *a2 == nullptr )
  {
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
    v3 = v36;
  }
  if ( v3[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v4 = 0;
  if ( *v37 != 0 )
  {
    v5 = v37;
    do
      ++v5;
    while ( *v5 != 0 );
    v4 = v5 - v37;
  }
  v6 = (const void **)*v36;
  v7 = *v36 + 32 * v36[1];
  if ( *v36 != v7 )
  {
    while ( 1 )
    {
      if ( v6[1] == (const void *)v4 )
      {
        v30 = v7;
        v8 = memcmp(*v6, v37, v4);
        v7 = v30;
        if ( v8 == 0 )
          break;
      }
      v6 += 8;
      if ( v6 == (const void **)v7 )
        goto LABEL_37;
    }
    if ( v6 != nullptr )
    {
      v38 = *a2;
      if ( v36[3] != 3 )
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          491,
          "bool rapidjson::GenericValue<Encoding, Allocator>::RemoveMember(const Ch*) [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
          "IsObject ()");
      if ( v38 == nullptr )
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          1018,
          "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember"
          "(const Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::Gener"
          "icValue<Encoding, Allocator>::Ch = char]",
          "name");
      if ( v36[3] != 3 )
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          1019,
          "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember"
          "(const Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::Gener"
          "icValue<Encoding, Allocator>::Ch = char]",
          "IsObject ()");
      v9 = 0;
      if ( *v38 != 0 )
      {
        v10 = v38;
        do
          ++v10;
        while ( *v10 != 0 );
        v9 = v10 - v38;
      }
      v35 = (const void **)*v36;
      v34 = v36[1];
      v11 = *v36 + 32 * v34;
      if ( *v36 != v11 )
      {
        v12 = (const void **)*v36;
        while ( 1 )
        {
          if ( v12[1] == (const void *)v9 )
          {
            v31 = v11;
            v13 = memcmp(*v12, v38, v9);
            v11 = v31;
            if ( v13 == 0 )
              break;
          }
          v12 += 8;
          if ( v12 == (const void **)v11 )
            goto LABEL_37;
        }
        if ( v12 != nullptr )
        {
          if ( v34 == 0 )
          {
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              496,
              "bool rapidjson::GenericValue<Encoding, Allocator>::RemoveMember(const Ch*) [with Encoding = rapidjson::UTF"
              "8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
              "data_.o.size > 0");
            v35 = (const void **)*v36;
          }
          if ( v35 == nullptr )
          {
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              497,
              "bool rapidjson::GenericValue<Encoding, Allocator>::RemoveMember(const Ch*) [with Encoding = rapidjson::UTF"
              "8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
              "data_.o.members != 0");
            v35 = (const void **)*v36;
          }
          v14 = v36[1];
          v15 = v14 - 1;
          v16 = &v35[8 * v14 - 8];
          if ( v16 != v12 && v14 > 1 )
          {
            if ( v16 == v12 )
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                237,
                "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(ra"
                "pidjson::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::"
                "MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
                "this != & rhs");
            *v12 = *v16;
            v12[1] = v16[1];
            v12[2] = v16[2];
            v12[3] = v16[3];
            v28 = (uint32_t *)(v16 + 4);
            v29 = v12 + 4;
            v16[3] = nullptr;
            if ( v16 + 4 == v29 )
            {
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                237,
                "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(ra"
                "pidjson::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::"
                "MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
                "this != & rhs");
              v28 = (uint32_t *)(v16 + 4);
            }
            *v29 = v16[4];
            v29[1] = (const void *)v28[1];
            v29[2] = (const void *)v28[2];
            v29[3] = (const void *)v28[3];
            v16[7] = nullptr;
            v15 = v36[1] - 1;
          }
          v36[1] = v15;
        }
      }
    }
  }
LABEL_37:
  v39 = *a2;
  if ( *a2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( v36[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v17 = 0;
  if ( *v39 != 0 )
  {
    v18 = v39;
    do
      ++v18;
    while ( *v18 != 0 );
    v17 = v18 - v39;
  }
  v19 = (const void **)*v36;
  v20 = *v36 + 32 * v36[1];
  if ( *v36 == v20 )
    goto LABEL_51;
  while ( 1 )
  {
    if ( v19[1] == (const void *)v17 )
    {
      v32 = v20;
      result = (void **)memcmp(*v19, v39, v17);
      v20 = v32;
      if ( result == nullptr )
        break;
    }
    v19 += 8;
    if ( v19 == (const void **)v20 )
      goto LABEL_51;
  }
  if ( v19 == nullptr )
  {
LABEL_51:
    v22 = a3[3];
    if ( (uint8_t)v22 == 5 )
    {
      v41 = 0;
      v23 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 56);
      if ( (v22 & 0x100000) == 0 )
      {
        v33 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 56);
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          775,
          "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, "
          "Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
          "IsString ()");
        v23 = v33;
      }
      v24 = 0;
      v25 = 1;
      v26 = (uint8_t *)*a3;
      if ( *(uint8_t *)*a3 != 0 )
      {
        v27 = (uint8_t *)*a3;
        do
          ++v27;
        while ( *v27 != 0 );
        v24 = v27 - v26;
        v25 = v24 + 1;
      }
      v41 = 3145733;
      v40[0] = (int)(uintptr_t)((void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v23, v25));
      v40[1] = v24;
      memcpy((void *)v40[0], v26, v24);
      *(uint8_t *)(v40[0] + v24) = 0;
      sub_1376070((int *)v42, (uint8_t *)*a2, *(uint32_t **)(a1 + 56));
      return (void **)(uintptr_t)(sub_1377840(
               (void **)v36,
               (int)(uintptr_t)(v42),
               (uint32_t *)v40,
               *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 56)));
    }
    else
    {
      sub_1376070((int *)v42, (uint8_t *)*a2, *(uint32_t **)(a1 + 56));
      return (void **)(uintptr_t)(sub_1377840(
               (void **)v36,
               (int)(uintptr_t)(v42),
               (uint32_t *)a3,
               *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a1 + 56)));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::addRootPair  (binary VA: 0x1377f90)
// Original: glotv3::EventList::addRootPair
// ----------------------------------------------------------------------------
void ** glotv3::EventList::addRootPair(int a1, uint8_t **a2, glotv3::EventValue::Self *a3)
{
  char *v3;

  v3 = glotv3::EventValue::op_rapidjson::GenericValue_rapidjson_UTF8_char_rapi_ca157b(a3);
  return glotv3::EventList::addRootPairWithSerDesType(a1, a2, (uint32_t *)(v3));
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::setPackageTimestamp  (binary VA: 0x1377fd0)
// Original: glotv3::EventList::setPackageTimestamp
// ----------------------------------------------------------------------------
void glotv3::EventList::setPackageTimestamp(glotv3::EventList::Self *self, void *a2)
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
  glotv3::EventList::addRootPair(
    (int)(uintptr_t)(self),
    &glotv3::EventList::keyPackageTimestamp,
    (glotv3::EventValue::Self *)v3);
  glotv3::EventValue::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::setGGID  (binary VA: 0x1378090)
// Original: glotv3::EventList::setGGID
// ----------------------------------------------------------------------------
void glotv3::EventList::setGGID(glotv3::EventList::Self *self, void *a2)
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
  glotv3::EventList::addRootPair((int)(uintptr_t)(self), &glotv3::EventList::keyGGID, (glotv3::EventValue::Self *)v3);
  glotv3::EventValue::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::addRootPair  (binary VA: 0x1378150)
// Original: glotv3::EventList::addRootPair
// ----------------------------------------------------------------------------
void ** glotv3::EventList::addRootPair(int a1, uint8_t **a2, uint8_t **a3)
{
  size_t n;
  unsigned int v4;
  uint8_t *src;
  uint32_t *v6;
  uint8_t *v7;
  uint32_t *v8;
  unsigned int v9;
  int v10;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[3];
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v14)) > _g4_s2 ? (4u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v16)) > _g4_s4 ? (12u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v17)) > _g4_s5 ? (16u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  n = 0;
  v4 = 4;
  v18 = 0;
  src = *a3;
  v6 = *(uint32_t **)(a1 + 56);
  if ( **a3 != 0 )
  {
    v7 = *a3;
    do
      ++v7;
    while ( *v7 != 0 );
    n = v7 - src;
    v4 = (n + 4) & 0xFFFFFFFC;
  }
  v18 = 3145733;
  v8 = (uint32_t *)*v6;
  v12 = *(uint32_t *)(*v6 + 4);
  if ( v4 + v12 > *(uint32_t *)*v6 )
  {
    v9 = v6[1];
    v13 = v6;
    if ( v4 >= v9 )
      v9 = v4;
    v15 = v9;
    v8 = (uint32_t *)(malloc(v9 + 12));
    v8[1] = 0;
    *v8 = v15;
    v6 = v13;
    v8[2] = *v13;
    *v13 = (uint32_t)(uintptr_t)(v8);
    v12 = v8[1];
  }
  v10 = (int)(uintptr_t)(v8) + v12 + 12;
  v16 = v10;
  if ( (v10 & 3) != 0 )
  {
    v14 = v6;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v10 = v16;
    v8 = (uint32_t *)*v14;
    v12 = *(uint32_t *)(*v14 + 4);
  }
  v17[0] = v10;
  v8[1] = v12 + v4;
  v17[1] = n;
  memcpy((void *)v10, src, n);
  *(uint8_t *)(v17[0] + n) = 0;
  return glotv3::EventList::addRootPairWithSerDesType(a1, a2, v17);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::setIDFV  (binary VA: 0x1378290)
// Original: glotv3::EventList::setIDFV
// ----------------------------------------------------------------------------
void ** glotv3::EventList::setIDFV(int a1, uint8_t **a2)
{
  return glotv3::EventList::addRootPair(a1, &glotv3::EventList::keyIDFV, a2);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::setAnonymousId  (binary VA: 0x13782d0)
// Original: glotv3::EventList::setAnonymousId
// ----------------------------------------------------------------------------
void ** glotv3::EventList::setAnonymousId(int a1, uint8_t **a2)
{
  return glotv3::EventList::addRootPair(a1, &glotv3::EventList::keyAnonymousId, a2);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::setPHID  (binary VA: 0x1378310)
// Original: glotv3::EventList::setPHID
// ----------------------------------------------------------------------------
void ** glotv3::EventList::setPHID(int a1, uint8_t **a2)
{
  return glotv3::EventList::addRootPair(a1, (uint8_t **)&glotv3::EventList::keyPHID, a2);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::setGameVersionString  (binary VA: 0x1378350)
// Original: glotv3::EventList::setGameVersionString
// ----------------------------------------------------------------------------
void ** glotv3::EventList::setGameVersionString(int a1, uint8_t **a2)
{
  return glotv3::EventList::addRootPair(a1, &glotv3::EventList::keyGameVersionString, a2);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::reset  (binary VA: 0x1378390)
// Original: glotv3::EventList::reset
// ----------------------------------------------------------------------------
int glotv3::EventList::reset(glotv3::EventList::Self *self)
{
  void *UTCAsSeconds;
  uint32_t *v2;
  typedef uint8_t *_g4_t_v4;
  typedef void *_g4_t_v5[10];
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v6)) > _g4_s2 ? (56u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v7)) > _g4_s3 ? (60u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 56u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 60u);

  UTCAsSeconds = (void *)glotv3::Utils::GetUTCAsSeconds();
  v5[2] = (void *)(uintptr_t)3;
  v5[6] = nullptr;
  v5[9] = nullptr;
  v5[8] = (void *)(uintptr_t)2048;
  v6 = opNew(1u);
  v7 = v6;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v5[7] = v2;
  v5[0] = UTCAsSeconds;
  glotv3::EventList::addRootPair((int)(uintptr_t)(self), &glotv3::EventList::keyTs, (glotv3::EventValue::Self *)v5);
  glotv3::EventValue::Destroy(v5);
  glotv3::Utils::GetUUID((glotv3::Utils::Self *)&v4);
  glotv3::EventList::addRootPair((int)(uintptr_t)(self), &glotv3::EventList::keyUuid, &v4);
  return ((g4_std::string::Destroy(&v4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::setDefaultKeysValues  (binary VA: 0x13784a0)
// Original: glotv3::EventList::setDefaultKeysValues
// ----------------------------------------------------------------------------
int glotv3::EventList::setDefaultKeysValues(glotv3::EventList::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  volatile int32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  void *TZTAsSeconds;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  const void *v14;
  size_t v15;
  glotv3::EventValue::Self *v16;
  size_t v17;
  size_t v18;
  size_t v19;
  size_t v20;
  size_t v21;
  size_t v22;
  size_t v23;
  size_t v24;
  size_t v25;
  size_t v26;
  const void *v27;
  size_t v28;
  glotv3::EventValue::Self *v29;
  size_t v30;
  size_t v31;
  size_t v32;
  size_t v33;
  size_t v34;
  size_t v35;
  size_t v36;
  size_t v37;
  size_t v38;
  size_t v39;
  glotv3::TrackingManager::Self *v40;
  void *GGID;
  volatile int32_t *v42;
  int v43;
  volatile int32_t *v44;
  typedef glotv3::EventValue::Self *_g4_t_v46;
  typedef glotv3::EventValue::Self *_g4_t_UTCAsSeconds;
  typedef glotv3::EventValue::Self *_g4_t_v48;
  typedef glotv3::EventValue::Self *_g4_t_v49;
  typedef glotv3::EventValue::Self *_g4_t_v50;
  typedef glotv3::EventValue::Self *_g4_t_v51;
  typedef glotv3::EventValue::Self *_g4_t_v52;
  typedef glotv3::EventValue::Self *_g4_t_v53;
  typedef glotv3::EventValue::Self *_g4_t_v54;
  typedef glotv3::EventList::Self *_g4_t_v55;
  typedef void *_g4_t_v56[4];
  typedef void *_g4_t_v57[4];
  typedef void *_g4_t_v58[4];
  typedef void *_g4_t_v59[4];
  typedef void *_g4_t_v60[4];
  typedef void *_g4_t_v61[4];
  typedef void *_g4_t_v62[4];
  typedef void *_g4_t_v63[4];
  typedef void *_g4_t_v64[4];
  typedef void *_g4_t_v65[3];
  typedef char _g4_t_v66[4];
  typedef void *_g4_t_s1;
  typedef uint8_t *_g4_t_v68;
  typedef char _g4_t_v69[4];
  typedef uint8_t *_g4_t_v70;
  typedef uint8_t *_g4_t_v71;
  typedef uint8_t *_g4_t_v72;
  typedef uint8_t *_g4_t_v73;
  typedef uint8_t *_g4_t_v74;
  typedef uint8_t *_g4_t_v75;
  typedef uint8_t *_g4_t_v76;
  typedef uint8_t *_g4_t_v77;
  typedef uint8_t *_g4_t_v78;
  typedef uint8_t *_g4_t_v79;
  typedef uint8_t *_g4_t_v80;
  typedef uint8_t *_g4_t_v81;
  typedef uint8_t *_g4_t_v82;
  typedef uint8_t *_g4_t_v83;
  typedef uint8_t *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef volatile int32_t *_g4_t_v86;
  typedef glotv3::TrackingManager::Self *_g4_t_v87;
  typedef volatile int32_t *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef volatile int32_t *_g4_t_v90;
  typedef void *_g4_t_v91[7];
  typedef uint32_t *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef void *_g4_t_v97[7];
  typedef uint32_t *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef void *_g4_t_v103[7];
  typedef uint32_t *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef glotv3::EventList::Self **_g4_t_v109;
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_UTCAsSeconds)) > _g4_s1 ? (0u + sizeof(_g4_t_UTCAsSeconds)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v48)) > _g4_s2 ? (0u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v49)) > _g4_s3 ? (0u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v50)) > _g4_s4 ? (0u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v51)) > _g4_s5 ? (0u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v52)) > _g4_s6 ? (0u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v53)) > _g4_s7 ? (0u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v54)) > _g4_s8 ? (0u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v55)) > _g4_s9 ? (4u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v56)) > _g4_s10 ? (8u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v57)) > _g4_s11 ? (24u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v58)) > _g4_s12 ? (40u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v59)) > _g4_s13 ? (56u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v60)) > _g4_s14 ? (72u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v61)) > _g4_s15 ? (88u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v62)) > _g4_s16 ? (104u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v63)) > _g4_s17 ? (120u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v64)) > _g4_s18 ? (136u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v65)) > _g4_s19 ? (152u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (164u + sizeof(_g4_t_v66)) > _g4_s20 ? (164u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (168u + sizeof(_g4_t_s1)) > _g4_s21 ? (168u + sizeof(_g4_t_s1)) : _g4_s21,
    _g4_s23 = (172u + sizeof(_g4_t_v68)) > _g4_s22 ? (172u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (176u + sizeof(_g4_t_v69)) > _g4_s23 ? (176u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (180u + sizeof(_g4_t_v70)) > _g4_s24 ? (180u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (184u + sizeof(_g4_t_v71)) > _g4_s25 ? (184u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (188u + sizeof(_g4_t_v72)) > _g4_s26 ? (188u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (192u + sizeof(_g4_t_v73)) > _g4_s27 ? (192u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (196u + sizeof(_g4_t_v74)) > _g4_s28 ? (196u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (200u + sizeof(_g4_t_v75)) > _g4_s29 ? (200u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (204u + sizeof(_g4_t_v76)) > _g4_s30 ? (204u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (208u + sizeof(_g4_t_v77)) > _g4_s31 ? (208u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (212u + sizeof(_g4_t_v78)) > _g4_s32 ? (212u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (216u + sizeof(_g4_t_v79)) > _g4_s33 ? (216u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (220u + sizeof(_g4_t_v80)) > _g4_s34 ? (220u + sizeof(_g4_t_v80)) : _g4_s34,
    _g4_s36 = (224u + sizeof(_g4_t_v81)) > _g4_s35 ? (224u + sizeof(_g4_t_v81)) : _g4_s35,
    _g4_s37 = (228u + sizeof(_g4_t_v82)) > _g4_s36 ? (228u + sizeof(_g4_t_v82)) : _g4_s36,
    _g4_s38 = (232u + sizeof(_g4_t_v83)) > _g4_s37 ? (232u + sizeof(_g4_t_v83)) : _g4_s37,
    _g4_s39 = (236u + sizeof(_g4_t_v84)) > _g4_s38 ? (236u + sizeof(_g4_t_v84)) : _g4_s38,
    _g4_s40 = (240u + sizeof(_g4_t_v85)) > _g4_s39 ? (240u + sizeof(_g4_t_v85)) : _g4_s39,
    _g4_s41 = (244u + sizeof(_g4_t_v86)) > _g4_s40 ? (244u + sizeof(_g4_t_v86)) : _g4_s40,
    _g4_s42 = (248u + sizeof(_g4_t_v87)) > _g4_s41 ? (248u + sizeof(_g4_t_v87)) : _g4_s41,
    _g4_s43 = (252u + sizeof(_g4_t_v88)) > _g4_s42 ? (252u + sizeof(_g4_t_v88)) : _g4_s42,
    _g4_s44 = (256u + sizeof(_g4_t_v89)) > _g4_s43 ? (256u + sizeof(_g4_t_v89)) : _g4_s43,
    _g4_s45 = (260u + sizeof(_g4_t_v90)) > _g4_s44 ? (260u + sizeof(_g4_t_v90)) : _g4_s44,
    _g4_s46 = (264u + sizeof(_g4_t_v91)) > _g4_s45 ? (264u + sizeof(_g4_t_v91)) : _g4_s45,
    _g4_s47 = (292u + sizeof(_g4_t_v92)) > _g4_s46 ? (292u + sizeof(_g4_t_v92)) : _g4_s46,
    _g4_s48 = (296u + sizeof(_g4_t_v93)) > _g4_s47 ? (296u + sizeof(_g4_t_v93)) : _g4_s47,
    _g4_s49 = (300u + sizeof(_g4_t_v94)) > _g4_s48 ? (300u + sizeof(_g4_t_v94)) : _g4_s48,
    _g4_s50 = (304u + sizeof(_g4_t_v95)) > _g4_s49 ? (304u + sizeof(_g4_t_v95)) : _g4_s49,
    _g4_s51 = (308u + sizeof(_g4_t_v96)) > _g4_s50 ? (308u + sizeof(_g4_t_v96)) : _g4_s50,
    _g4_s52 = (312u + sizeof(_g4_t_v97)) > _g4_s51 ? (312u + sizeof(_g4_t_v97)) : _g4_s51,
    _g4_s53 = (340u + sizeof(_g4_t_v98)) > _g4_s52 ? (340u + sizeof(_g4_t_v98)) : _g4_s52,
    _g4_s54 = (344u + sizeof(_g4_t_v99)) > _g4_s53 ? (344u + sizeof(_g4_t_v99)) : _g4_s53,
    _g4_s55 = (348u + sizeof(_g4_t_v100)) > _g4_s54 ? (348u + sizeof(_g4_t_v100)) : _g4_s54,
    _g4_s56 = (352u + sizeof(_g4_t_v101)) > _g4_s55 ? (352u + sizeof(_g4_t_v101)) : _g4_s55,
    _g4_s57 = (356u + sizeof(_g4_t_v102)) > _g4_s56 ? (356u + sizeof(_g4_t_v102)) : _g4_s56,
    _g4_s58 = (360u + sizeof(_g4_t_v103)) > _g4_s57 ? (360u + sizeof(_g4_t_v103)) : _g4_s57,
    _g4_s59 = (388u + sizeof(_g4_t_v104)) > _g4_s58 ? (388u + sizeof(_g4_t_v104)) : _g4_s58,
    _g4_s60 = (392u + sizeof(_g4_t_v105)) > _g4_s59 ? (392u + sizeof(_g4_t_v105)) : _g4_s59,
    _g4_s61 = (396u + sizeof(_g4_t_v106)) > _g4_s60 ? (396u + sizeof(_g4_t_v106)) : _g4_s60,
    _g4_s62 = (400u + sizeof(_g4_t_v107)) > _g4_s61 ? (400u + sizeof(_g4_t_v107)) : _g4_s61,
    _g4_s63 = (404u + sizeof(_g4_t_v108)) > _g4_s62 ? (404u + sizeof(_g4_t_v108)) : _g4_s62,
    _g4_s64 = (416u + sizeof(_g4_t_v109)) > _g4_s63 ? (416u + sizeof(_g4_t_v109)) : _g4_s63
  };
  alignas(16) uint8_t _g4_sf[_g4_s64];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_UTCAsSeconds &UTCAsSeconds = *reinterpret_cast<_g4_t_UTCAsSeconds *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 72u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 104u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 120u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 136u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 152u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 164u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 168u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 172u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 176u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 180u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 184u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 188u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 192u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 196u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 200u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 204u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 208u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 212u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 216u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 220u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 224u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 228u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 232u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 236u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 240u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 244u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 248u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 252u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 256u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 260u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 264u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 292u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 296u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 300u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 304u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 308u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 312u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 340u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 344u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 348u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 352u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 356u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 360u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 388u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 392u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 396u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 400u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 404u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 416u);

  v109 = &self;
  v55 = self;
  glotv3::Porting::GetDeviceHDIDFV((glotv3::Porting::Self *)v56);
  glotv3::Porting::GetDeviceAnonymousId((glotv3::Porting::Self *)v66);
  glotv3::Porting::GetDeviceIdentifier((glotv3::Porting::Self *)&s1);
  glotv3::Porting::GetDeviceIdentifierForVendor((glotv3::Porting::Self *)v57);
  glotv3::Porting::GetDeviceMACAddress((glotv3::Porting::Self *)v58);
  glotv3::Porting::GetPublisherHostId((glotv3::Porting::Self *)v59);
  glotv3::Porting::GetGameloftDeviceIdentifier((glotv3::Porting::Self *)v60);
  glotv3::Porting::GetWindowsAdvertisingID((glotv3::Porting::Self *)v61);
  glotv3::Porting::GetIMEI((glotv3::Porting::Self *)v62);
  glotv3::Porting::GetAndroidID((glotv3::Porting::Self *)v63);
  glotv3::Porting::GetSerialNumber((glotv3::Porting::Self *)v64);
  glotv3::Porting::GetGoogleAdvertisingID((glotv3::Porting::Self *)v65);
  v91[2] = (void *)(uintptr_t)3;
  v91[6] = nullptr;
  v92 = nullptr;
  v94 = 0;
  v95 = 0;
  v93 = 2048;
  v96 = 0;
  v95 = opNew(1u);
  v96 = v95;
  v46 = (glotv3::EventValue::Self *)v93;
  v1 = (uint32_t *)(malloc(v93 + 12));
  v2 = v92;
  *v1 = (uint32_t)(uintptr_t)(v46);
  v1[2] = (uint32_t)(uintptr_t)(v2);
  v1[1] = 0;
  v92 = v1;
  v91[0] = (void *)(uintptr_t)5;
  glotv3::EventList::addRootPair(
    (int)(uintptr_t)(v55),
    &glotv3::EventList::keyProtoVersion,
    (glotv3::EventValue::Self *)v91);
  glotv3::EventValue::Destroy(v91);
  glotv3::Porting::Encrypt((int)(uintptr_t)(&v68), (int)(uintptr_t)(v66));
  glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyAnonymousId, &v68);
  g4_std::string::Destroy(&v68);
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v85);
  v3 = v85;
  if ( v85 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
      "px != 0");
    v3 = v85;
  }
  glotv3::TrackingManager::GetFedAccessToken((glotv3::TrackingManager::Self *)v69, v3);
  glotv3::Porting::Encrypt((int)(uintptr_t)(&v70), (int)(uintptr_t)(v69));
  glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyFedAccessToken, &v70);
  g4_std::string::Destroy(&v70);
  g4_std::string::Destroy(v69);
  v4 = v86;
  if ( v86 != nullptr && __sync_fetch_and_add(v86 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8);
    if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v4, 12);
  }
  UTCAsSeconds = (glotv3::EventValue::Self *)glotv3::Utils::GetUTCAsSeconds();
  v99 = 2048;
  v97[2] = (void *)(uintptr_t)3;
  v97[6] = nullptr;
  v98 = nullptr;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v5 = opNew(1u);
  v6 = v99;
  v101 = v5;
  v102 = v5;
  v7 = (uint32_t *)(malloc(v99 + 12));
  v8 = v98;
  *v7 = v6;
  v7[2] = (uint32_t)(uintptr_t)(v8);
  v7[1] = 0;
  v98 = v7;
  v97[0] = UTCAsSeconds;
  glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyTs, (glotv3::EventValue::Self *)v97);
  glotv3::EventValue::Destroy(v97);
  TZTAsSeconds = (void *)glotv3::Utils::GetTZTAsSeconds();
  v105 = 2048;
  v103[2] = (void *)(uintptr_t)3;
  v103[6] = nullptr;
  v104 = nullptr;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v10 = opNew(1u);
  v11 = v105;
  v107 = v10;
  v108 = v10;
  v12 = (uint32_t *)(malloc(v105 + 12));
  v13 = v104;
  *v12 = v11;
  v12[2] = (uint32_t)(uintptr_t)(v13);
  v12[1] = 0;
  v104 = v12;
  v103[0] = TZTAsSeconds;
  glotv3::EventList::addRootPair(
    (int)(uintptr_t)(v55),
    &glotv3::EventList::keyTsLocal,
    (glotv3::EventValue::Self *)v103);
  glotv3::EventValue::Destroy(v103);
  glotv3::Utils::GetUUID((glotv3::Utils::Self *)&v71);
  glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyUuid, &v71);
  g4_std::string::Destroy(&v71);
  v14 = (const void *)(uintptr_t)(glotv3::configuration::DEFAULT_UDID);
  v15 = *((uint32_t *)s1 - 3);
  v16 = *((glotv3::EventValue::Self **)glotv3::configuration::DEFAULT_UDID - 3);
  v48 = (glotv3::EventValue::Self *)v15;
  if ( (unsigned int)(uintptr_t)(v16) <= v15 )
    v15 = *((uint32_t *)glotv3::configuration::DEFAULT_UDID - 3);
  if ( memcmp(s1, glotv3::configuration::DEFAULT_UDID, v15) != 0 || v48 != v16 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v72), (int)(uintptr_t)(&s1));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyUDID, &v72);
    g4_std::string::Destroy(&v72);
    v14 = (const void *)(uintptr_t)(glotv3::configuration::DEFAULT_UDID);
    v16 = *((glotv3::EventValue::Self **)glotv3::configuration::DEFAULT_UDID - 3);
  }
  v17 = *((uint32_t *)v57[0] - 3);
  v49 = (glotv3::EventValue::Self *)v17;
  if ( (unsigned int)(uintptr_t)(v16) <= v17 )
    v17 = (size_t)v16;
  if ( memcmp(v57[0], v14, v17) != 0 || v49 != v16 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v73), (int)(uintptr_t)(v57));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyIDFV, &v73);
    g4_std::string::Destroy(&v73);
  }
  v18 = *((uint32_t *)v56[0] - 3);
  v19 = v18;
  v20 = *((uint32_t *)glotv3::configuration::DEFAULT_HDIDFV - 3);
  if ( v20 <= v18 )
    v19 = *((uint32_t *)glotv3::configuration::DEFAULT_HDIDFV - 3);
  if ( memcmp(v56[0], glotv3::configuration::DEFAULT_HDIDFV, v19) != 0 || v18 != v20 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v74), (int)(uintptr_t)(v56));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyHDIDFV, &v74);
    g4_std::string::Destroy(&v74);
  }
  v21 = *((uint32_t *)v59[0] - 3);
  v22 = v21;
  v23 = *((uint32_t *)glotv3::configuration::DEFAULT_PHID - 3);
  if ( v23 <= v21 )
    v22 = *((uint32_t *)glotv3::configuration::DEFAULT_PHID - 3);
  if ( memcmp(v59[0], glotv3::configuration::DEFAULT_PHID, v22) != 0 || v21 != v23 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v75), (int)(uintptr_t)(v59));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), (uint8_t **)&glotv3::EventList::keyPHID, &v75);
    g4_std::string::Destroy(&v75);
  }
  v24 = *((uint32_t *)v58[0] - 3);
  v25 = v24;
  v26 = *((uint32_t *)glotv3::configuration::DEFAULT_MAC - 3);
  if ( v26 <= v24 )
    v25 = *((uint32_t *)glotv3::configuration::DEFAULT_MAC - 3);
  if ( memcmp(v58[0], glotv3::configuration::DEFAULT_MAC, v25) != 0 || v24 != v26 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v76), (int)(uintptr_t)(v58));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyMAC, &v76);
    g4_std::string::Destroy(&v76);
  }
  v27 = (const void *)(uintptr_t)(glotv3::configuration::DEFAULT_IDENTIFIER);
  v28 = *((uint32_t *)v62[0] - 3);
  v29 = *((glotv3::EventValue::Self **)glotv3::configuration::DEFAULT_IDENTIFIER - 3);
  v50 = (glotv3::EventValue::Self *)v28;
  if ( (unsigned int)(uintptr_t)(v29) <= v28 )
    v28 = *((uint32_t *)glotv3::configuration::DEFAULT_IDENTIFIER - 3);
  if ( memcmp(v62[0], glotv3::configuration::DEFAULT_IDENTIFIER, v28) != 0 || v50 != v29 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v77), (int)(uintptr_t)(v62));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyIMEI, &v77);
    g4_std::string::Destroy(&v77);
    v27 = (const void *)(uintptr_t)(glotv3::configuration::DEFAULT_IDENTIFIER);
    v29 = *((glotv3::EventValue::Self **)glotv3::configuration::DEFAULT_IDENTIFIER - 3);
  }
  v30 = *((uint32_t *)v63[0] - 3);
  v51 = (glotv3::EventValue::Self *)v30;
  if ( (unsigned int)(uintptr_t)(v29) <= v30 )
    v30 = (size_t)v29;
  if ( memcmp(v63[0], v27, v30) != 0 || v51 != v29 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v78), (int)(uintptr_t)(v63));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyAndroidId, &v78);
    g4_std::string::Destroy(&v78);
    v27 = (const void *)(uintptr_t)(glotv3::configuration::DEFAULT_IDENTIFIER);
    v29 = *((glotv3::EventValue::Self **)glotv3::configuration::DEFAULT_IDENTIFIER - 3);
  }
  v31 = *((uint32_t *)v64[0] - 3);
  v52 = (glotv3::EventValue::Self *)v31;
  if ( (unsigned int)(uintptr_t)(v29) <= v31 )
    v31 = (size_t)v29;
  if ( memcmp(v64[0], v27, v31) != 0 || v52 != v29 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v79), (int)(uintptr_t)(v64));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keySerialNumber, &v79);
    g4_std::string::Destroy(&v79);
    v27 = (const void *)(uintptr_t)(glotv3::configuration::DEFAULT_IDENTIFIER);
    v29 = *((glotv3::EventValue::Self **)glotv3::configuration::DEFAULT_IDENTIFIER - 3);
  }
  v32 = *((uint32_t *)v65[0] - 3);
  v53 = (glotv3::EventValue::Self *)v32;
  if ( (unsigned int)(uintptr_t)(v29) <= v32 )
    v32 = (size_t)v29;
  if ( memcmp(v65[0], v27, v32) != 0 || v53 != v29 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v80), (int)(uintptr_t)(v65));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyGAID, &v80);
    g4_std::string::Destroy(&v80);
    v27 = (const void *)(uintptr_t)(glotv3::configuration::DEFAULT_IDENTIFIER);
    v29 = *((glotv3::EventValue::Self **)glotv3::configuration::DEFAULT_IDENTIFIER - 3);
  }
  v33 = *((uint32_t *)v61[0] - 3);
  v54 = (glotv3::EventValue::Self *)v33;
  if ( (unsigned int)(uintptr_t)(v29) <= v33 )
    v33 = (size_t)v29;
  if ( memcmp(v61[0], v27, v33) != 0 || v54 != v29 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v81), (int)(uintptr_t)(v61));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyWAID, &v81);
    g4_std::string::Destroy(&v81);
  }
  if ( glotv3::Porting::GetPlatform() == 0 )
  {
    v34 = *((uint32_t *)v58[0] - 3);
    v35 = v34;
    v36 = *((uint32_t *)glotv3::configuration::DEFAULT_MAC - 3);
    if ( v36 <= v34 )
      v35 = *((uint32_t *)glotv3::configuration::DEFAULT_MAC - 3);
    if ( memcmp(v58[0], glotv3::configuration::DEFAULT_MAC, v35) != 0 || v34 != v36 )
    {
      glotv3::Porting::Encrypt((int)(uintptr_t)(&v82), (int)(uintptr_t)(v58));
      glotv3::EventList::addRootPair((int)(uintptr_t)(v55), &glotv3::EventList::keyMACW32, &v82);
      g4_std::string::Destroy(&v82);
    }
  }
  v37 = *((uint32_t *)v60[0] - 3);
  v38 = v37;
  v39 = *((uint32_t *)glotv3::configuration::DEFAULT_GDID - 3);
  if ( v39 <= v37 )
    v38 = *((uint32_t *)glotv3::configuration::DEFAULT_GDID - 3);
  if ( (memcmp(v60[0], glotv3::configuration::DEFAULT_GDID, v38) != 0 || v37 != v39)
    && (uint8_t)glotv3::EventList::isValidRootPair((int)(uintptr_t)(v55), (const void **)(&glotv3::EventList::keyGDID), (uint32_t *)(v60)) != 0 )
  {
    glotv3::Porting::Encrypt((int)(uintptr_t)(&v83), (int)(uintptr_t)(v60));
    glotv3::EventList::addRootPair((int)(uintptr_t)(v55), (uint8_t **)&glotv3::EventList::keyGDID, &v83);
    g4_std::string::Destroy(&v83);
  }
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v87);
  v40 = v87;
  if ( v87 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
      "px != 0");
    v40 = v87;
  }
  GGID = (void *)glotv3::TrackingManager::GetGGID(v40);
  glotv3::EventList::setGGID(v55, GGID);
  v42 = v88;
  if ( v88 != nullptr && __sync_fetch_and_add(v88 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v42, 8);
    if ( __sync_fetch_and_add(v42 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v42, 12);
  }
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v89);
  v43 = v89;
  if ( v89 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
      "px != 0");
    v43 = v89;
  }
  glotv3::TrackingManager::GetGameVersionString((glotv3::TrackingManager::Self *)&v84, v43);
  glotv3::EventList::setGameVersionString((int)(uintptr_t)(v55), &v84);
  g4_std::string::Destroy(&v84);
  v44 = v90;
  if ( v90 != nullptr && __sync_fetch_and_add(v90 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v44, 8);
    if ( __sync_fetch_and_add(v44 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v44, 12);
  }
  g4_std::string::Destroy(v65);
  g4_std::string::Destroy(v64);
  g4_std::string::Destroy(v63);
  g4_std::string::Destroy(v62);
  g4_std::string::Destroy(v61);
  g4_std::string::Destroy(v60);
  g4_std::string::Destroy(v59);
  g4_std::string::Destroy(v58);
  g4_std::string::Destroy(v57);
  g4_std::string::Destroy(&s1);
  g4_std::string::Destroy(v66);
  return ((g4_std::string::Destroy(v56)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::Construct  (binary VA: 0x1379210)
// Original: glotv3::EventList::EventList
// ----------------------------------------------------------------------------
glotv3::EventList::Self * glotv3::EventList::Construct(glotv3::EventList::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  glotv3::EventList::Self *v7;
  uint32_t *v8;
  unsigned int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  unsigned int v14;
  int v15;
  char *v16;
  uint32_t *v17;
  const char *v18;
  uint32_t *v19;
  unsigned int v20;
  uint32_t *v21;
  unsigned int v22;
  unsigned int v23;
  char *v24;
  int *v25;
  uint32_t *v26;
  unsigned int v27;
  uint8_t *v28;
  uint32_t *v29;
  unsigned int v30;
  uint32_t *v31;
  uint32_t *v32;
  unsigned int v33;
  unsigned int v34;
  char *v35;
  int *v36;
  uint32_t *v38;
  int v39;
  int v40;
  uint32_t *v41;
  int *v42;
  int v43;
  int v44;
  uint32_t *v45;
  int v46;
  int v47;
  int v48;
  glotv3::EventList::Self *v49;
  glotv3::EventList::Self *v50;
  uint32_t *v51;
  uint32_t *v52;
  char *v53;
  uint32_t *v54;
  uint32_t *v55;
  unsigned int v56;
  unsigned int v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  int *v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  uint32_t *v66;
  int v67;
  const char *v68;
  uint32_t *v69;
  int v70;
  int v71;
  uint8_t *v72;
  int v73;
  size_t v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v79;
  uint32_t *v80;
  size_t v81;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v82;
  uint32_t *v83;
  int v84;
  size_t v85;
  int v86;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 2048;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  v1 = opNew(1u);
  v2 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 3) = v1;
  *((uint32_t *)self + 4) = v1;
  v47 = v2;
  v3 = (uint32_t *)(malloc(v2 + 12));
  v3[1] = 0;
  *v3 = v47;
  v3[2] = *(uint32_t *)self;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 2048;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  v4 = opNew(1u);
  v5 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 8) = v4;
  *((uint32_t *)self + 9) = v4;
  v48 = v5;
  v6 = (uint32_t *)(malloc(v5 + 12));
  *v6 = v48;
  v6[1] = 0;
  v6[2] = *((uint32_t *)self + 5);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v6);
  v7 = self;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 2048;
  if ( self == nullptr )
  {
    v42 = (int *)opNew(0x14u);
    *v42 = 0;
    v42[1] = 2048;
    v42[2] = 0;
    v42[3] = 0;
    v42[4] = 0;
    v61 = v42;
    v43 = opNew(1u);
    v44 = v61[1];
    v61[3] = v43;
    v61[4] = v43;
    v65 = v44;
    v45 = (uint32_t *)(malloc(v44 + 12));
    v45[1] = 0;
    *v45 = v65;
    v7 = (glotv3::EventList::Self *)v61;
    v45[2] = *v61;
    *v61 = (int)(uintptr_t)(v45);
    dword_38 = (int)(uintptr_t)(v61);
    off_3C[0] = (uint32_t)(uintptr_t)(v61);
  }
  v8 = *(uint32_t **)v7;
  v76 = (*((uint32_t *)self + 19) + 3) & 0xFFFFFFFC;
  v70 = *(uint32_t *)(*(uint32_t *)v7 + 4);
  if ( v70 + v76 > **(uint32_t **)v7 )
  {
    v9 = *((uint32_t *)v7 + 1);
    if ( v76 >= v9 )
      v9 = (*((uint32_t *)self + 19) + 3) & 0xFFFFFFFC;
    v49 = v7;
    v62 = v9;
    v8 = (uint32_t *)(malloc(v9 + 12));
    v8[1] = 0;
    *v8 = v62;
    v7 = v49;
    v8[2] = *(uint32_t *)v49;
    *(uint32_t *)v49 = (uint32_t)(uintptr_t)(v8);
    v70 = v8[1];
  }
  v73 = (int)(uintptr_t)(v8) + v70 + 12;
  if ( (v73 & 3) != 0 )
  {
    v50 = v7;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v8 = *(uint32_t **)v50;
    v70 = *(uint32_t *)(*(uint32_t *)v50 + 4);
  }
  v8[1] = v76 + v70;
  v10 = (uint32_t *)((char *)self + 20);
  v11 = v73 + *((uint32_t *)self + 19);
  *((uint32_t *)self + 16) = v73;
  *((uint32_t *)self + 17) = v73;
  *((uint32_t *)self + 18) = v11;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)((char *)self + 20);
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 2048;
  if ( self == (glotv3::EventList::Self *)-20 )
  {
    v38 = (uint32_t *)opNew(0x14u);
    *v38 = 0;
    v38[1] = 2048;
    v38[2] = 0;
    v38[3] = 0;
    v38[4] = 0;
    v60 = v38;
    v39 = opNew(1u);
    v40 = v60[1];
    v60[3] = v39;
    v60[4] = v39;
    v41 = (uint32_t *)(malloc(v40 + 12));
    *v41 = v40;
    v41[1] = 0;
    v10 = v60;
    v41[2] = *v60;
    *v60 = (uint32_t)(uintptr_t)(v41);
    dword_54 = (int)(uintptr_t)(v60);
    dword_58 = (int)(uintptr_t)(v60);
  }
  v12 = (uint32_t *)*v10;
  v77 = (*((uint32_t *)self + 31) + 3) & 0xFFFFFFFC;
  v13 = *(uint32_t *)(*v10 + 4);
  if ( v13 + v77 > *(uint32_t *)*v10 )
  {
    v14 = v10[1];
    if ( v77 >= v14 )
      v14 = (*((uint32_t *)self + 31) + 3) & 0xFFFFFFFC;
    v51 = v10;
    v12 = (uint32_t *)(malloc(v14 + 12));
    v12[1] = 0;
    *v12 = v14;
    v10 = v51;
    v12[2] = *v51;
    *v51 = (uint32_t)(uintptr_t)(v12);
    v13 = v12[1];
  }
  v15 = (int)(uintptr_t)(v12) + v13 + 12;
  if ( (v15 & 3) != 0 )
  {
    v52 = v10;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v12 = (uint32_t *)*v52;
    v13 = *(uint32_t *)(*v52 + 4);
  }
  v16 = (char *)self + 136;
  v12[1] = v77 + v13;
  *((uint32_t *)self + 28) = v15;
  *((uint32_t *)self + 29) = v15;
  *((uint32_t *)self + 30) = *((uint32_t *)self + 31) + v15;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 37) = 3;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 41) = 4;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  v17 = *((uint32_t **)self + 14);
  *((uint32_t *)self + 13) = 3;
  v66 = v17;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  v78 = 4;
  v74 = 0;
  v68 = (const char *)(uintptr_t)(glotv3::EventList::keyListRoot);
  if ( *(uintptr_t *)(glotv3::EventList::keyListRoot) != 0 )
  {
    v18 = (const char *)(uintptr_t)(glotv3::EventList::keyListRoot);
    do
      ++v18;
    while ( *v18 != 0 );
    v74 = (size_t)(v18 - (const char *)(uintptr_t)(glotv3::EventList::keyListRoot));
    v78 = ((v18 - (const char *)(uintptr_t)(glotv3::EventList::keyListRoot)) + 4) & 0xFFFFFFFC;
  }
  v19 = (uint32_t *)*v17;
  v46 = *(uint32_t *)(*v17 + 4);
  if ( v46 + v78 > *(uint32_t *)*v17 )
  {
    v20 = v17[1];
    if ( v78 >= v20 )
      v20 = v78;
    v63 = v20;
    v19 = (uint32_t *)(malloc(v20 + 12));
    v19[1] = 0;
    *v19 = v63;
    v19[2] = *v66;
    *v66 = (uint32_t)(uintptr_t)(v19);
    v46 = v19[1];
    v16 = (char *)self + 136;
  }
  v71 = (int)(uintptr_t)(v19) + v46 + 12;
  if ( (v71 & 3) != 0 )
  {
    v53 = v16;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v16 = v53;
    v19 = (uint32_t *)*v66;
    v46 = *(uint32_t *)(*v66 + 4);
  }
  v19[1] = v78 + v46;
  v54 = (uint32_t *)(v16);
  memcpy((void *)v71, v68, v74);
  *(uint8_t *)(v71 + v74) = 0;
  v79 = *((rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)self + 14);
  v21 = v54;
  if ( *((uint32_t *)self + 13) != 3 )
  {
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      434,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "IsObject ()");
    v21 = v54;
  }
  v22 = *((uint32_t *)self + 11);
  v23 = *((uint32_t *)self + 12);
  if ( v22 < v23 )
  {
    v24 = *((char **)self + 10);
  }
  else
  {
    if ( v23 != 0 )
    {
      *((uint32_t *)self + 12) = 2 * v23;
      v55 = v21;
      v24 = (char *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(
                      v79,
                      *((void **)self + 10),
                      32 * v23,
                      v23 << 6);
    }
    else
    {
      *((uint32_t *)self + 12) = 16;
      v55 = v21;
      v24 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v79, 0x200u);
    }
    *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(v24);
    v22 = *((uint32_t *)self + 11);
    v21 = v55;
  }
  v25 = (int *)&v24[32 * v22];
  *v25 = v71;
  v25[1] = v74;
  v25[2] = v84;
  v25[3] = 3145733;
  v80 = (uint32_t *)(*((uint32_t *)self + 10) + 32 * *((uint32_t *)self + 11) + 16);
  *v80 = *((uint32_t *)self + 34);
  v80[1] = v21[1];
  v80[2] = v21[2];
  v80[3] = v21[3];
  v26 = *((uint32_t **)self + 14);
  *((uint32_t *)self + 37) = 0;
  ++*((uint32_t *)self + 11);
  v69 = v26;
  v81 = 0;
  v27 = 4;
  v28 = (uint8_t *)(uintptr_t)(glotv3::EventList::keyEvents);
  v72 = (uint8_t *)(uintptr_t)(glotv3::EventList::keyEvents);
  if ( *(uintptr_t *)(glotv3::EventList::keyEvents) != 0 )
  {
    do
      ++v28;
    while ( *v28 != 0 );
    v81 = (size_t)(v28 - (uint8_t *)(uintptr_t)(glotv3::EventList::keyEvents));
    v27 = ((v28 - (uint8_t *)(uintptr_t)(glotv3::EventList::keyEvents)) + 4) & 0xFFFFFFFC;
  }
  v29 = (uint32_t *)*v69;
  v67 = *(uint32_t *)(*v69 + 4);
  if ( v27 + v67 > *(uint32_t *)*v69 )
  {
    v30 = v69[1];
    v56 = v27;
    if ( v27 >= v30 )
      v30 = v27;
    v64 = v30;
    v29 = (uint32_t *)(malloc(v30 + 12));
    v29[1] = 0;
    *v29 = v64;
    v29[2] = *v69;
    *v69 = (uint32_t)(uintptr_t)(v29);
    v67 = v29[1];
    v27 = v56;
  }
  v75 = (int)(uintptr_t)(v29) + v67 + 12;
  if ( (v75 & 3) != 0 )
  {
    v57 = v27;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v27 = v57;
    v29 = (uint32_t *)*v69;
    v67 = *(uint32_t *)(*v69 + 4);
  }
  v29[1] = v67 + v27;
  v85 = v81;
  memcpy((void *)v75, v72, v81);
  *(uint8_t *)(v75 + v81) = 0;
  v82 = *((rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)self + 14);
  v31 = (uint32_t *)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
          (glotv3::EventList::Self *)((char *)self + 40),
          glotv3::EventList::keyListRoot));
  v32 = v31;
  if ( v31[3] != 3 )
  {
    v58 = v31;
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      434,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "IsObject ()");
    v32 = v58;
  }
  v33 = v32[1];
  v34 = v32[2];
  if ( v33 < v34 )
  {
    v35 = (char *)*v32;
  }
  else
  {
    if ( v34 != 0 )
    {
      v32[2] = 2 * v34;
      v59 = v32;
      v35 = (char *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(
                      v82,
                      (void *)*v32,
                      32 * v34,
                      v34 << 6);
    }
    else
    {
      v32[2] = 16;
      v59 = v32;
      v35 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v82, 0x200u);
    }
    v32 = v59;
    *v59 = (uint32_t)(uintptr_t)(v35);
    v33 = v59[1];
  }
  v36 = (int *)&v35[32 * v33];
  *v36 = v75;
  v36[1] = v85;
  v36[2] = v86;
  v36[3] = 3145733;
  v83 = (uint32_t *)(*v32 + 32 * v32[1] + 16);
  *v83 = *((uint32_t *)self + 38);
  v83[1] = *((uint32_t *)self + 39);
  v83[2] = *((uint32_t *)self + 40);
  v83[3] = *((uint32_t *)self + 41);
  *((uint32_t *)self + 41) = 0;
  ++v32[1];
  return (glotv3::EventList::Self *)glotv3::EventList::setDefaultKeysValues(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::serializeToJson  (binary VA: 0x137a150)
// Original: glotv3::EventList::serializeToJson
// ----------------------------------------------------------------------------
void glotv3::EventList::serializeToJson(glotv3::EventList::Self *a1, char **a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  unsigned int v8;
  int v9;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *Root;
  char *v11;
  int v12;
  size_t v13;
  char *v14;
  const char *v15;
  char *v16;
  unsigned int v17;
  char *v18;
  unsigned int v19;
  char *v20;
  char *v21;
  size_t v22;
  char *v23;
  char *v24;
  char *v25;
  void *v26;
  uint32_t *v27;
  uint32_t *v28;
  size_t v29;
  const char *v30;
  int v31;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef const char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef const char *_g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef char *_g4_t_v50;
  typedef void *_g4_t_v51;
  typedef void *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef char *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t _g4_t_v57[2];
  typedef uint32_t **_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v32)) > _g4_s0 ? (12u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v33)) > _g4_s1 ? (12u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v34)) > _g4_s2 ? (12u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v35)) > _g4_s3 ? (12u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v36)) > _g4_s4 ? (12u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v37)) > _g4_s5 ? (12u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v38)) > _g4_s6 ? (12u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v39)) > _g4_s7 ? (12u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v40)) > _g4_s8 ? (16u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v41)) > _g4_s9 ? (16u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v42)) > _g4_s10 ? (16u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v43)) > _g4_s11 ? (16u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v44)) > _g4_s12 ? (16u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v45)) > _g4_s13 ? (16u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v46)) > _g4_s14 ? (20u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v47)) > _g4_s15 ? (24u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v48)) > _g4_s16 ? (24u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v49)) > _g4_s17 ? (28u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v50)) > _g4_s18 ? (28u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v51)) > _g4_s19 ? (32u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v52)) > _g4_s20 ? (36u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v53)) > _g4_s21 ? (40u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v54)) > _g4_s22 ? (44u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v55)) > _g4_s23 ? (48u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v56)) > _g4_s24 ? (52u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v57)) > _g4_s25 ? (64u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v58)) > _g4_s26 ? (72u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v59)) > _g4_s27 ? (76u + sizeof(_g4_t_v59)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v60)) > _g4_s28 ? (80u + sizeof(_g4_t_v60)) : _g4_s28,
    _g4_s30 = (84u + sizeof(_g4_t_v61)) > _g4_s29 ? (84u + sizeof(_g4_t_v61)) : _g4_s29,
    _g4_s31 = (88u + sizeof(_g4_t_v62)) > _g4_s30 ? (88u + sizeof(_g4_t_v62)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 88u);

  v56 = 256;
  v51 = (void *)opNew(1u);
  v52 = v51;
  v53 = (char *)malloc(0x100u);
  v54 = v53;
  v55 = v53 + 256;
  v57[1] = 0;
  v57[0] = (uint32_t)(uintptr_t)(&v51);
  v58 = nullptr;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 256;
  v2 = (uint32_t *)opNew(0x14u);
  *v2 = 0;
  v2[1] = 2048;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v3 = opNew(1u);
  v4 = v2[1];
  v2[3] = v3;
  v2[4] = v3;
  v32 = v4;
  v5 = (uint32_t *)(malloc(v4 + 12));
  v5[1] = 0;
  *v5 = v32;
  v5[2] = *v2;
  *v2 = (uint32_t)(uintptr_t)(v5);
  v57[1] = (uint32_t)(uintptr_t)(v2);
  v58 = (uint32_t **)v2;
  v6 = (uint32_t *)*v2;
  v49 = (v62 + 3) & 0xFFFFFFFC;
  v7 = *(uint32_t *)(*v2 + 4);
  if ( v7 + v49 > *(uint32_t *)*v2 )
  {
    v8 = v2[1];
    if ( v49 >= v8 )
      v8 = (v62 + 3) & 0xFFFFFFFC;
    v33 = v8;
    v6 = (uint32_t *)(malloc(v8 + 12));
    v6[1] = 0;
    *v6 = v33;
    v6[2] = *v2;
    *v2 = (uint32_t)(uintptr_t)(v6);
    v7 = v6[1];
  }
  v9 = (int)(uintptr_t)(v6) + v7 + 12;
  if ( (v9 & 3) != 0 )
  {
    v34 = (int)(uintptr_t)(v6) + v7 + 12;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v6 = (uint32_t *)*v2;
    v9 = v34;
    v7 = *(uint32_t *)(*v2 + 4);
  }
  v6[1] = v49 + v7;
  v59 = v9;
  v60 = v9;
  v61 = v62 + v9;
  Root = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)glotv3::EventList::getRoot(a1);
  rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
    Root,
    (rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v57);
  v11 = v54;
  v12 = (int)(uintptr_t)(v54 + 1);
  if ( v54 + 1 >= v55 )
  {
    v13 = 2 * v56;
    v35 = v54 - v53;
    if ( v54 - v53 + 1 >= (unsigned int)(2 * v56) )
      v13 = v54 - v53 + 1;
    v14 = (char *)realloc(v53, v13);
    v56 = v13;
    v11 = &v14[v35];
    v53 = v14;
    v55 = &v14[v13];
    v12 = (int)(uintptr_t)(&v14[v35 + 1]);
  }
  v54 = (char *)v12;
  *v11 = 0;
  v15 = v53;
  v16 = v54;
  if ( v53 == v54 )
  {
    __assert2(
      "../../../../../lib/rapidjson/internal/stack.h",
      83,
      "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = char, Allocator = rapidjson::CrtAllocator, size_t = unsigned int]",
      "GetSize () >= count * sizeof (T)");
    v16 = v54;
    v15 = v53;
  }
  v54 = v16 - 1;
  v17 = strlen(v15);
  v18 = *a2;
  v50 = *a2;
  v19 = a2[2] - *a2;
  if ( v17 > v19 )
  {
    v36 = *a2;
    v40 = v17;
    v47 = a2[1] - v18;
    v50 = (char *)opNew(v17);
    v17 = v40;
    if ( v47 != 0 )
    {
      memmove(v50, v36, v47);
      v20 = *a2;
      v17 = v40;
      if ( *a2 == nullptr )
        goto LABEL_17;
    }
    else
    {
      v20 = *a2;
      if ( *a2 == nullptr )
      {
LABEL_17:
        v18 = v50;
        *a2 = v50;
        a2[1] = &v50[v47];
        a2[2] = &v50[v17];
        v19 = v17;
        goto LABEL_18;
      }
    }
    v41 = v17;
    opDelete(v20);
    v17 = v41;
    goto LABEL_17;
  }
LABEL_18:
  v48 = &v15[v17];
  if ( v19 < v17 )
  {
    v42 = v17;
    v21 = (char *)opNew(v17);
    v22 = v42;
    v23 = v21;
    if ( v42 != 0 )
    {
      v39 = v21;
      memmove(v21, v15, v42);
      v24 = *a2;
      v22 = v42;
      v23 = v39;
      if ( *a2 == nullptr )
        goto LABEL_22;
    }
    else
    {
      v24 = *a2;
      if ( *a2 == nullptr )
      {
LABEL_22:
        *a2 = v23;
        v25 = &v23[v22];
        a2[1] = v25;
        a2[2] = v25;
        goto LABEL_23;
      }
    }
    v37 = v23;
    v43 = v22;
    opDelete(v24);
    v22 = v43;
    v23 = v37;
    goto LABEL_22;
  }
  v46 = a2[1];
  v29 = v46 - v50;
  if ( v17 > v46 - v50 )
  {
    v30 = &v15[v29];
    if ( v29 != 0 )
    {
      v45 = &v15[v29];
      memmove(v18, v15, v29);
      v30 = v45;
      v46 = a2[1];
    }
    v31 = 0;
    if ( v48 != v30 )
    {
      v31 = v48 - v30;
      memmove(v46, v30, v48 - v30);
    }
    a2[1] = &v46[v31];
  }
  else
  {
    if ( v17 != 0 )
    {
      v38 = v18;
      v44 = v17;
      memmove(v18, v15, v17);
      v17 = v44;
      v18 = v38;
    }
    a2[1] = &v18[v17];
  }
LABEL_23:
  v26 = v58;
  if ( v58 != nullptr )
  {
    v27 = *v58;
    if ( *v58 != nullptr && v27 != v58[2] )
    {
      while ( 1 )
      {
        v28 = (uint32_t *)v27[2];
        free(v27);
        *(uint32_t *)v26 = (uint32_t)(uintptr_t)(v28);
        if ( v28 == nullptr || v28 == *((uint32_t **)v26 + 2) )
          break;
        v27 = v28;
      }
    }
    opDelete(*((void **)v26 + 4));
    opDelete(v26);
  }
  free(v53);
  opDelete(v52);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventList::deserializeFromJson  (binary VA: 0x137a610)
// Original: glotv3::EventList::deserializeFromJson
// ----------------------------------------------------------------------------
int glotv3::EventList::deserializeFromJson(glotv3::EventList::Self *self, std::vector<char> *a2)
{
  glotv3::EventList::Self *v2;
  uint8_t *v3;
  char *v4;
  void **v5;
  int v6;
  void *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  void **v15;
  uint32_t *v16;
  void **v17;
  uint32_t *v18;
  int result;
  int v20;
  unsigned int v21;
  int v22;
  char *v23;
  int v24;
  int v25;
  size_t v26;
  char *v27;
  std::vector<char> *v28;
  typedef const void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef void **_g4_t_v33;
  typedef uint8_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef char *_g4_t_v43[4];
  typedef int _g4_t_v44;
  typedef void **_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v31)) > _g4_s2 ? (16u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v32)) > _g4_s3 ? (16u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v33)) > _g4_s4 ? (16u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v34)) > _g4_s5 ? (16u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v35)) > _g4_s6 ? (16u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v36)) > _g4_s7 ? (20u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v37)) > _g4_s8 ? (20u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v38)) > _g4_s9 ? (20u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v39)) > _g4_s10 ? (24u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v40)) > _g4_s11 ? (24u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v41)) > _g4_s12 ? (28u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v42)) > _g4_s13 ? (28u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v43)) > _g4_s14 ? (32u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v44)) > _g4_s15 ? (48u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v45)) > _g4_s16 ? (52u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v46)) > _g4_s17 ? (56u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v47)) > _g4_s18 ? (60u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v48)) > _g4_s19 ? (64u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v49)) > _g4_s20 ? (68u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v50)) > _g4_s21 ? (112u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v51)) > _g4_s22 ? (116u + sizeof(_g4_t_v51)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);

  v2 = self;
  v3 = *((uint8_t **)a2 + 1);
  if ( *(v3 - 1) != 0 )
  {
    if ( v3 == *((uint8_t **)a2 + 2) )
    {
      v21 = (unsigned int)(uintptr_t)(&v3[-*(uint32_t *)a2]);
      if ( v21 == -1 )
        sub_1900180("vector::_M_insert_aux");
      v42 = 1;
      if ( v21 != 0 )
      {
        v22 = 2 * v21;
        if ( v21 > 2 * v21 )
          v22 = -1;
        v42 = v22;
      }
      v34 = &v3[-*(uint32_t *)a2];
      v23 = (char *)opNew(v42);
      v4 = v23;
      if ( &v34[(uint32_t)(uintptr_t)(v23)] != nullptr )
        v34[(uint32_t)(uintptr_t)(v23)] = 0;
      v29 = *(const void **)a2;
      v24 = 0;
      if ( v3 != *(uint8_t **)a2 )
      {
        v38 = v23;
        memmove(v23, v29, v3 - (uint8_t *)v29);
        v4 = v38;
        v24 = v3 - (uint8_t *)v29;
      }
      v40 = &v4[v24 + 1];
      v25 = 0;
      v26 = *((uint32_t *)a2 + 1) - (uint32_t)(uintptr_t)(v3);
      if ( v26 != 0 )
      {
        v37 = v4;
        v35 = *((uint32_t *)a2 + 1) - (uint32_t)(uintptr_t)(v3);
        memmove(v40, v3, v26);
        v4 = v37;
        v25 = v35;
      }
      v27 = &v40[v25];
      v28 = a2;
      if ( *(uint32_t *)a2 != 0 )
      {
        v36 = v4;
        opDelete(*(void **)a2);
        v4 = v36;
        v28 = a2;
      }
      *(uint32_t *)v28 = (uint32_t)(uintptr_t)(v4);
      *((uint32_t *)v28 + 1) = (uint32_t)(uintptr_t)(v27);
      *((uint32_t *)v28 + 2) = (uint32_t)(uintptr_t)(&v4[v42]);
    }
    else
    {
      *v3 = 0;
      ++*((uint32_t *)a2 + 1);
      v4 = *(char **)a2;
    }
  }
  else
  {
    v4 = *(char **)a2;
  }
  v43[0] = v4;
  v43[1] = v4;
  v39 = (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)((glotv3::EventList::Self *)((char *)self + 88));
  if ( self != (glotv3::EventList::Self *)-88 )
    *((uint32_t *)self + 25) = 0;
  v44 = 0;
  v45 = nullptr;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 256;
  v5 = (void **)opNew(0x14u);
  *v5 = nullptr;
  v5[1] = (void *)(uintptr_t)2048;
  v5[2] = nullptr;
  v5[3] = nullptr;
  v5[4] = nullptr;
  v6 = opNew(1u);
  v7 = v5[1];
  v5[3] = (void *)v6;
  v5[4] = (void *)v6;
  v30 = v7;
  v8 = (uint32_t *)(malloc((size_t)v7 + 12));
  v8[1] = 0;
  *v8 = (uint32_t)(uintptr_t)(v30);
  v8[2] = (uint32_t)(uintptr_t)(*v5);
  *v5 = v8;
  v45 = v5;
  v44 = (int)(uintptr_t)(v5);
  v9 = (uint32_t *)(*v5);
  v41 = (v49 + 3) & 0xFFFFFFFC;
  v10 = *((uint32_t *)*v5 + 1);
  if ( v10 + v41 > *(uint32_t *)*v5 )
  {
    v11 = (unsigned int)(uintptr_t)(v5[1]);
    if ( v41 >= v11 )
      v11 = (v49 + 3) & 0xFFFFFFFC;
    v31 = v11;
    v9 = (uint32_t *)(malloc(v11 + 12));
    v9[1] = 0;
    *v9 = v31;
    v9[2] = (uint32_t)(uintptr_t)(*v5);
    *v5 = v9;
    v10 = v9[1];
  }
  v12 = (int)(uintptr_t)(v9) + v10 + 12;
  if ( (v12 & 3) != 0 )
  {
    v32 = (int)(uintptr_t)(v9) + v10 + 12;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v9 = (uint32_t *)(*v5);
    v12 = v32;
    v10 = *((uint32_t *)*v5 + 1);
  }
  v9[1] = v41 + v10;
  v46 = v12;
  v47 = v12;
  v48 = v49 + v12;
  v50 = 0;
  v51 = 0;
  if ( (uint8_t)rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Parse<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
                          (int)(uintptr_t)(&v44),
                          v43,
                          v39) != 0 )
  {
    v13 = *((uint32_t *)self + 29);
    if ( v13 - *((uint32_t *)self + 28) != 16 )
    {
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1135,
        "rapidjson::GenericDocument<Encoding, Allocator>& rapidjson::GenericDocument<Encoding, Allocator>::ParseStream(St"
        "ream&) [with unsigned int parseFlags = 0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Encoding"
        " = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericDocument<Encoding, Allocat"
        "or> = rapidjson::GenericDocument<rapidjson::UTF8<> >]",
        "stack_.GetSize () == sizeof (ValueType)");
      v13 = *((uint32_t *)self + 29);
      if ( (unsigned int)(v13 - *((uint32_t *)self + 28)) <= 0xF )
      {
        __assert2(
          "../../../../../lib/rapidjson/internal/stack.h",
          83,
          "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = rapidjson::GenericValue<rapidjson::UTF8<> >, A"
          "llocator = rapidjson::MemoryPoolAllocator<>, size_t = unsigned int]",
          "GetSize () >= count * sizeof (T)");
        v13 = *((uint32_t *)self + 29);
      }
    }
    *((uint32_t *)self + 29) = v13 - 16;
    *((uint32_t *)self + 22) = *(uint32_t *)(v13 - 16);
    *((uint32_t *)self + 23) = *(uint32_t *)(v13 - 12);
    *((uint32_t *)self + 24) = *(uint32_t *)(v13 - 8);
    *((uint32_t *)self + 25) = *(uint32_t *)(v13 - 4);
    *(uint32_t *)(v13 - 4) = 0;
    *((uint32_t *)self + 32) = 0;
    *((uint32_t *)self + 33) = 0;
    v14 = 0;
  }
  else
  {
    v14 = v50;
    *((uint32_t *)self + 33) = v51;
    v20 = *((uint32_t *)self + 28);
    *((uint32_t *)self + 32) = v14;
    *((uint32_t *)self + 29) = v20;
  }
  v15 = v45;
  if ( v45 != nullptr )
  {
    v16 = (uint32_t *)(*v45);
    if ( *v45 != nullptr && v16 != v45[2] )
    {
      v17 = v45;
      while ( 1 )
      {
        v18 = (uint32_t *)v16[2];
        free(v16);
        *v17 = v18;
        if ( v18 == nullptr || v18 == v17[2] )
          break;
        v16 = v18;
      }
      v15 = v17;
      v2 = self;
    }
    v33 = v15;
    opDelete(v15[4]);
    opDelete(v33);
    v14 = *((uint32_t *)v2 + 32);
  }
  if ( v14 != 0 )
    return glotv3::Glotv3Logger::WriteLog(&glotv3::errors::DESER_FAILED_ON_BUFFER);
  glotv3::EventList::setRoot(v2, v39);
  result = *(uint32_t *)a2;
  *((uint32_t *)a2 + 1) = *(uint32_t *)a2;
  return result;
}


