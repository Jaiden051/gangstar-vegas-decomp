#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppCod.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppCode::Destroy  (binary VA: 0x17957e0)
// Original: hkpMoppCode::~hkpMoppCode
// ----------------------------------------------------------------------------
void hkpMoppCode::Destroy(hkpMoppCode::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0BF0);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      v1 & 0x3FFFFFFF);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCode::Destroy_ea1795890  (binary VA: 0x1795890)
// Original: hkpMoppCode::~hkpMoppCode
// ----------------------------------------------------------------------------
void hkpMoppCode::Destroy_ea1795890(hkpMoppCode::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0BF0);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      v1 & 0x3FFFFFFF);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCode::CodeInfo::staticClass  (binary VA: 0x1795900)
// Original: hkpMoppCode::CodeInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpMoppCode::CodeInfo::staticClass()
{
  return &hkpMoppCodeCodeInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCode::staticClass  (binary VA: 0x1795920)
// Original: hkpMoppCode::staticClass
// ----------------------------------------------------------------------------
void * hkpMoppCode::staticClass()
{
  return &hkpMoppCodeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCodeReindexedTerminal::staticClass  (binary VA: 0x1795940)
// Original: hkpMoppCodeReindexedTerminal::staticClass
// ----------------------------------------------------------------------------
void * hkpMoppCodeReindexedTerminal::staticClass()
{
  return &hkpMoppCodeReindexedTerminalClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCodeGenerator::Destroy  (binary VA: 0x1b0fd60)
// Original: hkpMoppCodeGenerator::~hkpMoppCodeGenerator
// ----------------------------------------------------------------------------
void hkpMoppCodeGenerator::Destroy(hkpMoppCodeGenerator::Self *self)
{
  int v1;
  uint32_t *address;
  int v3;

  v1 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B24E0);
  if ( v1 != 0 )
  {
    address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(*address + 40) + 12))(
      *(uint32_t *)(*address + 40),
      v1,
      *((uint32_t *)self + 2));
  }
  v3 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      8 * v3);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCodeGenerator::Destroy_ea1b0fe00  (binary VA: 0x1b0fe00)
// Original: hkpMoppCodeGenerator::~hkpMoppCodeGenerator
// ----------------------------------------------------------------------------
void hkpMoppCodeGenerator::Destroy_ea1b0fe00(hkpMoppCodeGenerator::Self *self)
{
  int v1;
  int v2;

  hkpMoppCodeGenerator::Destroy(self);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCodeGenerator::Construct  (binary VA: 0x1b0fe60)
// Original: hkpMoppCodeGenerator::hkpMoppCodeGenerator
// ----------------------------------------------------------------------------
void hkpMoppCodeGenerator::Construct(hkpMoppCodeGenerator::Self *self, int a2)
{
  uint32_t *address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B24E0);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  *((uint32_t *)self + 4) = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 40) + 8))(
                            *(uint32_t *)(*address + 40),
                            a2);
  *((uint32_t *)self + 2) = a2;
  *((uint32_t *)self + 3) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCodeGenerator::resize  (binary VA: 0x1b0fee0)
// Original: hkpMoppCodeGenerator::resize
// ----------------------------------------------------------------------------
int hkpMoppCodeGenerator::resize(hkpMoppCodeGenerator::Self *self)
{
  uint32_t *address;
  hkString::Self *v3;
  int result;

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v3 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 40) + 8))(
                     *(uint32_t *)(*address + 40),
                     2 * *((uint32_t *)self + 2));
  hkString::memSet(v3, (char *)&dword_CC + 1, *((uint32_t *)self + 2));
  hkString::memCpy((hkString::Self *)((char *)v3 + *((uint32_t *)self + 2)), *((void **)self + 4), *((uint32_t *)self + 2));
  result = (*(int (**)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*address + 40) + 12))(
             *(uint32_t *)(*address + 40),
             *((uint32_t *)self + 4),
             *((uint32_t *)self + 2));
  *((uint32_t *)self + 2) *= 2;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCodeGenerator::validateJumpCommands  (binary VA: 0x1b0ff80)
