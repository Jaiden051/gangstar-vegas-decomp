#include "Core/Utils/DecompTypes.h"
#include "glf_TouchPad.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_TouchPad.cpp
// Library: glf | Module: glf_TouchPad
// Binary Address Span: 0xcb30f0 .. 0xcb33d0 (12 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xcb30f0 (size: 32 bytes)
// Symbol:    _ZN3glf8TouchPad5TouchC2Ev
// Demangled: glf::TouchPad::Touch::Touch(void)
// ============================================================================
// Alternative name is '_ZN3glf8TouchPad5TouchC1Ev'
struct glf::TouchPad::Touch::Self *glf::TouchPad::Touch::Touch(glf::TouchPad::Touch::Self *self)
{
  *(uint32_t *)self = -1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 3) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::TouchPad::Touch::GetFirstPoint  (binary VA: 0xcb3110)
// Original: glf::TouchPad::Touch::GetFirstPoint
// ----------------------------------------------------------------------------
glf::TouchPad::Touch::Self * glf::TouchPad::Touch::GetFirstPoint(glf::TouchPad::Touch::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 8);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::TouchPad::Touch::GetLastPoint  (binary VA: 0xcb3120)
// Original: glf::TouchPad::Touch::GetLastPoint
// ----------------------------------------------------------------------------
glf::TouchPad::Touch::Self * glf::TouchPad::Touch::GetLastPoint(glf::TouchPad::Touch::Self *self, uint32_t *a2)
{
  int v2;
  uint32_t *v3;

  v2 = a2[4];
  v3 = a2 + 2;
  if ( v2 != 0 )
    v3 = &a2[(a2[3] + v2 - 1) % 0x3Cu + 5];
  *(uint32_t *)self = *v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::TouchPad::Touch::GetPoint  (binary VA: 0xcb3170)
// Original: glf::TouchPad::Touch::GetPoint
// ----------------------------------------------------------------------------
glf::TouchPad::Touch::Self * glf::TouchPad::Touch::GetPoint(glf::TouchPad::Touch::Self *self, int a2, int a3)
{
  uint32_t *v3;

  if ( a3 != 0 )
    v3 = (uint32_t *)(a2 + 4 * ((a3 + *(uint32_t *)(a2 + 12) - 1) % 0x3Cu) + 20);
  else
    v3 = (uint32_t *)(a2 + 8);
  *(uint32_t *)self = *v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::TouchPad::Touch::GetPointCount  (binary VA: 0xcb31d0)
// Original: glf::TouchPad::Touch::GetPointCount
// ----------------------------------------------------------------------------
int glf::TouchPad::Touch::GetPointCount(glf::TouchPad::Touch::Self *self)
{
  return *((uint32_t *)self + 4) + 1;
}

// ----------------------------------------------------------------------------
// Function: glf::TouchPad::Touch::GetTouchId  (binary VA: 0xcb31e0)
// Original: glf::TouchPad::Touch::GetTouchId
// ----------------------------------------------------------------------------
int glf::TouchPad::Touch::GetTouchId(glf::TouchPad::Touch::Self *self)
{
  return *(uint32_t *)self;
}



// ============================================================================
// Address:   0xcb31f0 (size: 84 bytes)
// Symbol:    _ZN3glf8TouchPadC2Ev
// Demangled: glf::TouchPad::TouchPad(void)
// ============================================================================
// Alternative name is '_ZN3glf8TouchPadC1Ev'
struct glf::TouchPad::Self *glf::TouchPad::TouchPad(glf::TouchPad::Self *self)
{
  glf::TouchPad::Self *v1;
  struct glf::TouchPad::Self *result;
  glf::TouchPad::Touch::Self *v3;

  *((uint32_t *)self + 10) = 0;
  v1 = (glf::TouchPad::Self *)((char *)self + 44);
  do
  {
    v3 = (glf::TouchPad::Touch::Self *)(v1);
    v1 = (glf::TouchPad::Self *)((char *)v1 + 260);
    glf::TouchPad::Touch::Touch(v3);
  }
  while ( v1 != (glf::TouchPad::Self *)((char *)self + 2644) );
  result = nullptr;
  do
  {
    *((uint32_t *)self + (uint32_t)(uintptr_t)(result)) = (uint32_t)(uintptr_t)(result);
    result = (struct glf::TouchPad::Self *)((char *)result + 1);
  }
  while ( result != (struct glf::TouchPad::Self *)&byte_9[1] );
  return result;
}
// ----------------------------------------------------------------------------
// Function: glf::TouchPad::GetTouchCount  (binary VA: 0xcb3250)
// Original: glf::TouchPad::GetTouchCount
// ----------------------------------------------------------------------------
int glf::TouchPad::GetTouchCount(glf::TouchPad::Self *self)
{
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: glf::TouchPad::GetTouchByIndex  (binary VA: 0xcb3260)
// Original: glf::TouchPad::GetTouchByIndex
// ----------------------------------------------------------------------------
char * glf::TouchPad::GetTouchByIndex(glf::TouchPad::Self *self, int a2)
{
  return (char *)self + 260 * *((uint32_t *)self + a2) + 44;
}

// ----------------------------------------------------------------------------
// Function: glf::TouchPad::GetTouchByUniqueID  (binary VA: 0xcb3280)
// Original: glf::TouchPad::GetTouchByUniqueID
// ----------------------------------------------------------------------------
char * glf::TouchPad::GetTouchByUniqueID(glf::TouchPad::Self *self, unsigned int a2)
{
  glf::TouchPad::Self *v2;
  int v3;

  v2 = self;
  while ( 1 )
  {
    v3 = 260 * *(uint32_t *)v2;
    if ( *(uint64_t *)((char *)self + v3 + 44) == a2 )
      break;
    v2 = (glf::TouchPad::Self *)((char *)v2 + 4);
    if ( v2 == (glf::TouchPad::Self *)((char *)self + 40) )
      return nullptr;
  }
  return (char *)self + v3 + 44;
}

// ----------------------------------------------------------------------------
// Function: glf::TouchPad::RaiseTouchEvent  (binary VA: 0xcb32c0)
// Original: glf::TouchPad::RaiseTouchEvent
// ----------------------------------------------------------------------------
int glf::TouchPad::RaiseTouchEvent(int a1, int a2, int a3, uint16_t a4, unsigned int a5, float a6, float a7, char a8)
{
  int v8;
  int v9;
  int EventMgr;
  glf::App::Self *Instance;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint32_t _g4_t_v17[3];
  typedef float _g4_t_v18[2];
  typedef uint16_t _g4_t_v19[2];
  typedef int _g4_t_v20;
  typedef int64_t _g4_t_Milliseconds;
  typedef int _g4_t_v22;
  typedef uint64_t _g4_t_v23 __attribute__((aligned(1)));
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v18)) > _g4_s5 ? (40u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v19)) > _g4_s6 ? (48u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v20)) > _g4_s7 ? (52u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_Milliseconds)) > _g4_s8 ? (56u + sizeof(_g4_t_Milliseconds)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v22)) > _g4_s9 ? (64u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v23)) > _g4_s10 ? (68u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v24)) > _g4_s11 ? (76u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v25)) > _g4_s12 ? (88u + sizeof(_g4_t_v25)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_Milliseconds &Milliseconds = *reinterpret_cast<_g4_t_Milliseconds *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);

  v25 = &a1;
  v8 = a2;
  v9 = a3;
  v19[0] = a4;
  v14 = a6;
  v15 = a5;
  v13 = a7;
  v16 = a8;
  v19[1] = 0;
  Milliseconds = glf::GetMilliseconds();
  v20 = v8;
  v22 = v9;
  v23 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(v15), 0);
  if ( (v16 & 1) != 0 )
  {
    v18[0] = v14;
    v18[1] = v13;
    Instance = (glf::App::Self *)glf::App::GetInstance();
    glf::App::ConvertPosDeviceToScreen(v17, Instance, v18, (v16 & 2) == 0);
    v24 = v17[0];
  }
  else
  {
    LOWORD(v24) = (int)v14;
    HIWORD(v24) = (int)v13;
  }
  EventMgr = glf::GetEventMgr();
  return glf::EventManager::PostEvent(EventMgr, v19);
}

