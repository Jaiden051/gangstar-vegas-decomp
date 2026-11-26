#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMousePi.h"

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::getProcessTag  (binary VA: 0x1845fe0)
// Original: hkpMousePickingViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpMousePickingViewer::getProcessTag()
{
  return hkpMousePickingViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::getConsumableCommands  (binary VA: 0x1846010)
// Original: hkpMousePickingViewer::getConsumableCommands
// ----------------------------------------------------------------------------
int * hkpMousePickingViewer::getConsumableCommands(hkpMousePickingViewer::Self *self, uint8_t **a2, int *a3)
{
  *a2 = (uint8_t *)&unk_20C90F4;
  *a3 = 3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::registerViewer  (binary VA: 0x1846050)
// Original: hkpMousePickingViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpMousePickingViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Mouse Picking",
             hkpMousePickingViewer::create);
  hkpMousePickingViewer::m_tag = result;
  return result;
}



// ============================================================================
// Address:   0x18460a0 (size: 90 bytes)
// Symbol:    _ZN21hkpMousePickingViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpMousePickingViewer::hkpMousePickingViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN21hkpMousePickingViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpMousePickingViewer::hkpMousePickingViewer(
        uint32_t *a1,
        int a2))(hkpMousePickingViewer::Self * self)
{
  hkpWorldViewerBase::Construct(a1, a2);
  a1[10] = 0;
  a1[11] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A3968);
  a1[12] = 1148846080;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A399C);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A39C8);
  return (void (**)(hkpMousePickingViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A39C8));
}
// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::create  (binary VA: 0x1846100)
// Original: hkpMousePickingViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpMousePickingViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   52);
  hkpMousePickingViewer::hkpMousePickingViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::pickObject  (binary VA: 0x1846160)
