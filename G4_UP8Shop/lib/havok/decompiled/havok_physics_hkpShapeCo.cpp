#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShapeCo.h"

// ----------------------------------------------------------------------------
// Function: hkpShapeContainer::Destroy  (binary VA: 0x1696ff0)
// Original: hkpShapeContainer::~hkpShapeContainer
// ----------------------------------------------------------------------------
void hkpShapeContainer::Destroy(hkpShapeContainer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20994A8);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeContainer::isWeldingEnabled  (binary VA: 0x1697010)
// Original: hkpShapeContainer::isWeldingEnabled
// ----------------------------------------------------------------------------
int hkpShapeContainer::isWeldingEnabled()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeContainer::getCollisionFilterInfo  (binary VA: 0x1697050)
// Original: hkpShapeContainer::getCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpShapeContainer::getCollisionFilterInfo()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeContainer::getNumChildShapes  (binary VA: 0x1697060)
// Original: hkpShapeContainer::getNumChildShapes
// ----------------------------------------------------------------------------
int hkpShapeContainer::getNumChildShapes(hkpShapeContainer::Self *self)
{
  int v1;
  int i;

  v1 = 0;
  for ( i = G4_VCALL<int>(self, 12);
        i != -1;
        i = G4_VCALL<int>(self, 16, i) )
  {
    ++v1;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeContainer::Destroy_ea16970b0  (binary VA: 0x16970b0)
// Original: hkpShapeContainer::~hkpShapeContainer
// ----------------------------------------------------------------------------
void hkpShapeContainer::Destroy_ea16970b0(hkpShapeContainer::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20994A8);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpShapeContainer::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::staticClass  (binary VA: 0x1699820)
// Original: hkpShapeCollection::staticClass
// ----------------------------------------------------------------------------
void * hkpShapeCollection::staticClass()
{
  return &hkpShapeCollectionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionFilter::staticClass  (binary VA: 0x169a3e0)
// Original: hkpShapeCollectionFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpShapeCollectionFilter::staticClass()
{
  return &hkpShapeCollectionFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::isWeldingEnabled  (binary VA: 0x16a39a0)
// Original: hkpShapeCollection::isWeldingEnabled
// ----------------------------------------------------------------------------
bool hkpShapeCollection::isWeldingEnabled(hkpShapeCollection::Self *self)
{
  return *((uint8_t *)self + 20) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeContainer::staticClass  (binary VA: 0x16b4780)
// Original: hkpShapeContainer::staticClass
// ----------------------------------------------------------------------------
void * hkpShapeContainer::staticClass()
{
  return &hkpShapeContainerClass;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::cleanup  (binary VA: 0x16c0190)
// Original: hkpShapeCollectionAgent::cleanup
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::cleanup(hkpShapeCollectionAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int i;
  int v3;

  for ( i = 0; *((uint32_t *)self + 4) > i; ++i )
  {
    v3 = *(uint32_t *)(*((uint32_t *)self + 3) + 8 * i + 4);
    G4_VCALL<void>(v3, 36, a2);
  }
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::invalidateTim  (binary VA: 0x16c01e0)
// Original: hkpShapeCollectionAgent::invalidateTim
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::invalidateTim(int a1, int a2)
{
  int i;
  int v3;
  int result;

  for ( i = 0; *(uint32_t *)(a1 + 16) > i; result = G4_VCALL<int>(v3, 44, a2) )
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 8 * i++ + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::warpTime  (binary VA: 0x16c0230)
// Original: hkpShapeCollectionAgent::warpTime
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::warpTime(int a1, int64_t a2, int a3)
{
  int i;
  int v4;
  int result;

  for ( i = 0;
        *(uint32_t *)(a1 + 16) > i;
        result = G4_VCALL<int>(v4, 48, a2, HIDWORD(a2), a3) )
  {
    v4 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 8 * i++ + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::updateShapeCollectionFilter  (binary VA: 0x16c0290)
// Original: hkpShapeCollectionAgent::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::updateShapeCollectionFilter(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5)
{
  int result;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  uint32_t *savedregs;
  void *retaddr;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef void *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef uint32_t _g4_t_v39[133];
  typedef int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v32)) > _g4_s6 ? (28u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v33)) > _g4_s7 ? (32u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v34)) > _g4_s8 ? (39u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v35)) > _g4_s9 ? (40u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v36)) > _g4_s10 ? (44u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v37)) > _g4_s11 ? (48u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v38)) > _g4_s12 ? (52u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v39)) > _g4_s13 ? (56u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (588u + sizeof(_g4_t_v40)) > _g4_s14 ? (588u + sizeof(_g4_t_v40)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 39u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 588u);

  v39[130] = (uint32_t)(uintptr_t)(&a1);
  v29 = a3;
  v32 = a1;
  v28 = a4;
  v38 = a2;
  v26 = a5;
  v27 = a2;
  v37 = a2[2];
  v33 = (void *)G4_VCALL<int>(*a2, 64);
  result = G4_VCALL<int>(v33, 12);
  if ( result != -1 )
  {
    v6 = result;
    do
    {
      v7 = v32[4];
      if ( v7 > 0 )
      {
        v8 = (uint32_t *)v32[3];
        if ( v6 == *v8 )
        {
          v25 = **(uint32_t **)(v28 + 16);
          retaddr = v33;
          v39[131] = *(uint32_t *)(v28 + 16);
          savedregs = v27;
          a1 = (uint32_t *)v6;
          v40 = v29;
          v39[132] = v28;
          (*(void (**)(char *))(v25 + 28))(&v34);
          if ( v34 != 0 )
          {
            v35 = G4_VCALL<int>(v33, 24, v6, v39);
            v36 = v6;
            v23 = 0;
LABEL_22:
            v24 = *(uint32_t *)(v32[3] + v23 + 4);
            G4_VCALL<void>(v24, 40, &v35, v29, v28, v26);
          }
          else
          {
            v17 = 0;
            v9 = 0;
LABEL_17:
            v31 = v17;
            v18 = *(uint32_t *)(v32[3] + v17 + 4);
            G4_VCALL<void>(v18, 36, v26);
            v19 = v32[3];
            v20 = v32[4] - 1;
            v32[4] = v20;
            if ( v9 != v20 )
            {
              v21 = (uint32_t *)(v19 + 8 * v20);
              v22 = (uint32_t *)(v19 + v31);
              *v22 = *v21;
              v22[1] = v21[1];
            }
          }
          goto LABEL_19;
        }
        v9 = 0;
        while ( ++v9 != v7 )
        {
          if ( v6 == v8[2 * v9] )
          {
            v16 = **(uint32_t **)(v28 + 16);
            v39[131] = *(uint32_t *)(v28 + 16);
            retaddr = v33;
            savedregs = v27;
            v39[132] = v28;
            a1 = (uint32_t *)v6;
            v40 = v29;
            (*(void (**)(char *))(v16 + 28))(&v34);
            v17 = 8 * v9;
            if ( v34 == 0 )
            {
              if ( v9 == -1 )
                goto LABEL_19;
              goto LABEL_17;
            }
            v35 = G4_VCALL<int>(v33, 24, v6, v39);
            v36 = v6;
            v23 = 8 * v9;
            if ( v9 == -1 )
              goto LABEL_10;
            goto LABEL_22;
          }
        }
      }
      v10 = **(uint32_t **)(v28 + 16);
      retaddr = v33;
      v39[131] = *(uint32_t *)(v28 + 16);
      savedregs = v27;
      a1 = (uint32_t *)v6;
      v40 = v29;
      v39[132] = v28;
      (*(void (**)(char *))(v10 + 28))(&v34);
      if ( v34 != 0 )
      {
        v35 = G4_VCALL<int>(v33, 24, v6, v39);
        v36 = v6;
LABEL_10:
        v11 = v32[4];
        if ( v11 == (v32[5] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(v32 + 3),
            8,
            v40);
          v11 = v32[4];
        }
        v12 = v32[3];
        v32[4] = v11 + 1;
        v30 = (int *)(v12 + 8 * v11);
        *v30 = v6;
        v13 = *(uint32_t *)v28 + 35 * *(uint8_t *)(v35 + 8);
        v14 = *(uint8_t *)(*(uint32_t *)v29 + 8);
        if ( *(uint32_t *)(v28 + 24) != 0 )
          v15 = *(uint8_t *)(v14 + v13 + 1641);
        else
          v15 = *(uint8_t *)(v14 + v13 + 416);
        v30[1] = (*(int (**)(int *, int, int, uint32_t))(*(uint32_t *)v28 + 20 * v15 + 2868))(
                   &v35,
                   v29,
                   v28,
                   v32[2]);
      }
LABEL_19:
      result = G4_VCALL<int>(v33, 16, v6);
      v6 = result;
    }
    while ( result != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::staticGetPenetrations  (binary VA: 0x16c06c0)
// Original: hkpShapeCollectionAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::staticGetPenetrations(uint32_t *a1, int a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  void *v8;
  int i;
  int v10;
  int v11;
  uint64_t v12; // rax
  int v13;
  uint32_t *v14;
  uint32_t *savedregs;
  void *retaddr;
  typedef int *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef uint32_t _g4_t_v23[4];
  typedef uint32_t _g4_t_v24[134];
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v21)) > _g4_s5 ? (28u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (39u + sizeof(_g4_t_v22)) > _g4_s6 ? (39u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v24)) > _g4_s8 ? (56u + sizeof(_g4_t_v24)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 39u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);

  v24[130] = (uint32_t)(uintptr_t)(&a1);
  v19 = a1;
  v21 = a2;
  v20 = a3;
  v18 = a4;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v16 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtShapeCollection");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = (void *)G4_VCALL<int>(*v19, 64);
  v23[2] = v19[2];
  v23[3] = (uint32_t)(uintptr_t)(v19);
  v17 = *(uint8_t *)(*(uint32_t *)v21 + 8);
  for ( i = G4_VCALL<int>(v8, 12);
        i != -1;
        i = G4_VCALL<int>(v8, 16, i) )
  {
    v10 = **(uint32_t **)(v20 + 16);
    v24[131] = *(uint32_t *)(v20 + 16);
    savedregs = v19;
    a1 = (uint32_t *)i;
    retaddr = v8;
    v24[133] = v21;
    v24[132] = v20;
    (*(void (**)(char *))(v10 + 28))(&v22);
    if ( v22 != 0 )
    {
      v23[0] = G4_VCALL<int>(v8, 24, i, v24);
      v11 = *(uint8_t *)(v23[0] + 8);
      v23[1] = i;
      (*(void (**)(uint32_t *, int, int, int))(*(uint32_t *)v20
                                                   + 20 * *(uint8_t *)(v17 + *(uint32_t *)v20 + 35 * v11 + 416)
                                                   + 2872))(
        v23,
        v21,
        v20,
        v18);
      if ( *(uint8_t *)(v18 + 4) != 0 )
        break;
    }
  }
  LODWORD(v12) = (uint32_t)(uintptr_t)(v16);
  v13 = *v16;
  v14 = *(uint32_t **)(*v16 + 4);
  if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(*v16 + 12) )
  {
    *v14 = (uint32_t)(uintptr_t)("Et");
    v12 = __rdtsc();
    v14[1] = v12;
    *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::getPenetrations  (binary VA: 0x16c0930)
// Original: hkpShapeCollectionAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::getPenetrations(int a1, uint32_t *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, uint32_t *a11, int a12, char a13)
{
  int *address;
  int v14;
  uint32_t *v15;
  uint64_t v16; // rax
  int v17;
  int *v18;
  int v19;
  int v20;
  uint64_t v21; // rax
  int v22;
  uint32_t *v23;
  int *retaddr;
  int v26;
  int v27;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v14 = *address;
  v15 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(*address + 12) )
  {
    *v15 = (uint32_t)(uintptr_t)("TtShapeCollection");
    v16 = __rdtsc();
    v15[1] = v16;
    *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
  }
  v17 = G4_VCALL<int>(*a2, 64);
  a10 = a2[2];
  a11 = a2;
  v18 = *(int **)(a1 + 12);
  v19 = *(uint32_t *)(a1 + 16) - 1;
  if ( v19 >= 0 )
  {
    do
    {
      v20 = *v18;
      v26 = v19;
      v27 = v17;
      a8 = G4_VCALL<int>(v17, 24, *v18, &a12);
      a9 = v20;
      retaddr = &a12;
      G4_VCALL<void>(v18[1], 20, &a8, a3, &a8);
      if ( a13 != 0 )
        break;
      v18 += 2;
      v19 = v26 - 1;
      v17 = v27;
    }
    while ( v26 != 0 );
  }
  LODWORD(v21) = (uint32_t)(uintptr_t)(a3);
  v22 = *a3;
  v23 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v23) < *(uint32_t *)(*a3 + 12) )
  {
    *v23 = (uint32_t)(uintptr_t)("Et");
    v21 = __rdtsc();
    v23[1] = v21;
    *(uint32_t *)(v22 + 4) = (uint32_t)(uintptr_t)(v23 + 3);
  }
  return v21;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::staticLinearCast  (binary VA: 0x16c0a50)
// Original: hkpShapeCollectionAgent::staticLinearCast
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::staticLinearCast(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  void *v9;
  int i;
  int v11;
  int v12;
  uint64_t v13; // rax
  int v14;
  uint32_t *v15;
  uint32_t *savedregs;
  void *retaddr;
  typedef int *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint32_t _g4_t_v25[4];
  typedef uint32_t _g4_t_v26[134];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (43u + sizeof(_g4_t_v24)) > _g4_s7 ? (43u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v25)) > _g4_s8 ? (44u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v26)) > _g4_s9 ? (60u + sizeof(_g4_t_v26)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 43u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  v26[130] = (uint32_t)(uintptr_t)(&a1);
  v21 = a1;
  v23 = a2;
  v22 = a3;
  v19 = a4;
  v18 = a5;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v17 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtShapeCollection");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = (void *)G4_VCALL<int>(*v21, 64);
  v25[2] = v21[2];
  v25[3] = (uint32_t)(uintptr_t)(v21);
  v20 = *(uint8_t *)(*(uint32_t *)v23 + 8);
  for ( i = G4_VCALL<int>(v9, 12);
        i != -1;
        i = G4_VCALL<int>(v9, 16, i) )
  {
    v11 = **(uint32_t **)(v22 + 16);
    v26[131] = *(uint32_t *)(v22 + 16);
    savedregs = v21;
    a1 = (uint32_t *)i;
    retaddr = v9;
    v26[133] = v23;
    v26[132] = v22;
    (*(void (**)(char *))(v11 + 28))(&v24);
    if ( v24 != 0 )
    {
      v25[0] = G4_VCALL<int>(v9, 24, i, v26);
      v12 = *(uint8_t *)(v25[0] + 8);
      v25[1] = i;
      (*(void (**)(uint32_t *, int, int, int, int))(*(uint32_t *)v22
                                                        + 20
                                                        * *(uint8_t *)(v20 + *(uint32_t *)v22 + 35 * v12 + 416)
                                                        + 2880))(
        v25,
        v23,
        v22,
        v19,
        v18);
    }
  }
  LODWORD(v13) = (uint32_t)(uintptr_t)(v17);
  v14 = *v17;
  v15 = *(uint32_t **)(*v17 + 4);
  if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(*v17 + 12) )
  {
    *v15 = (uint32_t)(uintptr_t)("Et");
    v13 = __rdtsc();
    v15[1] = v13;
    *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::linearCast  (binary VA: 0x16c0d80)
// Original: hkpShapeCollectionAgent::linearCast
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::linearCast(int a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, ...)
{
  int *address;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint64_t v15; // rax
  int v16;
  uint32_t *v17;
  void *retaddr;
  void *v20;
  int v21;
  int v22;
  va_list va;
  void *v24;
  int v25;
  uint32_t *v26;
  va_list va1;

  va_start(va1, a7);
  va_start(va, a7);
  v22 = va_arg(va1, uint32_t);
  v24 = va_arg(va1, void *);
  v25 = va_arg(va1, uint32_t);
  v26 = va_arg(va1, uint32_t *);
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("TtShapeCollection");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  v11 = G4_VCALL<int>(*a2, 64);
  v25 = a2[2];
  v26 = a2;
  v12 = *(uint32_t **)(a1 + 12);
  v13 = *(uint32_t *)(a1 + 16) - 1;
  if ( v13 >= 0 )
  {
    do
    {
      v20 = (void *)*v12;
      v21 = v11;
      v22 = G4_VCALL<int>(v11, 24, *v12, g4_va_cast<int *>(va1));
      v24 = v20;
      v14 = v12[1];
      --v13;
      v12 += 2;
      retaddr = v20;
      G4_VCALL<void>(v14, 28, g4_va_cast<int *>(va), g4_va_cast<int *>(va), g4_va_cast<int *>(va1));
      v11 = v21;
    }
    while ( v13 != -1 );
  }
  LODWORD(v15) = (uint32_t)(uintptr_t)(a2);
  v16 = *a2;
  v17 = *(uint32_t **)(*a2 + 4);
  if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*a2 + 12) )
  {
    *v17 = (uint32_t)(uintptr_t)("Et");
    v15 = __rdtsc();
    v17[1] = v15;
    *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::staticGetClosestPoints  (binary VA: 0x16c0eb0)
// Original: hkpShapeCollectionAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::staticGetClosestPoints(uint32_t *a1, int a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  void *v8;
  int i;
  int v10;
  int v11;
  uint64_t v12; // rax
  int v13;
  uint32_t *v14;
  uint32_t *savedregs;
  void *retaddr;
  typedef int *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef uint32_t _g4_t_v23[4];
  typedef uint32_t _g4_t_v24[134];
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v21)) > _g4_s5 ? (28u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (39u + sizeof(_g4_t_v22)) > _g4_s6 ? (39u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v24)) > _g4_s8 ? (56u + sizeof(_g4_t_v24)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 39u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);

  v24[130] = (uint32_t)(uintptr_t)(&a1);
  v19 = a1;
  v21 = a2;
  v20 = a3;
  v17 = a4;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v16 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtShapeCollection");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = (void *)G4_VCALL<int>(*v19, 64);
  v23[2] = v19[2];
  v23[3] = (uint32_t)(uintptr_t)(v19);
  v18 = *(uint8_t *)(*(uint32_t *)v21 + 8);
  for ( i = G4_VCALL<int>(v8, 12);
        i != -1;
        i = G4_VCALL<int>(v8, 16, i) )
  {
    v10 = **(uint32_t **)(v20 + 16);
    v24[131] = *(uint32_t *)(v20 + 16);
    savedregs = v19;
    a1 = (uint32_t *)i;
    retaddr = v8;
    v24[133] = v21;
    v24[132] = v20;
    (*(void (**)(char *))(v10 + 28))(&v22);
    if ( v22 != 0 )
    {
      v23[0] = G4_VCALL<int>(v8, 24, i, v24);
      v11 = *(uint8_t *)(v23[0] + 8);
      v23[1] = i;
      (*(void (**)(uint32_t *, int, int, int))(*(uint32_t *)v20
                                                   + 20 * *(uint8_t *)(v18 + *(uint32_t *)v20 + 35 * v11 + 416)
                                                   + 2876))(
        v23,
        v21,
        v20,
        v17);
    }
  }
  LODWORD(v12) = (uint32_t)(uintptr_t)(v16);
  v13 = *v16;
  v14 = *(uint32_t **)(*v16 + 4);
  if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(*v16 + 12) )
  {
    *v14 = (uint32_t)(uintptr_t)("Et");
    v12 = __rdtsc();
    v14[1] = v12;
    *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::getClosestPoints  (binary VA: 0x16c1100)
// Original: hkpShapeCollectionAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::getClosestPoints(int a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, ...)
{
  int *address;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint64_t v15; // rax
  int v16;
  uint32_t *v17;
  void *retaddr;
  void *v20;
  int v21;
  int v22;
  va_list va;
  void *v24;
  int v25;
  uint32_t *v26;
  va_list va1;

  va_start(va1, a7);
  va_start(va, a7);
  v22 = va_arg(va1, uint32_t);
  v24 = va_arg(va1, void *);
  v25 = va_arg(va1, uint32_t);
  v26 = va_arg(va1, uint32_t *);
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("TtShapeCollection");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  v11 = G4_VCALL<int>(*a2, 64);
  v25 = a2[2];
  v26 = a2;
  v12 = *(uint32_t **)(a1 + 12);
  v13 = *(uint32_t *)(a1 + 16) - 1;
  if ( v13 >= 0 )
  {
    do
    {
      v20 = (void *)*v12;
      v21 = v11;
      v22 = G4_VCALL<int>(v11, 24, *v12, g4_va_cast<int *>(va1));
      v24 = v20;
      v14 = v12[1];
      --v13;
      v12 += 2;
      retaddr = v20;
      G4_VCALL<void>(v14, 24, g4_va_cast<int *>(va), g4_va_cast<int *>(va), g4_va_cast<int *>(va1));
      v11 = v21;
    }
    while ( v13 != -1 );
  }
  LODWORD(v15) = (uint32_t)(uintptr_t)(a2);
  v16 = *a2;
  v17 = *(uint32_t **)(*a2 + 4);
  if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*a2 + 12) )
  {
    *v17 = (uint32_t)(uintptr_t)("Et");
    v15 = __rdtsc();
    v17[1] = v15;
    *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::processCollision  (binary VA: 0x16c1230)
// Original: hkpShapeCollectionAgent::processCollision
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::processCollision(int a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, ...)
{
  int *address;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint64_t v15; // rax
  int v16;
  uint32_t *v17;
  void *retaddr;
  void *v20;
  int v21;
  int v22;
  va_list va;
  void *v24;
  int v25;
  uint32_t *v26;
  va_list va1;

  va_start(va1, a7);
  va_start(va, a7);
  v22 = va_arg(va1, uint32_t);
  v24 = va_arg(va1, void *);
  v25 = va_arg(va1, uint32_t);
  v26 = va_arg(va1, uint32_t *);
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("TtShapeCollection");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  v11 = G4_VCALL<int>(*a2, 64);
  v25 = a2[2];
  v26 = a2;
  v12 = *(uint32_t **)(a1 + 12);
  v13 = *(uint32_t *)(a1 + 16) - 1;
  if ( v13 >= 0 )
  {
    do
    {
      v20 = (void *)*v12;
      v21 = v11;
      v22 = G4_VCALL<int>(v11, 24, *v12, g4_va_cast<int *>(va1));
      v24 = v20;
      v14 = v12[1];
      --v13;
      v12 += 2;
      retaddr = v20;
      G4_VCALL<void>(v14, 32, g4_va_cast<int *>(va), g4_va_cast<int *>(va), g4_va_cast<int *>(va1));
      v11 = v21;
    }
    while ( v13 != -1 );
  }
  LODWORD(v15) = (uint32_t)(uintptr_t)(a2);
  v16 = *a2;
  v17 = *(uint32_t **)(*a2 + 4);
  if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*a2 + 12) )
  {
    *v17 = (uint32_t)(uintptr_t)("Et");
    v15 = __rdtsc();
    v17[1] = v15;
    *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::Destroy  (binary VA: 0x16c1360)
// Original: hkpShapeCollectionAgent::~hkpShapeCollectionAgent
// ----------------------------------------------------------------------------
void hkpShapeCollectionAgent::Destroy(hkpShapeCollectionAgent::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A788);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::Destroy_ea16c13d0  (binary VA: 0x16c13d0)
// Original: hkpShapeCollectionAgent::~hkpShapeCollectionAgent
// ----------------------------------------------------------------------------
void hkpShapeCollectionAgent::Destroy_ea16c13d0(hkpShapeCollectionAgent::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A788);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::registerAgent  (binary VA: 0x16c1480)
// Original: hkpShapeCollectionAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpShapeCollectionAgent::registerAgent(hkpShapeCollectionAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpShapeCollectionAgent::createListBAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, -1, 18);
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, -1, 6);
  v2[0] = (uint32_t)(uintptr_t)(hkpShapeCollectionAgent::createListAAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpShapeCollectionAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpShapeCollectionAgent::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpShapeCollectionAgent::staticLinearCast);
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 18, -1);
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, 6, -1);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::Construct  (binary VA: 0x16c1580)
// Original: hkpShapeCollectionAgent::hkpShapeCollectionAgent
// ----------------------------------------------------------------------------
uint32_t * hkpShapeCollectionAgent::Construct(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5)
{
  uint32_t *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *result;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int savedregs;
  void *retaddr;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef uint32_t _g4_t_v28[4];
  typedef char _g4_t_v29;
  typedef hkArrayUtil::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int *_g4_t_v32;
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v25)) > _g4_s6 ? (36u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (43u + sizeof(_g4_t_v26)) > _g4_s7 ? (43u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v27)) > _g4_s8 ? (44u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v28)) > _g4_s9 ? (48u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v29)) > _g4_s10 ? (64u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (584u + sizeof(_g4_t_v30)) > _g4_s11 ? (584u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (588u + sizeof(_g4_t_v31)) > _g4_s12 ? (588u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (592u + sizeof(_g4_t_v32)) > _g4_s13 ? (592u + sizeof(_g4_t_v32)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 43u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 584u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 588u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 592u);

  v30 = (hkArrayUtil::Self *)&a1;
  v5 = a1;
  v22 = a2;
  v28[3] = (uint32_t)(uintptr_t)(a2);
  v25 = a3;
  v24 = a4;
  v19 = a5;
  a1[2] = a5;
  v5[1] = -65535;
  *v5 = ((uint32_t)(uintptr_t)&off_209A788);
  v5[4] = 0;
  v5[5] = -2147483644;
  v5[3] = (uint32_t)(uintptr_t)(v5 + 6);
  v28[2] = v22[2];
  v20 = v5;
  v6 = (int *)(v5 + 3);
  v7 = G4_VCALL<int>(*v22, 64);
  v8 = G4_VCALL<int>(v7, 8);
  v9 = v20[5] & 0x3FFFFFFF;
  if ( v8 > v9 )
  {
    v10 = 2 * v9;
    savedregs = 8;
    v32 = v6;
    v30 = (hkArrayUtil::Self *)&v27;
    if ( v8 >= v10 )
      v10 = v8;
    hkArrayUtil::reserve(v30, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v32, v10, savedregs);
  }
  v11 = G4_VCALL<int>(v7, 12);
  result = v28;
  if ( v11 != -1 )
  {
    do
    {
      v14 = *(uint32_t *)v7;
      v32 = (int *)&v29;
      v31 = v11;
      v28[0] = (*(int (**)(int))(v14 + 24))(v7);
      v28[1] = v11;
      v15 = **(uint32_t **)(v24 + 16);
      v32 = *(int **)(v24 + 16);
      retaddr = v22;
      a2 = (uint32_t *)v11;
      a1 = (uint32_t *)v7;
      (*(void (**)(char *, int *, int, int))(v15 + 28))(&v26, v32, v24, v25);
      if ( v26 != 0 )
      {
        v16 = v20[3];
        v23 = v20[4];
        v20[4] = v23 + 1;
        v21 = (int *)(v16 + 8 * v23);
        v17 = *(uint32_t *)v24 + 35 * *(uint8_t *)(v28[0] + 8);
        v18 = *(uint8_t *)(*(uint32_t *)v25 + 8);
        if ( *(uint32_t *)(v24 + 24) != 0 )
          v13 = *(uint8_t *)(v18 + v17 + 1641);
        else
          v13 = *(uint8_t *)(v18 + v17 + 416);
        v21[1] = (*(int (**)(uint32_t *, int, int, int))(*(uint32_t *)v24 + 20 * v13 + 2868))(v28, v25, v24, v19);
        *v21 = v11;
      }
      result = (uint32_t *)G4_VCALL<int>(v7, 16, v11);
      v11 = (int)(uintptr_t)(result);
    }
    while ( result != (uint32_t *)-1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::createListAAgent  (binary VA: 0x16c1810)
// Original: hkpShapeCollectionAgent::createListAAgent
// ----------------------------------------------------------------------------
uint32_t * hkpShapeCollectionAgent::createListAAgent(uint32_t *a1, int a2, int a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   56);
  hkpShapeCollectionAgent::Construct(v5, a1, a2, a3, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollectionAgent::createListBAgent  (binary VA: 0x16c1880)
// Original: hkpShapeCollectionAgent::createListBAgent
// ----------------------------------------------------------------------------
uint32_t * hkpShapeCollectionAgent::createListBAgent(int a1, uint32_t *a2, int a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   56);
  hkpShapeCollectionAgent::Construct(v5, a2, a1, a3, a4);
  *v5 = ((uint32_t)(uintptr_t)&off_2099C88);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::Destroy  (binary VA: 0x16eedc0)
// Original: hkpShapeCollection::~hkpShapeCollection
// ----------------------------------------------------------------------------
void hkpShapeCollection::Destroy(hkpShapeCollection::Self *self)
{
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::getContainer  (binary VA: 0x16eee00)
// Original: hkpShapeCollection::getContainer
// ----------------------------------------------------------------------------
char * hkpShapeCollection::getContainer(hkpShapeCollection::Self *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::setWeldingInfo  (binary VA: 0x16eee10)
// Original: hkpShapeCollection::setWeldingInfo
// ----------------------------------------------------------------------------
void hkpShapeCollection::setWeldingInfo()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::initWeldingInfo  (binary VA: 0x16eee20)
// Original: hkpShapeCollection::initWeldingInfo
// ----------------------------------------------------------------------------
void hkpShapeCollection::initWeldingInfo()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::castRayWithCollector  (binary VA: 0x16eee30)
// Original: hkpShapeCollection::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpShapeCollection::castRayWithCollector(int a1, int a2, int a3, int a4)
{
  int v4;
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int i;
  void (**v11)(char *);
  int v12;
  int j;
  int v14;
  int v15;
  uint64_t v16; // rax
  int v17;
  uint32_t *v18;
  int savedregs;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t _g4_t_v32[134];
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v21)) > _g4_s1 ? (32u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v22)) > _g4_s2 ? (36u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v23)) > _g4_s3 ? (44u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v24)) > _g4_s4 ? (48u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v25)) > _g4_s5 ? (56u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v26)) > _g4_s6 ? (60u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (67u + sizeof(_g4_t_v27)) > _g4_s7 ? (67u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v28)) > _g4_s8 ? (68u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v29)) > _g4_s9 ? (72u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v30)) > _g4_s10 ? (76u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v31)) > _g4_s11 ? (80u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v32)) > _g4_s12 ? (84u + sizeof(_g4_t_v32)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 67u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);

  v32[130] = (uint32_t)(uintptr_t)(&a1);
  v25 = a1;
  v23 = a3;
  v24 = a4;
  v4 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v22 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtrcShpCollect");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v26 = v25 + 16;
  v9 = *(uint32_t *)(v25 + 16);
  v20 = v25 + 16;
  if ( *(uint32_t *)(v4 + 36) != 0 )
  {
    for ( i = (*(int (**)(int))(v9 + 12))(v20);
          i != -1;
          i = (*(int (**)(int, int))(*(uint32_t *)(v25 + 16) + 16))(v26, i) )
    {
      v11 = **(void (****)(char *))(v4 + 36);
      v32[131] = *(uint32_t *)(v4 + 36);
      savedregs = i;
      v32[133] = v25 + 16;
      v32[132] = v4;
      (*v11)(&v27);
      if ( v27 != 0 )
      {
        v28 = (*(int (**)(int, int, uint32_t *))(*(uint32_t *)(v25 + 16) + 24))(v26, i, v32);
        v31 = v23;
        v29 = i;
        v30 = *(uint32_t *)(v23 + 8);
        G4_VCALL<void>(v28, 32, v4, &v28, v24);
      }
    }
  }
  else
  {
    v12 = (*(int (**)(int))(v9 + 12))(v20);
    if ( v12 != -1 )
    {
      v21 = v4;
      for ( j = v12; j != -1; j = (*(int (**)(int, int))(*(uint32_t *)(v25 + 16) + 16))(v26, j) )
      {
        v14 = (*(int (**)(int, int, uint32_t *))(*(uint32_t *)(v25 + 16) + 24))(v26, j, v32);
        v15 = *(uint32_t *)(v23 + 8);
        v28 = v14;
        v29 = j;
        v31 = v23;
        v30 = v15;
        G4_VCALL<void>(v14, 32, v21, &v28, v24);
      }
    }
  }
  LODWORD(v16) = (uint32_t)(uintptr_t)(v22);
  v17 = *v22;
  v18 = *(uint32_t **)(*v22 + 4);
  if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*v22 + 12) )
  {
    *v18 = (uint32_t)(uintptr_t)("Et");
    v16 = __rdtsc();
    v18[1] = v16;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::getMaximumProjection  (binary VA: 0x16ef0b0)
// Original: hkpShapeCollection::getMaximumProjection
// ----------------------------------------------------------------------------
long double hkpShapeCollection::getMaximumProjection(hkpShapeCollection::Self *self, const hkVector4f::Self *a2, int a3, ...)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  int i;
  int v9;
  float v10; // xmm0_4
  int v11;
  uint32_t *v12;
  uint64_t v13; // rax
  int *retaddr;
  const hkVector4f::Self *v16;
  float v17;
  float v18;
  va_list va;

  va_start(va, a3);
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TthkpShapeCollection::getMaximumProjection");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v7 = (*(int (**)(char *))(*((uint32_t *)self + 4) + 12))((char *)self + 16);
  if ( v7 == -1 )
  {
    v17 = -3.40282e38f;
  }
  else
  {
    v16 = (const hkVector4f::Self *)((hkpShapeCollection::Self *)((char *)self + 16));
    v17 = -3.40282e38f;
    for ( i = v7; i != -1; i = (*(int (**)(const hkVector4f::Self *, int))(*((uint32_t *)self + 4) + 16))(v16, i) )
    {
      v9 = (*(int (**)(const hkVector4f::Self *, int, int *))(*((uint32_t *)self + 4) + 24))(v16, i, g4_va_cast<int *>(va));
      v10 = v17;
      v18 = ((long double (*)(int, const hkVector4f::Self *))*(uint32_t *)(*(uint32_t *)v9 + 68))(v9, v16);
      v17 = fmaxf(v10, v18);
    }
  }
  v11 = *retaddr;
  v12 = *(uint32_t **)(*retaddr + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*retaddr + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("Et");
    v13 = __rdtsc();
    v12[1] = v13;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
  }
  return v17;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::getAabb  (binary VA: 0x16ef1e0)
// Original: hkpShapeCollection::getAabb
// ----------------------------------------------------------------------------
int hkpShapeCollection::getAabb(hkpShapeCollection::Self *self, const hkTransformf::Self *a2, uint32_t *a3, hkAabb::Self *a4, int a5, int a6, int a7, ...)
{
  int *address;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  float v11; // xmm1_4
  int v12;
  int i;
  int v14;
  uint64_t v15; // rax
  int v16;
  uint32_t *v17;
  int v19;
  float v20;
  va_list va;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  va_list va1;

  va_start(va1, a7);
  va_start(va, a7);
  v20 = COERCE_FLOAT(va_arg(va1, uint32_t));
  v22 = COERCE_FLOAT(va_arg(va1, uint32_t));
  v23 = COERCE_FLOAT(va_arg(va1, uint32_t));
  v24 = COERCE_FLOAT(va_arg(va1, uint32_t));
  v25 = COERCE_FLOAT(va_arg(va1, uint32_t));
  v26 = COERCE_FLOAT(va_arg(va1, uint32_t));
  v27 = COERCE_FLOAT(va_arg(va1, uint32_t));
  v28 = COERCE_FLOAT(va_arg(va1, uint32_t));
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("TthkpShapeCollection::getAabb");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  *(uint32_t *)a4 = 2139095022;
  v11 = *(float *)a4;
  *((uint32_t *)a4 + 1) = 2139095022;
  *((uint32_t *)a4 + 2) = 2139095022;
  *((float *)a4 + 4) = -v11;
  *((uint32_t *)a4 + 3) = 2139095022;
  *((float *)a4 + 5) = -*((float *)a4 + 1);
  *((float *)a4 + 6) = -*((float *)a4 + 2);
  *((float *)a4 + 7) = -*((float *)a4 + 3);
  v12 = (*(int (**)(char *))(*((uint32_t *)self + 4) + 12))((char *)self + 16);
  if ( v12 != -1 )
  {
    for ( i = v12; i != -1; i = (*(int (**)(int, int))(*((uint32_t *)self + 4) + 16))(a7, v19) )
    {
      v19 = i;
      v14 = (*(int (**)(int, int, int *))(*((uint32_t *)self + 4) + 24))(a7, i, g4_va_cast<int *>(va1));
      G4_VCALL<void>(v14, 24, a2, a3, g4_va_cast<float *>(va));
      *(float *)a4 = fminf(*(float *)a4, v20);
      *((float *)a4 + 1) = fminf(*((float *)a4 + 1), v22);
      *((float *)a4 + 2) = fminf(*((float *)a4 + 2), v23);
      *((float *)a4 + 3) = fminf(*((float *)a4 + 3), v24);
      *((float *)a4 + 4) = fmaxf(*((float *)a4 + 4), v25);
      *((float *)a4 + 5) = fmaxf(*((float *)a4 + 5), v26);
      *((float *)a4 + 6) = fmaxf(*((float *)a4 + 6), v27);
      *((float *)a4 + 7) = fmaxf(*((float *)a4 + 7), v28);
    }
  }
  LODWORD(v15) = (uint32_t)(uintptr_t)(a3);
  v16 = *a3;
  v17 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*a3 + 12) )
  {
    *v17 = (uint32_t)(uintptr_t)("Et");
    v15 = __rdtsc();
    v17[1] = v15;
    *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::castRay  (binary VA: 0x16ef3e0)
// Original: hkpShapeCollection::castRay
// ----------------------------------------------------------------------------
char * hkpShapeCollection::castRay(char *a1, int a2, int a3, int a4)
{
  int v4;
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  int v11;
  int v12;
  void (**v13)(char *);
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int i;
  int v20;
  int v21;
  int v22;
  char v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint64_t v27; // rax
  int savedregs;
  typedef int *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef uint32_t _g4_t_v37[134];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v29)) > _g4_s0 ? (0u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v30)) > _g4_s1 ? (4u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v31)) > _g4_s2 ? (8u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v32)) > _g4_s3 ? (12u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v33)) > _g4_s4 ? (16u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v34)) > _g4_s5 ? (24u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v35)) > _g4_s6 ? (28u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (35u + sizeof(_g4_t_v36)) > _g4_s7 ? (35u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v37)) > _g4_s8 ? (36u + sizeof(_g4_t_v37)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 35u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);

  v37[130] = (uint32_t)(uintptr_t)(&a1);
  v31 = a1;
  v34 = a2;
  v32 = a4;
  v4 = a3;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v29 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtrcShpCollect");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  ++*(uint32_t *)(v32 + 64);
  if ( *(uint32_t *)(v4 + 36) == 0 )
  {
    v17 = v34 + 16;
    v18 = G4_VCALL<int>(v34 + 16, 12);
    if ( v18 != -1 )
    {
      v30 = v4;
      v33 = -1;
      for ( i = v18; i != -1; i = (*(int (**)(int))(v22 + 16))(v17) )
      {
        v20 = (*(int (**)(int, int, uint32_t *))(*(uint32_t *)(v34 + 16) + 24))(v17, i, v37);
        (*(void (**)(char *, int, int, int))(*(uint32_t *)v20 + 28))(&v36, v20, v30, v32);
        v21 = v33;
        if ( v36 != 0 )
          v21 = i;
        v33 = v21;
        v22 = *(uint32_t *)(v34 + 16);
        v37[130] = i;
      }
      goto LABEL_16;
    }
LABEL_21:
    v23 = 0;
    --*(uint32_t *)(v32 + 64);
    goto LABEL_18;
  }
  v35 = v34 + 16;
  v9 = G4_VCALL<int>(v34 + 16, 12);
  if ( v9 == -1 )
    goto LABEL_21;
  v10 = v4;
  v33 = -1;
  v11 = v9;
  v12 = v10;
  do
  {
    v13 = **(void (****)(char *))(v12 + 36);
    v37[131] = *(uint32_t *)(v12 + 36);
    savedregs = v11;
    v37[133] = v34 + 16;
    v37[132] = v12;
    (*v13)(&v36);
    if ( v36 != 0 )
    {
      v14 = *(uint32_t *)(v34 + 16);
      v37[132] = (uint32_t)(uintptr_t)(v37);
      v37[131] = v11;
      v15 = (*(int (**)(int))(v14 + 24))(v35);
      (*(void (**)(char *, int, int, int))(*(uint32_t *)v15 + 28))(&v36, v15, v12, v32);
      v16 = v33;
      if ( v36 != 0 )
        v16 = v11;
      v33 = v16;
    }
    v11 = (*(int (**)(int, int))(*(uint32_t *)(v34 + 16) + 16))(v35, v11);
  }
  while ( v11 != -1 );
