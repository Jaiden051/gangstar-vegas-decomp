#include "Core/Utils/DecompTypes.h"
#include "gameswf_MemBuf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::capacity  (binary VA: 0x1174820)
// Original: gameswf::MemBuf::capacity
// ----------------------------------------------------------------------------
char gameswf::MemBuf::capacity(gameswf::MemBuf::Self *self)
{
  char result;

  result = 0;
  if ( self != nullptr )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::Construct  (binary VA: 0x1174840)
// Original: gameswf::MemBuf::MemBuf
// ----------------------------------------------------------------------------
gameswf::MemBuf::Self * gameswf::MemBuf::Construct(gameswf::MemBuf::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint8_t *)self + 12) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::Construct  (binary VA: 0x1174860)
// Original: gameswf::MemBuf::MemBuf
// ----------------------------------------------------------------------------
int gameswf::MemBuf::Construct(int a1, int a2, int a3, int a4)
{
  *(uint32_t *)a1 = a4;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = a3;
  *(uint8_t *)(a1 + 12) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::Destroy  (binary VA: 0x1174880)
// Original: gameswf::MemBuf::~MemBuf
// ----------------------------------------------------------------------------
void gameswf::MemBuf::Destroy(gameswf::Self **self)
{
  if ( *((uint8_t *)self + 12) == 0 && *(self + 1) != nullptr )
    gameswf::free_internal(*(self + 2));
  *(self + 2) = nullptr;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::reserve  (binary VA: 0x11748e0)
// Original: gameswf::MemBuf::reserve
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::MemBuf::reserve(gameswf::MemBuf::Self *self, signed int a2)
{
  gameswf::Self *result;
  signed int v3;

  result = *((gameswf::Self **)self + 2);
  if ( result != nullptr )
  {
    v3 = *((uint32_t *)self + 1);
    if ( a2 > v3 )
    {
      result = (gameswf::Self *)gameswf::realloc_internal(result, a2, v3);
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
    }
  }
  else
  {
    result = (gameswf::Self *)gameswf::malloc_internal(a2);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
  }
  *((uint32_t *)self + 1) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::append  (binary VA: 0x1174960)
// Original: gameswf::MemBuf::append
// ----------------------------------------------------------------------------
void * gameswf::MemBuf::append(gameswf::MemBuf::Self *self, void *src, size_t a3)
{
  size_t n;
  int v4;
  gameswf::MemBuf::Self *v5;
  signed int v7;

  n = a3;
  v4 = *(uint32_t *)self;
  v5 = (gameswf::MemBuf::Self *)(*(uint32_t *)self + a3);
  if ( *(gameswf::MemBuf::Self **)self != v5 )
  {
    if ( (int)(uintptr_t)(v5) > *((uint32_t *)self + 1) )
    {
      LOBYTE(v7) = gameswf::MemBuf::capacity(v5);
      gameswf::MemBuf::reserve(self, v7);
      n = a3;
    }
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
  }
  return memcpy((void *)(*((uint32_t *)self + 2) + v4), src, n);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::Construct  (binary VA: 0x11749f0)
// Original: gameswf::MemBuf::MemBuf
// ----------------------------------------------------------------------------
gameswf::MemBuf::Self * gameswf::MemBuf::Construct(gameswf::MemBuf::Self *self, void *a2, size_t a3)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint8_t *)self + 12) = 0;
  return (gameswf::MemBuf::Self *)gameswf::MemBuf::append(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::append  (binary VA: 0x1174a40)
// Original: gameswf::MemBuf::append
// ----------------------------------------------------------------------------
void * gameswf::MemBuf::append(gameswf::MemBuf::Self *self, void **a2)
{
  return gameswf::MemBuf::append(self, a2[2], (size_t)*a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::Construct  (binary VA: 0x1174a80)
// Original: gameswf::MemBuf::MemBuf
// ----------------------------------------------------------------------------
gameswf::MemBuf::Self * gameswf::MemBuf::Construct(gameswf::MemBuf::Self *self, void **a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint8_t *)self + 12) = 0;
  return (gameswf::MemBuf::Self *)gameswf::MemBuf::append(self, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::append  (binary VA: 0x1174ad0)
// Original: gameswf::MemBuf::append
// ----------------------------------------------------------------------------
void * gameswf::MemBuf::append(gameswf::MemBuf::Self *self, const gameswf::String::Self *a2)
{
  char *v2;
  size_t v3;

  if ( *(uint8_t *)a2 == 0xFF )
  {
    v2 = *((char **)a2 + 3);
    v3 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v2 = (char *)a2 + 1;
    v3 = *(char *)a2 - 1;
  }
  return gameswf::MemBuf::append(self, v2, v3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::Construct  (binary VA: 0x1174b20)
// Original: gameswf::MemBuf::MemBuf
// ----------------------------------------------------------------------------
gameswf::MemBuf::Self * gameswf::MemBuf::Construct(gameswf::MemBuf::Self *self, const gameswf::String::Self *a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint8_t *)self + 12) = 0;
  return (gameswf::MemBuf::Self *)gameswf::MemBuf::append(self, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::shrink  (binary VA: 0x1174b70)
// Original: gameswf::MemBuf::shrink
// ----------------------------------------------------------------------------
void * gameswf::MemBuf::shrink(gameswf::MemBuf::Self *self)
{
  void *result;
  size_t v2;
  gameswf::Self *v3;

  result = *((void **)self + 1);
  v2 = *(uint32_t *)self;
  if ( result != *(void **)self )
  {
    v3 = *((gameswf::Self **)self + 2);
    if ( v3 != nullptr )
    {
      result = gameswf::realloc_internal(v3, v2, (size_t)result);
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
      *((uint32_t *)self + 1) = v2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::opAssign  (binary VA: 0x1174bd0)
// Original: gameswf::MemBuf::operator=
// ----------------------------------------------------------------------------
int gameswf::MemBuf::opAssign(void **self, const gameswf::MemBuf::Self *a2)
{
  gameswf::MemBuf::Self *n;
  int result;
  signed int v4;

  n = *(gameswf::MemBuf::Self **)a2;
  if ( *(void **)a2 != *self )
  {
    if ( (int)(uintptr_t)(n) > (int)(uintptr_t)(*(self + 1)) )
    {
      LOBYTE(v4) = gameswf::MemBuf::capacity(*(gameswf::MemBuf::Self **)a2);
      gameswf::MemBuf::reserve((gameswf::MemBuf::Self *)self, v4);
    }
    *self = n;
  }
  memcpy(*(self + 2), *((const void **)a2 + 2), (size_t)n);
  result = *((uint8_t *)a2 + 12);
  *((uint8_t *)self + 12) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::opEq  (binary VA: 0x1174c50)
// Original: gameswf::MemBuf::operator==
// ----------------------------------------------------------------------------
bool gameswf::MemBuf::opEq(const void **self, const void **a2)
{
  bool result;

  result = false;
  if ( *self == *a2 )
    return memcmp(*(self + 2), a2[2], (size_t)*self) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MemBuf::opNe  (binary VA: 0x1174ca0)
// Original: gameswf::MemBuf::operator!=
// ----------------------------------------------------------------------------
bool gameswf::MemBuf::opNe(const void **self, const void **a2)
{
  bool result;

  result = false;
  if ( *self == *a2 )
    return memcmp(*(self + 2), a2[2], (size_t)*self) != 0;
  return result;
}


