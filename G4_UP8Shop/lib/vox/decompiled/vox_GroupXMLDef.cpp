#include "Core/Utils/DecompTypes.h"
#include "vox_GroupXMLDef.h"

// ----------------------------------------------------------------------------
// Function: vox::GroupXMLDef::Construct  (binary VA: 0x1018b20)
// Original: vox::GroupXMLDef::GroupXMLDef
// ----------------------------------------------------------------------------
int vox::GroupXMLDef::Construct(vox::GroupXMLDef::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 4, (char *)&unk_1B15112, (int)(uintptr_t)(&v2) + 1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint8_t *)self + 20) = 1;
  *((uint32_t *)self + 6) = 1065353216;
  *((uint32_t *)self + 7) = 2139095039;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 11) = 1065353216;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint8_t *)self + 60) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 1028443341;
  *((uint8_t *)self + 72) = 0;
  *((uint32_t *)self + 19) = 0;
  return 1065353216;
}


