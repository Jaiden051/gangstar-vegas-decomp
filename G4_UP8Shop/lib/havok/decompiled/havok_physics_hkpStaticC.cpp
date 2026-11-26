#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpStaticC.h"

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundAgent::staticLinearCast  (binary VA: 0x16ee680)
// Original: hkpStaticCompoundAgent::staticLinearCast
// ----------------------------------------------------------------------------
int hkpStaticCompoundAgent::staticLinearCast(float a1, float a2, float a3, float a4, float a5)
{
  float v5; // xmm3_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  const hkpShape::Self *v8;
  typedef float _g4_t_v10;
  typedef float *_g4_t_v11;
  typedef hkpStaticCompoundShape::Self *_g4_t_v12;
  typedef float _g4_t_v13[4];
  typedef uint8_t _g4_t_v14[64];
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v14)) > _g4_s4 ? (48u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (112u + sizeof(_g4_t_v15)) > _g4_s5 ? (112u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (116u + sizeof(_g4_t_v16)) > _g4_s6 ? (116u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (120u + sizeof(_g4_t_v17)) > _g4_s7 ? (120u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (124u + sizeof(_g4_t_v18)) > _g4_s8 ? (124u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v19)) > _g4_s9 ? (128u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (132u + sizeof(_g4_t_v20)) > _g4_s10 ? (132u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (136u + sizeof(_g4_t_v21)) > _g4_s11 ? (136u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (140u + sizeof(_g4_t_v22)) > _g4_s12 ? (140u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (144u + sizeof(_g4_t_v23)) > _g4_s13 ? (144u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (148u + sizeof(_g4_t_v24)) > _g4_s14 ? (148u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (152u + sizeof(_g4_t_v25)) > _g4_s15 ? (152u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (156u + sizeof(_g4_t_v26)) > _g4_s16 ? (156u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (160u + sizeof(_g4_t_v27)) > _g4_s17 ? (160u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (164u + sizeof(_g4_t_v28)) > _g4_s18 ? (164u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (168u + sizeof(_g4_t_v29)) > _g4_s19 ? (168u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (172u + sizeof(_g4_t_v30)) > _g4_s20 ? (172u + sizeof(_g4_t_v30)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 112u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 116u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 120u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 124u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 128u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 132u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 136u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 140u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 144u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 148u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 152u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 156u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 160u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 164u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 168u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 172u);

  v11 = *(float **)(LODWORD(a1) + 8);
  hkTransformf::setInverse((hkTransformf::Self *)&v15, *(const hkTransformf::Self **)(LODWORD(a2) + 8));
  hkTransformf::setMul((hkTransformf::Self *)v14, (const hkTransformf::Self *)&v15, *(const hkTransformf::Self **)(LODWORD(a1) + 8));
  v5 = v11[12] + *(float *)(LODWORD(a3) + 80);
  v6 = v11[13] + *(float *)(LODWORD(a3) + 84);
  v12 = *(hkpStaticCompoundShape::Self **)LODWORD(a2);
  v7 = v11[14] + *(float *)(LODWORD(a3) + 88);
  v13[1] = (float)((float)((float)(v16 * v5) + (float)(v20 * v6)) + (float)(v24 * v7)) + v28;
  v13[2] = (float)((float)((float)(v17 * v5) + (float)(v21 * v6)) + (float)(v25 * v7)) + v29;
  v13[3] = (float)((float)((float)(v18 * v5) + (float)(v22 * v6)) + (float)(v26 * v7)) + v30;
  v13[0] = (float)((float)((float)(v5 * v15) + (float)(v6 * v19)) + (float)(v7 * v23)) + v27;
  v16 = 1.0;
  v15 = COERCE_FLOAT(&off_209C190);
  v18 = a2;
  v10 = *(float *)(LODWORD(a3) + 12);
  v8 = *(const hkpShape::Self **)LODWORD(a1);
  v20 = a4;
  v17 = a1;
  v19 = a3;
  v21 = a5;
  return hkpStaticCompoundShape::castAabb(
           v12,
           v8,
           (const hkTransformf::Self *)v14,
           (const hkVector4f::Self *)v13,
           (hkpAabbCastCollector::Self *)&v15,
           v10);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundAgent::linearCast  (binary VA: 0x16ee9b0)
// Original: hkpStaticCompoundAgent::linearCast
// ----------------------------------------------------------------------------
int hkpStaticCompoundAgent::linearCast(int a1, float a2, float a3, float a4, float a5, float a6)
{
  return hkpStaticCompoundAgent::staticLinearCast(a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundAgent::Destroy  (binary VA: 0x16eea00)
// Original: hkpStaticCompoundAgent::~hkpStaticCompoundAgent
// ----------------------------------------------------------------------------
void hkpStaticCompoundAgent::Destroy(hkpStaticCompoundAgent::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C148);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      12 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundAgent::Destroy_ea16eeb00  (binary VA: 0x16eeb00)
// Original: hkpStaticCompoundAgent::~hkpStaticCompoundAgent
// ----------------------------------------------------------------------------
void hkpStaticCompoundAgent::Destroy_ea16eeb00(hkpStaticCompoundAgent::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C148);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      12 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundAgent::Construct  (binary VA: 0x16eeb70)
// Original: hkpStaticCompoundAgent::hkpStaticCompoundAgent
// ----------------------------------------------------------------------------
void hkpStaticCompoundAgent::Construct(hkpStaticCompoundAgent::Self *self, hkpContactMgr::Self *a2)
{
  hkpBvTreeAgent::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B928);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundAgent::createShapeVsStaticCompoundAgent  (binary VA: 0x16eebb0)
// Original: hkpStaticCompoundAgent::createShapeVsStaticCompoundAgent
// ----------------------------------------------------------------------------
hkpStaticCompoundAgent::Self * hkpStaticCompoundAgent::createShapeVsStaticCompoundAgent(int a1, int a2, int a3, hkpContactMgr::Self *a4)
{
  int address;
  hkpStaticCompoundAgent::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (hkpStaticCompoundAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                   *(uint32_t *)(*(uint32_t *)address + 44),
                                   64);
  hkpStaticCompoundAgent::Construct(v5, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundAgent::createStaticCompoundVsShapeAgent  (binary VA: 0x16eec00)
// Original: hkpStaticCompoundAgent::createStaticCompoundVsShapeAgent
// ----------------------------------------------------------------------------
hkpStaticCompoundAgent::Self * hkpStaticCompoundAgent::createStaticCompoundVsShapeAgent(int a1, int a2, int a3, hkpContactMgr::Self *a4)
{
  int address;
  hkpStaticCompoundAgent::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (hkpStaticCompoundAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                   *(uint32_t *)(*(uint32_t *)address + 44),
                                   64);
  hkpStaticCompoundAgent::Construct(v5, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundAgent::createStaticCompoundVsStaticCompoundAgent  (binary VA: 0x16eec50)
// Original: hkpStaticCompoundAgent::createStaticCompoundVsStaticCompoundAgent
// ----------------------------------------------------------------------------
hkpStaticCompoundAgent::Self * hkpStaticCompoundAgent::createStaticCompoundVsStaticCompoundAgent(int a1, int a2, int a3, hkpContactMgr::Self *a4)
{
  int address;
  hkpStaticCompoundAgent::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (hkpStaticCompoundAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                   *(uint32_t *)(*(uint32_t *)address + 44),
                                   64);
  hkpStaticCompoundAgent::Construct(v5, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundAgent::registerAgent  (binary VA: 0x16eeca0)
// Original: hkpStaticCompoundAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpStaticCompoundAgent::registerAgent(hkpStaticCompoundAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpStaticCompoundAgent::createStaticCompoundVsShapeAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpStaticCompoundAgent_5a0393::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpStaticCompoundAgent_5a0393::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpStaticCompoundAgent_5a0393::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 16, -1);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  v2[0] = (uint32_t)(uintptr_t)(hkpStaticCompoundAgent::createShapeVsStaticCompoundAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpStaticCompoundAgent::staticLinearCast);
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), -1, 16);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  LOWORD(v2[4]) = 256;
  v2[0] = (uint32_t)(uintptr_t)(hkpStaticCompoundAgent::createStaticCompoundVsStaticCompoundAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpStaticCompoundAgent::staticLinearCast);
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 16, 16);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::staticClass  (binary VA: 0x172ca40)
// Original: hkpStaticCompoundShapeBreakableMaterial::staticClass
// ----------------------------------------------------------------------------
void * hkpStaticCompoundShapeBreakableMaterial::staticClass()
{
  return &hkpStaticCompoundShapeBreakableMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::getClassType  (binary VA: 0x172cfb0)
// Original: hkpStaticCompoundShapeBreakableMaterial::getClassType
// ----------------------------------------------------------------------------
void * hkpStaticCompoundShapeBreakableMaterial::getClassType()
{
  return &hkpStaticCompoundShapeBreakableMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::setDefaultMapping  (binary VA: 0x172cfd0)
// Original: hkpStaticCompoundShapeBreakableMaterial::setDefaultMapping
// ----------------------------------------------------------------------------
int hkpStaticCompoundShapeBreakableMaterial::setDefaultMapping(hkpStaticCompoundShapeBreakableMaterial::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 3);
  LOBYTE(v1) = v1 & 0xF;
  result = v1 | 0x20;
  *((uint32_t *)self + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndex  (binary VA: 0x172cfe0)
// Original: hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndex
// ----------------------------------------------------------------------------
int hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndex(hkpStaticCompoundShapeBreakableMaterial::Self *self, const hkcdShape::Self *a2, unsigned int a3)
{
  return *(uint16_t *)(*((uint32_t *)a2 + 11) + 2 * a3);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::getShapeKeyMaterial  (binary VA: 0x172cff0)
// Original: hkpStaticCompoundShapeBreakableMaterial::getShapeKeyMaterial
// ----------------------------------------------------------------------------
int hkpStaticCompoundShapeBreakableMaterial::getShapeKeyMaterial(hkpStaticCompoundShapeBreakableMaterial::Self *self, const hkcdShape::Self *a2, unsigned int a3)
{
  return *(uint32_t *)(*((uint32_t *)self + 5) + 4 * *(int16_t *)(*((uint32_t *)a2 + 11) + 2 * (a3 >> *((uint8_t *)self + 13))));
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::convertShapeKeyToSubShapeId  (binary VA: 0x172d010)
// Original: hkpStaticCompoundShapeBreakableMaterial::convertShapeKeyToSubShapeId
// ----------------------------------------------------------------------------
unsigned int hkpStaticCompoundShapeBreakableMaterial::convertShapeKeyToSubShapeId(hkpStaticCompoundShapeBreakableMaterial::Self *self, unsigned int a2)
{
  return a2 >> *((uint8_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::convertShapeKeysToSubShapeIds  (binary VA: 0x172d020)
// Original: hkpStaticCompoundShapeBreakableMaterial::convertShapeKeysToSubShapeIds
// ----------------------------------------------------------------------------
int hkpStaticCompoundShapeBreakableMaterial::convertShapeKeysToSubShapeIds(hkpStaticCompoundShapeBreakableMaterial::Self *self, hkArray<unsigned int, hkContainerHeapAllocator::Self> *a2)
{
  char v2;
  int result;
  int v4;
  uint32_t *v5;

  v2 = *((uint8_t *)self + 13);
  result = *((uint32_t *)a2 + 1) - 1;
  v4 = 4 * result;
  if ( result >= 0 )
  {
    do
    {
      --result;
      v5 = (uint32_t *)(*(uint32_t *)a2 + v4);
      v4 -= 4;
      *v5 >>= v2;
    }
    while ( result != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::disableSubShapes  (binary VA: 0x172d060)
// Original: hkpStaticCompoundShapeBreakableMaterial::disableSubShapes
// ----------------------------------------------------------------------------
void hkpStaticCompoundShapeBreakableMaterial::disableSubShapes(hkpStaticCompoundShapeBreakableMaterial::Self *self, hkcdShape::Self *a2, const int16_t *a3, int a4)
{
  int v4;
  int v5;
  uint16_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = a4 - 1;
  if ( a4 - 1 >= 0 )
  {
    do
    {
      v5 = *((uint32_t *)self + 8);
      v6 = (uint16_t *)(*(uint32_t *)(v5 + 8) + 4 * a3[v4]);
      v7 = *v6;
      LOWORD(v6) = v6[1];
      v8 = *(uint32_t *)(v5 + 20) + 4 * v7;
      v9 = (uint16_t)(uintptr_t)v6;
      if ( (uint16_t)(uintptr_t)v6 != 0 )
      {
        do
        {
          v10 = *((uint32_t *)a2 + 8) + (*(uint32_t *)(v8 + 4 * v9 - 4) << 6);
          *(uint32_t *)(v10 + 12) |= 0x3F000010u;
          --v9;
        }
        while ( v9 != 0 );
      }
      --v4;
    }
    while ( v4 != -1 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::getShapeKeysForSubShapes  (binary VA: 0x172d0e0)
// Original: hkpStaticCompoundShapeBreakableMaterial::getShapeKeysForSubShapes
// ----------------------------------------------------------------------------
int hkpStaticCompoundShapeBreakableMaterial::getShapeKeysForSubShapes(hkpStaticCompoundShapeBreakableMaterial::Self *self, const hkcdShape::Self *a2, const unsigned int *a3, int a4, hkpBreakableMaterial::ShapeKeyCollector::Self *a5)
{
  int result;
  int v6;
  int v7;
  int i;
  int v9;
  unsigned int v10;
  int v11;
  char v12;

  v11 = 0;
  v12 = *((uint8_t *)self + 13);
  result = a4;
  if ( a4 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v10 = a3[v11] << v12;
        v9 = *(uint32_t *)(*((uint32_t *)a2 + 8) + (a3[v11] << 6) + 48);
        v6 = G4_VCALL<int>(v9, 64);
        v7 = v6;
        if ( v6 != 0 )
          break;
        G4_VCALL<void>(a5, 8, v10);
        result = ++v11;
        if ( v11 == a4 )
          return result;
      }
      for ( i = G4_VCALL<int>(v6, 12);
            i != -1;
            i = G4_VCALL<int>(v7, 16, i) )
      {
        G4_VCALL<void>(a5, 8, i | v10);
      }
      result = ++v11;
    }
    while ( v11 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndices  (binary VA: 0x172d1d0)
// Original: hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndices
// ----------------------------------------------------------------------------
int hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndices(int a1, int a2, uint32_t *a3, int *a4)
{
  int *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v16)) > _g4_s3 ? (8u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v17)) > _g4_s4 ? (12u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);

  v17[3] = (uint32_t)(uintptr_t)(&a1);
  v13 = a2;
  v4 = a4;
  v5 = a3;
  v6 = a4[1];
  v14 = a3[1];
  v7 = a4[2] & 0x3FFFFFFF;
  v8 = v6 + v14;
  if ( v6 + v14 > v7 )
  {
    v9 = 2 * v7;
    v15 = a3;
    if ( v8 < v9 )
      v8 = v9;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v17, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a4, v8, 2);
    v5 = v15;
    v8 = v4[1] + v14;
  }
  v4[1] = v8;
  v16 = v6 + v6 + *v4;
  result = v14 - 1;
  v11 = 4 * (v14 - 1);
  if ( v14 - 1 >= 0 )
  {
    do
    {
      v12 = *(uint32_t *)(*v5 + v11);
      v11 -= 4;
      *(uint16_t *)(v16 + 2 * result--) = *(uint16_t *)(*(uint32_t *)(v13 + 44) + 2 * v12);
    }
    while ( result != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::Destroy  (binary VA: 0x172d2b0)
// Original: hkpStaticCompoundShapeBreakableMaterial::~hkpStaticCompoundShapeBreakableMaterial
// ----------------------------------------------------------------------------
void hkpStaticCompoundShapeBreakableMaterial::Destroy(hkpStaticCompoundShapeBreakableMaterial::Self *self)
{
  hkpStaticCompoundShapeBreakableMaterial::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;
  int v17;
  int v18;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EBA8);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 8) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 5);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v18 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v18;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v15);
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 7) = 0x80000000;
  hkpBreakableMaterial::Destroy(v1);
  v16 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v17 = 36;
  if ( *((uint16_t *)v1 + 3) != 0xFFFF )
    v17 = *((uint16_t *)v1 + 3);
  G4_VCALL<void>(v16, 12, v1, v17);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::Destroy_ea172d410  (binary VA: 0x172d410)
// Original: hkpStaticCompoundShapeBreakableMaterial::~hkpStaticCompoundShapeBreakableMaterial
// ----------------------------------------------------------------------------
void hkpStaticCompoundShapeBreakableMaterial::Destroy_ea172d410(hkpStaticCompoundShapeBreakableMaterial::Self *self)
{
  hkpStaticCompoundShapeBreakableMaterial::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EBA8);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 8) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 5);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v16 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v16;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v15);
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 7) = 0x80000000;
  hkpBreakableMaterial::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::Construct  (binary VA: 0x172d530)
// Original: hkpStaticCompoundShapeBreakableMaterial::hkpStaticCompoundShapeBreakableMaterial
// ----------------------------------------------------------------------------
int hkpStaticCompoundShapeBreakableMaterial::Construct(uint32_t *a1, int a2, int a3)
{
  int v3;
  int result;

  hkpBreakableMultiMaterial::Construct(a1, a2, a3);
  *a1 = ((uint32_t)(uintptr_t)&off_209E9A8);
  v3 = a1[3];
  LOBYTE(v3) = v3 & 0xF;
  result = v3 | 0x20;
  a1[3] = result;
  return result;
}



// ============================================================================
// Address:   0x172d580 (size: 55 bytes)
// Symbol:    _ZN39hkpStaticCompoundShapeBreakableMaterialC1E24hkFinishLoadedObjectFlag
// Demangled: hkpStaticCompoundShapeBreakableMaterial::hkpStaticCompoundShapeBreakableMaterial(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN39hkpStaticCompoundShapeBreakableMaterialC2E24hkFinishLoadedObjectFlag'
void (**hkpStaticCompoundShapeBreakableMaterial::Construct(
        uint32_t *a1))(hkpStaticCompoundShapeBreakableMaterial::Self * self)
{
  hkpBreakableMultiMaterial::Construct(a1);
  *a1 = ((uint32_t)(uintptr_t)&off_209E9A8);
  return (void (**)(hkpStaticCompoundShapeBreakableMaterial::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209E9A8));
}
// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::Construct  (binary VA: 0x172d5c0)
// Original: hkpStaticCompoundShapeBreakableMaterial::hkpStaticCompoundShapeBreakableMaterial
// ----------------------------------------------------------------------------
void hkpStaticCompoundShapeBreakableMaterial::Construct(hkpStaticCompoundShapeBreakableMaterial::Self *self, const hkpStaticCompoundShapeBreakableMaterial::Self *a2)
{
  hkpBreakableMultiMaterial::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209E9A8);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShapeBreakableMaterial::duplicate  (binary VA: 0x172d600)
// Original: hkpStaticCompoundShapeBreakableMaterial::duplicate
// ----------------------------------------------------------------------------
hkpStaticCompoundShapeBreakableMaterial::Self * hkpStaticCompoundShapeBreakableMaterial::duplicate(hkpStaticCompoundShapeBreakableMaterial::Self *self)
{
  int address;
  hkpStaticCompoundShapeBreakableMaterial::Self *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpStaticCompoundShapeBreakableMaterial::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44)
                                                                                  + 8))(
                                                    *(uint32_t *)(*(uint32_t *)address + 44),
                                                    36);
  hkpStaticCompoundShapeBreakableMaterial::Construct(v2, self);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::Instance::staticClass  (binary VA: 0x17df470)
// Original: hkpStaticCompoundShape::Instance::staticClass
// ----------------------------------------------------------------------------
void * hkpStaticCompoundShape::Instance::staticClass()
{
  return &hkpStaticCompoundShapeInstanceClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::staticClass  (binary VA: 0x17df490)
// Original: hkpStaticCompoundShape::staticClass
// ----------------------------------------------------------------------------
void * hkpStaticCompoundShape::staticClass()
{
  return &hkpStaticCompoundShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::getContainer  (binary VA: 0x180cf50)
// Original: hkpStaticCompoundShape::getContainer
// ----------------------------------------------------------------------------
char * hkpStaticCompoundShape::getContainer(hkpStaticCompoundShape::Self *self)
{
  return (char *)self + 20;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::getFirstKey  (binary VA: 0x180cf60)
// Original: hkpStaticCompoundShape::getFirstKey
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::getFirstKey(hkpStaticCompoundShape::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  if ( *((int *)self + 9) <= 0 )
    return -1;
  while ( 1 )
  {
    v3 = (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 8) + (v1 << 6) + 48) + 64))(*(uint32_t *)(*((uint32_t *)self + 8) + (v1 << 6) + 48));
    if ( v3 == 0 )
      return v1 << *((uint8_t *)self + 24);
    v2 = G4_VCALL<int>(v3, 12);
    if ( v2 != -1 )
      break;
    if ( *((uint32_t *)self + 9) <= ++v1 )
      return -1;
  }
  return v2 | (v1 << *((uint8_t *)self + 24));
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::getNextKey  (binary VA: 0x180cff0)
// Original: hkpStaticCompoundShape::getNextKey
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::getNextKey(hkpStaticCompoundShape::Self *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = *((uint32_t *)self + 7);
  v2 = a2 >> *((uint8_t *)self + 24);
  v3 = v2;
  v10 = *(uint32_t *)(*((uint32_t *)self + 8) + (v2 << 6) + 48);
  v4 = G4_VCALL<int>(v10, 64);
  if ( v4 != 0 )
  {
    v5 = G4_VCALL<int>(v4, 16, a2 & v11);
    if ( v5 != -1 )
      return v5 | (v2 << *((uint8_t *)self + 24));
  }
  v7 = (v2 + 1) << 6;
  do
  {
    if ( (signed int)++v3 >= *((uint32_t *)self + 9) )
      return -1;
    v8 = (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 8) + v7 + 48) + 64))(*(uint32_t *)(*((uint32_t *)self + 8) + v7 + 48));
    if ( v8 == 0 )
      return v3 << *((uint8_t *)self + 24);
    v9 = G4_VCALL<int>(v8, 12);
    v7 += 64;
  }
  while ( v9 == -1 );
  return v9 | (v3 << *((uint8_t *)self + 24));
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::calcSizeForSpu  (binary VA: 0x180d0e0)
// Original: hkpStaticCompoundShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::calcSizeForSpu(int a1, int a2)
{
  int v2;
  int v3;
  unsigned int v4;

  v2 = 0;
  if ( *(int *)(a1 + 36) <= 0 )
    return 112;
  while ( 1 )
  {
    v3 = *(uint32_t *)(a1 + 32) + (v2 << 6);
    v4 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(v3 + 48) + 72))(*(uint32_t *)(v3 + 48), a2, 256);
    if ( v4 == -1 )
      break;
    ++v2;
    *(uint32_t *)(v3 + 12) = (v4 >> 4 << 7) | *(uint32_t *)(v3 + 12) & 0xC0FFF87F | 0x3F000000;
    if ( *(uint32_t *)(a1 + 36) <= v2 )
      return 112;
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::Destroy  (binary VA: 0x180d160)
// Original: hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::~AabbCastCollectorWrapper
// ----------------------------------------------------------------------------
void hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::Destroy(hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_209B900);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::getNumChildShapes  (binary VA: 0x180d1a0)
// Original: hkpStaticCompoundShape::getNumChildShapes
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::getNumChildShapes(hkpStaticCompoundShape::Self *self)
{
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v10[0] = 0;
  v10[1] = 0;
  v10[2] = -1;
  if ( *((int *)self + 9) <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v1 = 0;
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v2 = *(uint32_t *)(*((uint32_t *)self + 8) + (v1 << 6) + 48);
        v3 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
               (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v10,
               v2,
               0xFFFFFFFF);
        if ( v3 == -1 )
          break;
        v9 += v3;
        if ( *((uint32_t *)self + 9) <= ++v1 )
          goto LABEL_8;
      }
      v4 = G4_VCALL<int>(v2, 64);
      if ( v4 != 0 )
      {
        v5 = G4_VCALL<int>(v4, 8);
        v6 = v5;
      }
      else
      {
        v5 = 1;
        v6 = 1;
      }
      v8 = v6;
      ++v1;
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v10,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v2,
        v5);
      v9 += v8;
    }
    while ( *((uint32_t *)self + 9) > v1 );
  }
LABEL_8:
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v10,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::getMaximumProjection  (binary VA: 0x180d2f0)
// Original: hkpStaticCompoundShape::getMaximumProjection
// ----------------------------------------------------------------------------
long double hkpStaticCompoundShape::getMaximumProjection(long double a1, hkpStaticCompoundShape::Self *self, const hkVector4f::Self *a3)
{
  int v3;
  float v4; // xmm0_4
  hkpStaticCompoundShape_Internals::Self **v5;
  typedef const hkVector4f::Self *_g4_t_v7;
  typedef float _g4_t_v8;
  typedef uint8_t _g4_t_v9[60];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  if ( *((int *)self + 9) <= 0 )
  {
    return -3.40282e38f;
  }
  else
  {
    v3 = 0;
    v4 = -3.40282e38f;
    do
    {
      v5 = (hkpStaticCompoundShape_Internals::Self **)(*((uint32_t *)self + 8) + (v3++ << 6));
      std::memcpy(v9, v5, 48);
      hkpStaticCompoundShape_Internals::getTransformedMaximumProjection(v5[12], (const hkpShape::Self *)v9, a3, v7);
      v8 = a1;
      v4 = fmaxf(v8, v4);
    }
    while ( *((uint32_t *)self + 9) > v3 );
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::Destroy  (binary VA: 0x180d3f0)
// Original: hkpStaticCompoundShape::~hkpStaticCompoundShape
// ----------------------------------------------------------------------------
void hkpStaticCompoundShape::Destroy(hkpStaticCompoundShape::Self *self)
{
  hkpStaticCompoundShape::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;
  hkpStaticCompoundShape::Self *thisa;

  v1 = self;
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A127C);
  v2 = *((uint32_t *)self + 18);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1208);
  *((uint32_t *)self + 17) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 16),
      6 * (v2 & 0x3FFFFFFF));
  v3 = *((uint32_t *)self + 9);
  v4 = 0;
  *((uint32_t *)self + 16) = 0;
  for ( *((uint32_t *)self + 18) = 0x80000000; v4 < v3; ++v4 )
  {
    v5 = *(uint32_t *)(*((uint32_t *)v1 + 8) + (v4 << 6) + 48);
    if ( v5 != 0 )
    {
      v6 = *((uint32_t *)v1 + 8) + (v4 << 6);
      if ( *((uint8_t *)v1 + 25) == 1 && *(uint16_t *)(v5 + 6) != 0 )
      {
        thisa = v1;
        do
        {
          v8 = *(uint32_t *)(v5 + 4);
          HIWORD(v7) = HIWORD(v8);
          LOWORD(v7) = 0;
          v9 = v7 | (uint16_t)(v8 - 1);
          v10 = v8;
        }
        while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v10, v9) );
        v1 = thisa;
        if ( (uint16_t)v9 == 0 )
          G4_VCALL<void>(v5, 16);
        v6 = *((uint32_t *)thisa + 8) + (v4 << 6);
      }
      *(uint32_t *)(v6 + 48) = 0;
      v3 = *((uint32_t *)v1 + 9);
    }
  }
  hkpShapeKeyTable::Destroy((hkpStaticCompoundShape::Self *)((char *)v1 + 56));
  v11 = *((uint32_t *)v1 + 13);
  *((uint32_t *)v1 + 12) = 0;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 11),
      2 * (v11 & 0x3FFFFFFF));
  v12 = *((uint32_t *)v1 + 10);
  *((uint32_t *)v1 + 11) = 0;
  *((uint32_t *)v1 + 13) = 0x80000000;
  *((uint32_t *)v1 + 9) = 0;
  if ( v12 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 8),
      v12 << 6);
  *((uint32_t *)v1 + 8) = 0;
  *((uint32_t *)v1 + 10) = 0x80000000;
  *((uint32_t *)v1 + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::Destroy_ea180d5f0  (binary VA: 0x180d5f0)
// Original: hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::~AabbCastCollectorWrapper
// ----------------------------------------------------------------------------
void hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::Destroy_ea180d5f0(hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::Self *self)
{
  int address;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_209B900);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    28);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::getCollisionFilterInfo  (binary VA: 0x180d640)
// Original: hkpStaticCompoundShape::getCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::getCollisionFilterInfo(hkpStaticCompoundShape::Self *self, unsigned int a2)
{
  int *address;
  int v3;
  uint32_t *v4;
  uint64_t v5; // rax
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint64_t v11; // rax
  unsigned int v13;
  int v14;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TtSCS::getCollisionFilterInfo");
    v5 = __rdtsc();
    v4[1] = v5;
    v4 += 3;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4);
  }
  v6 = *((uint32_t *)self + 8) + (a2 >> *((uint8_t *)self + 24) << 6);
  v7 = *(uint32_t *)(v6 + 56);
  if ( v7 != 0 )
  {
    if ( (*(uint8_t *)(v6 + 12) & 1) != 0 )
    {
      v7 = 0;
    }
    else
    {
      v13 = *((uint32_t *)self + 8) + (a2 >> *((uint8_t *)self + 24) << 6);
      v14 = *((uint32_t *)self + 7);
      v8 = (*(int (**)(uint32_t))(**(uint32_t **)(v6 + 48) + 64))(*(uint32_t *)(v6 + 48));
      v9 = G4_VCALL<int>(v8, 20, a2 & v14);
      v6 = v13;
      v4 = *(uint32_t **)(v3 + 4);
      v7 = *(uint32_t *)(v13 + 56) & v9;
    }
  }
  v10 = *(uint32_t *)(v6 + 52) | v7;
  if ( *(uint32_t *)(v3 + 12) > (unsigned int)(uintptr_t)(v4) )
  {
    *v4 = (uint32_t)(uintptr_t)("Et");
    v11 = __rdtsc();
    v4[1] = v11;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::getAabb  (binary VA: 0x180d720)
// Original: hkpStaticCompoundShape::getAabb
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::getAabb(hkpStaticCompoundShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  uint64_t v11; // rax
  uint32_t *v12;
  typedef hkAabb::Self *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v15)) > _g4_s1 ? (28u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v16)) > _g4_s2 ? (28u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v17)) > _g4_s3 ? (32u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v18)) > _g4_s4 ? (36u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v19)) > _g4_s5 ? (40u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v20)) > _g4_s6 ? (44u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v21)) > _g4_s7 ? (48u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v22)) > _g4_s8 ? (52u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v23)) > _g4_s9 ? (56u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v24)) > _g4_s10 ? (60u + sizeof(_g4_t_v24)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v6 = *(uint32_t **)(*address + 4);
  v15 = v6;
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(v5 + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtSCS::getAabb");
    v7 = __rdtsc();
    v15[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
  }
  v16 = v5;
  v17 = *((float *)self + 20);
  v18 = *((float *)self + 21);
  v19 = *((float *)self + 22);
  v20 = *((float *)self + 23);
  v21 = *((float *)self + 24);
  v22 = *((float *)self + 25);
  v23 = *((float *)self + 26);
  v24 = *((float *)self + 27);
  hkAabbUtil::calcAabb(a2, (const hkTransformf::Self *)&v17, (const hkAabb::Self *)&v17, v14);
  v21 = v21 + a3;
  v22 = v22 + a3;
  v23 = v23 + a3;
  v24 = v24 + a3;
  v17 = v17 - a3;
  v8 = v18;
  *(float *)a4 = v17;
  v18 = v8 - a3;
  *(float *)&v11 = v8 - a3;
  v9 = v19;
  *((uint32_t *)a4 + 1) = v11;
  v19 = v9 - a3;
  *(float *)&v11 = v9 - a3;
  v10 = v20;
  *((uint32_t *)a4 + 2) = v11;
  v20 = v10 - a3;
  *((float *)a4 + 3) = v10 - a3;
  *((float *)a4 + 4) = v21;
  *((float *)a4 + 5) = v22;
  *((float *)a4 + 6) = v23;
  *(float *)&v11 = v24;
  *((float *)a4 + 7) = v24;
  v12 = *(uint32_t **)(v16 + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(v16 + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("Et");
    v11 = __rdtsc();
    v12[1] = v11;
    *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::Destroy_ea180d8d0  (binary VA: 0x180d8d0)
// Original: hkpStaticCompoundShape::~hkpStaticCompoundShape
// ----------------------------------------------------------------------------
void hkpStaticCompoundShape::Destroy_ea180d8d0(hkpStaticCompoundShape::Self *self)
{
  int v1;
  int v2;

  hkpStaticCompoundShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::addHit  (binary VA: 0x180d940)
// Original: hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::addHit
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::addHit(hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::Self *self, unsigned int a2)
{
  int v2;
  int result;
  int v4;
  char v5;
  unsigned int v6;
  int v7;

  v2 = *((uint32_t *)self + 2);
  result = *((uint32_t *)self + 6);
  v4 = *((uint32_t *)self + 5);
  v5 = *(uint8_t *)(v2 + 24);
  if ( (result & 0x10) == 0 )
  {
    v6 = a2 | (*((uint32_t *)self + 4) << v5);
    if ( a2 > 0x24 )
    {
      if ( (result & 0x40) == 0 )
        goto LABEL_10;
      result = (uint8_t)hkpShapeKeyTable::exists(
                                  (hkpShapeKeyTable::Self *)(v2 + 56),
                                  a2 | (*((uint32_t *)self + 4) << v5))
             ^ 1;
    }
    else
    {
      if ( (result & 0x20) == 0 )
        goto LABEL_10;
      if ( a2 > 0xC )
      {
        v4 += 32;
        v7 = 1 << (a2 - 13);
      }
      else
      {
        v7 = 1 << (a2 + 11);
      }
      result = (*(uint32_t *)(v4 + 12) & v7 & 0xC0FFFFFF) == 0;
    }
    if ( result == 0 )
      return result;
LABEL_10:
    (***((void (****)(uint32_t, unsigned int))self + 3))(*((uint32_t *)self + 3), v6);
    result = *((uint32_t *)self + 3);
    *((uint32_t *)self + 1) = *(uint32_t *)(result + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::Construct  (binary VA: 0x180da10)
// Original: hkpStaticCompoundShape::hkpStaticCompoundShape
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::Construct(int a1, char a2)
{
  float v2; // xmm1_4
  float v4; // xmm1_4

  *(uint32_t *)(a1 + 20) = ((uint32_t)(uintptr_t)&off_20A127C);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A1208);
  *(uint8_t *)(a1 + 25) = a2;
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint8_t *)(a1 + 8) = 16;
  *(uint8_t *)(a1 + 9) = 4;
  *(uint8_t *)(a1 + 10) = 0;
  *(uint8_t *)(a1 + 11) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint8_t *)(a1 + 16) = 2;
  *(uint8_t *)(a1 + 24) = -1;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0x80000000;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0x80000000;
  hkpShapeKeyTable::Construct((hkpShapeKeyTable::Self *)(a1 + 56));
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0x80000000;
  *(uint32_t *)(a1 + 80) = 2139095022;
  v2 = *(float *)(a1 + 80);
  *(uint32_t *)(a1 + 84) = 2139095022;
  *(float *)(a1 + 96) = -v2;
  *(uint32_t *)(a1 + 88) = 2139095022;
  v4 = -*(float *)(a1 + 84);
  *(uint32_t *)(a1 + 92) = 2139095022;
  *(float *)(a1 + 100) = v4;
  *(float *)(a1 + 104) = -*(float *)(a1 + 88);
  *(float *)(a1 + 108) = -*(float *)(a1 + 92);
  return 2139095022;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::Construct  (binary VA: 0x180db30)
// Original: hkpStaticCompoundShape::hkpStaticCompoundShape
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::Construct(int a1, int a2)
{
  int result;
  char v3;

  hkpBvTreeShape::hkpBvTreeShape(a1, a2);
  *(uint32_t *)(a1 + 20) = ((uint32_t)(uintptr_t)&off_20A127C);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A1208);
  hkpShapeKeyTable::Construct();
  if ( a2 != 0 )
  {
    v3 = *(uint8_t *)(a1 + 24);
    result = 0;
    *(uint8_t *)(a1 + 8) = 16;
    *(uint8_t *)(a1 + 16) = 2;
    *(uint8_t *)(a1 + 25) = 1;
    if ( v3 >= 0 )
    {
      LOBYTE(result) = 1;
      result = (result << v3) - 1;
    }
    *(uint32_t *)(a1 + 28) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::setShapeKeyEnabled  (binary VA: 0x180dbb0)
// Original: hkpStaticCompoundShape::setShapeKeyEnabled
// ----------------------------------------------------------------------------
unsigned int hkpStaticCompoundShape::setShapeKeyEnabled(hkpStaticCompoundShape::Self *self, unsigned int a2, unsigned int a3)
{
  unsigned int v3;
  int v4;
  unsigned int result;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;

  v3 = *((uint32_t *)self + 8) + (a2 >> *((uint8_t *)self + 24) << 6);
  v4 = *(uint32_t *)(v3 + 12);
  result = v4 & 0xC0FFFFFF;
  v6 = v4 & 0x7F;
  if ( (v4 & 1) != 0 )
  {
    v7 = v4 & 0x6F;
    if ( a3 == 0 )
      v7 = *(uint32_t *)(v3 + 12) & 0x6F | 0x10;
    result = v4 & 0xC0FFFF80 | v7 | 0x3F000000;
    *(uint32_t *)(v3 + 12) = result;
    return result;
  }
  v8 = a2 & *((uint32_t *)self + 7);
  if ( v8 <= 0x24 )
  {
    if ( a3 != 0 && (v4 & 0x20) == 0 )
      return result;
    if ( v8 <= 0xC )
    {
      v9 = *((uint32_t *)self + 8) + (a2 >> *((uint8_t *)self + 24) << 6);
      v10 = 1 << (v8 + 11);
      if ( a3 == 0 )
        goto LABEL_11;
    }
    else
    {
      v9 = v3 + 32;
      result = *(uint32_t *)(v3 + 44) & 0xC0FFFFFF;
      v10 = 1 << (v8 - 13);
      if ( a3 == 0 )
      {
LABEL_11:
        *(uint32_t *)(v9 + 12) = v10 | result | 0x3F000000;
        result = v6 | *(uint32_t *)(v3 + 12) & 0xC0FFFF80 | 0x3F000020;
        *(uint32_t *)(v3 + 12) = result;
        return result;
      }
    }
    *(uint32_t *)(v9 + 12) = result & ~v10 | 0x3F000000;
    return result;
  }
  result = a3;
  if ( a3 != 0 )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v11 = *(uint32_t *)(v3 + 12);
      result = (unsigned int)(uintptr_t)(hkpShapeKeyTable::remove((hkpStaticCompoundShape::Self *)((char *)self + 56), a2));
      if ( *((uint32_t *)self + 15) == 0 )
      {
        result = v11 & 0x3F | *(uint32_t *)(v3 + 12) & 0xC0FFFF80 | 0x3F000000;
        *(uint32_t *)(v3 + 12) = result;
      }
    }
  }
  else
  {
    hkpShapeKeyTable::insert((hkpStaticCompoundShape::Self *)((char *)self + 56), a2);
    result = v6 | *(uint32_t *)(v3 + 12) & 0xC0FFFF80 | 0x3F000040;
    *(uint32_t *)(v3 + 12) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::isShapeKeyEnabled  (binary VA: 0x180dd30)
// Original: hkpStaticCompoundShape::isShapeKeyEnabled
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::isShapeKeyEnabled(hkpStaticCompoundShape::Self *self, unsigned int a2)
{
  unsigned int i;
  uint32_t *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  hkpStaticCompoundShape::Self *v8;
  char v9;
  int v10;
  int v11;
  int result;

  for ( i = a2; ; i = v7 )
  {
    v4 = (uint32_t *)(*((uint32_t *)self + 8) + (i >> *((uint8_t *)self + 24) << 6));
    v5 = v4[3];
    v6 = v5 & 0xC0FFFFFF;
    if ( (v5 & 0x10) != 0 )
      return 0;
    v7 = a2 & *((uint32_t *)self + 7);
    if ( v7 <= 0x24 )
    {
      if ( (v5 & 0x20) == 0 )
        goto LABEL_5;
      if ( v7 <= 0xC )
      {
        v10 = 1 << (v7 + 11);
      }
      else
      {
        v6 = v4[11] & 0xC0FFFFFF;
        v10 = 1 << (v7 - 13);
      }
      v11 = (v10 & v6) == 0;
    }
    else
    {
      if ( (v5 & 0x40) == 0 )
        goto LABEL_5;
      v11 = (uint8_t)hkpShapeKeyTable::exists((hkpStaticCompoundShape::Self *)((char *)self + 56), a2) ^ 1;
    }
    if ( v11 == 0 )
      return 0;
LABEL_5:
    v8 = (hkpStaticCompoundShape::Self *)v4[12];
    v9 = *((uint8_t *)v8 + 8);
    if ( v9 == 8 )
      break;
    if ( v9 != 16 )
      return 1;
    self = v8;
    a2 = v7;
  }
  result = 1;
  if ( v7 <= 0xFF )
    return *((uint32_t *)v8 + (v7 >> 5) + 20) & (1 << v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::enableAllInstancesAndShapeKeys  (binary VA: 0x180de50)
// Original: hkpStaticCompoundShape::enableAllInstancesAndShapeKeys
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::enableAllInstancesAndShapeKeys(hkpStaticCompoundShape::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;

  hkpShapeKeyTable::clear((hkpStaticCompoundShape::Self *)((char *)self + 56));
  result = *((uint32_t *)self + 9);
  v2 = 0;
  if ( result > 0 )
  {
    do
    {
      v3 = v2++;
      result = *((uint32_t *)self + 8) + (v3 << 6);
      v4 = *(uint32_t *)(result + 12);
      *(uint32_t *)(result + 44) = 1056964608;
      *(uint32_t *)(result + 12) = v4 & 0x78F | 0x3F000000;
    }
    while ( *((uint32_t *)self + 9) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::queryAabb  (binary VA: 0x180f930)
// Original: hkpStaticCompoundShape::queryAabb
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::queryAabb(uint8_t **self, const hkAabb::Self *a2, hkArray<unsigned int, hkContainerHeapAllocator::Self> *a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  hkLifoAllocator::Self **v14;
  hkLifoAllocator::Self *v15;
  hkLifoAllocator::Self **v16;
  bool v17; // cc
  char *v18;
  int v19;
  hkLifoAllocator::Self *v20;
  signed int v21;
  uint64_t v22; // rax
  uint32_t *v23;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34[12];
  typedef uint8_t **_g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef hkArray<unsigned int, hkContainerHeapAllocator::Self> *_g4_t_v44;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v29)) > _g4_s4 ? (32u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v30)) > _g4_s5 ? (36u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v31)) > _g4_s6 ? (40u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v32)) > _g4_s7 ? (44u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v33)) > _g4_s8 ? (48u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v34)) > _g4_s9 ? (64u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v35)) > _g4_s10 ? (112u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v36)) > _g4_s11 ? (128u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (132u + sizeof(_g4_t_v37)) > _g4_s12 ? (132u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v38)) > _g4_s13 ? (136u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v39)) > _g4_s14 ? (140u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v40)) > _g4_s15 ? (144u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (148u + sizeof(_g4_t_v41)) > _g4_s16 ? (148u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v42)) > _g4_s17 ? (152u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (156u + sizeof(_g4_t_v43)) > _g4_s18 ? (156u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (160u + sizeof(_g4_t_v44)) > _g4_s19 ? (160u + sizeof(_g4_t_v44)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 132u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 136u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 140u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 144u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 148u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 152u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 156u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 160u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtSCS::queryAabb");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v7 = *((float *)a2 + 1);
  v35 = self;
  v8 = *((float *)a2 + 2);
  v28 = v7;
  v36 = *(float *)a2;
  v37 = v7;
  v9 = *((float *)a2 + 3);
  v10 = *((float *)a2 + 4);
  v27 = v8;
  v38 = v8;
  v26 = v9;
  v11 = *((float *)a2 + 5);
  v39 = v9;
  v25 = v10;
  v12 = *((float *)a2 + 7);
  v40 = v10;
  v13 = *((float *)a2 + 6);
  v41 = v11;
  v44 = a3;
  v34[4] = v36;
  LODWORD(v34[0]) = (uint32_t)(uintptr_t)(&v35);
  v42 = v13;
  v43 = v12;
  v34[5] = v28;
  v34[6] = v27;
  v34[11] = v12;
  v34[7] = v26;
  v34[8] = v25;
  v34[10] = v13;
  v34[9] = v11;
  v29 = nullptr;
  v30 = 0;
  v31 = 0x80000000;
  v33 = 64;
  v14 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v15 = *v14;
  v16 = v14;
  v17 = *((uint32_t *)*v14 + 2) <= 3071;
  v18 = *((char **)*v14 + 3);
  if ( v17 || (unsigned int)(uintptr_t)(v18 + 3072) > *((uint32_t *)v15 + 4) )
    v18 = (char *)hkLifoAllocator::allocateFromNewSlab(v15, 3072);
  else
    *((uint32_t *)v15 + 3) = (uint32_t)(uintptr_t)(v18 + 3072);
  v29 = v18;
  v32 = v18;
  v31 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<hkpStaticCompoundShape_Internals::UnlimitedAabbQuery>>(
    self + 16,
    (int *)&v29,
    v34);
  v19 = 0;
  if ( v29 != v32 )
    v19 = v30;
  v20 = *v16;
  v30 = v19;
  v21 = (48 * v33 + 127) & 0xFFFFFF80;
  if ( v21 > *((uint32_t *)v20 + 2) || *((char **)v20 + 3) != &v32[v21] || v32 == *((char **)v20 + 5) )
    hkLifoAllocator::slowBlockFree(v20, v32, (48 * v33 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v20 + 3) = (uint32_t)(uintptr_t)(v32);
  LODWORD(v22) = v31;
  v30 = 0;
  if ( v31 >= 0 )
    LODWORD(v22) = (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     v29,
                     48 * v31);
  v23 = *(uint32_t **)(v4 + 4);
  if ( (unsigned int)(uintptr_t)(v23) < *(uint32_t *)(v4 + 12) )
  {
    *v23 = (uint32_t)(uintptr_t)("Et");
    v22 = __rdtsc();
    v23[1] = v22;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v23 + 3);
  }
  return v22;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::queryAabbImpl  (binary VA: 0x1810aa0)
// Original: hkpStaticCompoundShape::queryAabbImpl
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::queryAabbImpl(uint8_t **self, const hkAabb::Self *a2, unsigned int *a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  hkLifoAllocator::Self **v15;
  hkLifoAllocator::Self *v16;
  hkLifoAllocator::Self **v17;
  bool v18; // cc
  char *v19;
  int v20;
  hkLifoAllocator::Self *v21;
  signed int v22;
  uint32_t *v23;
  int v24;
  uint64_t v25; // rax
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[12];
  typedef uint8_t **_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef unsigned int *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v29)) > _g4_s2 ? (16u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v30)) > _g4_s3 ? (20u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v31)) > _g4_s4 ? (32u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v32)) > _g4_s5 ? (36u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v33)) > _g4_s6 ? (40u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v34)) > _g4_s7 ? (44u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v35)) > _g4_s8 ? (48u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v36)) > _g4_s9 ? (64u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v37)) > _g4_s10 ? (112u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v38)) > _g4_s11 ? (128u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (132u + sizeof(_g4_t_v39)) > _g4_s12 ? (132u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v40)) > _g4_s13 ? (136u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v41)) > _g4_s14 ? (140u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v42)) > _g4_s15 ? (144u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (148u + sizeof(_g4_t_v43)) > _g4_s16 ? (148u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v44)) > _g4_s17 ? (152u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (156u + sizeof(_g4_t_v45)) > _g4_s18 ? (156u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (160u + sizeof(_g4_t_v46)) > _g4_s19 ? (160u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (164u + sizeof(_g4_t_v47)) > _g4_s20 ? (164u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (168u + sizeof(_g4_t_v48)) > _g4_s21 ? (168u + sizeof(_g4_t_v48)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 128u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 132u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 136u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 140u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 144u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 148u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 152u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 156u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 160u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 164u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 168u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtSCS::queryAabbImpl");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = *((uint32_t *)a2 + 1);
  v37 = self;
  v9 = *((uint32_t *)a2 + 2);
  v38 = *(uint32_t *)a2;
  v30 = v8;
  v10 = *((uint32_t *)a2 + 3);
  v39 = v8;
  v11 = *((uint32_t *)a2 + 4);
  v29 = v9;
  v40 = v9;
  v28 = v10;
  v12 = *((uint32_t *)a2 + 5);
  v41 = v10;
  v27 = v11;
  v13 = *((uint32_t *)a2 + 7);
  v42 = v11;
  v14 = *((uint32_t *)a2 + 6);
  v43 = v12;
  v46 = a3;
  v44 = v14;
  v45 = v13;
  v47 = a4;
  v48 = 0;
  v36[1] = 1;
  v36[0] = (uint32_t)(uintptr_t)(&v37);
  v36[4] = v38;
  v36[5] = v30;
  v36[11] = v13;
  v36[6] = v29;
  v36[7] = v28;
  v36[8] = v27;
  v36[10] = v14;
  v36[9] = v12;
  v31 = nullptr;
  v32 = 0;
  v33 = 0x80000000;
  v35 = 64;
  v15 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v16 = *v15;
  v17 = v15;
  v18 = *((uint32_t *)*v15 + 2) <= 3071;
  v19 = *((char **)*v15 + 3);
  if ( v18 || (unsigned int)(uintptr_t)(v19 + 3072) > *((uint32_t *)v16 + 4) )
    v19 = (char *)hkLifoAllocator::allocateFromNewSlab(v16, 3072);
  else
    *((uint32_t *)v16 + 3) = (uint32_t)(uintptr_t)(v19 + 3072);
  v31 = v19;
  v34 = v19;
  v33 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkpStaticCompoundShape_Internals::LimitedAabbQuery>>(
    self + 16,
    &v31,
    (int)(uintptr_t)(v36));
  v20 = 0;
  if ( v31 != v34 )
    v20 = v32;
  v21 = *v17;
  v32 = v20;
  v22 = (48 * v35 + 127) & 0xFFFFFF80;
  if ( v22 > *((uint32_t *)v21 + 2) || *((char **)v21 + 3) != &v34[v22] || v34 == *((char **)v21 + 5) )
    hkLifoAllocator::slowBlockFree(v21, v34, (48 * v35 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v21 + 3) = (uint32_t)(uintptr_t)(v34);
  v32 = 0;
  if ( v33 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v31,
      48 * v33);
  v23 = *(uint32_t **)(v5 + 4);
  v24 = v48;
  if ( (unsigned int)(uintptr_t)(v23) < *(uint32_t *)(v5 + 12) )
  {
    *v23 = (uint32_t)(uintptr_t)("Et");
    v25 = __rdtsc();
    v23[1] = v25;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v23 + 3);
  }
  return v24;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::castAabb  (binary VA: 0x1812020)
// Original: hkpStaticCompoundShape::castAabb
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::castAabb(uint8_t **self, const hkpShape::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, hkpAabbCastCollector::Self *a5, float a6, int a7, int a8, int a9, int a10, int a11, char *a12, int a13, int a14, char *a15, int a16, int a17, int a18, int a19, float a20, float a21, float a22, float a23, float a24, float a25, float a26, float a27, int32_t a28, float a29, int32_t a30, float a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, float a48, float a49, float a50, float a51, int32_t a52, int32_t a53, int32_t a54, int a55, float a56, float a57, float a58, int a59, float a60, float a61, float a62, float a63)
{
  int *address;
  int v64;
  uint32_t *v65;
  uint64_t v66; // rax
  int v67;
  bool v68;
  float v69; // xmm2_4
  __m128i v70;
  __m128i v71;
  __m128i v72;
  __m128i v73;
  char v74;
  char v75;
  int v76;
  char v77;
  int v78;
  int v79;
  float v80; // xmm5_4
  int v81;
  hkLifoAllocator::Self **v82;
  hkLifoAllocator::Self *v83;
  hkLifoAllocator::Self **v84;
  bool v85; // cc
  char *v86;
  int v87;
  hkLifoAllocator::Self *v88;
  signed int v89;
  uint64_t v90; // rax
  uint32_t *v91;
  int v92;
  int v93;
  float v94; // xmm6_4
  int v95;
  int v96;
  int v97;
  int v98;
  float v99; // xmm6_4
  uint32_t v101[51];
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v64 = *address;
  v65 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v65) < *(uint32_t *)(*address + 12) )
  {
    *v65 = (uint32_t)(uintptr_t)("TtSCS::castAabb");
    v66 = __rdtsc();
    v65[1] = v66;
    *(uint32_t *)(v64 + 4) = (uint32_t)(uintptr_t)(v65 + 3);
  }
  v67 = *(uint32_t *)a4;
  *(float *)&v101[20] = a6;
  v101[12] = v67;
  v101[13] = *((uint32_t *)a4 + 1);
  v101[14] = *((uint32_t *)a4 + 2);
  v101[15] = *((uint32_t *)a4 + 3);
  v101[16] = (uint32_t)(uintptr_t)(a3);
  v101[17] = (uint32_t)(uintptr_t)(self);
  v101[18] = (uint32_t)(uintptr_t)(a2);
  v101[19] = (uint32_t)(uintptr_t)(a5);
  G4_VCALL<void>(a2, 24, a3, LODWORD(a6), v101);
  v68 = false;
  v106 = (float)(a20 + a24) * 0.5;
  v105 = (float)(a21 + a25) * 0.5;
  v104 = (float)(a22 + a26) * 0.5;
g4_m128_raw(v72) = *((unsigned int *)a4 + 2);
g4_m128_raw(v71) = *((unsigned int *)a4 + 1);
g4_m128_raw(v70) = *(unsigned int *)a4;
  *(float *)g4_m128_ptr<int32_t>(v72) = (float)(*(float *)g4_m128_ptr<int32_t>(v72) - *((float *)a3 + 14)) + v104;
  v69 = (float)(*((float *)a4 + 3) - *((float *)a3 + 15)) + (float)((float)(a23 + a27) * 0.5);
  *(float *)g4_m128_ptr<int32_t>(v70) = (float)(*(float *)g4_m128_ptr<int32_t>(v70) - *((float *)a3 + 12)) + v106;
  a29 = (float)(*(float *)g4_m128_ptr<int32_t>(v71) - *((float *)a3 + 13)) + v105;
  a30 =g4_m128_lane<int32_t>(v72, 0);
  a31 = v69;
  a28 =g4_m128_lane<int32_t>(v70, 0);
  a44 = a7;
  *(float *)g4_m128_ptr<int32_t>(v70) = *(float *)g4_m128_ptr<int32_t>(v70) - v106;
  *(float *)g4_m128_ptr<int32_t>(v71) = a29 - v105;
  *(float *)g4_m128_ptr<int32_t>(v72) = *(float *)g4_m128_ptr<int32_t>(v72) - v104;
  v73 = v72;
  if ( *(float *)g4_m128_ptr<int32_t>(v70) == 0.0 )
    v68 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v70));
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v71)) || (v74 = 2, *(float *)g4_m128_ptr<int32_t>(v71) != 0.0) )
    v74 = 0;
  v75 = v74 | v68;
  if ( *(float *)g4_m128_ptr<int32_t>(v72) == 0.0 )
  {
    v75 |= 4u;
    if ( (v75 & 1) == 0 )
    {
LABEL_9:
      v76 = _mm_cvtsi128_si32(v70);
      v77 = (*(float *)g4_m128_ptr<int32_t>(v70) >= 0.0) | 8;
      goto LABEL_10;
    }
  }
  else if ( (v75 & 1) == 0 )
  {
    goto LABEL_9;
  }
  v77 = 9;
  v76 = 0;
