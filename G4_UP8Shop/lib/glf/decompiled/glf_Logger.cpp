#include "Core/Utils/DecompTypes.h"
#include "glf_Logger.h"

// ----------------------------------------------------------------------------
// Function: glf::Logger::Destroy  (binary VA: 0xc90e10)
// Original: glf::Logger::~Logger
// ----------------------------------------------------------------------------
void glf::Logger::Destroy(glf::Logger::Self *self)
{
  volatile int32_t **v1;
  volatile int32_t **v2;
  int v3;
  volatile int32_t *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DC08);
  glf::TlsNode::Destroy((glf::Logger::Self *)((char *)self + 40));
  v1 = *((volatile int32_t ***)self + 8);
  v2 = *((volatile int32_t ***)self + 7);
  if ( v1 != v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 != nullptr )
          break;
LABEL_5:
        if ( v1 == ++v2 )
          goto LABEL_9;
      }
      if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) != 1 )
      {
        v3 = *((uint32_t *)v4 + 1);
        _mm_mfence();
        if ( v3 == 1 )
          G4_VCALL<void>(v4, 12);
        goto LABEL_5;
      }
      ++v2;
      G4_VCALL<void>(v4, 8);
      G4_VCALL<void>(v4, 16);
      if ( v1 == v2 )
      {
LABEL_9:
        v2 = *((volatile int32_t ***)self + 7);
        break;
      }
    }
  }
  if ( v2 != nullptr )
    opDelete(v2);
  if ( *((uint32_t *)self + 3) != 0 )
    opDelete(*((void **)self + 3));
  glf::Mutex::Destroy((pthread_mutex_t **)self + 1);
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::Destroy_eac90ee0  (binary VA: 0xc90ee0)
// Original: glf::Logger::~Logger
// ----------------------------------------------------------------------------
void glf::Logger::Destroy_eac90ee0(glf::Logger::Self *self)
{
  glf::Logger::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::GetLogStream  (binary VA: 0xc91b80)
// Original: glf::Logger::GetLogStream
// ----------------------------------------------------------------------------
uint32_t * glf::Logger::GetLogStream(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;
  int v4;

  result = a1;
  v4 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4 * a3);
  *a1 = v4;
  if ( v4 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::RemoveLogStream  (binary VA: 0xc91ba0)
// Original: glf::Logger::RemoveLogStream
// ----------------------------------------------------------------------------
int glf::Logger::RemoveLogStream(int a1, volatile int32_t **a2)
{
  int v2;
  unsigned int v3;
  int v4;
  volatile int32_t *v5;
  volatile int32_t **v6;
  volatile int32_t *v7;
  int v8;
  int v9;
  volatile int32_t **v10;
  volatile int32_t *v11;
  volatile int32_t **v13;
  volatile int32_t **v14;

  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 4));
  v2 = *(uint32_t *)(a1 + 28);
  if ( (unsigned int)(*(uint32_t *)(a1 + 32) - v2) >> 2 != 0 )
  {
    v3 = 0;
    do
    {
      v9 = 4 * v3;
      v10 = (volatile int32_t **)(4 * v3 + v2);
      v5 = *a2;
      if ( *a2 != nullptr )
        __sync_add_and_fetch(v5 + 1, 1u);
      v11 = *v10;
      *v10 = v5;
      if ( v11 != nullptr )
      {
        if ( __sync_fetch_and_add(v11 + 1, 0xFFFFFFFF) == 1 )
        {
          v13 = v10;
          G4_VCALL<void>(v11, 8);
          G4_VCALL<void>(v11, 16);
          v9 = 4 * v3;
          v5 = *v13;
        }
        else
        {
          v4 = *((uint32_t *)v11 + 1);
          _mm_mfence();
          if ( v4 == 1 )
          {
            v14 = v10;
            G4_VCALL<void>(v11, 12);
            v9 = 4 * v3;
            v5 = *v14;
          }
          else
          {
            v5 = *v10;
          }
        }
      }
      if ( v5 != nullptr )
      {
        v6 = (volatile int32_t **)(*(uint32_t *)(a1 + 28) + v9);
        v7 = *v6;
        *v6 = nullptr;
        if ( v7 != nullptr )
        {
          if ( __sync_fetch_and_add(v7 + 1, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v7, 8);
            G4_VCALL<void>(v7, 16);
          }
          else
          {
            v8 = *((uint32_t *)v7 + 1);
            _mm_mfence();
            if ( v8 == 1 )
              G4_VCALL<void>(v7, 12);
          }
        }
        *(uint32_t *)(a1 + 24) &= ~(1 << v3);
      }
      v2 = *(uint32_t *)(a1 + 28);
      ++v3;
    }
    while ( v3 < (*(uint32_t *)(a1 + 32) - v2) >> 2 );
  }
  return glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 4));
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::SetLevel  (binary VA: 0xc91d00)
// Original: glf::Logger::SetLevel
// ----------------------------------------------------------------------------
int glf::Logger::SetLevel(int a1, int a2, int a3)
{
  int result;

  result = *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * a2);
  *(uint32_t *)(result + 12) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::GetLevel  (binary VA: 0xc91d20)
