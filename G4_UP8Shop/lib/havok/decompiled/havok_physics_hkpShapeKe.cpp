#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShapeKe.h"

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::Block::staticClass  (binary VA: 0x180c9c0)
// Original: hkpShapeKeyTable::Block::staticClass
// ----------------------------------------------------------------------------
void * hkpShapeKeyTable::Block::staticClass()
{
  return &hkpShapeKeyTableBlockClass;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::staticClass  (binary VA: 0x180c9e0)
// Original: hkpShapeKeyTable::staticClass
// ----------------------------------------------------------------------------
void * hkpShapeKeyTable::staticClass()
{
  return &hkpShapeKeyTableClass;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::Block::Construct  (binary VA: 0x181ae10)
// Original: hkpShapeKeyTable::Block::Block
// ----------------------------------------------------------------------------
hkpShapeKeyTable::Block::Self * hkpShapeKeyTable::Block::Construct(hkpShapeKeyTable::Block::Self *self)
{
  hkpShapeKeyTable::Block::Self *result;

  result = (hkpShapeKeyTable::Block::Self *)hkString::memSet(self, (void *)0xFFFFFFFF, 0xFCu);
  *((uint32_t *)self + 63) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::Block::Destroy  (binary VA: 0x181ae50)
// Original: hkpShapeKeyTable::Block::~Block
// ----------------------------------------------------------------------------
void hkpShapeKeyTable::Block::Destroy(hkpShapeKeyTable::Block::Self *self)
{
  int v1;
  int address;

  v1 = *((uint32_t *)self + 63);
  if ( v1 != 0 )
  {
    hkpShapeKeyTable::Block::Destroy(*((hkpShapeKeyTable::Block::Self **)self + 63));
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v1,
      256);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::Construct  (binary VA: 0x181aeb0)
// Original: hkpShapeKeyTable::hkpShapeKeyTable
// ----------------------------------------------------------------------------
void hkpShapeKeyTable::Construct(hkpShapeKeyTable::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::Construct  (binary VA: 0x181aed0)
// Original: hkpShapeKeyTable::hkpShapeKeyTable
// ----------------------------------------------------------------------------
void hkpShapeKeyTable::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::clear  (binary VA: 0x181aee0)
// Original: hkpShapeKeyTable::clear
// ----------------------------------------------------------------------------
hkpShapeKeyTable::Self * hkpShapeKeyTable::clear(hkpShapeKeyTable::Self *self)
{
  hkpShapeKeyTable::Self *result;
  int v2;
  int address;
  hkMemoryAllocator::Self *v4;
  int v5;
  hkMemoryAllocator::Self *v6;

  result = self;
  v6 = *(hkMemoryAllocator::Self **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v2 = 0;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v4 = v6;
    do
    {
      v5 = *(uint32_t *)((char *)v4 + v2 + 252);
      if ( v5 != 0 )
      {
        hkpShapeKeyTable::Block::Destroy(*(hkpShapeKeyTable::Block::Self **)((char *)v4 + v2 + 252));
        (*(void (**)(uint32_t, int, int *))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)address + 44),
          v5,
          (int *)(&dword_100));
        v4 = *(hkMemoryAllocator::Self **)self;
      }
      v2 += 256;
    }
    while ( v2 != 0x2000 );
    hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v4);
    result = self;
    *(uint32_t *)self = 0;
  }
  *((uint32_t *)result + 1) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::Destroy  (binary VA: 0x181af90)
// Original: hkpShapeKeyTable::~hkpShapeKeyTable
// ----------------------------------------------------------------------------
void hkpShapeKeyTable::Destroy(hkpShapeKeyTable::Self *self)
{
  hkpShapeKeyTable::clear(self);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::insert  (binary VA: 0x181afc0)
// Original: hkpShapeKeyTable::insert
// ----------------------------------------------------------------------------
int * hkpShapeKeyTable::insert(hkpShapeKeyTable::Self *self, unsigned int a2)
{
  uint32_t *v2;
  hkpShapeKeyTable::Block::Self *v3;
  unsigned int i;
  int v5;
  int *result;
  int v7;
  hkpShapeKeyTable::Block::Self *v8;
  int *v9;
  unsigned int v10;
  int v11;
  hkpShapeKeyTable::Block::Self *v12;
  int v13;
  int address;
  hkpShapeKeyTable::Block::Self *v15;
  int v16;
  int v17;

  v2 = *(uint32_t **)self;
  if ( *(uint32_t *)self == 0 )
  {
    v13 = 0;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v2 = hkMemoryRouter::easyAlloc(
           *(hkMemoryRouter::Self **)(*(uint32_t *)address + 44),
           (hkMemoryAllocator::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_1FF4)->st_info);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
    do
    {
      v15 = (hkpShapeKeyTable::Block::Self *)&v2[v13];
      v13 += 64;
      hkpShapeKeyTable::Block::Construct(v15);
      v2 = *(uint32_t **)self;
    }
    while ( v13 != 2048 );
  }
  v3 = (hkpShapeKeyTable::Block::Self *)&v2[64 * (((uint8_t)(a2 >> 6) ^ (uint8_t)(a2 - 57)) & 0x1F)];
  *((uint32_t *)self + 1) |= 1 << (((a2 >> 6) ^ (a2 - 57)) & 0x1F);
  for ( i = *((uint32_t *)v3 + 62); a2 > i; i = *((uint32_t *)v3 + 62) )
  {
    if ( *((uint32_t *)v3 + 63) != 0 )
    {
      v3 = *((hkpShapeKeyTable::Block::Self **)v3 + 63);
    }
    else
    {
      v7 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v8 = (hkpShapeKeyTable::Block::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v7 + 44) + 8))(
                                        *(uint32_t *)(*(uint32_t *)v7 + 44),
                                        256);
      hkpShapeKeyTable::Block::Construct(v8);
      *((uint32_t *)v3 + 63) = (uint32_t)(uintptr_t)(v8);
      v3 = v8;
    }
  }
  v5 = 0;
  while ( 1 )
  {
    result = *((int **)v3 + v5);
    if ( result == (int *)-1 )
    {
      *((uint32_t *)v3 + v5) = a2;
      return result;
    }
    if ( result == (int *)a2 )
      return result;
    if ( a2 < (unsigned int)(uintptr_t)(result) )
      break;
    if ( ++v5 == 63 )
      goto LABEL_16;
  }
  if ( v5 != 62 )
  {
    v16 = i;
    result = (int *)hkString::memMove(
                      (hkpShapeKeyTable::Block::Self *)((char *)v3 + 4 * v5 + 4),
                      (char *)v3 + 4 * v5,
                      4 * (62 - v5));
    i = v16;
  }
LABEL_16:
  *((uint32_t *)v3 + v5) = a2;
  v9 = *((int **)v3 + 63);
  while ( v9 != nullptr )
  {
    v10 = v9[62];
    v17 = i;
    result = (int *)hkString::memMove((hkString::Self *)(v9 + 1), v9, 0xF8u);
    *v9 = v17;
    if ( v10 == -1 )
      break;
    result = (int *)v9[63];
    if ( result == nullptr )
    {
      v11 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v12 = (hkpShapeKeyTable::Block::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v11 + 44) + 8))(
                                         *(uint32_t *)(*(uint32_t *)v11 + 44),
                                         256);
      hkpShapeKeyTable::Block::Construct(v12);
      v9[63] = (int)(uintptr_t)(v12);
      result = (int *)v12;
    }
    v9 = result;
    i = v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::remove  (binary VA: 0x181b1b0)
// Original: hkpShapeKeyTable::remove
// ----------------------------------------------------------------------------
hkpShapeKeyTable::Self * hkpShapeKeyTable::remove(hkpShapeKeyTable::Self *self, unsigned int a2)
{
  hkpShapeKeyTable::Self *result;
  char *v3;
  unsigned int v4;
  uint32_t *v5;
  uint32_t *v6;
  char *v7;
  uint32_t *v8;
  int v9;
  int address;
  hkpShapeKeyTable::Self *v11;

  result = self;
  if ( *(uint32_t *)self != 0 )
  {
    result = (hkpShapeKeyTable::Self *)((((uint8_t)(a2 >> 6) ^ (uint8_t)(a2 - 57)) & 0x1F) << 8);
    v11 = result;
    v3 = (char *)result + *(uint32_t *)self;
    while ( a2 > *((uint32_t *)v3 + 62) )
    {
      v3 = *((char **)v3 + 63);
      if ( v3 == nullptr )
        return result;
    }
    result = nullptr;
    while ( 1 )
    {
      v4 = *(uint32_t *)&v3[4 * (uint32_t)(uintptr_t)(result)];
      if ( a2 < v4 )
        return result;
      if ( v4 == a2 )
        break;
      result = (hkpShapeKeyTable::Self *)((char *)result + 1);
      if ( result == (hkpShapeKeyTable::Self *)((char *)off_3C + 3) )
        goto LABEL_12;
    }
    if ( (int)(uintptr_t)(result) <= 60 )
      hkString::memMove((hkString::Self *)&v3[4 * (uint32_t)(uintptr_t)(result)], &v3[4 * (uint32_t)(uintptr_t)(result) + 4], 4 * (62 - (uint32_t)(uintptr_t)(result)));
LABEL_12:
    v5 = *((uint32_t **)v3 + 63);
    if ( v5 != nullptr )
    {
      *((uint32_t *)v3 + 62) = *v5;
      while ( 1 )
      {
        hkString::memMove((hkString::Self *)v5, v5 + 1, 0xF8u);
        if ( *v5 == -1 )
          break;
        v6 = (uint32_t *)v5[63];
        if ( v6 == nullptr )
        {
          v5[62] = -1;
          goto LABEL_18;
        }
        v3 = (char *)v5;
        v5[62] = *v6;
        v5 = v6;
      }
      hkpShapeKeyTable::Block::Destroy((hkpShapeKeyTable::Block::Self *)v5);
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v5,
        256);
      *((uint32_t *)v3 + 63) = 0;
      v7 = (char *)v11 + *(uint32_t *)self;
      if ( *(uint32_t *)v7 != -1 )
        goto LABEL_19;
    }
    else
    {
      *((uint32_t *)v3 + 62) = -1;
LABEL_18:
      v7 = (char *)v11 + *(uint32_t *)self;
      if ( *(uint32_t *)v7 != -1 )
        goto LABEL_19;
    }
    *((uint32_t *)self + 1) &= __builtin_rotateleft32(-2, ((a2 >> 6) ^ (a2 - 57)) & 0x1F);
LABEL_19:
    v8 = *((uint32_t **)v7 + 63);
    if ( v8 != nullptr )
    {
      if ( *v8 != -1 )
      {
        while ( 1 )
          ;
      }
      hkpShapeKeyTable::Block::Destroy(*((hkpShapeKeyTable::Block::Self **)v7 + 63));
      v9 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)v9 + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)v9 + 44),
        v8,
        256);
      *((uint32_t *)v7 + 63) = 0;
    }
    result = self;
    if ( *((uint32_t *)self + 1) == 0 )
      return hkpShapeKeyTable::clear(self);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::getDistribution  (binary VA: 0x181b3b0)
