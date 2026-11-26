#include "Core/Utils/DecompTypes.h"
#include "glf_AnalogicStick.h"

// ----------------------------------------------------------------------------
// Function: glf::AnalogicStick::GetGlobalDirection  (binary VA: 0xcb2fc0)
// Original: glf::AnalogicStick::GetGlobalDirection
// ----------------------------------------------------------------------------
int glf::AnalogicStick::GetGlobalDirection(glf::AnalogicStick::Self *self)
{
  float v1; // xmm1_4
  int result;
  float v3; // xmm1_4

  if ( *(float *)self <= 0.1f )
  {
    v3 = *((float *)self + 1);
    if ( *(float *)self < -0.1f )
    {
      result = 7;
      if ( v3 <= 0.1f )
        return (v3 >= -0.1f) + 5;
    }
    else
    {
      result = 0;
      if ( v3 <= 0.1f )
        return 5 * (v3 < -0.1f) - 1;
    }
  }
  else
  {
    v1 = *((float *)self + 1);
    result = 1;
    if ( v1 <= 0.1f )
      return (v1 < -0.1f) + 2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AnalogicStick::RaiseChangedEvent  (binary VA: 0xcb3050)
// Original: glf::AnalogicStick::RaiseChangedEvent
// ----------------------------------------------------------------------------
int glf::AnalogicStick::RaiseChangedEvent(glf::AnalogicStick::Self *self, glf::InputDevice::Self *a2, int a3, float a4, float a5)
{
  int EventMgr;
  typedef uint16_t _g4_t_v7[2];
  typedef glf::InputDevice::Self *_g4_t_v8;
  typedef int64_t _g4_t_Milliseconds;
  typedef int _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_Milliseconds)) > _g4_s2 ? (8u + sizeof(_g4_t_Milliseconds)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v11)) > _g4_s4 ? (20u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v12)) > _g4_s5 ? (24u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v13)) > _g4_s6 ? (28u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v7[0] = 213;
  v7[1] = 0;
  Milliseconds = glf::GetMilliseconds();
  v8 = a2;
  v10 = a3;
  v11 = a4;
  v13 = 0;
  v12 = a5;
  EventMgr = glf::GetEventMgr();
  return glf::EventManager::PostEvent(EventMgr, v7);
}

// ----------------------------------------------------------------------------
// Function: glf::AnalogicStick::UpdateFrame  (binary VA: 0xcb30d0)
// Original: glf::AnalogicStick::UpdateFrame
// ----------------------------------------------------------------------------
glf::AnalogicStick::Self * glf::AnalogicStick::UpdateFrame(glf::AnalogicStick::Self *self, float a2, float a3)
{
  *(float *)self = a2;
  *((float *)self + 1) = a3;
  return self;
}