g4_m128_raw(v70) = 0;
LABEL_10:
  v78 = _mm_cvtsi128_si32(v71);
  if ( (v75 & 2) != 0 )
  {
    v78 = 0;
g4_m128_raw(v71) = 0;
  }
  if ( (v75 & 4) != 0 )
  {
    v79 = 0;
    v80 = 3.40282e38f;
g4_m128_raw(v73) = 0;
    if ( v76 >= 0 )
      goto LABEL_14;
  }
  else
  {
    v79 = _mm_cvtsi128_si32(v72);
    v80 = 3.40282e38f;
    if ( v76 >= 0 )
      goto LABEL_14;
  }
  v80 = -3.40282e38f;
LABEL_14:
  v103 = 3.40282e38f;
  if ( v78 < 0 )
    v103 = -3.40282e38f;
  v102 = 3.40282e38f;
  if ( v79 < 0 )
    v102 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v70) != 0.0 )
  {
    v97 = _mm_cvtsi128_si32(v70);
    v98 = (2130706432 - v97) & ((v97 ^ (v97 + 2139095040)) >> 31);
    v99 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v70)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v70) * *(float *)&v98)) * *(float *)&v98)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v70) * *(float *)&v98)) * *(float *)&v98);
    v80 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v70) * v99)) * v99;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v71) != 0.0 )
  {
    v95 = _mm_cvtsi128_si32(v71);
    v96 = (2130706432 - v95) & ((v95 ^ (v95 + 2139095040)) >> 31);
    v103 = (float)((float)(2.0
                         - (float)(*(float *)g4_m128_ptr<int32_t>(v71)
                                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)&v96))
                                         * *(float *)&v96)))
                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)&v96)) * *(float *)&v96))
         * (float)(2.0
                 - (float)(*(float *)g4_m128_ptr<int32_t>(v71)
                         * (float)((float)(2.0
                                         - (float)(*(float *)g4_m128_ptr<int32_t>(v71)
                                                 * (float)((float)(2.0
                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)&v96))
                                                         * *(float *)&v96)))
                                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)&v96))
                                         * *(float *)&v96))));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v73) != 0.0 )
  {
    v92 = _mm_cvtsi128_si32(v73);
    v93 = (2130706432 - v92) & ((v92 ^ (v92 + 2139095040)) >> 31);
    v94 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v73) * *(float *)&v93)) * *(float *)&v93)
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v73)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v73) * *(float *)&v93)) * *(float *)&v93)));
    v102 = v94 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v73) * v94));
  }
  a55 = 1065353216;
  a12 = nullptr;
  a13 = 0;
  a14 = 0x80000000;
  a16 = 64;
  a52 =g4_m128_lane<int32_t>(v70, 0);
  LOBYTE(v81) = *(float *)g4_m128_ptr<int32_t>(v71) >= 0.0 ? 2 : 0;
  a53 =g4_m128_lane<int32_t>(v71, 0);
  if ( *(float *)g4_m128_ptr<int32_t>(v73) >= 0.0 )
    v81 = *(float *)g4_m128_ptr<int32_t>(v71) < 0.0 ? 4 : 6;
  a54 =g4_m128_lane<int32_t>(v73, 0);
  a56 = v80;
  a57 = v103;
  a59 = ((uint8_t)v77 | (uint8_t)v81) & 7 | 0x3F000000;
  a48 = (float)(a20 + a24) * 0.5;
  a49 = (float)(a21 + a25) * 0.5;
  a58 = v102;
  a50 = (float)(a22 + a26) * 0.5;
  a51 = (float)(a23 + a27) * 0.5;
  a60 = (float)(a24 - a20) * 0.5;
  a61 = (float)(a25 - a21) * 0.5;
  a62 = (float)(a26 - a22) * 0.5;
  a63 = 0.5 * (float)(a27 - a23);
  v82 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v83 = *v82;
  v84 = v82;
  v85 = *((uint32_t *)*v82 + 2) <= 3071;
  v86 = *((char **)*v82 + 3);
  if ( v85 || (unsigned int)(uintptr_t)(v86 + 3072) > *((uint32_t *)v83 + 4) )
    v86 = (char *)hkLifoAllocator::allocateFromNewSlab(v83, 3072);
  else
    *((uint32_t *)v83 + 3) = (uint32_t)(uintptr_t)(v86 + 3072);
  a12 = v86;
  a15 = v86;
  a14 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbCastWrapper<hkpStaticCompoundShape_Internals::AabbCastQuery::Self>>(
    self + 16,
    &a12,
    (float *)&a44);
  v87 = 0;
  if ( a12 != a15 )
    v87 = a13;
  v88 = *v84;
  a13 = v87;
  v89 = (48 * a16 + 127) & 0xFFFFFF80;
  if ( v89 > *((uint32_t *)v88 + 2) || *((char **)v88 + 3) != &a15[v89] || a15 == *((char **)v88 + 5) )
    hkLifoAllocator::slowBlockFree(v88, a15, (48 * a16 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v88 + 3) = (uint32_t)(uintptr_t)(a15);
  LODWORD(v90) = a14;
  a13 = 0;
  if ( a14 >= 0 )
    LODWORD(v90) = (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     a12,
                     48 * a14);
  v91 = *(uint32_t **)(v64 + 4);
  if ( (unsigned int)(uintptr_t)(v91) < *(uint32_t *)(v64 + 12) )
  {
    *v91 = (uint32_t)(uintptr_t)("Et");
    v90 = __rdtsc();
    v91[1] = v90;
    *(uint32_t *)(v64 + 4) = (uint32_t)(uintptr_t)(v91 + 3);
  }
  return v90;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::castAabbImpl  (binary VA: 0x1812740)
// Original: hkpStaticCompoundShape::castAabbImpl
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::castAabbImpl(uint8_t **self, const hkAabb::Self *a2, const hkVector4f::Self *a3, hkpAabbCastCollector::Self *a4)
{
  int *address;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  bool v8;
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  __m128i v15;
  float v16; // xmm1_4
  float v17; // xmm3_4
  __m128i v18;
  float v19; // xmm3_4
  __m128i v20;
  char v21; // si
  char v22;
  int v23;
  char v24;
  int v25;
  int v26;
  float v27; // xmm7_4
  int v28;
  hkLifoAllocator::Self **v29;
  hkLifoAllocator::Self *v30;
  hkLifoAllocator::Self **v31;
  bool v32; // cc
  char *v33;
  int v34;
  hkLifoAllocator::Self *v35;
  signed int v36;
  uint64_t v37; // rax
  uint32_t *v38;
  int v39;
  int v40;
  float v41; // xmm5_4
  int v42;
  int v43;
  float v44; // xmm5_4
  int v45;
  int v46;
  float v47; // xmm5_4
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef int _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef char *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef char *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t _g4_t_v65[24];
  typedef float _g4_t_v66[27];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v49)) > _g4_s0 ? (0u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v50)) > _g4_s1 ? (8u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v51)) > _g4_s2 ? (12u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v52)) > _g4_s3 ? (16u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v53)) > _g4_s4 ? (24u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v54)) > _g4_s5 ? (28u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v55)) > _g4_s6 ? (36u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v56)) > _g4_s7 ? (40u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v57)) > _g4_s8 ? (40u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v58)) > _g4_s9 ? (44u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v59)) > _g4_s10 ? (44u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v60)) > _g4_s11 ? (48u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v61)) > _g4_s12 ? (52u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v62)) > _g4_s13 ? (56u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v63)) > _g4_s14 ? (60u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v64)) > _g4_s15 ? (64u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v65)) > _g4_s16 ? (80u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (176u + sizeof(_g4_t_v66)) > _g4_s17 ? (176u + sizeof(_g4_t_v66)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 176u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v55 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtSCS::castAabb");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v55 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v7 = *(uint32_t *)a2;
  v65[18] = 0;
  v65[0] = v7;
  v65[1] = *((uint32_t *)a2 + 1);
  v65[2] = *((uint32_t *)a2 + 2);
  v65[3] = *((uint32_t *)a2 + 3);
  v65[4] = *((uint32_t *)a2 + 4);
  v65[5] = *((uint32_t *)a2 + 5);
  v65[6] = *((uint32_t *)a2 + 6);
  v65[7] = *((uint32_t *)a2 + 7);
  v65[8] = *(uint32_t *)a3;
  v65[9] = *((uint32_t *)a3 + 1);
  v65[10] = *((uint32_t *)a3 + 2);
  v65[11] = *((uint32_t *)a3 + 3);
  v8 = false;
  v65[16] = (uint32_t)(uintptr_t)(&unk_1D12FD0);
  v65[17] = (uint32_t)(uintptr_t)(self);
  v65[19] = (uint32_t)(uintptr_t)(a4);
  LODWORD(v66[0]) = (uint32_t)(uintptr_t)(v65);
  v58 = *((float *)a2 + 7);
  v56 = *((float *)a2 + 3);
  v9 = *((float *)a2 + 5);
  v10 = *((float *)a2 + 1);
  v11 = *((float *)a2 + 6);
  v54 = (float)(*((float *)a2 + 4) - *(float *)a2) * 0.5;
  v12 = v9 - v10;
  v13 = *((float *)a2 + 2);
  v14 = v9 + v10;
g4_m128_raw(v15) = *(unsigned int *)a3;
g4_m128_raw(v18) = *((unsigned int *)a3 + 1);
  *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v15) - (float)((float)(*((float *)a2 + 4) + *(float *)a2) * 0.5);
  v51 = (float)(*((float *)a2 + 4) + *(float *)a2) * 0.5;
  v53 = v12 * 0.5;
  v16 = v11 - v13;
  v50 = v14 * 0.5;
  v17 = v11 + v13;
g4_m128_raw(v20) = *((unsigned int *)a3 + 2);
  *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) - (float)(v14 * 0.5);
  v19 = v17 * 0.5;
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) - v19;
  v52 = (float)(v58 - v56) * 0.5;
  v49 = 0.5 * (float)(v58 + v56);
  if ( *(float *)g4_m128_ptr<int32_t>(v15) == 0.0 )
    v8 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v15));
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v18)) || (v21 = 2, *(float *)g4_m128_ptr<int32_t>(v18) != 0.0) )
    v21 = 0;
  v22 = v21 | v8;
  if ( *(float *)g4_m128_ptr<int32_t>(v20) == 0.0 )
  {
    v22 |= 4u;
    if ( (v22 & 1) == 0 )
    {
LABEL_9:
      v23 = _mm_cvtsi128_si32(v15);
      v24 = (*(float *)g4_m128_ptr<int32_t>(v15) >= 0.0) | 8;
      goto LABEL_10;
    }
  }
  else if ( (v22 & 1) == 0 )
  {
    goto LABEL_9;
  }
  v24 = 9;
  v23 = 0;
