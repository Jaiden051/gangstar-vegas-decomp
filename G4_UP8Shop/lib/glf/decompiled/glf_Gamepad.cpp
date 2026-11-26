#include "Core/Utils/DecompTypes.h"
#include "glf_Gamepad.h"

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::PreSendEvent  (binary VA: 0xcb3880)
// Original: glf::Gamepad::PreSendEvent
// ----------------------------------------------------------------------------
int glf::Gamepad::PreSendEvent(glf::InputDevice::Self *a1, int16_t *a2)
{
  int v2;
  uint16_t v3;
  uint16_t v4;
  int v5;
  int16_t v6;
  unsigned int v7;
  unsigned int v8;
  int v10;
  int v11;
  unsigned int v12;
  int16_t v13;
  float v14;
  float v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int16_t v26;
  int16_t v27;
  float v28;
  int v29;
  unsigned int v30;
  int16_t v31;
  int v32;

  v2 = 1;
  v3 = *a2;
  v4 = *a2;
  switch ( *a2 )
  {
    case 208:
    case 209:
      glf::InputDevice::UpdateButton(a1, *((uint32_t *)a2 + 4), v3 == 208);
      return 1;
    case 210:
    case 211:
    case 212:
      if ( v3 != 212 )
      {
        v12 = *((uint32_t *)a2 + 4);
        v26 = a2[11];
        v13 = a2[10];
        goto LABEL_13;
      }
      v12 = *((uint32_t *)a2 + 4);
      v30 = *((uint32_t *)a1 + 5);
      if ( v12 < v30 )
      {
        v23 = 10 * v12 + *((uint32_t *)a1 + 6);
        v26 = *(uint16_t *)(v23 + 8);
        goto LABEL_29;
      }
      if ( byte_20DCBF8 != 0 )
      {
        v32 = *((uint32_t *)a1 + 6);
        v20 = *((uint32_t *)a1 + 5);
        if ( v12 <= v30 )
          v20 = *((uint32_t *)a2 + 4);
        v21 = *((uint32_t *)a2 + 4);
        v26 = *(uint16_t *)(v32 + 10 * v20 + 8);
      }
      else
      {
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          242,
          "operator[]",
          "idx >= mNum");
        v30 = *((uint32_t *)a1 + 5);
        v21 = *((uint32_t *)a2 + 4);
        if ( v12 > v30 )
          v12 = *((uint32_t *)a1 + 5);
        byte_20DCBF8 = 1;
        v24 = *((uint32_t *)a1 + 6);
        v32 = v24;
        v26 = *(uint16_t *)(v24 + 10 * v12 + 8);
        if ( v21 < v30 )
        {
          v12 = v21;
          v25 = v24 + 10 * v21;
          v4 = *a2;
          v23 = v25;
          goto LABEL_29;
        }
        v12 = v21;
        v3 = *a2;
      }
      v22 = v30;
      if ( v30 > v21 )
        v22 = v21;
      v23 = v32 + 10 * v22;
      v4 = v3;
LABEL_29:
      v13 = *(uint16_t *)(v23 + 6);
      a2[10] = v13;
      a2[11] = v26;
LABEL_13:
      glf::InputDevice::UpdateCursor(a1, v12, v4 != 212, v13, v26);
      return 1;
    case 213:
      v14 = *((float *)a2 + 6);
      v15 = *((float *)a2 + 5);
      v16 = *((uint32_t *)a1 + 3);
      v17 = *((uint32_t *)a2 + 4);
      if ( v17 >= v16 && byte_20DEA34 == 0 )
      {
        v28 = *((float *)a2 + 6);
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          242,
          "operator[]",
          "idx >= mNum");
        v16 = *((uint32_t *)a1 + 3);
        byte_20DEA34 = 1;
        v14 = v28;
      }
      if ( v16 > v17 )
        v16 = v17;
      glf::AnalogicStick::UpdateFrame((glf::AnalogicStick::Self *)(*((uint32_t *)a1 + 4) + 8 * v16), v15, v14);
      return 1;
    case 214:
      v18 = *((uint32_t *)a2 + 7);
      v19 = *((uint32_t *)a2 + 6);
      *((uint32_t *)a1 + 12) = *((uint32_t *)a2 + 5);
      *((uint32_t *)a1 + 13) = v19;
      *((uint32_t *)a1 + 14) = v18;
      return 1;
    case 215:
      v10 = *((uint32_t *)a2 + 7);
      v11 = *((uint32_t *)a2 + 6);
      *((uint32_t *)a1 + 15) = *((uint32_t *)a2 + 5);
      *((uint32_t *)a1 + 16) = v11;
      *((uint32_t *)a1 + 17) = v10;
      return 1;
    case 216:
    case 217:
    case 218:
      v5 = *((uint32_t *)a2 + 5);
      v29 = v3;
      v6 = a2[15];
      v7 = *((uint32_t *)a1 + 7);
      v8 = *((uint32_t *)a2 + 4);
      v31 = a2[14];
      if ( v8 >= v7 && g4_fnstatic_1f6f970258 == 0 )
      {
        v27 = a2[15];
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          242,
          "operator[]",
          "idx >= mNum");
        g4_fnstatic_1f6f970258 = 1;
        v7 = *((uint32_t *)a1 + 7);
        v6 = v27;
      }
      if ( v7 > v8 )
        v7 = v8;
      return glf::TouchPad::Update((int *)(*((uint32_t *)a1 + 8) + 2644 * v7), v29, v5, v31, v6);
    default:
      return v2;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::RaiseAccelerometerEvent  (binary VA: 0xcb4040)
