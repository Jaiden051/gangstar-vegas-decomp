#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSaveCon.h"

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::EntitySelector::Destroy  (binary VA: 0x1850420)
// Original: hkpSaveContactPointsUtil::EntitySelector::~EntitySelector
// ----------------------------------------------------------------------------
void hkpSaveContactPointsUtil::EntitySelector::Destroy(hkpSaveContactPointsUtil::EntitySelector::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A42C8);
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::EntitySelector::Destroy_ea1850470  (binary VA: 0x1850470)
// Original: hkpSaveContactPointsUtil::EntitySelector::~EntitySelector
// ----------------------------------------------------------------------------
void hkpSaveContactPointsUtil::EntitySelector::Destroy_ea1850470(hkpSaveContactPointsUtil::EntitySelector::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A42C8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::deserialize1nTrack  (binary VA: 0x18505c0)
// Original: hkpSaveContactPointsUtil::deserialize1nTrack
// ----------------------------------------------------------------------------
uint32_t * hkpSaveContactPointsUtil::deserialize1nTrack(uint32_t *a1, uint32_t *a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  typedef int _g4_t_address;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_address)) > _g4_s0 ? (0u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  v4 = a2[1];
  v5 = a4[2] & 0x3FFFFFFF;
  if ( v4 > v5 )
  {
    v6 = 2 * v5;
    if ( v6 < v4 )
      v6 = a2[1];
    hkArrayUtil::reserve((hkArrayUtil::Self *)v16, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a4, v6, 4);
  }
  a4[1] = v4;
  v7 = a2;
  if ( (int)a2[1] > 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v8 = 0;
    do
    {
      v15 = v8;
      v9 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)address + 44),
                       512);
      *v9 = 0;
      *(uint32_t *)(*a4 + 4 * v15) = (uint32_t)(uintptr_t)(v9);
      v8 = v15 + 1;
      std::memcpy(*(void **)(*a4 + 4 * v15), *(const void **)(*a2 + 4 * v15), 512);
    }
    while ( a2[1] > v15 + 1 );
    v7 = a2;
  }
  v10 = 0;
  if ( (int)v7[4] <= 0 )
  {
LABEL_14:
    *a1 = 0;
    return a1;
  }
  else
  {
    while ( 1 )
    {
      v11 = *(uint32_t *)(a2[3] + 4 * v10);
      v12 = (uint32_t *)(*(uint32_t *)(*a4 + 4 * *(uint32_t *)(v11 + 24)) + *(uint32_t *)(v11 + 28) + 16);
      *v12 = 0;
      v12[1] = 0;
      v12[2] = 0x80000000;
      hkpSaveContactPointsUtil::deserialize1nTrack(v16);
      if ( v16[0] == 1 )
        break;
      if ( a2[4] <= ++v10 )
        goto LABEL_14;
    }
    *a1 = 1;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::getSerializedAgentType  (binary VA: 0x1850730)
// Original: hkpSaveContactPointsUtil::getSerializedAgentType
// ----------------------------------------------------------------------------
char hkpSaveContactPointsUtil::getSerializedAgentType(int (*a1)(int a1, int a2, hkpBoxBoxManifold::Self *a3, int a4, int a5))
{
  char result;

  if ( a1 == hkBoxBoxAgent3::process )
    return 1;
  result = 2;
  if ( (char *)a1 != (char *)hkCapsuleTriangleAgent3::process )
  {
    result = 3;
    if ( (char *)a1 != (char *)hkPredGskAgent3::process )
    {
      result = 4;
      if ( (char *)a1 != (char *)hkPredGskCylinderAgent3::process )
      {
        result = 5;
        if ( (char *)a1 != (char *)hkConvexListAgent3::process )
        {
          result = 6;
          if ( (char *)a1 != (char *)hkListAgent3::process )
          {
            result = 7;
            if ( (char *)a1 != (char *)hkBvTreeAgent3::process )
            {
              result = 8;
              if ( (char *)a1 != (char *)hkpCollectionCollectionAgent3::process )
                return 9 * ((char *)a1 == (char *)((int (*)(int **, int, int, int, char *))hkpCollectionAgent3::process));
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::destroyOldEntry  (binary VA: 0x18507c0)
// Original: hkpSaveContactPointsUtil::destroyOldEntry
// ----------------------------------------------------------------------------
uint32_t * hkpSaveContactPointsUtil::destroyOldEntry(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, uint8_t *a6)
{
  uint8_t *v7;
  int v8;

  if ( *a6 == 4 )
  {
    v7 = a6 + 48;
  }
  else
  {
    if ( *a6 != 2 )
    {
LABEL_3:
      *a1 = 1;
      return a1;
    }
    v7 = a6 + 32;
  }
  LOBYTE(v8) = hkpSaveContactPointsUtil::getSerializedAgentType(*(int (**)(int, int, hkpBoxBoxManifold::Self *, int, int))(*a3 + (((uint8_t)a6[1] + 104) << 6) + 8));
  if ( v8 != a2 || a2 == 0 )
    goto LABEL_3;
  (*(void (**)(uint8_t *, uint8_t *, int, int, uint32_t))(*a3 + ((uint8_t)a6[1] << 6) + 6628))(
    a6,
    v7,
    a4,
    a5,
    *a3);
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::serializeEntry  (binary VA: 0x1850880)
// Original: hkpSaveContactPointsUtil::serializeEntry
// ----------------------------------------------------------------------------
uint32_t * hkpSaveContactPointsUtil::serializeEntry(uint32_t *a1, uint8_t *a2, char a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int *a7)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int (*v13)(int, int, hkpBoxBoxManifold::Self *, int, int);

  *a7 = 0;
  switch ( *a2 )
  {
    case 0:
    case 1:
      *a1 = 0;
      *a5 = 16;
      return a1;
    case 2:
    case 3:
    case 0xA:
    case 0xB:
      v12 = (int)(uintptr_t)(&a2[(a3 == 0 ? 0xFFFFFFF0 : 0) + 32]);
      goto LABEL_7;
    case 4:
    case 5:
    case 0xC:
    case 0xD:
      v12 = (int)(uintptr_t)(&a2[(a3 == 0 ? 0xFFFFFFF0 : 0) + 48]);
LABEL_7:
      v13 = *(int (**)(int, int, hkpBoxBoxManifold::Self *, int, int))(*a4 + (((uint8_t)a2[1] + 104) << 6) + 8);
      LOBYTE(v9) = hkpSaveContactPointsUtil::getSerializedAgentType(v13);
      *a6 = v9;
      switch ( v9 )
      {
        case 1:
        case 2:
        case 3:
        case 4:
          LOBYTE(v11) = hkpSaveContactPointsUtil::getSerializedAgentType(v13);
          *a1 = 0;
          *a6 = v11;
          *a5 = (uint8_t)a2[3];
          return a1;
        case 5:
          LOBYTE(v8) = hkpSaveContactPointsUtil::getSerializedAgentType(v13);
          *a6 = v8;
          *a5 = (uint8_t)a2[3];
          if ( (*(uint8_t *)(v12 + 11) & 0x20) != 0 )
            goto LABEL_5;
          *a7 = hkConvexListAgent3::getAgent1nTrack((int)(uintptr_t)(a2), v12);
          hkpSaveContactPointsUtil::serialize1nTrack(a1);
          break;
        case 6:
        case 7:
        case 8:
        case 9:
          *a5 = (uint8_t)a2[3];
          LOBYTE(v10) = hkpSaveContactPointsUtil::getSerializedAgentType(v13);
          *a6 = v10;
          *a7 = v12 + 4;
          hkpSaveContactPointsUtil::serialize1nTrack(a1);
          return a1;
        default:
          goto LABEL_2;
      }
      return a1;
    case 8:
LABEL_5:
      *a1 = 0;
      return a1;
    default:
LABEL_2:
      *a1 = 1;
      return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::serialize1nTrack  (binary VA: 0x1850a40)
// Original: hkpSaveContactPointsUtil::serialize1nTrack
// ----------------------------------------------------------------------------
uint32_t * hkpSaveContactPointsUtil::serialize1nTrack(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  hkpSerializedTrack1nInfo::Self *v10;
  hkpSerializedTrack1nInfo::Self *v11;
  int v12;
  int v13;
  uint32_t *v14;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int *_g4_t_address;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int *_g4_t_v24;
  typedef hkpSerializedTrack1nInfo::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[4];
  typedef uint32_t _g4_t_v28[4];
  typedef uint32_t _g4_t_v29[10];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v17)) > _g4_s1 ? (36u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v18)) > _g4_s2 ? (40u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v19)) > _g4_s3 ? (44u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_address)) > _g4_s4 ? (48u + sizeof(_g4_t_address)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v21)) > _g4_s5 ? (56u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v22)) > _g4_s6 ? (60u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v23)) > _g4_s7 ? (64u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v24)) > _g4_s8 ? (68u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v25)) > _g4_s9 ? (88u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v26)) > _g4_s10 ? (92u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v27)) > _g4_s11 ? (96u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v28)) > _g4_s12 ? (112u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v29)) > _g4_s13 ? (128u + sizeof(_g4_t_v29)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);

  v29[6] = (uint32_t)(uintptr_t)(&a1);
  v18 = a1;
  v19 = a2;
  v23 = a3;
  v24 = a4;
  v4 = a2[1];
  v5 = a4[2] & 0x3FFFFFFF;
  if ( v4 > v5 )
  {
    v6 = 2 * v5;
    if ( v6 < v4 )
      v6 = a2[1];
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v26, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a4, v6, 4);
    v4 = v19[1];
  }
  if ( v4 <= 0 )
  {
LABEL_18:
    *v18 = 0;
    return v18;
  }
  else
  {
    address = (int *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v21 = 0;
    v7 = 0;
    while ( 1 )
    {
      v17 = *(uint32_t **)(*v19 + 4 * v7);
      v8 = (uint8_t *)(v17 + 4);
      v22 = (unsigned int)(uintptr_t)(v17) + *v17 + 16;
      if ( (unsigned int)(uintptr_t)(v17 + 4) < v22 )
        break;
LABEL_15:
      v13 = v24[1];
      if ( v13 == (v24[2] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v24, 4, v16);
        v13 = v24[1];
      }
      v24[1] = v13 + 1;
      v14 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                        *(uint32_t *)(*address + 44),
                        512);
      *v14 = 0;
      ++v21;
      *(uint32_t *)(*v24 + 4 * v7) = (uint32_t)(uintptr_t)(v14);
      std::memcpy(*(void **)(*v24 + 4 * v7), v17, 512);
      v7 = v21;
      if ( v19[1] <= v21 )
        goto LABEL_18;
    }
    while ( 1 )
    {
      v9 = *address;
      v27[0] = 0;
      v29[0] = 0;
      v10 = (hkpSerializedTrack1nInfo::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(v9 + 44) + 8))(
                                          *(uint32_t *)(v9 + 44),
                                          32);
      *(uint32_t *)v10 = 0;
      *((uint32_t *)v10 + 1) = 0;
      *((uint32_t *)v10 + 2) = 0x80000000;
      *((uint32_t *)v10 + 3) = 0;
      *((uint32_t *)v10 + 4) = 0;
      *((uint32_t *)v10 + 5) = 0x80000000;
      *((uint32_t *)v10 + 6) = -1;
      v25 = v10;
      hkpSaveContactPointsUtil::serializeEntry((uint32_t *)(&v26), v8, 0, v23, v29, v28, v27);
      v11 = v25;
      if ( v26 != 0 )
        break;
      if ( *((uint32_t *)v25 + 1) != 0 )
      {
        *((uint32_t *)v25 + 7) = v27[0] - (uint32_t)(uintptr_t)(v17 + 4);
        *((uint32_t *)v25 + 6) = v21;
        v12 = v24[4];
        if ( v12 == (v24[5] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(v24 + 3),
            4,
            v16);
          v12 = v24[4];
          v11 = v25;
        }
        *(uint32_t *)(v24[3] + 4 * v12) = (uint32_t)(uintptr_t)(v11);
        v8 += v29[0];
        ++v24[4];
        if ( v22 <= (unsigned int)(uintptr_t)(v8) )
          goto LABEL_15;
      }
      else
      {
        hkpSerializedTrack1nInfo::Destroy(v25);
        (*(void (**)(uint32_t, hkpSerializedTrack1nInfo::Self *, int))(**(uint32_t **)(*address + 44) + 12))(
          *(uint32_t *)(*address + 44),
          v25,
          32);
        v8 += v29[0];
        if ( v22 <= (unsigned int)(uintptr_t)(v8) )
          goto LABEL_15;
      }
    }
    hkpSerializedTrack1nInfo::Destroy(v25);
    (*(void (**)(uint32_t, hkpSerializedTrack1nInfo::Self *, int))(**(uint32_t **)(*address + 44) + 12))(
      *(uint32_t *)(*address + 44),
      v25,
      32);
    *v18 = 1;
    return v18;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::saveContactPoints  (binary VA: 0x1850d70)
