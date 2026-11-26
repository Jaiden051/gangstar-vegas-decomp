#include "Core/Utils/DecompTypes.h"
#include "glitch_CLogger.h"

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::getLogLevel  (binary VA: 0xcd02a0)
// Original: glitch::CLogger::getLogLevel
// ----------------------------------------------------------------------------
int glitch::CLogger::getLogLevel(glitch::CLogger::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::setLogLevel  (binary VA: 0xcd02b0)
// Original: glitch::CLogger::setLogLevel
// ----------------------------------------------------------------------------
int glitch::CLogger::setLogLevel(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::log  (binary VA: 0xcd4580)
// Original: glitch::CLogger::log
// ----------------------------------------------------------------------------
int glitch::CLogger::log(uint32_t *a1, wchar_t *a2, int a3)
{
  int result;
  int v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  if ( a3 >= a1[2] )
  {
    glitch::core::stringw2stringc((glitch::core::Self *)&v5, a2);
    G4_VCALL<void>(a1, 20, v5, a3);
    result = v5;
    v4 = v5 - 12;
    if ( (void *)(v5 - 12) != &unk_20D3E6C
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      return gll_operator_delete_arr(v4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::log  (binary VA: 0xcd48e0)
// Original: glitch::CLogger::log
// ----------------------------------------------------------------------------
int glitch::CLogger::log(int a1, int a2, int a3, int a4)
{
  return glitch::ILogger::logf(a1, a4, "%s: %s", a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::log  (binary VA: 0xcd4930)
// Original: glitch::CLogger::log
// ----------------------------------------------------------------------------
int glitch::CLogger::log(int a1, const wchar_t *a2, wchar_t *a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  typedef wchar_t *_g4_t_v9;
  typedef int _g4_t_v10[3];
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v11[3] = (uint32_t)(uintptr_t)(&a1);
  v4 = a1;
  v5 = a4;
  result = (int)(uintptr_t)(a3);
  if ( a4 >= *(uint32_t *)(a1 + 8) )
  {
    v9 = a3;
    glitch::core::stringw2stringc((glitch::core::Self *)v10, a2);
    glitch::core::stringw2stringc((glitch::core::Self *)v11, v9);
    glitch::ILogger::logf(v4, v5, "%s: %s", v10[0], v11[0]);
    v7 = v11[0] - 12;
    if ( (void *)(v11[0] - 12) != &unk_20D3E6C
      && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr(v7);
    }
    result = v10[0];
    v8 = v10[0] - 12;
    if ( (void *)(v10[0] - 12) != &unk_20D3E6C
      && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      return gll_operator_delete_arr(v8);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::Construct  (binary VA: 0xcd6600)
// Original: glitch::CLogger::CLogger
// ----------------------------------------------------------------------------
glitch::CLogger::Self * glitch::CLogger::Construct(glitch::CLogger::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EAE8);
  *((uint32_t *)self + 2) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::log  (binary VA: 0xcd6690)
// Original: glitch::CLogger::log
// ----------------------------------------------------------------------------
void glitch::CLogger::log(int a1, glf::Console::Self *a2, int a3)
{
  glf::EventManager::Self *EventMgr;
  typedef char *_g4_t_v4;
  typedef uint16_t _g4_t_v5;
  typedef glf::Console::Self *_g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v7)) > _g4_s3 ? (28u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  if ( a3 >= *(uint32_t *)(a1 + 8) )
  {
    glitch::CLogEvent::Construct((glitch::CLogEvent::Self *)&v5);
    v6 = a2;
    v7 = a3;
    EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
    if ( (uint8_t)glf::EventManager::SendEvent(EventMgr, &v5) == 0 )
      glf::Console::Println(a2, v4);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::vlogf  (binary VA: 0xcd6f20)
// Original: glitch::CLogger::vlogf
// ----------------------------------------------------------------------------
void glitch::CLogger::vlogf(int a1, int a2, glf::Console::Self *a3, void *a4)
{
  if ( a2 >= *(uint32_t *)(a1 + 8) )
    sub_CD6CF0(a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::Destroy  (binary VA: 0xcef1f0)
// Original: glitch::CLogger::~CLogger
// ----------------------------------------------------------------------------
void glitch::CLogger::Destroy(glitch::CLogger::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::CLogger::Destroy_eacef2a0  (binary VA: 0xcef2a0)
// Original: glitch::CLogger::~CLogger
// ----------------------------------------------------------------------------
void glitch::CLogger::Destroy_eacef2a0(glitch::CLogger::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}