// Original: hkpMousePickingViewer::pickObject
// ----------------------------------------------------------------------------
hkpMousePickingViewer::Self * hkpMousePickingViewer::pickObject(hkpMousePickingViewer::Self *self, uint64_t a2, const hkVector4f::Self *a3, hkVector4f::Self *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int address;
  hkpUnaryAction::Self *v15;
  float v16; // xmm0_4
  typedef int _g4_t_i;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef hkpEntity::Self *_g4_t_v28;
  typedef int _g4_t_v29[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_i)) > _g4_s0 ? (4u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v24)) > _g4_s7 ? (28u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v25)) > _g4_s8 ? (32u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v26)) > _g4_s9 ? (32u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v27)) > _g4_s10 ? (44u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v28)) > _g4_s11 ? (44u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v29)) > _g4_s12 ? (48u + sizeof(_g4_t_v29)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);

  v27 = HIDWORD(a2);
  v4 = *(uint32_t *)(a2 + 36);
  if ( v4 != 0 )
  {
    if ( (BYTE4(a2) & 3) == 3 )
    {
      v27 = HIDWORD(a2) & 0xFFFFFFFC;
      v20 = *(uint32_t *)(v4 + 112);
      if ( v20 <= 0 )
        goto LABEL_23;
      goto LABEL_5;
    }
    if ( (a2 & 0x300000000LL) == 0 )
    {
      v20 = *(uint32_t *)(v4 + 112);
      if ( v20 <= 0 )
        goto LABEL_23;
LABEL_5:
      v5 = *(uint32_t *)(v4 + 108);
      v21 = 1;
      for ( i = v5; ; v5 = i )
      {
        v6 = *(uint32_t *)(v5 + 4 * v21 - 4);
        v18 = v6;
        v19 = *(uint32_t *)(v6 + 44);
        if ( v19 <= 0 )
          break;
        v23 = 0;
        v22 = *(uint32_t *)(v6 + 40);
        while ( 1 )
        {
          v7 = *(uint32_t *)(v22 + 4 * v23);
          if ( *(int *)(v7 + 80) > 0 )
            break;
LABEL_13:
          if ( ++v23 == v19 )
            goto LABEL_14;
        }
        v25 = *(int **)(v7 + 76);
        v8 = *v25;
        if ( *v25 + 16 != __PAIR64__((unsigned int)(uintptr_t)(a3), v27) )
        {
          v9 = 0;
          while ( ++v9 != *(uint32_t *)(v7 + 80) )
          {
            v8 = v25[v9];
            if ( v8 + 16 == __PAIR64__((unsigned int)(uintptr_t)(a3), v27) )
              goto LABEL_25;
          }
          goto LABEL_13;
        }
LABEL_25:
        if ( v21 >= v20 )
        {
          if ( v8 != 0 )
            goto LABEL_27;
          goto LABEL_23;
        }
        if ( v8 != 0 )
        {
LABEL_27:
          v13 = *(uint32_t *)(v8 + 8);
          *(uint32_t *)(a2 + 40) = v13;
          if ( *(uint8_t *)(v8 + 232) != 5 && v13 == *(uint32_t *)(v8 + 8) )
          {
            v28 = (hkpEntity::Self *)v8;
            hkVector4f::setTransformedInversePos((hkVector4f::Self *)v29, (const hkTransformf::Self *)(v8 + 240), a4);
            address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
            v15 = (hkpUnaryAction::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                      *(uint32_t *)(*(uint32_t *)address + 44),
                                      96);
            hkpMouseSpringAction::Construct(v15, v29, a4, 1056964608, 1050253722, 1064514355, v28, nullptr);
            v16 = *(float *)(a2 + 48);
            *(uint32_t *)(a2 + 44) = (uint32_t)(uintptr_t)(v15);
            hkpMouseSpringAction::setMaxRelativeForce(v15, v16);
            hkpWorld::addAction(*(hkpWorld::Self **)(a2 + 40), *(hkpAction::Self **)(a2 + 44));
          }
          goto LABEL_23;
        }
LABEL_34:
        ++v21;
      }
LABEL_14:
      if ( *(int *)(v18 + 56) > 0 )
      {
        v24 = 0;
        do
        {
          v10 = *(uint32_t *)(*(uint32_t *)(v18 + 52) + 4 * v24);
          if ( *(int *)(v10 + 80) > 0 )
          {
            v26 = *(int **)(v10 + 76);
            v8 = *v26;
            if ( *v26 + 16 == __PAIR64__((unsigned int)(uintptr_t)(a3), v27) )
              goto LABEL_25;
            v11 = 0;
            while ( ++v11 != *(uint32_t *)(v10 + 80) )
            {
              v8 = v26[v11];
              if ( v8 + 16 == __PAIR64__((unsigned int)(uintptr_t)(a3), v27) )
                goto LABEL_25;
            }
          }
          ++v24;
        }
        while ( v24 != *(uint32_t *)(v18 + 56) );
      }
      if ( v21 < v20 )
        goto LABEL_34;
LABEL_23:
      *(uint8_t *)self = 1;
      return self;
    }
  }
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::dragObject  (binary VA: 0x1846460)
// Original: hkpMousePickingViewer::dragObject
// ----------------------------------------------------------------------------
int hkpMousePickingViewer::dragObject(hkpMousePickingViewer::Self *self, const hkVector4f::Self *a2)
{
  int result;

  result = *((uint32_t *)self + 11);
  if ( result != 0 && *(uint32_t *)(result + 8) != 0 )
    return hkpMouseSpringAction::setMousePosition(*((hkpMouseSpringAction::Self **)self + 11), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::releaseObject  (binary VA: 0x18464a0)
// Original: hkpMousePickingViewer::releaseObject
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpMousePickingViewer::releaseObject(hkpMousePickingViewer::Self *self)
{
  int v1;
  hkpWorld::Self *result;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int32_t v8; // kr04_4
  int32_t v9; // ett

  v1 = *((uint32_t *)self + 11);
  if ( v1 != 0 )
  {
    if ( *(uint32_t *)(v1 + 8) != 0 )
    {
      hkpWorld::removeAction(*((hkpWorld::Self **)self + 10), *((hkpAction::Self **)self + 11));
      result = hkpEntity::activate(*(hkpEntity::Self **)(*((uint32_t *)self + 11) + 24));
      v1 = *((uint32_t *)self + 11);
      if ( *(uint16_t *)(v1 + 6) != 0 )
      {
        do
        {
          v4 = *(uint32_t *)(v1 + 4);
          HIWORD(v3) = HIWORD(v4);
          LOWORD(v3) = 0;
          v5 = v3 | (uint16_t)(v4 - 1);
          v6 = v4;
          result = (hkpWorld::Self *)__sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v6, v5);
        }
        while ( (hkpWorld::Self *)v6 != result );
        goto LABEL_5;
      }
    }
    else if ( *(uint16_t *)(v1 + 6) != 0 )
    {
      do
      {
        v8 = *(uint32_t *)(v1 + 4);
        HIWORD(v7) = HIWORD(v8);
        LOWORD(v7) = 0;
        v5 = v7 | (uint16_t)(v8 - 1);
        v9 = v8;
        result = (hkpWorld::Self *)__sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v9, v5);
      }
      while ( (hkpWorld::Self *)v9 != result );
LABEL_5:
      if ( (uint16_t)v5 == 0 )
        result = (hkpWorld::Self *)G4_VCALL<int>(v1, 16);
    }
    *((uint32_t *)self + 11) = 0;
  }
  *((uint32_t *)self + 10) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::worldRemovedCallback  (binary VA: 0x1846560)
// Original: hkpMousePickingViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpMousePickingViewer::worldRemovedCallback(hkpMousePickingViewer::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::Self *result;

  result = (hkpWorld::Self *)(self);
  if ( *((hkpWorld::Self **)self + 10) == a2 )
    return hkpMousePickingViewer::releaseObject(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::Destroy  (binary VA: 0x18465b0)
// Original: hkpMousePickingViewer::~hkpMousePickingViewer
// ----------------------------------------------------------------------------
void hkpMousePickingViewer::Destroy(hkpMousePickingViewer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3968);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A399C);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A39C8);
  hkpMousePickingViewer::releaseObject(self);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::Destroy_ea1846620  (binary VA: 0x1846620)