g4_m128_raw(v15) = 0;
LABEL_10:
  v25 = _mm_cvtsi128_si32(v18);
  if ( (v22 & 2) != 0 )
  {
    v25 = 0;
g4_m128_raw(v18) = 0;
  }
  if ( (v22 & 4) != 0 )
  {
    v26 = 0;
    v27 = 3.40282e38f;
g4_m128_raw(v20) = 0;
    if ( v23 >= 0 )
      goto LABEL_14;
  }
  else
  {
    v26 = _mm_cvtsi128_si32(v20);
    v27 = 3.40282e38f;
    if ( v23 >= 0 )
      goto LABEL_14;
  }
  v27 = -3.40282e38f;
LABEL_14:
  v59 = 3.40282e38f;
  if ( v25 < 0 )
    v59 = -3.40282e38f;
  v57 = 3.40282e38f;
  if ( v26 < 0 )
    v57 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v15) != 0.0 )
  {
    v45 = _mm_cvtsi128_si32(v15);
    v46 = (2130706432 - v45) & ((v45 ^ (v45 + 2139095040)) >> 31);
    v47 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v46)) * *(float *)&v46)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v46)) * *(float *)&v46);
    v27 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * v47)) * v47;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v18) != 0.0 )
  {
    v42 = _mm_cvtsi128_si32(v18);
    v43 = (2130706432 - v42) & ((v42 ^ (v42 + 2139095040)) >> 31);
    v44 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v18)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)&v43)) * *(float *)&v43)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)&v43)) * *(float *)&v43);
    v59 = v44 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * v44));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v20) != 0.0 )
  {
    v39 = _mm_cvtsi128_si32(v20);
    v40 = (2130706432 - v39) & ((v39 ^ (v39 + 2139095040)) >> 31);
    v41 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v20)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)&v40)) * *(float *)&v40)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)&v40)) * *(float *)&v40);
    v57 = v41 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * v41));
  }
  v66[11] = 1.0;
  v60 = nullptr;
  v61 = 0;
  v62 = 0x80000000;
  v64 = 64;
  v66[10] = *(float *)g4_m128_ptr<int32_t>(v20);
  LOBYTE(v28) = *(float *)g4_m128_ptr<int32_t>(v18) >= 0.0 ? 2 : 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v20) >= 0.0 )
    v28 = *(float *)g4_m128_ptr<int32_t>(v18) < 0.0 ? 4 : 6;
  v66[8] = *(float *)g4_m128_ptr<int32_t>(v15);
  v66[9] = *(float *)g4_m128_ptr<int32_t>(v18);
  v66[13] = v59;
  LODWORD(v66[15]) = ((uint8_t)v24 | (uint8_t)v28) & 7 | 0x3F000000;
  v66[14] = v57;
  v66[4] = v51;
  v66[5] = v50;
  v66[6] = v19;
  v66[7] = v49;
  v66[16] = v54;
  v66[12] = v27;
  v66[17] = v53;
  v66[18] = v16 * 0.5;
  v66[19] = v52;
  v29 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v30 = *v29;
  v31 = v29;
  v32 = *((uint32_t *)*v29 + 2) <= 3071;
  v33 = *((char **)*v29 + 3);
  if ( v32 || (unsigned int)(uintptr_t)(v33 + 3072) > *((uint32_t *)v30 + 4) )
    v33 = (char *)hkLifoAllocator::allocateFromNewSlab(v30, 3072);
  else
    *((uint32_t *)v30 + 3) = (uint32_t)(uintptr_t)(v33 + 3072);
  v60 = v33;
  v63 = v33;
  v62 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbCastWrapper<hkpStaticCompoundShape_Internals::AabbCastQuery::Self>>(
    self + 16,
    &v60,
    v66);
  v34 = 0;
  if ( v60 != v63 )
    v34 = v61;
  v35 = *v31;
  v61 = v34;
  v36 = (48 * v64 + 127) & 0xFFFFFF80;
  if ( v36 > *((uint32_t *)v35 + 2) || *((char **)v35 + 3) != &v63[v36] || v63 == *((char **)v35 + 5) )
    hkLifoAllocator::slowBlockFree(v35, v63, (48 * v64 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v35 + 3) = (uint32_t)(uintptr_t)(v63);
  LODWORD(v37) = v62;
  v61 = 0;
  if ( v62 >= 0 )
    LODWORD(v37) = (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     v60,
                     48 * v62);
  v38 = *(uint32_t **)(v55 + 4);
  if ( (unsigned int)(uintptr_t)(v38) < *(uint32_t *)(v55 + 12) )
  {
    *v38 = (uint32_t)(uintptr_t)("Et");
    v37 = __rdtsc();
    v38[1] = v37;
    *(uint32_t *)(v55 + 4) = (uint32_t)(uintptr_t)(v38 + 3);
  }
  return v37;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::castRay  (binary VA: 0x1814270)
// Original: hkpStaticCompoundShape::castRay
// ----------------------------------------------------------------------------
uint8_t * hkpStaticCompoundShape::castRay(uint8_t *a1, int a2, int a3, float *a4)
{
  int *address;
  uint32_t *v5;
  uint64_t v6; // rax
  float v7;
  float v8; // xmm4_4
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  __m128i v15;
  bool v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  __m128i v19;
  __m128i v20;
  char v21;
  char v22; // si
  char v23;
  char v24;
  char v25;
  int v26;
  int v27;
  int v28;
  float v29;
  int v30;
  float v31;
  hkLifoAllocator::Self **v32;
  hkLifoAllocator::Self *v33;
  hkLifoAllocator::Self **v34;
  bool v35; // cc
  char *v36;
  int v37;
  hkLifoAllocator::Self *v38;
  signed int v39;
  int v40;
  int v41;
  uint32_t *v42;
  uint64_t v43; // rax
  int v45;
  int v46;
  float v47; // xmm5_4
  int v48;
  int v49;
  float v50; // xmm5_4
  int v51;
  int v52;
  float v53; // xmm5_4
  char v54;
  char v55;
  float *v56;
  float v57; // xmm4_4
  float v58; // xmm2_4
  float v59; // xmm5_4
  float v60; // xmm3_4
  float v61; // xmm1_4
  float v62; // xmm7_4
  float v63; // xmm0_4
  float v64; // xmm3_4
  float v65; // xmm6_4
  float v66; // xmm3_4
  __m128i v67;
  int v68;
  int v69; // xmm4_4
  float v70; // xmm3_4
  float v71; // xmm4_4
  __m128i v72;
  int v73;
  int v74; // xmm5_4
  float v75; // xmm3_4
  float v76; // xmm5_4
  __m128i v77;
  int v78;
  float v79; // xmm3_4
  float v80; // xmm5_4
  float v81; // xmm6_4
  int v82; // xmm5_4
  float *v83;
  float v84; // xmm3_4
  float v85; // xmm5_4
  float *v86;
  __m128i v87;
  float v88; // xmm4_4
  float v89; // xmm3_4
  __m128i v90;
  float v91; // xmm6_4
  int v92;
  float v93; // xmm2_4
  float v94; // xmm2_4
  float v95; // xmm5_4
  float v96; // xmm4_4
  float v97; // xmm3_4
  float v98; // xmm2_4
  typedef float _g4_t_v99;
  typedef bool _g4_t_v100;
  typedef float _g4_t_v101;
  typedef int _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef uint8_t _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef char *_g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef char *_g4_t_v117;
  typedef int _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123[20];
  typedef int _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef float *_g4_t_v137;
  typedef float _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v99)) > _g4_s0 ? (0u + sizeof(_g4_t_v99)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v100)) > _g4_s1 ? (4u + sizeof(_g4_t_v100)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v101)) > _g4_s2 ? (4u + sizeof(_g4_t_v101)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v102)) > _g4_s3 ? (12u + sizeof(_g4_t_v102)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v103)) > _g4_s4 ? (16u + sizeof(_g4_t_v103)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v104)) > _g4_s5 ? (16u + sizeof(_g4_t_v104)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v105)) > _g4_s6 ? (20u + sizeof(_g4_t_v105)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v106)) > _g4_s7 ? (20u + sizeof(_g4_t_v106)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v107)) > _g4_s8 ? (20u + sizeof(_g4_t_v107)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v108)) > _g4_s9 ? (24u + sizeof(_g4_t_v108)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v109)) > _g4_s10 ? (24u + sizeof(_g4_t_v109)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v110)) > _g4_s11 ? (24u + sizeof(_g4_t_v110)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v111)) > _g4_s12 ? (28u + sizeof(_g4_t_v111)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v112)) > _g4_s13 ? (28u + sizeof(_g4_t_v112)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v113)) > _g4_s14 ? (28u + sizeof(_g4_t_v113)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v114)) > _g4_s15 ? (32u + sizeof(_g4_t_v114)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v115)) > _g4_s16 ? (36u + sizeof(_g4_t_v115)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v116)) > _g4_s17 ? (40u + sizeof(_g4_t_v116)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v117)) > _g4_s18 ? (44u + sizeof(_g4_t_v117)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v118)) > _g4_s19 ? (48u + sizeof(_g4_t_v118)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v119)) > _g4_s20 ? (64u + sizeof(_g4_t_v119)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v120)) > _g4_s21 ? (68u + sizeof(_g4_t_v120)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v121)) > _g4_s22 ? (72u + sizeof(_g4_t_v121)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v122)) > _g4_s23 ? (76u + sizeof(_g4_t_v122)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v123)) > _g4_s24 ? (112u + sizeof(_g4_t_v123)) : _g4_s24,
    _g4_s26 = (192u + sizeof(_g4_t_v124)) > _g4_s25 ? (192u + sizeof(_g4_t_v124)) : _g4_s25,
    _g4_s27 = (208u + sizeof(_g4_t_v125)) > _g4_s26 ? (208u + sizeof(_g4_t_v125)) : _g4_s26,
    _g4_s28 = (212u + sizeof(_g4_t_v126)) > _g4_s27 ? (212u + sizeof(_g4_t_v126)) : _g4_s27,
    _g4_s29 = (216u + sizeof(_g4_t_v127)) > _g4_s28 ? (216u + sizeof(_g4_t_v127)) : _g4_s28,
    _g4_s30 = (220u + sizeof(_g4_t_v128)) > _g4_s29 ? (220u + sizeof(_g4_t_v128)) : _g4_s29,
    _g4_s31 = (224u + sizeof(_g4_t_v129)) > _g4_s30 ? (224u + sizeof(_g4_t_v129)) : _g4_s30,
    _g4_s32 = (228u + sizeof(_g4_t_v130)) > _g4_s31 ? (228u + sizeof(_g4_t_v130)) : _g4_s31,
    _g4_s33 = (232u + sizeof(_g4_t_v131)) > _g4_s32 ? (232u + sizeof(_g4_t_v131)) : _g4_s32,
    _g4_s34 = (236u + sizeof(_g4_t_v132)) > _g4_s33 ? (236u + sizeof(_g4_t_v132)) : _g4_s33,
    _g4_s35 = (240u + sizeof(_g4_t_v133)) > _g4_s34 ? (240u + sizeof(_g4_t_v133)) : _g4_s34,
    _g4_s36 = (244u + sizeof(_g4_t_v134)) > _g4_s35 ? (244u + sizeof(_g4_t_v134)) : _g4_s35,
    _g4_s37 = (248u + sizeof(_g4_t_v135)) > _g4_s36 ? (248u + sizeof(_g4_t_v135)) : _g4_s36,
    _g4_s38 = (252u + sizeof(_g4_t_v136)) > _g4_s37 ? (252u + sizeof(_g4_t_v136)) : _g4_s37,
    _g4_s39 = (256u + sizeof(_g4_t_v137)) > _g4_s38 ? (256u + sizeof(_g4_t_v137)) : _g4_s38,
    _g4_s40 = (260u + sizeof(_g4_t_v138)) > _g4_s39 ? (260u + sizeof(_g4_t_v138)) : _g4_s39,
    _g4_s41 = (288u + sizeof(_g4_t_v139)) > _g4_s40 ? (288u + sizeof(_g4_t_v139)) : _g4_s40,
    _g4_s42 = (292u + sizeof(_g4_t_v140)) > _g4_s41 ? (292u + sizeof(_g4_t_v140)) : _g4_s41,
    _g4_s43 = (296u + sizeof(_g4_t_v141)) > _g4_s42 ? (296u + sizeof(_g4_t_v141)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 0u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 4u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 4u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 12u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 16u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 16u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 20u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 20u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 20u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 24u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 24u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 24u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 28u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 28u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 28u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 32u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 36u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 40u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 44u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 48u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 64u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 68u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 72u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 76u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 112u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 192u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 208u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 212u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 216u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 220u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 224u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 228u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 232u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 236u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 240u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 244u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 248u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 252u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 256u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 260u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 288u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 292u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 296u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v102 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtSCS::castRay");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v102 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v137 = a4;
  v124 = a2;
  v125 = *(float *)a3;
  v126 = *(float *)(a3 + 4);
  v127 = *(float *)(a3 + 8);
  v128 = *(float *)(a3 + 12);
  v129 = *(float *)(a3 + 16);
  v130 = *(float *)(a3 + 20);
  v131 = *(float *)(a3 + 24);
  v7 = *(float *)(a3 + 28);
  v139 = -1;
  v132 = v7;
  v8 = a4[4];
  v133 = *(uint32_t *)(a3 + 32);
  v134 = *(uint32_t *)(a3 + 36);
  v9 = v126;
  v135 = *(uint32_t *)(a3 + 40);
  v10 = v130 - v126;
  v11 = (float)((float)(v129 - v125) * v8) + v125;
  v12 = (float)(v7 - v128) * v8;
  v13 = v127;
  v136 = *(uint32_t *)(a3 + 44);
  v14 = v131;
  v140 = 0;
  v138 = v8;
  v141 = 0;
  a4[4] = 1.0;
  v129 = v11;
g4_m128_raw(v15) = *(unsigned int *)(a3 + 16);
  *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v15) - *(float *)a3;
  v16 = false;
  v132 = v12 + v128;
  v17 = (float)(v10 * v8) + v9;
  v18 = (float)(v14 - v13) * v8;
  if ( *(float *)g4_m128_ptr<int32_t>(v15) == 0.0 )
    v16 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v15));
  v130 = v17;