// Original: hkpSaveContactPointsUtil::saveContactPoints
// ----------------------------------------------------------------------------
int hkpSaveContactPointsUtil::saveContactPoints(int a1, int a2, int a3, hkpPhysicsSystemWithContacts::Self *a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int32_t v9; // kr00_4
  int32_t v10;
  int32_t v11; // ett
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int address;
  int v18;
  int v19[7];

  v4 = 0;
  v5 = *(uint32_t *)(*(uint32_t *)a2 + 16);
  if ( *(uint8_t *)(v5 + 24) == 1 )
    v4 = *(char *)(v5 + 16) + v5;
  v18 = *(uint32_t *)(v4 + 8);
  result = a3;
  if ( a3 > 0 )
  {
    v7 = 0;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    do
    {
      v12 = (*(int (**)(uint32_t, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
              *(uint32_t *)(*(uint32_t *)address + 44),
              352,
              v14,
              v15,
              v16);
      *(uint32_t *)(v12 + 4) = -65535;
      *(uint32_t *)v12 = ((uint32_t)(uintptr_t)&off_20A1B48);
      *(uint32_t *)(v12 + 8) = 0;
      *(uint32_t *)(v12 + 12) = 0;
      *(uint32_t *)(v12 + 16) = -1;
      *(uint32_t *)(v12 + 20) = -1;
      *(uint8_t *)(v12 + 24) = 0;
      *(uint16_t *)(v12 + 32) = 29;
      *(uint16_t *)(v12 + 48) = 0;
      *(uint16_t *)(v12 + 50) = 3;
      *(uint32_t *)(v12 + 60) = 0;
      *(uint16_t *)(v12 + 54) = 0;
      *(uint16_t *)(v12 + 56) = 0;
      *(uint16_t *)(v12 + 58) = 0;
      *(uint16_t *)(v12 + 52) = 0;
      *(uint32_t *)(v12 + 64) = 0;
      *(uint32_t *)(v12 + 68) = 0;
      *(uint32_t *)(v12 + 72) = 0;
      *(uint32_t *)(v12 + 76) = 0;
      *(uint32_t *)(v12 + 80) = 0;
      *(uint32_t *)(v12 + 84) = 0;
      *(uint32_t *)(v12 + 88) = 0x80000000;
      *(uint32_t *)(v12 + 92) = 0;
      *(uint32_t *)(v12 + 96) = 0;
      *(uint32_t *)(v12 + 100) = 0x80000000;
      *(uint32_t *)(v12 + 104) = 0;
      *(uint32_t *)(v12 + 108) = 0;
      *(uint32_t *)(v12 + 112) = 0x80000000;
      *(uint32_t *)(v12 + 308) = 0;
      *(uint32_t *)(v12 + 312) = 0;
      *(uint32_t *)(v12 + 316) = 0x80000000;
      *(uint32_t *)(v12 + 320) = 0;
      *(uint32_t *)(v12 + 324) = 0;
      *(uint32_t *)(v12 + 328) = 0x80000000;
      *(uint32_t *)(v12 + 332) = 259;
      *(uint32_t *)(v12 + 336) = 1;
      v16 = v12;
      v15 = *(uint32_t *)(v18 + 112);
      v14 = *(uint32_t *)(a2 + 4 * v7);
      v13 = a1;
      hkpSaveContactPointsUtil::serializeCollisionEntry(v19);
      result = v19[0];
      if ( v19[0] == 0 )
        result = hkpPhysicsSystemWithContacts::addContact(a4, (hkpSerializedAgentNnEntry::Self *)v12);
      if ( *(uint16_t *)(v12 + 6) != 0 )
      {
        do
        {
          v9 = *(uint32_t *)(v12 + 4);
          HIWORD(v8) = HIWORD(v9);
          LOWORD(v8) = 0;
          v10 = v8 | (uint16_t)(v9 - 1);
          v11 = v9;
          result = __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v11, v10);
        }
        while ( v11 != result );
        if ( (uint16_t)v10 == 0 )
          result = G4_VCALL<int>(v12, 16, v13, v14, v15, v12);
      }
      ++v7;
    }
    while ( v7 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::saveContactPoints  (binary VA: 0x18513b0)
// Original: hkpSaveContactPointsUtil::saveContactPoints
// ----------------------------------------------------------------------------
int hkpSaveContactPointsUtil::saveContactPoints(int a1, uint32_t *a2, hkpPhysicsSystemWithContacts::Self *a3)
{
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int result;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int32_t v25; // kr00_4
  int32_t v26;
  int32_t v27; // ett
  int v28;
  int v29;
  int i;
  int j;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_k;
  typedef int _g4_t_v37;
  typedef uint16_t *_g4_t_v38;
  typedef hkpPhysicsSystemWithContacts::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef signed int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef int _g4_t_address;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t _g4_t_v56[4];
  typedef unsigned int _g4_t_v57;
  typedef signed int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int *_g4_t_v60;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v32)) > _g4_s0 ? (8u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v33)) > _g4_s1 ? (12u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v34)) > _g4_s2 ? (16u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v35)) > _g4_s3 ? (20u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_k)) > _g4_s4 ? (36u + sizeof(_g4_t_k)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v37)) > _g4_s5 ? (40u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v38)) > _g4_s6 ? (44u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v39)) > _g4_s7 ? (48u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v40)) > _g4_s8 ? (52u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v41)) > _g4_s9 ? (56u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v42)) > _g4_s10 ? (60u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v43)) > _g4_s11 ? (64u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v44)) > _g4_s12 ? (64u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v45)) > _g4_s13 ? (68u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v46)) > _g4_s14 ? (68u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_address)) > _g4_s15 ? (68u + sizeof(_g4_t_address)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v48)) > _g4_s16 ? (72u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v49)) > _g4_s17 ? (72u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v50)) > _g4_s18 ? (72u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v51)) > _g4_s19 ? (72u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v52)) > _g4_s20 ? (72u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v53)) > _g4_s21 ? (76u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v54)) > _g4_s22 ? (76u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v55)) > _g4_s23 ? (80u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v56)) > _g4_s24 ? (84u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v57)) > _g4_s25 ? (100u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v58)) > _g4_s26 ? (104u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v59)) > _g4_s27 ? (108u + sizeof(_g4_t_v59)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v60)) > _g4_s28 ? (124u + sizeof(_g4_t_v60)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 80u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 84u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 100u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 104u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 108u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 124u);

  v60 = &a1;
  v41 = a1;
  v42 = a2;
  v39 = a3;
  v57 = 0;
  v58 = 0;
  v59 = 0x80000000;
  v3 = a2[11];
  if ( v3 <= 0 )
  {
    v58 = a2[11];
    v49 = 0;
    v12 = 0;
  }
  else
  {
    v56[0] = 4 * v3;
    v4 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           v56);
    v57 = v4;
    v5 = v56[0] + 3;
    v6 = v42[11];
    if ( v56[0] >= 0 )
      v5 = v56[0];
    v7 = v5 >> 2;
    v8 = v42[10];
    v59 = v7;
    v58 = v6;
    v53 = v8;
    if ( (int)v6 > 0 )
    {
      if ( (v4 >= v8 + 16 || v8 >= v4 + 16) && v6 > 0xB )
      {
        v43 = v6;
        v48 = 0;
        v9 = 4 * (v6 >> 2);
        v10 = 0;
        v11 = v6 >> 2;
        do
        {
          ++v48;
          *(__m128i *)(v4 + v10) = *(__m128i *)(v53 + v10);
          v10 += 16;
        }
        while ( v48 < v11 );
        if ( v9 != v43 )
        {
          *(uint32_t *)(v4 + 4 * v9) = *(uint32_t *)(v53 + 4 * v9);
          if ( v43 > v9 + 1 )
          {
            *(uint32_t *)(v4 + 4 * (v9 + 1)) = *(uint32_t *)(v53 + 4 * (v9 + 1));
            if ( v43 > v9 + 2 )
              *(uint32_t *)(v4 + 4 * (v9 + 2)) = *(uint32_t *)(v53 + 4 * (v9 + 2));
          }
        }
      }
      else
      {
        for ( i = 0; i != v6; ++i )
          *(uint32_t *)(v4 + 4 * i) = *(uint32_t *)(v8 + 4 * i);
      }
      v12 = v59 & 0x3FFFFFFF;
      v13 = v42[14];
      v14 = v42[13];
      v45 = v58;
      v44 = v13 + v58;
      v54 = v13 + v58;
      if ( (int)(v13 + v58) <= (v59 & 0x3FFFFFFF) )
        goto LABEL_52;
      goto LABEL_49;
    }
    v49 = v4;
    v12 = v7 & 0x3FFFFFFF;
    v3 = v6;
  }
  v45 = v3;
  v13 = v42[14];
  v14 = v42[13];
  v54 = v3 + v13;
  if ( (int)(v3 + v13) <= v12 )
  {
    v44 = v3 + v42[14];
    v15 = v3;
    v16 = v49;
    goto LABEL_18;
  }
  v44 = v3 + v42[14];
