#include "Core/Utils/DecompTypes.h"
#include "glf_FileLogger.h"

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::Construct  (binary VA: 0xc874d0)
// Original: glf::FileLogger::FileLogger
// ----------------------------------------------------------------------------
bool glf::FileLogger::Construct(glf::FileLogger::Self *self)
{
  void *v1;
  int v3[4];

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  glf::Mutex::Construct((pthread_mutex_t **)self + 2, 0);
  *((uint8_t *)self + 12) = 0;
  *((uint8_t *)self + 13) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(self), "log.txt", 7u);
  g4_std::string::construct_copy(v3, self);
  g4_std::string::append((int)(uintptr_t)(v3), ".old", (size_t)&loc_4);
  g4_std::string::assign_str((char *)self + 4, v3);
  v1 = (void *)(v3[0] - 12);
  if ( (uint32_t *)(v3[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  return glf::MyMoveFile(*(glf::Self **)self, *((char **)self + 1));
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::Destroy  (binary VA: 0xc875c0)
// Original: glf::FileLogger::~FileLogger
// ----------------------------------------------------------------------------
void glf::FileLogger::Destroy(pthread_mutex_t **self)
{
  int v1;
  int *p_kind;

  glf::Mutex::Destroy(self + 2);
  v1 = (int)(uintptr_t)(*(self + 1));
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  p_kind = (int *)((char *)(*self) - 12);
  if ( p_kind != (int *)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)((char *)(*self) - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(p_kind);
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::Enable  (binary VA: 0xc87650)
// Original: glf::FileLogger::Enable
// ----------------------------------------------------------------------------
int glf::FileLogger::Enable(pthread_mutex_t **self, bool a2)
{
  glf::Mutex::Lock(self + 2);
  *((uint8_t *)self + 12) = a2;
  return glf::Mutex::Unlock(self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::IsEnabled  (binary VA: 0xc876b0)
// Original: glf::FileLogger::IsEnabled
// ----------------------------------------------------------------------------
int glf::FileLogger::IsEnabled(glf::FileLogger::Self *self)
{
  return *((uint8_t *)self + 12);
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::Write  (binary VA: 0xc876c0)
// Original: glf::FileLogger::Write
// ----------------------------------------------------------------------------
void glf::FileLogger::Write(pthread_mutex_t **self, char *s)
{
  FILE *v2;
  size_t v3;

  if ( *((uint8_t *)self + 12) != 0 )
  {
    glf::Mutex::Lock(self + 2);
    v2 = fopen((const char *)*self, "a");
    if ( v2 != nullptr )
    {
      v3 = strlen(s);
      fwrite(s, v3, 1u, v2);
      fclose(v2);
    }
    glf::Mutex::Unlock(self + 2);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::GetLog  (binary VA: 0xc87760)
// Original: glf::FileLogger::GetLog
// ----------------------------------------------------------------------------
int glf::FileLogger::GetLog(int a1, void **a2, char *filename)
{
  FILE *v3;
  FILE *stream;
  void *v5;
  int n;

  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 8));
  v3 = fopen(filename, "rb");
  stream = v3;
  if ( v3 != nullptr )
  {
    fseek(v3, 0, 2);
    n = ftell(stream);
    fseek(stream, 0, 0);
    sub_1939D80((int)(uintptr_t)(a2), n, 32);
    v5 = *a2;
    if ( *((int *)*a2 - 1) >= 0 )
    {
      sub_19397C0(a2);
      v5 = *a2;
    }
    fread(v5, 1u, n, stream);
    fclose(stream);
  }
  return glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::GetCurrentLog  (binary VA: 0xc87860)
// Original: glf::FileLogger::GetCurrentLog
// ----------------------------------------------------------------------------
int glf::FileLogger::GetCurrentLog(char **a1, void **a2)
{
  return glf::FileLogger::GetLog((int)(uintptr_t)(a1), a2, *a1);
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::GetLastLog  (binary VA: 0xc87890)
// Original: glf::FileLogger::GetLastLog
// ----------------------------------------------------------------------------
int glf::FileLogger::GetLastLog(int a1, void **a2)
{
  return glf::FileLogger::GetLog(a1, a2, *(char **)(a1 + 4));
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::GetInstance  (binary VA: 0xc878d0)
// Original: glf::FileLogger::GetInstance
// ----------------------------------------------------------------------------
int glf::FileLogger::GetInstance()
{
  int Globals;
  int v1;

  Globals = glf::GetGlobals();
  v1 = 0;
  if ( Globals != 0 )
    return glf::GetGlobals() + 556;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::Println  (binary VA: 0xc87900)
// Original: glf::FileLogger::Println
// ----------------------------------------------------------------------------
void glf::FileLogger::Println(glf::FileLogger::Self *self, const char *__varargs, ...)
{
  char *s;
  pthread_mutex_t **Instance;
  void *v4[257];

  if ( glf::FileLogger::GetInstance() != 0 )
  {
    glf::ConsoleScopeBuffer::ConsoleScopeBuffer((glf::ConsoleScopeBuffer::Self *)v4);
    s = (char *)glf::ConsoleScopeBuffer::VPrintln((glf::ConsoleScopeBuffer::Self **)v4, (char *)self, &__varargs);
    Instance = (pthread_mutex_t **)glf::FileLogger::GetInstance();
    glf::FileLogger::Write(Instance, s);
    glf::ConsoleScopeBuffer::Destroy(v4);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::Print  (binary VA: 0xc879a0)
// Original: glf::FileLogger::Print
// ----------------------------------------------------------------------------
void glf::FileLogger::Print(glf::FileLogger::Self *self, const char *__varargs, ...)
{
  char *s;
  pthread_mutex_t **Instance;
  void *v4[257];

  if ( glf::FileLogger::GetInstance() != 0 )
  {
    glf::ConsoleScopeBuffer::ConsoleScopeBuffer((glf::ConsoleScopeBuffer::Self *)v4);
    s = (char *)glf::ConsoleScopeBuffer::VPrint((glf::ConsoleScopeBuffer::Self **)v4, (char *)self, &__varargs);
    Instance = (pthread_mutex_t **)glf::FileLogger::GetInstance();
    glf::FileLogger::Write(Instance, s);
    glf::ConsoleScopeBuffer::Destroy(v4);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogger::PrintTimestamp  (binary VA: 0xc87e90)
// Original: glf::FileLogger::PrintTimestamp
// ----------------------------------------------------------------------------
void glf::FileLogger::PrintTimestamp()
{
  pthread_mutex_t **Instance;
  typedef int _g4_t_v1[9];
  typedef char _g4_t_s[268];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_s)) > _g4_s1 ? (48u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 48u);

  if ( glf::FileLogger::GetInstance() != 0 )
  {
    glf::GetCalendar(v1);
    sprintf(s, "[%02d/%02d/%02d@%02d:%02d:%02d] ", v1[0] % 10, v1[6], v1[7], v1[2], v1[3], v1[4]);
    Instance = (pthread_mutex_t **)glf::FileLogger::GetInstance();
    glf::FileLogger::Write(Instance, s);
  }
}


