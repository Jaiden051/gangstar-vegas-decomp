#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfSpyConfirmFailed.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfSpyConfirmFailed::Destroy  (binary VA: 0x1347150)
// Original: glotv3::EventOfSpyConfirmFailed::~EventOfSpyConfirmFailed
// ----------------------------------------------------------------------------
void glotv3::EventOfSpyConfirmFailed::Destroy(glotv3::EventOfSpyConfirmFailed::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093B60);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfSpyConfirmFailed::Destroy_ea13472b0  (binary VA: 0x13472b0)
// Original: glotv3::EventOfSpyConfirmFailed::~EventOfSpyConfirmFailed
// ----------------------------------------------------------------------------
void glotv3::EventOfSpyConfirmFailed::Destroy_ea13472b0(glotv3::EventOfSpyConfirmFailed::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093B60);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfSpyConfirmFailed::Construct  (binary VA: 0x13490d0)
// Original: glotv3::EventOfSpyConfirmFailed::EventOfSpyConfirmFailed
// ----------------------------------------------------------------------------
int glotv3::EventOfSpyConfirmFailed::Construct(glotv3::Event::Self *a1, uint8_t **a2, uint8_t **a3)
{
  void *v3;
  int result;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  glotv3::Event::Construct(a1, false);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2093B60);
  glotv3::Event::setIsAutomatic(a1, true);
  glotv3::Event::setEventType(a1, &loc_4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "for_uuid", (int)(uintptr_t)(&v6));
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v7, a2);
  v3 = (void *)(v7 - 12);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), "with_message", (int)(uintptr_t)(&v6) + 1);
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)v8, a3);
  result = v8[0];
  v5 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v5); return 0; }
  }
  return result;
}