// ----------------------------------------------------------------------------
// Function: glf::TouchPad::Update  (binary VA: 0xcb33d0)
// Original: glf::TouchPad::Update
// ----------------------------------------------------------------------------
int glf::TouchPad::Update(int *a1, int a2, int a3, int16_t a4, int16_t a5)
{
  int result;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;

  if ( a2 == 216 )
  {
    v12 = a1[10];
    result = 0;
    if ( v12 <= 9 )
    {
      v13 = &a1[65 * a1[v12] + 8];
      v13[3] = a3;
      v13[4] = 0;
      *((uint16_t *)v13 + 10) = a4;
      *((uint16_t *)v13 + 11) = a5;
      v13[6] = 0;
      v13[7] = 0;
      ++a1[10];
      return 1;
    }
  }
  else
  {
    v14 = a1[10];
    result = 0;
    if ( v14 > 0 )
    {
      v6 = *a1;
      v7 = 0;
      v8 = (int)(uintptr_t)(&a1[65 * *a1 + 11]);
      if ( *(uint64_t *)v8 == a3 )
      {
LABEL_9:
        v9 = v8 + 4 * ((*(uint32_t *)(v8 + 16) + *(uint32_t *)(v8 + 12)) % 0x3Cu) + 12;
        *(uint16_t *)(v9 + 8) = a4;
        *(uint16_t *)(v9 + 10) = a5;
        v10 = *(uint32_t *)(v8 + 16);
        if ( v10 == 60 )
          *(uint32_t *)(v8 + 12) = (*(uint32_t *)(v8 + 12) + 1) % 0x3Cu;
        else
          *(uint32_t *)(v8 + 16) = v10 + 1;
        result = 1;
        if ( a2 == 218 )
        {
          v11 = a1[10] - 1;
          a1[v7] = a1[v11];
          a1[v11] = v6;
          a1[10] = v11;
        }
      }
      else
      {
        while ( ++v7 != v14 )
        {
          v6 = a1[v7];
          v8 = (int)(uintptr_t)(&a1[65 * v6 + 11]);
          if ( *(uint64_t *)v8 == a3 )
            goto LABEL_9;
        }
        return 0;
      }
    }
  }
  return result;
}


