#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfGlotAppDetails.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfGlotAppDetails::Destroy  (binary VA: 0x1346f70)
// Original: glotv3::EventOfGlotAppDetails::~EventOfGlotAppDetails
// ----------------------------------------------------------------------------
void glotv3::EventOfGlotAppDetails::Destroy(glotv3::EventOfGlotAppDetails::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A00);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfGlotAppDetails::Destroy_ea13475d0  (binary VA: 0x13475d0)
// Original: glotv3::EventOfGlotAppDetails::~EventOfGlotAppDetails
// ----------------------------------------------------------------------------
void glotv3::EventOfGlotAppDetails::Destroy_ea13475d0(glotv3::EventOfGlotAppDetails::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A00);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfGlotAppDetails::Construct  (binary VA: 0x1348520)
// Original: glotv3::EventOfGlotAppDetails::EventOfGlotAppDetails
// ----------------------------------------------------------------------------
glotv3::EventOfGlotAppDetails::Self * glotv3::EventOfGlotAppDetails::Construct(glotv3::EventOfGlotAppDetails::Self *self)
{
  volatile int32_t *v1;
  volatile int32_t *v2;
  glotv3::EventOfGlotAppDetails::Self *result;
  uint8_t *v4;
  typedef volatile int32_t *_g4_t_v5;
  typedef volatile int32_t *_g4_t_v6;
  typedef uint8_t *_g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  glotv3::Event::Construct(self, false);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A00);
  glotv3::Event::setIsAutomatic(self, true);
  glotv3::Event::setEventType(self, &reinterpret_cast<G4Elf32Sym *>(stru_CAC4)->st_shndx);
  glotv3::Porting::GetIGPCode((glotv3::Porting::Self *)&v5);
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfGlotAppDetails::k_KeyIgpCode, (uint8_t **)&v5);
  v1 = v5 - 3;
  if ( v5 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v1);
  glotv3::Porting::GetInjectedIGPCode((glotv3::Porting::Self *)&v6);
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfGlotAppDetails::k_KeyInjectedIgpCode, (uint8_t **)&v6);
  v2 = v6 - 3;
  if ( v6 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v6 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v2);
  glotv3::Porting::GetDownloadCode((glotv3::Porting::Self *)v7);
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfGlotAppDetails::k_KeyDownloadCode, v7);
  result = (glotv3::EventOfGlotAppDetails::Self *)v7[0];
  v4 = v7[0] - 12;
  if ( (uint32_t *)v7[0] - 3 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v7[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    return (g4_std::string::Rep::M_destroy(v4), (glotv3::EventOfGlotAppDetails::Self *)0);
  }
  return result;
}


