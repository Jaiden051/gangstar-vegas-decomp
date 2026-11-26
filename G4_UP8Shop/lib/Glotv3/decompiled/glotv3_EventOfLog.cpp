#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfLog.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfLog::Destroy  (binary VA: 0x1347180)
// Original: glotv3::EventOfLog::~EventOfLog
// ----------------------------------------------------------------------------
void glotv3::EventOfLog::Destroy(glotv3::EventOfLog::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093B80);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfLog::Destroy_ea1347260  (binary VA: 0x1347260)
// Original: glotv3::EventOfLog::~EventOfLog
// ----------------------------------------------------------------------------
void glotv3::EventOfLog::Destroy_ea1347260(glotv3::EventOfLog::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093B80);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfLog::Construct  (binary VA: 0x1349200)
// Original: glotv3::EventOfLog::EventOfLog
// ----------------------------------------------------------------------------
void glotv3::EventOfLog::Construct(glotv3::Event::Self *a1, uint8_t **a2, uint8_t **a3, void *a4)
{
  void *v4;
  void *v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  void *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef void *_g4_t_v16[7];
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (14u + sizeof(_g4_t_v11)) > _g4_s0 ? (14u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v17)) > _g4_s6 ? (60u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v18)) > _g4_s7 ? (64u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v19)) > _g4_s8 ? (68u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v20)) > _g4_s9 ? (72u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v21)) > _g4_s10 ? (76u + sizeof(_g4_t_v21)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 14u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);

  glotv3::Event::Construct(a1, false);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2093B80);
  glotv3::Event::setIsAutomatic(a1, true);
  glotv3::Event::setEventType(a1, (char *)&loc_4 + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "from_library", (int)(uintptr_t)(&v11));
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v13, a2);
  v4 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "has_logged", (int)(uintptr_t)(&v11) + 1);
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v14, a3);
  v5 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v16[2] = (void *)(uintptr_t)2;
  v16[6] = nullptr;
  v17 = nullptr;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v18 = 2048;
  v6 = opNew(1u);
  v7 = v18;
  v20 = v6;
  v21 = v6;
  v8 = (uint32_t *)(malloc(v18 + 12));
  v9 = v17;
  *v8 = v7;
  v8[2] = (uint32_t)(uintptr_t)(v9);
  v8[1] = 0;
  v17 = v8;
  v16[0] = a4;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "type", (int)(uintptr_t)(&v12));
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v15, (glotv3::EventValue::Self *)v16);
  v10 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  glotv3::EventValue::Destroy(v16);
}