// Original: hkpMoppCodeGenerator::validateJumpCommands
// ----------------------------------------------------------------------------
void hkpMoppCodeGenerator::validateJumpCommands()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCodeGenerator::compileCode  (binary VA: 0x1b0ff90)
// Original: hkpMoppCodeGenerator::compileCode
// ----------------------------------------------------------------------------
int hkpMoppCodeGenerator::compileCode(hkpMoppCodeGenerator::Self *self)
{
  hkpMoppCodeGenerator::Self *v1;
  uint32_t *address;
  int v3;
  hkString::Self *v4;
  int v5;
  int v7;
  int v8;
  int savedregs;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef size_t _g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef uint32_t _g4_t_v19[3];
  typedef hkArrayUtil::Self *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v14)) > _g4_s5 ? (20u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v15)) > _g4_s6 ? (24u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v16)) > _g4_s7 ? (28u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v17)) > _g4_s8 ? (32u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v18)) > _g4_s9 ? (32u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v19)) > _g4_s10 ? (36u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v20)) > _g4_s11 ? (48u + sizeof(_g4_t_v20)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);

  v20 = (hkArrayUtil::Self *)&self;
  v1 = self;
  hkpMoppCodeGenerator::validateJumpCommands();
  v17 = *((uint32_t *)v1 + 3);
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v3 = (*(int (**)(uint32_t, int, int, int, int, int, int, int, int, uint32_t *, size_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*address + 44) + 8))(
         *(uint32_t *)(*address + 44),
         48,
         v9,
         v10,
         v11,
         v12,
         v13,
         v14,
         v15,
         address,
         v17,
         v19[0],
         v19[1],
         v19[2]);
  *(uint32_t *)(v3 + 4) = -65535;
  v4 = nullptr;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_20A0BF0);
  v5 = v18 + 3;
  *(uint32_t *)(v3 + 32) = 0;
  *(uint32_t *)(v3 + 36) = 0;
  *(uint32_t *)(v3 + 40) = 0x80000000;
  *(uint32_t *)(v3 + 16) = 0;
  *(uint32_t *)(v3 + 20) = 0;
  *(uint32_t *)(v3 + 24) = 0;
  *(uint32_t *)(v3 + 28) = 0;
  *(uint8_t *)(v3 + 44) = 2;
  if ( (int)(v18 + 3) > 0 )
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v19,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)(v3 + 32),
      v5,
      1);
    v5 = v18 + 3;
    v7 = *(uint32_t *)(v3 + 40) & 0x3FFFFFFF;
    if ( (int)(v18 + 3) <= v7 )
    {
      v4 = *(hkString::Self **)(v3 + 32);
    }
    else
    {
      v8 = 2 * v7;
      savedregs = 1;
      v20 = (hkArrayUtil::Self *)v19;
      if ( v8 < (int)(v18 + 3) )
        v8 = v18 + 3;
      hkArrayUtil::reserve(
        v20,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)(v3 + 32),
        v8,
        savedregs);
      v4 = *(hkString::Self **)(v3 + 32);
      v5 = v18 + 3;
    }
  }
  *(uint32_t *)(v3 + 36) = v5;
  hkString::memCpy(v4, (void *)(*((uint32_t *)v1 + 4) + *((uint32_t *)v1 + 2) - *((uint32_t *)v1 + 3)), v18);
  hkString::memSet((hkString::Self *)(*(uint32_t *)(v3 + 32) + v18), (char *)&dword_CC + 1, 3u);
  (*(void (**)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)v16 + 40) + 12))(
    *(uint32_t *)(*(uint32_t *)v16 + 40),
    *((uint32_t *)v1 + 4),
    *((uint32_t *)v1 + 2));
  *((uint32_t *)v1 + 4) = 0;
  *((uint32_t *)v1 + 2) = v18;
  *((uint32_t *)v1 + 3) = 0;
  return v3;
}