// Original: hkpShapeKeyTable::getDistribution
// ----------------------------------------------------------------------------
int hkpShapeKeyTable::getDistribution(hkpShapeKeyTable::Self *self, hkArray<int, hkContainerHeapAllocator::Self> *a2)
{
  hkArray<int, hkContainerHeapAllocator::Self> *v2;
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  typedef hkpShapeKeyTable::Self *_g4_t_v10;
  typedef uint32_t _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);

  v11[3] = (uint32_t)(uintptr_t)(&self);
  v2 = a2;
  v10 = self;
  v3 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
  if ( v3 <= 0x1F )
  {
    v4 = 2 * v3;
    v5 = 32;
    if ( v4 >= 32 )
      v5 = v4;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v11, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)a2, v5, 4);
  }
  v6 = *((uint32_t *)v2 + 1);
  if ( 32 - v6 > 0 )
    memset((void *)(*(uint32_t *)v2 + 4 * v6), 0, 4 * (32 - v6));
  *((uint32_t *)v2 + 1) = 32;
  v7 = 0;
  result = *(uint32_t *)v10;
  if ( *(uint32_t *)v10 != 0 )
  {
    while ( 1 )
    {
      v9 = result + (v7 << 6);
      if ( v9 != 0 )
      {
LABEL_9:
        result = 0;
        while ( *(uint32_t *)(v9 + 4 * result) != -1 )
        {
          ++result;
          ++*(uint32_t *)(*(uint32_t *)v2 + v7);
          if ( result == 63 )
          {
            v9 = *(uint32_t *)(v9 + 252);
            if ( v9 != 0 )
              goto LABEL_9;
            v7 += 4;
            if ( v7 != 128 )
              goto LABEL_13;
            return result;
          }
        }
      }
      v7 += 4;
      if ( v7 == 128 )
        break;
LABEL_13:
      result = *(uint32_t *)v10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeKeyTable::exists  (binary VA: 0x181b4c0)
// Original: hkpShapeKeyTable::exists
// ----------------------------------------------------------------------------
int hkpShapeKeyTable::exists(hkpShapeKeyTable::Self *self, unsigned int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = ((uint8_t)(a2 >> 6) ^ (uint8_t)(a2 - 57)) & 0x1F;
  result = 0;
  if ( ((1 << v2) & *((uint32_t *)self + 1)) != 0 )
  {
    v4 = *(uint32_t *)self + (v2 << 8);
    while ( a2 > *(uint32_t *)(v4 + 248) )
    {
      v4 = *(uint32_t *)(v4 + 252);
      if ( v4 == 0 )
        return 0;
    }
    v5 = 62;
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = (v6 + v5) >> 1;
        if ( a2 >= *(uint32_t *)(v4 + 4 * v7) )
          break;
        v5 = v7 - 1;
        if ( v7 - 1 < v6 )
          return 0;
      }
      if ( a2 == *(uint32_t *)(v4 + 4 * v7) )
        break;
      v6 = v7 + 1;
      if ( v5 < v7 + 1 )
        return 0;
    }
    return 1;
  }
  return result;
}


