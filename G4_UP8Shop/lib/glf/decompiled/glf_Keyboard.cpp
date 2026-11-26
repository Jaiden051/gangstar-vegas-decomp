#include "Core/Utils/DecompTypes.h"
#include "glf_Keyboard.h"

// ----------------------------------------------------------------------------
// Function: glf::Keyboard::PreSendEvent  (binary VA: 0xcb3690)
// Original: glf::Keyboard::PreSendEvent
// ----------------------------------------------------------------------------
int glf::Keyboard::PreSendEvent(glf::InputDevice::Self *a1, int a2)
{
  char IsDown; // di
  int v3;
  int v4;
  int v5;
  int v6;

  if ( (uint16_t)(*(uint16_t *)a2 - 204) <= 1u )
  {
    glf::InputDevice::UpdateButton(a1, *(uint32_t *)(a2 + 20), *(uint16_t *)a2 == 204);
    IsDown = glf::SimpleButton::IsDown((glf::InputDevice::Self *)((char *)a1 + 452));
    v3 = (uint8_t)(IsDown | glf::SimpleButton::IsDown((glf::InputDevice::Self *)((char *)a1 + 456)));
    v4 = ((uint8_t)glf::SimpleButton::IsDown((glf::InputDevice::Self *)((char *)a1 + 460)) != 0 ? 2 : 0) | v3;
    v5 = ((uint8_t)glf::SimpleButton::IsDown((glf::InputDevice::Self *)((char *)a1 + 464)) != 0 ? 2 : 0) | v4;
    v6 = ((uint8_t)glf::SimpleButton::IsDown((glf::InputDevice::Self *)((char *)a1 + 476)) != 0 ? 4 : 0) | v5;
    *(uint32_t *)(a2 + 24) = v6
                         | ((uint8_t)glf::SimpleButton::IsDown((glf::InputDevice::Self *)((char *)a1 + 480)) != 0
                          ? 4
                          : 0);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::Keyboard::RaiseButtonEvent  (binary VA: 0xcb3c10)
// Original: glf::Keyboard::RaiseButtonEvent
// ----------------------------------------------------------------------------
int glf::Keyboard::RaiseButtonEvent(glf::Keyboard::Self *self, int a2, bool a3, int a4)
{
  int EventMgr;
  typedef uint16_t _g4_t_v6[2];
  typedef glf::Keyboard::Self *_g4_t_v7;
  typedef int64_t _g4_t_Milliseconds;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
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

  v6[1] = 0;
  v6[0] = 205 - a3;
  v7 = nullptr;
  Milliseconds = glf::GetMilliseconds();
  v9 = *((uint32_t *)self + a2 + 123);
  v7 = self;
  v10 = a2;
  v11 = 0;
  v12 = a4;
  EventMgr = glf::GetEventMgr();
  return glf::EventManager::PostEvent(EventMgr, v6);
}

// ----------------------------------------------------------------------------
// Function: glf::Keyboard::RaiseButtonEvent  (binary VA: 0xcb3cb0)
// Original: glf::Keyboard::RaiseButtonEvent
// ----------------------------------------------------------------------------
int glf::Keyboard::RaiseButtonEvent(glf::Keyboard::Self *self, int a2, bool a3)
{
  int v3;
  int EventMgr;
  typedef uint16_t _g4_t_v6[2];
  typedef glf::Keyboard::Self *_g4_t_v7;
  typedef int64_t _g4_t_Milliseconds;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
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

  v6[1] = 0;
  v6[0] = 205 - a3;
  v7 = nullptr;
  Milliseconds = glf::GetMilliseconds();
  v3 = *((uint32_t *)self + a2 + 123);
  v7 = self;
  v10 = a2;
  v11 = 0;
  v12 = 0;
  v9 = v3;
  EventMgr = glf::GetEventMgr();
  return glf::EventManager::PostEvent(EventMgr, v6);
}

// ----------------------------------------------------------------------------
// Function: glf::Keyboard::GetRtti  (binary VA: 0xcb4540)
// Original: glf::Keyboard::GetRtti
// ----------------------------------------------------------------------------
void * glf::Keyboard::GetRtti()
{
  return &glf::Keyboard::sRtti;
}

// ----------------------------------------------------------------------------
// Function: glf::Keyboard::Destroy  (binary VA: 0xcb4600)
// Original: glf::Keyboard::~Keyboard
// ----------------------------------------------------------------------------
void glf::Keyboard::Destroy(glf::Keyboard::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DFC8);
  v1 = *((uint32_t *)self + 227);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  glf::InputDevice::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Keyboard::Destroy_eacb46c0  (binary VA: 0xcb46c0)
// Original: glf::Keyboard::~Keyboard
// ----------------------------------------------------------------------------
void glf::Keyboard::Destroy_eacb46c0(glf::Keyboard::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DFC8);
  v1 = *((uint32_t *)self + 227);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  glf::InputDevice::Destroy(self);
  opDelete(self);
}