g4_m128_raw(v19) = *(unsigned int *)(a3 + 20);
  *(float *)g4_m128_ptr<int32_t>(v19) = *(float *)g4_m128_ptr<int32_t>(v19) - *(float *)(a3 + 4);
  v131 = v18 + v13;
g4_m128_raw(v20) = *(unsigned int *)(a3 + 24);
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) - *(float *)(a3 + 8);
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v19)) || (v21 = 2, *(float *)g4_m128_ptr<int32_t>(v19) != 0.0) )
    v21 = 0;
  v22 = v16 | v21;
  if ( *(float *)g4_m128_ptr<int32_t>(v20) == 0.0 )
  {
    v54 = 4;
    v55 = 12;
    if ( v8 != 0.0 )
      v55 = 4;
    if ( !__builtin_isnan(v8) )
      v54 = v55;
    v25 = v22 | v54;
    if ( (v25 & 1) == 0 )
      goto LABEL_13;
  }
  else
  {
    v23 = 0;
    v24 = 8;
    if ( v8 != 0.0 )
      v24 = 0;
    if ( !__builtin_isnan(v8) )
      v23 = v24;
    v25 = v22 | v23;
    if ( (v25 & 1) == 0 )
    {
LABEL_13:
      v26 = _mm_cvtsi128_si32(v15);
      v100 = *(float *)g4_m128_ptr<int32_t>(v15) >= 0.0;
      goto LABEL_14;
    }
  }
  v100 = true;
  v26 = 0;