LABEL_49:
  v29 = 2 * v12;
  if ( 2 * v12 < v54 )
    v29 = v54;
  hkArrayUtil::reserve(
    (hkArrayUtil::Self *)&v55,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (int *)&v57,
    v29,
    4);
LABEL_52:
  v15 = v45;
  v16 = v57;
LABEL_18:
  v50 = 4 * v15;
  hkMemUtil::memMove((hkMemUtil::Self *)(v16 + 4 * v44), (char *)(4 * v15 + v16), 0);
  v17 = v57 + v50;
  if ( (int)v13 > 0 )
  {
    if ( (v17 >= v14 + 16 || v14 >= v17 + 16) && v13 > 0xB )
    {
      v46 = 0;
      v51 = 4 * (v13 >> 2);
      v18 = 0;
      do
      {
        ++v46;
        *(__m128i *)(v17 + v18) = *(__m128i *)(v14 + v18);
        v18 += 16;
      }
      while ( v46 < v13 >> 2 );
      if ( v13 != v51 )
      {
        *(uint32_t *)(v17 + 16 * (v13 >> 2)) = *(uint32_t *)(v14 + 16 * (v13 >> 2));
        if ( v51 + 1 < (int)v13 )
        {
          *(uint32_t *)(v17 + 4 * (v51 + 1)) = *(uint32_t *)(v14 + 4 * (v51 + 1));
          if ( v51 + 2 < (int)v13 )
            *(uint32_t *)(v17 + 4 * (v51 + 2)) = *(uint32_t *)(v14 + 4 * (v51 + 2));
        }
      }
    }
    else
    {
      for ( j = 0; j != v13; ++j )
        *(uint32_t *)(v17 + 4 * j) = *(uint32_t *)(v14 + 4 * j);
    }
  }
  result = v54;
  v58 = v54;
  for ( k = 0; v58 > k; result = k )
  {
    v37 = 0;
    v20 = *(uint32_t *)(v57 + 4 * k);
    v56[1] = v20 + 92;
    v56[0] = v20 + 112;
    do
    {
      v40 = 0;
      v38 = (uint16_t *)v56[v37];
      v21 = *((uint32_t *)v38 + 2);
      while ( v40 < v21 )
      {
        while ( 1 )
        {
          v22 = v40++;
          v23 = *(uint32_t *)(*((uint32_t *)v38 + 1) + 4 * v22);
          v52 = v23 + 512;
          if ( v40 == v21 )
            v52 = *v38 + v23;
          if ( v52 <= v23 )
            break;
          address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          do
          {
            v28 = (*(int (**)(uint32_t, int, unsigned int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                    *(uint32_t *)(*(uint32_t *)address + 44),
                    352,
                    v33,
                    v34,
                    v35);
            *(uint32_t *)(v28 + 4) = -65535;
            *(uint32_t *)v28 = ((uint32_t)(uintptr_t)&off_20A1B48);
            *(uint32_t *)(v28 + 8) = 0;
            *(uint32_t *)(v28 + 12) = 0;
            *(uint32_t *)(v28 + 16) = -1;
            *(uint32_t *)(v28 + 20) = -1;
            *(uint8_t *)(v28 + 24) = 0;
            *(uint16_t *)(v28 + 32) = 29;
            *(uint16_t *)(v28 + 48) = 0;
            *(uint16_t *)(v28 + 50) = 3;
            *(uint32_t *)(v28 + 60) = 0;
            *(uint16_t *)(v28 + 54) = 0;
            *(uint16_t *)(v28 + 56) = 0;
            *(uint16_t *)(v28 + 58) = 0;
            *(uint16_t *)(v28 + 52) = 0;
            *(uint32_t *)(v28 + 64) = 0;
            *(uint32_t *)(v28 + 68) = 0;
            *(uint32_t *)(v28 + 72) = 0;
            *(uint32_t *)(v28 + 76) = 0;
            *(uint32_t *)(v28 + 80) = 0;
            *(uint32_t *)(v28 + 84) = 0;
            *(uint32_t *)(v28 + 88) = 0x80000000;
            *(uint32_t *)(v28 + 92) = 0;
            *(uint32_t *)(v28 + 96) = 0;
            *(uint32_t *)(v28 + 100) = 0x80000000;
            *(uint32_t *)(v28 + 104) = 0;
            *(uint32_t *)(v28 + 108) = 0;
            *(uint32_t *)(v28 + 112) = 0x80000000;
            *(uint32_t *)(v28 + 308) = 0;
            *(uint32_t *)(v28 + 312) = 0;
            *(uint32_t *)(v28 + 316) = 0x80000000;
            *(uint32_t *)(v28 + 320) = 0;
            *(uint32_t *)(v28 + 324) = 0;
            *(uint32_t *)(v28 + 328) = 0x80000000;
            *(uint32_t *)(v28 + 332) = 259;
            *(uint32_t *)(v28 + 336) = 1;
            v35 = v28;
            v33 = v23;
            v34 = v42[28];
            v32 = v41;
            hkpSaveContactPointsUtil::serializeCollisionEntry(&v55);
            if ( v55 == 0 )
              hkpPhysicsSystemWithContacts::addContact(v39, (hkpSerializedAgentNnEntry::Self *)v28);
            if ( *(uint16_t *)(v28 + 6) != 0 )
            {
              do
              {
                v25 = *(uint32_t *)(v28 + 4);
                HIWORD(v24) = HIWORD(v25);
                LOWORD(v24) = 0;
                v26 = v24 | (uint16_t)(v25 - 1);
                v27 = v25;
              }
              while ( v27 != __sync_val_compare_and_swap((volatile int32_t *)(v28 + 4), v27, v26) );
              if ( (uint16_t)v26 == 0 )
                G4_VCALL<void>(v28, 16, v32, v23, v34, v28);
            }
            v23 += *(uint8_t *)(v23 + 3);
          }
          while ( v52 > v23 );
          v21 = *((uint32_t *)v38 + 2);
          if ( v40 >= v21 )
            goto LABEL_43;
        }
      }
LABEL_43:
      ++v37;
    }
    while ( v37 != 2 );
    ++k;
  }
  v58 = 0;
  if ( v59 >= 0 )
    return (*(int (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v57,
             4 * v59);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::saveContactPoints  (binary VA: 0x1851950)
// Original: hkpSaveContactPointsUtil::saveContactPoints
// ----------------------------------------------------------------------------
void hkpSaveContactPointsUtil::saveContactPoints(int a1, uint32_t *a2, int a3, hkpPhysicsSystemWithContacts::Self *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  signed int Key;
  int v10;
  int address;
  int v12;
  int v13;
  int32_t v14; // kr00_4
  int32_t v15;
  int32_t v16; // ett
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef hkpPhysicsSystemWithContacts::Self *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t _g4_t_v32[2];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int *_g4_t_v37;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v19)) > _g4_s2 ? (4u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v20)) > _g4_s3 ? (8u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v21)) > _g4_s4 ? (12u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v23)) > _g4_s6 ? (24u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v24)) > _g4_s7 ? (28u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v25)) > _g4_s8 ? (36u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v26)) > _g4_s9 ? (40u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v27)) > _g4_s10 ? (44u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v28)) > _g4_s11 ? (52u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v29)) > _g4_s12 ? (52u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v30)) > _g4_s13 ? (52u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v31)) > _g4_s14 ? (56u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v32)) > _g4_s15 ? (60u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v33)) > _g4_s16 ? (68u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v34)) > _g4_s17 ? (76u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v35)) > _g4_s18 ? (80u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v36)) > _g4_s19 ? (84u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v37)) > _g4_s20 ? (100u + sizeof(_g4_t_v37)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 100u);

  v37 = &a1;
  v25 = a1;
  v23 = a2;
  v24 = a3;
  v22 = a4;
  v4 = *a2;
  v32[0] = 0;
  v32[1] = 0;
  v5 = *(uint32_t *)(v4 + 8);
  v33 = -1;
  v27 = v5;
  if ( a3 != 0 )
  {
    v6 = a3;
    hkMapBase_unsigned_long_unsigned_l_393416::reserve(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v32,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      a3);
    if ( v6 > 0 )
    {
      v26 = 0;
      do
      {
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v32,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v23[v26] + 16,
          0);
        v34 = 0;
        v28 = v23[v26];
        v35 = 0;
        v36 = 0x80000000;
        hkpLinkedCollidable::getCollisionEntriesSorted(v28 + 16, (int)(uintptr_t)(&v34), v18);
        v7 = 0;
        if ( v35 > 0 )
        {
          do
          {
            while ( 1 )
            {
              v29 = v7;
              v8 = (int *)(v34 + 8 * v7);
              Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
                      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v32,
                      v8[1]);
              v10 = v29;
              if ( Key > v33 )
              {
                address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
                v12 = (*(int (**)(uint32_t, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)address + 44),
                        352,
                        v19,
                        v20,
                        v21);
                *(uint32_t *)(v12 + 4) = -65535;
                *(uint32_t *)v12 = ((uint32_t)(uintptr_t)&off_20A1B48);
                *(uint32_t *)(v12 + 8) = 0;
                *(uint32_t *)(v12 + 12) = 0;
                *(uint32_t *)(v12 + 16) = -1;
                *(uint32_t *)(v12 + 20) = -1;
                *(uint8_t *)(v12 + 24) = 0;
                *(uint16_t *)(v12 + 32) = 29;
                *(uint16_t *)(v12 + 48) = 0;
                *(uint16_t *)(v12 + 50) = 3;
                *(uint32_t *)(v12 + 60) = 0;
                *(uint16_t *)(v12 + 54) = 0;
                *(uint16_t *)(v12 + 56) = 0;
                *(uint16_t *)(v12 + 58) = 0;
                *(uint16_t *)(v12 + 52) = 0;
                *(uint32_t *)(v12 + 64) = 0;
                *(uint32_t *)(v12 + 68) = 0;
                *(uint32_t *)(v12 + 72) = 0;
                *(uint32_t *)(v12 + 76) = 0;
                *(uint32_t *)(v12 + 80) = 0;
                *(uint32_t *)(v12 + 84) = 0;
                *(uint32_t *)(v12 + 88) = 0x80000000;
                *(uint32_t *)(v12 + 92) = 0;
                *(uint32_t *)(v12 + 96) = 0;
                *(uint32_t *)(v12 + 100) = 0x80000000;
                *(uint32_t *)(v12 + 104) = 0;
                *(uint32_t *)(v12 + 108) = 0;
                *(uint32_t *)(v12 + 112) = 0x80000000;
                *(uint32_t *)(v12 + 308) = 0;
                *(uint32_t *)(v12 + 312) = 0;
                *(uint32_t *)(v12 + 316) = 0x80000000;
                *(uint32_t *)(v12 + 320) = 0;
                *(uint32_t *)(v12 + 324) = 0;
                *(uint32_t *)(v12 + 328) = 0x80000000;
                *(uint32_t *)(v12 + 332) = 259;
                *(uint32_t *)(v12 + 336) = 1;
                v21 = v12;
                v20 = *(uint32_t *)(v27 + 112);
                v19 = *v8;
                v17 = v25;
                hkpSaveContactPointsUtil::serializeCollisionEntry(&v31);
                v10 = v29;
                if ( v31 == 0 )
                {
                  hkpPhysicsSystemWithContacts::addContact(v22, (hkpSerializedAgentNnEntry::Self *)v12);
                  v10 = v29;
                }
                if ( *(uint16_t *)(v12 + 6) != 0 )
                {
                  v30 = v10;
                  do
                  {
                    v14 = *(uint32_t *)(v12 + 4);
                    HIWORD(v13) = HIWORD(v14);
                    LOWORD(v13) = 0;
                    v15 = v13 | (uint16_t)(v14 - 1);
                    v16 = v14;
                  }
                  while ( v16 != __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v16, v15) );
                  v10 = v30;
                  if ( (uint16_t)v15 == 0 )
                    break;
                }
              }
              v7 = v10 + 1;
              if ( v35 <= v7 )
                goto LABEL_16;
            }
            (*(void (**)(int, int, int, int, int, int))(*(uint32_t *)v12 + 16))(v30, v12, v17, v19, v20, v12);
            v7 = v30 + 1;
          }
          while ( v35 > v30 + 1 );
        }
