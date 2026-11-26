#include "Core/Utils/DecompTypes.h"
#include "glf_ThreadMgr.h"
#include <unistd.h>
#include <errno.h>
#include <sys/syscall.h>
#include <android/log.h>

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::GetPtrRef  (binary VA: 0xc809b0)
// Original: glf::ThreadMgr::GetPtrRef
// ----------------------------------------------------------------------------
void * glf::ThreadMgr::GetPtrRef()
{
  return &unk_20DEDE4;
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::Add  (binary VA: 0xc809d0)
// Original: glf::ThreadMgr::Add
// ----------------------------------------------------------------------------
uint32_t * glf::ThreadMgr::Add(glf::ThreadMgr::Self *self, glf::Thread::Self *a2)
{
  pthread_t v2;
  int v3;
  int v4;
  uint32_t *result;

  v2 = pthread_self();
  if ( v2 == *((uint32_t *)self + 1) )
  {
    v3 = *((uint32_t *)self + 2) + 1;
    *((uint32_t *)self + 2) = v3;
  }
  else
  {
    glf::SpinLock::Lock((volatile int32_t **)self + 3);
    *((uint32_t *)self + 1) = v2;
    *((uint32_t *)self + 2) = 1;
    v3 = 1;
  }
  v4 = *((uint32_t *)self + 45);
  *((uint32_t *)self + v4 + 13) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 45) = v4 + 1;
  if ( a2 != (glf::Thread::Self *)((glf::ThreadMgr::Self *)((char *)self + 24)) )
  {
    *(uint32_t *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gThisGlfThread, true) = (uint32_t)(uintptr_t)(a2);
    v3 = *((uint32_t *)self + 2);
  }
  result = (uint32_t *)(v3 - 1);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
  if ( result == nullptr )
  {
    *((uint32_t *)self + 1) = 0;
    return glf::SpinLock::Unlock((glf::ThreadMgr::Self *)((char *)self + 12));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::Remove  (binary VA: 0xc80aa0)
// Original: glf::ThreadMgr::Remove
// ----------------------------------------------------------------------------
uint32_t * glf::ThreadMgr::Remove(glf::ThreadMgr::Self *self, glf::Thread::Self *a2)
{
  pthread_t v2;
  uint32_t *result;
  int v4;
  uint32_t *v5;

  v2 = pthread_self();
  if ( v2 == *((uint32_t *)self + 1) )
  {
    v4 = *((uint32_t *)self + 2);
    result = (uint32_t *)(v4 + 1);
    *((uint32_t *)self + 2) = v4 + 1;
  }
  else
  {
    result = (uint32_t *)glf::SpinLock::Lock((volatile int32_t **)self + 3);
    *((uint32_t *)self + 1) = v2;
    *((uint32_t *)self + 2) = 1;
    v4 = 0;
  }
  v5 = *((uint32_t **)self + 45);
  if ( v5 != nullptr )
  {
    result = nullptr;
    if ( *((glf::Thread::Self **)self + 13) == a2 )
    {
LABEL_11:
      *((uint32_t *)self + 45) = (uint32_t)(uintptr_t)((char *)v5 - 1);
      *((uint32_t *)self + (uint32_t)(uintptr_t)(result) + 13) = *((uint32_t *)self + (uint32_t)(uintptr_t)(v5) + 12);
    }
    else
    {
      while ( 1 )
      {
        result = (uint32_t *)((char *)result + 1);
        if ( result == v5 )
          break;
        if ( *((glf::Thread::Self **)self + (uint32_t)(uintptr_t)(result) + 13) == a2 )
          goto LABEL_11;
      }
    }
  }
  *((uint32_t *)self + 2) = v4;
  if ( v4 == 0 )
  {
    *((uint32_t *)self + 1) = 0;
    return glf::SpinLock::Unlock((glf::ThreadMgr::Self *)((char *)self + 12));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::AddStartExitHandlers  (binary VA: 0xc80b50)
// Original: glf::ThreadMgr::AddStartExitHandlers
// ----------------------------------------------------------------------------
int glf::ThreadMgr::AddStartExitHandlers(volatile int32_t **self, void (*a2)(void *), void (*a3)(void *), volatile int32_t *a4)
{
  int v4;
  volatile int32_t **v5;

  v4 = 0;
  glf::SpinLock::Lock(self + 79);
  do
  {
    v5 = self + 3 * v4 + 80;
    if ( *v5 == nullptr )
    {
      *v5 = (volatile int32_t *)a2;
      *(self + 3 * v4 + 81) = (volatile int32_t *)a3;
      *(self + 3 * v4 + 82) = a4;
      goto LABEL_5;
    }
    ++v4;
  }
  while ( v4 != 32 );
  v4 = -1;
LABEL_5:
  glf::SpinLock::Unlock((glf::SpinLock::Self *)(self + 79));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::RemoveStartExitHandlers  (binary VA: 0xc80bd0)
// Original: glf::ThreadMgr::RemoveStartExitHandlers
// ----------------------------------------------------------------------------
int glf::ThreadMgr::RemoveStartExitHandlers(volatile int32_t **self, unsigned int a2)
{
  volatile int32_t **v2;
  int v3;

  glf::SpinLock::Lock(self + 79);
  v2 = self + 3 * a2 + 80;
  v3 = (int)(uintptr_t)(*(self + 3 * a2 + 82));
  v2[1] = nullptr;
  *v2 = nullptr;
  v2[2] = nullptr;
  glf::SpinLock::Unlock((glf::SpinLock::Self *)(self + 79));
  return v3;
}



// ============================================================================
// Address:   0xc80c50 (size: 55 bytes)
// Symbol:    _ZN3glf9ThreadMgr13OnStartThreadEv
// Demangled: glf::ThreadMgr::OnStartThread(void)
// ============================================================================
int (*glf::ThreadMgr::OnStartThread(glf::ThreadMgr::Self *self))(uint32_t)
{
  int i;
  int (*result)(uint32_t);

  for ( i = 0; i != 32; ++i )
  {
    result = *((int (**)(uint32_t))self + 3 * i + 80);
    if ( result != nullptr )
      result = (int (*)(uint32_t))result(*((uint32_t *)self + 3 * i + 82));
  }
  return result;
}


// ============================================================================
// Address:   0xc80c90 (size: 108 bytes)
// Symbol:    _ZN3glf9ThreadMgr4InitEv
// Demangled: glf::ThreadMgr::Init(void)
// ============================================================================
int (*glf::ThreadMgr::Init(glf::ThreadMgr::Self *self))(uint32_t)
{
  glf::TlsNode::Self *v2;

  glf::ThreadMgr::Add(self, (glf::ThreadMgr::Self *)((char *)self + 24));
  *((uint32_t *)self + 4) = pthread_self();
  glf::TlsNode::InitNodes(v2);
  *(uint32_t *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gThisGlfThread, true) = (uint32_t)(uintptr_t)((char *)self + 24);
  return glf::ThreadMgr::OnStartThread(self);
}
// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::Construct  (binary VA: 0xc810d0)
// Original: glf::ThreadMgr::ThreadMgr
// ----------------------------------------------------------------------------
glf::ThreadMgr::Self * glf::ThreadMgr::Construct(glf::ThreadMgr::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  glf::SpinLock::Construct((glf::ThreadMgr::Self *)((char *)self + 12));
  glf::Thread::Thread((glf::ThreadMgr::Self *)((char *)self + 24));
  glf::SpinLock::Construct((glf::ThreadMgr::Self *)((char *)self + 316));
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 78) = 0;
  glf::Memset((glf::ThreadMgr::Self *)((char *)self + 320), nullptr, 0x180u);
  return (glf::ThreadMgr::Self *)glf::ThreadMgr::Init(self);
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::Get  (binary VA: 0xc81170)
// Original: glf::ThreadMgr::Get
// ----------------------------------------------------------------------------
glf::ThreadMgr::Self * glf::ThreadMgr::Get()
{
  glf::ThreadMgr::Self **PtrRef;
  glf::ThreadMgr::Self *result;
  glf::ThreadMgr::Self *v2;

  PtrRef = (glf::ThreadMgr::Self **)glf::ThreadMgr::GetPtrRef();
  result = *PtrRef;
  if ( *PtrRef == nullptr )
  {
    v2 = (glf::ThreadMgr::Self *)opNew(0x2C0u);
    glf::ThreadMgr::Construct(v2);
    *PtrRef = v2;
    return v2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::Destroy  (binary VA: 0xc815a0)
// Original: glf::ThreadMgr::~ThreadMgr
// ----------------------------------------------------------------------------
void glf::ThreadMgr::Destroy(glf::ThreadMgr::Self *self)
{
  pthread_t v1;
  unsigned int v2;
  pthread_t *v3;
  unsigned int v4;
  unsigned int i;
  int v6;
  glf::SpinLock::Self *v8;

  v1 = pthread_self();
  if ( v1 == *((uint32_t *)self + 1) )
  {
    ++*((uint32_t *)self + 2);
    v8 = (glf::SpinLock::Self *)((glf::ThreadMgr::Self *)((char *)self + 12));
  }
  else
  {
    v8 = (glf::SpinLock::Self *)((glf::ThreadMgr::Self *)((char *)self + 12));
    glf::SpinLock::Lock((volatile int32_t **)self + 3);
    *((uint32_t *)self + 1) = v1;
    *((uint32_t *)self + 2) = 1;
  }
  if ( *((uint32_t *)self + 45) != 0 )
  {
    v2 = 0;
    do
    {
      v3 = *((pthread_t **)self + v2 + 13);
      if ( (uint8_t)glf::Thread::IsMain((glf::Thread::Self *)v3) == 0 )
        glf::Thread::Join(v3);
      *((uint32_t *)self + v2++ + 13) = 0;
    }
    while ( *((uint32_t *)self + 45) > v2 );
  }
  v4 = *((uint32_t *)self + 78);
  if ( v4 != 0 )
  {
    for ( i = 0; i < v4; ++i )
    {
      v6 = *((uint32_t *)self + i + 46);
      if ( v6 != 0 )
      {
        (*(void (**)(uint32_t))(*(uint32_t *)v6 + 4))(*((uint32_t *)self + i + 46));
        v4 = *((uint32_t *)self + 78);
      }
    }
  }
  if ( (*((uint32_t *)self + 2))-- == 1 )
  {
    *((uint32_t *)self + 1) = 0;
    glf::SpinLock::Unlock(v8);
  }
  glf::SpinLock::Destroy((void **)self + 79);
  glf::Thread::Destroy((pthread_t *)self + 6);
  glf::SpinLock::Destroy((void **)v8);
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::Destroy  (binary VA: 0xc816b0)
// Original: glf::ThreadMgr::Destroy
// ----------------------------------------------------------------------------
glf::ThreadMgr::Self ** glf::ThreadMgr::Destroy()
{
  glf::ThreadMgr::Self **result;
  glf::ThreadMgr::Self *v1;
  glf::ThreadMgr::Self **v2;

  result = (glf::ThreadMgr::Self **)glf::ThreadMgr::GetPtrRef();
  v1 = *result;
  v2 = result;
  if ( *result != nullptr && v1 != (glf::ThreadMgr::Self *)glf::ThreadMgrDestroyedPtr )
  {
    glf::ThreadMgr::Destroy(*result);
    opDelete(v1);
    result = (glf::ThreadMgr::Self **)glf::ThreadMgrDestroyedPtr;
    *v2 = (glf::ThreadMgr::Self *)glf::ThreadMgrDestroyedPtr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::OnExitThread  (binary VA: 0xc81870)
// Original: glf::ThreadMgr::OnExitThread
// ----------------------------------------------------------------------------
int glf::ThreadMgr::OnExitThread(glf::ThreadMgr::Self *self)
{
  int i;
  void (*v2)(uint32_t);
  glf::App::Self *Instance;
  glf::Thread::Self **Value;
  int v5;
  glf::Thread::Self *v6;
  int v7;
  glf::App::Self *v9;
  glf::TlsNode::Self *v10;

  for ( i = 31; i != -1; --i )
  {
    v2 = *((void (**)(uint32_t))self + 3 * i + 81);
    if ( v2 != nullptr )
      v2(*((uint32_t *)self + 3 * i + 82));
  }
  if ( glf::App::GetInstance() != 0 )
  {
    Instance = (glf::App::Self *)glf::App::GetInstance();
    glf::App::ReleaseContext(Instance);
  }
  glf::Thread::ReleaseSequentialThreadId();
  Value = (glf::Thread::Self **)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gThisGlfThread, true);
  v5 = *((uint32_t *)self + 78);
  v6 = *Value;
  if ( v5 == 0 )
    return (int)(uintptr_t)(glf::TlsNode::DeallocNodes(v9));
  v7 = 0;
  if ( *((glf::Thread::Self **)self + 46) != v6 )
  {
    while ( ++v7 != v5 )
    {
      if ( *((glf::Thread::Self **)self + v7 + 46) == v6 )
        goto LABEL_13;
    }
    return (int)(uintptr_t)(glf::TlsNode::DeallocNodes(v9));
  }
LABEL_13:
  *((uint32_t *)self + 78) = v5 - 1;
  *((uint32_t *)self + v7 + 46) = *((uint32_t *)self + v5 + 45);
  glf::ThreadMgr::Remove(self, v6);
  return (int)(uintptr_t)(glf::TlsNode::DeallocNodes(v10));
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::DeInit  (binary VA: 0xc81950)
// Original: glf::ThreadMgr::DeInit
// ----------------------------------------------------------------------------
int glf::ThreadMgr::DeInit(glf::ThreadMgr::Self *self)
{
  int result;
  glf::TlsNode::Self *v2;

  glf::ThreadMgr::OnExitThread(self);
  result = glf::TlsNode::DenitNodes(v2);
  *((uint32_t *)self + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::AddMirrorThreads  (binary VA: 0xc81bf0)
// Original: glf::ThreadMgr::AddMirrorThreads
// ----------------------------------------------------------------------------
glf::Thread::Self * glf::ThreadMgr::AddMirrorThreads(glf::ThreadMgr::Self *self, glf::Thread::Self *a2)
{
  pthread_t v2;
  void *v3;
  int v4;
  int v5;
  typedef uint16_t _g4_t_v8[3];
  typedef char _g4_t_s[76];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (10u + sizeof(_g4_t_v8)) > _g4_s0 ? (10u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s)) > _g4_s1 ? (16u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 10u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  v2 = pthread_self();
  if ( v2 == *((uint32_t *)self + 1) )
  {
    ++*((uint32_t *)self + 2);
  }
  else
  {
    glf::SpinLock::Lock((volatile int32_t **)self + 3);
    *((uint32_t *)self + 1) = v2;
    *((uint32_t *)self + 2) = 1;
  }
  sprintf(s, "[glf] mirror thread %d", *((uint32_t *)self + 78));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8[1]), s, (int)(uintptr_t)(v8));
  glf::Thread::SetName((int)(uintptr_t)(a2), &v8[1]);
  v3 = (void *)(*(uint32_t *)&v8[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v8[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v8[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = *((uint32_t *)self + 45);
  *((uint32_t *)self + v4 + 13) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 45) = v4 + 1;
  v5 = *((uint32_t *)self + 78);
  *((uint32_t *)self + v5 + 46) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 78) = v5 + 1;
  *((uint32_t *)a2 + 4) = 1;
  glf::Thread::OnStart();
  if ( (*((uint32_t *)self + 2))-- == 1 )
  {
    *((uint32_t *)self + 1) = 0;
    glf::SpinLock::Unlock((glf::ThreadMgr::Self *)((char *)self + 12));
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glf::ThreadMgr::GetCurrent  (binary VA: 0xc81d30)
// Original: glf::ThreadMgr::GetCurrent
// ----------------------------------------------------------------------------
namespace glf { namespace Thread { char ConstructMirror(glf::Thread::Self *self); } }

glf::Thread::Self * glf::ThreadMgr::GetCurrent(glf::ThreadMgr::Self *self)
{
  glf::Thread::Self *v1;

  v1 = *(glf::Thread::Self **)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gThisGlfThread, true);
  if ( v1 == nullptr )
  {
    v1 = (glf::Thread::Self *)opNew(0x1Cu);
    glf::Thread::ConstructMirror(v1);
    *(uint32_t *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gThisGlfThread, true) = (uint32_t)(uintptr_t)(v1);
    glf::ThreadMgr::AddMirrorThreads(self, v1);
  }
  return v1;
}

// ============================================================================
// Step 3A: glf::Thread, glf::Thread::Impl, glf::Fs, and fs2 sort helper
// ============================================================================

namespace glf {
namespace Thread {
namespace Impl {
  struct Self { uint8_t opaque[40]; };
  int GetCoreAffinity(Self *self);
  int SetCoreAffinity(Self *self, int a2);
  void Destroy(Self *self);
  void Destroy_eac82400(Self *self);
  int SetPriority(Self *self, int a2);
  void *RunThread(void *arg);
}
}
}

void glf::Thread::Run(glf::Thread::Self *self)
{
  (void)self;
}

bool glf::Thread::IsMinStackSizeSet()
{
  return *(uint32_t *)(g4_rwdata_image + (0x20ded60u - 0x20307e0u)) != 0;
}

uint32_t *glf::Thread::SetMinStackSize(int a1)
{
  uint32_t *p = (uint32_t *)(g4_rwdata_image + (0x20ded60u - 0x20307e0u));
  *p = (uint32_t)a1;
  return p;
}

char glf::Thread::Init(glf::Thread::Self *self)
{
  uint32_t minSz = *(uint32_t *)(g4_rwdata_image + (0x20ded60u - 0x20307e0u));
  if ( minSz != 0 )
  {
    if ( *((uint32_t *)self + 2) < minSz )
      *((uint32_t *)self + 2) = minSz;
    return (char)minSz;
  }
  return 0;
}

char glf::Thread::Thread(glf::Thread::Self *self, unsigned int a2)
{
  uint32_t *v2;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206D8F0);
  *((uint32_t *)self + 2) = a2;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 3) = 3;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = (uint32_t *)sub_4EBD10(0x28u, 1);
  v2[0] = (uint32_t)(uintptr_t)(&off_206D928);
  v2[1] = (uint32_t)(uintptr_t)self;
  v2[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  v2[3] = 0;
  g4_std::string::assign((int)(uintptr_t)(v2 + 2), "thread", 6u);
  v2[4] = 0;
  v2[5] = 0;
  v2[0] = (uint32_t)(uintptr_t)(&off_206D968);
  v2[6] = (uint32_t)-1;
  *((uint8_t *)v2 + 28) = 0;
  v2[8] = 0xFFFFu & 0xFFF6FEEBu;
  v2[9] = 0xFFFFFu;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)v2;
  return glf::Thread::Init(self);
}

char glf::Thread::ConstructMirror(glf::Thread::Self *a1)
{
  uint32_t *v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D8F0);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 2) = 0;
  *((uint32_t *)a1 + 3) = 1;
  *((uint32_t *)a1 + 4) = 0;
  *((uint32_t *)a1 + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  v1 = (uint32_t *)sub_4EBD10(0x28u, 1);
  v1[0] = (uint32_t)(uintptr_t)(&off_206D928);
  v1[1] = (uint32_t)(uintptr_t)a1;
  v1[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  v1[3] = 0;
  g4_std::string::assign((int)(uintptr_t)(v1 + 2), "thread", 6u);
  v1[0] = (uint32_t)(uintptr_t)(&off_206D968);
  v1[4] = (uint32_t)pthread_self();
  v1[5] = (uint32_t)gettid();
  v1[6] = (uint32_t)-1;
  *((uint8_t *)v1 + 28) = 0;
  v1[8] = 0xFFFFu & 0xFFF6FEEBu;
  v1[9] = 0xFFFFFu;
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)v1;
  (*(void (**)(uint32_t *))(*v1 + 12))(v1);
  return glf::Thread::Init(a1);
}

char glf::Thread::Thread(glf::Thread::Self *self)
{
  uint32_t *v1;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206D8F0);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 1;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  v1 = (uint32_t *)sub_4EBD10(0x28u, 1);
  v1[0] = (uint32_t)(uintptr_t)(&off_206D928);
  v1[1] = (uint32_t)(uintptr_t)self;
  v1[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  v1[3] = 0;
  g4_std::string::assign((int)(uintptr_t)(v1 + 2), "main", 4u);
  v1[0] = (uint32_t)(uintptr_t)(&off_206D968);
  v1[4] = (uint32_t)pthread_self();
  v1[5] = (uint32_t)gettid();
  v1[6] = (uint32_t)-1;
  *((uint8_t *)v1 + 28) = 1;
  v1[8] = 0xFFFFu & 0xFFF6FEEBu;
  v1[9] = 0xFFFFFu;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)v1;
  return glf::Thread::Init(self);
}

int glf::Thread::GetPriority(glf::Thread::Self *self)
{
  uint32_t impl = *((uint32_t *)self + 6);
  return (*(int (**)(uint32_t))(*(uint32_t *)impl + 36))(impl);
}

int glf::Thread::SetPriority(glf::Thread::Self *self, int a2)
{
  uint32_t impl = *((uint32_t *)self + 6);
  return (*(int (**)(uint32_t, int))(*(uint32_t *)impl + 32))(impl, a2);
}

int glf::Thread::GetStatus(glf::Thread::Self *self)
{
  int result = *((int *)self + 3);
  __sync_synchronize();
  return result;
}

int glf::Thread::IsMain(glf::Thread::Self *self)
{
  return *(uint8_t *)(*((uint32_t *)self + 6) + 28);
}

pthread_t glf::Thread::Join(pthread_t *self)
{
  pthread_t result = (pthread_t)glf::Thread::IsMain((glf::Thread::Self *)self);
  if ( (uint8_t)result == 0 )
  {
    result = self[4];
    if ( result == 0 )
    {
      uint32_t v2 = (uint32_t)self[6];
      result = *(pthread_t *)(uintptr_t)(v2 + 16);
      if ( result != 0 )
      {
        result = (pthread_t)pthread_join(result, nullptr);
        *(uint32_t *)(uintptr_t)(v2 + 16) = 0;
      }
    }
  }
  return result;
}

void glf::Thread::Destroy(pthread_t *self)
{
  *self = (pthread_t)(uintptr_t)(&off_206D8F0);
  glf::Thread::Join(self);
  uint32_t v1 = (uint32_t)self[6];
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)(uintptr_t)v1 + 4))(v1);
  uint32_t v2 = (uint32_t)self[5];
  if ( (uint32_t *)(uintptr_t)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(uintptr_t)(v2 - 12));
  }
  *self = (pthread_t)(uintptr_t)(&off_206A3C8);
}

void glf::Thread::Destroy_eac814e0(pthread_t *self)
{
  glf::Thread::Destroy(self);
  opDelete(self);
}

uint32_t *glf::Thread::OnStart()
{
  glf::ThreadMgr::Self *v0 = glf::ThreadMgr::Get();
  glf::ThreadMgr::OnStartThread(v0);
  glf::TlsNode::Self *tlsNode = (glf::TlsNode::Self *)(g4_rwdata_image + (0x20ded80u - 0x20307e0u));
  uint32_t *result = nullptr;
  if ( *((uint32_t *)tlsNode + 2) != 0 )
  {
    result = (uint32_t *)glf::TlsNode::GetValue(tlsNode, true);
    if ( result != nullptr )
      *result = 0;
  }
  return result;
}

int glf::Thread::OnExit()
{
  glf::ThreadMgr::Self *v0 = glf::ThreadMgr::Get();
  return glf::ThreadMgr::OnExitThread(v0);
}

uint32_t *glf::Thread::MyRun(glf::Thread::Self *self)
{
  *((uint32_t *)self + 3) = 1;
  glf::ThreadMgr::Self *v1 = glf::ThreadMgr::Get();
  glf::ThreadMgr::Add(v1, self);
  glf::Thread::OnStart();
  glf::Thread::Sleep(10u);
  int prio = glf::Thread::GetPriority(self);
  glf::Thread::SetPriority(self, prio);
  uint32_t runnable = *((uint32_t *)self + 1);
  (*(void (**)(uint32_t))(*(uint32_t *)(uintptr_t)runnable + 8))(runnable);
  glf::Thread::OnExit();
  glf::ThreadMgr::Self *v3 = glf::ThreadMgr::Get();
  uint32_t *result = glf::ThreadMgr::Remove(v3, self);
  *((uint32_t *)self + 3) = 3;
  return result;
}

int glf::Thread::Start(glf::Thread::Self *self, glf::Runnable::Self *a2, int a3)
{
  int v3 = a3;
  uint32_t *arg = *((uint32_t **)self + 6);
  size_t stacksize = *((uint32_t *)self + 2);
  pthread_attr_t attr;

  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)a2;
  arg[3] = (uint32_t)a3;
  *((uint32_t *)self + 3) = 0;
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
  if ( stacksize > 0 )
  {
    if ( stacksize < 65536u )
      stacksize = 65536u;
    pthread_attr_setstacksize(&attr, stacksize);
  }
  glf::ThreadMgr::Get();
  pthread_create((pthread_t *)(arg + 4), &attr, glf::Thread::Impl::RunThread, arg);
  uint32_t v6;
  uint32_t v7;
  if ( a3 < -15 )
  {
    v6 = arg[8];
    v7 = 0x8000u;
    v3 = -15;
  }
  else if ( a3 > 19 )
  {
    v6 = arg[9];
    v7 = 0x80000u;
    v3 = 19;
  }
  else if ( a3 >= 0 )
  {
    v6 = arg[9];
    v7 = 1u << a3;
  }
  else
  {
    v6 = arg[8];
    v7 = 1u << (-(char)a3);
  }
  if ( (v6 & v7) != 0 )
    arg[3] = (uint32_t)v3;
  return pthread_attr_destroy(&attr);
}

int glf::Thread::Start(glf::Thread::Self *self, int a2)
{
  return glf::Thread::Start(self, (glf::Runnable::Self *)self, a2);
}

int glf::Thread::AddStartExitHandlers(void (*a1)(void *), void (*a2)(void *), void *a3)
{
  volatile int32_t **mgr = (volatile int32_t **)glf::ThreadMgr::Get();
  return glf::ThreadMgr::AddStartExitHandlers(mgr, a1, a2, (volatile int32_t *)a3);
}

int glf::Thread::RemoveStartExitHandlers(int a1)
{
  volatile int32_t **mgr = (volatile int32_t **)glf::ThreadMgr::Get();
  return glf::ThreadMgr::RemoveStartExitHandlers(mgr, (unsigned int)a1);
}

int glf::Thread::GetPriorityNorm()
{
  return 0;
}

int glf::Thread::SetCoreAffinity(glf::Thread::Self *self, int a2)
{
  uint32_t impl = *((uint32_t *)self + 6);
  return (*(int (**)(uint32_t, int))(*(uint32_t *)(uintptr_t)impl + 40))(impl, a2);
}

int glf::Thread::GetCoreAffinity(glf::Thread::Self *self)
{
  uint32_t impl = *((uint32_t *)self + 6);
  return (*(int (**)(uint32_t))(*(uint32_t *)(uintptr_t)impl + 44))(impl);
}

int glf::Thread::SetName(int a1, const void *a2)
{
  uint32_t impl = *(uint32_t *)(uintptr_t)(a1 + 24);
  return (*(int (**)(uint32_t, uint32_t))(*(uint32_t *)(uintptr_t)impl + 8))(impl, *(const uint32_t *)a2);
}

glf::Thread::Self *glf::Thread::GetCurrent()
{
  glf::ThreadMgr::Self *v0 = glf::ThreadMgr::Get();
  return glf::ThreadMgr::GetCurrent(v0);
}

int glf::Thread::Impl::GetCoreAffinity(glf::Thread::Impl::Self *self)
{
  int v3 = -1;
  if ( syscall(__NR_sched_getaffinity, *((uint32_t *)self + 5), 4, &v3) != 0 )
  {
    int err = errno;
    printf("Error in the syscall getaffinity: mask=%d=0x%x err=%d=0x%x", v3, v3, err, err);
  }
  return v3;
}

int glf::Thread::Impl::SetCoreAffinity(glf::Thread::Impl::Self *self, int a2)
{
  int tid = *((int *)self + 5);
  if ( tid != 0 && syscall(__NR_sched_setaffinity, tid, 4, &a2) != 0 )
  {
    int err = errno;
    printf("Error in the syscall setaffinity: mask=%d=0x%x err=%d=0x%x", a2, a2, err, err);
  }
  *((int *)self + 6) = a2;
  return a2;
}

void glf::Thread::Impl::Destroy(glf::Thread::Impl::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206D928);
  uint32_t v1 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(uintptr_t)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(uintptr_t)(v1 - 12));
  }
}

void glf::Thread::Impl::Destroy_eac82400(glf::Thread::Impl::Self *self)
{
  glf::Thread::Impl::Destroy(self);
  opDelete(self);
}

int glf::Thread::Impl::SetPriority(glf::Thread::Impl::Self *self, int a2)
{
  int vm = glf::AndroidGetJavaVM();
  if ( vm != 0 )
  {
    uint32_t mask_set = (a2 < 0) ? *((uint32_t *)self + 8) : *((uint32_t *)self + 9);
    uint32_t bit = (a2 < 0) ? (1u << (-(char)a2)) : (1u << a2);
    if ( (mask_set & bit) != 0 )
    {
      int env = 0;
      int rc = (*(int (**)(int, int *, int))(*(uint32_t *)(uintptr_t)vm + 24))(vm, &env, 65538);
      if ( rc == -3 )
      {
        __android_log_print(6, (const char *)&unk_1B15112, "%s", "ScopeGetEnv: Invalid Java version");
      }
      else if ( rc == -2 )
      {
        if ( (*(int (**)(int, int *, int))(*(uint32_t *)(uintptr_t)vm + 16))(vm, &env, 0) == 0 )
        {
          int cls = (*(int (**)(int, const char *))(*(uint32_t *)(uintptr_t)env + 24))(env, "android/os/Process");
          int mid = (*(int (**)(int, int, const char *, const char *))(*(uint32_t *)(uintptr_t)env + 452))(
                      env, cls, "setThreadPriority", "(I)V");
          sub_4BFF00(env, cls, mid, a2);
          *((int *)self + 3) = a2;
          return (*(int (**)(int))(*(uint32_t *)(uintptr_t)vm + 20))(vm);
        }
        __android_log_print(6, (const char *)&unk_1B15112, "%s", "ScopeGetEnv: Could not attach current thread");
      }
      if ( env != 0 )
      {
        int cls = (*(int (**)(int, const char *))(*(uint32_t *)(uintptr_t)env + 24))(env, "android/os/Process");
        int mid = (*(int (**)(int, int, const char *, const char *))(*(uint32_t *)(uintptr_t)env + 452))(
                    env, cls, "setThreadPriority", "(I)V");
        int res = sub_4BFF00(env, cls, mid, a2);
        *((int *)self + 3) = a2;
        return res;
      }
    }
    return (int)bit;
  }
  return 0;
}

void *glf::Thread::Impl::RunThread(void *arg)
{
  glf::Thread::Impl::Self *self = (glf::Thread::Impl::Self *)arg;
  *((uint32_t *)self + 5) = (uint32_t)gettid();
  (*(void (**)(glf::Thread::Impl::Self *, int))(*(uint32_t *)self + 40))(self, *((int *)self + 6));
  glf::Thread::MyRun(*((glf::Thread::Self **)self + 1));
  return nullptr;
}

static int g4_glf_str_compare_cstr(uint32_t str_obj_addr, const char *s)
{
  const char *data = *(const char **)(uintptr_t)str_obj_addr;
  size_t len1 = *((const uint32_t *)data - 3);
  size_t len2 = strlen(s);
  size_t n = (len2 <= len1) ? len2 : len1;
  int cmp = memcmp(data, s, n);
  if ( cmp == 0 )
    return (int)(len1 - len2);
  return cmp;
}

int glf::Fs::CopyFile(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t impl = *(uint32_t *)(uintptr_t)(a1 + 316);
  return (*(int (**)(uint32_t, int, int, int, int))(*(uint32_t *)(uintptr_t)impl + 36))(impl, a2, a3, a4, a5);
}

int glf::Fs::DoesFileExist(int a1, char *a2, char *a3)
{
  glf::Self *ephem = (glf::Self *)glf::allocateEphemeralAllocation((glf::Self *)(uintptr_t)0x800u);
  int16_t v4 = (int16_t)glf::Fs::ResolvePath(a1, a2, (unsigned int)(uintptr_t)a3, ephem, (char *)(uintptr_t)0x800u);
  glf::ArchiveManager::Self *v5 = (glf::ArchiveManager::Self *)glf::ArchiveManager::s_instance[0];
  if ( v5 == nullptr )
  {
    v5 = (glf::ArchiveManager::Self *)malloc(0x1Cu);
    if ( v5 != nullptr )
      glf::ArchiveManager::ArchiveManager(v5);
    glf::ArchiveManager::s_instance[0] = (uintptr_t)v5;
  }
  int v7 = 1;
  if ( !glf::ArchiveManager::IsUsingArchive(v5, v4) )
  {
    uint32_t impl = *(uint32_t *)(uintptr_t)(a1 + 316);
    v7 = (*(int (**)(uint32_t, char *))(*(uint32_t *)(uintptr_t)impl + 24))(impl, (char *)ephem);
  }
  else
  {
    glf::ArchiveManager::Self *v6 = (glf::ArchiveManager::Self *)glf::ArchiveManager::s_instance[0];
    if ( v6 == nullptr )
    {
      v6 = (glf::ArchiveManager::Self *)malloc(0x1Cu);
      if ( v6 != nullptr )
        glf::ArchiveManager::ArchiveManager(v6);
      glf::ArchiveManager::s_instance[0] = (uintptr_t)v6;
    }
    if ( (uint8_t)glf::ArchiveManager::DoesFileExist(v6, (char *)ephem) == 0 )
    {
      uint32_t impl = *(uint32_t *)(uintptr_t)(a1 + 316);
      v7 = (*(int (**)(uint32_t, char *))(*(uint32_t *)(uintptr_t)impl + 24))(impl, (char *)ephem);
    }
  }
  glf::freeEphemeralAllocation(ephem, (char *)ephem);
  return v7;
}

int glf::Fs::DoesFileExist(glf::Fs::Self *self, char *a2)
{
  return glf::Fs::DoesFileExist((int)(uintptr_t)self, a2, nullptr);
}

int glf::Fs::GetHomeDir(glf::Fs::Self *self)
{
  return glf::Fs::GetDir((int)(uintptr_t)self, (void *)(uintptr_t)4096);
}

int glf::Fs::GetMountedDrive(glf::Fs::Self *self, char *a2)
{
  uint32_t cnt = *((uint32_t *)self + 62);
  for ( uint32_t i = 0; i < cnt; ++i )
  {
    uint32_t entry = *((uint32_t *)self + i + 63);
    if ( g4_glf_str_compare_cstr(entry, a2) == 0 )
      return *(int *)(uintptr_t)(entry + 4);
  }
  return 0;
}

bool glf::Fs::RemoveFile(glf::Fs::Self *self, char *name)
{
  (void)self;
  return unlink(name) == 0;
}

int glf::Fs::SetCachesDir(glf::Fs::Self *self, char *a2)
{
  return glf::Fs::SetDir((int)(uintptr_t)self, (int16_t)28672, a2);
}

int glf::Fs::SetTempDir(glf::Fs::Self *self, char *a2)
{
  return glf::Fs::SetDir((int)(uintptr_t)self, (int16_t)0x2000, a2);
}

int glf::Fs::UnmountDrive(glf::Fs::Self *self, char *a2)
{
  uint32_t cnt = *((uint32_t *)self + 62);
  if ( cnt != 0 )
  {
    for ( uint32_t i = 0; i < cnt; ++i )
    {
      uint32_t entry = *((uint32_t *)self + i + 63);
      if ( g4_glf_str_compare_cstr(entry, a2) == 0 )
      {
        *((uint32_t *)self + 62) = cnt - 1;
        *((uint32_t *)self + i + 63) = *((uint32_t *)self + cnt + 62);
        return 1;
      }
    }
    return 1;
  }
  return 0;
}

void g4_std_compat::introsort_loop_cd63dd(unsigned int *a1, unsigned int *a2, int a3)
{
  struct HashElem { uint32_t key; uint32_t val; };
  HashElem *first = reinterpret_cast<HashElem *>(a1);
  HashElem *last = reinterpret_cast<HashElem *>(a2);
  if ( last - first <= 1 )
    return;
  (void)a3;
  std::sort(first, last, [](const HashElem &lhs, const HashElem &rhs) {
    return lhs.key < rhs.key;
  });
}