g4_m128_raw(v15) = 0;
LABEL_14:
  v27 = _mm_cvtsi128_si32(v19);
  if ( (v25 & 2) != 0 )
  {
    v27 = 0;
g4_m128_raw(v19) = 0;
  }
  v28 = _mm_cvtsi128_si32(v20);
  if ( (v25 & 4) != 0 )
  {
    v28 = 0;
g4_m128_raw(v20) = 0;
  }
  if ( (v25 & 8) != 0 )
    v8 = 0.0;
  v108 = 3.40282e38f;
  if ( v26 < 0 )
    v108 = -3.40282e38f;
  v105 = 3.40282e38f;
  if ( v27 < 0 )
    v105 = -3.40282e38f;
  v103 = 3.40282e38f;
  if ( v28 < 0 )
    v103 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v15) != 0.0 )
  {
    v51 = _mm_cvtsi128_si32(v15);
    v52 = (2130706432 - v51) & ((v51 ^ (v51 + 2139095040)) >> 31);
    v53 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v52)) * *(float *)&v52)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v52)) * *(float *)&v52);
    v108 = v53 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * v53));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v19) != 0.0 )
  {
    v48 = _mm_cvtsi128_si32(v19);
    v49 = (2130706432 - v48) & ((v48 ^ (v48 + 2139095040)) >> 31);
    v50 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)&v49)) * *(float *)&v49)
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v19)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)&v49)) * *(float *)&v49)));
    v105 = v50 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * v50));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v20) != 0.0 )
  {
    v45 = _mm_cvtsi128_si32(v20);
    v46 = (2130706432 - v45) & ((v45 ^ (v45 + 2139095040)) >> 31);
    v47 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v20)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)&v46)) * *(float *)&v46)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)&v46)) * *(float *)&v46);
    v103 = v47 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * v47));
  }
  v111 = v100 | (*(float *)g4_m128_ptr<int32_t>(v19) >= 0.0 ? 2 : 0);
  v101 = *(float *)a3;
  v99 = *(float *)(a3 + 4);
  v119 = *(float *)a3;
  v29 = *(float *)(a3 + 8);
  v120 = v99;
  LOBYTE(v30) = *(float *)g4_m128_ptr<int32_t>(v20) >= 0.0 ? 4 : 0;
  LODWORD(v123[0]) = (uint32_t)(uintptr_t)(&v124);
  if ( v8 >= 0.0 )
    v30 = *(float *)g4_m128_ptr<int32_t>(v20) < 0.0 ? 8 : 12;
  v31 = *(float *)(a3 + 12);
  v123[9] = *(float *)g4_m128_ptr<int32_t>(v19);
  v123[11] = v8;
  v122 = v31;
  v123[7] = v31;
  v121 = v29;
  v123[5] = v99;
  v123[6] = v29;
  v123[16] = NAN;
  v123[8] = *(float *)g4_m128_ptr<int32_t>(v15);
  v123[4] = v101;
  v123[10] = *(float *)g4_m128_ptr<int32_t>(v20);
  v123[12] = v108;
  v123[13] = v105;
  v114 = nullptr;
  v115 = 0;
  v123[14] = v103;
  v116 = 0x80000000;
  LODWORD(v123[15]) = ((uint8_t)v30 | v111) & 7 | 0x3F000000;
  v118 = 64;
  v32 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v33 = *v32;
  v34 = v32;
  v35 = *((uint32_t *)*v32 + 2) <= 3071;
  v36 = *((char **)*v32 + 3);
  if ( v35 || (unsigned int)(uintptr_t)(v36 + 3072) > *((uint32_t *)v33 + 4) )
    v36 = (char *)hkLifoAllocator::allocateFromNewSlab(v33, 3072);
  else
    *((uint32_t *)v33 + 3) = (uint32_t)(uintptr_t)(v36 + 3072);
  v114 = v36;
  v117 = v36;
  v116 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<hkpStaticCompoundShape_Internals::RayCastQuery>>(
    (uint8_t **)(a2 + 64),
    &v114,
    v123);
  v37 = 0;
  if ( v114 != v117 )
    v37 = v115;
  v115 = v37;
  v38 = *v34;
  v39 = (48 * v118 + 127) & 0xFFFFFF80;
  if ( v39 > *((uint32_t *)*v34 + 2) || *((char **)v38 + 3) != &v117[v39] || v117 == *((char **)v38 + 5) )
    hkLifoAllocator::slowBlockFree(v38, v117, (48 * v118 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v38 + 3) = (uint32_t)(uintptr_t)(v117);
  v115 = 0;
  if ( v116 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v114,
      48 * v116);
  if ( v137 != nullptr && (v137[4] = v138, v139 >= 0) )
  {
    v40 = *(uint32_t *)(v124 + 32) + (v139 << 6);
    v41 = *(uint32_t *)(v40 + 12);
    if ( (v41 & 2) != 0 )
    {
      if ( (v41 & 4) != 0 )
      {
g4_m128_raw(v67) = *(unsigned int *)(v40 + 32);
        v68 = _mm_cvtsi128_si32(v67);
        v69 = (2130706432 - v68) & ((v68 ^ (v68 + 2139095040)) >> 31);
        v70 = (float)(2.0 - (float)(*(float *)(v40 + 32) * *(float *)&v69)) * *(float *)&v69;
        v113 = v70 * (float)(2.0 - (float)(*(float *)(v40 + 32) * v70));
        v71 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v67) * v113);
g4_m128_raw(v72) = *(unsigned int *)(v40 + 36);
        v73 = _mm_cvtsi128_si32(v72);
        v74 = (2130706432 - v73) & ((v73 ^ (v73 + 2139095040)) >> 31);
        v75 = (float)(2.0 - (float)(*(float *)(v40 + 36) * *(float *)&v74)) * *(float *)&v74;
        v110 = v75 * (float)(2.0 - (float)(*(float *)(v40 + 36) * v75));
        v76 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v72) * v110);
g4_m128_raw(v77) = *(unsigned int *)(v40 + 40);
        v78 = _mm_cvtsi128_si32(v77);
        v79 = v76;
        v80 = (float)(2.0
                    - (float)(*(float *)(v40 + 40)
                            * COERCE_FLOAT((2130706432 - v78) & ((v78 ^ (v78 + 2139095040)) >> 31))))
            * COERCE_FLOAT((2130706432 - v78) & ((v78 ^ (v78 + 2139095040)) >> 31));
        v81 = (float)(2.0 - (float)(*(float *)(v40 + 40) * v80)) * v80;
        v107 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v77) * v81);
        v82 = (2130706432 - *(uint32_t *)(v40 + 44))
            & ((*(uint32_t *)(v40 + 44) ^ (*(uint32_t *)(v40 + 44) + 2139095040)) >> 31);
        v83 = v137;
        v84 = (float)(v79 * v110) * v137[1];
        v85 = (float)(2.0
                    - (float)(*(float *)(v40 + 44)
                            * (float)((float)(2.0 - (float)(*(float *)(v40 + 44) * *(float *)&v82)) * *(float *)&v82)))
            * (float)((float)(2.0 - (float)(*(float *)(v40 + 44) * *(float *)&v82)) * *(float *)&v82);
g4_m128_lane<int32_t>(v77, 0) = *(uint32_t *)(v40 + 44);
        *v137 = (float)(v71 * v113) * *v137;
        v83[1] = v84;
        v83[2] = v83[2] * (float)(v81 * v107);
        v83[3] = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v77) * v85)) * v85) * v83[3];
        v86 = v137;
