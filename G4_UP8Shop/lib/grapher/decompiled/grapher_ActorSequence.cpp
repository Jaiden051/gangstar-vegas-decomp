#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorSequence.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequence::Event  (binary VA: 0x13af720)
// Original: grapher::ActorSequence::Event
// ----------------------------------------------------------------------------
int grapher::ActorSequence::Event(grapher::ActorSequence::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  result = a2;
  if ( a2 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, 1, a3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequence::Init  (binary VA: 0x13af840)
// Original: grapher::ActorSequence::Init
// ----------------------------------------------------------------------------
int grapher::ActorSequence::Init(grapher::ActorSequence::Self *self)
{
  void *v1;
  int result;
  void *v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  grapher::ActorBase::SetArraySize(self, 2, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "In", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddPin(self, 0, &v5, 1, -1);
  v1 = (void *)(v5 - 12);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "Out", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::AddPin(self, 1, v6, 0, -1);
  result = v6[0];
  v3 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v3); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequence::Destroy  (binary VA: 0x13afbf0)
// Original: grapher::ActorSequence::~ActorSequence
// ----------------------------------------------------------------------------
void grapher::ActorSequence::Destroy(grapher::ActorSequence::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094828);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequence::Destroy_ea13afca0  (binary VA: 0x13afca0)
// Original: grapher::ActorSequence::~ActorSequence
// ----------------------------------------------------------------------------
void grapher::ActorSequence::Destroy_ea13afca0(grapher::ActorSequence::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094828);
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}


