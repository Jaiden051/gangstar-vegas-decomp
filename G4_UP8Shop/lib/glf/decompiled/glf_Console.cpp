#include "Core/Utils/DecompTypes.h"
#include "glf_Console.h"

// ----------------------------------------------------------------------------
// Function: glf::Console::GetInstrName  (binary VA: 0xc87070)
// Original: glf::Console::GetInstrName
// ----------------------------------------------------------------------------
char * glf::Console::GetInstrName(int a1)
{
  return (char *)(uintptr_t)((&glf::gInstructions)[2 * a1]);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::GetColorName  (binary VA: 0xc87090)
// Original: glf::Console::GetColorName
// ----------------------------------------------------------------------------
char * glf::Console::GetColorName(int a1)
{
  return (char *)(uintptr_t)((&glf::gColors)[2 * a1]);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::GetStdStream  (binary VA: 0xc87310)
// Original: glf::Console::GetStdStream
// ----------------------------------------------------------------------------
int glf::Console::GetStdStream()
{
  return *(uint32_t *)(glf::GetGlobals() + 588);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::SetStdStream  (binary VA: 0xc87340)
// Original: glf::Console::SetStdStream
// ----------------------------------------------------------------------------
int glf::Console::SetStdStream(int a1)
{
  int result;

  result = glf::GetGlobals();
  *(uint32_t *)(result + 588) = a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Console::PushColor  (binary VA: 0xc87370)
// Original: glf::Console::PushColor
// ----------------------------------------------------------------------------
void glf::Console::PushColor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::Console::PopColor  (binary VA: 0xc87380)
// Original: glf::Console::PopColor
// ----------------------------------------------------------------------------
void glf::Console::PopColor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::Console::SetColor  (binary VA: 0xc87390)
// Original: glf::Console::SetColor
// ----------------------------------------------------------------------------
void glf::Console::SetColor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::Console::SetOutputDebugString  (binary VA: 0xc87420)
// Original: glf::Console::SetOutputDebugString
// ----------------------------------------------------------------------------
int glf::Console::SetOutputDebugString(glf::Console::Self *self)
{
  int result;

  result = gIsOutputDebugString[0];
  gIsOutputDebugString[0] = (uint8_t)(uintptr_t)self;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Console::FileLoggerSetManualTimestamp  (binary VA: 0xc87440)
// Original: glf::Console::FileLoggerSetManualTimestamp
// ----------------------------------------------------------------------------
uint8_t * glf::Console::FileLoggerSetManualTimestamp(glf::Console::Self *self)
{
  glf::sIsManualTimestamp[0] = (uint8_t)(uintptr_t)self;
  return (uint8_t *)(glf::sIsManualTimestamp);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::FileLoggerIsManualTimestamp  (binary VA: 0xc87460)
// Original: glf::Console::FileLoggerIsManualTimestamp
// ----------------------------------------------------------------------------
int glf::Console::FileLoggerIsManualTimestamp()
{
  return glf::sIsManualTimestamp[0];
}

// ----------------------------------------------------------------------------
// Function: glf::Console::VPrintRaw  (binary VA: 0xc87aa0)
// Original: glf::Console::VPrintRaw
// ----------------------------------------------------------------------------
void glf::Console::VPrintRaw(glf::Console::Self *self, __gnuc_va_list __varargs)
{
  glf::Self *v2;
  void *v3[258];

  glf::ConsoleScopeBuffer::ConsoleScopeBuffer((glf::ConsoleScopeBuffer::Self *)v3);
  v2 = (glf::Self *)(glf::ConsoleScopeBuffer::VPrintln((glf::ConsoleScopeBuffer::Self **)v3, (char *)self, __varargs));
  glf::MyPrint(v2);
  glf::ConsoleScopeBuffer::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::PrintRaw  (binary VA: 0xc87b10)
// Original: glf::Console::PrintRaw
// ----------------------------------------------------------------------------
void glf::Console::PrintRaw(glf::Console::Self *self, const char *__varargs, ...)
{
  glf::Self *v2;
  void *v3[257];

  if ( gIsOutputDebugString[0] != 0 )
  {
    glf::ConsoleScopeBuffer::ConsoleScopeBuffer((glf::ConsoleScopeBuffer::Self *)v3);
    v2 = (glf::Self *)(glf::ConsoleScopeBuffer::VPrintln((glf::ConsoleScopeBuffer::Self **)v3, (char *)self, &__varargs));
    glf::MyPrint(v2);
    glf::ConsoleScopeBuffer::Destroy(v3);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Console::PrintTimestamp  (binary VA: 0xc87ba0)
// Original: glf::Console::PrintTimestamp
// ----------------------------------------------------------------------------
int glf::Console::PrintTimestamp()
{
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

  glf::GetCalendar(v1);
  sprintf(s, "[%02d/%02d/%02d@%02d:%02d:%02d] ", v1[0] % 10, v1[6], v1[7], v1[2], v1[3], v1[4]);
  return glf::MyPrint((glf::Self *)s);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::EvalPrint  (binary VA: 0xc87c40)
// Original: glf::Console::EvalPrint
// ----------------------------------------------------------------------------
int glf::Console::EvalPrint(glf::Console::Self *self)
{
  char v1;
  unsigned int v2;
  unsigned int v3;
  char v5;
  char *v7;
  char *v8;
  char *v9;
  typedef char *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef char _g4_t_haystack[32];
  typedef uint8_t _g4_t_v13[284];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_haystack)) > _g4_s2 ? (16u + sizeof(_g4_t_haystack)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v13)) > _g4_s3 ? (48u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_haystack &haystack = *reinterpret_cast<_g4_t_haystack *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);

  v1 = 0;
  v2 = 0;
  v3 = 0;
LABEL_2:
  while ( 1 )
  {
    v5 = *(uint8_t *)self;
    self = (glf::Console::Self *)((char *)self + 1);
    if ( v5 == 0 )
      break;
    while ( 1 )
    {
      if ( v1 == 0 )
      {
        if ( v5 == 123 )
        {
          v1 = 1;
        }
        else if ( v3 > 0xFE )
        {
          v13[v3] = 0;
          v3 = 0;
          glf::MyPrint((glf::Self *)v13);
          v1 = 0;
        }
        else
        {
          v13[v3++] = v5;
        }
        goto LABEL_2;
      }
      if ( v5 == 125 )
        break;
      if ( v2 > 0x1F )
        goto LABEL_2;
      haystack[v2++] = v5;
      v5 = *(uint8_t *)self;
      self = (glf::Console::Self *)((char *)self + 1);
      if ( v5 == 0 )
        goto LABEL_7;
    }
    v7 = strstr(haystack, glf::gInstructions);
    if ( v7 == haystack )
    {
      v13[v3] = 0;
      v10 = v7;
      glf::MyPrint((glf::Self *)v13);
      if ( glf::GetColor((glf::Self *)&v10[(*(const int *)&unk_20C1CA4)], v2 - (*(const int *)&unk_20C1CA4)) == 16 )
        glf::GetConsoleColor();
      v2 = 0;
      glf::Console::PushColor();
      v3 = 0;
      v1 = 0;
    }
    else
    {
      v8 = strstr(haystack, off_20C1CA8);
      if ( v8 == haystack )
      {
        v13[v3] = 0;
        v11 = v8;
        glf::MyPrint((glf::Self *)v13);
        v3 = 0;
        glf::GetColor((glf::Self *)&v11[(*(const int *)&unk_20C1CAC)], v2 - (*(const int *)&unk_20C1CAC));
        v2 = 0;
        glf::Console::SetColor();
        v1 = 0;
      }
      else
      {
        v9 = strstr(haystack, (const char *)off_20C1CB0);
        v13[v3] = 0;
        if ( v9 == haystack )
        {
          glf::MyPrint((glf::Self *)v13);
          v2 = 0;
          v3 = 0;
          glf::Console::PopColor();
          v1 = 0;
        }
        else
        {
          glf::MyPrint((glf::Self *)v13);
          v2 = 0;
          v1 = 0;
          v3 = 0;
        }
      }
    }
  }
LABEL_7:
  v13[v3] = 0;
  return glf::MyPrint((glf::Self *)v13);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::EnableFileLogger  (binary VA: 0xc87e40)
// Original: glf::Console::EnableFileLogger
// ----------------------------------------------------------------------------
int glf::Console::EnableFileLogger(glf::Console::Self *self)
{
  pthread_mutex_t **Instance;

  glf::sEnableFileLogger = (uint8_t)(uintptr_t)self;
  Instance = (pthread_mutex_t **)glf::FileLogger::GetInstance();
  return glf::FileLogger::Enable(Instance, (bool)self);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::PrintTimestampToFileLogger  (binary VA: 0xc87f40)
// Original: glf::Console::PrintTimestampToFileLogger
// ----------------------------------------------------------------------------
void glf::Console::PrintTimestampToFileLogger()
{
  if ( glf::sEnableFileLogger != 0 && glf::sIsManualTimestamp[0] == 0 && glf::FileLogger::GetInstance() != 0 )
  {
    glf::FileLogger::GetInstance();
    glf::FileLogger::PrintTimestamp();
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Console::VPrintln  (binary VA: 0xc87f90)
// Original: glf::Console::VPrintln
// ----------------------------------------------------------------------------
void glf::Console::VPrintln(glf::Console::Self *self, __gnuc_va_list __varargs)
{
  glf::Console::Self *v2;
  void *v3[258];

  glf::Console::PrintTimestampToFileLogger();
  glf::ConsoleScopeBuffer::ConsoleScopeBuffer((glf::ConsoleScopeBuffer::Self *)v3);
  v2 = (glf::Console::Self *)(glf::ConsoleScopeBuffer::VPrintln((glf::ConsoleScopeBuffer::Self **)v3, (char *)self, __varargs));
  glf::Console::EvalPrint(v2);
  glf::ConsoleScopeBuffer::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::Println  (binary VA: 0xc88010)
// Original: glf::Console::Println
// ----------------------------------------------------------------------------
void glf::Console::Println(glf::Console::Self *self, const char *__varargs, ...)
{
  glf::Console::Self *v2;
  void *v3[257];

  if ( gIsOutputDebugString[0] != 0 )
  {
    glf::Console::PrintTimestampToFileLogger();
    glf::ConsoleScopeBuffer::ConsoleScopeBuffer((glf::ConsoleScopeBuffer::Self *)v3);
    v2 = (glf::Console::Self *)(glf::ConsoleScopeBuffer::VPrintln((glf::ConsoleScopeBuffer::Self **)v3, (char *)self, &__varargs));
    glf::Console::EvalPrint(v2);
    glf::ConsoleScopeBuffer::Destroy(v3);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Console::VPrint  (binary VA: 0xc880a0)
// Original: glf::Console::VPrint
// ----------------------------------------------------------------------------
void glf::Console::VPrint(glf::Console::Self *self, __gnuc_va_list __varargs)
{
  glf::Console::Self *v2;
  void *v3[258];

  glf::Console::PrintTimestampToFileLogger();
  glf::ConsoleScopeBuffer::ConsoleScopeBuffer((glf::ConsoleScopeBuffer::Self *)v3);
  v2 = (glf::Console::Self *)(glf::ConsoleScopeBuffer::VPrint((glf::ConsoleScopeBuffer::Self **)v3, (char *)self, __varargs));
  glf::Console::EvalPrint(v2);
  glf::ConsoleScopeBuffer::Destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: glf::Console::Print  (binary VA: 0xc88120)
// Original: glf::Console::Print
// ----------------------------------------------------------------------------
void glf::Console::Print(glf::Console::Self *self, const char *__varargs, ...)
{
  glf::Console::Self *v2;
  void *v3[257];

  if ( gIsOutputDebugString[0] != 0 )
  {
    glf::Console::PrintTimestampToFileLogger();
    glf::ConsoleScopeBuffer::ConsoleScopeBuffer((glf::ConsoleScopeBuffer::Self *)v3);
    v2 = (glf::Console::Self *)(glf::ConsoleScopeBuffer::VPrint((glf::ConsoleScopeBuffer::Self **)v3, (char *)self, &__varargs));
    glf::Console::EvalPrint(v2);
    glf::ConsoleScopeBuffer::Destroy(v3);
  }
}