g4_m128_raw(v87) = *(unsigned int *)v137;
        v88 = v137[1];
        v90 = v87;
        v89 = v137[2];
        *(float *)g4_m128_ptr<int32_t>(v90) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v87) * *(float *)g4_m128_ptr<int32_t>(v87)) + (float)(v88 * v88))
                                + (float)(v89 * v89);
        if ( *(float *)g4_m128_ptr<int32_t>(v90) <= 0.0 )
        {
          v94 = 0.0;
        }
        else
        {
          v91 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v90);
          v92 = ((_mm_cvtsi128_si32(v90) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v90) >> 1));
          v93 = (float)(1.5 * *(float *)&v92)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v90)) * *(float *)&v92)
                      * (float)(*(float *)&v92 * *(float *)&v92));
          v94 = (float)(1.5 * (float)((float)(1.5 * v93) - (float)((float)(v91 * v93) * (float)(v93 * v93))))
              - (float)((float)(v91 * (float)((float)(1.5 * v93) - (float)((float)(v91 * v93) * (float)(v93 * v93))))
                      * (float)((float)((float)(1.5 * v93) - (float)((float)(v91 * v93) * (float)(v93 * v93)))
                              * (float)((float)(1.5 * v93) - (float)((float)(v91 * v93) * (float)(v93 * v93)))));
        }
        v95 = *(float *)g4_m128_ptr<int32_t>(v87) * v94;
        v96 = v88 * v94;
        v97 = v89 * v94;
        v98 = v94 * v137[3];
        *v137 = v95;
        v86[1] = v96;
        v86[2] = v97;
        v86[3] = v98;
      }
      v56 = v137;
      v109 = *v137;
      v57 = *(float *)(v40 + 16);
      v58 = *(float *)(v40 + 28);
      v112 = v137[1];
      v59 = *(float *)(v40 + 24);
      v60 = (float)(v58 * v58) - 0.5;
      v104 = *(float *)(v40 + 20);
      v61 = (float)((float)(*v137 * v57) + (float)(v104 * v112)) + (float)(v137[2] * v59);
      v106 = (float)((float)(v58 * v61) + (float)(v137[3] * v60)) + (float)(0.0 * v58);
      v62 = v112 * v60;
      v63 = (float)((float)(*v137 * v60) + (float)(v57 * v61))
          + (float)((float)((float)(v137[2] * v104) - (float)(v112 * v59)) * v58);
      v64 = (float)(v60 * v137[2]) + (float)(v61 * v59);
      *v137 = v63 + v63;
      v65 = (float)(v109 * v59) - (float)(v57 * v56[2]);
      v56[1] = (float)((float)(v62 + (float)(v104 * v61)) + (float)(v65 * v58))
             + (float)((float)(v62 + (float)(v104 * v61)) + (float)(v65 * v58));
      v66 = v64 + (float)((float)((float)(v112 * v57) - (float)(v109 * v104)) * v58);
      v56[3] = v106 + v106;
      v56[2] = v66 + v66;
    }
    *a1 = 1;
  }
  else
  {
    *a1 = 0;
  }
  v42 = *(uint32_t **)(v102 + 4);
  if ( (unsigned int)(uintptr_t)(v42) < *(uint32_t *)(v102 + 12) )
  {
    *v42 = (uint32_t)(uintptr_t)("Et");
    v43 = __rdtsc();
    v42[1] = v43;
    *(uint32_t *)(v102 + 4) = (uint32_t)(uintptr_t)(v42 + 3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::castRayWithCollector  (binary VA: 0x1814e50)
// Original: hkpStaticCompoundShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::castRayWithCollector(int a1, float *a2, int a3, int a4)
{
  int *address;
  uint32_t *v5;
  uint64_t v6; // rax
  float v7;
  bool v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  char v12;
  uint8_t v13; // di
  char v14;
  char v15;
  char v16;
  int v17;
  int v18;
  int v19;
  float v20; // xmm5_4
  int v21;
  float v22;
  hkLifoAllocator::Self **v23;
  hkLifoAllocator::Self *v24;
  hkLifoAllocator::Self **v25;
  bool v26; // cc
  char *v27;
  int v28;
  hkLifoAllocator::Self *v29;
  signed int v30;
  uint64_t v31; // rax
  uint32_t *v32;
  int v33;
  int v34;
  float v35; // xmm6_4
  int v36;
  int v37;
  float v38; // xmm6_4
  int v39;
  int v40;
  float v41; // xmm6_4
  typedef bool _g4_t_v43;
  typedef int _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57[20];
  typedef uint32_t _g4_t_v58[31];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v44)) > _g4_s1 ? (16u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v45)) > _g4_s2 ? (20u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v46)) > _g4_s3 ? (24u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v47)) > _g4_s4 ? (28u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v48)) > _g4_s5 ? (32u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v49)) > _g4_s6 ? (36u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v50)) > _g4_s7 ? (40u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v51)) > _g4_s8 ? (44u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v52)) > _g4_s9 ? (48u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v53)) > _g4_s10 ? (64u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v54)) > _g4_s11 ? (68u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v55)) > _g4_s12 ? (72u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v56)) > _g4_s13 ? (76u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v57)) > _g4_s14 ? (112u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (192u + sizeof(_g4_t_v58)) > _g4_s15 ? (192u + sizeof(_g4_t_v58)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 112u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 192u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v44 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtSCS::castRayWithCollector");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v44 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v7 = *a2;
  v58[0] = a1;
  *(float *)&v58[4] = v7;
  *(float *)&v58[5] = a2[1];
  *(float *)&v58[6] = a2[2];
  *(float *)&v58[7] = a2[3];
  *(float *)&v58[8] = a2[4];
  *(float *)&v58[9] = a2[5];
  *(float *)&v58[10] = a2[6];
  *(float *)&v58[11] = a2[7];
  *(float *)&v58[12] = a2[8];
  *(float *)&v58[13] = a2[9];
  *(float *)&v58[14] = a2[10];
  *(float *)&v58[15] = a2[11];
  v58[25] = a3;
  v58[26] = a4;
  v58[16] = 0;
  v47 = 1.0;
g4_m128_raw(v9) = *((unsigned int *)a2 + 4);
  v8 = false;
  *(float *)g4_m128_ptr<int32_t>(v9) = *(float *)g4_m128_ptr<int32_t>(v9) - *a2;
g4_m128_raw(v10) = *((unsigned int *)a2 + 5);
  *(float *)g4_m128_ptr<int32_t>(v10) = *(float *)g4_m128_ptr<int32_t>(v10) - a2[1];
g4_m128_raw(v11) = *((unsigned int *)a2 + 6);
  if ( *(float *)g4_m128_ptr<int32_t>(v9) == 0.0 )
    v8 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v9));
  *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) - a2[2];
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v10)) || (v12 = 2, *(float *)g4_m128_ptr<int32_t>(v10) != 0.0) )
    v12 = 0;
  v13 = v8 | v12;
  if ( *(float *)g4_m128_ptr<int32_t>(v11) == 0.0 )
  {
    v14 = 12;
    v15 = 4;
  }
  else
  {
    v14 = 8;
    v15 = 0;
  }
  if ( 0.0 != 1.0 )
    v14 = v15;
  v16 = v13 | v14;
  if ( ((v13 | (uint8_t)v14) & 1) != 0 )
  {
    v43 = true;
    v17 = 0;
g4_m128_raw(v9) = 0;
  }
  else
  {
    v17 = _mm_cvtsi128_si32(v9);
    v43 = *(float *)g4_m128_ptr<int32_t>(v9) >= 0.0;
  }
  v18 = _mm_cvtsi128_si32(v10);
  if ( (v16 & 2) != 0 )
  {
    v18 = 0;
g4_m128_raw(v10) = 0;
  }
  v19 = _mm_cvtsi128_si32(v11);
  if ( (v16 & 4) != 0 )
  {
    v19 = 0;
g4_m128_raw(v11) = 0;
  }
  if ( (v16 & 8) != 0 )
    v47 = 0.0;
  v20 = 3.40282e38f;
  if ( v17 < 0 )
    v20 = -3.40282e38f;
  v46 = 3.40282e38f;
  if ( v18 < 0 )
    v46 = -3.40282e38f;
  v45 = 3.40282e38f;
  if ( v19 < 0 )
    v45 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v9) != 0.0 )
  {
    v39 = _mm_cvtsi128_si32(v9);
    v40 = (2130706432 - v39) & ((v39 ^ (v39 + 2139095040)) >> 31);
    v41 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v9)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)&v40)) * *(float *)&v40)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)&v40)) * *(float *)&v40);
    v20 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v41)) * v41;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v10) != 0.0 )
  {
    v36 = _mm_cvtsi128_si32(v10);
    v37 = (2130706432 - v36) & ((v36 ^ (v36 + 2139095040)) >> 31);
    v38 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v10)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)&v37)) * *(float *)&v37)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)&v37)) * *(float *)&v37);
    v46 = v38 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v10) * v38));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v11) != 0.0 )
  {
    v33 = _mm_cvtsi128_si32(v11);
    v34 = (2130706432 - v33) & ((v33 ^ (v33 + 2139095040)) >> 31);
    v35 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v11)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v34)) * *(float *)&v34)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v34)) * *(float *)&v34);
    v45 = v35 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * v35));
  }
  v54 = a2[1];
  LODWORD(v57[0]) = (uint32_t)(uintptr_t)(v58);
  LOBYTE(v21) = *(float *)g4_m128_ptr<int32_t>(v11) >= 0.0 ? 4 : 0;
  v57[5] = v54;
  if ( v47 >= 0.0 )
    v21 = *(float *)g4_m128_ptr<int32_t>(v11) < 0.0 ? 8 : 12;
  v53 = *a2;
  v55 = a2[2];
  v22 = a2[3];
  v57[4] = v53;
  v57[11] = v47;
  v56 = v22;
  v57[7] = v22;
  v57[12] = v20;
  v57[6] = v55;
  LODWORD(v57[15]) = v21 & 7 | v43 & 7 | (*(float *)g4_m128_ptr<int32_t>(v10) >= 0.0 ? 2 : 0) | 0x3F000000;
  v57[8] = *(float *)g4_m128_ptr<int32_t>(v9);
  v57[16] = NAN;
  v57[9] = *(float *)g4_m128_ptr<int32_t>(v10);
  v48 = nullptr;
  v57[10] = *(float *)g4_m128_ptr<int32_t>(v11);
  v57[13] = v46;
  v57[14] = v45;
  v49 = 0;
  v50 = 0x80000000;
  v52 = 64;
  v23 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v24 = *v23;
  v25 = v23;
  v26 = *((uint32_t *)*v23 + 2) <= 3071;
  v27 = *((char **)*v23 + 3);
  if ( v26 || (unsigned int)(uintptr_t)(v27 + 3072) > *((uint32_t *)v24 + 4) )
    v27 = (char *)hkLifoAllocator::allocateFromNewSlab(v24, 3072);
  else
    *((uint32_t *)v24 + 3) = (uint32_t)(uintptr_t)(v27 + 3072);
  v48 = v27;
  v51 = v27;
  v50 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<hkpStaticCompoundShape_Internals::RayCastQuery>>(
    (uint8_t **)(a1 + 64),
    &v48,
    v57);
  v28 = 0;
  if ( v48 != v51 )
    v28 = v49;
  v29 = *v25;
  v49 = v28;
  v30 = (48 * v52 + 127) & 0xFFFFFF80;
  if ( v30 > *((uint32_t *)v29 + 2) || *((char **)v29 + 3) != &v51[v30] || v51 == *((char **)v29 + 5) )
    hkLifoAllocator::slowBlockFree(v29, v51, (48 * v52 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v29 + 3) = (uint32_t)(uintptr_t)(v51);
  LODWORD(v31) = v50;
  v49 = 0;
  if ( v50 >= 0 )
    LODWORD(v31) = (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     v48,
                     48 * v50);
  v32 = *(uint32_t **)(v44 + 4);
  if ( (unsigned int)(uintptr_t)(v32) < *(uint32_t *)(v44 + 12) )
  {
    *v32 = (uint32_t)(uintptr_t)("Et");
    v31 = __rdtsc();
    v32[1] = v31;
    *(uint32_t *)(v44 + 4) = (uint32_t)(uintptr_t)(v32 + 3);
  }
  return v31;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::bake  (binary VA: 0x1815480)
// Original: hkpStaticCompoundShape::bake
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::bake(long double a1, hkpStaticCompoundShape::Self *self)
{
  int v2;
  hkpStaticCompoundShape::Self *v3;
  hkpStaticCompoundShape::Self *v4;
  int v5;
  int32_t v6;
  int v7;
  float v8;
  int v9;
  int32_t v10;
  int result;
  int32_t v12;
  int32_t v13;
  int v14;
  int v15;
  int v16;
  int v17;
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm7_4
  float *v25;
  float *v26;
  float v27; // xmm4_4
  float v28; // xmm6_4
  int v29;
  int v30;
  int32_t v31;
  int v32;
  int32_t v33;
  int32_t v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  typedef const hkVector4f::Self *_g4_t_v40;
  typedef const hkVector4f::Self *_g4_t_v41;
  typedef const hkVector4f::Self *_g4_t_v42;
  typedef const hkVector4f::Self *_g4_t_v43;
  typedef const hkVector4f::Self *_g4_t_v44;
  typedef const hkVector4f::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int32_t _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef int _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef int _g4_t_v72;
  typedef float _g4_t_v73;
  typedef int32_t _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef int _g4_t_v81;
  typedef hkpStaticCompoundShape::Self *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef hkpShape::Self *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef __m128i _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef unsigned int _g4_t_v95;
  typedef __m128i _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef int _g4_t_v104;
  typedef uint32_t *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef uint32_t _g4_t_v108[71];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v41)) > _g4_s1 ? (0u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v42)) > _g4_s2 ? (0u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v43)) > _g4_s3 ? (0u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v44)) > _g4_s4 ? (0u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v45)) > _g4_s5 ? (0u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v46)) > _g4_s6 ? (0u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v47)) > _g4_s7 ? (12u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v48)) > _g4_s8 ? (16u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v49)) > _g4_s9 ? (32u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v50)) > _g4_s10 ? (44u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v51)) > _g4_s11 ? (48u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v52)) > _g4_s12 ? (52u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v53)) > _g4_s13 ? (56u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v54)) > _g4_s14 ? (60u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v55)) > _g4_s15 ? (64u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v56)) > _g4_s16 ? (68u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v57)) > _g4_s17 ? (72u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v58)) > _g4_s18 ? (76u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v59)) > _g4_s19 ? (80u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v60)) > _g4_s20 ? (84u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v61)) > _g4_s21 ? (88u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v62)) > _g4_s22 ? (92u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v63)) > _g4_s23 ? (96u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v64)) > _g4_s24 ? (100u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v65)) > _g4_s25 ? (108u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v66)) > _g4_s26 ? (108u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v67)) > _g4_s27 ? (112u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v68)) > _g4_s28 ? (116u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v69)) > _g4_s29 ? (116u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v70)) > _g4_s30 ? (116u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v71)) > _g4_s31 ? (120u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (120u + sizeof(_g4_t_v72)) > _g4_s32 ? (120u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v73)) > _g4_s33 ? (124u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v74)) > _g4_s34 ? (124u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v75)) > _g4_s35 ? (128u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (128u + sizeof(_g4_t_v76)) > _g4_s36 ? (128u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v77)) > _g4_s37 ? (128u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (128u + sizeof(_g4_t_v78)) > _g4_s38 ? (128u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (128u + sizeof(_g4_t_v79)) > _g4_s39 ? (128u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v80)) > _g4_s40 ? (128u + sizeof(_g4_t_v80)) : _g4_s40,
    _g4_s42 = (128u + sizeof(_g4_t_v81)) > _g4_s41 ? (128u + sizeof(_g4_t_v81)) : _g4_s41,
    _g4_s43 = (132u + sizeof(_g4_t_v82)) > _g4_s42 ? (132u + sizeof(_g4_t_v82)) : _g4_s42,
    _g4_s44 = (136u + sizeof(_g4_t_v83)) > _g4_s43 ? (136u + sizeof(_g4_t_v83)) : _g4_s43,
    _g4_s45 = (140u + sizeof(_g4_t_v84)) > _g4_s44 ? (140u + sizeof(_g4_t_v84)) : _g4_s44,
    _g4_s46 = (144u + sizeof(_g4_t_v85)) > _g4_s45 ? (144u + sizeof(_g4_t_v85)) : _g4_s45,
    _g4_s47 = (148u + sizeof(_g4_t_v86)) > _g4_s46 ? (148u + sizeof(_g4_t_v86)) : _g4_s46,
    _g4_s48 = (152u + sizeof(_g4_t_v87)) > _g4_s47 ? (152u + sizeof(_g4_t_v87)) : _g4_s47,
    _g4_s49 = (156u + sizeof(_g4_t_v88)) > _g4_s48 ? (156u + sizeof(_g4_t_v88)) : _g4_s48,
    _g4_s50 = (164u + sizeof(_g4_t_v89)) > _g4_s49 ? (164u + sizeof(_g4_t_v89)) : _g4_s49,
    _g4_s51 = (168u + sizeof(_g4_t_v90)) > _g4_s50 ? (168u + sizeof(_g4_t_v90)) : _g4_s50,
    _g4_s52 = (172u + sizeof(_g4_t_v91)) > _g4_s51 ? (172u + sizeof(_g4_t_v91)) : _g4_s51,
    _g4_s53 = (176u + sizeof(_g4_t_v92)) > _g4_s52 ? (176u + sizeof(_g4_t_v92)) : _g4_s52,
    _g4_s54 = (196u + sizeof(_g4_t_v93)) > _g4_s53 ? (196u + sizeof(_g4_t_v93)) : _g4_s53,
    _g4_s55 = (200u + sizeof(_g4_t_v94)) > _g4_s54 ? (200u + sizeof(_g4_t_v94)) : _g4_s54,
    _g4_s56 = (204u + sizeof(_g4_t_v95)) > _g4_s55 ? (204u + sizeof(_g4_t_v95)) : _g4_s55,
    _g4_s57 = (208u + sizeof(_g4_t_v96)) > _g4_s56 ? (208u + sizeof(_g4_t_v96)) : _g4_s56,
    _g4_s58 = (228u + sizeof(_g4_t_v97)) > _g4_s57 ? (228u + sizeof(_g4_t_v97)) : _g4_s57,
    _g4_s59 = (232u + sizeof(_g4_t_v98)) > _g4_s58 ? (232u + sizeof(_g4_t_v98)) : _g4_s58,
    _g4_s60 = (236u + sizeof(_g4_t_v99)) > _g4_s59 ? (236u + sizeof(_g4_t_v99)) : _g4_s59,
    _g4_s61 = (240u + sizeof(_g4_t_v100)) > _g4_s60 ? (240u + sizeof(_g4_t_v100)) : _g4_s60,
    _g4_s62 = (244u + sizeof(_g4_t_v101)) > _g4_s61 ? (244u + sizeof(_g4_t_v101)) : _g4_s61,
    _g4_s63 = (248u + sizeof(_g4_t_v102)) > _g4_s62 ? (248u + sizeof(_g4_t_v102)) : _g4_s62,
    _g4_s64 = (252u + sizeof(_g4_t_v103)) > _g4_s63 ? (252u + sizeof(_g4_t_v103)) : _g4_s63,
    _g4_s65 = (256u + sizeof(_g4_t_v104)) > _g4_s64 ? (256u + sizeof(_g4_t_v104)) : _g4_s64,
    _g4_s66 = (260u + sizeof(_g4_t_v105)) > _g4_s65 ? (260u + sizeof(_g4_t_v105)) : _g4_s65,
    _g4_s67 = (264u + sizeof(_g4_t_v106)) > _g4_s66 ? (264u + sizeof(_g4_t_v106)) : _g4_s66,
    _g4_s68 = (268u + sizeof(_g4_t_v107)) > _g4_s67 ? (268u + sizeof(_g4_t_v107)) : _g4_s67,
    _g4_s69 = (272u + sizeof(_g4_t_v108)) > _g4_s68 ? (272u + sizeof(_g4_t_v108)) : _g4_s68
  };
  alignas(16) uint8_t _g4_sf[_g4_s69];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 84u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 108u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 108u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 112u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 116u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 116u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 116u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 120u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 120u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 124u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 124u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 128u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 128u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 128u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 128u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 128u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 128u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 128u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 132u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 136u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 140u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 144u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 148u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 152u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 156u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 164u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 168u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 172u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 176u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 196u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 200u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 204u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 208u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 228u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 232u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 236u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 240u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 244u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 248u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 252u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 256u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 260u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 264u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 268u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 272u);

  v108[67] = (uint32_t)(uintptr_t)(&self);
  v82 = self;
  v2 = *((uint32_t *)self + 9);
  if ( v2 < (*((uint32_t *)self + 10) & 0x3FFFFFFF) )
  {
    v3 = self;
    hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)self + 8, 64, 0, *((uint32_t *)self + 9));
    v2 = *((uint32_t *)v3 + 9);
  }
  v90 = 0;
  v89 = 0;
  v91 = 0x80000000;
  v92 = g4_to_m128i(0);
  *((uint32_t *)v82 + 7) = (1 << *((uint8_t *)v82 + 24)) - 1;
  if ( v2 <= 0 )
  {
    hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::rebuildBranchSAH(&v85, &v89, 0, 1, 32, 16);
  }
  else
  {
    v83 = 0;
    v4 = v82;
    do
    {
      v5 = *((uint32_t *)v4 + 8) + (v83 << 6);
      v105 = *(uint32_t **)v5;
      v106 = *(uint32_t *)(v5 + 4);
      v107 = *(uint32_t *)(v5 + 8);
      std::memcpy(v108, (const void *)(v5 + 12), 36);
      v93 = 1065353216;
      v94 = 0;
      v95 = 0;
g4_m128_lane<int32_t>(v96, 0) = 0;
      hkpStaticCompoundShape_Internals::getTransformedMaximumProjection(
        *(hkpStaticCompoundShape_Internals::Self **)(v5 + 48),
        (const hkpShape::Self *)&v105,
        (const hkQsTransformf::Self *)&v93,
        v40);
      v75 = a1;
      v93 = 0;
      v94 = 1065353216;
      v95 = 0;
g4_m128_lane<int32_t>(v96, 0) = 0;
      v65 = v75;
      hkpStaticCompoundShape_Internals::getTransformedMaximumProjection(
        *(hkpStaticCompoundShape_Internals::Self **)(v5 + 48),
        (const hkpShape::Self *)&v105,
        (const hkQsTransformf::Self *)&v93,
        v41);
      v76 = a1;
      v93 = 0;
      v94 = 0;
      v95 = 1065353216;
g4_m128_lane<int32_t>(v96, 0) = 0;
      v67 = v76;
      hkpStaticCompoundShape_Internals::getTransformedMaximumProjection(
        *(hkpStaticCompoundShape_Internals::Self **)(v5 + 48),
        (const hkpShape::Self *)&v105,
        (const hkQsTransformf::Self *)&v93,
        v42);
      v77 = a1;
      v93 = -1082130432;
      v94 = 0;
      v95 = 0;
g4_m128_lane<int32_t>(v96, 0) = 0;
      v68 = v77;
      hkpStaticCompoundShape_Internals::getTransformedMaximumProjection(
        *(hkpStaticCompoundShape_Internals::Self **)(v5 + 48),
        (const hkpShape::Self *)&v105,
        (const hkQsTransformf::Self *)&v93,
        v43);
      v78 = a1;
      v93 = 0;
      v94 = -1082130432;
      v95 = 0;
g4_m128_lane<int32_t>(v96, 0) = 0;
      v71 = v78;
      hkpStaticCompoundShape_Internals::getTransformedMaximumProjection(
        *(hkpStaticCompoundShape_Internals::Self **)(v5 + 48),
        (const hkpShape::Self *)&v105,
        (const hkQsTransformf::Self *)&v93,
        v44);
      v79 = a1;
      v93 = 0;
      v94 = 0;
      v95 = 0xBF800000;
g4_m128_lane<int32_t>(v96, 0) = 0;
      v73 = v79;
      hkpStaticCompoundShape_Internals::getTransformedMaximumProjection(
        *(hkpStaticCompoundShape_Internals::Self **)(v5 + 48),
        (const hkpShape::Self *)&v105,
        (const hkQsTransformf::Self *)&v93,
        v45);
      v80 = a1;
      v104 = 0;
      v100 = 0;
      v101 = v65;
      v102 = v67;
      v103 = v68;
      v97 = -v71;
      v98 = -v73;
      v99 = -v80;
      if ( (uint8_t)hkAabb::isValid((hkAabb::Self *)&v97) != 0 )
      {
        v6 =g4_m128_lane<int32_t>(v92, 0);
        v74 =g4_m128_lane<int32_t>(v92, 0);
        if (g4_m128_lane<int32_t>(v92, 0) == 0 )
        {
          hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_3ce13d::reserveNodes(
            (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUint::Self> *)&v85,
            &v89,
            1);
          v6 =g4_m128_lane<int32_t>(v92, 0);
          v74 =g4_m128_lane<int32_t>(v92, 0);
        }
        v81 = 48 * v6;
        v7 = v89 + 48 * v6;
        v8 = *(float *)v7;
        *(uint32_t *)(v7 + 40) = v83;
        *(uint32_t *)(v7 + 36) = 0;
        *(float *)g4_m128_ptr<int32_t>(v92) = v8;
        *(float *)v7 = v97;
        *(float *)(v7 + 4) = v98;
        *(float *)(v7 + 8) = v99;
        *(uint32_t *)(v7 + 12) = v100;
        *(float *)(v7 + 16) = v101;
        *(float *)(v7 + 20) = v102;
        *(float *)(v7 + 24) = v103;
        *(uint32_t *)(v7 + 28) = v104;
        v9 = v89;
        v10 =g4_m128_lane<int32_t>(v92, 3);
        v59 = *(float *)(v89 + v81);
        v58 = *(float *)(v89 + v81 + 4);
        v60 = *(float *)(v89 + v81 + 8);
        v56 = *(float *)(v89 + v81 + 12);
        v61 = *(float *)(v89 + v81 + 16);
        v62 = *(float *)(v89 + v81 + 20);
        v57 = *(float *)(v89 + v81 + 24);
        v55 = *(float *)(v89 + v81 + 28);
        if (g4_m128_lane<int32_t>(v92, 3) != 0 )
        {
          v12 =g4_m128_lane<int32_t>(v92, 0);
          if (g4_m128_lane<int32_t>(v92, 0) == 0 )
          {
            hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_3ce13d::reserveNodes(
              (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUint::Self> *)&v85,
              &v89,
              1);
            v12 =g4_m128_lane<int32_t>(v92, 0);
            v9 = v89;
          }
          v72 = v9;
          v47 = v9 + 48 * v12;
g4_m128_lane<int32_t>(v92, 0) = *(uint32_t *)v47;
          v13 = 48 * v10 + v9;
          v14 = *(uint32_t *)(v13 + 36);
          if ( v14 != 0 )
          {
            while ( 1 )
            {
              v25 = (float *)(v9 + 48 * v14);
              v93 = (int)(uintptr_t)(v25);
              v94 = v9 + 48 * *(uint32_t *)(v13 + 40);
              v26 = (float *)v94;
              *(float *)v13 = fminf(*(float *)v13, v59);
              *(float *)(v13 + 4) = fminf(*(float *)(v13 + 4), v58);
              *(float *)(v13 + 8) = fminf(*(float *)(v13 + 8), v60);
              *(float *)(v13 + 12) = fminf(*(float *)(v13 + 12), v56);
              *(float *)(v13 + 16) = fmaxf(*(float *)(v13 + 16), v61);
              *(float *)(v13 + 20) = fmaxf(*(float *)(v13 + 20), v62);
              *(float *)(v13 + 24) = fmaxf(*(float *)(v13 + 24), v57);
              *(float *)(v13 + 28) = fmaxf(*(float *)(v13 + 28), v55);
              v27 = v25[5];
              v70 = v25[6];
              v49 = v25[2];
              v66 = v26[1];
              v63 = v26[6];
              v64 = v26[2];
              v28 = *v25 + v25[4];
              v48 = v57 - v60;
              v50 = v62 - v58;
              v51 = v61 - v59;
              v52 = v60 + v57;
              v53 = v62 + v58;
              v54 = v61 + v59;
              v13 = *(&v93
                    + ((float)((float)((float)((float)(v70 - v49) + v48)
                                     + (float)((float)((float)(v25[4] - *v25) + v51)
                                             + (float)((float)(v27 - v25[1]) + v50)))
                             * (float)((float)((float)((float)(v28 - v54) * (float)(v28 - v54))
                                             + (float)((float)((float)(v25[1] + v27) - v53)
                                                     * (float)((float)(v25[1] + v27) - v53)))
                                     + (float)((float)((float)(v49 + v70) - v52) * (float)((float)(v49 + v70) - v52)))) > (float)((float)((float)((float)(v63 - v64) + v48) + (float)((float)((float)(v26[5] - v66) + v50) + (float)((float)(v26[4] - *v26) + v51))) * (float)((float)((float)((float)((float)(*v26 + v26[4]) - v54) * (float)((float)(*v26 + v26[4]) - v54)) + (float)((float)((float)(v66 + v26[5]) - v53) * (float)((float)(v66 + v26[5]) - v53))) + (float)((float)((float)(v64 + v63) - v52) * (float)((float)(v64 + v63) - v52))))));
              if ( *(uint32_t *)(v13 + 36) == 0 )
                break;
              v14 = *(uint32_t *)(v13 + 36);
              v9 = v89;
            }
            v72 = v89;
          }
          v15 = -1431655765 * ((v47 - v72) >> 4);
          v16 = *(uint32_t *)(v13 + 32);
          if ( v16 != 0 )
          {
            v69 = -1431655765 * ((v13 - v72) >> 4);
            *(uint32_t *)(v72 + 48 * v16 + 4 * ((v69 == *(uint32_t *)(v72 + 48 * v16 + 40)) + 8) + 4) = v15;
            v17 = *(uint32_t *)(v13 + 32);
          }
          else
          {
g4_m128_lane<int32_t>(v92, 3) = -1431655765 * ((v47 - v72) >> 4);
            v69 = -1431655765 * ((v13 - v72) >> 4);
            v17 = 0;
          }
          *(uint32_t *)(v47 + 32) = v17;
          *(uint32_t *)(v47 + 36) = v69;
          *(uint32_t *)(v47 + 40) = v74;
          *(uint32_t *)(v13 + 32) = v15;
          *(uint32_t *)(v72 + v81 + 32) = v15;
          v18 = fminf(*(float *)(v13 + 4), v58);
          v19 = fminf(*(float *)(v13 + 8), v60);
          v20 = fminf(*(float *)(v13 + 12), v56);
          v21 = fmaxf(*(float *)(v13 + 16), v61);
          v22 = fmaxf(*(float *)(v13 + 20), v62);
          v23 = fmaxf(*(float *)(v13 + 24), v57);
          v24 = fmaxf(*(float *)(v13 + 28), v55);
          *(float *)v47 = fminf(*(float *)v13, v59);
          *(float *)(v47 + 4) = v18;
          *(float *)(v47 + 8) = v19;
          *(float *)(v47 + 12) = v20;
          *(float *)(v47 + 16) = v21;
          *(float *)(v47 + 20) = v22;
          *(float *)(v47 + 24) = v23;
          *(float *)(v47 + 28) = v24;
        }
        else
        {
          *(uint32_t *)(v89 + v81 + 32) = 0;
g4_m128_lane<int32_t>(v92, 3) = v74;
        }
        ++g4_m128_lane<int32_t>(v92, 1);
      }
      v4 = v82;
      ++v83;
    }
    while ( *((uint32_t *)v82 + 9) > v83 );
    hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::rebuildBranchSAH(&v85, &v89,g4_m128_lane<int32_t>(v92, 3), 1, 32, 16);
  }
  if ( v85 != 0 ||g4_m128_lane<int32_t>(v92, 3) == 0 )
    goto LABEL_15;
  v94 = 0;
  v93 = 0;
  v95 = 0x80000000;
  v96 = g4_to_m128i(0);
  hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_3ce13d::reserveNodes(
    (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUint::Self> *)&v85,
    &v93,
    2 *g4_m128_lane<int32_t>(v92, 1));
  if (g4_m128_lane<int32_t>(v92, 3) == 0 )
    goto LABEL_30;
  v32 = v90;
  v86 = 0;
  v87 = 0;
  v88 = 0x80000000;
  if ( v90 > 0 )
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v85, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v86, v90, 4);
    if ( v32 - v87 > 0 )
      memset((void *)(v86 + 4 * v87), 0, 4 * (v32 - v87));
  }
  v87 = v32;
  v105 = v108;
  v107 = -2147483584;
  v108[0] = 0;
  v106 = 1;
  v84 = nullptr;
  v33 =g4_m128_lane<int32_t>(v92, 3);
  while ( 1 )
  {
    while ( 1 )
    {
      v34 =g4_m128_lane<int32_t>(v96, 0);
      v35 = v89 + 48 * v33;
      v97 = *(float *)v35;
      v98 = *(float *)(v35 + 4);
      v99 = *(float *)(v35 + 8);
      v100 = *(uint32_t *)(v35 + 12);
      v101 = *(float *)(v35 + 16);
      v102 = *(float *)(v35 + 20);
      v103 = *(float *)(v35 + 24);
      v104 = *(uint32_t *)(v35 + 28);
      v36 = *(uint32_t *)(v86 + 4 * v33);
      if (g4_m128_lane<int32_t>(v96, 0) == 0 )
      {
        hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_3ce13d::reserveNodes(
          (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUint::Self> *)&v85,
          &v93,
          1);
        v34 =g4_m128_lane<int32_t>(v96, 0);
      }
      v37 = v93 + 48 * v34;
g4_m128_lane<int32_t>(v96, 0) = *(uint32_t *)v37;
      *(uint32_t *)(v37 + 32) = v36;
      *(float *)v37 = v97;
      *(float *)(v37 + 4) = v98;
      *(float *)(v37 + 8) = v99;
      *(uint32_t *)(v37 + 12) = v100;
      *(float *)(v37 + 16) = v101;
      *(float *)(v37 + 20) = v102;
      *(float *)(v37 + 24) = v103;
      *(uint32_t *)(v37 + 28) = v104;
      if ( v36 == 0 )
        break;
      *(uint32_t *)(v93 + 48 * v36 + 4 * ((uint32_t)(uintptr_t)(v84) + 8) + 4) = v34;
      v33 = *(uint32_t *)(v35 + 36);
      v38 = *(uint32_t *)(v35 + 40);
      if ( v33 == 0 )
        goto LABEL_41;
LABEL_44:
      *(uint32_t *)(v86 + 4 * v33) = v34;
      *(uint32_t *)(v86 + 4 * v38) = v34;
      v39 = v106;
      if ( v106 == (v107 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v105, 4, v46);
        v39 = v106;
      }
      v84 = nullptr;
      v105[v39] = v38;
      ++v106;
    }
g4_m128_lane<int32_t>(v96, 3) = v34;
    v33 = *(uint32_t *)(v35 + 36);
    v38 = *(uint32_t *)(v35 + 40);
    if ( v33 != 0 )
      goto LABEL_44;
LABEL_41:
    *(uint32_t *)(v37 + 36) = 0;
    *(uint32_t *)(v37 + 40) = v38;
    v33 = v105[--v106];
    if ( v33 == 0 )
      break;
    v84 = (hkpShape::Self *)(&dword_0 + 1);
  }
  v106 = 0;
  if ( v107 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v105,
      4 * v107);
  v105 = nullptr;
  v107 = 0x80000000;
  v87 = 0;
  if ( v88 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v86,
      4 * v88);