// Original: glf::Logger::GetLevel
// ----------------------------------------------------------------------------
int glf::Logger::GetLevel(int a1, int a2)
{
  return *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * a2) + 12);
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::EnableStream  (binary VA: 0xc91d40)
// Original: glf::Logger::EnableStream
// ----------------------------------------------------------------------------
int glf::Logger::EnableStream(int a1, char a2)
{
  *(uint32_t *)(a1 + 24) |= 1 << a2;
  return 1 << a2;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::DisableStream  (binary VA: 0xc91d60)
// Original: glf::Logger::DisableStream
// ----------------------------------------------------------------------------
int glf::Logger::DisableStream(int a1, char a2)
{
  int result;

  result = __builtin_rotateleft32(-2, a2);
  *(uint32_t *)(a1 + 24) &= result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::IsStreamEnabled  (binary VA: 0xc91d80)
// Original: glf::Logger::IsStreamEnabled
// ----------------------------------------------------------------------------
int glf::Logger::IsStreamEnabled(int a1, char a2)
{
  return (*(int *)(a1 + 24) >> a2) & 1;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::SetLevel  (binary VA: 0xc91da0)
// Original: glf::Logger::SetLevel
// ----------------------------------------------------------------------------
int glf::Logger::SetLevel(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::GetLevel  (binary VA: 0xc91db0)
// Original: glf::Logger::GetLevel
// ----------------------------------------------------------------------------
int glf::Logger::GetLevel(glf::Logger::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::PushLogTag  (binary VA: 0xc91dc0)
// Original: glf::Logger::PushLogTag
// ----------------------------------------------------------------------------
int glf::Logger::PushLogTag(glf::Logger::Self *self, char *s)
{
  uint32_t *Value;
  size_t v3;
  void *v4;
  int result;
  void *v6;
  size_t v7;
  typedef uint32_t _g4_t_v8[3];
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  Value = (uint32_t *)(glf::TlsNode::GetValue((glf::Logger::Self *)((char *)self + 40), true));
  if ( *(uint32_t *)(*Value - 12) != 0 )
  {
    g4_std::string::construct_copy(v8, Value);
    g4_std::string::append((int)(uintptr_t)(v8), "/", 1u);
    g4_std::string::construct_copy(&v9, v8);
    v3 = strlen(s);
    g4_std::string::append((int)(uintptr_t)(&v9), s, v3);
    g4_std::string::assign_str(Value, &v9);
    v4 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    result = v8[0];
    v6 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v6); return 0; }
    }
  }
  else
  {
    v7 = strlen(s);
    return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(Value), s, v7));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::PopLogTag  (binary VA: 0xc91f20)
// Original: glf::Logger::PopLogTag
// ----------------------------------------------------------------------------
int glf::Logger::PopLogTag(glf::Logger::Self *self)
{
  uint32_t *Value;
  int v2;
  int result;
  void *v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  Value = (uint32_t *)(glf::TlsNode::GetValue((glf::Logger::Self *)((char *)self + 40), true));
  v2 = sub_1937F30((int)(uintptr_t)(Value), "/", -1, 1u);
  if ( v2 == -1 )
    return (int)(uintptr_t)(g4_std::string::clear(Value, 0, *(uint32_t *)(*Value - 12), 0));
  sub_193A6F0(&v5, Value, 0, v2);
  g4_std::string::assign_str(Value, &v5);
  result = v5;
  v4 = (void *)(v5 - 12);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v4); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::GetStackedTags  (binary VA: 0xc92010)
// Original: glf::Logger::GetStackedTags
// ----------------------------------------------------------------------------
void * glf::Logger::GetStackedTags(glf::Logger::Self *self)
{
  return glf::TlsNode::GetValue((glf::Logger::Self *)((char *)self + 40), true);
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::AddLogStream  (binary VA: 0xc92040)
// Original: glf::Logger::AddLogStream
// ----------------------------------------------------------------------------
int glf::Logger::AddLogStream(int a1, volatile int32_t **a2, int a3)
{
  volatile int32_t **v3;
  uint32_t *v4;
  int v5;
  int v6;
  volatile int32_t **v7;
  int v8;
  volatile int32_t *v9;
  bool v10;
  int v11;
  int v12;
  volatile int32_t *v14;
  volatile int32_t *v15;
  int v16;
  uint32_t *v17;

  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 4));
  *((uint32_t *)*a2 + 3) = a3;
  v3 = *(volatile int32_t ***)(a1 + 32);
  v4 = *(uint32_t **)(a1 + 28);
  v17 = v4;
  v5 = v3 - (volatile int32_t **)v4;
  if ( v5 == 0 )
  {
LABEL_6:
    if ( v3 == *(volatile int32_t ***)(a1 + 36) )
    {
      g4_std_compat::vector_fill_insert(a1 + 28, v3, a2);
      v11 = *(uint32_t *)(a1 + 32);
      v17 = *(uint32_t **)(a1 + 28);
    }
    else
    {
      v8 = 0;
      if ( v3 != nullptr )
      {
        v9 = *a2;
        v10 = *a2 == nullptr;
        *v3 = *a2;
        if ( !v10 )
          __sync_add_and_fetch(v9 + 1, 1u);
        v8 = *(uint32_t *)(a1 + 32);
        v17 = *(uint32_t **)(a1 + 28);
      }
      v11 = v8 + 4;
      *(uint32_t *)(a1 + 32) = v11;
    }
    v12 = ((v11 - (int)(uintptr_t)(v17)) >> 2) - 1;
    goto LABEL_13;
  }
  if ( *v4 != 0 )
  {
    v6 = 0;
    while ( ++v6 != v5 )
    {
      v7 = (volatile int32_t **)&v4[v6];
      if ( *v7 == nullptr )
        goto LABEL_15;
    }
    goto LABEL_6;
  }
  v7 = *(volatile int32_t ***)(a1 + 28);
  v6 = 0;
LABEL_15:
  v14 = *a2;
  if ( *a2 != nullptr )
  {
    __sync_add_and_fetch(v14 + 1, 1u);
    v15 = *v7;
    v12 = v6;
    v10 = *v7 == nullptr;
    *v7 = v14;
    if ( !v10 )
    {
      if ( __sync_fetch_and_add(v15 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v15, 8);
        G4_VCALL<void>(v15, 16);
      }
      else
      {
        v16 = *((uint32_t *)v15 + 1);
        _mm_mfence();
        if ( v16 == 1 )
          G4_VCALL<void>(v15, 12);
      }
    }
  }
  else
  {
    *v7 = nullptr;
    v12 = v6;
  }
LABEL_13:
  glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 4));
  return v12;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::Construct  (binary VA: 0xc92210)
