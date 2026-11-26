#include "Core/Utils/DecompTypes.h"
#include "glf_remote.h"

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::Construct  (binary VA: 0xcc14a0)
// Original: glf::remote::Controller::Controller
// ----------------------------------------------------------------------------
void glf::remote::Controller::Construct(glf::EventReceiver::Self *a1, int a2, int a3)
{
  void *v3;
  glf::EventManager::Self *EventMgr;
  typedef glf::Socket::Self *_g4_t_v5;
  typedef glf::remote::Canvas::Self *_g4_t_v6;
  typedef uint32_t _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v7)) > _g4_s2 ? (44u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);

  *((uint8_t *)a1 + 4) = 1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206E620);
  v6 = (glf::remote::Canvas::Self *)opNew(0x38u);
  glf::remote::Canvas::Construct(v6);
  *((uint32_t *)a1 + 3) = a2;
  *((uint8_t *)a1 + 20) = a2 == 0;
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(v6);
  *((uint32_t *)a1 + 4) = a3;
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  glf::Socket::Construct((glf::EventReceiver::Self *)((char *)a1 + 28));
  *((uint32_t *)a1 + 15) = 0;
  *((uint32_t *)a1 + 16) = 0x80000000;
  *((uint8_t *)a1 + 70) = 0;
  glf::Socket::Init(v5);
  glf::Socket::GetHostName((glf::Socket::Self *)v7);
  g4_std::string::assign_str((char *)a1 + 24, v7);
  v3 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
  glf::EventManager::AddEventReceiver(EventMgr, a1, (glf::EventReceiver::Self *)0x7FFFFFFF);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::DrawEvent  (binary VA: 0xcc15b0)