LABEL_30:
  v29 = v89;
g4_m128_lane<int32_t>(v96, 2) =g4_m128_lane<int32_t>(v92, 2);
  v89 = v93;
  v90 = v94;
  v30 = v91;
  v91 = v95;
  v31 =g4_m128_lane<int32_t>(v96, 0);
  v93 = v29;
  v95 = v30;
g4_m128_lane<int64_t>(v96, 0) =g4_m128_lane<int64_t>(v92, 0);
g4_m128_lane<int32_t>(v92, 0) = v31;
g4_m128_lane<int32_t>(v92, 3) = 1;
  v94 = 0;
  if ( v30 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v29,
      48 * v30);
LABEL_15:
  hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6::Self>::convertFromDynamicTree<hkcdDynamicTree::DefaultTree48Storage::Self>(
    (hkpStaticCompoundShape::Self *)((char *)v82 + 64),
    (const hkcdDynamicTree::DefaultTree48Storage::Self *)&v89);
  result = v91;
  v90 = 0;
  if ( v91 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v89,
             48 * v91);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::addInstance  (binary VA: 0x1816420)
// Original: hkpStaticCompoundShape::addInstance
// ----------------------------------------------------------------------------
int hkpStaticCompoundShape::addInstance(hkpStaticCompoundShape::Self *self, const hkpShape::Self *a2, const hkQsTransformf::Self *a3)
{
  hkpStaticCompoundShape::Self *v3;
  const hkQsTransformf::Self *v4;
  char i; // bp
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  uint32_t *v12;
  float v14; // xmm1_4
  float v15; // xmm4_4
  char v16;
  float v17; // xmm2_4
  char v18;
  char v19;
  float v20; // xmm0_4
  int v21;
  char v22;
  char v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int32_t v29; // kr00_4
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44[3];
  typedef int _g4_t_v45[135];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v35)) > _g4_s1 ? (16u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v36)) > _g4_s2 ? (28u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v37)) > _g4_s3 ? (28u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v38)) > _g4_s4 ? (32u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v39)) > _g4_s5 ? (32u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v40)) > _g4_s6 ? (32u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v41)) > _g4_s7 ? (32u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v42)) > _g4_s8 ? (40u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v43)) > _g4_s9 ? (44u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v44)) > _g4_s10 ? (52u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v45)) > _g4_s11 ? (64u + sizeof(_g4_t_v45)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);

  v3 = self;
  v4 = a3;
  if ( *((uint32_t *)self + 17) != 0 )
  {
    hkErrStream::Construct((hkErrStream::Self *)v44, (hkString::Self *)v45, 512);
    hkOstream::opShl((int)(uintptr_t)(v44), (hkString::Self *)"Shape already baked! Cannot add more instances.");
    if ( hkError::messageError(
           (hkError::Self *)0x153EA950,
           (int)(uintptr_t)(v45),
           "Collide/StaticCompound/hkpStaticCompoundShape.cpp",
           (const char *)&dword_58 + 1,
           v35) != 0 )
      __builtin_debugtrap();
    hkErrStream::Destroy((hkErrStream::Self *)v44);
    return -1;
  }
  else
  {
    if ( G4_VCALL<uint8_t>(a2, 20) != 0 )
    {
      v36 = 1056964609;
      v38 = 1056964611;
      v43 = 1056964623;
      v42 = 1056964615;
      i = 1;
    }
    else
    {
      v40 = G4_VCALL<int>(a2, 64);
      v45[0] = 0;
      v45[1] = 0;
      v45[2] = -1;
      v26 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v45,
              (unsigned int)(uintptr_t)(a2),
              0xFFFFFFFF);
      if ( v26 == -1 )
      {
        v30 = G4_VCALL<int>(v40, 12);
        if ( v30 == -1 )
        {
          v41 = 0;
          v32 = 0;
        }
        else
        {
          v31 = 0;
          do
          {
            if ( v31 < v30 )
              v31 = v30;
            v30 = G4_VCALL<int>(v40, 16, v30);
          }
          while ( v30 != -1 );
          v4 = a3;
          v32 = v31;
          v33 = v31;
          v3 = self;
          v41 = v33 >> 1;
        }
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v45,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (unsigned int)(uintptr_t)(a2),
          v32);
        v27 = v41;
      }
      else
      {
        v27 = v26 >> 1;
      }
      for ( i = 1; v27 != 0; v27 >>= 1 )
        ++i;
      hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v45,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
      hkMapBase_unsigned_long_unsigned_l_393416::Destroy((hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v45);
      v36 = 1056964608;
      v38 = 1056964610;
      v43 = 1056964622;
      v42 = 1056964614;
    }
    if ( (uint8_t)hkQsTransformf::isApproximatelyEqual(
                            v4,
                            (const hkQsTransformf::Self *)&hkQsTransformf_identityStorage,
                            0.001f) == 0 )
    {
      v14 = *((float *)v4 + 8);
      v15 = *((float *)v4 + 9);
      if ( __builtin_isnan(v15) || (v16 = 0, v15 != 1.0) )
        v16 = 2;
      v17 = *((float *)v4 + 10);
      v37 = v16 | (v14 != 1.0);
      if ( v17 == 1.0 )
      {
        v18 = 0;
        v19 = 8;
      }
      else
      {
        v18 = 4;
        v19 = 12;
      }
      v20 = *((float *)v4 + 11);
      if ( v20 != 1.0 )
        v18 = v19;
      if ( !__builtin_isnan(v20) )
        v19 = v18;
      v21 = (v37 | (uint8_t)v19) & 7;
      v36 = v38;
      if ( v21 != 0 )
      {
        v22 = 4;
        if ( v17 >= 0.0 )
          v22 = 0;
        v23 = 4 * (v17 < 0.0) + 8;
        if ( v20 >= 0.0 )
          v23 = v22;
        v24 = (v23 & 7 | (uint8_t)((v14 < 0.0) | (2 * (v15 < 0.0)))) - 1;
        v36 = v42;
        if ( v24 <= 6 )
        {
          v25 = v43;
          if ( ((1 << v24) & 0x4B) == 0 )
            v25 = v42;
          v36 = v25;
        }
      }
    }
    v6 = *((uint32_t *)v3 + 9);
    v7 = (v6 + 1) >> 1;
    if ( v7 != 0 )
    {
      v8 = 1;
      do
      {
        ++v8;
        v7 >>= 1;
      }
      while ( v7 != 0 );
      v39 = v8;
    }
    else
    {
      v39 = 1;
    }
    v9 = *((uint8_t *)v3 + 24);
    if ( i >= v9 )
      v9 = i;
    if ( v9 + v39 > 32 )
    {
      return -1;
    }
    else
    {
      v10 = *((uint32_t *)v3 + 10);
      *((uint8_t *)v3 + 24) = v9;
      v11 = v6 + 1;
      if ( v6 == (v10 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpStaticCompoundShape::Self *)((char *)v3 + 32),
          &dword_40,
          v34);
        v6 = *((uint32_t *)v3 + 9);
        v11 = v6 + 1;
      }
      v12 = (uint32_t *)(*((uint32_t *)v3 + 8) + (v6 << 6));
      *((uint32_t *)v3 + 9) = v11;
      *v12 = *(uint32_t *)v4;
      v12[1] = *((uint32_t *)v4 + 1);
      v12[2] = *((uint32_t *)v4 + 2);
      v12[3] = *((uint32_t *)v4 + 3);
      v12[4] = *((uint32_t *)v4 + 4);
      v12[5] = *((uint32_t *)v4 + 5);
      v12[6] = *((uint32_t *)v4 + 6);
      v12[7] = *((uint32_t *)v4 + 7);
      v12[8] = *((uint32_t *)v4 + 8);
      v12[9] = *((uint32_t *)v4 + 9);
      v12[10] = *((uint32_t *)v4 + 10);
      v12[12] = (uint32_t)(uintptr_t)(a2);
      v12[11] = 1056964608;
      v12[3] = v36;
      v12[13] = 0;
      v12[14] = -1;
      v12[15] = 0;
      if ( *((uint8_t *)v3 + 25) == 1 && *((uint16_t *)a2 + 3) != 0 )
      {
        do
        {
          v29 = *((uint32_t *)a2 + 1);
          HIWORD(v28) = HIWORD(v29);
          LOWORD(v28) = 0;
        }
        while ( v29 != __sync_val_compare_and_swap(
                         (volatile int32_t *)a2 + 1,
                         v29,
                         v28 | (uint16_t)(v29 + 1)) );
      }
      return *((uint32_t *)v3 + 9) - 1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape::getChildShape  (binary VA: 0x1816910)
