#include "Core/Utils/DecompTypes.h"
#include "glf_Mouse.h"

// ----------------------------------------------------------------------------
// Function: glf::Mouse::ResetFrame  (binary VA: 0xcb2dc0)
// Original: glf::Mouse::ResetFrame
// ----------------------------------------------------------------------------
unsigned int glf::Mouse::ResetFrame(glf::Mouse::Self *self)
{
  unsigned int result;

  result = glf::InputDevice::ResetFrame(self);
  *((uint32_t *)self + 32) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Mouse::RaiseMoveEvent  (binary VA: 0xcb3d50)
// Original: glf::Mouse::RaiseMoveEvent
// ----------------------------------------------------------------------------
int glf::Mouse::RaiseMoveEvent(glf::Mouse::Self *self, float a2, float a3, char a4)
{
  char v4; // di
  glf::Mouse::Self *v5;
  int EventMgr;
  glf::App::Self *Instance;
  typedef float _g4_t_v9;
  typedef float _g4_t_v10;
  typedef uint32_t _g4_t_v11[3];
  typedef float _g4_t_v12[2];
  typedef uint16_t _g4_t_v13[2];
  typedef glf::Mouse::Self *_g4_t_v14;
  typedef int64_t _g4_t_Milliseconds;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef glf::Mouse::Self **_g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v14)) > _g4_s5 ? (36u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_Milliseconds)) > _g4_s6 ? (40u + sizeof(_g4_t_Milliseconds)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v16)) > _g4_s7 ? (48u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v17)) > _g4_s8 ? (52u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v18)) > _g4_s9 ? (56u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v19)) > _g4_s10 ? (72u + sizeof(_g4_t_v19)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);

  v19 = &self;
  v4 = a4;
  v10 = a2;
  v5 = self;
  v13[0] = 202;
  v9 = a3;
  v13[1] = 0;
  Milliseconds = glf::GetMilliseconds();
  v16 = -1;
  v18 = 0;
  v14 = v5;
  if ( (v4 & 1) != 0 )
  {
    v12[0] = v10;
    v12[1] = v9;
    Instance = (glf::App::Self *)glf::App::GetInstance();
    glf::App::ConvertPosDeviceToScreen(v11, Instance, v12, (v4 & 2) == 0);
    v17 = v11[0];
  }
  else
  {
    LOWORD(v17) = (int)v10;
    HIWORD(v17) = (int)v9;
  }
  EventMgr = glf::GetEventMgr();
  return glf::EventManager::PostEvent(EventMgr, v13);
}

// ----------------------------------------------------------------------------
// Function: glf::Mouse::RaiseWheelEvent  (binary VA: 0xcb3e50)
// Original: glf::Mouse::RaiseWheelEvent
// ----------------------------------------------------------------------------
int glf::Mouse::RaiseWheelEvent(glf::Mouse::Self *self, float a2)
{
  int EventMgr;
  typedef uint16_t _g4_t_v4[2];
  typedef glf::Mouse::Self *_g4_t_v5;
  typedef int64_t _g4_t_Milliseconds __attribute__((aligned(1)));
  typedef int _g4_t_v7;
  typedef float _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_Milliseconds)) > _g4_s2 ? (12u + sizeof(_g4_t_Milliseconds)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v7)) > _g4_s3 ? (20u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v8)) > _g4_s4 ? (28u + sizeof(_g4_t_v8)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v4[0] = 203;
  v4[1] = 0;
  Milliseconds = glf::GetMilliseconds();
  v5 = self;
  v7 = -1;
  v8 = a2;
  EventMgr = glf::GetEventMgr();
  return glf::EventManager::PostEvent(EventMgr, v4);
}

// ----------------------------------------------------------------------------
// Function: glf::Mouse::RaiseButtonEvent  (binary VA: 0xcb3ec0)
// Original: glf::Mouse::RaiseButtonEvent
// ----------------------------------------------------------------------------
int glf::Mouse::RaiseButtonEvent(glf::Mouse::Self *self, int a2, bool a3)
{
  int EventMgr;
  typedef uint16_t _g4_t_v5[2];
  typedef glf::Mouse::Self *_g4_t_v6;
  typedef int64_t _g4_t_Milliseconds __attribute__((aligned(1)));
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_Milliseconds)) > _g4_s2 ? (12u + sizeof(_g4_t_Milliseconds)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v9)) > _g4_s4 ? (28u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  v5[1] = 0;
  v5[0] = 201 - a3;
  Milliseconds = glf::GetMilliseconds();
  v6 = self;
  v9 = 0;
  v8 = a2;
  EventMgr = glf::GetEventMgr();
  return glf::EventManager::PostEvent(EventMgr, v5);
}

// ----------------------------------------------------------------------------
// Function: glf::Mouse::UpdateWheel  (binary VA: 0xcb3f40)
// Original: glf::Mouse::UpdateWheel
// ----------------------------------------------------------------------------
int glf::Mouse::UpdateWheel(glf::Mouse::Self *self, float a2)
{
  *((float *)self + 32) = *((float *)self + 32) + a2;
  return glf::InputDevice::SetUpdated(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Mouse::PreSendEvent  (binary VA: 0xcb3f80)
// Original: glf::Mouse::PreSendEvent
// ----------------------------------------------------------------------------
int glf::Mouse::PreSendEvent(glf::InputDevice::Self *a1, int16_t *a2)
{
  uint16_t v2;

  v2 = *a2;
  if ( *a2 == 202 )
  {
    glf::InputDevice::UpdateCursor(a1, 0, true, a2[10], a2[11]);
  }
  else if ( v2 <= 0xCAu )
  {
    if ( v2 >= 0xC8u )
    {
      glf::InputDevice::UpdateButton(a1, *((uint32_t *)a2 + 4), v2 == 200);
      *((uint32_t *)a2 + 5) = *(uint32_t *)((char *)a1 + 122);
    }
  }
  else if ( v2 == 203 )
  {
    glf::Mouse::UpdateWheel((glf::Mouse::Self *)(a1), *((float *)a2 + 6));
    *((uint32_t *)a2 + 5) = *(uint32_t *)((char *)a1 + 122);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::Mouse::GetRtti  (binary VA: 0xcb4560)
// Original: glf::Mouse::GetRtti
// ----------------------------------------------------------------------------
void * glf::Mouse::GetRtti()
{
  return &glf::Mouse::sRtti;
}

// ----------------------------------------------------------------------------
// Function: glf::Mouse::Destroy  (binary VA: 0xcb45d0)
// Original: glf::Mouse::~Mouse
// ----------------------------------------------------------------------------
void glf::Mouse::Destroy(glf::Mouse::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DFE8);
  glf::InputDevice::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Mouse::Destroy_eacb4670  (binary VA: 0xcb4670)
// Original: glf::Mouse::~Mouse
// ----------------------------------------------------------------------------
void glf::Mouse::Destroy_eacb4670(glf::Mouse::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DFE8);
  glf::InputDevice::Destroy(self);
  opDelete(self);
}


