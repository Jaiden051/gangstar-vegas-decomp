#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfUserIdentifiersChanged.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfUserIdentifiersChanged::Destroy  (binary VA: 0x1347000)
// Original: glotv3::EventOfUserIdentifiersChanged::~EventOfUserIdentifiersChanged
// ----------------------------------------------------------------------------
void glotv3::EventOfUserIdentifiersChanged::Destroy(glotv3::EventOfUserIdentifiersChanged::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A60);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfUserIdentifiersChanged::Destroy_ea13474e0  (binary VA: 0x13474e0)
// Original: glotv3::EventOfUserIdentifiersChanged::~EventOfUserIdentifiersChanged
// ----------------------------------------------------------------------------
void glotv3::EventOfUserIdentifiersChanged::Destroy_ea13474e0(glotv3::EventOfUserIdentifiersChanged::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A60);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfUserIdentifiersChanged::Construct  (binary VA: 0x1348b90)
// Original: glotv3::EventOfUserIdentifiersChanged::EventOfUserIdentifiersChanged
// ----------------------------------------------------------------------------
void glotv3::EventOfUserIdentifiersChanged::Construct(glotv3::Event::Self *a1, uint8_t **a2, uint8_t **a3, uint8_t **a4, uint8_t **a5, uint8_t a6)
{
  uint32_t *v6;
  typedef void *_g4_t_v7[10];
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v8)) > _g4_s1 ? (40u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v9)) > _g4_s2 ? (44u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  glotv3::Event::Construct(a1, false);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2093A60);
  glotv3::Event::setIsAutomatic(a1, true);
  glotv3::Event::setEventType(a1, &reinterpret_cast<G4Elf32Sym *>(stru_28614)->st_other);
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFAOld, a2);
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFANew, a3);
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFVOld, a4);
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFVNew, a5);
  v7[2] = (void *)(uintptr_t)2;
  v7[6] = nullptr;
  v7[9] = nullptr;
  v7[8] = (void *)(uintptr_t)2048;
  v8 = opNew(1u);
  v9 = v8;
  v6 = (uint32_t *)(malloc(0x80Cu));
  *v6 = 2048;
  v6[2] = 0;
  v6[1] = 0;
  v7[7] = v6;
  v7[0] = (void *)a6;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(a1),
    &glotv3::EventOfUserIdentifiersChanged::k_KeyReinstall,
    (glotv3::EventValue::Self *)v7);
  glotv3::EventValue::Destroy(v7);
}