// Original: hkpMousePickingViewer::~hkpMousePickingViewer
// ----------------------------------------------------------------------------
void hkpMousePickingViewer::Destroy_ea1846620(hkpMousePickingViewer::Self *self)
{
  int v1;
  int v2;

  hkpMousePickingViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 52;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMousePickingViewer::consumeCommand  (binary VA: 0x18466a0)
// Original: hkpMousePickingViewer::consumeCommand
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpMousePickingViewer::consumeCommand(hkDisplaySerializeIStream::Self **self, uint8_t a2)
{
  hkDisplaySerializeIStream::Self **v2;
  hkpWorld::Self *result;
  uint64_t v8; // 0:kr00_8.8
  typedef int64_t _g4_t_v4;
  typedef uint8_t _g4_t_v5[9];
  typedef int64_t _g4_t_v6;
  typedef uint32_t _g4_t_v7[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v5)) > _g4_s1 ? (15u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v7)) > _g4_s3 ? (32u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 15u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);

  v7[6] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  switch ( a2 )
  {
    case 0xB1:
      hkDisplaySerializeIStream::readQuadVector4(*(self + 4), (hkVector4f::Self *)v7);
      result = (hkpWorld::Self *)hkIArchive::isOk((hkIArchive::Self *)v5);
      if ( v5[0] != 0 )
        return (hkpWorld::Self *)hkpMousePickingViewer::dragObject((hkpMousePickingViewer::Self *)v2, (const hkVector4f::Self *)v7);
      break;
    case 0xB2:
      return hkpMousePickingViewer::releaseObject((hkpMousePickingViewer::Self *)self);
    case 0xB0:
      hkDisplaySerializeIStream::readQuadVector4(*(self + 4), (hkVector4f::Self *)v7);
      hkIArchive::readArrayGeneric(v2[4], &v6, 8, 1);
      v4 = v6;
      result = (hkpWorld::Self *)hkIArchive::isOk((hkIArchive::Self *)v5);
      if ( v5[0] != 0 )
      {
        LODWORD(v8) = (uint32_t)(uintptr_t)(v2);
        HIDWORD(v8) = v4;
        return (hkpWorld::Self *)(hkpMousePickingViewer::pickObject(
                 (hkpMousePickingViewer::Self *)v5,
                 v8,
                 (const hkVector4f::Self *)HIDWORD(v4),
                 (hkVector4f::Self *)v7));
      }
      break;
    default:
      break;
  }
  return result;
}


