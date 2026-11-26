#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Thread.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Thread::Construct  (binary VA: 0x13e9980)
// Original: glwebtools::Thread::Thread
// ----------------------------------------------------------------------------
glwebtools::Thread::Self * glwebtools::Thread::Construct(glwebtools::Thread::Self *self, void (*a2)(void *, void *), void *a3, void *a4, char *s)
{
  size_t v5;
  char *v6;
  glwebtools::Thread::Self *result;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a4);
  if ( s != nullptr )
  {
    v5 = strlen(s);
    v6 = (char *)sub_4EBE70(v5 + 1, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v6);
    if ( v6 != nullptr )
      strcpy(v6, s);
  }
  result = (glwebtools::Thread::Self *)sub_4EBE70(4u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  *(uint32_t *)result = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 4) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Thread::Start  (binary VA: 0x13e9a50)
// Original: glwebtools::Thread::Start
// ----------------------------------------------------------------------------
int glwebtools::Thread::Start(uint32_t *arg)
{
  int result;
  pthread_t *v2;
  int v3;
  typedef pthread_attr_t _g4_t_attr;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_attr)) > _g4_s0 ? (8u + sizeof(_g4_t_attr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 8u);

  result = arg[5];
  if ( result != 0 )
  {
    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr, 0x10000u);
    v2 = (pthread_t *)arg[5];
    arg[4] = 2;
    v3 = pthread_create(v2, &attr, (void *(*)(void *))glwebtools::ThreadPosixImpl_Data::Update, arg);
    result = pthread_attr_destroy(&attr);
    if ( v3 != 0 )
      arg[4] = 3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Thread::Join  (binary VA: 0x13e9af0)
// Original: glwebtools::Thread::Join
// ----------------------------------------------------------------------------
glwebtools::Thread::Self * glwebtools::Thread::Join(pthread_t **self)
{
  glwebtools::Thread::Self *result;

  result = (glwebtools::Thread::Self *)self;
  if ( *(self + 4) == (pthread_t *)((char *)&dword_0 + 2) )
    return (glwebtools::Thread::Self *)pthread_join(**(self + 5), nullptr);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Thread::Destroy  (binary VA: 0x13e9b30)
// Original: glwebtools::Thread::~Thread
// ----------------------------------------------------------------------------
void glwebtools::Thread::Destroy(glwebtools::Thread::Self *self)
{
  glwebtools::Thread::Join((pthread_t **)self);
  if ( *((uint32_t *)self + 5) != 0 )
    sub_4EBEE0(*((uint32_t *)self + 5));
  if ( *((uint32_t *)self + 3) != 0 )
  {
    sub_4EBEE0(*((uint32_t *)self + 3));
    *((uint32_t *)self + 3) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Thread::GetState  (binary VA: 0x13e9b90)
// Original: glwebtools::Thread::GetState
// ----------------------------------------------------------------------------
int glwebtools::Thread::GetState(glwebtools::Thread::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Thread::Sleep  (binary VA: 0x13e9ba0)
// Original: glwebtools::Thread::Sleep
// ----------------------------------------------------------------------------
int glwebtools::Thread::Sleep(glwebtools::Thread::Self *self)
{
  return usleep(1000 * (uint32_t)(uintptr_t)(self));
}



// ============================================================================
// Address:   0x13e9bd0 (size: 43 bytes)
// Symbol:    _ZN10glwebtools6Thread11RunInstanceEv
// Demangled: glwebtools::Thread::RunInstance(void)
// ============================================================================
int (*glwebtools::Thread::RunInstance(glwebtools::Thread::Self *self))(uint32_t, uint32_t)
{
  int (*result)(uint32_t, uint32_t);

  result = *(int (**)(uint32_t, uint32_t))self;
  if ( *(uint32_t *)self != 0 )
    result = (int (*)(uint32_t, uint32_t))result(*((uint32_t *)self + 1), *((uint32_t *)self + 2));
  *((uint32_t *)self + 4) = 1;
  return result;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Thread::RunStatic  (binary VA: 0x13e9c00)
// Original: glwebtools::Thread::RunStatic
// ----------------------------------------------------------------------------
glwebtools::Thread::Self * glwebtools::Thread::RunStatic(glwebtools::Thread::Self *self)
{
  glwebtools::Thread::Self *result;

  result = self;
  if ( self != nullptr )
    return (glwebtools::Thread::Self *)glwebtools::Thread::RunInstance(self);
  return result;
}


