#include "Core/Utils/DecompTypes.h"
#include "glf_SystemCategory.h"

// ----------------------------------------------------------------------------
// Function: glf::SystemCategory::GetName  (binary VA: 0xccb390)
// Original: glf::SystemCategory::GetName
// ----------------------------------------------------------------------------
void * glf::SystemCategory::GetName()
{
  return &unk_1B15112;
}

// ----------------------------------------------------------------------------
// Function: glf::SystemCategory::Destroy  (binary VA: 0xccb3b0)
// Original: glf::SystemCategory::~SystemCategory
// ----------------------------------------------------------------------------
void glf::SystemCategory::Destroy(glf::SystemCategory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DD70);
}

// ----------------------------------------------------------------------------
// Function: glf::SystemCategory::Destroy_eaccb3d0  (binary VA: 0xccb3d0)
// Original: glf::SystemCategory::~SystemCategory
// ----------------------------------------------------------------------------
void glf::SystemCategory::Destroy_eaccb3d0(glf::SystemCategory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DD70);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::SystemCategory::GetMsg  (binary VA: 0xccb400)
// Original: glf::SystemCategory::GetMsg
// ----------------------------------------------------------------------------
glf::SystemCategory::Self * glf::SystemCategory::GetMsg(glf::SystemCategory::Self *self, int a2, const char *a3, char *a4)
{
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), a4, (int)(uintptr_t)(&v5));
  return self;
}