// Original: glf::remote::Controller::DrawEvent
// ----------------------------------------------------------------------------
uint16_t glf::remote::Controller::DrawEvent(int a1, uint16_t *a2)
{
  uint16_t *v2;
  int v3;
  uint16_t v4;
  uint16_t result;
  uint16_t v6;
  int v7;
  bool v8;
  uint16_t v9;
  int v10;
  float v11;
  int v12;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  typedef int _g4_t_v16;
  typedef bool _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int *_g4_t_v26;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v14)) > _g4_s1 ? (24u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v17)) > _g4_s4 ? (36u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v18)) > _g4_s5 ? (40u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v19)) > _g4_s6 ? (44u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v20)) > _g4_s7 ? (48u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v21)) > _g4_s8 ? (52u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v22)) > _g4_s9 ? (56u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v23)) > _g4_s10 ? (60u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v24)) > _g4_s11 ? (64u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v25)) > _g4_s12 ? (68u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v26)) > _g4_s13 ? (88u + sizeof(_g4_t_v26)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);

  v26 = &a1;
  v2 = a2;
  v3 = a1;
  v16 = 0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = 0;
  v21 = 0;
  v4 = a2[1];
  v22 = 0;
  v23 = 1;
  v24 = 1148846080;
  v17 = !(v4 & 1);
  result = *a2;
  v25 = 1065353216;
  if ( result > 0xCBu )
  {
    if ( result <= 0xCDu )
    {
      v7 = *((uint32_t *)a2 + 5);
      v13 = *(float *)(a1 + 8);
      v18 = (float)((float)(v7 % 18 + 1) * 0.1f) - 1.0;
      v19 = (float)((float)(v7 / 18) * 0.2f) - 0.6f;
      glf::remote::Canvas::ConvertLength2Size((glf::remote::Canvas::Self *)&v14, v13);
      v20 = LODWORD(v14);
      v8 = *v2 != 204;
      v21 = LODWORD(v15);
      v24 = 1140457472;
      v23 = 2 * v8 + 2;
      return glf::remote::Canvas::PostDrawShape(*(uint32_t *)(v3 + 8), &v16);
    }
    result -= 216;
    if ( result <= 2u )
    {
      glf::remote::Canvas::ConvertPosScreen2Canvas(&v14);
      v18 = v14;
      v19 = v15;
      glf::remote::Canvas::ConvertLength2Size((glf::remote::Canvas::Self *)&v14, *(float *)(v3 + 8));
      v20 = LODWORD(v14);
      v9 = *v2;
      v21 = LODWORD(v15);
      v24 = 1132068864;
      switch ( v9 )
      {
        case 0xD8u:
          goto LABEL_7;
        case 0xD9u:
          goto LABEL_25;
        case 0xDAu:
          goto LABEL_27;
        default:
          return glf::remote::Canvas::PostDrawShape(*(uint32_t *)(v3 + 8), &v16);
      }
    }
  }
  else
  {
    if ( result >= 0xC8u )
    {
      v16 = 1;
      glf::remote::Canvas::ConvertPosScreen2Canvas(&v14);
      v18 = v14;
      v19 = v15;
      glf::remote::Canvas::ConvertLength2Size((glf::remote::Canvas::Self *)&v14, *(float *)(v3 + 8));
      v20 = LODWORD(v14);
      v6 = *v2;
      v21 = LODWORD(v15);
      v24 = 1132068864;
      if ( v6 != 201 )
      {
        if ( v6 != 202 )
        {
          if ( v6 != 200 || (unsigned int)(*((uint32_t *)v2 + 4) - 3) <= 1 )
            return glf::remote::Canvas::PostDrawShape(*(uint32_t *)(v3 + 8), &v16);
LABEL_7:
          v23 = 2;
          return glf::remote::Canvas::PostDrawShape(*(uint32_t *)(v3 + 8), &v16);
        }
LABEL_25:
        v23 = 3;
        return glf::remote::Canvas::PostDrawShape(*(uint32_t *)(v3 + 8), &v16);
      }
      if ( (unsigned int)(*((uint32_t *)v2 + 4) - 3) <= 1 )
        return glf::remote::Canvas::PostDrawShape(*(uint32_t *)(v3 + 8), &v16);
LABEL_27:
      v23 = 4;
      return glf::remote::Canvas::PostDrawShape(*(uint32_t *)(v3 + 8), &v16);
    }
    if ( result == 100 )
    {
      v12 = *((uint32_t *)a2 + 1);
      v16 = 4;
      v20 = 1045220557;
      v21 = 1045220557;
      v19 = 0.7f;
      switch ( v12 )
      {
        case 2:
          v22 = 1;
          break;
        case 3:
          v22 = 3;
          break;
        case 1:
          v22 = 2;
          break;
        default:
          break;
      }
      v24 = 1148846080;
      v23 = 1;
      return glf::remote::Canvas::PostDrawShape(*(uint32_t *)(v3 + 8), &v16);
    }
    if ( result == 101 )
    {
      v10 = *((uint32_t *)a2 + 1);
      v11 = *(float *)(a1 + 8);
      v16 = 3;
      v19 = -0.8f;
      v18 = (float)((float)(v10 + 1) * 0.2f) - 1.0;
      glf::remote::Canvas::ConvertLength2Size((glf::remote::Canvas::Self *)&v14, v11);
      v20 = LODWORD(v14);
      v21 = LODWORD(v15);
      v24 = 1148846080;
      v23 = v10 % 5;
      return glf::remote::Canvas::PostDrawShape(*(uint32_t *)(v3 + 8), &v16);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::SendMessage  (binary VA: 0xcc1970)
// Original: glf::remote::Controller::SendMessage
// ----------------------------------------------------------------------------
int glf::remote::Controller::SendMessage(glf::remote::Controller::Self *self, const uint8_t *a2, size_t a3)
{
  return glf::Socket::Send((glf::remote::Controller::Self *)((char *)self + 28), a2, a3, 0);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::SendQuit  (binary VA: 0xcc19b0)
// Original: glf::remote::Controller::SendQuit
// ----------------------------------------------------------------------------
int glf::remote::Controller::SendQuit(glf::remote::Controller::Self *self)
{
  uint8_t v2[16];

  std::memcpy(v2, "RMQ", 3);
  v2[3] = 4;
  return glf::remote::Controller::SendMessage(self, v2, 4u);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::IsConnected  (binary VA: 0xcc1a00)
// Original: glf::remote::Controller::IsConnected
// ----------------------------------------------------------------------------
int glf::remote::Controller::IsConnected(glf::remote::Controller::Self *self)
{
  return glf::Socket::IsConnected((glf::remote::Controller::Self *)((char *)self + 28));
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::Destroy  (binary VA: 0xcc1a30)
// Original: glf::remote::Controller::~Controller
// ----------------------------------------------------------------------------
void glf::remote::Controller::Destroy(void ***self)
{
  glf::EventManager::Self *EventMgr;
  void **v2;
  void **v3;
  void **v4;
  int v5;
  glf::Socket::Self *v6;

  *self = (void **)((uint32_t)(uintptr_t)&off_206E620);
  EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
  glf::EventManager::RemoveEventReceiver(EventMgr, (glf::EventReceiver::Self *)self);
  if ( (uint8_t)glf::remote::Controller::IsConnected((glf::remote::Controller::Self *)self) != 0 )
    glf::remote::Controller::SendQuit((glf::remote::Controller::Self *)self);
  glf::Socket::Deinit(v6);
  v2 = *(self + 2);
  if ( v2 != nullptr )
  {
    if ( v2[11] != nullptr )
      opDelete(v2[11]);
    v3 = (void **)*v2;
    if ( *v2 != v2 )
    {
      while ( 1 )
      {
        v4 = (void **)*v3;
        opDelete(v3);
        if ( v4 == v2 )
          break;
        v3 = v4;
      }
    }
    opDelete(v2);
  }
  glf::Socket::Destroy((glf::Socket::Self *)(self + 7));
  v5 = (int)(uintptr_t)(*(self + 6));
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  *self = (void **)((uint32_t)(uintptr_t)&off_206D428);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::Destroy_eacc1b10  (binary VA: 0xcc1b10)
// Original: glf::remote::Controller::~Controller
// ----------------------------------------------------------------------------
void glf::remote::Controller::Destroy_eacc1b10(void ***self)
{
  glf::remote::Controller::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::ReceiveEvent  (binary VA: 0xcc1b50)
// Original: glf::remote::Controller::ReceiveEvent
// ----------------------------------------------------------------------------
uint16_t * glf::remote::Controller::ReceiveEvent(glf::remote::Controller::Self *self, glf::ByteArrayReader<std::allocator<char>> *a2)
{
  uint8_t *v2;
  int16_t v3; // di
  int16_t v4;
  uint16_t v5; // di
  glf::EventManager::Self *EventMgr;
  uint16_t *result;
  uint16_t *v8;
  glf::EventManager::Self *v9;
  uint8_t v10[128];

  v2 = *((uint8_t **)a2 + 2);
  v3 = *v2;
  *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(v2 + 1);
  v4 = v2[1];
  *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(v2);
  v5 = (v4 << 8) | v3;
  EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
  result = (uint16_t *)glf::EventManager::GetEventSerializer(EventMgr, v5);
  if ( result != nullptr )
  {
    result = (uint16_t *)G4_VCALL<int>(result, 12, v10, a2);
    v8 = result;
    if ( result != nullptr )
    {
      result[1] |= 1u;
      v9 = (glf::EventManager::Self *)glf::GetEventMgr();
      return (uint16_t *)glf::EventManager::SendEvent(v9, v8);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::ReceiveIdentification  (binary VA: 0xcc1c00)
// Original: glf::remote::Controller::ReceiveIdentification
// ----------------------------------------------------------------------------
const char * glf::remote::Controller::ReceiveIdentification(glf::remote::Controller::Self *self, glf::ByteArrayReader<std::allocator<char>> *a2)
{
  char v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  void *v8;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  void *v15;
  char *v16;
  const char *result;
  char *v18;
  typedef const char *_g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef uint8_t _g4_t_v22[3];
  typedef const char *_g4_t_v23;
  typedef const char *_g4_t_v24;
  typedef uint32_t _g4_t_v25[4];
  typedef uint32_t _g4_t_v26[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v20)) > _g4_s1 ? (28u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v21)) > _g4_s2 ? (28u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (45u + sizeof(_g4_t_v22)) > _g4_s3 ? (45u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v23)) > _g4_s4 ? (48u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v25)) > _g4_s6 ? (80u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v26)) > _g4_s7 ? (96u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 45u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);

  v23 = (const char *)&dword_213B814;
  v25[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  while ( 1 )
  {
    v7 = *((char **)a2 + 2);
    if ( (unsigned int)(uintptr_t)(v7) >= *((uint32_t *)a2 + 3) )
      break;
    v2 = *v7;
    *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(v7 + 1);
    if ( v2 == 0 )
      break;
    v3 = v25[0];
    v4 = *(uint32_t *)(v25[0] - 12);
    v5 = v4 + 1;
    if ( (unsigned int)(v4 + 1) > *(uint32_t *)(v25[0] - 8) || *(int *)(v25[0] - 4) > 0 )
    {
      v20 = v2;
      sub_1939B80(v25, v4 + 1);
      v3 = v25[0];
      v2 = v20;
      v4 = *(uint32_t *)(v25[0] - 12);
    }
    *(uint8_t *)(v3 + v4) = v2;
    v6 = v25[0];
    if ( (uint32_t *)(v25[0] - 12) != dword_213B808 )
    {
      *(uint32_t *)(v25[0] - 4) = 0;
      *(uint32_t *)(v6 - 12) = v5;
      *(uint8_t *)(v6 + v5) = 0;
    }
  }
  g4_std::string::assign_str(&v23, v25);
  v8 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v24 = (const char *)&dword_213B814;
  v26[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  while ( 1 )
  {
    v14 = *((char **)a2 + 2);
    if ( (unsigned int)(uintptr_t)(v14) >= *((uint32_t *)a2 + 3) )
      break;
    v9 = *v14;
    *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(v14 + 1);
    if ( v9 == 0 )
      break;
    v10 = v26[0];
    v11 = *(uint32_t *)(v26[0] - 12);
    v12 = v11 + 1;
    if ( (unsigned int)(v11 + 1) > *(uint32_t *)(v26[0] - 8) || *(int *)(v26[0] - 4) > 0 )
    {
      v21 = v9;
      sub_1939B80(v26, v11 + 1);
      v10 = v26[0];
      v9 = v21;
      v11 = *(uint32_t *)(v26[0] - 12);
    }
    *(uint8_t *)(v10 + v11) = v9;
    v13 = v26[0];
    if ( (uint32_t *)(v26[0] - 12) != dword_213B808 )
    {
      *(uint32_t *)(v26[0] - 4) = 0;
      *(uint32_t *)(v13 - 12) = v12;
      *(uint8_t *)(v13 + v12) = 0;
    }
  }
  g4_std::string::assign_str(&v24, v26);
  v15 = (void *)(v26[0] - 12);
  if ( (uint32_t *)(v26[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v19 = (const char *)(v22);
    g4_std::string::Rep::M_destroy(v15);
  }
  glf::Console::Print((glf::Console::Self *)"Receive identification from:\n", v19);
  glf::Console::Print((glf::Console::Self *)" - Hostname: %s\n", v23);
  glf::Console::Print((glf::Console::Self *)" - Platform: %s\n", v24);
  v16 = (char *)(v24 - 12);
  if ( v24 - 12 != (const char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v24 - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  result = v23;
  v18 = (char *)(v23 - 12);
  if ( v23 - 12 != (const char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v23 - 1, 0xFFFFFFFF) <= 0 )
  {
    return (g4_std::string::Rep::M_destroy(v18), (const char *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::ReceiveMessages  (binary VA: 0xcc1e90)
// Original: glf::remote::Controller::ReceiveMessages
// ----------------------------------------------------------------------------
int glf::remote::Controller::ReceiveMessages(glf::remote::Controller::Self *self)
{
  glf::Socket::Self *v1;
  int result;
  uint8_t *v3;
  bool v4;
  uint8_t *v5;
  int v6;
  typedef const char *_g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  typedef uint8_t *_g4_t_v9;
  typedef uint8_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  typedef uint8_t _g4_t_v18[4108];
  enum : size_t {
    _g4_s0 = 4224u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v11)) > _g4_s4 ? (20u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v13)) > _g4_s6 ? (20u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (25u + sizeof(_g4_t_v14)) > _g4_s7 ? (25u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (26u + sizeof(_g4_t_v15)) > _g4_s8 ? (26u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (27u + sizeof(_g4_t_v16)) > _g4_s9 ? (27u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v17)) > _g4_s10 ? (32u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v18)) > _g4_s11 ? (48u + sizeof(_g4_t_v18)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 25u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 26u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 27u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  v1 = (glf::Socket::Self *)((glf::remote::Controller::Self *)((char *)self + 28));
LABEL_2:
  while ( 1 )
  {
    result = glf::Socket::Receive(v1, v18, 0x1000u, 0);
    if ( result <= 0 )
      return result;
    v3 = v18;
    while ( (unsigned int)result > 3 )
    {
      v17[1] = (uint32_t)(uintptr_t)(v3);
      v4 = *v3 == 82;
      v17[0] = ((uint32_t)(uintptr_t)&off_206E638);
      v17[3] = (uint32_t)(uintptr_t)(&v3[result]);
      v15 = v3[1];
      v16 = v3[2];
      v14 = v3[3];
      v17[2] = (uint32_t)(uintptr_t)(v3 + 4);
      if ( !v4 || v15 != 77 )
      {
        glf::Console::Print((glf::Console::Self *)"Not a remote message\n", v7);
LABEL_7:
        v17[0] = ((uint32_t)(uintptr_t)&off_206D878);
        goto LABEL_2;
      }
      if ( result < (unsigned int)v14 )
      {
        glf::Console::Print((glf::Console::Self *)"Bad message size\n", v7);
        goto LABEL_7;
      }
      if ( v16 == 73 )
      {
        v12 = result;
        v9 = v3;
        glf::remote::Controller::ReceiveIdentification(self, (glf::ByteArrayReader<std::allocator<char>> *)v17);
        v6 = v12;
        v5 = v9;
      }
      else if ( v16 == 81 )
      {
        v13 = result;
        v10 = v3;
        glf::Socket::Close(v1);
        v6 = v13;
        v5 = v10;
      }
      else
      {
        v11 = result;
        v8 = v3;
        if ( v16 == 69 )
        {
          glf::remote::Controller::ReceiveEvent(self, (glf::ByteArrayReader<std::allocator<char>> *)v17);
          v6 = v11;
          v5 = v8;
        }
        else
        {
          glf::Console::Print((glf::Console::Self *)"Unknown message type\n", v7);
          v5 = v8;
          v6 = v11;
        }
      }
      result = v6 - v14;
      v3 = &v5[v14];
      v17[0] = ((uint32_t)(uintptr_t)&off_206D878);
      if ( result <= 0 )
        goto LABEL_2;
    }
    glf::Console::Print((glf::Console::Self *)"Too small message size\n", v7);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::Draw  (binary VA: 0xcc2060)
// Original: glf::remote::Controller::Draw
// ----------------------------------------------------------------------------
int glf::remote::Controller::Draw(int a1, glf::Self *a2)
{
  int result;

  glf::remote::Canvas::Update(*(glf::remote::Canvas::Self **)(a1 + 8), a2);
  *(uint8_t *)(a1 + 70) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::SendEvent  (binary VA: 0xcc20a0)
// Original: glf::remote::Controller::SendEvent
// ----------------------------------------------------------------------------
void glf::remote::Controller::SendEvent(glf::remote::Controller::Self *a1, uint16_t *a2)
{
  int v2;
  glf::EventManager::Self *EventMgr;
  int EventSerializer;
  uint8_t *v5;
  size_t v6;
  int v7;
  size_t v8;
  uint8_t *v9;
  size_t v10;
  const uint8_t *v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef uint8_t _g4_t_v14[5];
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef size_t _g4_t_v19;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v13)) > _g4_s1 ? (11u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v14)) > _g4_s2 ? (31u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v19)) > _g4_s7 ? (52u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 11u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 31u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);

  v2 = *a2;
  EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
  EventSerializer = glf::EventManager::GetEventSerializer(EventMgr, v2);
  if ( EventSerializer != 0 )
  {
    v12 = EventSerializer;
    v15 = 0;
    v16 = nullptr;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v14[0] = 0;
    *(uint32_t *)&v14[1] = ((uint32_t)(uintptr_t)&off_206D898);
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v15), nullptr, 4u, v14);
    v5 = (uint8_t *)(v18 + v15);
    *v5 = 82;
    v5[1] = 77;
    v5[2] = 69;
    v5[3] = 4;
    v6 = v18 + 4;
    v18 += 4;
    if ( v18 < v19 )
      v6 = v19;
    v19 = v6;
    if ( G4_VCALL<uint8_t>(v12, 8, &v14[1], a2) != 0 )
    {
      v13 = v19;
      v7 = v15;
      v8 = 0;
      v18 = 0;
      if ( (unsigned int)(uintptr_t)(&v16[-v15]) <= 3 )
      {
        v14[0] = 0;
        g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v15), v16, 4 - (uint32_t)(uintptr_t)(&v16[-v15]), v14);
        v7 = v15;
        v8 = v18;
      }
      v9 = (uint8_t *)(v7 + v8);
      *v9 = 82;
      v9[3] = v13;
      v9[1] = 77;
      v9[2] = 69;
      v10 = v18 + 4;
      v18 += 4;
      if ( v18 < v19 )
        v10 = v19;
      v11 = nullptr;
      if ( v10 != 0 )
        v11 = (const uint8_t *)v15;
      v19 = v10;
      glf::remote::Controller::SendMessage(a1, v11, v10);
    }
    *(uint32_t *)&v14[1] = ((uint32_t)(uintptr_t)&off_206D898);
    if ( v15 != 0 )
      opDelete((void *)v15);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::OnEvent  (binary VA: 0xcc2260)
// Original: glf::remote::Controller::OnEvent
// ----------------------------------------------------------------------------
int glf::remote::Controller::OnEvent(glf::remote::Controller::Self *a1, int a2)
{
  if ( *((uint8_t *)a1 + 20) != 0 )
  {
    if ( (*(uint8_t *)(a2 + 2) & 1) != 0 )
      goto LABEL_3;
    if ( (uint8_t)glf::remote::Controller::IsConnected(a1) != 0 )
      glf::remote::Controller::SendEvent(a1, (uint16_t *)a2);
    if ( *((uint8_t *)a1 + 20) != 0 )
      goto LABEL_3;
  }
  if ( (*(uint8_t *)(a2 + 2) & 1) != 0 )
LABEL_3:
    glf::remote::Controller::DrawEvent((int)(uintptr_t)(a1), (uint16_t *)a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::SendIdentification  (binary VA: 0xcc22f0)
// Original: glf::remote::Controller::SendIdentification
// ----------------------------------------------------------------------------
void glf::remote::Controller::SendIdentification(glf::remote::Controller::Self *self)
{
  uint8_t *v1;
  unsigned int v2;
  unsigned int v3;
  bool v4;
  size_t v5;
  size_t v6;
  const char *v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  uint8_t *v22;
  size_t v23;
  const uint8_t *v24;
  unsigned int v25;
  typedef const char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef const char *_g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef char _g4_t_v31;
  typedef uint8_t _g4_t_v32[5];
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v27)) > _g4_s1 ? (24u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v28)) > _g4_s2 ? (28u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v29)) > _g4_s3 ? (32u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v30)) > _g4_s4 ? (32u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v31)) > _g4_s5 ? (44u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (63u + sizeof(_g4_t_v32)) > _g4_s6 ? (63u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v33)) > _g4_s7 ? (68u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v34)) > _g4_s8 ? (72u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v35)) > _g4_s9 ? (76u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v36)) > _g4_s10 ? (80u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v37)) > _g4_s11 ? (84u + sizeof(_g4_t_v37)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 63u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);

  v33 = 0;
  v34 = nullptr;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  *(uint32_t *)&v32[1] = ((uint32_t)(uintptr_t)&off_206D898);
  v32[0] = 0;
  g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v33), nullptr, 4u, v32);
  v1 = (uint8_t *)(v36 + v33);
  *v1 = 82;
  v1[1] = 77;
  v1[2] = 73;
  v1[3] = 4;
  v2 = v37;
  v3 = v36 + 4;
  v4 = v36 + 4 < v37;
  v26 = *((const char **)self + 6);
  v28 = v26;
  v36 += 4;
  if ( !v4 )
    v2 = v3;
  v37 = v2;
  v5 = strlen(v26);
  v6 = v5;
  v7 = v28;
  if ( v5 != 0 )
  {
    v27 = v33;
    if ( v5 + v3 > (unsigned int)(uintptr_t)(&v34[-v33]) )
    {
      v29 = v5;
      v32[0] = 0;
      g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v33), v34, v5 + v3 - (uint32_t)(uintptr_t)(&v34[-v33]), v32);
      v7 = v28;
      v27 = v33;
      v6 = v29;
      v3 = v36;
    }
    v30 = v6;
    memcpy((void *)(v27 + v3), v7, v6);
    v3 = v30 + v36;
    v25 = v37;
    v36 += v30;
    if ( v36 >= v37 )
      v25 = v3;
    v37 = v25;
  }
  v8 = v33;
  if ( v3 + 1 > (unsigned int)(uintptr_t)(&v34[-v33]) )
  {
    v32[0] = 0;
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v33), v34, v3 + 1 - (uint32_t)(uintptr_t)(&v34[-v33]), v32);
    v8 = v33;
    v3 = v36;
  }
  *(uint8_t *)(v8 + v3) = 0;
  v9 = v36;
  v10 = v37;
  v11 = v36 + 1;
  v36 = v11;
  if ( v11 >= v37 )
    v10 = v11;
  v37 = v10;
  v12 = v33;
  if ( v9 + 8 > (unsigned int)(uintptr_t)(&v34[-v33]) )
  {
    v32[0] = 0;
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v33), v34, v9 + 8 - (uint32_t)(uintptr_t)(&v34[-v33]), v32);
    v12 = v33;
    v11 = v36;
  }
  v13 = v12 + v11;
  *(uint32_t *)v13 = 1919184449;
  *(uint16_t *)(v13 + 4) = 26991;
  *(uint8_t *)(v13 + 6) = 100;
  v14 = v36;
  v15 = v37;
  v16 = v36 + 7;
  v36 = v16;
  if ( v16 >= v37 )
    v15 = v16;
  v37 = v15;
  v17 = v33;
  if ( v14 + 8 > (unsigned int)(uintptr_t)(&v34[-v33]) )
  {
    v32[0] = 0;
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v33), v34, v14 + 8 - (uint32_t)(uintptr_t)(&v34[-v33]), v32);
    v17 = v33;
    v16 = v36;
  }
  *(uint8_t *)(v17 + v16) = 0;
  v18 = v37;
  v19 = v36 + 1;
  v4 = v36 + 1 < v37;
  v36 = 0;
  if ( !v4 )
    v18 = v19;
  v20 = 0;
  v37 = v18;
  v31 = v18;
  v21 = v33;
  if ( (unsigned int)(uintptr_t)(&v34[-v33]) <= 3 )
  {
    v32[0] = 0;
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v33), v34, 4 - (uint32_t)(uintptr_t)(&v34[-v33]), v32);
    v21 = v33;
    v20 = v36;
  }
  v22 = (uint8_t *)(v21 + v20);
  *v22 = 82;
  v22[1] = 77;
  v22[2] = 73;
  v22[3] = v31;
  v23 = v36 + 4;
  v36 += 4;
  if ( v36 < v37 )
    v23 = v37;
  v24 = nullptr;
  if ( v23 != 0 )
    v24 = (const uint8_t *)v33;
  v37 = v23;
  glf::remote::Controller::SendMessage(self, v24, v23);
  *(uint32_t *)&v32[1] = ((uint32_t)(uintptr_t)&off_206D898);
  if ( v33 != 0 )
    opDelete((void *)v33);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::Connect  (binary VA: 0xcc2660)