// Original: glf::Gamepad::RaiseAccelerometerEvent
// ----------------------------------------------------------------------------
int glf::Gamepad::RaiseAccelerometerEvent(glf::Gamepad::Self *self, float a2, float a3, float a4)
{
  int EventMgr;
  typedef uint16_t _g4_t_v6[2];
  typedef glf::Gamepad::Self *_g4_t_v7;
  typedef int64_t _g4_t_Milliseconds;
  typedef int _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_Milliseconds)) > _g4_s2 ? (8u + sizeof(_g4_t_Milliseconds)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v10)) > _g4_s4 ? (20u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v11)) > _g4_s5 ? (24u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v12)) > _g4_s6 ? (28u + sizeof(_g4_t_v12)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v6[0] = 214;
  v6[1] = 0;
  Milliseconds = glf::GetMilliseconds();
  v7 = self;
  v10 = a2;
  v11 = a3;
  v9 = 0;
  v12 = a4;
  EventMgr = glf::GetEventMgr();
  return glf::EventManager::PostEvent(EventMgr, v6);
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::RaiseGyroscopeEvent  (binary VA: 0xcb40c0)
// Original: glf::Gamepad::RaiseGyroscopeEvent
// ----------------------------------------------------------------------------
int glf::Gamepad::RaiseGyroscopeEvent(glf::Gamepad::Self *self, float a2, float a3, float a4)
{
  int EventMgr;
  typedef uint16_t _g4_t_v6[2];
  typedef glf::Gamepad::Self *_g4_t_v7;
  typedef int64_t _g4_t_Milliseconds;
  typedef int _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_Milliseconds)) > _g4_s2 ? (8u + sizeof(_g4_t_Milliseconds)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v10)) > _g4_s4 ? (20u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v11)) > _g4_s5 ? (24u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v12)) > _g4_s6 ? (28u + sizeof(_g4_t_v12)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v6[0] = 215;
  v6[1] = 0;
  Milliseconds = glf::GetMilliseconds();
  v7 = self;
  v10 = a2;
  v11 = a3;
  v9 = 0;
  v12 = a4;
  EventMgr = glf::GetEventMgr();
  return glf::EventManager::PostEvent(EventMgr, v6);
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::RaiseAnalogicStickEvent  (binary VA: 0xcb4140)
// Original: glf::Gamepad::RaiseAnalogicStickEvent
// ----------------------------------------------------------------------------
unsigned int glf::Gamepad::RaiseAnalogicStickEvent(glf::Gamepad::Self *self, unsigned int a2, float a3, float a4)
{
  unsigned int result;

  result = *((uint32_t *)self + 3);
  if ( (int)result > (int)a2 )
  {
    if ( result <= a2 && byte_20DEA34 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        242,
        "operator[]",
        "idx >= mNum");
      byte_20DEA34 = 1;
      result = *((uint32_t *)self + 3);
    }
    if ( result > a2 )
      result = a2;
    return glf::AnalogicStick::RaiseChangedEvent(
             (glf::AnalogicStick::Self *)(*((uint32_t *)self + 4) + 8 * result),
             self,
             a2,
             a3,
             a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::RaiseButtonEvent  (binary VA: 0xcb4210)
// Original: glf::Gamepad::RaiseButtonEvent
// ----------------------------------------------------------------------------
int glf::Gamepad::RaiseButtonEvent(glf::Gamepad::Self *self, int a2, bool a3)
{
  int result;
  int EventMgr;
  typedef uint16_t _g4_t_v5[2];
  typedef glf::Gamepad::Self *_g4_t_v6;
  typedef int64_t _g4_t_Milliseconds __attribute__((aligned(1)));
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_Milliseconds)) > _g4_s2 ? (20u + sizeof(_g4_t_Milliseconds)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  result = a3;
  if ( a2 >= 0 && a2 < *((uint32_t *)self + 1) )
  {
    v5[1] = 0;
    v5[0] = 209 - a3;
    Milliseconds = glf::GetMilliseconds();
    v6 = self;
    v8 = a2;
    EventMgr = glf::GetEventMgr();
    return glf::EventManager::PostEvent(EventMgr, v5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::RaiseCursorMoveEvent  (binary VA: 0xcb42a0)
// Original: glf::Gamepad::RaiseCursorMoveEvent
// ----------------------------------------------------------------------------
void glf::Gamepad::RaiseCursorMoveEvent(glf::Gamepad::Self *self, int a2, int16_t a3, int16_t a4)
{
  int EventMgr;
  typedef uint16_t _g4_t_v5[2];
  typedef glf::Gamepad::Self *_g4_t_v6;
  typedef int64_t _g4_t_Milliseconds;
  typedef int _g4_t_v8;
  typedef int16_t _g4_t_v9;
  typedef int16_t _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_Milliseconds)) > _g4_s2 ? (16u + sizeof(_g4_t_Milliseconds)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v9)) > _g4_s4 ? (28u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_v10)) > _g4_s5 ? (30u + sizeof(_g4_t_v10)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 30u);

  if ( a2 >= 0 && a2 < *((uint32_t *)self + 5) )
  {
    v5[0] = 211;
    v5[1] = 0;
    Milliseconds = glf::GetMilliseconds();
    v6 = self;
    v8 = a2;
    v9 = a3;
    v10 = a4;
    EventMgr = glf::GetEventMgr();
    glf::EventManager::PostEvent(EventMgr, v5);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::RaiseCursorVisibilityEvent  (binary VA: 0xcb4340)
// Original: glf::Gamepad::RaiseCursorVisibilityEvent
// ----------------------------------------------------------------------------
int glf::Gamepad::RaiseCursorVisibilityEvent(glf::Gamepad::Self *self, int a2, bool a3, int16_t a4, int16_t a5)
{
  int result;
  int EventMgr;
  typedef uint16_t _g4_t_v7;
  typedef int16_t _g4_t_v8;
  typedef glf::Gamepad::Self *_g4_t_v9;
  typedef int64_t _g4_t_Milliseconds;
  typedef int _g4_t_v11;
  typedef int16_t _g4_t_v12;
  typedef int16_t _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (10u + sizeof(_g4_t_v8)) > _g4_s1 ? (10u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_Milliseconds)) > _g4_s3 ? (16u + sizeof(_g4_t_Milliseconds)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v12)) > _g4_s5 ? (28u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (30u + sizeof(_g4_t_v13)) > _g4_s6 ? (30u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 10u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);

  result = a3;
  if ( a2 >= 0 && a2 < *((uint32_t *)self + 5) )
  {
    if ( a3 )
    {
      v7 = 210;
      v8 = 0;
      Milliseconds = glf::GetMilliseconds();
      v9 = self;
      v11 = a2;
      v12 = a4;
      v13 = a5;
    }
    else
    {
      v7 = 212;
      v8 = 0;
      Milliseconds = glf::GetMilliseconds();
      v9 = self;
      v11 = a2;
    }
    EventMgr = glf::GetEventMgr();
    return glf::EventManager::PostEvent(EventMgr, &v7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::RaiseTouchEvent  (binary VA: 0xcb4420)
// Original: glf::Gamepad::RaiseTouchEvent
// ----------------------------------------------------------------------------
unsigned int glf::Gamepad::RaiseTouchEvent(int a1, unsigned int a2, uint16_t a3, unsigned int a4, float a5, float a6, char a7)
{
  unsigned int result;

  result = *(uint32_t *)(a1 + 28);
  if ( (int)result > (int)a2 )
  {
    if ( result <= a2 && g4_fnstatic_1f6f970258 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        242,
        "operator[]",
        "idx >= mNum");
      g4_fnstatic_1f6f970258 = 1;
      result = *(uint32_t *)(a1 + 28);
    }
    if ( result > a2 )
      result = a2;
    return glf::TouchPad::RaiseTouchEvent(*(uint32_t *)(a1 + 32) + 2644 * result, a1, a2, a3, a4, a5, a6, a7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::GetRtti  (binary VA: 0xcb4580)
// Original: glf::Gamepad::GetRtti
// ----------------------------------------------------------------------------
void * glf::Gamepad::GetRtti()
{
  return &glf::Gamepad::sRtti;
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::Destroy  (binary VA: 0xcb45a0)
// Original: glf::Gamepad::~Gamepad
// ----------------------------------------------------------------------------
void glf::Gamepad::Destroy(glf::Gamepad::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E008);
  glf::InputDevice::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Gamepad::Destroy_eacb4740  (binary VA: 0xcb4740)
// Original: glf::Gamepad::~Gamepad
// ----------------------------------------------------------------------------
void glf::Gamepad::Destroy_eacb4740(glf::Gamepad::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E008);
  glf::InputDevice::Destroy(self);
  opDelete(self);
}