// Original: hkpStaticCompoundShape::getChildShape
// ----------------------------------------------------------------------------
__m128i * hkpStaticCompoundShape::getChildShape(int a1, unsigned int a2, __m128i *a3)
{
  int *address;
  uint32_t *v4;
  uint64_t v5; // rax
  unsigned int v6;
  __m128i *v7;
  unsigned int v8;
  int8_t v9;
  uint32_t *v10;
  uint64_t v11; // rax
  int v13;
  float v14; // xmm0_4
  __m128i *v15;
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm3_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm6_4
  __m128i v27;
  int v28;
  __m128i v29;
  int v30;
  __m128i v31;
  int v32;
  unsigned int v33;
  int v34;
  int i;
  __m128i *v36;
  float v37; // xmm4_4
  float v38; // xmm5_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm7_4
  float v43; // xmm6_4
  float v44; // xmm3_4
  float v45; // xmm3_4
  __m128i v46;
  int v47;
  __m128i v48;
  int v49;
  __m128i v50;
  int v51;
  float v52; // xmm1_4
  float v53; // xmm3_4
  float v54; // xmm6_4
  float v55; // xmm5_4
  float v56; // xmm2_4
  float v57; // xmm7_4
  float v58; // xmm0_4
  float v59; // xmm4_4
  float v60; // xmm1_4
  float v61; // xmm3_4
  float v62; // xmm5_4
  float v63; // xmm2_4
  float v64; // xmm7_4
  float v65; // xmm0_4
  float v66; // xmm4_4
  float v67; // xmm1_4
  float v68; // xmm3_4
  float v69; // xmm5_4
  float v70; // xmm2_4
  float v71; // xmm7_4
  float v72; // xmm0_4
  __m128i *v73;
  int v74;
  __m128i *j;
  __m128i *v76;
  __m128i *v77;
  __m128i v78;
  typedef int _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef unsigned int _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef int _g4_t_v104;
  typedef float _g4_t_v105;
  typedef __m128i *_g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int32_t _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef __m128i _g4_t_v124;
  typedef __m128i _g4_t_v125[15];
  typedef int _g4_t_v126;
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (0u + sizeof(_g4_t_v79)) > _g4_s0 ? (0u + sizeof(_g4_t_v79)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v80)) > _g4_s1 ? (0u + sizeof(_g4_t_v80)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v81)) > _g4_s2 ? (4u + sizeof(_g4_t_v81)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v82)) > _g4_s3 ? (4u + sizeof(_g4_t_v82)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v83)) > _g4_s4 ? (4u + sizeof(_g4_t_v83)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v84)) > _g4_s5 ? (4u + sizeof(_g4_t_v84)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v85)) > _g4_s6 ? (8u + sizeof(_g4_t_v85)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v86)) > _g4_s7 ? (8u + sizeof(_g4_t_v86)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v87)) > _g4_s8 ? (8u + sizeof(_g4_t_v87)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v88)) > _g4_s9 ? (8u + sizeof(_g4_t_v88)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v89)) > _g4_s10 ? (12u + sizeof(_g4_t_v89)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v90)) > _g4_s11 ? (12u + sizeof(_g4_t_v90)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v91)) > _g4_s12 ? (12u + sizeof(_g4_t_v91)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v92)) > _g4_s13 ? (12u + sizeof(_g4_t_v92)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v93)) > _g4_s14 ? (12u + sizeof(_g4_t_v93)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v94)) > _g4_s15 ? (16u + sizeof(_g4_t_v94)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v95)) > _g4_s16 ? (16u + sizeof(_g4_t_v95)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v96)) > _g4_s17 ? (16u + sizeof(_g4_t_v96)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v97)) > _g4_s18 ? (16u + sizeof(_g4_t_v97)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v98)) > _g4_s19 ? (20u + sizeof(_g4_t_v98)) : _g4_s19,
    _g4_s21 = (20u + sizeof(_g4_t_v99)) > _g4_s20 ? (20u + sizeof(_g4_t_v99)) : _g4_s20,
    _g4_s22 = (20u + sizeof(_g4_t_v100)) > _g4_s21 ? (20u + sizeof(_g4_t_v100)) : _g4_s21,
    _g4_s23 = (20u + sizeof(_g4_t_v101)) > _g4_s22 ? (20u + sizeof(_g4_t_v101)) : _g4_s22,
    _g4_s24 = (20u + sizeof(_g4_t_v102)) > _g4_s23 ? (20u + sizeof(_g4_t_v102)) : _g4_s23,
    _g4_s25 = (20u + sizeof(_g4_t_v103)) > _g4_s24 ? (20u + sizeof(_g4_t_v103)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v104)) > _g4_s25 ? (24u + sizeof(_g4_t_v104)) : _g4_s25,
    _g4_s27 = (24u + sizeof(_g4_t_v105)) > _g4_s26 ? (24u + sizeof(_g4_t_v105)) : _g4_s26,
    _g4_s28 = (24u + sizeof(_g4_t_v106)) > _g4_s27 ? (24u + sizeof(_g4_t_v106)) : _g4_s27,
    _g4_s29 = (24u + sizeof(_g4_t_v107)) > _g4_s28 ? (24u + sizeof(_g4_t_v107)) : _g4_s28,
    _g4_s30 = (24u + sizeof(_g4_t_v108)) > _g4_s29 ? (24u + sizeof(_g4_t_v108)) : _g4_s29,
    _g4_s31 = (24u + sizeof(_g4_t_v109)) > _g4_s30 ? (24u + sizeof(_g4_t_v109)) : _g4_s30,
    _g4_s32 = (24u + sizeof(_g4_t_v110)) > _g4_s31 ? (24u + sizeof(_g4_t_v110)) : _g4_s31,
    _g4_s33 = (28u + sizeof(_g4_t_v111)) > _g4_s32 ? (28u + sizeof(_g4_t_v111)) : _g4_s32,
    _g4_s34 = (32u + sizeof(_g4_t_v112)) > _g4_s33 ? (32u + sizeof(_g4_t_v112)) : _g4_s33,
    _g4_s35 = (36u + sizeof(_g4_t_v113)) > _g4_s34 ? (36u + sizeof(_g4_t_v113)) : _g4_s34,
    _g4_s36 = (40u + sizeof(_g4_t_v114)) > _g4_s35 ? (40u + sizeof(_g4_t_v114)) : _g4_s35,
    _g4_s37 = (44u + sizeof(_g4_t_v115)) > _g4_s36 ? (44u + sizeof(_g4_t_v115)) : _g4_s36,
    _g4_s38 = (48u + sizeof(_g4_t_v116)) > _g4_s37 ? (48u + sizeof(_g4_t_v116)) : _g4_s37,
    _g4_s39 = (52u + sizeof(_g4_t_v117)) > _g4_s38 ? (52u + sizeof(_g4_t_v117)) : _g4_s38,
    _g4_s40 = (56u + sizeof(_g4_t_v118)) > _g4_s39 ? (56u + sizeof(_g4_t_v118)) : _g4_s39,
    _g4_s41 = (60u + sizeof(_g4_t_v119)) > _g4_s40 ? (60u + sizeof(_g4_t_v119)) : _g4_s40,
    _g4_s42 = (64u + sizeof(_g4_t_v120)) > _g4_s41 ? (64u + sizeof(_g4_t_v120)) : _g4_s41,
    _g4_s43 = (68u + sizeof(_g4_t_v121)) > _g4_s42 ? (68u + sizeof(_g4_t_v121)) : _g4_s42,
    _g4_s44 = (72u + sizeof(_g4_t_v122)) > _g4_s43 ? (72u + sizeof(_g4_t_v122)) : _g4_s43,
    _g4_s45 = (76u + sizeof(_g4_t_v123)) > _g4_s44 ? (76u + sizeof(_g4_t_v123)) : _g4_s44,
    _g4_s46 = (80u + sizeof(_g4_t_v124)) > _g4_s45 ? (80u + sizeof(_g4_t_v124)) : _g4_s45,
    _g4_s47 = (96u + sizeof(_g4_t_v125)) > _g4_s46 ? (96u + sizeof(_g4_t_v125)) : _g4_s46,
    _g4_s48 = (336u + sizeof(_g4_t_v126)) > _g4_s47 ? (336u + sizeof(_g4_t_v126)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 0u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 0u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 4u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 4u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 4u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 4u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 8u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 8u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 8u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 12u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 12u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 16u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 16u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 16u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 16u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 20u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 20u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 20u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 20u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 20u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 20u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 24u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 24u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 24u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 24u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 24u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 24u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 24u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 28u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 32u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 36u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 40u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 44u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 48u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 52u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 56u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 60u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 64u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 68u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 72u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 76u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 80u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 96u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 336u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v111 = *address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TtSCS::getChildShape");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v111 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v6 = *(uint32_t *)(a1 + 32) + (a2 >> *(uint8_t *)(a1 + 24) << 6);
  v7 = *(__m128i **)(v6 + 48);
  v8 = *(uint32_t *)(v6 + 12) & 0xC0FFFFFF;
  if ( (*(uint32_t *)(v6 + 12) & 1) == 0 )
  {
    v98 = *(uint32_t *)(v6 + 12) & 0xC0FFFFFF;
    v104 = *(uint32_t *)(a1 + 28);
    v13 = (*(int (**)(__m128i *))(g4_m128_lane<int32_t>(*(v7), 0) + 64))(v7);
    v7 = (__m128i *)G4_VCALL<int>(v13, 24, a2 & v104, a3);
    LOBYTE(v8) = v98;
  }
  if ( (v8 & 2) != 0 )
  {
    v9 =g4_m128_lane<int8_t>(*(v7), 8);
    if ( (uint8_t)v9 > 0xBu )
    {
LABEL_9:
      hkErrStream::Construct((hkErrStream::Self *)&v112, (hkString::Self *)&v124, 512);
      hkOstream::opShl((int)(uintptr_t)(&v112), (hkString::Self *)"Unhandled child shape");
      if ( hkError::messageError(
             (hkError::Self *)0x5E986A2D,
             (int)(uintptr_t)(&v124),
             "Collide/StaticCompound/hkpStaticCompoundShape.cpp",
             (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_2E4)->st_size + 3,
             v79) != 0 )
        __builtin_debugtrap();
      hkErrStream::Destroy((hkErrStream::Self *)&v112);
      goto LABEL_12;
    }
    if ( ((1 << v9) & 0xC3B) == 0 )
    {
      if ( ((1 << v9) & 4) != 0 )
      {
        v52 = *(float *)(v6 + 28);
        v53 = *(float *)(v6 + 36) * *(float *)&g4_m128_lane<int32_t>(v7[2], 1);
        v54 = *(float *)(v6 + 32) * *(float *)g4_m128_ptr<int32_t>(v7[2]);
        v55 = *(float *)(v6 + 40) * *(float *)&g4_m128_lane<int32_t>(v7[2], 2);
        v108 = (float)(v52 * v52) - 0.5;
        v101 = *(float *)(v6 + 16);
        v91 = *(float *)(v6 + 20);
        v83 = *(float *)(v6 + 24);
        v56 = (float)((float)(v54 * v101) + (float)(v91 * v53)) + (float)(v83 * v55);
        v57 = (float)((float)((float)(*(float *)(v6 + 44) * *(float *)&g4_m128_lane<int32_t>(v7[2], 3)) * v108) + (float)(v52 * v56))
            + (float)(0.0 * v52);
        v58 = (float)((float)(v108 * v54) + (float)(v101 * v56))
            + (float)((float)((float)(v91 * v55) - (float)(v83 * v53)) * v52);
        *(float *)g4_m128_ptr<int32_t>(v7[2]) = (float)(v58 + v58) + *(float *)v6;
        *(float *)&g4_m128_lane<int32_t>(v7[2], 1) = (float)((float)((float)((float)(v108 * v53) + (float)(v91 * v56))
                                                      + (float)((float)((float)(v54 * v83) - (float)(v101 * v55)) * v52))
                                              + (float)((float)((float)(v108 * v53) + (float)(v91 * v56))
                                                      + (float)((float)((float)(v54 * v83) - (float)(v101 * v55)) * v52)))
                                      + *(float *)(v6 + 4);
        v59 = (float)((float)(v108 * v55) + (float)(v83 * v56))
            + (float)((float)((float)(v53 * v101) - (float)(v54 * v91)) * v52);
        *(float *)&g4_m128_lane<int32_t>(v7[2], 2) = (float)(v59 + v59) + *(float *)(v6 + 8);
        *(float *)&g4_m128_lane<int32_t>(v7[2], 3) = (float)(v57 + v57) + *(float *)(v6 + 12);
        v60 = *(float *)(v6 + 28);
        v61 = *(float *)(v6 + 36) * *(float *)&g4_m128_lane<int32_t>(v7[3], 1);
        v109 = (float)(v60 * v60) - 0.5;
        v62 = *(float *)(v6 + 40) * *(float *)&g4_m128_lane<int32_t>(v7[3], 2);
        v102 = *(float *)(v6 + 16);
        v92 = *(float *)(v6 + 20);
        v87 = *(float *)(v6 + 32) * *(float *)g4_m128_ptr<int32_t>(v7[3]);
        v84 = *(float *)(v6 + 24);
        v63 = (float)((float)(v87 * v102) + (float)(v92 * v61)) + (float)(v84 * v62);
        v64 = (float)((float)((float)(*(float *)(v6 + 44) * *(float *)&g4_m128_lane<int32_t>(v7[3], 3)) * v109) + (float)(v60 * v63))
            + (float)(0.0 * v60);
        v65 = (float)((float)(v109 * v87) + (float)(v102 * v63))
            + (float)((float)((float)(v92 * v62) - (float)(v84 * v61)) * v60);
        *(float *)g4_m128_ptr<int32_t>(v7[3]) = (float)(v65 + v65) + *(float *)v6;
        *(float *)&g4_m128_lane<int32_t>(v7[3], 1) = (float)((float)((float)((float)(v109 * v61) + (float)(v92 * v63))
                                                      + (float)((float)((float)(v87 * v84) - (float)(v102 * v62)) * v60))
                                              + (float)((float)((float)(v109 * v61) + (float)(v92 * v63))
                                                      + (float)((float)((float)(v87 * v84) - (float)(v102 * v62)) * v60)))
                                      + *(float *)(v6 + 4);
        v66 = (float)((float)(v109 * v62) + (float)(v84 * v63))
            + (float)((float)((float)(v61 * v102) - (float)(v87 * v92)) * v60);
        *(float *)&g4_m128_lane<int32_t>(v7[3], 2) = (float)(v66 + v66) + *(float *)(v6 + 8);
        *(float *)&g4_m128_lane<int32_t>(v7[3], 3) = (float)(v64 + v64) + *(float *)(v6 + 12);
        v67 = *(float *)(v6 + 28);
        v68 = *(float *)(v6 + 36) * *(float *)&g4_m128_lane<int32_t>(v7[4], 1);
        v110 = (float)(v67 * v67) - 0.5;
        v69 = *(float *)(v6 + 40) * *(float *)&g4_m128_lane<int32_t>(v7[4], 2);
        v103 = *(float *)(v6 + 16);
        v97 = *(float *)(v6 + 20);
        v93 = *(float *)(v6 + 32) * *(float *)g4_m128_ptr<int32_t>(v7[4]);
        v88 = *(float *)(v6 + 24);
        v70 = (float)((float)(v93 * v103) + (float)(v97 * v68)) + (float)(v88 * v69);
        v71 = (float)((float)((float)(*(float *)(v6 + 44) * *(float *)&g4_m128_lane<int32_t>(v7[4], 3)) * v110) + (float)(v67 * v70))
            + (float)(0.0 * v67);
        v72 = (float)((float)(v110 * v93) + (float)(v103 * v70))
            + (float)((float)((float)(v97 * v69) - (float)(v88 * v68)) * v67);
        *(float *)g4_m128_ptr<int32_t>(v7[4]) = (float)(v72 + v72) + *(float *)v6;
        *(float *)&g4_m128_lane<int32_t>(v7[4], 1) = (float)((float)((float)((float)(v110 * v68) + (float)(v97 * v70))
                                                      + (float)((float)((float)(v93 * v88) - (float)(v103 * v69)) * v67))
                                              + (float)((float)((float)(v110 * v68) + (float)(v97 * v70))
                                                      + (float)((float)((float)(v93 * v88) - (float)(v103 * v69)) * v67)))
                                      + *(float *)(v6 + 4);
        *(float *)&g4_m128_lane<int32_t>(v7[4], 2) = (float)((float)((float)((float)(v110 * v69) + (float)(v88 * v70))
                                                      + (float)((float)((float)(v68 * v103) - (float)(v93 * v97)) * v67))
                                              + (float)((float)((float)(v110 * v69) + (float)(v88 * v70))
                                                      + (float)((float)((float)(v68 * v103) - (float)(v93 * v97)) * v67)))
                                      + *(float *)(v6 + 8);
        *(float *)&g4_m128_lane<int32_t>(v7[4], 3) = (float)(v71 + v71) + *(float *)(v6 + 12);
        goto LABEL_12;
      }
      goto LABEL_9;
    }
    if ( a3 == v7 )
    {
      if ( &v124 >= &a3[1] || a3 >= v125 )
      {
        v124 = *a3;
        v125[0] = a3[1];
        v125[1] = a3[2];
        v125[2] = a3[3];
        v125[3] = a3[4];
        v125[4] = a3[5];
        v125[5] = a3[6];
        v125[6] = a3[7];
        v125[7] = a3[8];
        v125[8] = a3[9];
        v125[9] = a3[10];
        v125[10] = a3[11];
        v125[11] = a3[12];
        v125[12] = a3[13];
        v125[13] = a3[14];
        v125[14] = a3[15];
      }
      else
      {
        v76 = a3;
        v77 = &v124;
        do
        {
          v78 = *v76;
          ++v77;
          ++v76;
          v77[-1] = v78;
        }
        while ( v77 != (__m128i *)&v126 );
      }
      v7 = &v124;
    }
    if ( v9 == 10 )
    {
      v36 = (__m128i *)g4_m128_lane<int32_t>(v7[1], 2);
      v112 =g4_m128_lane<int32_t>(v7[2], 0);
      v113 =g4_m128_lane<int32_t>(v7[2], 1);
      v114 = *(float *)&g4_m128_lane<int32_t>(v7[2], 2);
      v115 = *(float *)&g4_m128_lane<int32_t>(v7[2], 3);
      v116 = 0.0;
      v117 = 0.0;
      v118 = 0.0;
      v119 = 1.0;
      v120 = 1.0;
      v121 = 1.0;
      v122 = 1065353216;
      v123 = 1065353216;
      v37 = *(float *)(v6 + 32) * *(float *)&v112;
      v38 = *(float *)(v6 + 36) * *(float *)&v113;
      v39 = *(float *)(v6 + 40) * v114;
      v100 = *(float *)(v6 + 28);
      v40 = *(float *)(v6 + 20);
      v96 = *(float *)(v6 + 24);
      v90 = (float)(v100 * v100) - 0.5;
      v41 = (float)((float)(*(float *)(v6 + 16) * v37) + (float)(v40 * v38)) + (float)(v96 * v39);
      v86 = *(float *)(v6 + 16);
      v107 = (float)((float)(v86 * v41) + (float)(v90 * v37))
           + (float)((float)((float)(v40 * v39) - (float)(v96 * v38)) * v100);
      v42 = (float)((float)(v90 * v38) + (float)(v40 * v41))
          + (float)((float)((float)(v96 * v37) - (float)(v86 * v39)) * v100);
      v43 = (float)((float)((float)((float)(v39 * v90) + (float)(v96 * v41))
                          + (float)((float)((float)(v38 * v86) - (float)(v37 * v40)) * v100))
                  + (float)((float)((float)(v39 * v90) + (float)(v96 * v41))
                          + (float)((float)((float)(v38 * v86) - (float)(v37 * v40)) * v100)))
          + *(float *)(v6 + 8);
      v44 = (float)((float)(v90 * (float)(*(float *)(v6 + 44) * v115)) + (float)(v41 * v100)) + (float)(0.0 * v100);
      v45 = (float)(v44 + v44) + *(float *)(v6 + 12);
g4_m128_raw(v46) = *(unsigned int *)(v6 + 36);
      *(float *)g4_m128_ptr<int32_t>(v46) = *(float *)g4_m128_ptr<int32_t>(v46) * 1.0;
      v82 = *(float *)(v6 + 32) * 1.0;
      v47 = _mm_cvtsi128_si32(v46);
g4_m128_raw(v48) = *(unsigned int *)(v6 + 40);
      *(float *)g4_m128_ptr<int32_t>(v48) = *(float *)g4_m128_ptr<int32_t>(v48) * 1.0;
      v49 = _mm_cvtsi128_si32(v48);
g4_m128_raw(v50) = *(unsigned int *)(v6 + 44);
      *(float *)g4_m128_ptr<int32_t>(v50) = *(float *)g4_m128_ptr<int32_t>(v50) * 1.0;
      v51 = _mm_cvtsi128_si32(v50);
      *(float *)g4_m128_ptr<int32_t>(v50) = (float)(v107 + v107) + *(float *)v6;
      *(float *)&v113 = (float)(v42 + v42) + *(float *)(v6 + 4);
      v115 = v45;
      v112 =g4_m128_lane<int32_t>(v50, 0);
      v114 = v43;
      v116 = (float)((float)((float)(v40 * 0.0) - (float)(v96 * 0.0)) + (float)(v100 * 0.0)) + (float)(1.0 * v86);
      v117 = (float)((float)((float)(v96 * 0.0) - (float)(v86 * 0.0)) + (float)(v100 * 0.0)) + (float)(1.0 * v40);
      v119 = (float)(v100 * 1.0) - (float)((float)((float)(v86 * 0.0) + (float)(v40 * 0.0)) + (float)(0.0 * v96));
      v118 = (float)((float)((float)(0.0 * v86) - (float)(0.0 * v40)) + (float)(v100 * 0.0)) + (float)(1.0 * v96);
      v120 = v82;
      v121 = *(float *)&v47;
      v123 = v51;
      v122 = v49;
      v7 = v36;
    }
    else if ( v9 == 11 )
    {
      v14 = *(float *)(v6 + 28);
      v15 = (__m128i *)g4_m128_lane<int32_t>(v7[1], 2);
      v16 = *(float *)(v6 + 32) * *(float *)g4_m128_ptr<int32_t>(v7[2]);
      v17 = *(float *)(v6 + 36) * *(float *)&g4_m128_lane<int32_t>(v7[2], 1);
      v18 = *(float *)(v6 + 40) * *(float *)&g4_m128_lane<int32_t>(v7[2], 2);
      v94 = (float)(v14 * v14) - 0.5;
      v105 = *(float *)(v6 + 20);
      v85 = *(float *)(v6 + 24);
      v89 = *(float *)(v6 + 16);
      v19 = (float)((float)(v89 * v16) + (float)(v105 * v17)) + (float)(v85 * v18);
      v99 = (float)((float)(v89 * v19) + (float)(v94 * v16))
          + (float)((float)((float)(v105 * v18) - (float)(v85 * v17)) * v14);
      v20 = (float)((float)(v94 * v17) + (float)(v105 * v19))
          + (float)((float)((float)(v85 * v16) - (float)(v89 * v18)) * v14);
      v21 = (float)((float)(v18 * v94) + (float)(v85 * v19))
          + (float)((float)((float)(v17 * v89) - (float)(v16 * v105)) * v14);
      v22 = (float)((float)(v94 * (float)(*(float *)(v6 + 44) * *(float *)&g4_m128_lane<int32_t>(v7[2], 3))) + (float)(v19 * v14))
          + (float)(0.0 * v14);
      v95 = *(float *)&g4_m128_lane<int32_t>(v7[3], 2);
      v23 = *(float *)g4_m128_ptr<int32_t>(v7[3]);
      v24 = *(float *)&g4_m128_lane<int32_t>(v7[3], 1);
      v81 = *(float *)&g4_m128_lane<int32_t>(v7[3], 3);
      v25 = (float)(v22 + v22) + *(float *)(v6 + 12);
      v26 = (float)(v21 + v21) + *(float *)(v6 + 8);
g4_m128_raw(v27) = *(unsigned int *)(v6 + 32);
      *(float *)g4_m128_ptr<int32_t>(v27) = *(float *)g4_m128_ptr<int32_t>(v27) * *(float *)g4_m128_ptr<int32_t>(v7[4]);
      v28 = _mm_cvtsi128_si32(v27);
      v80 = *(float *)(v6 + 36) * *(float *)&g4_m128_lane<int32_t>(v7[4], 1);
g4_m128_raw(v29) = *(unsigned int *)(v6 + 40);
      *(float *)g4_m128_ptr<int32_t>(v29) = *(float *)g4_m128_ptr<int32_t>(v29) * *(float *)&g4_m128_lane<int32_t>(v7[4], 2);
      v30 = _mm_cvtsi128_si32(v29);
g4_m128_raw(v31) = *(unsigned int *)(v6 + 44);
      *(float *)g4_m128_ptr<int32_t>(v31) = *(float *)g4_m128_ptr<int32_t>(v31) * *(float *)&g4_m128_lane<int32_t>(v7[4], 3);
      v32 = _mm_cvtsi128_si32(v31);
      *(float *)g4_m128_ptr<int32_t>(v31) = (float)(v99 + v99) + *(float *)v6;
      *(float *)&v113 = (float)(v20 + v20) + *(float *)(v6 + 4);
      v115 = v25;
      v112 =g4_m128_lane<int32_t>(v31, 0);
      v114 = v26;
      v116 = (float)((float)((float)(v105 * v95) - (float)(v85 * v24)) + (float)(v14 * v23)) + (float)(v81 * v89);
      v117 = (float)((float)((float)(v85 * v23) - (float)(v95 * v89)) + (float)(v14 * v24)) + (float)(v105 * v81);
      v123 = v32;
      v120 = *(float *)&v28;
      v122 = v30;
      v7 = v15;
      v121 = v80;
      v118 = (float)((float)((float)(v24 * v89) - (float)(v23 * v105)) + (float)(v95 * v14)) + (float)(v85 * v81);
      v119 = (float)(v14 * v81) - (float)((float)((float)(v89 * v23) + (float)(v105 * v24)) + (float)(v85 * v95));
    }
    else
    {
      v112 = *(int *)v6;
      v113 = *(int32_t *)(v6 + 4);
      v114 = *(float *)(v6 + 8);
      v115 = *(float *)(v6 + 12);
      v116 = *(float *)(v6 + 16);
      v117 = *(float *)(v6 + 20);
      v118 = *(float *)(v6 + 24);
      v119 = *(float *)(v6 + 28);
      v120 = *(float *)(v6 + 32);
      v121 = *(float *)(v6 + 36);
      v122 = *(uint32_t *)(v6 + 40);
      v123 = *(uint32_t *)(v6 + 44);
    }
    v33 = (unsigned int)(*(int (**)(__m128i *))(g4_m128_lane<int32_t>(*(v7), 0) + 80))(v7) >> 4;
    v106 = a3 + 6;
    if ( v33 != 0 )
    {
      if ( (v7 >= &a3[7] || v106 >= &v7[1]) && v33 > 1 )
      {
        v34 = 0;
        for ( i = 0; i != v33; ++i )
        {
          a3[v34 + 6] = v7[v34];
          ++v34;
        }
      }
      else
      {
        v73 = a3 + 6;
        v74 = 0;
        for ( j = v7 + 1; ; ++j )
        {
          ++v74;
          ++v73;
          v73[-1] = *v7;
          v7 = j;
          if ( v33 == v74 )
            break;
        }
      }
    }
    hkpConvexTransformShape::Construct(
      (hkpConvexTransformShape::Self *)a3,
      (int)(uintptr_t)(v106),
      (hkQsTransformf::Self *)&v112,
      0);
    v7 = a3;
  }
LABEL_12:
  v10 = *(uint32_t **)(v111 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(v111 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("Et");
    v11 = __rdtsc();
    v10[1] = v11;
    *(uint32_t *)(v111 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticCompoundShape_Internals::getTransformedMaximumProjection  (binary VA: 0x181ac60)
// Original: hkpStaticCompoundShape_Internals::getTransformedMaximumProjection
// ----------------------------------------------------------------------------
long double hkpStaticCompoundShape_Internals::getTransformedMaximumProjection(hkpStaticCompoundShape_Internals::Self *self, const hkpShape::Self *a2, const hkQsTransformf::Self *a3)
{
  float v3; // xmm3_4
  float v4; // xmm6_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm1_4
  float v10; // xmm5_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  float v16; // xmm1_4
  int v17;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);

  v3 = *((float *)a2 + 7);
  v4 = *((float *)a3 + 2);
  v5 = (float)(v3 * v3) - 0.5;
  v6 = (float)((float)(*(float *)a3 * *((float *)a2 + 4)) + (float)(*((float *)a3 + 1) * *((float *)a2 + 5)))
     + (float)(*((float *)a2 + 6) * v4);
  v7 = (float)((float)(*((float *)a3 + 3) * v5) + (float)(v3 * v6)) + (float)(0.0 * v3);
  v8 = *(float *)a3 * *((float *)a2 + 6);
  v9 = (float)((float)(*(float *)a3 * v5) + (float)(*((float *)a2 + 4) * v6))
     + (float)((float)((float)(*((float *)a3 + 1) * *((float *)a2 + 6)) - (float)(*((float *)a2 + 5) * v4)) * v3);
  v10 = *((float *)a2 + 5) * v6;
  v11 = v6 * *((float *)a2 + 6);
  v20[0] = (float)(v9 + v9) * *((float *)a2 + 8);
  v12 = (float)(*((float *)a3 + 1) * v5) + v10;
  v13 = (float)(v5 * v4) + v11;
  v14 = *((float *)a3 + 1) * *((float *)a2 + 4);
  v15 = (float)((float)(*((float *)a2 + 4) * v4) - v8) * v3;
  v20[1] = (float)((float)(v12 + v15) + (float)(v12 + v15)) * *((float *)a2 + 9);
  v16 = (float)((float)(*(float *)a3 * *((float *)a2 + 5)) - v14) * v3;
  v20[2] = (float)((float)(v13 + v16) + (float)(v13 + v16)) * *((float *)a2 + 10);
  v17 = *(uint32_t *)self;
  v20[3] = (float)(v7 + v7) * *((float *)a2 + 11);
  v19 = ((long double (*)(hkpStaticCompoundShape_Internals::Self *, float *))*(uint32_t *)(v17 + 68))(self, v20);
  return (float)((float)((float)((float)(*(float *)a3 * *(float *)a2) + (float)(*((float *)a3 + 1) * *((float *)a2 + 1)))
                       + (float)(*((float *)a3 + 2) * *((float *)a2 + 2)))
               + v19);
}