LABEL_16:
  v23 = 0;
  v24 = *(uint32_t *)(v32 + 64);
  *(uint32_t *)(v32 + 64) = v24 - 1;
  if ( v33 != -1 )
  {
    *(uint32_t *)(v32 + 4 * v24 + 28) = v33;
    v23 = 1;
  }
LABEL_18:
  v25 = *v29;
  v26 = *(uint32_t **)(*v29 + 4);
  if ( (unsigned int)(uintptr_t)(v26) < *(uint32_t *)(*v29 + 12) )
  {
    *v26 = (uint32_t)(uintptr_t)("Et");
    v27 = __rdtsc();
    v26[1] = v27;
    *(uint32_t *)(v25 + 4) = (uint32_t)(uintptr_t)(v26 + 3);
  }
  *v31 = v23;
  return v31;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::Destroy_ea16ef6b0  (binary VA: 0x16ef6b0)
// Original: hkpShapeCollection::~hkpShapeCollection
// ----------------------------------------------------------------------------
void hkpShapeCollection::Destroy_ea16ef6b0(hkpShapeCollection::Self *self)
{
  int v1;
  int v2;

  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeCollection::Construct  (binary VA: 0x16ef730)
// Original: hkpShapeCollection::hkpShapeCollection
// ----------------------------------------------------------------------------
int hkpShapeCollection::Construct(int a1, char a2, char a3)
{
  *(uint8_t *)(a1 + 8) = a2;
  *(uint32_t *)(a1 + 16) = ((uint32_t)(uintptr_t)&off_209BA08);
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint8_t *)(a1 + 9) = 4;
  *(uint8_t *)(a1 + 10) = 0;
  *(uint8_t *)(a1 + 11) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B9A8);
  *(uint8_t *)(a1 + 20) = 0;
  *(uint8_t *)(a1 + 21) = a3;
  return a1;
}