// Original: glf::Logger::Logger
// ----------------------------------------------------------------------------
glf::Logger::Self * glf::Logger::Construct(pthread_mutex_t **self)
{
  char *v1;
  int v2;
  uint8_t *v3;
  void *v4;
  char v5;
  volatile int32_t *v6;
  char v7; // bp
  int v8;
  void *v9;
  uint32_t *v10;
  int v11;
  void *v12;
  uint32_t *v13;
  int v14;
  void *v15;
  char v16;
  volatile int32_t *v17;
  char v18; // bp
  int v19;
  void *v20;
  volatile int32_t *v21;
  int v22;
  uint32_t *v23;
  int v24;
  glf::Logger::Self *result;
  uint32_t *v26;
  typedef uint8_t _g4_t_v27[5];
  typedef unsigned int _g4_t_v28;
  typedef volatile int32_t *_g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef volatile int32_t *_g4_t_v32;
  typedef volatile int32_t *_g4_t_v33;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (3u + sizeof(_g4_t_v27)) > _g4_s0 ? (3u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 3u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);

  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_206DC08);
  glf::Mutex::Construct(self + 1, 1);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *(self + 5) = nullptr;
  *(self + 7) = nullptr;
  *(self + 8) = nullptr;
  *(self + 9) = nullptr;
  glf::TlsNode::Construct(
    (glf::TlsNode::Self *)(self + 10),
    (void (*)(void *))glf::Type_string_1c9653::Construct,
    (void (*)(void *))glf::Type_string_1c9653::Destruct,
    4u);
  v1 = (char *)*(self + 4);
  v2 = (int)(uintptr_t)(*(self + 3));
  *(self + 2) = nullptr;
  v3 = (uint8_t *)&v1[-v2];
  *(self + 6) = nullptr;
  v27[0] = 0;
  if ( (unsigned int)(uintptr_t)(&v1[-v2]) <= 0x3FFF )
  {
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(self + 3), v1, 0x4000 - (uint32_t)(uintptr_t)(v3), (int)(uintptr_t)(v27));
  }
  else if ( v3 != &reinterpret_cast<G4Elf32Sym *>(stru_3FF4)->st_info )
  {
    *(self + 4) = (pthread_mutex_t *)(v2 + 0x4000);
  }
  v4 = glf::MemObject::opNew(0x10u);
  *(uint32_t *)v4 = 0;
  *((uint32_t *)v4 + 1) = 0;
  *((uint32_t *)v4 + 2) = 0;
  *((uint32_t *)v4 + 3) = 0;
  glf::LogStream::LogStream((glf::LogStream::Self *)v4);
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_206DB48);
  v29 = (volatile int32_t *)v4;
  __sync_add_and_fetch((volatile int32_t *)v4 + 1, 1u);
  v5 = glf::Logger::AddLogStream((int)(uintptr_t)(self), &v29, 0);
  v6 = v29;
  v7 = v5;
  if ( v29 != nullptr )
  {
    if ( __sync_fetch_and_add(v29 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v6, 8);
      G4_VCALL<void>(v6, 16);
    }
    else
    {
      v8 = *((uint32_t *)v6 + 1);
      _mm_mfence();
      if ( v8 == 1 )
        G4_VCALL<void>(v6, 12);
    }
  }
  glf::Logger::EnableStream((int)(uintptr_t)(self), v7);
  v9 = glf::MemObject::opNew(0x10u);
  *(uint32_t *)v9 = 0;
  *((uint32_t *)v9 + 1) = 0;
  *((uint32_t *)v9 + 2) = 0;
  *((uint32_t *)v9 + 3) = 0;
  glf::LogStream::LogStream((glf::LogStream::Self *)v9);
  *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_206DB68);
  v30 = (unsigned int)(uintptr_t)(v9);
  __sync_add_and_fetch((volatile int32_t *)v9 + 1, 1u);
  glf::Logger::AddLogStream((int)(uintptr_t)(self), (volatile int32_t **)&v30, 4);
  v10 = (uint32_t *)v30;
  if ( v30 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v30 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v10, 8);
      G4_VCALL<void>(v10, 16);
    }
    else
    {
      v11 = v10[1];
      _mm_mfence();
      if ( v11 == 1 )
        G4_VCALL<void>(v10, 12);
    }
  }
  v12 = glf::MemObject::opNew(0x10u);
  *(uint32_t *)v12 = 0;
  *((uint32_t *)v12 + 1) = 0;
  *((uint32_t *)v12 + 2) = 0;
  *((uint32_t *)v12 + 3) = 0;
  glf::LogStream::LogStream((glf::LogStream::Self *)v12);
  *(uint32_t *)v12 = ((uint32_t)(uintptr_t)&off_206DB88);
  v31 = (unsigned int)(uintptr_t)(v12);
  __sync_add_and_fetch((volatile int32_t *)v12 + 1, 1u);
  glf::Logger::AddLogStream((int)(uintptr_t)(self), (volatile int32_t **)&v31, 4);
  v13 = (uint32_t *)v31;
  if ( v31 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v31 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v13, 8);
      G4_VCALL<void>(v13, 16);
    }
    else
    {
      v14 = v13[1];
      _mm_mfence();
      if ( v14 == 1 )
        G4_VCALL<void>(v13, 12);
    }
  }
  v15 = glf::MemObject::opNew(0x10u);
  *(uint32_t *)v15 = 0;
  *((uint32_t *)v15 + 1) = 0;
  *((uint32_t *)v15 + 2) = 0;
  *((uint32_t *)v15 + 3) = 0;
  glf::LogStream::LogStream((glf::LogStream::Self *)v15);
  *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_206DB28);
  v32 = (volatile int32_t *)v15;
  __sync_add_and_fetch((volatile int32_t *)v15 + 1, 1u);
  v16 = glf::Logger::AddLogStream((int)(uintptr_t)(self), &v32, 4);
  v17 = v32;
  v18 = v16;
  if ( v32 != nullptr )
  {
    if ( __sync_fetch_and_add(v32 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v17, 8);
      G4_VCALL<void>(v17, 16);
    }
    else
    {
      v19 = *((uint32_t *)v17 + 1);
      _mm_mfence();
      if ( v19 == 1 )
        G4_VCALL<void>(v17, 12);
    }
  }
  glf::Logger::EnableStream((int)(uintptr_t)(self), v18);
  v20 = glf::MemObject::opNew(0x10u);
  *(uint32_t *)v20 = 0;
  *((uint32_t *)v20 + 1) = 0;
  *((uint32_t *)v20 + 2) = 0;
  *((uint32_t *)v20 + 3) = 0;
  glf::LogStream::LogStream((glf::LogStream::Self *)v20);
  *(uint32_t *)v20 = ((uint32_t)(uintptr_t)&off_206DBA8);
  v33 = (volatile int32_t *)v20;
  __sync_add_and_fetch((volatile int32_t *)v20 + 1, 1u);
  glf::Logger::AddLogStream((int)(uintptr_t)(self), &v33, 4);
  v21 = v33;
  if ( v33 != nullptr )
  {
    if ( __sync_fetch_and_add(v33 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v21, 8);
      G4_VCALL<void>(v21, 16);
    }
    else
    {
      v22 = *((uint32_t *)v21 + 1);
      _mm_mfence();
      if ( v22 == 1 )
        G4_VCALL<void>(v21, 12);
    }
  }
  glf::Logger::GetLogStream((uint32_t *)(&v27[1]), (int)(uintptr_t)(self), 0);
  glf::LogStream::EnableInfo(*(unsigned int *)&v27[1] | 0x1000000000LL, 1);
  v23 = *(uint32_t **)&v27[1];
  if ( *(uint32_t *)&v27[1] != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v27[1] + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v23, 8);
      G4_VCALL<void>(v23, 16);
    }
    else
    {
      v24 = v23[1];
      _mm_mfence();
      if ( v24 == 1 )
        G4_VCALL<void>(v23, 12);
    }
  }
  glf::Logger::GetLogStream(&v28, (int)(uintptr_t)(self), 1);
  result = (glf::Logger::Self *)glf::LogStream::EnableInfo(v28 | 0x1000000000LL, 1);
  v26 = (uint32_t *)v28;
  if ( v28 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v28 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v26, 8);
      return G4_VCALL<glf::Logger::Self *>(v26, 16);
    }
    else
    {
      result = (glf::Logger::Self *)v26[1];
      _mm_mfence();
      if ( result == (glf::Logger::Self *)((char *)&dword_0 + 1) )
        return G4_VCALL<glf::Logger::Self *>(v26, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::Get  (binary VA: 0xc927b0)
// Original: glf::Logger::Get
// ----------------------------------------------------------------------------
void * glf::Logger::Get()
{
  if ( byte_20DF380 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DF380) != 0 )
  {
    glf::Logger::Construct((pthread_mutex_t **)&unk_20DF3A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DF380);
    __cxa_atexit((void (*)(void *))glf::Logger::Destroy, &unk_20DF3A0, &unk_20D1280);
  }
  return &unk_20DF3A0;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::VLog  (binary VA: 0xc92bc0)
// Original: glf::Logger::VLog
// ----------------------------------------------------------------------------
int glf::Logger::VLog(int a1, char *format, int __varargs, char *a4, __gnuc_va_list a5)
{
  int result;

  result = a1;
  if ( *(uint32_t *)(a1 + 24) != 0 && *(uint32_t *)(a1 + 8) <= ((int)(uintptr_t)g4_va_cast<void *>(__varargs)) )
    return sub_C928C0(a1, (int)(uintptr_t)(format), ((int)(uintptr_t)g4_va_cast<void *>(__varargs)), a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Logger::Log  (binary VA: 0xc92c20)
// Original: glf::Logger::Log
// ----------------------------------------------------------------------------
int glf::Logger::Log(int a1, char *format, int __varargs, char *a4, ...)
{
  va_list va;

  va_start(va, a4);
  return glf::Logger::VLog(a1, format, __varargs, a4, va);
}


