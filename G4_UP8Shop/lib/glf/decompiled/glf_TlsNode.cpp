#include "Core/Utils/DecompTypes.h"
#include "glf_TlsNode.h"

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::GetMutex  (binary VA: 0xc82d40)
// Original: glf::TlsNode::GetMutex
// ----------------------------------------------------------------------------
pthread_mutex_t ** glf::TlsNode::GetMutex()
{
  if ( byte_20DEE00 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DEE00) != 0 )
  {
    glf::Mutex::Construct(&dword_20DEE08, 1);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DEE00);
    __cxa_atexit((void (*)(void *))glf::Mutex::Destroy, &dword_20DEE08, &unk_20D1280);
  }
  return (pthread_mutex_t **)(&dword_20DEE08);
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::GetHead  (binary VA: 0xc82dd0)
// Original: glf::TlsNode::GetHead
// ----------------------------------------------------------------------------
void * glf::TlsNode::GetHead()
{
  glf::TlsNode::GetMutex();
  return &unk_20DEE0C;
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::FreeThread  (binary VA: 0xc82e00)
// Original: glf::TlsNode::FreeThread
// ----------------------------------------------------------------------------
void glf::TlsNode::FreeThread()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::Init  (binary VA: 0xc82e10)
// Original: glf::TlsNode::Init
// ----------------------------------------------------------------------------
int glf::TlsNode::Init(glf::TlsNode::Self *self)
{
  int result;

  result = *((uint32_t *)self + 2);
  if ( result == 0 )
  {
    pthread_key_create((pthread_key_t *)self + 2, nullptr);
    return pthread_setspecific(*((uint32_t *)self + 2), nullptr);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::Construct  (binary VA: 0xc82e70)
// Original: glf::TlsNode::TlsNode
// ----------------------------------------------------------------------------
glf::TlsNode::Self * glf::TlsNode::Construct(glf::TlsNode::Self *self, void (*a2)(void *), void (*a3)(void *), unsigned int a4)
{
  pthread_mutex_t **Mutex;

  *((uint32_t *)self + 1) = a4;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  Mutex = glf::TlsNode::GetMutex();
  glf::Mutex::Lock(Mutex);
  *(uint32_t *)self = *(uint32_t *)glf::TlsNode::GetHead();
  *(uint32_t *)glf::TlsNode::GetHead() = (uint32_t)(uintptr_t)(self);
  glf::Mutex::Unlock(Mutex);
  return (glf::TlsNode::Self *)glf::TlsNode::Init(self);
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::DeInit  (binary VA: 0xc82f10)
// Original: glf::TlsNode::DeInit
// ----------------------------------------------------------------------------
int glf::TlsNode::DeInit(glf::TlsNode::Self *self)
{
  return pthread_key_delete(*((uint32_t *)self + 2));
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::Destroy  (binary VA: 0xc82f40)
// Original: glf::TlsNode::~TlsNode
// ----------------------------------------------------------------------------
void glf::TlsNode::Destroy(glf::TlsNode::Self *self)
{
  pthread_mutex_t **Mutex;
  int v2;
  int v3;
  void (*v4)(uint32_t);
  bool v5;
  pthread_mutex_t **v6;
  glf::TlsNode::Self **v7;
  glf::TlsNode::Self *v8;

  glf::TlsNode::DeInit(self);
  Mutex = glf::TlsNode::GetMutex();
  glf::Mutex::Lock(Mutex);
  v2 = *((uint32_t *)self + 7);
  v3 = v2;
  if ( v2 != *((uint32_t *)self + 6) )
  {
    while ( 1 )
    {
      v4 = *((void (**)(uint32_t))self + 5);
      if ( v4 != nullptr )
      {
        v4(*(uint32_t *)(v2 - 4));
        v3 = *((uint32_t *)self + 7);
      }
      free(*(void **)(v3 - 4));
      v3 = *((uint32_t *)self + 7) - 8;
      v5 = v3 == *((uint32_t *)self + 6);
      *((uint32_t *)self + 7) = v3;
      if ( v5 )
        break;
      v2 = v3;
    }
  }
  glf::Mutex::Unlock(Mutex);
  v6 = glf::TlsNode::GetMutex();
  glf::Mutex::Lock(v6);
  if ( self == *(glf::TlsNode::Self **)glf::TlsNode::GetHead() )
  {
    *(uint32_t *)glf::TlsNode::GetHead() = *(uint32_t *)self;
  }
  else
  {
    v7 = *(glf::TlsNode::Self ***)glf::TlsNode::GetHead();
    if ( v7 != nullptr )
    {
      v8 = *v7;
      if ( *v7 == self )
      {
        v8 = (glf::TlsNode::Self *)v7;
LABEL_17:
        *(uint32_t *)v8 = *(uint32_t *)self;
      }
      else
      {
        while ( v8 != nullptr )
        {
          if ( *(glf::TlsNode::Self **)v8 == self )
            goto LABEL_17;
          v8 = *(glf::TlsNode::Self **)v8;
        }
      }
    }
  }
  glf::Mutex::Unlock(v6);
  if ( *((uint32_t *)self + 6) != 0 )
    opDelete(*((void **)self + 6));
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::SetValue  (binary VA: 0xc83030)
// Original: glf::TlsNode::SetValue
// ----------------------------------------------------------------------------
int glf::TlsNode::SetValue(glf::TlsNode::Self *self, void *pointer)
{
  return pthread_setspecific(*((uint32_t *)self + 2), pointer);
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::GetValue  (binary VA: 0xc83060)
// Original: glf::TlsNode::GetValue
// ----------------------------------------------------------------------------
void * glf::TlsNode::GetValue(glf::TlsNode::Self *self, bool a2)
{
  void *result;

  result = pthread_getspecific(*((uint32_t *)self + 2));
  if ( a2 && result == nullptr )
    return (void *)glf::TlsNode::Alloc(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::Alloc  (binary VA: 0xc830c0)
// Original: glf::TlsNode::Alloc
// ----------------------------------------------------------------------------
glf::Self * glf::TlsNode::Alloc(glf::TlsNode::Self *self)
{
  glf::Self *pointer;
  glf::Self *v3;
  uint32_t *v4;
  int v5;
  void (*v6)(glf::Self *);
  unsigned int v7;
  unsigned int v8;
  int v9;
  char *v10;
  int v11;
  char *v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  pthread_mutex_t **Mutex;
  char *dest;
  int v21;

  pointer = (glf::Self *)glf::TlsNode::GetValue(self, false);
  if ( pointer == nullptr )
  {
    Mutex = glf::TlsNode::GetMutex();
    glf::Mutex::Lock(Mutex);
    v3 = (glf::Self *)malloc(*((uint32_t *)self + 1));
    v4 = *((uint32_t **)self + 7);
    pointer = v3;
    if ( v4 == *((uint32_t **)self + 8) )
    {
      v7 = ((int)(uintptr_t)(v4) - *((uint32_t *)self + 6)) >> 3;
      v8 = 1;
      if ( v7 == 0 || (v8 = 2 * v7, v9 = 0x1FFFFFFF, v7 <= 2 * v7) && v8 <= 0x1FFFFFFF )
        v9 = v8;
      v15 = ((int)(uintptr_t)(v4) - *((uint32_t *)self + 6)) >> 3;
      v21 = 8 * v9;
      dest = (char *)opNew(8 * v9);
      v10 = &dest[8 * v15];
      if ( v10 != nullptr )
      {
        *(uint32_t *)v10 = 0;
        *((uint32_t *)v10 + 1) = (uint32_t)(uintptr_t)(pointer);
      }
      v11 = ((int)(uintptr_t)(v4) - *((uint32_t *)self + 6)) >> 3;
      if ( v11 != 0 )
      {
        v17 = ((int)(uintptr_t)(v4) - *((uint32_t *)self + 6)) >> 3;
        memmove(dest, *((const void **)self + 6), 8 * v11);
        v11 = v17;
      }
      v12 = &dest[8 * v11 + 8];
      v13 = (*((uint32_t *)self + 7) - (int)(uintptr_t)(v4)) >> 3;
      if ( v13 != 0 )
      {
        v16 = (*((uint32_t *)self + 7) - (int)(uintptr_t)(v4)) >> 3;
        v18 = v12;
        memmove(v12, v4, 8 * v13);
        v12 = v18;
        v13 = v16;
      }
      v14 = &v12[8 * v13];
      if ( *((uint32_t *)self + 6) != 0 )
        opDelete(*((void **)self + 6));
      *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v14);
      *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(dest);
      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dest[v21]);
    }
    else
    {
      v5 = 0;
      if ( v4 != nullptr )
      {
        *v4 = 0;
        v4[1] = (uint32_t)(uintptr_t)(pointer);
        v5 = *((uint32_t *)self + 7);
      }
      *((uint32_t *)self + 7) = v5 + 8;
    }
    v6 = *((void (**)(glf::Self *))self + 4);
    if ( v6 != nullptr )
      v6(pointer);
    else
      glf::Memcpy(pointer, *((void **)self + 3), *((uint32_t *)self + 1));
    pthread_setspecific(*((uint32_t *)self + 2), pointer);
    glf::Mutex::Unlock(Mutex);
  }
  return pointer;
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::DeAlloc  (binary VA: 0xc83280)
// Original: glf::TlsNode::DeAlloc
// ----------------------------------------------------------------------------
void * glf::TlsNode::DeAlloc(pthread_key_t *self)
{
  void *result;
  void *ptr;
  void (*v3)(void *);
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  pthread_mutex_t **Mutex;

  result = glf::TlsNode::GetValue((glf::TlsNode::Self *)self, false);
  ptr = result;
  if ( result != nullptr )
  {
    Mutex = glf::TlsNode::GetMutex();
    glf::Mutex::Lock(Mutex);
    v3 = (void (*)(void *))*(self + 5);
    if ( v3 != nullptr )
      v3(ptr);
    free(ptr);
    v4 = (uint32_t *)*(self + 6);
    v7 = *(self + 7);
    if ( (v7 - (int)(uintptr_t)(v4)) >> 3 != 0 )
    {
      v5 = 0;
      if ( ptr == (void *)v4[1] )
      {
LABEL_12:
        v6 = *(uint32_t *)(v7 - 8);
        v4[1] = *(uint32_t *)(v7 - 4);
        *v4 = v6;
        *(self + 7) -= 8;
      }
      else
      {
        while ( ++v5 != (v7 - (int)(uintptr_t)(v4)) >> 3 )
        {
          if ( ptr == (void *)v4[2 * v5 + 1] )
          {
            v4 += 2 * v5;
            goto LABEL_12;
          }
        }
      }
    }
    pthread_setspecific(*(self + 2), nullptr);
    return (void *)glf::Mutex::Unlock(Mutex);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::InitNodes  (binary VA: 0xc83340)
// Original: glf::TlsNode::InitNodes
// ----------------------------------------------------------------------------
int glf::TlsNode::InitNodes()
{
  pthread_mutex_t **Mutex;
  glf::TlsNode::Self *i;

  Mutex = glf::TlsNode::GetMutex();
  glf::Mutex::Lock(Mutex);
  for ( i = *(glf::TlsNode::Self **)glf::TlsNode::GetHead(); i != nullptr; i = *(glf::TlsNode::Self **)i )
    glf::TlsNode::Init(i);
  return glf::Mutex::Unlock(Mutex);
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::DenitNodes  (binary VA: 0xc83390)
// Original: glf::TlsNode::DenitNodes
// ----------------------------------------------------------------------------
int glf::TlsNode::DenitNodes()
{
  pthread_mutex_t **Mutex;
  pthread_key_t *i;

  Mutex = glf::TlsNode::GetMutex();
  glf::Mutex::Lock(Mutex);
  for ( i = *(pthread_key_t **)glf::TlsNode::GetHead(); i != nullptr; i = (pthread_key_t *)*i )
    glf::TlsNode::DeAlloc(i);
  return glf::Mutex::Unlock(Mutex);
}

// ----------------------------------------------------------------------------
// Function: glf::TlsNode::DeallocNodes  (binary VA: 0xc833e0)
// Original: glf::TlsNode::DeallocNodes
// ----------------------------------------------------------------------------
pthread_key_t ** glf::TlsNode::DeallocNodes()
{
  pthread_key_t **result;
  pthread_key_t *i;

  result = (pthread_key_t **)glf::TlsNode::GetHead();
  for ( i = *result; i != nullptr; i = (pthread_key_t *)*i )
    result = (pthread_key_t **)glf::TlsNode::DeAlloc(i);
  return result;
}