// ============================================================================
// Address:   0x16ef790 (size: 77 bytes)
// Symbol:    _ZN18hkpShapeCollectionC2E24hkFinishLoadedObjectFlag
// Demangled: hkpShapeCollection::hkpShapeCollection(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN18hkpShapeCollectionC1E24hkFinishLoadedObjectFlag'
void (**hkpShapeCollection::Construct(int a1, int a2))(hkpShapeCollection::Self * self)
{
  void (**result)(hkpShapeCollection::Self *);

  hkpShape::hkpShape(a1, a2);
  result = (void (**)(hkpShapeCollection::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209BA08));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B9A8);
  *(uint32_t *)(a1 + 16) = ((uint32_t)(uintptr_t)&off_209BA08);
  if ( a2 != 0 )
  {
    *(uint8_t *)(a1 + 8) = 18;
    *(uint8_t *)(a1 + 21) = 3;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpShapeContinueData::Destroy  (binary VA: 0x181b890)
// Original: hkpShapeContinueData::~hkpShapeContinueData
// ----------------------------------------------------------------------------
void hkpShapeContinueData::Destroy(hkpShapeContinueData::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A13F0);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeContinueData::Destroy_ea181b900  (binary VA: 0x181b900)
// Original: hkpShapeContinueData::~hkpShapeContinueData
// ----------------------------------------------------------------------------
void hkpShapeContinueData::Destroy_ea181b900(hkpShapeContinueData::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A13F0);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}


