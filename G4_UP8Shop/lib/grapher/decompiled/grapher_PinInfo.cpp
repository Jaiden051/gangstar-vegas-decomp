#include "Core/Utils/DecompTypes.h"
#include "grapher_PinInfo.h"

// ----------------------------------------------------------------------------
// Function: grapher::PinInfo::GetName  (binary VA: 0x13b50e0)
// Original: grapher::PinInfo::GetName
// ----------------------------------------------------------------------------
int * grapher::PinInfo::GetName(grapher::PinInfo::Self *self)
{
  int *result;

  result = (int *)(&dword_2119210);
  if ( *((uint32_t *)self + 1) != 0 )
    return *((int **)self + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::PinInfo::Construct  (binary VA: 0x13b5100)
// Original: grapher::PinInfo::PinInfo
// ----------------------------------------------------------------------------
grapher::PinInfo::Self * grapher::PinInfo::Construct(grapher::PinInfo::Self *self)
{
  grapher::PinInfo::Self *result;
  int v2;
  typedef char *_g4_t_v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v4)) > _g4_s1 ? (31u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 31u);

  *(uint32_t *)self = -1;
  *((uint32_t *)self + 1) = 0;
  result = (grapher::PinInfo::Self *)grapher::IsGrapherModeOn((grapher::Self *)&dword_20, (int)(uintptr_t)(v3));
  if ( (uint8_t)(uintptr_t)result != 0 )
  {
    v2 = gll_operator_new(0x14u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorBase.cpp"), 45);
    result = (grapher::PinInfo::Self *)g4_std::string::construct_from_cstr(v2, "invalid", (int)(uintptr_t)(&v4));
    *(uint8_t *)(v2 + 4) = 0;
    *(uint32_t *)(v2 + 8) = -1;
    *(uint32_t *)(v2 + 12) = 0;
    *(uint8_t *)(v2 + 16) = 0;
    *((uint32_t *)self + 1) = v2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::PinInfo::Construct  (binary VA: 0x13b51a0)
// Original: grapher::PinInfo::PinInfo
// ----------------------------------------------------------------------------
int grapher::PinInfo::Construct(uint32_t *a1, int a2, int a3, char a4, int a5)
{
  int result;
  int v6;
  int v7;

  *a1 = a3;
  a1[1] = 0;
  result = grapher::IsGrapherModeOn((grapher::Self *)&dword_20, v7);
  if ( (uint8_t)result != 0 )
  {
    v6 = gll_operator_new(0x14u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorBase.cpp"), 55);
    g4_std::string::construct_copy(v6, a2);
    *(uint8_t *)(v6 + 4) = a4;
    *(uint32_t *)(v6 + 8) = a5;
    *(uint32_t *)(v6 + 12) = 0;
    *(uint8_t *)(v6 + 16) = 0;
    a1[1] = v6;
    return a5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::PinInfo::opAssign  (binary VA: 0x13b5250)
// Original: grapher::PinInfo::operator=
// ----------------------------------------------------------------------------
grapher::PinInfo::Self * grapher::PinInfo::opAssign(grapher::PinInfo::Self *self, const grapher::PinInfo::Self *a2)
{
  int v2;
  int v3;

  if ( self != a2 )
  {
    v2 = *((uint32_t *)self + 1);
    *(uint32_t *)self = *(uint32_t *)a2;
    if ( v2 != 0 )
    {
      v3 = *((uint32_t *)a2 + 1);
      g4_std::string::assign_str(v2, v3);
      *(uint8_t *)(v2 + 4) = *(uint8_t *)(v3 + 4);
      *(uint32_t *)(v2 + 8) = *(uint32_t *)(v3 + 8);
      *(uint32_t *)(v2 + 12) = *(uint32_t *)(v3 + 12);
      *(uint8_t *)(v2 + 16) = *(uint8_t *)(v3 + 16);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::PinInfo::Construct  (binary VA: 0x13b52d0)
// Original: grapher::PinInfo::PinInfo
// ----------------------------------------------------------------------------
grapher::PinInfo::Self * grapher::PinInfo::Construct(grapher::PinInfo::Self *self, const grapher::PinInfo::Self *a2)
{
  int v2;
  typedef grapher::PinInfo::Self *_g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v5)) > _g4_s1 ? (31u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 31u);

  if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)&dword_20, (int)(uintptr_t)(v4)) != 0 )
  {
    v2 = gll_operator_new(0x14u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorBase.cpp"), 61);
    g4_std::string::construct_from_cstr(v2, "invalid", (int)(uintptr_t)(&v5));
    *(uint8_t *)(v2 + 4) = 0;
    *(uint32_t *)(v2 + 8) = -1;
    *(uint32_t *)(v2 + 12) = 0;
    *(uint8_t *)(v2 + 16) = 0;
    *((uint32_t *)self + 1) = v2;
  }
  return grapher::PinInfo::opAssign(self, a2);
}