// Original: glf::remote::Controller::Connect
// ----------------------------------------------------------------------------
int glf::remote::Controller::Connect(glf::remote::Controller::Self *self)
{
  glf::Socket::Self *v1;
  int64_t Milliseconds; // rax
  bool v4;
  char *v5;
  char *v6;
  typedef char *_g4_t_v7;
  typedef char *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef char _g4_t_v10[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v9)) > _g4_s2 ? (4u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  v1 = (glf::Socket::Self *)((glf::remote::Controller::Self *)((char *)self + 28));
  if ( (int)glf::Socket::GetLastError((glf::remote::Controller::Self *)((char *)self + 28)) > 0 )
  {
    if ( *((uint8_t *)self + 20) != 0 )
      glf::Console::Print((glf::Console::Self *)"Disconnected from remote receiver\n", v7);
    else
      glf::Console::Print((glf::Console::Self *)"Disconnected from remote controller\n", v7);
    glf::Socket::Close(v1);
    glf::Socket::ClearError(v1);
  }
  Milliseconds = glf::GetMilliseconds();
  if ( Milliseconds < *(uint64_t *)((char *)self + 60) )
    return 0;
  *((uint32_t *)self + 15) = Milliseconds + 250;
  v4 = *((uint8_t *)self + 20) == 0;
  *((uint32_t *)self + 16) = (uint64_t)(Milliseconds + 250) >> 32;
  if ( v4 )
  {
    if ( (uint8_t)glf::Socket::IsOpened(v1) == 0 )
    {
      if ( (uint8_t)glf::Socket::OpenTcp(v1, 16) == 0 )
      {
        v6 = "Unable to connect to remote controller\n";
        goto LABEL_25;
      }
      glf::remote::Canvas::PostSignal(*((uint32_t *)self + 2), 4, 0);
    }
    if ( (uint8_t)glf::Socket::Connect(v1, (char *)self + 12) != 0 )
    {
      glf::remote::Controller::SendIdentification(self);
      v5 = "Connected to remote controller\n";
      goto LABEL_14;
    }
    goto LABEL_23;
  }
  if ( (uint8_t)glf::Socket::IsOpened(v1) != 0 )
    goto LABEL_12;
  if ( (uint8_t)glf::Socket::OpenTcp(v1, 16) != 0
    && ((uint8_t)glf::Socket::Bind(v1, (char *)self + 12) == 0
     || (uint8_t)glf::Socket::Listen(v1, 1) == 0) )
  {
    glf::Socket::Close(v1);
  }
  if ( (uint8_t)glf::Socket::IsOpened(v1) != 0 )
  {
    glf::Console::Print(
      (glf::Console::Self *)"Remote controller is listening on port %d\n",
      (const char *)*((uint16_t *)self + 8));
    glf::remote::Canvas::PostSignal(*((uint32_t *)self + 2), 4, 0);
LABEL_12:
    if ( glf::Socket::Accept(v1, v10) != -1 )
    {
      glf::remote::Controller::SendIdentification(self);
      v5 = "Connected to remote receiver\n";
LABEL_14:
      glf::Console::Print((glf::Console::Self *)v5, v9);
      glf::remote::Canvas::PostSignal(*((uint32_t *)self + 2), 3, 0);
      return 1;
    }
LABEL_23:
    glf::remote::Canvas::PostSignal(*((uint32_t *)self + 2), 4, 1);
    return 0;
  }
  v6 = "Unable to connect to remote receiver\n";
LABEL_25:
  glf::Console::Print((glf::Console::Self *)v6, v8);
  glf::remote::Canvas::PostSignal(*((uint32_t *)self + 2), 2, 0);
  *(uint64_t *)((char *)self + 60) += 2000LL;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Controller::Update  (binary VA: 0xcc28f0)
// Original: glf::remote::Controller::Update
// ----------------------------------------------------------------------------
int glf::remote::Controller::Update(glf::remote::Canvas::Self **self)
{
  int result;

  if ( *((uint8_t *)self + 70) != 0 )
    glf::remote::Canvas::Update(*(self + 2), nullptr);
  if ( (uint8_t)glf::remote::Controller::IsConnected((glf::remote::Controller::Self *)self) != 0 )
    result = glf::remote::Controller::ReceiveMessages((glf::remote::Controller::Self *)self);
  else
    result = glf::remote::Controller::Connect((glf::remote::Controller::Self *)self);
  *((uint8_t *)self + 70) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::ConvertPosScreen2Canvas  (binary VA: 0xccf200)
// Original: glf::remote::Canvas::ConvertPosScreen2Canvas
// ----------------------------------------------------------------------------
float * glf::remote::Canvas::ConvertPosScreen2Canvas(float *a1, int a2, int16_t a3)
{
  glf::App::Self *Instance;

  Instance = (glf::App::Self *)glf::App::GetInstance();
  glf::App::ConvertPosScreenToNormalizedDevice(a1, Instance, &a3, 1);
  *a1 = (float)(*a1 + *a1) - 1.0;
  a1[1] = 1.0 - (float)(a1[1] + a1[1]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::ConvertLength2Size  (binary VA: 0xccf270)
// Original: glf::remote::Canvas::ConvertLength2Size
// ----------------------------------------------------------------------------
glf::remote::Canvas::Self * glf::remote::Canvas::ConvertLength2Size(glf::remote::Canvas::Self *self, float a2, float a3)
{
  glf::App::Self *Instance;
  int v4;
  int v5;
  float v7; // xmm0_4
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  Instance = (glf::App::Self *)glf::App::GetInstance();
  glf::App::GetWindowSize(Instance, &v8, v9);
  v4 = v8;
  v5 = v9[0];
  if ( v8 > v9[0] )
  {
    *(float *)self = a3;
    v7 = (float)v4 * a3;
    *((float *)self + 1) = v7 / (float)v5;
    return self;
  }
  else
  {
    *(float *)self = (float)((float)v9[0] * a3) / (float)v8;
    *((float *)self + 1) = a3;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::PostDrawShape  (binary VA: 0xccf320)
// Original: glf::remote::Canvas::PostDrawShape
// ----------------------------------------------------------------------------
int glf::remote::Canvas::PostDrawShape(int a1, uint32_t *a2)
{
  uint32_t *v2;

  v2 = (uint32_t *)opNew(0x30u);
  if ( v2 != (uint32_t *)-8 )
  {
    v2[2] = *a2;
    v2[3] = a2[1];
    v2[4] = a2[2];
    v2[5] = a2[3];
    v2[6] = a2[4];
    v2[7] = a2[5];
    v2[8] = a2[6];
    v2[9] = a2[7];
    v2[10] = a2[8];
    v2[11] = a2[9];
  }
  return sub_1901920(v2, a1);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::PostSignal  (binary VA: 0xccf3a0)
// Original: glf::remote::Canvas::PostSignal
// ----------------------------------------------------------------------------
int glf::remote::Canvas::PostSignal(int a1, int a2, char a3)
{
  typedef uint32_t _g4_t_v4[2];
  typedef double _g4_t_v5;
  typedef double _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  LOBYTE(v4[1]) = 1;
  LODWORD(v6[1]) = 0;
  v6[2] = 0.007812501992930265;
  v4[0] = 3;
  if ( a3 != 0 )
  {
    v5 = -0.007812505573383532;
    v6[0] = 5.2386907312129694e-11;
    LODWORD(v6[2]) = 1120403456;
  }
  else
  {
    _mm_storel_ps(&v5, G4_BITCAST<__m128>(xmmword_1C7C4A0));
    _mm_storeh_ps(v6, G4_BITCAST<__m128>(xmmword_1C7C4A0));
  }
  HIDWORD(v6[1]) = a2;
  return glf::remote::Canvas::PostDrawShape(a1, v4);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvBegin  (binary VA: 0xccf450)
// Original: glf::remote::Canvas::cvBegin
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvBegin(int a1, int a2)
{
  int result;

  result = a1;
  if ( *(uint32_t *)(a1 + 36) == -1 )
  {
    *(uint32_t *)(a1 + 40) = 0;
    *(uint32_t *)(a1 + 36) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvEnd  (binary VA: 0xccf470)
// Original: glf::remote::Canvas::cvEnd
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvEnd(glf::remote::Canvas::Self *self)
{
  int result;

  result = *((uint32_t *)self + 9);
  if ( result != -1 )
  {
    result = (*(int (**)(uint32_t, int, uint32_t, uint32_t, char *, uint32_t))(**((uint32_t **)self + 3) + 12))(
               *((uint32_t *)self + 3),
               result,
               *((uint32_t *)self + 11),
               *((uint32_t *)self + 10),
               (char *)self + 16,
               *((uint32_t *)self + 8));
    *((uint32_t *)self + 9) = -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvColor  (binary VA: 0xccf4d0)
// Original: glf::remote::Canvas::cvColor
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvColor(int a1, int a2, unsigned int a3)
{
  int result;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  uint64_t v7; // xmm2_8
  __m128 v8;
  result = a1;
  if ( a2 == 2 )
  {
g4_m128_raw(v4) = 0;
g4_m128_raw(v5) = 0;
g4_m128_raw(v6) = 0x3F800000u;
    goto LABEL_5;
  }
  if ( a2 > 2 )
  {
    if ( a2 == 3 )
    {
g4_m128_raw(v4) = 0;
g4_m128_raw(v5) = 0x3F800000u;
g4_m128_raw(v6) = 0;
      goto LABEL_5;
    }
    if ( a2 == 4 )
    {
g4_m128_raw(v5) = 0;
g4_m128_raw(v4) = 0x3F800000u;
g4_m128_raw(v6) = 0;
      goto LABEL_5;
    }
  }
  else if ( a2 == 1 )
  {
g4_m128_raw(v4) = 0x3F000000u;
g4_m128_raw(v5) = 0x3F000000u;
g4_m128_raw(v6) = 0x3F000000u;
    goto LABEL_5;
  }
g4_m128_raw(v4) = 0x3F800000u;
g4_m128_raw(v5) = 0x3F800000u;
g4_m128_raw(v6) = 0x3F800000u;
LABEL_5:
  v7 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v4, G4_BITCAST<__m128>(a3)), 0);
g4_m128_lane<uint64_t>(v8, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v6, v5), 0);
g4_m128_lane<uint64_t>(v8, 1) = v7;
  _mm_storel_ps((double *)(a1 + 16), v8);
  _mm_storeh_ps((double *)(a1 + 24), v8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::Construct  (binary VA: 0xccf580)
// Original: glf::remote::Canvas::Canvas
// ----------------------------------------------------------------------------
glf::remote::Canvas::Self * glf::remote::Canvas::Construct(glf::remote::Canvas::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 1065353216;
  *((uint32_t *)self + 6) = 1065353216;
  *((uint32_t *)self + 7) = 1065353216;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = -1;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  return (glf::remote::Canvas::Self *)glf::remote::Canvas::cvColor((int)(uintptr_t)(self), 0, 0x3F800000u);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvOrientation  (binary VA: 0xccf600)
// Original: glf::remote::Canvas::cvOrientation
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvOrientation(int a1, int a2)
{
  int result;

  result = a2;
  switch ( a2 )
  {
    case 1:
      *(uint32_t *)(a1 + 32) = 1119092736;
      break;
    case 2:
      *(uint32_t *)(a1 + 32) = 1127481344;
      break;
    case 3:
      *(uint32_t *)(a1 + 32) = 1132920832;
      break;
    default:
      *(uint32_t *)(a1 + 32) = 0;
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvVertex2f  (binary VA: 0xccf640)
// Original: glf::remote::Canvas::cvVertex2f
// ----------------------------------------------------------------------------
void glf::remote::Canvas::cvVertex2f(glf::remote::Canvas::Self *self, float a2, float a3, float a4, float a5)
{
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  bool v10;
  unsigned int v11;
  unsigned int v12;
  uint32_t *v13;
  char *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  char *v18;
  void *v19;
  float *v20;
  double *v21;
  unsigned int v22;
  int v23;
  size_t v24;
  char *v25;
  char *v26;
  unsigned int v27;
  uint32_t *v28;
  char *v29;

  if ( *((uint32_t *)self + 9) != -1 )
  {
    v5 = *((uint32_t *)self + 10);
    v6 = *((uint32_t *)self + 11);
    v29 = *((char **)self + 12);
    v7 = (int)(uintptr_t)(&v29[-v6]) >> 4;
    if ( v5 + 1 <= v7 || (v8 = v5 + 1 - v7, v27 = v8, v8 == 0) )
    {
LABEL_30:
      v20 = (float *)(v6 + 16 * v5);
      *v20 = a2;
      v20[1] = a3;
      v20[2] = a4;
      v20[3] = a5;
      ++*((uint32_t *)self + 10);
      return;
    }
    if ( v8 <= (*((uint32_t *)self + 13) - (int)(uintptr_t)(v29)) >> 4 )
    {
      v21 = *((double **)self + 12);
      v22 = v5 + 1 - v7;
      do
      {
        if ( v21 != nullptr )
        {
          _mm_storel_ps(v21, g4_m128_from<__m128>(0LL));
          _mm_storeh_ps(v21 + 1, g4_m128_from<__m128>(0LL));
        }
        v21 += 2;
        --v22;
      }
      while ( v22 != 0 );
      v5 = *((uint32_t *)self + 10);
      v6 = *((uint32_t *)self + 11);
      *((uint32_t *)self + 12) += 16 * v8;
      goto LABEL_30;
    }
    if ( v8 > 0xFFFFFFF - v7 )
      sub_1900180("vector::_M_fill_insert");
    v9 = v5 + 1 - v7;
    if ( v8 < v7 )
      v9 = v7;
    v24 = 0xFFFFFFF0;
    v10 = __CFADD__(v7, v9);
    v11 = v7 + v9;
    if ( !v10 && v11 <= 0xFFFFFFF )
    {
      if ( v11 == 0 )
      {
        v24 = 0;
        v6 = 0;
        goto LABEL_12;
      }
      v24 = 16 * v11;
    }
    v6 = opNew(v24);
LABEL_12:
    v12 = v27;
    v13 = (uint32_t *)(v6 + 16 * v7);
    do
    {
      if ( v13 != nullptr )
      {
        *v13 = 0;
        v13[1] = 0;
        v13[2] = 0;
        v13[3] = 0;
      }
      v13 += 4;
      --v12;
    }
    while ( v12 != 0 );
    v14 = *((char **)self + 11);
    v25 = v14;
    v15 = (uint32_t *)v6;
    if ( v29 != v14 )
    {
      do
      {
        if ( v15 != nullptr )
        {
          *v15 = *(uint32_t *)v14;
          v15[1] = *((uint32_t *)v14 + 1);
          v15[2] = *((uint32_t *)v14 + 2);
          v15[3] = *((uint32_t *)v14 + 3);
        }
        v14 += 16;
        v15 += 4;
      }
      while ( v29 != v14 );
      v15 = (uint32_t *)(v6 + ((v29 - (v25 + 16)) & 0xFFFFFFF0) + 16);
    }
    v16 = &v15[4 * v27];
    v28 = v16;
    v26 = *((char **)self + 12);
    if ( v29 != v26 )
    {
      v17 = v16;
      v18 = v29;
      do
      {
        if ( v17 != nullptr )
        {
          *v17 = *(uint32_t *)v18;
          v17[1] = *((uint32_t *)v18 + 1);
          v17[2] = *((uint32_t *)v18 + 2);
          v17[3] = *((uint32_t *)v18 + 3);
        }
        v18 += 16;
        v17 += 4;
      }
      while ( v26 != v18 );
      v28 = (uint32_t *)((char *)v28 + ((v26 - (v29 + 16)) & 0xFFFFFFF0) + 16);
    }
    v19 = *((void **)self + 11);
    if ( v19 != nullptr )
    {
      v23 = v6;
      opDelete(v19);
      v6 = v23;
    }
    *((uint32_t *)self + 11) = v6;
    *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v28);
    *((uint32_t *)self + 13) = v6 + v24;
    v5 = *((uint32_t *)self + 10);
    goto LABEL_30;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvCircle2fv  (binary VA: 0xccf8b0)
// Original: glf::remote::Canvas::cvCircle2fv
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvCircle2fv(glf::remote::Canvas::Self *self, float *a2, const float *a3, bool a4)
{
  float v4; // xmm2_4
  int v5;
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v9;
  float v10;
  float v11;
  float v12;
  int v13;

  if ( a4 )
  {
    glf::remote::Canvas::cvBegin((int)(uintptr_t)(self), 3);
    glf::remote::Canvas::cvVertex2f(self, *a2, a2[1], 0.0, 0.0);
    v13 = 17;
  }
  else
  {
    glf::remote::Canvas::cvBegin((int)(uintptr_t)(self), 0);
    v13 = 16;
  }
  v4 = a3[1];
  v5 = 0;
  v6 = 0.0;
  v7 = 1.0;
  while ( 1 )
  {
    ++v5;
    glf::remote::Canvas::cvVertex2f(self, (float)(v7 * *a3) + *a2, (float)(v6 * v4) + a2[1], 0.0, 0.0);
    if ( v13 <= v5 )
      break;
    v11 = a3[1];
    v9 = sinf((float)v5 * 0.3926991f);
    v12 = v9;
    v10 = cosf((float)v5 * 0.3926991f);
    v7 = v10;
    v6 = v12;
    v4 = v11;
  }
  return glf::remote::Canvas::cvEnd(self);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvCross2fv  (binary VA: 0xccfa30)
// Original: glf::remote::Canvas::cvCross2fv
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvCross2fv(glf::remote::Canvas::Self *self, float *a2, const float *a3, bool a4)
{
  if ( a4 )
  {
    glf::remote::Canvas::cvBegin((int)(uintptr_t)(self), 1);
  }
  else
  {
    glf::remote::Canvas::cvBegin((int)(uintptr_t)(self), 2);
    glf::remote::Canvas::cvVertex2f(self, *a2, a2[1], 0.0, 0.0);
  }
  glf::remote::Canvas::cvVertex2f(self, *a2 - *a3, a2[1], 0.0, 0.0);
  glf::remote::Canvas::cvVertex2f(self, *a3 + *a2, a2[1], 0.0, 0.0);
  glf::remote::Canvas::cvVertex2f(self, *a2, a2[1] - a3[1], 0.0, 0.0);
  glf::remote::Canvas::cvVertex2f(self, *a2, a3[1] + a2[1], 0.0, 0.0);
  return glf::remote::Canvas::cvEnd(self);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvPoint2fv  (binary VA: 0xccfb90)
// Original: glf::remote::Canvas::cvPoint2fv
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvPoint2fv(glf::remote::Canvas::Self *self, float *a2)
{
  glf::remote::Canvas::cvBegin((int)(uintptr_t)(self), 2);
  glf::remote::Canvas::cvVertex2f(self, *a2, a2[1], 0.0, 0.0);
  return glf::remote::Canvas::cvEnd(self);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvRect2fv  (binary VA: 0xccfc00)
// Original: glf::remote::Canvas::cvRect2fv
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvRect2fv(glf::remote::Canvas::Self *self, float *a2, float *a3, bool a4)
{
  glf::remote::Canvas::cvBegin((int)(uintptr_t)(self), a4 ? 3 : 0);
  glf::remote::Canvas::cvVertex2f(self, *a2, a2[1], 0.0, 0.0);
  glf::remote::Canvas::cvVertex2f(self, *a3, a2[1], 1.0, 0.0);
  glf::remote::Canvas::cvVertex2f(self, *a3, a3[1], 1.0, 1.0);
  glf::remote::Canvas::cvVertex2f(self, *a2, a3[1], 0.0, 1.0);
  return glf::remote::Canvas::cvEnd(self);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvTriangle2fv  (binary VA: 0xccfd00)
// Original: glf::remote::Canvas::cvTriangle2fv
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvTriangle2fv(glf::remote::Canvas::Self *self, float *a2, const float *a3, bool a4)
{
  glf::remote::Canvas::cvBegin((int)(uintptr_t)(self), a4 ? 5 : 0);
  glf::remote::Canvas::cvVertex2f(self, *a2 - (float)(*a3 * 0.5), a2[1] - (float)(a3[1] * 0.5), 0.0, 0.0);
  glf::remote::Canvas::cvVertex2f(self, (float)(*a3 * 0.5) + *a2, a2[1] - (float)(a3[1] * 0.5), 0.0, 0.0);
  glf::remote::Canvas::cvVertex2f(self, *a2, (float)(0.5 * a3[1]) + a2[1], 0.0, 0.0);
  return glf::remote::Canvas::cvEnd(self);
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::cvDrawShape  (binary VA: 0xccfe40)
// Original: glf::remote::Canvas::cvDrawShape
// ----------------------------------------------------------------------------
int glf::remote::Canvas::cvDrawShape(glf::remote::Canvas::Self *a1, int a2, int a3)
{
  int v3; // kr00_4
  float v4; // xmm1_4
  char v5;
  int result;
  float v7[2];

  glf::remote::Canvas::cvColor((int)(uintptr_t)(a1), *(uint32_t *)(a2 + 28), COERCE_UNSIGNED_INT(*(float *)&a3 * *(float *)(a2 + 36)));
  v3 = glf::remote::Canvas::cvOrientation((int)(uintptr_t)(a1), *(uint32_t *)(a2 + 24));
  switch ( *(uint32_t *)a2 )
  {
    case 0:
      result = glf::remote::Canvas::cvCircle2fv(a1, (float *)(a2 + 8), (const float *)(a2 + 16), *(uint8_t *)(a2 + 4));
      break;
    case 1:
      result = glf::remote::Canvas::cvCross2fv(a1, (float *)(a2 + 8), (const float *)(a2 + 16), *(uint8_t *)(a2 + 4));
      break;
    case 2:
      result = glf::remote::Canvas::cvPoint2fv(a1, (float *)(a2 + 8));
      break;
    case 3:
      v4 = *(float *)(a2 + 16) + *(float *)(a2 + 8);
      v5 = *(uint8_t *)(a2 + 4);
      v7[1] = *(float *)(a2 + 20) + *(float *)(a2 + 12);
      v7[0] = v4;
      result = glf::remote::Canvas::cvRect2fv(a1, (float *)(a2 + 8), v7, v5);
      break;
    case 4:
      result = glf::remote::Canvas::cvTriangle2fv(a1, (float *)(a2 + 8), (const float *)(a2 + 16), *(uint8_t *)(a2 + 4));
      break;
    default:
      result = v3;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::remote::Canvas::Update  (binary VA: 0xccff90)
// Original: glf::remote::Canvas::Update
// ----------------------------------------------------------------------------
void glf::remote::Canvas::Update(glf::remote::Canvas::Self *a1, glf::Self *a2)
{
  glf::App::Self *Instance;
  int v3;
  int v4;
  glf::remote::Canvas::Self *v5;
  glf::remote::Canvas::Self *v6;
  int64_t Microseconds; // rax
  float v8; // xmm1_4
  float v9; // xmm0_4
  float *i;
  float v11; // xmm0_4
  int v12;
  int v13;
  glf::remote::Canvas::Self *v14;
  int v15;
  typedef float _g4_t_v16;
  typedef float *_g4_t_v17;
  typedef float _g4_t_v18;
  typedef float *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v20)) > _g4_s4 ? (32u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v21)) > _g4_s5 ? (36u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v22)) > _g4_s6 ? (40u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v23)) > _g4_s7 ? (44u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v24)) > _g4_s8 ? (48u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v25)) > _g4_s9 ? (52u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v26)) > _g4_s10 ? (56u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v27)) > _g4_s11 ? (60u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v28)) > _g4_s12 ? (64u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v29)) > _g4_s13 ? (68u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v30)) > _g4_s14 ? (72u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v31)) > _g4_s15 ? (76u + sizeof(_g4_t_v31)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);

  Instance = (glf::App::Self *)glf::App::GetInstance();
  if ( !glf::App::Prepare(Instance, 0) )
  {
LABEL_17:
    if ( glf::App::Prepare(Instance, 1) )
    {
      glf::App::GetWindowSize(Instance, &v20, &v21);
      v12 = v20;
      v13 = v21;
      if ( v21 * v20 != 0 )
      {
        *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(a2);
        G4_VCALL<void>(a2, 8, v12, v13, 1);
        v14 = *(glf::remote::Canvas::Self **)a1;
        v23 = 1;
        v28 = 0;
        v29 = 1;
        v30 = 1148846080;
        v31 = 1065353216;
        v22 = 3;
        v24 = -1098907648;
        v25 = -1098907648;
        v26 = 1056964608;
        v27 = 1056964608;
        v15 = 3;
        if ( a1 != v14 )
        {
          do
            v14 = *(glf::remote::Canvas::Self **)v14;
          while ( a1 != v14 );
          v15 = 2;
        }
        v29 = v15;
        glf::remote::Canvas::cvDrawShape(a1, (int)(uintptr_t)(&v22), 1065353216);
        (*(void (**)(uint32_t))(**((uint32_t **)a1 + 3) + 16))(*((uint32_t *)a1 + 3));
        *((uint32_t *)a1 + 3) = 0;
        glf::App::Present(Instance, 1);
      }
    }
    return;
  }
  glf::App::GetWindowSize(Instance, &v20, &v21);
  v3 = v20;
  v4 = v21;
  if ( a2 != nullptr && v21 * v20 != 0 )
  {
    *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(a2);
    G4_VCALL<void>(a2, 8, v3, v4, 0);
    Microseconds = glf::GetMicroseconds();
    v18 = 0.0;
    v16 = (float)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(Microseconds), _mm_cvtsi32_si128(HIDWORD(Microseconds))), 0);
    v8 = *((float *)a1 + 2);
    v9 = v16 * 0.001f;
    if ( v8 != 0.0 )
      v18 = v9 - v8;
    *((float *)a1 + 2) = v9;
    for ( i = *(float **)a1; a1 != (glf::remote::Canvas::Self *)i; i = v19 )
    {
      while ( 1 )
      {
        v17 = i;
        glf::remote::Canvas::cvDrawShape(a1, (int)(uintptr_t)(i + 2), COERCE_INT(fsqrt(fminf(0.002f * i[10], 1.0))));
        v11 = v17[10] - v18;
        v17[10] = v11;
        if ( v11 <= 0.0 )
          break;
        i = *(float **)v17;
        if ( a1 == *(glf::remote::Canvas::Self **)v17 )
          goto LABEL_16;
      }
      v19 = *(float **)v17;
      sub_1901940(v17);
      opDelete(v17);
    }
LABEL_16:
    (*(void (**)(uint32_t))(**((uint32_t **)a1 + 3) + 16))(*((uint32_t *)a1 + 3));
    *((uint32_t *)a1 + 3) = 0;
    glf::App::Present(Instance, 0);
    goto LABEL_17;
  }
  v5 = *(glf::remote::Canvas::Self **)a1;
  if ( *(glf::remote::Canvas::Self **)a1 != a1 )
  {
    while ( 1 )
    {
      v6 = *(glf::remote::Canvas::Self **)v5;
      opDelete(v5);
      if ( v6 == a1 )
        break;
      v5 = v6;
    }
  }
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(a1);
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(a1);
}