LABEL_16:
        v35 = 0;
        if ( v36 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v34,
            8 * v36);
        ++v26;
      }
      while ( v26 != v24 );
    }
  }
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v32,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::deserializeEntry  (binary VA: 0x1851cc0)
// Original: hkpSaveContactPointsUtil::deserializeEntry
// ----------------------------------------------------------------------------
uint32_t * hkpSaveContactPointsUtil::deserializeEntry(uint32_t *a1, uint8_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint8_t *a6)
{
  int v7;
  int *Agent1nTrack;
  int v9;

  if ( *a6 == 4 )
  {
    v9 = (int)(uintptr_t)(a6 + 48);
  }
  else
  {
    if ( *a6 != 2 )
    {
LABEL_3:
      *a1 = 1;
      return a1;
    }
    v9 = (int)(uintptr_t)(a6 + 32);
  }
  LOBYTE(v7) = hkpSaveContactPointsUtil::getSerializedAgentType(*(int (**)(int, int, hkpBoxBoxManifold::Self *, int, int))(*a5 + (((uint8_t)a6[1] + 104) << 6) + 8));
  if ( v7 != a3 )
    goto LABEL_3;
  switch ( a3 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      hkString::memCpy((hkString::Self *)(a6 + 24), a2 + 140, ((uint8_t)a6[14] << 6) - 24);
      *a1 = 0;
      a6[2] = a2[118];
      a6[3] = a2[119];
      break;
    case 5:
      hkString::memCpy((hkString::Self *)(a6 + 24), a2 + 140, ((uint8_t)a6[14] << 6) - 24);
      a6[2] = a2[118];
      a6[3] = a2[119];
      if ( (*(uint8_t *)(v9 + 11) & 0x20) != 0 )
      {
        *a1 = 0;
      }
      else
      {
        Agent1nTrack = (int *)hkConvexListAgent3::getAgent1nTrack((int)(uintptr_t)(a6), v9);
        *Agent1nTrack = 0;
        Agent1nTrack[1] = 0;
        Agent1nTrack[2] = 0x80000000;
        hkpSaveContactPointsUtil::deserialize1nTrack(a1, a4, (int)(uintptr_t)(a5), Agent1nTrack);
      }
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      hkString::memCpy((hkString::Self *)(a6 + 24), a2 + 140, ((uint8_t)a6[14] << 6) - 24);
      *(uint32_t *)(v9 + 4) = 0;
      *(uint32_t *)(v9 + 8) = 0;
      *(uint32_t *)(v9 + 12) = 0x80000000;
      hkpSaveContactPointsUtil::deserialize1nTrack(a1, a4, (int)(uintptr_t)(a5), (int *)(v9 + 4));
      break;
    default:
      goto LABEL_3;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::deserializeCollisionEntry  (binary VA: 0x1851e70)
// Original: hkpSaveContactPointsUtil::deserializeCollisionEntry
// ----------------------------------------------------------------------------
uint32_t * hkpSaveContactPointsUtil::deserializeCollisionEntry(uint32_t *a1, uint8_t *a2, int a3, int a4, int a5, uint32_t *a6, unsigned int a7)
{
  int v7;
  int v8;
  int IslandFromAgentEntry;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;
  int v19;
  int v20;
  uint16_t v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  uint32_t *v27;
  uint16_t *v28;
  int16_t v29;
  int v30;
  int address;
  int Atom;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  uint16_t *v38;
  int16_t v39;
  int v40;
  int v41;
  uint8_t v42;
  int v43;
  int v44;
  int16_t v45;
  uint16_t v46;
  int v47;
  int v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int16_t _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint16_t _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int16_t _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint8_t *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef int _g4_t_i;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint32_t *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint32_t _g4_t_v85[12];
  typedef uint16_t _g4_t_v86;
  typedef int16_t _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef char _g4_t_v95;
  typedef char _g4_t_v96;
  typedef char _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef uint32_t *_g4_t_v106;
  typedef int *_g4_t_v107;
  enum : size_t {
    _g4_s0 = 12672u,
    _g4_s1 = (8u + sizeof(_g4_t_v49)) > _g4_s0 ? (8u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v50)) > _g4_s1 ? (8u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v51)) > _g4_s2 ? (12u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v52)) > _g4_s3 ? (12u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v53)) > _g4_s4 ? (12u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v54)) > _g4_s5 ? (16u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v55)) > _g4_s6 ? (16u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v56)) > _g4_s7 ? (20u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v57)) > _g4_s8 ? (20u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v58)) > _g4_s9 ? (20u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v59)) > _g4_s10 ? (20u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v60)) > _g4_s11 ? (24u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v61)) > _g4_s12 ? (24u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v62)) > _g4_s13 ? (24u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v63)) > _g4_s14 ? (24u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v64)) > _g4_s15 ? (24u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v65)) > _g4_s16 ? (24u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v66)) > _g4_s17 ? (28u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v67)) > _g4_s18 ? (32u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v68)) > _g4_s19 ? (32u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v69)) > _g4_s20 ? (36u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v70)) > _g4_s21 ? (36u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v71)) > _g4_s22 ? (36u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v72)) > _g4_s23 ? (36u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v73)) > _g4_s24 ? (36u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_i)) > _g4_s25 ? (36u + sizeof(_g4_t_i)) : _g4_s25,
    _g4_s27 = (36u + sizeof(_g4_t_v75)) > _g4_s26 ? (36u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v76)) > _g4_s27 ? (36u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v77)) > _g4_s28 ? (40u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v78)) > _g4_s29 ? (44u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v79)) > _g4_s30 ? (48u + sizeof(_g4_t_v79)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v80)) > _g4_s31 ? (52u + sizeof(_g4_t_v80)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v81)) > _g4_s32 ? (56u + sizeof(_g4_t_v81)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v82)) > _g4_s33 ? (60u + sizeof(_g4_t_v82)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_v83)) > _g4_s34 ? (64u + sizeof(_g4_t_v83)) : _g4_s34,
    _g4_s36 = (68u + sizeof(_g4_t_v84)) > _g4_s35 ? (68u + sizeof(_g4_t_v84)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v85)) > _g4_s36 ? (76u + sizeof(_g4_t_v85)) : _g4_s36,
    _g4_s38 = (124u + sizeof(_g4_t_v86)) > _g4_s37 ? (124u + sizeof(_g4_t_v86)) : _g4_s37,
    _g4_s39 = (126u + sizeof(_g4_t_v87)) > _g4_s38 ? (126u + sizeof(_g4_t_v87)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v88)) > _g4_s39 ? (140u + sizeof(_g4_t_v88)) : _g4_s39,
    _g4_s41 = (144u + sizeof(_g4_t_v89)) > _g4_s40 ? (144u + sizeof(_g4_t_v89)) : _g4_s40,
    _g4_s42 = (148u + sizeof(_g4_t_v90)) > _g4_s41 ? (148u + sizeof(_g4_t_v90)) : _g4_s41,
    _g4_s43 = (152u + sizeof(_g4_t_v91)) > _g4_s42 ? (152u + sizeof(_g4_t_v91)) : _g4_s42,
    _g4_s44 = (156u + sizeof(_g4_t_v92)) > _g4_s43 ? (156u + sizeof(_g4_t_v92)) : _g4_s43,
    _g4_s45 = (160u + sizeof(_g4_t_v93)) > _g4_s44 ? (160u + sizeof(_g4_t_v93)) : _g4_s44,
    _g4_s46 = (164u + sizeof(_g4_t_v94)) > _g4_s45 ? (164u + sizeof(_g4_t_v94)) : _g4_s45,
    _g4_s47 = (168u + sizeof(_g4_t_v95)) > _g4_s46 ? (168u + sizeof(_g4_t_v95)) : _g4_s46,
    _g4_s48 = (169u + sizeof(_g4_t_v96)) > _g4_s47 ? (169u + sizeof(_g4_t_v96)) : _g4_s47,
    _g4_s49 = (170u + sizeof(_g4_t_v97)) > _g4_s48 ? (170u + sizeof(_g4_t_v97)) : _g4_s48,
    _g4_s50 = (172u + sizeof(_g4_t_v98)) > _g4_s49 ? (172u + sizeof(_g4_t_v98)) : _g4_s49,
    _g4_s51 = (176u + sizeof(_g4_t_v99)) > _g4_s50 ? (176u + sizeof(_g4_t_v99)) : _g4_s50,
    _g4_s52 = (184u + sizeof(_g4_t_v101)) > _g4_s51 ? (184u + sizeof(_g4_t_v101)) : _g4_s51,
    _g4_s53 = (188u + sizeof(_g4_t_v102)) > _g4_s52 ? (188u + sizeof(_g4_t_v102)) : _g4_s52,
    _g4_s54 = (12476u + sizeof(_g4_t_v103)) > _g4_s53 ? (12476u + sizeof(_g4_t_v103)) : _g4_s53,
    _g4_s55 = (12508u + sizeof(_g4_t_v104)) > _g4_s54 ? (12508u + sizeof(_g4_t_v104)) : _g4_s54,
    _g4_s56 = (12512u + sizeof(_g4_t_v105)) > _g4_s55 ? (12512u + sizeof(_g4_t_v105)) : _g4_s55,
    _g4_s57 = (12580u + sizeof(_g4_t_v106)) > _g4_s56 ? (12580u + sizeof(_g4_t_v106)) : _g4_s56,
    _g4_s58 = (12584u + sizeof(_g4_t_v107)) > _g4_s57 ? (12584u + sizeof(_g4_t_v107)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 20u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 36u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 36u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 36u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 36u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 40u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 56u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 60u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 64u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 68u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 76u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 124u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 126u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 140u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 144u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 148u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 152u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 156u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 160u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 164u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 168u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 169u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 170u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 172u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 176u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 184u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 188u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 12476u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 12508u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 12512u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 12580u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 12584u);

  v106 = (uint32_t *)(&a1);
  v80 = a1;
  v67 = a2;
  v78 = a5;
  v77 = a6;
  v7 = a3;
  v66 = a4;
  v8 = *(uint32_t *)(a5 + 200);
  IslandFromAgentEntry = *(uint32_t *)(a4 + 200);
  v79 = a7;
  v10 = *(int **)(a7 + 8);
  if ( IslandFromAgentEntry != v8 )
  {
    if ( *(uint8_t *)(a4 + 232) == 5 )
    {
      IslandFromAgentEntry = *(uint32_t *)(a5 + 200);
    }
    else if ( *(uint8_t *)(a5 + 232) != 5 )
    {
      IslandFromAgentEntry = hkpWorldAgentUtil::getIslandFromAgentEntry(a7, IslandFromAgentEntry, v8);
    }
  }
  hkpSaveContactPointsUtil::destroyOldEntry((uint32_t *)(&v81), *(char *)(v7 + 25), v77, (int)(uintptr_t)(v10), IslandFromAgentEntry, (uint8_t *)v79);
  if ( v81 == 0 )
  {
    v11 = *(uint32_t *)(v79 + 16);
    if ( *(uint8_t *)(v11 + 24) != 1 || v66 != v11 + *(char *)(v11 + 16) )
    {
      v12 = *(uint32_t *)(v79 + 20);
      *(uint32_t *)(v79 + 20) = v11;
      *(uint32_t *)(v79 + 16) = v12;
      LOWORD(v12) = *(uint16_t *)(v79 + 6);
      *(uint16_t *)(v79 + 6) = *(uint16_t *)(v79 + 4);
      *(uint16_t *)(v79 + 4) = v12;
      v13 = v10[23];
      v10[23] = v10[22];
      v14 = v10[29];
      v10[22] = v13;
      if ( v14 != 0 )
      {
        v15 = *(uint32_t *)(v14 + 4);
        *(uint32_t *)(v14 + 4) = *(uint32_t *)(v14 + 8);
        *(uint32_t *)(v14 + 8) = v15;
        *(uint8_t *)(v10[29] + 26) = *(uint8_t *)(v10[29] + 26) == 0;
      }
    }
    hkpSaveContactPointsUtil::deserializeEntry(
      (uint32_t *)(&v81),
      (uint8_t *)v7,
      *(char *)(v7 + 25),
      (uint32_t *)(v7 + 308),
      v77,
      (uint8_t *)v79);
    if ( v81 == 0 )
    {
      v17 = *(uint32_t *)(v7 + 108);
      v18 = v10[10] & 0x3FFFFFFF;
      if ( v17 > v18 )
      {
        v19 = 2 * v18;
        v60 = *(uint32_t *)(v7 + 108);
        if ( v17 >= v19 )
          v19 = *(uint32_t *)(v7 + 108);
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v81,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v10 + 8,
          v19,
          1);
        v10[9] = v60;
        goto LABEL_16;
      }
      v10[9] = v17;
      if ( v17 > 0 )
      {
LABEL_16:
        v20 = 0;
        do
        {
          *(uint8_t *)(v10[8] + v20) = *(uint8_t *)(*(uint32_t *)(v7 + 104) + v20);
          ++v20;
        }
        while ( v10[9] > v20 );
      }
      v56 = v10[15];
      v21 = *(uint16_t *)(v56 + 4);
      if ( v21 == 0 )
      {
        v22 = 0;
        v23 = *(uint32_t *)(v79 + 16);
        if ( *(uint8_t *)(v23 + 24) == 1 )
          v22 = *(char *)(v23 + 16) + v23;
        v69 = *(uint32_t *)(v22 + 8);
        *(uint8_t *)(v69 + 148) = 1;
        --*(uint32_t *)(v69 + 140);
        hkpWorldOperationUtil::addConstraintImmediately((hkpWorldCallbackUtil::Self *)v69, (hkpWorld::Self *)(v10 + 17), 1);
        ++*(uint32_t *)(v69 + 140);
        *(uint8_t *)(v69 + 148) = 0;
        v56 = v10[15];
        v21 = *(uint16_t *)(v56 + 4);
      }
      v24 = v21;
      v25 = 112 * ((int)v21 >> 1) + 48 * (v21 & 1) + 16;
      v70 = v24 + 3;
      v61 = v25 + 144;
      v26 = v24 + 4;
      if ( v24 <= 1 )
      {
        v26 = v24 + 3;
        v61 = v25 + 112;
        v70 = v24 + 2;
      }
      if ( COERCE_FLOAT(*(int16_t *)(v56 + 20) << 16) != 0.0 )
      {
        v61 += 80;
        v70 += 2;
        v26 += 3;
      }
      v27 = *(uint32_t **)(*(uint32_t *)(v10[29] + 4 * *(uint8_t *)(v10[29] + 26) + 4) + 200);
      v27[5] -= v26;
      v27[3] -= v61;
      v27[4] -= v70;
      v28 = (uint16_t *)v10[29];
      v57 = v28[12] - v26;
      v28[11] -= v70;
      v29 = v28[10] - v61;
      v28[12] = v57;
      v28[10] = v29;
      v62 = v10[15];
      LOBYTE(v30) = atomSizeRoundUp(*(uint16_t *)(v62 + 2));
      v71 = v30;
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v62,
        v71);
      LOWORD(v71) = *(uint16_t *)(v7 + 36);
      v54 = (uint16_t)v71;
      Atom = hkpSimpleContactConstraintAtomUtil::allocateAtom(
               (hkpSimpleContactConstraintAtomUtil::Self *)(uint16_t)v71,
               *(uint8_t *)(v7 + 40),
               *(uint8_t *)(v7 + 41),
               *(uint16_t *)(v7 + 44));
      v10[15] = Atom;
      *(uint16_t *)(Atom + 4) = v71;
      v33 = v10[15];
      *(uint16_t *)(v33 + 16) = *(uint16_t *)(v7 + 48);
      *(uint16_t *)(v33 + 18) = *(uint16_t *)(v7 + 50);
      *(uint16_t *)(v33 + 20) = *(uint16_t *)(v7 + 52);
      *(uint16_t *)(v33 + 22) = *(uint16_t *)(v7 + 54);
      *(uint16_t *)(v33 + 24) = *(uint16_t *)(v7 + 56);
      *(uint16_t *)(v33 + 26) = *(uint16_t *)(v7 + 58);
      *(uint32_t *)(v33 + 28) = *(uint32_t *)(v7 + 60);
      *(uint32_t *)(v33 + 32) = *(uint32_t *)(v7 + 64);
      *(uint32_t *)(v33 + 36) = *(uint32_t *)(v7 + 68);
      *(uint32_t *)(v33 + 40) = *(uint32_t *)(v7 + 72);
      *(uint32_t *)(v33 + 44) = *(uint32_t *)(v7 + 76);
      v34 = v10[15];
      v10[16] = *(uint16_t *)(v7 + 34);
      *(uint32_t *)(v10[29] + 12) = v34;
      *(uint16_t *)(v10[29] + 16) = *(uint16_t *)(v10[15] + 2);
      v49 = v10[15];
      LOWORD(v34) = *(uint16_t *)(v49 + 4);
      v72 = (uint16_t)v34;
      v58 = (uint16_t)v34 + 3;
      v35 = 48 * (v34 & 1) + 112 * ((int)(uint16_t)v34 >> 1) + 16;
      v36 = (uint16_t)v34 + 4;
      v37 = 48 * (v34 & 1) + 112 * ((int)(uint16_t)v34 >> 1) + 160;
      v51 = v36;
      v63 = v37;
      if ( v72 <= 1 )
      {
        v63 = v35 + 112;
        v51 = v58;
        v58 = v72 + 2;
      }
      if ( COERCE_FLOAT(*(int16_t *)(v49 + 20) << 16) != 0.0 )
      {
        v63 += 80;
        v37 = v35 + 224;
        v58 += 2;
        v51 += 3;
      }
      v73 = *(uint32_t **)(*(uint32_t *)(v10[29] + 4 * *(uint8_t *)(v10[29] + 26) + 4) + 200);
      if ( v63 >= v37 )
        v37 = v63;
      if ( v37 < *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v10[29] + 4 * *(uint8_t *)(v10[29] + 26) + 4) + 200) + 8) )
        v37 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v10[29] + 4 * *(uint8_t *)(v10[29] + 26) + 4) + 200) + 8);
      v73[2] = v37;
      v73[3] += v63;
      v73[4] += v58;
      v73[5] += v51;
      v38 = (uint16_t *)v10[29];
      v52 = v51 + v38[12];
      v38[11] += v58;
      v39 = v63 + v38[10];
      v38[12] = v52;
      v38[10] = v39;
      v40 = v73[2];
      if ( *(uint16_t *)(v10[29] + 20) >= v40 )
        v40 = *(uint16_t *)(v10[29] + 20);
      v73[2] = v40;
      hkString::memCpy(
        (hkString::Self *)(v10[15] + 32 * *(uint16_t *)(v10[15] + 6) + 48),
        *(void **)(v7 + 80),
        v54 * *(uint8_t *)(v10[15] + 10));
      hkString::memCpy((hkString::Self *)(v10[15] + 48), *(void **)(v7 + 92), 32 * v54);
      if ( v67[1] != 0 )
      {
        v41 = v10[15];
        v42 = *(uint8_t *)(v41 + 10);
        v43 = v41 + 32 * *(uint16_t *)(v41 + 6) + 48;
        if ( *(uint16_t *)(v41 + 4) != 0 )
        {
          v44 = 0;
          do
          {
            *(uint32_t *)(v43 + 8) = 0;
            ++v44;
            v43 += v42;
          }
          while ( *(uint16_t *)(v10[15] + 4) > v44 );
        }
      }
      v82 = 0;
      v83 = 0;
      v84 = 0x80000000;
      G4_VCALL<void>(v10, 56, &v82);
      if ( v67[8] != 0 && v83 > 0 )
      {
        for ( i = 0; i < v83; ++i )
        {
          v46 = *(uint16_t *)(v82 + 2 * i);
          v103 = 2139095022;
          v104 = 0;
          v105 = 0;
          v89 = 0;
          if ( v67[10] != 0 )
          {
            v53 = v66 + 16;
            v50 = v78 + 16;
          }
          else
          {
            v50 = 0;
            v53 = 0;
          }
          v55 = v46;
          v59 = v46;
          v64 = G4_VCALL<int>(v10, 48, v46);
          v85[4] = G4_VCALL<int>(v10, 52, v59);
          v85[6] = v64;
          v85[10] = (uint32_t)(uintptr_t)(v77);
          v85[0] = v53;
          v85[11] = (uint32_t)(uintptr_t)(&v88);
          v85[1] = v50;
          v85[2] = 1;
          v85[5] = 0;
          v85[7] = 0;
          v85[9] = (uint32_t)(uintptr_t)(v10);
          v85[8] = 0;
          v86 = v55;
          v45 = 0;
          if ( v10[2] == 0 )
            v45 = *((uint16_t *)v10 + 9);
          v87 = v45;
          hkpWorldCallbackUtil::fireContactPointAdded(*(uint32_t *)(v66 + 8), (int)(uintptr_t)(v85));
          if ( *(uint16_t *)(v66 + 516) != 0 )
            hkpEntityCallbackUtil::fireContactPointAddedInternal(v66, (int)(uintptr_t)(v85));
          if ( *(uint16_t *)(v78 + 516) != 0 )
            hkpEntityCallbackUtil::fireContactPointAddedInternal(v78, (int)(uintptr_t)(v85));
        }
      }
      if ( v67[9] != 0 && v83 > 0 )
      {
        v68 = 2 * v83;
        v47 = 0;
        do
        {
          v75 = *(uint16_t *)(v82 + v47);
          if ( (*(uint8_t *)((*(int (**)(int *, int))(*v10 + 48))(v10, v75) + 15) & 1) == 0 )
          {
            v65 = v75;
            v76 = G4_VCALL<int>(v10, 48, v75);
            v93 = G4_VCALL<int>(v10, 52, v65);
            v90 = v78;
            v107 = &v88;
            v88 = 2;
            v48 = *(uint32_t *)(v66 + 8);
            v94 = v76;
            v91 = v10;
            v89 = v66;
            v92 = 4;
            v95 = 0;
            v96 = 0;
            v97 = 0;
            v98 = 0;
            v99 = 0;
            v101 = 0;
            v102 = 0;
            hkpWorldCallbackUtil::fireContactPointCallback(v48, (int)(uintptr_t)(&v88));
            v88 = 0;
            if ( *(uint16_t *)(v66 + 516) != 0 )
              hkpEntityCallbackUtil::fireContactPointCallbackInternal(v66, (int)(uintptr_t)(&v88));
            v88 = 1;
            if ( *(uint16_t *)(v78 + 516) != 0 )
              hkpEntityCallbackUtil::fireContactPointCallbackInternal(v78, (int)(uintptr_t)(&v88));
          }
          v47 += 2;
        }
        while ( v47 != v68 );
      }
      hkAgentNnMachine_InvalidateTimInAgent(v79, v77);
      v83 = 0;
      *v80 = 0;
      if ( v84 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v82,
          2 * (v84 & 0x3FFFFFFF));
      return v80;
    }
  }
  *v80 = 1;
  return v80;
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::loadContactPoints  (binary VA: 0x18529d0)
// Original: hkpSaveContactPointsUtil::loadContactPoints
// ----------------------------------------------------------------------------
void hkpSaveContactPointsUtil::loadContactPoints(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  hkpWorld::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int Agent;
  int v17;
  int v18;
  int v19;
  int v20;
  int32_t v21; // kr00_4
  int32_t v22;
  int32_t v23; // ett
  int v24;
  int v25;
  int v26;
  hkpWorld::Self *v27;
  int v28;
  typedef unsigned int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef hkpWorld::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int (**_g4_t_v40)(int);
  typedef uint32_t _g4_t_v41[9];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v30)) > _g4_s1 ? (40u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v31)) > _g4_s2 ? (44u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v32)) > _g4_s3 ? (44u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v33)) > _g4_s4 ? (52u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v34)) > _g4_s5 ? (56u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v35)) > _g4_s6 ? (60u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v36)) > _g4_s7 ? (64u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v37)) > _g4_s8 ? (68u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v38)) > _g4_s9 ? (68u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v39)) > _g4_s10 ? (72u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v40)) > _g4_s11 ? (76u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v41)) > _g4_s12 ? (80u + sizeof(_g4_t_v41)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);

  v41[5] = (uint32_t)(uintptr_t)(&a1);
  v4 = a3;
  v41[0] = 0;
  v33 = a1;
  v34 = a2;
  v5 = a4;
  v6 = *(hkpWorld::Self **)(*(uint32_t *)a3 + 8);
  v41[1] = 0;
  v35 = v6;
  v40 = (int (**)(int))(uintptr_t)(&off_203CD48);
  v41[2] = -1;
  hkMapBase_unsigned_long_unsigned_l_393416::clear((hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v41);
  v37 = v5;
  hkMapBase_unsigned_long_unsigned_l_393416::reserve(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v41,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    v5);
  if ( v5 > 0 )
  {
    v7 = v4;
    v8 = 0;
    v9 = v7;
    do
    {
      v29 = *(uint32_t *)(v9 + 4 * v8++);
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v41,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v29,
        1u);
    }
    while ( v8 != v37 );
  }
  v10 = *((uint32_t *)v35 + 35) + 1;
  *((uint32_t *)v35 + 35) = v10;
  v36 = *(uint32_t *)(v34 + 72) - 1;
  v38 = 4 * v36;
  if ( v36 >= 0 )
  {
    while ( 1 )
    {
      v13 = *(uint32_t *)(*(uint32_t *)(v34 + 68) + v38);
      if ( *(uint8_t *)(v13 + 24) != 0 )
      {
        v12 = (*(int (**)(uint32_t))(v33 + 4))(*(uint32_t *)(v13 + 16));
        v11 = (*(int (**)(uint32_t))(v33 + 4))(*(uint32_t *)(v13 + 20));
        if ( v11 != 0 )
          goto LABEL_10;
LABEL_7:
        --v36;
        v38 -= 4;
        if ( v36 == -1 )
          goto LABEL_24;
      }
      else
      {
        v11 = *(uint32_t *)(v13 + 12);
        v12 = *(uint32_t *)(v13 + 8);
        if ( v11 == 0 )
          goto LABEL_7;
LABEL_10:
        if ( v12 == 0 )
          goto LABEL_7;
        v31 = v11;
        v14 = ((int (*)(int (***)(int), int))v40[2])(&v40, v12);
        v15 = v31;
        if ( v14 == 0 )
        {
          v28 = ((int (*)(int (***)(int), int))v40[2])(&v40, v31);
          v15 = v31;
          if ( v28 == 0 )
            goto LABEL_7;
        }
        v32 = v15;
        Agent = hkAgentNnMachine_FindAgent(v12 + 16, v15 + 16);
        v17 = v32;
        if ( Agent == 0 )
          goto LABEL_7;
        if ( *(uint32_t *)(v13 + 332) != 259 )
        {
          v30 = Agent;
          hkpSaveContactPointsEndianUtil::swapEndianTypeInCollisionEntry(*((uint32_t *)v35 + 28), v13);
          Agent = v30;
          v17 = v32;
        }
        hkpSaveContactPointsUtil::deserializeCollisionEntry(
          (uint32_t *)(&v39),
          (uint8_t *)v33,
          v13,
          v12,
          v17,
          *((uint32_t **)v35 + 28),
          Agent);
        if ( *(uint8_t *)v33 == 0 || v39 != 1 )
          goto LABEL_7;
        v18 = *(uint32_t *)(v34 + 68);
        v19 = *(uint32_t *)(v18 + v38);
        if ( *(uint16_t *)(v19 + 6) != 0 )
        {
          do
          {
            v21 = *(uint32_t *)(v19 + 4);
            HIWORD(v20) = HIWORD(v21);
            LOWORD(v20) = 0;
            v22 = v20 | (uint16_t)(v21 - 1);
            v23 = v21;
          }
          while ( v23 != __sync_val_compare_and_swap((volatile int32_t *)(v19 + 4), v23, v22) );
          if ( (uint16_t)v22 == 0 )
            G4_VCALL<void>(v19, 16);
          v18 = *(uint32_t *)(v34 + 68);
        }
        v24 = *(uint32_t *)(v34 + 72) - 1;
        *(uint32_t *)(v34 + 72) = v24;
        if ( v36 == v24 )
          goto LABEL_7;
        v25 = v38;
        --v36;
        v38 -= 4;
        *(uint32_t *)(v18 + v25) = *(uint32_t *)(v18 + 4 * v24);
        if ( v36 == -1 )
        {
LABEL_24:
          v10 = *((uint32_t *)v35 + 35);
          break;
        }
      }
    }
  }
  v26 = v10 - 1;
  *((uint32_t *)v35 + 35) = v26;
  if ( v26 == 0 && *((uint8_t *)v35 + 148) == 0 )
  {
    v27 = v35;
    if ( *((uint32_t *)v35 + 33) != 0 )
    {
      hkpWorld::internal_executePendingOperations(v35);
      v27 = v35;
    }
    if ( *((uint32_t *)v27 + 39) == 1 && *((uint32_t *)v27 + 34) != 0 )
      hkpWorld::internal_executePendingBodyOperations(v27);
  }
  v40 = (int (**)(int))(uintptr_t)(&off_203CD48);
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v41,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsUtil::loadContactPoints  (binary VA: 0x1852d10)
// Original: hkpSaveContactPointsUtil::loadContactPoints
// ----------------------------------------------------------------------------
int hkpSaveContactPointsUtil::loadContactPoints(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int Agent;
  int v13;
  int v14;
  int v15;
  int v16;
  int32_t v17; // kr00_4
  int32_t v18;
  int32_t v19; // ett
  int v20;
  int v21;
  int result;
  int v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v29)) > _g4_s5 ? (20u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v30)) > _g4_s6 ? (24u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v32)) > _g4_s8 ? (32u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v33)) > _g4_s9 ? (36u + sizeof(_g4_t_v33)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);

  v33[6] = (uint32_t)(uintptr_t)(&a1);
  v3 = a3;
  v28 = a1;
  v29 = a2;
  v4 = a2;
  v33[0] = (uint32_t)(uintptr_t)(&off_203CD30);
  v5 = *(uint32_t *)(a3 + 140) + 1;
  *(uint32_t *)(a3 + 140) = v5;
  v6 = *(uint32_t *)(v4 + 72) - 1;
  v30 = v6;
  if ( v6 >= 0 )
  {
    v27 = v3;
    v31 = 4 * v6;
    while ( 1 )
    {
      v9 = *(uint32_t *)(*(uint32_t *)(v29 + 68) + v31);
      if ( *(uint8_t *)(v9 + 24) != 0 )
      {
        v8 = (*(int (**)(uint32_t))(v28 + 4))(*(uint32_t *)(v9 + 16));
        v7 = (*(int (**)(uint32_t))(v28 + 4))(*(uint32_t *)(v9 + 20));
        if ( v7 != 0 )
          goto LABEL_7;
LABEL_4:
        --v30;
        v31 -= 4;
        if ( v30 == -1 )
          goto LABEL_21;
      }
      else
      {
        v7 = *(uint32_t *)(v9 + 12);
        v8 = *(uint32_t *)(v9 + 8);
        if ( v7 == 0 )
          goto LABEL_4;
LABEL_7:
        if ( v8 == 0 )
          goto LABEL_4;
        v25 = v7;
        v10 = (*(int (**)(uint32_t *, int))(v33[0] + 8))(v33, v8);
        v11 = v25;
        if ( v10 == 0 )
        {
          v23 = (*(int (**)(uint32_t *, int))(v33[0] + 8))(v33, v25);
          v11 = v25;
          if ( v23 == 0 )
            goto LABEL_4;
        }
        v26 = v11;
        Agent = hkAgentNnMachine_FindAgent(v8 + 16, v11 + 16);
        v13 = v26;
        if ( Agent == 0 )
          goto LABEL_4;
        if ( *(uint32_t *)(v9 + 332) != 259 )
        {
          v24 = Agent;
          hkpSaveContactPointsEndianUtil::swapEndianTypeInCollisionEntry(*(uint32_t *)(v27 + 112), v9);
          Agent = v24;
          v13 = v26;
        }
        hkpSaveContactPointsUtil::deserializeCollisionEntry(
          (uint32_t *)(&v32),
          (uint8_t *)v28,
          v9,
          v8,
          v13,
          *(uint32_t **)(v27 + 112),
          Agent);
        if ( *(uint8_t *)v28 == 0 || v32 != 1 )
          goto LABEL_4;
        v14 = *(uint32_t *)(v29 + 68);
        v15 = *(uint32_t *)(v14 + v31);
        if ( *(uint16_t *)(v15 + 6) != 0 )
        {
          do
          {
            v17 = *(uint32_t *)(v15 + 4);
            HIWORD(v16) = HIWORD(v17);
            LOWORD(v16) = 0;
            v18 = v16 | (uint16_t)(v17 - 1);
            v19 = v17;
          }
          while ( v19 != __sync_val_compare_and_swap((volatile int32_t *)(v15 + 4), v19, v18) );
          if ( (uint16_t)v18 == 0 )
            G4_VCALL<void>(v15, 16);
          v14 = *(uint32_t *)(v29 + 68);
        }
        v20 = *(uint32_t *)(v29 + 72) - 1;
        *(uint32_t *)(v29 + 72) = v20;
        if ( v30 == v20 )
          goto LABEL_4;
        v21 = v31;
        --v30;
        v31 -= 4;
        *(uint32_t *)(v14 + v21) = *(uint32_t *)(v14 + 4 * v20);
        if ( v30 == -1 )
        {
LABEL_21:
          v3 = v27;
          v5 = *(uint32_t *)(v27 + 140);
          break;
        }
      }
    }
  }
  result = v5 - 1;
  *(uint32_t *)(v3 + 140) = result;
  if ( result == 0 && *(uint8_t *)(v3 + 148) == 0 )
  {
    result = *(uint32_t *)(v3 + 132);
    if ( result != 0 )
      result = hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v3);
    if ( *(uint32_t *)(v3 + 156) == 1 )
    {
      result = *(uint32_t *)(v3 + 136);
      if ( result != 0 )
        return hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsEndianUtil::swapEndianTypeIn1nTrack  (binary VA: 0x1852f90)
// Original: hkpSaveContactPointsEndianUtil::swapEndianTypeIn1nTrack
// ----------------------------------------------------------------------------
int hkpSaveContactPointsEndianUtil::swapEndianTypeIn1nTrack(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  unsigned int v5;
  int v6;
  typedef unsigned int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef unsigned int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v12)) > _g4_s5 ? (48u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  if ( *(uint32_t *)(a2 + 16) != 0 )
  {
    v8 = 0;
    v2 = **(uint32_t **)(a2 + 12);
  }
  else
  {
    v2 = 0;
    v8 = -1;
  }
  v11 = 0;
  v10 = 0;
  result = *(uint32_t *)(a2 + 4);
  if ( result > 0 )
  {
    do
    {
      v7 = *(uint32_t *)(*(uint32_t *)a2 + 4 * v10) + 16;
      v9 = **(uint32_t **)(*(uint32_t *)a2 + 4 * v10) + *(uint32_t *)(*(uint32_t *)a2 + 4 * v10) + 16;
      if ( v7 < v9 )
      {
        v4 = v2;
        v5 = *(uint32_t *)(*(uint32_t *)a2 + 4 * v10) + 16;
        do
        {
          v12 = 0;
          if ( v4 != 0 && (*(uint32_t *)(v4 + 24) != v10 || *(uint32_t *)(v4 + 28) < (signed int)(v5 - v7)) )
          {
            v4 = 0;
            v6 = v8 + 1;
            v11 = 0;
            if ( v8 + 1 < *(uint32_t *)(a2 + 16) )
            {
              ++v8;
              v4 = *(uint32_t *)(*(uint32_t *)(a2 + 12) + 4 * v6);
            }
          }
          hkpSaveContactPointsEndianUtil::swapEndianTypeInEntry(a1, v5, v4, 0, &v12, &v11);
          v5 += v12;
        }
        while ( v9 > v5 );
        v2 = v4;
        result = *(uint32_t *)(a2 + 4);
      }
      ++v10;
    }
    while ( v10 < result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsEndianUtil::swapEndianTypeInEntry  (binary VA: 0x18530e0)
// Original: hkpSaveContactPointsEndianUtil::swapEndianTypeInEntry
// ----------------------------------------------------------------------------
void hkpSaveContactPointsEndianUtil::swapEndianTypeInEntry(uint32_t *a1, char *a2, int a3, char a4, uint32_t *a5, uint8_t *a6)
{
  char v6;
  int v7;
  uint8_t *v8;
  int v9;
  char v10;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char v32;
  char v33;
  int v34;
  bool v35;
  char *v36;
  int v37;
  char v38; // si
  char *v39;
  int v40;
  char *v41;
  char v42;
  char v43;
  char *v44;
  int v45;
  char v46; // si
  char v47;
  char v48;
  char v49;
  char v50;
  char v51;
  char v52;
  char v53;
  char v54;
  char v55;
  char v56;
  char v57;
  char v58;
  char v59;
  char v60;
  char v61;
  char v62;
  char v63;
  char v64;
  char v65;
  char v66;
  char v67;
  char v68;
  char v69;
  char v70;
  char v71;
  char v72;
  char v73;
  char v74;
  char v75;
  char v76;
  char v77;
  char v78;
  char v79;
  char v80;
  char v81;
  char v82;
  char v83;
  char v84;
  char v85;
  char v86;
  char v87;
  char v88;
  char v89;
  char v90;
  char v91;
  char v92;
  char v93;
  char v94;
  char v95;
  char v96;
  char v97;
  char v98;
  char v99;
  char v100;
  char v101;
  char v102;
  char v103;
  char v104;
  char v105;
  char v106;
  char v107;
  char v108;
  char v109;
  char v110;
  char v111;
  char v112;
  char v113;
  char v114;
  char v115;
  char v116;
  char v117;
  char v118;
  char v119;
  char v120;
  char v121;
  char v122;
  char v123;
  char v124;
  char v125;
  int v126;
  char *v127;
  int v128;
  char v129; // si
  char *v130;
  int v131;
  char *v132;
  char v133;
  char v134;

  *a6 = 0;
  v6 = *a2;
  if ( (uint8_t)*a2 > 0xEu )
    return;
  v7 = 1 << v6;
  if ( ((1 << v6) & 0xC0C) != 0 )
  {
    v8 = (uint8_t *)(a2 + 32);
    if ( a4 == 0 )
    {
      v8 = (uint8_t *)(a2 + 16);
      v87 = a2[7];
      a2[7] = a2[4];
      v88 = a2[5];
      a2[4] = v87;
      v89 = a2[6];
      a2[6] = v88;
      v90 = a2[8];
      a2[5] = v89;
      v91 = a2[11];
      a2[11] = v90;
      v92 = a2[9];
      a2[8] = v91;
      v93 = a2[10];
      a2[10] = v92;
      a2[9] = v93;
    }
    goto LABEL_5;
  }
  if ( (v7 & 0x7070) != 0 )
  {
    if ( a4 != 0 )
    {
      v8 = (uint8_t *)(a2 + 48);
      v10 = a2[27];
      a2[27] = a2[24];
      v11 = a2[25];
      a2[24] = v10;
      v12 = a2[26];
      a2[26] = v11;
      v13 = a2[32];
      a2[25] = v12;
      v14 = a2[35];
      a2[35] = v13;
      v15 = a2[33];
      a2[32] = v14;
      v16 = a2[34];
      a2[34] = v15;
      v17 = a2[36];
      a2[33] = v16;
      v18 = a2[39];
      a2[39] = v17;
      v19 = a2[37];
      a2[36] = v18;
      v20 = a2[38];
      a2[38] = v19;
      v21 = a2[40];
      a2[37] = v20;
      v22 = a2[43];
      a2[43] = v21;
      v23 = a2[41];
      a2[40] = v22;
      v24 = a2[42];
      a2[42] = v23;
      v25 = a2[44];
      a2[41] = v24;
      a2[44] = a2[47];
      a2[47] = v25;
      v26 = a2[45];
      a2[45] = a2[46];
      a2[46] = v26;
    }
    else
    {
      v8 = (uint8_t *)(a2 + 32);
      v94 = a2[7];
      a2[7] = a2[4];
      v95 = a2[5];
      a2[4] = v94;
      v96 = a2[6];
      a2[6] = v95;
      v97 = a2[8];
      a2[5] = v96;
      v98 = a2[11];
      a2[11] = v97;
      v99 = a2[9];
      a2[8] = v98;
      v100 = a2[10];
      a2[10] = v99;
      v101 = a2[12];
      a2[9] = v100;
      v102 = a2[15];
      a2[15] = v101;
      v103 = a2[13];
      a2[12] = v102;
      v104 = a2[14];
      a2[14] = v103;
      v105 = a2[16];
      a2[13] = v104;
      v106 = a2[19];
      a2[19] = v105;
      v107 = a2[17];
      a2[16] = v106;
      v108 = a2[18];
      a2[18] = v107;
      v109 = a2[20];
      a2[17] = v108;
      a2[20] = a2[23];
      a2[23] = v109;
      v110 = a2[21];
      a2[21] = a2[22];
      v111 = a2[27];
      a2[22] = v110;
      v112 = a2[24];
      a2[24] = v111;
      v113 = a2[26];
      a2[27] = v112;
      v114 = a2[25];
      a2[25] = v113;
      v115 = a2[31];
      a2[26] = v114;
      v116 = a2[28];
      a2[28] = v115;
      v117 = a2[30];
      a2[31] = v116;
      v118 = a2[29];
      a2[29] = v117;
      a2[30] = v118;
    }
LABEL_5:
    LOBYTE(v9) = hkpSaveContactPointsUtil::getSerializedAgentType(*(int (**)(int, int, hkpBoxBoxManifold::Self *, int, int))(*a1 + (((uint8_t)a2[1] + 104) << 6) + 8));
    *a5 = (uint8_t)a2[3];
    switch ( v9 )
    {
      case 1:
        if ( v8[33] != 0 )
        {
          v44 = (char *)(v8 + 2);
          v45 = 0;
          do
          {
            ++v45;
            v46 = *v44;
            *v44 = v44[1];
            v44 += 4;
            *(v44 - 3) = v46;
          }
          while ( v45 < (uint8_t)v8[33] );
        }
        v47 = v8[51];
        v8[51] = v8[48];
        v48 = v8[49];
        v8[48] = v47;
        v49 = v8[50];
        v8[50] = v48;
        v50 = v8[52];
        v8[49] = v49;
        v51 = v8[55];
        v8[55] = v50;
        v52 = v8[53];
        v8[52] = v51;
        v53 = v8[54];
        v8[54] = v52;
        v54 = v8[56];
        v8[53] = v53;
        v55 = v8[59];
        v8[59] = v54;
        v56 = v8[57];
        v8[56] = v55;
        v57 = v8[58];
        v8[58] = v56;
        v58 = v8[60];
        v8[57] = v57;
        v59 = v8[63];
        v8[63] = v58;
        v60 = v8[61];
        v8[60] = v59;
        v61 = v8[62];
        v8[62] = v60;
        v62 = v8[36];
        v8[61] = v61;
        v8[36] = v8[39];
        v8[39] = v62;
        v63 = v8[37];
        v8[37] = v8[38];
        v8[38] = v63;
        break;
      case 2:
        v64 = v8[1];
        v8[1] = *v8;
        v65 = v8[11];
        *v8 = v64;
        v66 = v8[8];
        v8[8] = v65;
        v67 = v8[10];
        v8[11] = v66;
        v68 = v8[9];
        v8[9] = v67;
        v69 = v8[2];
        v8[10] = v68;
        v70 = v8[3];
        v8[3] = v69;
        v71 = v8[15];
        v8[2] = v70;
        v72 = v8[12];
        v8[12] = v71;
        v73 = v8[14];
        v8[15] = v72;
        v74 = v8[13];
        v8[13] = v73;
        v75 = v8[4];
        v8[14] = v74;
        v76 = v8[5];
        v8[5] = v75;
        v77 = v8[16];
        v8[4] = v76;
        v78 = v8[19];
        v8[19] = v77;
        v79 = v8[17];
        v8[16] = v78;
        v8[17] = v8[18];
        v8[18] = v79;
        v80 = v8[20];
        v8[20] = v8[23];
        v81 = v8[22];
        v8[23] = v80;
        v82 = v8[21];
        v8[21] = v81;
        v83 = v8[27];
        v8[22] = v82;
        v84 = v8[24];
        v8[24] = v83;
        v85 = v8[26];
        v8[27] = v84;
        v86 = v8[25];
        v8[25] = v85;
        v8[26] = v86;
        break;
      case 3:
      case 4:
        v27 = v8[1];
        v8[1] = *v8;
        v28 = v8[2];
        *v8 = v27;
        v29 = v8[3];
        v8[3] = v28;
        v30 = v8[4];
        v8[2] = v29;
        v31 = v8[5];
        v8[5] = v30;
        v32 = v8[6];
        v8[4] = v31;
        v33 = v8[7];
        v8[7] = v32;
        v34 = 0;
        v35 = v8[14] == 0;
        v8[6] = v33;
        if ( !v35 )
        {
          v36 = (char *)(v8 + 18);
          v37 = 0;
          do
          {
            ++v37;
            v38 = *v36;
            *v36 = v36[1];
            v36 += 8;
            *(v36 - 7) = v38;
            v34 = (uint8_t)v8[14];
          }
          while ( v37 < v34 );
        }
        v39 = (char *)(&v8[8 * v34 + 16]);
        v40 = (uint8_t)v8[12] + (uint8_t)v8[13];
        if ( v40 != 0 )
        {
          v41 = &v39[2 * v40];
          do
          {
            v42 = *v39;
            v39 += 2;
            v43 = *(v39 - 1);
            *(v39 - 1) = v42;
            *(v39 - 2) = v43;
          }
          while ( v39 != v41 );
        }
        break;
      case 5:
        if ( (v8[11] & 0x20) == 0 )
          goto LABEL_13;
        v119 = v8[1];
        v8[1] = *v8;
        v120 = v8[2];
        *v8 = v119;
        v121 = v8[3];
        v8[3] = v120;
        v122 = v8[4];
        v8[2] = v121;
        v123 = v8[5];
        v8[5] = v122;
        v124 = v8[6];
        v8[4] = v123;
        v125 = v8[7];
        v8[7] = v124;
        v126 = 0;
        v35 = v8[14] == 0;
        v8[6] = v125;
        if ( !v35 )
        {
          v127 = (char *)(v8 + 18);
          v128 = 0;
          do
          {
            ++v128;
            v129 = *v127;
            *v127 = v127[1];
            v127 += 8;
            *(v127 - 7) = v129;
            v126 = (uint8_t)v8[14];
          }
          while ( v128 < v126 );
        }
        v130 = (char *)(&v8[8 * v126 + 16]);
        v131 = (uint8_t)v8[12] + (uint8_t)v8[13];
        if ( v131 != 0 )
        {
          v132 = &v130[2 * v131];
          do
          {
            v133 = *v130;
            v130 += 2;
            v134 = *(v130 - 1);
            *(v130 - 1) = v133;
            *(v130 - 2) = v134;
          }
          while ( v130 != v132 );
        }
        break;
      case 6:
      case 7:
      case 8:
      case 9:
LABEL_13:
        hkpSaveContactPointsEndianUtil::swapEndianTypeIn1nTrack((int)(uintptr_t)(a1), a3);
        *a6 = 1;
        break;
      default:
        return;
    }
    return;
  }
  if ( (v7 & 3) != 0 )
    *a5 = 16;
}

// ----------------------------------------------------------------------------
// Function: hkpSaveContactPointsEndianUtil::swapEndianTypeInCollisionEntry  (binary VA: 0x1853630)
// Original: hkpSaveContactPointsEndianUtil::swapEndianTypeInCollisionEntry
// ----------------------------------------------------------------------------
int hkpSaveContactPointsEndianUtil::swapEndianTypeInCollisionEntry(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;
  char v5; // di
  uint8_t *v6;
  char v7;
  char v8; // di
  char v9;
  char v10; // di
  char v11;
  char v12; // di
  char v13;
  char v14; // di
  char v15;
  char v16; // di
  char v17;
  char v18; // di
  char v19;
  char v20; // di
  int v21;
  char v22;
  char v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v29)) > _g4_s5 ? (32u + sizeof(_g4_t_v29)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);

  v28 = 0;
  hkpSaveContactPointsEndianUtil::swapEndianTypeInEntry(a1, (char *)(a2 + 116), a2 + 308, 1, &v29, &v28);
  v2 = *(uint8_t *)(a2 + 42);
  *(uint32_t *)(a2 + 332) = 259;
  v25 = v2;
  v27 = 0;
  v26 = 0;
  result = *(uint32_t *)(a2 + 84) / v2;
  v24 = result;
  if ( result > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(a2 + 80) + v27;
      v5 = *(uint8_t *)(v4 + 16);
      v6 = (uint8_t *)(v4 + 20);
      *(v6 - 4) = *(v6 - 1);
      v7 = v5;
      v8 = *(v6 - 3);
      *(v6 - 1) = v7;
      *(v6 - 3) = *(v6 - 2);
      v9 = v8;
      v10 = *(v6 - 20);
      *(v6 - 2) = v9;
      *(v6 - 20) = *(v6 - 17);
      v11 = v10;
      v12 = *(v6 - 19);
      *(v6 - 17) = v11;
      *(v6 - 19) = *(v6 - 18);
      v13 = v12;
      v14 = *(v6 - 16);
      *(v6 - 18) = v13;
      *(v6 - 16) = *(v6 - 13);
      v15 = v14;
      v16 = *(v6 - 15);
      *(v6 - 13) = v15;
      *(v6 - 15) = *(v6 - 14);
      v17 = v16;
      v18 = *(v6 - 12);
      *(v6 - 14) = v17;
      *(v6 - 12) = *(v6 - 9);
      v19 = v18;
      v20 = *(v6 - 11);
      *(v6 - 9) = v19;
      *(v6 - 11) = *(v6 - 10);
      *(v6 - 10) = v20;
      v21 = 0;
      if ( *(uint8_t *)(a2 + 40) != 0 )
      {
        do
        {
          ++v21;
          v22 = v6[3];
          v6[3] = *v6;
          *v6 = v22;
          v6 += 4;
          v23 = *(v6 - 2);
          *(v6 - 2) = *(v6 - 3);
          *(v6 - 3) = v23;
        }
        while ( 2 * *(uint8_t *)(a2 + 40) > v21 );
      }
      ++v26;
      v27 += v25;
      result = v24;
    }
    while ( v26 != v24 );
  }
  return result;
}


