#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBvCompr.h"

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshAgent::staticLinearCast  (binary VA: 0x170a900)
// Original: hkpBvCompressedMeshAgent::staticLinearCast
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshAgent::staticLinearCast(const hkTransformf::Self **a1, int *a2, int a3, int a4, int a5)
{
  float *v5;
  float v6; // xmm5_4
  int v7;
  float v8; // xmm3_4
  float v9; // xmm6_4
  float v10; // xmm4_4
  typedef float _g4_t_v12;
  typedef float _g4_t_v13[4];
  typedef float _g4_t_v14[8];
  typedef uint32_t _g4_t_v15[19];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v15)) > _g4_s3 ? (64u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);

  v5 = (float *)a2[2];
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v15, (const hkTransformf::Self *)v5, a1[2]);
  G4_VCALL<void>(*a1, 24, v15, *(uint32_t *)(a3 + 12), v14);
  v6 = *(float *)(a3 + 84);
  v7 = *a2;
  v12 = *(float *)(a3 + 80);
  v8 = (float)(*v5 * v12) + (float)(v5[1] * v6);
  v9 = (float)((float)(v12 * v5[8]) + (float)(v6 * v5[9])) + (float)(*(float *)(a3 + 88) * v5[10]);
  v10 = *(float *)(a3 + 88) * v5[2];
  v13[1] = (float)((float)((float)(v5[4] * v12) + (float)(v5[5] * v6)) + (float)(*(float *)(a3 + 88) * v5[6]))
         + (float)((float)(v14[1] + v14[5]) * 0.5);
  v13[3] = (float)((float)(v14[3] + v14[7]) * 0.5) + v9;
  v13[2] = (float)((float)(v14[2] + v14[6]) * 0.5) + v9;
  v13[0] = (float)(v8 + v10) + (float)((float)(v14[0] + v14[4]) * 0.5);
  v15[1] = 1065353216;
  v15[2] = (uint32_t)(uintptr_t)(a1);
  v15[0] = (uint32_t)(uintptr_t)(&off_209C190);
  v15[4] = a3;
  v15[5] = a4;
  v15[3] = (uint32_t)(uintptr_t)(a2);
  v15[6] = a5;
  return G4_VCALL<int>(v7, 80, v14, v13, v15);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshAgent::linearCast  (binary VA: 0x170abf0)
// Original: hkpBvCompressedMeshAgent::linearCast
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshAgent::linearCast(int a1, const hkTransformf::Self **a2, int *a3, int a4, int a5, int a6)
{
  return hkpBvCompressedMeshAgent::staticLinearCast(a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshAgent::Destroy  (binary VA: 0x170b120)
// Original: hkpBvCompressedMeshAgent::~hkpBvCompressedMeshAgent
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshAgent::Destroy(hkpBvCompressedMeshAgent::Self *self)
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
// Function: hkpBvCompressedMeshAgent::Destroy_ea170b270  (binary VA: 0x170b270)
// Original: hkpBvCompressedMeshAgent::~hkpBvCompressedMeshAgent
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshAgent::Destroy_ea170b270(hkpBvCompressedMeshAgent::Self *self)
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
// Function: hkpBvCompressedMeshAgent::Construct  (binary VA: 0x170b3d0)
// Original: hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshAgent::Construct(hkpBvCompressedMeshAgent::Self *self, hkpContactMgr::Self *a2)
{
  hkpBvTreeAgent::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C008);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshAgent::createShapeVsStaticMeshAgent  (binary VA: 0x170b410)
// Original: hkpBvCompressedMeshAgent::createShapeVsStaticMeshAgent
// ----------------------------------------------------------------------------
hkpBvCompressedMeshAgent::Self * hkpBvCompressedMeshAgent::createShapeVsStaticMeshAgent(int a1, int a2, int a3, hkpContactMgr::Self *a4)
{
  int address;
  hkpBvCompressedMeshAgent::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (hkpBvCompressedMeshAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                     *(uint32_t *)(*(uint32_t *)address + 44),
                                     64);
  hkpBvCompressedMeshAgent::Construct(v5, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshAgent::createStaticMeshVsShapeAgent  (binary VA: 0x170b460)
// Original: hkpBvCompressedMeshAgent::createStaticMeshVsShapeAgent
// ----------------------------------------------------------------------------
hkpBvCompressedMeshAgent::Self * hkpBvCompressedMeshAgent::createStaticMeshVsShapeAgent(int a1, int a2, int a3, hkpContactMgr::Self *a4)
{
  int address;
  hkpBvCompressedMeshAgent::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (hkpBvCompressedMeshAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                     *(uint32_t *)(*(uint32_t *)address + 44),
                                     64);
  hkpBvCompressedMeshAgent::Construct(v5, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshAgent::createStaticMeshVsStaticMeshAgent  (binary VA: 0x170b4b0)
// Original: hkpBvCompressedMeshAgent::createStaticMeshVsStaticMeshAgent
// ----------------------------------------------------------------------------
hkpBvCompressedMeshAgent::Self * hkpBvCompressedMeshAgent::createStaticMeshVsStaticMeshAgent(uint32_t *a1, int *a2, int a3, hkpContactMgr::Self *a4)
{
  int v4;
  int v5;
  int v6;
  hkpBvCompressedMeshAgent::Self *v7;
  int address;

  v4 = *a2;
  v5 = G4_VCALL<int>(*a1, 88);
  if ( v5 < G4_VCALL<int>(v4, 88) )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v7 = (hkpBvCompressedMeshAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                       *(uint32_t *)(*(uint32_t *)address + 44),
                                       64);
    hkpBvCompressedMeshAgent::Construct(v7, a4);
  }
  else
  {
    v6 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v7 = (hkpBvCompressedMeshAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v6 + 44) + 8))(
                                       *(uint32_t *)(*(uint32_t *)v6 + 44),
                                       64);
    hkpBvCompressedMeshAgent::Construct(v7, a4);
    *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_209BFA8);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshAgent::registerAgent  (binary VA: 0x170b570)
// Original: hkpBvCompressedMeshAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshAgent::registerAgent(hkpBvCompressedMeshAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpBvCompressedMeshAgent::createStaticMeshVsShapeAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 17, -1);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  v2[0] = (uint32_t)(uintptr_t)(hkpBvCompressedMeshAgent::createShapeVsStaticMeshAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpBvCompressedMeshAgent::staticLinearCast);
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), -1, 17);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  LOWORD(v2[4]) = 256;
  v2[0] = (uint32_t)(uintptr_t)(hkpBvCompressedMeshAgent::createStaticMeshVsStaticMeshAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpBvCompressedMeshAgent::staticLinearCast);
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 17, 17);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::staticClass  (binary VA: 0x178dc70)
// Original: hkpBvCompressedMeshShape::staticClass
// ----------------------------------------------------------------------------
void * hkpBvCompressedMeshShape::staticClass()
{
  return &hkpBvCompressedMeshShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeGc::Destroy  (binary VA: 0x17b7f50)
// Original: hkpBvCompressedMeshShapeGc::~hkpBvCompressedMeshShapeGc
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshShapeGc::Destroy(hkpBvCompressedMeshShapeGc::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0C48);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeGc::Destroy_ea17b7fa0  (binary VA: 0x17b7fa0)
// Original: hkpBvCompressedMeshShapeGc::~hkpBvCompressedMeshShapeGc
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshShapeGc::Destroy_ea17b7fa0(hkpBvCompressedMeshShapeGc::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0C48);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeGc::isKeyConvertionAllowed  (binary VA: 0x17b7fd0)
// Original: hkpBvCompressedMeshShapeGc::isKeyConvertionAllowed
// ----------------------------------------------------------------------------
bool hkpBvCompressedMeshShapeGc::isKeyConvertionAllowed(hkpBvCompressedMeshShapeGc::Self *self, unsigned int a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;

  v2 = *((uint32_t **)self + 1);
  if ( v2 == nullptr )
  {
    v7 = *((uint32_t **)self + 2);
    if ( v7 == nullptr )
      return true;
    v8 = v7[1];
    if ( v8 <= 0 )
      return true;
    v9 = (uint32_t *)*v7;
    if ( a2 != *(uint32_t *)*v7 )
    {
      v10 = 0;
      while ( ++v10 != v8 )
      {
        if ( a2 == v9[v10] )
          return v10 == -1;
      }
      return true;
    }
    return false;
  }
  v3 = v2[1];
  if ( v3 <= 0 )
    return false;
  v4 = (uint32_t *)*v2;
  if ( *(uint32_t *)*v2 != a2 )
  {
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( v4[v5] == a2 )
        return v5 != -1;
    }
    return false;
  }
  return true;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::getAabb  (binary VA: 0x17b8510)
// Original: hkpBvCompressedMeshShape::getAabb
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::getAabb(hkpBvCompressedMeshShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  typedef float _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  v5 = a3;
  return hkAabbUtil::calcAabb(a2, (char *)self + 96, &v5, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::calcSizeForSpu  (binary VA: 0x17b8560)
// Original: hkpBvCompressedMeshShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::calcSizeForSpu()
{
  return 224;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::getNumChildShapes  (binary VA: 0x17b8570)
// Original: hkpBvCompressedMeshShape::getNumChildShapes
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::getNumChildShapes(hkpBvCompressedMeshShape::Self *self)
{
  return *((uint32_t *)self + 32);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::getFirstKey  (binary VA: 0x17b8590)
// Original: hkpBvCompressedMeshShape::getFirstKey
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::getFirstKey(hkpBvCompressedMeshShape::Self *self)
{
  unsigned int v1;
  unsigned int v2;
  int v3;
  char *v4;
  int v5;
  char v6;
  char v7;
  int v9;
  int v10;
  char *v11;
  bool v12;
  int v13;
  char v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v1 = 0xFFFFFFFF;
  if ( *((uint32_t *)self + 36) != 0 )
  {
    v19 = *((uint32_t *)self + 38);
    v1 = 0;
    while ( 1 )
    {
      v2 = v1 >> 8;
      v3 = (uint8_t)v1 >> 1;
      v18 = *(uint32_t *)(*((uint32_t *)self + 35) + 96 * (v1 >> 8) + 80);
      v4 = (char *)(v19 + 4 * (v18 >> 8) + 4 * v3);
      v5 = (uint8_t)v4[3];
      v16 = (uint8_t)v4[2];
      v6 = v4[1];
      v7 = *v4;
      if ( v5 == v16 || v7 != -34 || v6 != -83 || v16 != 222 || v5 != 173 )
        break;
      v9 = v1 & 1;
      v22 = v3;
      v10 = v9 + 1;
      v17 = v2;
      v11 = (char *)(v19 + 4 * (v3 + (v18 >> 8)));
      v20 = (uint8_t)v11[3];
      v12 = v20 == (uint8_t)v11[2];
      v21 = (uint8_t)v11[2];
      v13 = (uint8_t)v11[1];
      v14 = *v11;
      if ( v12 )
      {
        v15 = 2 * (v20 == v13) + 1;
      }
      else if ( v14 != -34 || v13 != 173 || v21 != 222 || (v15 = 0, v20 != 173) )
      {
        v15 = 2;
      }
      if ( v9 >= hkcdStaticMeshTreeBase::Primitive::g_typeToNumTriangles[v15] - 1 )
      {
        ++v3;
        if ( v22 + 1 < (uint8_t)v18 )
        {
          v10 = 0;
        }
        else
        {
          v17 = v2 + 1;
          if ( *((uint32_t *)self + 36) <= (signed int)(v2 + 1) )
            return -1;
          v10 = 0;
          v3 = 0;
        }
      }
      v1 = v10 | (2 * v3) | (v17 << 8);
      if ( v1 == -1 )
        return -1;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::getNextKey  (binary VA: 0x17b8750)
// Original: hkpBvCompressedMeshShape::getNextKey
// ----------------------------------------------------------------------------
unsigned int hkpBvCompressedMeshShape::getNextKey(hkpBvCompressedMeshShape::Self *self, unsigned int a2)
{
  unsigned int result;
  int i;
  int v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  char v16; // bp
  char v17;
  int v18;
  unsigned int v19;
  int v20;

  result = a2;
  v20 = *((uint32_t *)self + 35);
  v19 = *(uint32_t *)(v20 + 96 * (a2 >> 8) + 80);
  for ( i = *((uint32_t *)self + 38); ; i = *((uint32_t *)self + 38) )
  {
    v4 = result & 1;
    v5 = (uint8_t)result >> 1;
    v6 = result >> 8;
    v7 = (char *)(i + 4 * (v5 + (v19 >> 8)));
    v8 = (uint8_t)v7[3];
    v18 = (uint8_t)v7[2];
    v9 = (uint8_t)v7[1];
    v10 = *v7;
    if ( v8 == v18 )
    {
      v11 = 2 * (v8 == v9) + 1;
    }
    else if ( v10 != -34 || v9 != 173 || v18 != 222 || (v11 = 0, v8 != 173) )
    {
      v11 = 2;
    }
    v12 = v4 + 1;
    if ( v4 >= hkcdStaticMeshTreeBase::Primitive::g_typeToNumTriangles[v11] - 1 )
    {
      if ( ++v5 < (uint8_t)v19 )
      {
        v12 = 0;
      }
      else
      {
        if ( ++v6 >= *((uint32_t *)self + 36) )
          return -1;
        v12 = 0;
        v5 = 0;
      }
    }
    if ( v6 < 0 )
      break;
    result = v12 | (2 * v5) | (v6 << 8);
    if ( result == -1 )
      break;
    v13 = (char *)(((2 * (uint16_t)result) & 0x1FC)
                 + *((uint32_t *)self + 38)
                 + 4 * (*(uint32_t *)(v20 + 96 * (result >> 8) + 80) >> 8));
    v14 = (uint8_t)v13[3];
    v15 = (uint8_t)v13[2];
    v16 = v13[1];
    v17 = *v13;
    if ( v14 == v15 || v17 != -34 || v16 != -83 || v15 != 222 || v14 != 173 )
      return result;
    v19 = *(uint32_t *)(v20 + 96 * (result >> 8) + 80);
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::getPrimitiveUserString  (binary VA: 0x17b8de0)
// Original: hkpBvCompressedMeshShape::getPrimitiveUserString
// ----------------------------------------------------------------------------
hkpBvCompressedMeshShape::Self * hkpBvCompressedMeshShape::getPrimitiveUserString(hkpBvCompressedMeshShape::Self *self, unsigned int a2, unsigned int a3)
{
  float v4; // xmm7_4
  float v5; // xmm5_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm6_4
  int v11;
  float v12; // xmm4_4
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int PrimitiveData;
  typedef int _g4_t_v20;
  typedef float _g4_t_v21[11];
  typedef int _g4_t_v22;
  typedef g4_int128_t _g4_t_v23;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v22)) > _g4_s2 ? (60u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v23)) > _g4_s3 ? (64u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v25)) > _g4_s4 ? (84u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v26)) > _g4_s5 ? (88u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v27)) > _g4_s6 ? (92u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v28)) > _g4_s7 ? (96u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v29)) > _g4_s8 ? (100u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v30)) > _g4_s9 ? (104u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v31)) > _g4_s10 ? (108u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v32)) > _g4_s11 ? (112u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v33)) > _g4_s12 ? (116u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 116u);

  if ( *(uint8_t *)(a2 + 30) != 0 && *(uint32_t *)(a2 + 60) != 0 )
  {
    v23 = 0;
    v33 = a3 >> 8;
    v32 = a3 >> 8;
    v4 = *(float *)(a2 + 112);
    v21[0] = *(float *)(a2 + 96);
    v5 = *(float *)(a2 + 116);
    v6 = *(float *)(a2 + 120);
    v21[1] = *(float *)(a2 + 100);
    v7 = *(float *)(a2 + 124);
    v21[2] = *(float *)(a2 + 104);
    v21[3] = *(float *)(a2 + 108);
    v8 = v6 - *(float *)(a2 + 104);
    v9 = v7 - *(float *)(a2 + 108);
    v10 = (*(const float *)&g4_fnstatic_01bb1a9ef5)
        * (float)(v4 - *(float *)(a2 + 96));
    v11 = *(uint32_t *)(a2 + 176);
    v12 = (*(const float *)&unk_20C89B4) * (float)(v5 - *(float *)(a2 + 100));
    v25 = *(uint32_t *)(a2 + 140) + 96 * (a3 >> 8);
    v13 = *(uint32_t *)(v25 + 72);
    v21[4] = v10;
    v21[5] = v12;
    v21[6] = (*(const float *)&unk_20C89B8) * v8;
    v21[7] = (*(const float *)&unk_20C89BC) * v9;
    v27 = v11 + 4 * v13;
    v14 = *(uint32_t *)(v25 + 76) >> 8;
    v28 = *(uint32_t *)(a2 + 188) + (*(uint8_t *)(v25 + 92) << 19);
    v15 = *(uint32_t *)(v25 + 84);
    v20 = *(uint32_t *)(a2 + 164) + 2 * v14;
    v16 = *(uint32_t *)(a2 + 200);
    v21[8] = *(float *)(v25 + 48);
    v30 = v16 + 8 * (v15 >> 8);
    v17 = *(uint32_t *)(a2 + 152);
    v31 = *(uint8_t *)(v25 + 76);
    v18 = *(uint32_t *)(v25 + 80) >> 8;
    v21[9] = *(float *)(v25 + 52);
    v21[10] = *(float *)(v25 + 56);
    v26 = v17 + 4 * v18;
    v22 = *(uint32_t *)(v25 + 60);
    LODWORD(v23) = v22;
    *(uint64_t *)((char *)&v23 + 4) = *(uint64_t *)(v25 + 64);
    v29 = v20 - 2 * v31;
    PrimitiveData = hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getPrimitiveData(
                      (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v21,
                      (uint8_t)a3 >> 1);
    hkStringPtr::Construct(self, (const hkStringPtr::Self *)(*(uint32_t *)(a2 + 56) + 4 * BYTE1(PrimitiveData)));
    return self;
  }
  else
  {
    hkStringPtr::Construct(self, nullptr);
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::getCollisionFilterInfo  (binary VA: 0x17b8fe0)
// Original: hkpBvCompressedMeshShape::getCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::getCollisionFilterInfo(hkpBvCompressedMeshShape::Self *self, unsigned int a2)
{
  int result;
  float v3; // xmm7_4
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm7_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  typedef float _g4_t_v17[11];
  typedef int _g4_t_v18;
  typedef g4_int128_t _g4_t_v19;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v18)) > _g4_s1 ? (44u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v19)) > _g4_s2 ? (48u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v21)) > _g4_s3 ? (68u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v22)) > _g4_s4 ? (72u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v23)) > _g4_s5 ? (76u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v24)) > _g4_s6 ? (80u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v25)) > _g4_s7 ? (84u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v26)) > _g4_s8 ? (88u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v27)) > _g4_s9 ? (92u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v28)) > _g4_s10 ? (96u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v29)) > _g4_s11 ? (100u + sizeof(_g4_t_v29)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);

  result = 0;
  if ( *((uint8_t *)self + 29) != 0 )
  {
    v3 = *((float *)self + 28);
    v4 = *((float *)self + 29);
    v5 = *((float *)self + 30);
    v6 = v3 - *((float *)self + 24);
    v7 = v4 - *((float *)self + 25);
    v8 = v5 - *((float *)self + 26);
    v9 = *((float *)self + 31) - *((float *)self + 27);
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v19 = 0;
    v27 = 0;
    v17[0] = *((float *)self + 24);
    v17[1] = *((float *)self + 25);
    v17[2] = *((float *)self + 26);
    v10 = *((float *)self + 27);
    v17[4] = (*(const float *)&g4_fnstatic_01bb1a9ef5)
           * v6;
    v17[3] = v10;
    v17[5] = (*(const float *)&unk_20C89B4) * v7;
    v17[6] = (*(const float *)&unk_20C89B8) * v8;
    v17[7] = (*(const float *)&unk_20C89BC) * v9;
    v11 = *((uint32_t *)self + 35) + 96 * (a2 >> 8);
    v29 = a2 >> 8;
    v28 = a2 >> 8;
    v12 = *((uint32_t *)self + 44);
    v13 = *((uint32_t *)self + 50);
    v21 = v11;
    v23 = v12 + 4 * *(uint32_t *)(v11 + 72);
    v14 = *((uint32_t *)self + 41);
    v24 = *((uint32_t *)self + 47) + (*(uint8_t *)(v11 + 92) << 19);
    v25 = (*(uint32_t *)(v11 + 76) >> 8) + (*(uint32_t *)(v11 + 76) >> 8) + v14;
    v15 = v13 + 8 * (*(uint32_t *)(v11 + 84) >> 8);
    v16 = *((uint32_t *)self + 38);
    v26 = v15;
    v27 = *(uint8_t *)(v11 + 76);
    v22 = v16 + 4 * (*(uint32_t *)(v11 + 80) >> 8);
    v17[8] = *(float *)(v11 + 48);
    v17[9] = *(float *)(v11 + 52);
    v17[10] = *(float *)(v11 + 56);
    v18 = *(uint32_t *)(v11 + 60);
    LODWORD(v19) = v18;
    *(uint64_t *)((char *)&v19 + 4) = *(uint64_t *)(v11 + 64);
    v25 -= 2 * *(uint8_t *)(v11 + 76);
    result = (uint8_t)hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getPrimitiveData(
                                (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v17,
                                (uint8_t)a2 >> 1);
    if ( *((uint32_t *)self + 9) != 0 )
      return *(uint32_t *)(*((uint32_t *)self + 8) + 4 * (uint8_t)result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::getPrimitiveUserData  (binary VA: 0x17b9200)
// Original: hkpBvCompressedMeshShape::getPrimitiveUserData
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::getPrimitiveUserData(hkpBvCompressedMeshShape::Self *self, unsigned int a2)
{
  int result;
  float v3; // xmm7_4
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm7_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  typedef float _g4_t_v17[11];
  typedef int _g4_t_v18;
  typedef g4_int128_t _g4_t_v19;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v18)) > _g4_s1 ? (44u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v19)) > _g4_s2 ? (48u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v21)) > _g4_s3 ? (68u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v22)) > _g4_s4 ? (72u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v23)) > _g4_s5 ? (76u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v24)) > _g4_s6 ? (80u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v25)) > _g4_s7 ? (84u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v26)) > _g4_s8 ? (88u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v27)) > _g4_s9 ? (92u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v28)) > _g4_s10 ? (96u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v29)) > _g4_s11 ? (100u + sizeof(_g4_t_v29)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);

  result = 0;
  if ( *((uint8_t *)self + 30) != 0 )
  {
    v3 = *((float *)self + 28);
    v4 = *((float *)self + 29);
    v5 = *((float *)self + 30);
    v6 = v3 - *((float *)self + 24);
    v7 = v4 - *((float *)self + 25);
    v8 = v5 - *((float *)self + 26);
    v9 = *((float *)self + 31) - *((float *)self + 27);
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v19 = 0;
    v27 = 0;
    v17[0] = *((float *)self + 24);
    v17[1] = *((float *)self + 25);
    v17[2] = *((float *)self + 26);
    v10 = *((float *)self + 27);
    v17[4] = (*(const float *)&g4_fnstatic_01bb1a9ef5)
           * v6;
    v17[3] = v10;
    v17[5] = (*(const float *)&unk_20C89B4) * v7;
    v17[6] = (*(const float *)&unk_20C89B8) * v8;
    v17[7] = (*(const float *)&unk_20C89BC) * v9;
    v11 = *((uint32_t *)self + 35) + 96 * (a2 >> 8);
    v29 = a2 >> 8;
    v28 = a2 >> 8;
    v12 = *((uint32_t *)self + 44);
    v13 = *((uint32_t *)self + 50);
    v21 = v11;
    v23 = v12 + 4 * *(uint32_t *)(v11 + 72);
    v14 = *((uint32_t *)self + 41);
    v24 = *((uint32_t *)self + 47) + (*(uint8_t *)(v11 + 92) << 19);
    v25 = (*(uint32_t *)(v11 + 76) >> 8) + (*(uint32_t *)(v11 + 76) >> 8) + v14;
    v15 = v13 + 8 * (*(uint32_t *)(v11 + 84) >> 8);
    v16 = *((uint32_t *)self + 38);
    v26 = v15;
    v27 = *(uint8_t *)(v11 + 76);
    v22 = v16 + 4 * (*(uint32_t *)(v11 + 80) >> 8);
    v17[8] = *(float *)(v11 + 48);
    v17[9] = *(float *)(v11 + 52);
    v17[10] = *(float *)(v11 + 56);
    v18 = *(uint32_t *)(v11 + 60);
    LODWORD(v19) = v18;
    *(uint64_t *)((char *)&v19 + 4) = *(uint64_t *)(v11 + 64);
    v25 -= 2 * *(uint8_t *)(v11 + 76);
    result = (uint8_t)((uint16_t)hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getPrimitiveData(
                                                   (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v17,
                                                   (uint8_t)a2 >> 1) >> 8);
    if ( *((uint32_t *)self + 12) != 0 )
      return *(uint32_t *)(*((uint32_t *)self + 11) + 4 * result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::castAabbImpl  (binary VA: 0x17bc4d0)
// Original: hkpBvCompressedMeshShape::castAabbImpl
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::castAabbImpl(hkpBvCompressedMeshShape::Self *self, const hkAabb::Self *a2, const hkVector4f::Self *a3, hkpAabbCastCollector::Self *a4)
{
  float v5; // xmm7_4
  float v6; // xmm1_4
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10;
  float v11; // xmm5_4
  float v12; // xmm3_4
  float v13; // xmm7_4
  float v14;
  float v15; // xmm6_4
  float v16;
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  bool v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  char v27; // si
  char v28;
  int v29;
  char v30;
  int v31;
  int v32;
  float v33; // xmm7_4
  int v34;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v36;
  hkLifoAllocator::Self **v37;
  bool v38; // cc
  char *v39;
  int v40;
  hkLifoAllocator::Self *v41;
  signed int v42;
  int result;
  int v44;
  int v45;
  float v46; // xmm5_4
  int v47;
  int v48;
  float v49; // xmm5_4
  int v50;
  int v51;
  float v52; // xmm5_4
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
  typedef void *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef void *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef float _g4_t_v70[24];
  typedef float _g4_t_v71[8];
  typedef g4_int128_t _g4_t_v72;
  typedef g4_int128_t _g4_t_v73;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef hkpAabbCastCollector::Self *_g4_t_v84;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (4u + sizeof(_g4_t_v53)) > _g4_s0 ? (4u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v54)) > _g4_s1 ? (8u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v55)) > _g4_s2 ? (12u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v56)) > _g4_s3 ? (16u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v57)) > _g4_s4 ? (20u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v58)) > _g4_s5 ? (24u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v59)) > _g4_s6 ? (28u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v60)) > _g4_s7 ? (32u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v61)) > _g4_s8 ? (40u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v62)) > _g4_s9 ? (40u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v63)) > _g4_s10 ? (44u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v64)) > _g4_s11 ? (44u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v65)) > _g4_s12 ? (48u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v66)) > _g4_s13 ? (52u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v67)) > _g4_s14 ? (56u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v68)) > _g4_s15 ? (60u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v69)) > _g4_s16 ? (64u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v70)) > _g4_s17 ? (80u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (176u + sizeof(_g4_t_v71)) > _g4_s18 ? (176u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (208u + sizeof(_g4_t_v72)) > _g4_s19 ? (208u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (224u + sizeof(_g4_t_v73)) > _g4_s20 ? (224u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (244u + sizeof(_g4_t_v75)) > _g4_s21 ? (244u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (248u + sizeof(_g4_t_v76)) > _g4_s22 ? (248u + sizeof(_g4_t_v76)) : _g4_s22,
    _g4_s24 = (252u + sizeof(_g4_t_v77)) > _g4_s23 ? (252u + sizeof(_g4_t_v77)) : _g4_s23,
    _g4_s25 = (256u + sizeof(_g4_t_v78)) > _g4_s24 ? (256u + sizeof(_g4_t_v78)) : _g4_s24,
    _g4_s26 = (260u + sizeof(_g4_t_v79)) > _g4_s25 ? (260u + sizeof(_g4_t_v79)) : _g4_s25,
    _g4_s27 = (264u + sizeof(_g4_t_v80)) > _g4_s26 ? (264u + sizeof(_g4_t_v80)) : _g4_s26,
    _g4_s28 = (268u + sizeof(_g4_t_v81)) > _g4_s27 ? (268u + sizeof(_g4_t_v81)) : _g4_s27,
    _g4_s29 = (272u + sizeof(_g4_t_v82)) > _g4_s28 ? (272u + sizeof(_g4_t_v82)) : _g4_s28,
    _g4_s30 = (276u + sizeof(_g4_t_v83)) > _g4_s29 ? (276u + sizeof(_g4_t_v83)) : _g4_s29,
    _g4_s31 = (288u + sizeof(_g4_t_v84)) > _g4_s30 ? (288u + sizeof(_g4_t_v84)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 176u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 208u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 224u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 244u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 248u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 252u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 256u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 260u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 264u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 268u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 272u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 276u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 288u);

  v5 = *((float *)self + 28) - *((float *)self + 24);
  v6 = *((float *)self + 31) - *((float *)self + 27);
  v7 = (*(const float *)&g4_fnstatic_01bb1a9ef5)
     * v5;
  v75 = 0;
  v8 = *((float *)self + 29);
  v76 = 0;
  v9 = *((float *)self + 30);
  v77 = 0;
  v72 = 0;
  v78 = 0;
  v73 = 0;
  v79 = 0;
  v10 = *((float *)self + 24);
  v11 = v8 - *((float *)self + 25);
  v12 = v9 - *((float *)self + 26);
  v80 = 0;
  v81 = 0;
  v82 = -1;
  v83 = -1;
  v71[0] = v10;
  v13 = *((float *)a2 + 4);
  v14 = *((float *)self + 25);
  v71[4] = v7;
  v15 = *(float *)a2;
  v71[1] = v14;
  v16 = *((float *)self + 26);
  v71[3] = *((float *)self + 27);
  v71[7] = (*(const float *)&unk_20C89BC) * v6;
  v84 = a4;
  v63 = *((float *)a2 + 7);
  LODWORD(v70[0]) = (uint32_t)(uintptr_t)(v71);
  v61 = *((float *)a2 + 3);
  v71[2] = v16;
  v17 = (*(const float *)&unk_20C89B4) * v11;
  v18 = *((float *)a2 + 5);
  v19 = (*(const float *)&unk_20C89B8) * v12;
  v71[5] = v17;
  v60 = (float)(v13 - v15) * 0.5;
  v20 = *((float *)a2 + 1);
  v21 = *((float *)a2 + 6);
  v71[6] = v19;
  v22 = *((float *)a2 + 2);
  v23 = false;
  v56 = (float)(v13 + v15) * 0.5;
  v59 = (float)(v18 - v20) * 0.5;
  v55 = (float)(v18 + v20) * 0.5;
  v58 = (float)(v21 - v22) * 0.5;
  v57 = (float)(v63 - v61) * 0.5;
  v54 = (float)(v21 + v22) * 0.5;
g4_m128_raw(v24) = *(unsigned int *)a3;
  *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)g4_m128_ptr<int32_t>(v24) - v56;
g4_m128_raw(v25) = *((unsigned int *)a3 + 1);
  *(float *)g4_m128_ptr<int32_t>(v25) = *(float *)g4_m128_ptr<int32_t>(v25) - v55;
g4_m128_raw(v26) = *((unsigned int *)a3 + 2);
  *(float *)g4_m128_ptr<int32_t>(v26) = *(float *)g4_m128_ptr<int32_t>(v26) - v54;
  v53 = 0.5 * (float)(v63 + v61);
  if ( *(float *)g4_m128_ptr<int32_t>(v24) == 0.0 )
    v23 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v24));
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v25)) || (v27 = 2, *(float *)g4_m128_ptr<int32_t>(v25) != 0.0) )
    v27 = 0;
  v28 = v27 | v23;
  if ( *(float *)g4_m128_ptr<int32_t>(v26) == 0.0 )
  {
    v28 |= 4u;
    if ( (v28 & 1) == 0 )
    {
LABEL_7:
      v29 = _mm_cvtsi128_si32(v24);
      v30 = (*(float *)g4_m128_ptr<int32_t>(v24) >= 0.0) | 8;
      goto LABEL_8;
    }
  }
  else if ( (v28 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v30 = 9;
  v29 = 0;
g4_m128_raw(v24) = 0;
LABEL_8:
  v31 = _mm_cvtsi128_si32(v25);
  if ( (v28 & 2) != 0 )
  {
    v31 = 0;
g4_m128_raw(v25) = 0;
  }
  if ( (v28 & 4) != 0 )
  {
    v32 = 0;
    v33 = 3.40282e38f;
g4_m128_raw(v26) = 0;
    if ( v29 >= 0 )
      goto LABEL_12;
  }
  else
  {
    v32 = _mm_cvtsi128_si32(v26);
    v33 = 3.40282e38f;
    if ( v29 >= 0 )
      goto LABEL_12;
  }
  v33 = -3.40282e38f;
LABEL_12:
  v64 = 3.40282e38f;
  if ( v31 < 0 )
    v64 = -3.40282e38f;
  v62 = 3.40282e38f;
  if ( v32 < 0 )
    v62 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v24) != 0.0 )
  {
    v50 = _mm_cvtsi128_si32(v24);
    v51 = (2130706432 - v50) & ((v50 ^ (v50 + 2139095040)) >> 31);
    v52 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v24)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v24) * *(float *)&v51)) * *(float *)&v51)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v24) * *(float *)&v51)) * *(float *)&v51);
    v33 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v24) * v52)) * v52;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v25) != 0.0 )
  {
    v47 = _mm_cvtsi128_si32(v25);
    v48 = (2130706432 - v47) & ((v47 ^ (v47 + 2139095040)) >> 31);
    v49 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v25)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)&v48)) * *(float *)&v48)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)&v48)) * *(float *)&v48);
    v64 = v49 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v25) * v49));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v26) != 0.0 )
  {
    v44 = _mm_cvtsi128_si32(v26);
    v45 = (2130706432 - v44) & ((v44 ^ (v44 + 2139095040)) >> 31);
    v46 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v26)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)&v45)) * *(float *)&v45)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)&v45)) * *(float *)&v45);
    v62 = v46 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * v46));
  }
  v70[11] = 1.0;
  v65 = nullptr;
  v66 = 0;
  v67 = 0x80000000;
  v69 = 64;
  v70[10] = *(float *)g4_m128_ptr<int32_t>(v26);
  LOBYTE(v34) = *(float *)g4_m128_ptr<int32_t>(v25) >= 0.0 ? 2 : 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v26) >= 0.0 )
    v34 = *(float *)g4_m128_ptr<int32_t>(v25) < 0.0 ? 4 : 6;
  v70[8] = *(float *)g4_m128_ptr<int32_t>(v24);
  v70[9] = *(float *)g4_m128_ptr<int32_t>(v25);
  v70[13] = v64;
  LODWORD(v70[15]) = ((uint8_t)v30 | (uint8_t)v34) & 7 | 0x3F000000;
  v70[14] = v62;
  v70[4] = v56;
  v70[5] = v55;
  v70[6] = v54;
  v70[7] = v53;
  v70[16] = v60;
  v70[12] = v33;
  v70[17] = v59;
  v70[18] = v58;
  v70[19] = v57;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v36 = *address;
  v37 = address;
  v38 = *((uint32_t *)*address + 2) <= 3071;
  v39 = *((char **)*address + 3);
  if ( v38 || (unsigned int)(uintptr_t)(v39 + 3072) > *((uint32_t *)v36 + 4) )
    v39 = (char *)hkLifoAllocator::allocateFromNewSlab(v36, 3072);
  else
    *((uint32_t *)v36 + 3) = (uint32_t)(uintptr_t)(v39 + 3072);
  v65 = v39;
  v68 = v39;
  v67 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpBvCompressedMeshShapeTree::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage5::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbCastWrapper<hkpBvCompressedMeshShape_Internals::AabbCastQuery>>(
    (uint8_t **)self + 20,
    &v65,
    v70);
  v40 = 0;
  if ( v65 != v68 )
    v40 = v66;
  v41 = *v37;
  v66 = v40;
  v42 = (48 * v69 + 127) & 0xFFFFFF80;
  if ( v42 > *((uint32_t *)v41 + 2) || *((void **)v41 + 3) != (char *)v68 + v42 || v68 == *((void **)v41 + 5) )
    hkLifoAllocator::slowBlockFree(v41, (char *)v68, (48 * v69 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v41 + 3) = (uint32_t)(uintptr_t)(v68);
  result = v67;
  v66 = 0;
  if ( v67 >= 0 )
    return (*(int (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v65,
             48 * v67);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::queryAabb  (binary VA: 0x17bd9f0)
// Original: hkpBvCompressedMeshShape::queryAabb
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::queryAabb(hkpBvCompressedMeshShape::Self *self, const hkAabb::Self *a2, hkArray<unsigned int, hkContainerHeapAllocator::Self> *a3)
{
  float v3; // xmm7_4
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7;
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12;
  float v13;
  float v14;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v16;
  hkLifoAllocator::Self **v17;
  bool v18; // cc
  char *v19;
  int v20;
  hkLifoAllocator::Self *v21;
  signed int v22;
  int result;
  typedef void *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef void *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29[12];
  typedef float _g4_t_v30[8];
  typedef g4_int128_t _g4_t_v31;
  typedef g4_int128_t _g4_t_v32;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef hkArray<unsigned int, hkContainerHeapAllocator::Self> *_g4_t_v43;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v29)) > _g4_s5 ? (32u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v30)) > _g4_s6 ? (80u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v31)) > _g4_s7 ? (112u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v32)) > _g4_s8 ? (128u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (148u + sizeof(_g4_t_v34)) > _g4_s9 ? (148u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (152u + sizeof(_g4_t_v35)) > _g4_s10 ? (152u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (156u + sizeof(_g4_t_v36)) > _g4_s11 ? (156u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v37)) > _g4_s12 ? (160u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (164u + sizeof(_g4_t_v38)) > _g4_s13 ? (164u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (168u + sizeof(_g4_t_v39)) > _g4_s14 ? (168u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (172u + sizeof(_g4_t_v40)) > _g4_s15 ? (172u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (176u + sizeof(_g4_t_v41)) > _g4_s16 ? (176u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (180u + sizeof(_g4_t_v42)) > _g4_s17 ? (180u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (192u + sizeof(_g4_t_v43)) > _g4_s18 ? (192u + sizeof(_g4_t_v43)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 128u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 148u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 152u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 156u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 164u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 168u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 172u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 176u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 180u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 192u);

  v34 = 0;
  v35 = 0;
  v3 = *((float *)self + 28);
  v4 = *((float *)self + 29);
  v36 = 0;
  v5 = *((float *)self + 30);
  v37 = 0;
  v6 = *((float *)self + 31);
  v38 = 0;
  v31 = 0;
  v39 = 0;
  v32 = 0;
  v40 = 0;
  v7 = *((float *)self + 24);
  v8 = v4 - *((float *)self + 25);
  v9 = v5 - *((float *)self + 26);
  v10 = v6 - *((float *)self + 27);
  v41 = -1;
  v42 = -1;
  v11 = (*(const float *)&g4_fnstatic_01bb1a9ef5)
      * (float)(v3 - v7);
  v30[0] = v7;
  v12 = *((float *)self + 25);
  v24 = nullptr;
  v30[1] = v12;
  v13 = *((float *)self + 27);
  v30[2] = *((float *)self + 26);
  v30[3] = v13;
  v43 = a3;
  LODWORD(v29[0]) = (uint32_t)(uintptr_t)(v30);
  v29[4] = *(float *)a2;
  v29[5] = *((float *)a2 + 1);
  v29[6] = *((float *)a2 + 2);
  v29[7] = *((float *)a2 + 3);
  v29[8] = *((float *)a2 + 4);
  v29[9] = *((float *)a2 + 5);
  v14 = *((float *)a2 + 6);
  v25 = 0;
  v29[10] = v14;
  v29[11] = *((float *)a2 + 7);
  v30[4] = v11;
  v26 = 0x80000000;
  v30[5] = (*(const float *)&unk_20C89B4) * v8;
  v28 = 64;
  v30[6] = (*(const float *)&unk_20C89B8) * v9;
  v30[7] = (*(const float *)&unk_20C89BC) * v10;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v16 = *address;
  v17 = address;
  v18 = *((uint32_t *)*address + 2) <= 3071;
  v19 = *((char **)*address + 3);
  if ( v18 || (unsigned int)(uintptr_t)(v19 + 3072) > *((uint32_t *)v16 + 4) )
    v19 = (char *)hkLifoAllocator::allocateFromNewSlab(v16, 3072);
  else
    *((uint32_t *)v16 + 3) = (uint32_t)(uintptr_t)(v19 + 3072);
  v24 = v19;
  v27 = v19;
  v26 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpBvCompressedMeshShapeTree::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage5::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<hkpBvCompressedMeshShape_Internals::AabbOverlaps>>(
    (float *)self + 20,
    (hkMemoryAllocator::Self *)&v24,
    v29);
  v20 = 0;
  if ( v24 != v27 )
    v20 = v25;
  v21 = *v17;
  v25 = v20;
  v22 = (48 * v28 + 127) & 0xFFFFFF80;
  if ( v22 > *((uint32_t *)v21 + 2) || *((void **)v21 + 3) != (char *)v27 + v22 || v27 == *((void **)v21 + 5) )
    hkLifoAllocator::slowBlockFree(v21, (char *)v27, (48 * v28 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v21 + 3) = (uint32_t)(uintptr_t)(v27);
  result = v26;
  v25 = 0;
  if ( v26 >= 0 )
    return (*(int (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v24,
             48 * v26);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::queryAabbImpl  (binary VA: 0x17bea10)
// Original: hkpBvCompressedMeshShape::queryAabbImpl
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::queryAabbImpl(hkpBvCompressedMeshShape::Self *self, const hkAabb::Self *a2, unsigned int *a3, int a4)
{
  float v4; // xmm7_4
  float v5; // xmm5_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8;
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm6_4
  float v13;
  float v14;
  float v15;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v17;
  hkLifoAllocator::Self **v18;
  bool v19; // cc
  char *v20;
  int v21;
  hkLifoAllocator::Self *v22;
  signed int v23;
  typedef void *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef void *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef float _g4_t_v30[12];
  typedef float _g4_t_v31[8];
  typedef g4_int128_t _g4_t_v32;
  typedef g4_int128_t _g4_t_v33;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef unsigned int *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v26)) > _g4_s1 ? (4u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v27)) > _g4_s2 ? (8u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v28)) > _g4_s3 ? (12u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v29)) > _g4_s4 ? (16u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v30)) > _g4_s5 ? (32u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v31)) > _g4_s6 ? (80u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v32)) > _g4_s7 ? (112u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v33)) > _g4_s8 ? (128u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (148u + sizeof(_g4_t_v35)) > _g4_s9 ? (148u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (152u + sizeof(_g4_t_v36)) > _g4_s10 ? (152u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (156u + sizeof(_g4_t_v37)) > _g4_s11 ? (156u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v38)) > _g4_s12 ? (160u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (164u + sizeof(_g4_t_v39)) > _g4_s13 ? (164u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (168u + sizeof(_g4_t_v40)) > _g4_s14 ? (168u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (172u + sizeof(_g4_t_v41)) > _g4_s15 ? (172u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (176u + sizeof(_g4_t_v42)) > _g4_s16 ? (176u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (180u + sizeof(_g4_t_v43)) > _g4_s17 ? (180u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (192u + sizeof(_g4_t_v44)) > _g4_s18 ? (192u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (196u + sizeof(_g4_t_v45)) > _g4_s19 ? (196u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (200u + sizeof(_g4_t_v46)) > _g4_s20 ? (200u + sizeof(_g4_t_v46)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 148u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 152u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 156u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 164u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 168u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 172u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 176u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 180u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 192u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 196u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 200u);

  v4 = *((float *)self + 28);
  v35 = 0;
  v5 = *((float *)self + 29);
  v36 = 0;
  v6 = *((float *)self + 30);
  v37 = 0;
  v7 = *((float *)self + 31);
  v38 = 0;
  v32 = 0;
  v39 = 0;
  v33 = 0;
  v40 = 0;
  v8 = *((float *)self + 24);
  v9 = v5 - *((float *)self + 25);
  v10 = v6 - *((float *)self + 26);
  v11 = v7 - *((float *)self + 27);
  v41 = 0;
  v42 = -1;
  v12 = (*(const float *)&g4_fnstatic_01bb1a9ef5)
      * (float)(v4 - v8);
  v43 = -1;
  v31[0] = v8;
  v13 = *((float *)self + 25);
  v46 = 0;
  v31[1] = v13;
  v14 = *((float *)self + 27);
  v31[2] = *((float *)self + 26);
  v31[3] = v14;
  v44 = a3;
  v45 = a4;
  LODWORD(v30[0]) = (uint32_t)(uintptr_t)(v31);
  v30[4] = *(float *)a2;
  v30[5] = *((float *)a2 + 1);
  v30[6] = *((float *)a2 + 2);
  v30[7] = *((float *)a2 + 3);
  v30[8] = *((float *)a2 + 4);
  v30[9] = *((float *)a2 + 5);
  v30[10] = *((float *)a2 + 6);
  v15 = *((float *)a2 + 7);
  v31[4] = v12;
  v30[11] = v15;
  v31[5] = (*(const float *)&unk_20C89B4) * v9;
  v25 = nullptr;
  v31[6] = (*(const float *)&unk_20C89B8) * v10;
  v31[7] = (*(const float *)&unk_20C89BC) * v11;
  v26 = 0;
  v27 = 0x80000000;
  v29 = 64;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v17 = *address;
  v18 = address;
  v19 = *((uint32_t *)*address + 2) <= 3071;
  v20 = *((char **)*address + 3);
  if ( v19 || (unsigned int)(uintptr_t)(v20 + 3072) > *((uint32_t *)v17 + 4) )
    v20 = (char *)hkLifoAllocator::allocateFromNewSlab(v17, 3072);
  else
    *((uint32_t *)v17 + 3) = (uint32_t)(uintptr_t)(v20 + 3072);
  v25 = v20;
  v28 = v20;
  v27 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpBvCompressedMeshShapeTree::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage5::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<hkpBvCompressedMeshShape_Internals::AabbOverlapsWithMaxHits>>(
    (float *)self + 20,
    (hkMemoryAllocator::Self *)&v25,
    v30);
  v21 = 0;
  if ( v25 != v28 )
    v21 = v26;
  v22 = *v18;
  v26 = v21;
  v23 = (48 * v29 + 127) & 0xFFFFFF80;
  if ( v23 > *((uint32_t *)v22 + 2) || *((void **)v22 + 3) != (char *)v28 + v23 || v28 == *((void **)v22 + 5) )
    hkLifoAllocator::slowBlockFree(v22, (char *)v28, (48 * v29 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v22 + 3) = (uint32_t)(uintptr_t)(v28);
  v26 = 0;
  if ( v27 >= 0 )
    (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v25,
      48 * v27);
  return v46;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape_Internals::RayCastQuery::processLeaf  (binary VA: 0x17bfea0)
// Original: hkpBvCompressedMeshShape_Internals::RayCastQuery::processLeaf
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape_Internals::RayCastQuery::processLeaf(int a1, hkAabb::Self *a2, float *a3)
{
  int v3;
  int v4;
  char *v5;
  int v6;
  int v7;
  char v8;
  int v9;
  void (***v10)(char *);
  char *v11;
  int result;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void (***v18)(char *);
  float v19; // xmm6_4
  __m128i v20;
  float v21; // xmm5_4
  int v22;
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm6_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  int v31;
  float *v32;
  float v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  void (***v38)(uint32_t, uint32_t *, int *);
  int v39; // xmm0_4
  float *v40;
  int CustomPrimitiveVertices;
  float *v42;
  int v43;
  int v44;
  int v45;
  float *v46;
  int v47;
  int v48;
  int v49;
  float v50; // xmm2_4
  int v51;
  float v52; // xmm6_4
  int v53; // xmm0_4
  __m128i v54;
  float v55; // xmm3_4
  __m128i v56;
  float v57; // xmm5_4
  int v58;
  float v59; // xmm2_4
  float v60; // xmm1_4
  float v61; // xmm4_4
  float v62; // xmm3_4
  float v63; // xmm1_4
  float v64; // xmm6_4
  float v65; // xmm3_4
  float v66; // xmm6_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm5_4
  float v70; // xmm4_4
  float v71; // xmm4_4
  float v72; // xmm0_4
  float v73; // xmm1_4
  float v74; // xmm0_4
  float v75; // xmm1_4
  float v76; // xmm0_4
  float v77; // xmm5_4
  float v78; // xmm5_4
  float v79; // xmm3_4
  float v80; // xmm2_4
  float v81; // xmm1_4
  float v82; // xmm3_4
  typedef float *_g4_t_v83;
  typedef float _g4_t_v84;
  typedef hkAabb::Self *_g4_t_v85;
  typedef float _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int16_t _g4_t_v90;
  typedef int _g4_t_v91;
  typedef float _g4_t_v92;
  typedef int _g4_t_v93;
  typedef float *_g4_t_v94;
  typedef char *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef char _g4_t_v103;
  typedef int _g4_t_v104[4];
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef uint32_t _g4_t_v109[4];
  typedef int _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef char _g4_t_v116[16];
  typedef char _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int *_g4_t_v146;
  enum : size_t {
    _g4_s0 = 864u,
    _g4_s1 = (4u + sizeof(_g4_t_v83)) > _g4_s0 ? (4u + sizeof(_g4_t_v83)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v84)) > _g4_s1 ? (56u + sizeof(_g4_t_v84)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v85)) > _g4_s2 ? (60u + sizeof(_g4_t_v85)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v86)) > _g4_s3 ? (64u + sizeof(_g4_t_v86)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v87)) > _g4_s4 ? (68u + sizeof(_g4_t_v87)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v88)) > _g4_s5 ? (72u + sizeof(_g4_t_v88)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v89)) > _g4_s6 ? (76u + sizeof(_g4_t_v89)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v90)) > _g4_s7 ? (76u + sizeof(_g4_t_v90)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v91)) > _g4_s8 ? (76u + sizeof(_g4_t_v91)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v92)) > _g4_s9 ? (76u + sizeof(_g4_t_v92)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v93)) > _g4_s10 ? (80u + sizeof(_g4_t_v93)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v94)) > _g4_s11 ? (88u + sizeof(_g4_t_v94)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v95)) > _g4_s12 ? (92u + sizeof(_g4_t_v95)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v96)) > _g4_s13 ? (96u + sizeof(_g4_t_v96)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v97)) > _g4_s14 ? (100u + sizeof(_g4_t_v97)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v98)) > _g4_s15 ? (100u + sizeof(_g4_t_v98)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v99)) > _g4_s16 ? (100u + sizeof(_g4_t_v99)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v100)) > _g4_s17 ? (104u + sizeof(_g4_t_v100)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v101)) > _g4_s18 ? (104u + sizeof(_g4_t_v101)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v102)) > _g4_s19 ? (108u + sizeof(_g4_t_v102)) : _g4_s19,
    _g4_s21 = (115u + sizeof(_g4_t_v103)) > _g4_s20 ? (115u + sizeof(_g4_t_v103)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v104)) > _g4_s21 ? (116u + sizeof(_g4_t_v104)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v105)) > _g4_s22 ? (132u + sizeof(_g4_t_v105)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v106)) > _g4_s23 ? (136u + sizeof(_g4_t_v106)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v107)) > _g4_s24 ? (140u + sizeof(_g4_t_v107)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v108)) > _g4_s25 ? (144u + sizeof(_g4_t_v108)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v109)) > _g4_s26 ? (148u + sizeof(_g4_t_v109)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v110)) > _g4_s27 ? (164u + sizeof(_g4_t_v110)) : _g4_s27,
    _g4_s29 = (168u + sizeof(_g4_t_v111)) > _g4_s28 ? (168u + sizeof(_g4_t_v111)) : _g4_s28,
    _g4_s30 = (172u + sizeof(_g4_t_v112)) > _g4_s29 ? (172u + sizeof(_g4_t_v112)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v113)) > _g4_s30 ? (176u + sizeof(_g4_t_v113)) : _g4_s30,
    _g4_s32 = (180u + sizeof(_g4_t_v114)) > _g4_s31 ? (180u + sizeof(_g4_t_v114)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v115)) > _g4_s32 ? (184u + sizeof(_g4_t_v115)) : _g4_s32,
    _g4_s34 = (196u + sizeof(_g4_t_v116)) > _g4_s33 ? (196u + sizeof(_g4_t_v116)) : _g4_s33,
    _g4_s35 = (212u + sizeof(_g4_t_v117)) > _g4_s34 ? (212u + sizeof(_g4_t_v117)) : _g4_s34,
    _g4_s36 = (260u + sizeof(_g4_t_v118)) > _g4_s35 ? (260u + sizeof(_g4_t_v118)) : _g4_s35,
    _g4_s37 = (264u + sizeof(_g4_t_v119)) > _g4_s36 ? (264u + sizeof(_g4_t_v119)) : _g4_s36,
    _g4_s38 = (268u + sizeof(_g4_t_v120)) > _g4_s37 ? (268u + sizeof(_g4_t_v120)) : _g4_s37,
    _g4_s39 = (272u + sizeof(_g4_t_v121)) > _g4_s38 ? (272u + sizeof(_g4_t_v121)) : _g4_s38,
    _g4_s40 = (276u + sizeof(_g4_t_v122)) > _g4_s39 ? (276u + sizeof(_g4_t_v122)) : _g4_s39,
    _g4_s41 = (280u + sizeof(_g4_t_v123)) > _g4_s40 ? (280u + sizeof(_g4_t_v123)) : _g4_s40,
    _g4_s42 = (284u + sizeof(_g4_t_v124)) > _g4_s41 ? (284u + sizeof(_g4_t_v124)) : _g4_s41,
    _g4_s43 = (288u + sizeof(_g4_t_v125)) > _g4_s42 ? (288u + sizeof(_g4_t_v125)) : _g4_s42,
    _g4_s44 = (292u + sizeof(_g4_t_v126)) > _g4_s43 ? (292u + sizeof(_g4_t_v126)) : _g4_s43,
    _g4_s45 = (296u + sizeof(_g4_t_v127)) > _g4_s44 ? (296u + sizeof(_g4_t_v127)) : _g4_s44,
    _g4_s46 = (300u + sizeof(_g4_t_v128)) > _g4_s45 ? (300u + sizeof(_g4_t_v128)) : _g4_s45,
    _g4_s47 = (304u + sizeof(_g4_t_v129)) > _g4_s46 ? (304u + sizeof(_g4_t_v129)) : _g4_s46,
    _g4_s48 = (308u + sizeof(_g4_t_v130)) > _g4_s47 ? (308u + sizeof(_g4_t_v130)) : _g4_s47,
    _g4_s49 = (312u + sizeof(_g4_t_v131)) > _g4_s48 ? (312u + sizeof(_g4_t_v131)) : _g4_s48,
    _g4_s50 = (316u + sizeof(_g4_t_v132)) > _g4_s49 ? (316u + sizeof(_g4_t_v132)) : _g4_s49,
    _g4_s51 = (320u + sizeof(_g4_t_v133)) > _g4_s50 ? (320u + sizeof(_g4_t_v133)) : _g4_s50,
    _g4_s52 = (324u + sizeof(_g4_t_v134)) > _g4_s51 ? (324u + sizeof(_g4_t_v134)) : _g4_s51,
    _g4_s53 = (328u + sizeof(_g4_t_v135)) > _g4_s52 ? (328u + sizeof(_g4_t_v135)) : _g4_s52,
    _g4_s54 = (332u + sizeof(_g4_t_v136)) > _g4_s53 ? (332u + sizeof(_g4_t_v136)) : _g4_s53,
    _g4_s55 = (336u + sizeof(_g4_t_v137)) > _g4_s54 ? (336u + sizeof(_g4_t_v137)) : _g4_s54,
    _g4_s56 = (340u + sizeof(_g4_t_v138)) > _g4_s55 ? (340u + sizeof(_g4_t_v138)) : _g4_s55,
    _g4_s57 = (344u + sizeof(_g4_t_v139)) > _g4_s56 ? (344u + sizeof(_g4_t_v139)) : _g4_s56,
    _g4_s58 = (348u + sizeof(_g4_t_v140)) > _g4_s57 ? (348u + sizeof(_g4_t_v140)) : _g4_s57,
    _g4_s59 = (352u + sizeof(_g4_t_v141)) > _g4_s58 ? (352u + sizeof(_g4_t_v141)) : _g4_s58,
    _g4_s60 = (356u + sizeof(_g4_t_v142)) > _g4_s59 ? (356u + sizeof(_g4_t_v142)) : _g4_s59,
    _g4_s61 = (360u + sizeof(_g4_t_v143)) > _g4_s60 ? (360u + sizeof(_g4_t_v143)) : _g4_s60,
    _g4_s62 = (364u + sizeof(_g4_t_v144)) > _g4_s61 ? (364u + sizeof(_g4_t_v144)) : _g4_s61,
    _g4_s63 = (368u + sizeof(_g4_t_v145)) > _g4_s62 ? (368u + sizeof(_g4_t_v145)) : _g4_s62,
    _g4_s64 = (780u + sizeof(_g4_t_v146)) > _g4_s63 ? (780u + sizeof(_g4_t_v146)) : _g4_s63
  };
  alignas(16) uint8_t _g4_sf[_g4_s64];
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 4u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 56u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 60u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 64u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 68u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 72u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 76u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 76u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 76u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 76u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 80u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 88u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 92u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 96u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 100u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 100u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 100u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 104u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 104u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 108u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 115u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 116u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 132u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 136u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 140u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 144u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 148u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 164u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 168u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 172u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 176u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 180u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 184u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 196u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 212u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 260u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 264u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 268u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 272u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 276u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 280u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 284u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 288u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 292u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 296u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 300u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 304u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 308u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 312u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 316u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 320u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 324u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 328u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 332u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 336u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 340u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 344u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 348u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 352u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 356u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 360u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 364u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 368u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 780u);

  v146 = &a1;
  v85 = a2;
  v3 = a1;
  v105 = 0.0;
  v106 = 0.0;
  v107 = 0.0;
  v108 = 0.0;
  v94 = a3;
  v4 = *(uint32_t *)(a1 + 72);
  v87 = (int)*(uint8_t *)(*((uint32_t *)a2 + 9) + 3) >> 1;
  v5 = (char *)(v4 + 4 * v87);
  v6 = (uint8_t)v5[3];
  v100 = (uint8_t)v5[2];
  v7 = (uint8_t)v5[1];
  v8 = *v5;
  if ( v6 == v100 )
  {
    v9 = 2 * (v6 == v7) + 1;
  }
  else if ( v8 != -34 || v7 != 173 || v100 != 222 || (v9 = 0, v6 != 173) )
  {
    v9 = 2;
  }
  v101 = 1;
  v96 = -1;
  v89 = 0;
  v88 = 2 * v87;
  v93 = (hkcdStaticMeshTreeBase::Primitive::g_typeToNumTriangles[v9] == 2) + 1;
  v95 = &v117;
  while ( 1 )
  {
    v13 = (uint8_t *)(4 * v87 + v4);
    v104[0] = (int)v94[7];
    v14 = v13[2];
    v15 = v13[3];
    v16 = v13[1];
    v17 = *v13;
    if ( v15 == v14 )
    {
      if ( v15 == v16 )
      {
        v96 = v88 | (*(uint32_t *)(v3 + 96) << 8);
        v18 = *(void (****)(char *))(*(uint32_t *)(v3 + 116) + 36);
        if ( v18 != nullptr )
        {
          v83 = (float *)(v88 | (*(uint32_t *)(v3 + 96) << 8));
          (**v18)(&v103);
          if ( v103 == 0 )
            goto LABEL_10;
          v17 = *(uint8_t *)(*(uint32_t *)(v3 + 72) + 4 * v87);
        }
        switch ( *(uint16_t *)(*(uint32_t *)(v3 + 84) + 2 * v17) & 0xF )
        {
          case 0:
          case 1:
            v90 = *(uint16_t *)(*(uint32_t *)(v3 + 84) + 2 * v17) & 0xF;
            v40 = (float *)((char *)&hkpBvCompressedMeshShape::g_vertexBufferPool
                          + 4080 * *(uint32_t *)_emutls_get_address(&g4_emutls_v_hkThreadNumber));
            CustomPrimitiveVertices = hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getCustomPrimitiveVertices(
                                        (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v3,
                                        v87,
                                        v85,
                                        (hkVector4f::Self *)v40,
                                        255);
            v98 = CustomPrimitiveVertices;
            if ( v90 != 0 )
            {
              v91 = CustomPrimitiveVertices & 3;
              if ( CustomPrimitiveVertices <= 0 )
              {
LABEL_40:
                if ( v91 != 0 )
                {
                  v45 = v98;
                  v46 = &v40[4 * v98 + 1073741820];
                  do
                  {
                    ++v45;
                    v46[4] = *v46;
                    v46[5] = v46[1];
                    v46[6] = v46[2];
                    v47 = *((uint32_t *)v46 + 3);
                    v46 += 4;
                    *((uint32_t *)v46 + 3) = v47;
                  }
                  while ( (v45 & 3) != 0 );
                }
                v48 = *(uint32_t *)(v3 + 84);
                v49 = *(uint8_t *)(*(uint32_t *)(v3 + 72) + 4 * v87);
                if ( (*(uint8_t *)(v48 + 2 * v49) & 0xC0) != 0 )
                  LODWORD(v50) = *(int16_t *)(v48 + 2 * v49 + 4) << 16;
                else
                  v50 = *(float *)(*(uint32_t *)(v3 + 112) + 24);
                v144 = 0;
                v145 = 0;
                v138 = 0;
                v139 = 0;
                v126 = 1065353216;
                v142 = v50 + 0.0;
                v127 = 0;
                v140 = 0;
                v128 = 0;
                v129 = 0;
                v130 = 0;
                v131 = 1065353216;
                v132 = 0;
                v143 = (float)((float)(v50 + 0.0) + 0.001f) * (float)((float)(v50 + 0.0) + 0.001f);
                v133 = 0;
                v134 = 0;
                v135 = 0;
                v136 = 1065353216;
                v137 = 0;
                v141 = 0;
                v114 = *((uint32_t *)v94 + 7);
                v118 = *v94;
                v119 = v94[1];
                v120 = v94[2];
                v121 = v94[3];
                v122 = v94[4];
                v123 = v94[5];
                v124 = v94[6];
                v125 = v94[7];
                v89 = (uint8_t)hkcdGsk::rayCast(v40, v98, &v118, &v110);
                v104[0] = v114;
                v105 = *(float *)&v110;
                v106 = v111;
                v107 = v112;
                v108 = v113;
LABEL_22:
                v97 = v101;
                v11 = v95 + 16;
                goto LABEL_23;
              }
            }
            else
            {
              v65 = *v40;
              v66 = v40[9];
              v92 = v40[14] - v40[2];
              v99 = v40[12] - *v40;
              v84 = v40[15] - v40[3];
              v67 = (float)(v40[8] - *v40) + v40[4];
              v68 = v66 - v40[1];
              v86 = v40[13] - v40[1];
              v69 = v40[10];
              v70 = v40[5];
              v40[20] = v99 + v40[8];
              v71 = v70 + v68;
              v72 = v40[11];
              v40[16] = v67;
              v73 = v69 - v40[2];
              v74 = v72 - v40[3];
              v40[17] = v71;
              v40[21] = v66 + v86;
              v40[22] = v69 + v92;
              v75 = v73 + v40[6];
              v76 = v74 + v40[7];
              v77 = v40[11] + v84;
              v40[18] = v75;
              v40[19] = v76;
              v40[23] = v77;
              v78 = v40[4] - v65;
              v79 = v40[12];
              v80 = v67 + v99;
              v81 = v75 + v92;
              v40[31] = v76 + v84;
              v91 = 0;
              v98 = 8;
              v40[28] = v80;
              v40[30] = v81;
              v40[24] = v79 + v78;
              v82 = v40[5] - v40[1];
              v40[29] = v86 + v71;
              v40[25] = v82 + v40[13];
              v40[26] = (float)(v40[6] - v40[2]) + v40[14];
              v40[27] = (float)(v40[7] - v40[3]) + v40[15];
            }
            v42 = v40 + 3;
            v43 = 0;
            do
            {
              v44 = v43++;
              v42 += 4;
              *((uint32_t *)v42 - 4) = v44 | 0x3F000000;
            }
            while ( v98 > v43 );
            goto LABEL_40;
          case 2:
            hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getCustomPrimitiveVertices(
              (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v3,
              v87,
              v85,
              (hkVector4f::Self *)&v118,
              1);
            LODWORD(v121) = *(int16_t *)(*(uint32_t *)(v3 + 84)
                                       + 2 * *(uint8_t *)(*(uint32_t *)(v3 + 72) + 4 * v87)
                                       + 4) << 16;
            v83 = &v105;
            hkcdRayCastSphere(&v102);
            v89 = v102;
            goto LABEL_22;
          case 3:
            hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getCustomPrimitiveVertices(
              (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v3,
              v87,
              v85,
              (hkVector4f::Self *)&v118,
              2);
            v109[0] = *(int16_t *)(*(uint32_t *)(v3 + 84) + 2 * *(uint8_t *)(*(uint32_t *)(v3 + 72) + 4 * v87) + 4) << 16;
            v83 = (float *)v109;
            hkcdRayCastCapsule((char)(uintptr_t)(&v102));
            v89 = v102;
            goto LABEL_22;
          case 4:
            hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getCustomPrimitiveVertices(
              (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v3,
              v87,
              v85,
              (hkVector4f::Self *)&v118,
              2);
g4_m128_raw(v54) = LODWORD(v122);
            v51 = *(uint8_t *)(*(uint32_t *)(v3 + 72) + 4 * v87);
            v52 = 0.0;
            *(float *)&v53 = COERCE_FLOAT(*(int16_t *)(*(uint32_t *)(v3 + 84) + 2 * (v51 + 2)) << 16)
                           + COERCE_FLOAT(*(int16_t *)(*(uint32_t *)(v3 + 84) + 2 * (v51 + 2) + 2) << 16);
            *(float *)g4_m128_ptr<int32_t>(v54) = v122 - v118;
            v55 = v123 - v119;
            v56 = v54;
            v110 = v53;
            *(float *)g4_m128_ptr<int32_t>(v56) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v54) * *(float *)g4_m128_ptr<int32_t>(v54))
                                            + (float)(v55 * v55))
                                    + (float)((float)(v124 - v120) * (float)(v124 - v120));
            if ( *(float *)g4_m128_ptr<int32_t>(v56) > 0.0 )
            {
              v57 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v56);
              v58 = ((_mm_cvtsi128_si32(v56) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v56) >> 1));
              v59 = (float)(*(float *)&v58 * 1.5)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v56)) * *(float *)&v58)
                          * (float)(*(float *)&v58 * *(float *)&v58));
              v60 = (float)(v59 * 1.5)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v56)) * v59) * (float)(v59 * v59));
              v52 = (float)(1.5 * v60) - (float)((float)(v57 * v60) * (float)(v60 * v60));
            }
            v61 = (float)(*(float *)g4_m128_ptr<int32_t>(v54) * v52) * *(float *)&v53;
            v62 = (float)(v55 * v52) * *(float *)&v53;
            v118 = v118 - v61;
            v122 = v61 + v122;
            v119 = v119 - v62;
            v123 = v62 + v123;
            v63 = (float)((float)(v124 - v120) * v52) * *(float *)&v53;
            v64 = (float)(v52 * (float)(v125 - v121)) * *(float *)&v53;
            v120 = v120 - v63;
            v121 = v121 - v64;
            v124 = v63 + v124;
            v125 = v64 + v125;
            v89 = hkcdRayCastCylinder(v94, &v118, &v122, &v110, v104, &v105);
            goto LABEL_22;
          default:
            hkErrStream::Construct((hkErrStream::Self *)&v110, (hkString::Self *)&v118, 512);
            hkOstream::opShl((int)(uintptr_t)(&v110), (hkString::Self *)"Not implemented");
            if ( hkError::messageError(
                   (hkError::Self *)0x93D510B9,
                   (int)(uintptr_t)(&v118),
                   "../../Physics2012/Internal/Collide/BvCompressedMesh/hkpBvCompressedMeshShapeInternals.inl",
                   &stru_224[2],
                   (int)(uintptr_t)(v83)) != 0 )
              __builtin_debugtrap();
            hkErrStream::Destroy((hkErrStream::Self *)&v110);
            goto LABEL_22;
        }
      }
    }
    else if ( (uint8_t)v17 == 0xDE && v16 == 173 && v14 == 222 && v15 == 173 )
    {
      goto LABEL_22;
    }
    if ( v101 == 1 )
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::decodePrimitive(
        (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v3,
        v87,
        (hkVector4f::Self *)v116);
    v96 = (*(uint32_t *)(v3 + 96) << 8) | v88 | (v101 - 1);
    v10 = *(void (****)(char *))(*(uint32_t *)(v3 + 116) + 36);
    if ( v10 != nullptr )
    {
      v83 = (float *)((*(uint32_t *)(v3 + 96) << 8) | v88 | (v101 - 1));
      (**v10)(&v103);
      if ( v103 == 0 )
      {
LABEL_10:
        v97 = v101;
        v11 = v95 + 16;
        goto LABEL_11;
      }
    }
    v11 = v95 + 16;
    v97 = v101;
    v83 = (float *)(v95 + 16);
    hkcdRayCastTriangle::safeUsingDynamicTolerance(&v102);
    v89 = v102;
LABEL_23:
    if ( v89 != 0 )
    {
      if ( *(uint32_t *)(v3 + 148) != 0 )
      {
        v115 = -1;
        v114 = v104[0];
g4_m128_raw(v20) = LODWORD(v105);
        v19 = 0.0;
        *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20))
                                        + (float)(v106 * v106))
                                + (float)(v107 * v107);
        if ( *(float *)g4_m128_ptr<int32_t>(v20) > 0.0 )
        {
          v21 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v20);
          v22 = ((_mm_cvtsi128_si32(v20) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v20) >> 1));
          v23 = (float)(*(float *)&v22 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * *(float *)&v22)
                      * (float)(*(float *)&v22 * *(float *)&v22));
          v24 = (float)(v23 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * v23) * (float)(v23 * v23));
          v19 = (float)(1.5 * v24) - (float)((float)(v21 * v24) * (float)(v24 * v24));
        }
        v25 = v105 * v19;
        v26 = v106 * v19;
        v27 = v107 * v19;
        v28 = v19 * v108;
        v29 = (float)(v94[4] * v25) + (float)(v94[5] * v26);
        v30 = v94[6] * v27;
        v105 = v25;
        v106 = v26;
        v107 = v27;
        v108 = v28;
        if ( (float)(v29 + v30) > 0.0 )
        {
          v25 = -v25;
          v26 = -v26;
          v27 = -v27;
          v28 = -v28;
          v105 = v25;
        }
        v106 = v26;
        v107 = v27;
        v31 = *(uint32_t *)(v3 + 144);
        v108 = v28;
        v32 = *(float **)(v31 + 8);
        v33 = (float)(v32[1] * v25) + (float)(v32[5] * v26);
        v34 = v32[7] * v26;
        v35 = (float)(v32[2] * v25) + (float)(v32[6] * v26);
        v36 = v32[3] * v25;
        *(float *)&v110 = (float)((float)(v25 * *v32) + (float)(v26 * v32[4])) + (float)(v32[8] * v27);
        v111 = v33 + (float)(v32[9] * v27);
        v112 = v35 + (float)(v32[10] * v27);
        v37 = v27 * v32[11];
        v109[3] = v31;
        v113 = (float)(v36 + v34) + v37;
        v109[2] = *(uint32_t *)(v31 + 8);
        v109[0] = (*(int (**)(uint32_t, int, float *))(**(uint32_t **)(v3 + 112) + 100))(
                    *(uint32_t *)(v3 + 112),
                    v96,
                    &v118);
        v38 = *(void (****)(uint32_t, uint32_t *, int *))(v3 + 148);
        v109[1] = v96;
        (**v38)((uint32_t)(uintptr_t)(v38), v109, &v110);
        v94[7] = *(float *)(*(uint32_t *)(v3 + 148) + 4);
      }
      else
      {
        v39 = v104[0];
        *(uint32_t *)(v3 + 120) = v96;
        *(float *)(v3 + 128) = v105;
        *(float *)(v3 + 132) = v106;
        *(float *)(v3 + 136) = v107;
        *(float *)(v3 + 140) = v108;
        *((uint32_t *)v94 + 7) = v39;
      }
    }
LABEL_11:
    ++v101;
    result = v97;
    v95 = v11;
    if ( v93 <= v97 )
      return result;
    v4 = *(uint32_t *)(v3 + 72);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::castRay  (binary VA: 0x17c2250)
// Original: hkpBvCompressedMeshShape::castRay
// ----------------------------------------------------------------------------
uint8_t * hkpBvCompressedMeshShape::castRay(uint8_t *a1, float *a2, int a3, float *a4)
{
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9;
  float v10; // xmm5_4
  float v11; // xmm7_4
  __m128i v12;
  float v13;
  float v14;
  float v15; // xmm4_4
  bool v16;
  __m128i v17;
  float v18; // xmm3_4
  __m128i v19;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  int v25;
  int v26;
  float v27; // xmm4_4
  char v28;
  int v29;
  int **address;
  int *v31;
  void *v32;
  int v33;
  signed int v34;
  float v35; // xmm1_4
  int v37;
  int v38; // xmm6_4
  int v39;
  int v40;
  float v41; // xmm6_4
  int v42;
  int v43;
  __m128i v44;
  float v45; // xmm5_4
  float v46; // xmm4_4
  __m128i v47;
  float v48;
  float v49; // xmm5_4
  float v50; // xmm4_4
  __m128i v51;
  int v52;
  int v53;
  float v54; // xmm3_4
  float v55; // xmm3_4
  float v56; // xmm6_4
  float v57; // xmm5_4
  float v58; // xmm4_4
  float v59; // xmm3_4
  float v60; // xmm0_4
  unsigned int v61;
  unsigned int v62;
  typedef bool _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef hkLifoAllocator::Self *_g4_t_v66;
  typedef float _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef void *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef void *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef float _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t _g4_t_v82[11];
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef float _g4_t_v89[8];
  typedef g4_int128_t _g4_t_v90;
  typedef g4_int128_t _g4_t_v91;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef float *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef unsigned int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef unsigned int _g4_t_v106;
  typedef unsigned int _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v63)) > _g4_s0 ? (8u + sizeof(_g4_t_v63)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v64)) > _g4_s1 ? (16u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v65)) > _g4_s2 ? (20u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v66)) > _g4_s3 ? (20u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v67)) > _g4_s4 ? (20u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v68)) > _g4_s5 ? (24u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v69)) > _g4_s6 ? (24u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v70)) > _g4_s7 ? (24u + sizeof(_g4_t_v70)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v71)) > _g4_s8 ? (24u + sizeof(_g4_t_v71)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v72)) > _g4_s9 ? (28u + sizeof(_g4_t_v72)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v73)) > _g4_s10 ? (32u + sizeof(_g4_t_v73)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v74)) > _g4_s11 ? (36u + sizeof(_g4_t_v74)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v75)) > _g4_s12 ? (40u + sizeof(_g4_t_v75)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v76)) > _g4_s13 ? (44u + sizeof(_g4_t_v76)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v77)) > _g4_s14 ? (48u + sizeof(_g4_t_v77)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v78)) > _g4_s15 ? (64u + sizeof(_g4_t_v78)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v79)) > _g4_s16 ? (68u + sizeof(_g4_t_v79)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v80)) > _g4_s17 ? (72u + sizeof(_g4_t_v80)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v81)) > _g4_s18 ? (76u + sizeof(_g4_t_v81)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v82)) > _g4_s19 ? (112u + sizeof(_g4_t_v82)) : _g4_s19,
    _g4_s21 = (156u + sizeof(_g4_t_v83)) > _g4_s20 ? (156u + sizeof(_g4_t_v83)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v84)) > _g4_s21 ? (160u + sizeof(_g4_t_v84)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v85)) > _g4_s22 ? (164u + sizeof(_g4_t_v85)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v86)) > _g4_s23 ? (168u + sizeof(_g4_t_v86)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v87)) > _g4_s24 ? (172u + sizeof(_g4_t_v87)) : _g4_s24,
    _g4_s26 = (176u + sizeof(_g4_t_v88)) > _g4_s25 ? (176u + sizeof(_g4_t_v88)) : _g4_s25,
    _g4_s27 = (192u + sizeof(_g4_t_v89)) > _g4_s26 ? (192u + sizeof(_g4_t_v89)) : _g4_s26,
    _g4_s28 = (224u + sizeof(_g4_t_v90)) > _g4_s27 ? (224u + sizeof(_g4_t_v90)) : _g4_s27,
    _g4_s29 = (240u + sizeof(_g4_t_v91)) > _g4_s28 ? (240u + sizeof(_g4_t_v91)) : _g4_s28,
    _g4_s30 = (260u + sizeof(_g4_t_v93)) > _g4_s29 ? (260u + sizeof(_g4_t_v93)) : _g4_s29,
    _g4_s31 = (264u + sizeof(_g4_t_v94)) > _g4_s30 ? (264u + sizeof(_g4_t_v94)) : _g4_s30,
    _g4_s32 = (268u + sizeof(_g4_t_v95)) > _g4_s31 ? (268u + sizeof(_g4_t_v95)) : _g4_s31,
    _g4_s33 = (272u + sizeof(_g4_t_v96)) > _g4_s32 ? (272u + sizeof(_g4_t_v96)) : _g4_s32,
    _g4_s34 = (276u + sizeof(_g4_t_v97)) > _g4_s33 ? (276u + sizeof(_g4_t_v97)) : _g4_s33,
    _g4_s35 = (280u + sizeof(_g4_t_v98)) > _g4_s34 ? (280u + sizeof(_g4_t_v98)) : _g4_s34,
    _g4_s36 = (284u + sizeof(_g4_t_v99)) > _g4_s35 ? (284u + sizeof(_g4_t_v99)) : _g4_s35,
    _g4_s37 = (288u + sizeof(_g4_t_v100)) > _g4_s36 ? (288u + sizeof(_g4_t_v100)) : _g4_s36,
    _g4_s38 = (292u + sizeof(_g4_t_v101)) > _g4_s37 ? (292u + sizeof(_g4_t_v101)) : _g4_s37,
    _g4_s39 = (304u + sizeof(_g4_t_v102)) > _g4_s38 ? (304u + sizeof(_g4_t_v102)) : _g4_s38,
    _g4_s40 = (308u + sizeof(_g4_t_v103)) > _g4_s39 ? (308u + sizeof(_g4_t_v103)) : _g4_s39,
    _g4_s41 = (312u + sizeof(_g4_t_v104)) > _g4_s40 ? (312u + sizeof(_g4_t_v104)) : _g4_s40,
    _g4_s42 = (320u + sizeof(_g4_t_v105)) > _g4_s41 ? (320u + sizeof(_g4_t_v105)) : _g4_s41,
    _g4_s43 = (324u + sizeof(_g4_t_v106)) > _g4_s42 ? (324u + sizeof(_g4_t_v106)) : _g4_s42,
    _g4_s44 = (328u + sizeof(_g4_t_v107)) > _g4_s43 ? (328u + sizeof(_g4_t_v107)) : _g4_s43,
    _g4_s45 = (332u + sizeof(_g4_t_v108)) > _g4_s44 ? (332u + sizeof(_g4_t_v108)) : _g4_s44,
    _g4_s46 = (336u + sizeof(_g4_t_v109)) > _g4_s45 ? (336u + sizeof(_g4_t_v109)) : _g4_s45,
    _g4_s47 = (340u + sizeof(_g4_t_v110)) > _g4_s46 ? (340u + sizeof(_g4_t_v110)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 24u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 24u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 24u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 28u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 32u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 36u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 64u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 68u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 72u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 76u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 112u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 156u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 160u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 164u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 168u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 172u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 176u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 192u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 224u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 240u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 260u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 264u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 268u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 272u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 276u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 280u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 284u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 288u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 292u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 304u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 308u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 312u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 320u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 324u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 328u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 332u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 336u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 340u);

  v5 = a2[30] - a2[26];
  v6 = a2[31] - a2[27];
  v93 = 0;
  v7 = a2[28];
  v94 = 0;
  v8 = a2[29];
  v95 = 0;
  v90 = 0;
  v96 = 0;
  v91 = 0;
  v97 = 0;
  v9 = a2[24];
  v10 = v8 - a2[25];
  v11 = v7 - v9;
  v98 = 0;
  v99 = 0;
  v100 = -1;
  v101 = -1;
  v89[0] = v9;
  v89[6] = (*(const float *)&unk_20C89B8) * v5;
g4_m128_raw(v12) = *(unsigned int *)(a3 + 16);
  v89[1] = a2[25];
  *(float *)g4_m128_ptr<int32_t>(v12) = *(float *)g4_m128_ptr<int32_t>(v12) - *(float *)a3;
  v13 = a2[26];
  v102 = a2;
  v89[2] = v13;
  v14 = a2[27];
  v89[7] = (*(const float *)&unk_20C89BC) * v6;
  v89[3] = v14;
  v15 = (*(const float *)&unk_20C89B4) * v10;
g4_m128_raw(v17) = *(unsigned int *)(a3 + 20);
  v16 = false;
  *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v17) - *(float *)(a3 + 4);
  if ( *(float *)g4_m128_ptr<int32_t>(v12) == 0.0 )
    v16 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v12));
  v103 = a3;
  v109 = 0;
  v18 = a4[4];
  v110 = 0;
g4_m128_raw(v19) = *(unsigned int *)(a3 + 24);
  v89[4] = (*(const float *)&g4_fnstatic_01bb1a9ef5)
         * v11;
  v89[5] = v15;
  *(float *)g4_m128_ptr<int32_t>(v19) = *(float *)g4_m128_ptr<int32_t>(v19) - *(float *)(a3 + 8);
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v17)) || (v20 = 2, *(float *)g4_m128_ptr<int32_t>(v17) != 0.0) )
    v20 = 0;
  v21 = v16 | v20;
  if ( *(float *)g4_m128_ptr<int32_t>(v19) == 0.0 )
  {
    v22 = 12;
    v23 = 4;
  }
  else
  {
    v22 = 8;
    v23 = 0;
  }
  if ( v18 != 0.0 )
    v22 = v23;
  if ( __builtin_isnan(v18) )
    v22 = v23;
  v24 = v21 | v22;
  if ( (v24 & 1) != 0 )
  {
    v68 = 0;
    v63 = true;
g4_m128_raw(v12) = 0;
  }
  else
  {
    v68 = _mm_cvtsi128_si32(v12);
    v63 = *(float *)g4_m128_ptr<int32_t>(v12) >= 0.0;
  }
  v25 = _mm_cvtsi128_si32(v17);
  if ( (v24 & 2) != 0 )
  {
    v25 = 0;
g4_m128_raw(v17) = 0;
  }
  v26 = _mm_cvtsi128_si32(v19);
  if ( (v24 & 4) != 0 )
  {
    v26 = 0;
g4_m128_raw(v19) = 0;
  }
  v64 = v18;
  if ( (v24 & 8) != 0 )
    v64 = 0.0;
  v27 = 3.40282e38f;
  if ( v68 < 0 )
    v27 = -3.40282e38f;
  v69 = 3.40282e38f;
  if ( v25 < 0 )
    v69 = -3.40282e38f;
  v65 = 3.40282e38f;
  if ( v26 < 0 )
    v65 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v12) != 0.0 )
  {
    v42 = _mm_cvtsi128_si32(v12);
    v43 = (2130706432 - v42) & ((v42 ^ (v42 + 2139095040)) >> 31);
    v27 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v43))
                                                        * *(float *)&v43)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v43))
                                        * *(float *)&v43))))
        * (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v43))
                                        * *(float *)&v43)))
                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v43)) * *(float *)&v43));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v17) != 0.0 )
  {
    v39 = _mm_cvtsi128_si32(v17);
    v40 = (2130706432 - v39) & ((v39 ^ (v39 + 2139095040)) >> 31);
    v41 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)&v40)) * *(float *)&v40)
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v17)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)&v40)) * *(float *)&v40)));
    v69 = v41 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * v41));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v19) != 0.0 )
  {
    v37 = _mm_cvtsi128_si32(v19);
    v38 = (2130706432 - v37) & ((v37 ^ (v37 + 2139095040)) >> 31);
    v65 = (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v19)
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)&v38))
                                        * *(float *)&v38)))
                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)&v38)) * *(float *)&v38))
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v19)
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v19)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)&v38))
                                                        * *(float *)&v38)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)&v38))
                                        * *(float *)&v38))));
  }
  v88 = -1;
  v73 = nullptr;
  v74 = 0;
  v82[9] =g4_m128_lane<int32_t>(v17, 0);
  v82[10] =g4_m128_lane<int32_t>(v19, 0);
  v28 = *(float *)g4_m128_ptr<int32_t>(v19) >= 0.0 ? 4 : 0;
  if ( v64 >= 0.0 )
    v28 = *(float *)g4_m128_ptr<int32_t>(v19) < 0.0 ? 8 : 12;
  v78 = *(float *)a3;
  v79 = *(uint32_t *)(a3 + 4);
  v80 = *(uint32_t *)(a3 + 8);
  v81 = *(uint32_t *)(a3 + 12);
  v82[0] = (uint32_t)(uintptr_t)(v89);
  v82[4] = *(uint32_t *)a3;
  v82[5] = *(uint32_t *)(a3 + 4);
  v82[6] = *(uint32_t *)(a3 + 8);
  v29 = *(uint32_t *)(a3 + 12);
  v87 = v28 & 7 | v63 & 7 | (*(float *)g4_m128_ptr<int32_t>(v17) >= 0.0 ? 2 : 0) | 0x3F000000;
  v82[7] = v29;
  v82[8] =g4_m128_lane<int32_t>(v12, 0);
  v83 = v64;
  v84 = v27;
  v85 = v69;
  v86 = v65;
  v75 = 0x80000000;
  v77 = 64;
  address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v31 = *address;
  v70 = (int)(uintptr_t)(address);
  v32 = (void *)(*address)[3];
  if ( v31[2] > 3071 && (unsigned int)(uintptr_t)(v32) + 3072 <= v31[4] )
    v31[3] = (int)(uintptr_t)(v32) + 3072;
  else
    v32 = (void *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v31, 3072);
  v73 = v32;
  v76 = v32;
  v75 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpBvCompressedMeshShapeTree::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage5::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<hkpBvCompressedMeshShape_Internals::RayCastQuery::Self>>(
    a2 + 20,
    &v73,
    (int)(uintptr_t)(v82));
  v33 = 0;
  if ( v73 != v76 )
    v33 = v74;
  v74 = v33;
  v66 = *(hkLifoAllocator::Self **)v70;
  v34 = (48 * v77 + 127) & 0xFFFFFF80;
  if ( v34 > *(uint32_t *)(*(uint32_t *)v70 + 8) || *((void **)v66 + 3) != (char *)v76 + v34 || v76 == *((void **)v66 + 5) )
    hkLifoAllocator::slowBlockFree(v66, (char *)v76, (48 * v77 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v66 + 3) = (uint32_t)(uintptr_t)(v76);
  v74 = 0;
  if ( v75 >= 0 )
    (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v73,
      48 * v75);
  v35 = v83;
  if ( v18 > v83 )
  {
    v44 = _mm_cvtsi32_si128(*(uint32_t *)(a3 + 20));
    v45 = *(float *)(a3 + 24) - *(float *)(a3 + 8);
    *(float *)g4_m128_ptr<int32_t>(v44) = *(float *)g4_m128_ptr<int32_t>(v44) - *(float *)(a3 + 4);
    v46 = *(float *)(a3 + 16) - *(float *)a3;
    *(uint32_t *)a4 = v105;
g4_m128_raw(v47) = *(unsigned int *)a4;
    *((uint32_t *)a4 + 1) = v106;
    v67 = v45;
    v48 = COERCE_FLOAT(_mm_cvtsi128_si32(v44));
    v49 = a4[1];
    v51 = v47;
    *((uint32_t *)a4 + 2) = v107;
    v71 = v46;
    *((uint32_t *)a4 + 3) = v108;
    v50 = a4[2];
    *(float *)g4_m128_ptr<int32_t>(v51) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v47) * *(float *)g4_m128_ptr<int32_t>(v47)) + (float)(v49 * v49))
                            + (float)(v50 * v50);
    if ( *(float *)g4_m128_ptr<int32_t>(v51) <= 0.0 )
    {
      v55 = 0.0;
    }
    else
    {
      v52 = _mm_cvtsi128_si32(v51) >> 1;
      v53 = (_mm_cvtsi128_si32(v51) + 2139095040) >> 31;
      v72 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v51);
      v54 = (float)(1.5 * COERCE_FLOAT(v53 & (1597463174 - v52)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v51)) * COERCE_FLOAT(v53 & (1597463174 - v52)))
                  * (float)(COERCE_FLOAT(v53 & (1597463174 - v52)) * COERCE_FLOAT(v53 & (1597463174 - v52))));
      v55 = (float)(1.5 * (float)((float)(1.5 * v54) - (float)((float)(v72 * v54) * (float)(v54 * v54))))
          - (float)((float)(v72 * (float)((float)(1.5 * v54) - (float)((float)(v72 * v54) * (float)(v54 * v54))))
                  * (float)((float)((float)(1.5 * v54) - (float)((float)(v72 * v54) * (float)(v54 * v54)))
                          * (float)((float)(1.5 * v54) - (float)((float)(v72 * v54) * (float)(v54 * v54)))));
    }
    v56 = *(float *)g4_m128_ptr<int32_t>(v47) * v55;
    v57 = v49 * v55;
    v58 = v50 * v55;
    v59 = v55 * a4[3];
    *a4 = v56;
    a4[1] = v57;
    a4[2] = v58;
    a4[3] = v59;
    if ( (float)((float)((float)(v71 * v56) + (float)(v48 * v57)) + (float)(v67 * v58)) <= 0.0 )
    {
      a4[1] = v57;
      v60 = v59;
    }
    else
    {
      v58 = -v58;
      *a4 = -v56;
      v60 = -v59;
      a4[1] = -v57;
    }
    a4[2] = v58;
    v61 = *((uint32_t *)a4 + 16);
    v62 = v104;
    a4[3] = v60;
    a4[4] = v35;
    LODWORD(a4[v61 + 8]) = v62;
    a4[v61 + 9] = NAN;
    *a1 = 1;
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::castRayWithCollector  (binary VA: 0x17c2b30)
// Original: hkpBvCompressedMeshShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::castRayWithCollector(float *a1, int a2, int a3, int a4)
{
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm7_4
  float v9;
  float v10; // xmm7_4
  __m128i v11;
  float v12;
  bool v13; // si
  __m128i v14;
  __m128i v15;
  char v16;
  char v17; // di
  char v18;
  char v19; // si
  char v20;
  int v21;
  int v22;
  float v23; // xmm5_4
  uint8_t v24; // si
  int v25;
  int v26;
  int v27;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v29;
  hkLifoAllocator::Self **v30;
  bool v31; // cc
  char *v32;
  int v33;
  hkLifoAllocator::Self *v34;
  signed int v35;
  int result;
  int v37;
  int v38;
  float v39; // xmm6_4
  int v40;
  int v41;
  float v42; // xmm6_4
  int v43;
  int v44;
  float v45; // xmm6_4
  typedef bool _g4_t_v46;
  typedef int _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef int _g4_t_v51;
  typedef void *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef void *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t _g4_t_v61[20];
  typedef float _g4_t_v62[8];
  typedef g4_int128_t _g4_t_v63;
  typedef g4_int128_t _g4_t_v64;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef float *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v46)) > _g4_s0 ? (8u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v47)) > _g4_s1 ? (8u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v48)) > _g4_s2 ? (16u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v49)) > _g4_s3 ? (20u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v50)) > _g4_s4 ? (24u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v51)) > _g4_s5 ? (28u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v52)) > _g4_s6 ? (32u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v53)) > _g4_s7 ? (36u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v54)) > _g4_s8 ? (40u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v55)) > _g4_s9 ? (44u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v56)) > _g4_s10 ? (48u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v57)) > _g4_s11 ? (64u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v58)) > _g4_s12 ? (68u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v59)) > _g4_s13 ? (72u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v60)) > _g4_s14 ? (76u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v61)) > _g4_s15 ? (112u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (192u + sizeof(_g4_t_v62)) > _g4_s16 ? (192u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v63)) > _g4_s17 ? (224u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (240u + sizeof(_g4_t_v64)) > _g4_s18 ? (240u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (260u + sizeof(_g4_t_v66)) > _g4_s19 ? (260u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (264u + sizeof(_g4_t_v67)) > _g4_s20 ? (264u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (268u + sizeof(_g4_t_v68)) > _g4_s21 ? (268u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (272u + sizeof(_g4_t_v69)) > _g4_s22 ? (272u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (276u + sizeof(_g4_t_v70)) > _g4_s23 ? (276u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (280u + sizeof(_g4_t_v71)) > _g4_s24 ? (280u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (284u + sizeof(_g4_t_v72)) > _g4_s25 ? (284u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (288u + sizeof(_g4_t_v73)) > _g4_s26 ? (288u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (292u + sizeof(_g4_t_v74)) > _g4_s27 ? (292u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (304u + sizeof(_g4_t_v75)) > _g4_s28 ? (304u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (308u + sizeof(_g4_t_v76)) > _g4_s29 ? (308u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (336u + sizeof(_g4_t_v77)) > _g4_s30 ? (336u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (340u + sizeof(_g4_t_v78)) > _g4_s31 ? (340u + sizeof(_g4_t_v78)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 192u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 224u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 240u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 260u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 264u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 268u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 272u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 276u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 280u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 284u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 288u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 292u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 304u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 308u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 336u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 340u);

  v5 = a1[31] - a1[27];
  v6 = a1[29] - a1[25];
  v7 = (*(const float *)&unk_20C89B8) * (float)(a1[30] - a1[26]);
  v8 = a1[28];
  v66 = 0;
  v63 = 0;
  v67 = 0;
  v64 = 0;
  v68 = 0;
  v9 = a1[24];
  v10 = v8 - v9;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = -1;
  v74 = -1;
  v62[0] = v9;
  v62[6] = v7;
  v78 = a4;
g4_m128_raw(v11) = *(unsigned int *)(a2 + 16);
  *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) - *(float *)a2;
  v62[1] = a1[25];
  v62[7] = (*(const float *)&unk_20C89BC) * v5;
  v62[2] = a1[26];
  v12 = a1[27];
  v75 = a1;
  v62[5] = (*(const float *)&unk_20C89B4) * v6;
  v62[3] = v12;
  v50 = *(float *)(a4 + 4);
g4_m128_raw(v14) = *(unsigned int *)(a2 + 20);
  v13 = false;
  *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)g4_m128_ptr<int32_t>(v14) - *(float *)(a2 + 4);
  if ( *(float *)g4_m128_ptr<int32_t>(v11) == 0.0 )
    v13 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v11));
  v76 = a2;
g4_m128_raw(v15) = *(unsigned int *)(a2 + 24);
  v77 = a3;
  *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v15) - *(float *)(a2 + 8);
  v62[4] = (*(const float *)&g4_fnstatic_01bb1a9ef5)
         * v10;
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v14)) || (v16 = 2, *(float *)g4_m128_ptr<int32_t>(v14) != 0.0) )
    v16 = 0;
  v17 = v13 | v16;
  if ( *(float *)g4_m128_ptr<int32_t>(v15) == 0.0 )
  {
    v18 = 12;
    v19 = 4;
  }
  else
  {
    v18 = 8;
    v19 = 0;
  }
  if ( v50 != 0.0 )
    v18 = v19;
  if ( __builtin_isnan(v50) )
    v18 = v19;
  v20 = v17 | v18;
  if ( (v20 & 1) != 0 )
  {
    v46 = true;
    v51 = 0;
g4_m128_raw(v11) = 0;
  }
  else
  {
    v51 = _mm_cvtsi128_si32(v11);
    v46 = *(float *)g4_m128_ptr<int32_t>(v11) >= 0.0;
  }
  v21 = _mm_cvtsi128_si32(v14);
  if ( (v20 & 2) != 0 )
  {
    v21 = 0;
g4_m128_raw(v14) = 0;
  }
  v22 = _mm_cvtsi128_si32(v15);
  if ( (v20 & 4) != 0 )
  {
    v22 = 0;
g4_m128_raw(v15) = 0;
  }
  if ( (v20 & 8) != 0 )
    v50 = 0.0;
  v23 = 3.40282e38f;
  if ( v51 < 0 )
    v23 = -3.40282e38f;
  v49 = 3.40282e38f;
  if ( v21 < 0 )
    v49 = -3.40282e38f;
  v48 = 3.40282e38f;
  if ( v22 < 0 )
    v48 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v11) != 0.0 )
  {
    v43 = _mm_cvtsi128_si32(v11);
    v44 = (2130706432 - v43) & ((v43 ^ (v43 + 2139095040)) >> 31);
    v45 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v11)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v44)) * *(float *)&v44)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v44)) * *(float *)&v44);
    v23 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * v45)) * v45;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v14) != 0.0 )
  {
    v40 = _mm_cvtsi128_si32(v14);
    v41 = (2130706432 - v40) & ((v40 ^ (v40 + 2139095040)) >> 31);
    v42 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v14)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)&v41)) * *(float *)&v41)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)&v41)) * *(float *)&v41);
    v49 = v42 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v14) * v42));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v15) != 0.0 )
  {
    v37 = _mm_cvtsi128_si32(v15);
    v38 = (2130706432 - v37) & ((v37 ^ (v37 + 2139095040)) >> 31);
    v39 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v38)) * *(float *)&v38)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v38)) * *(float *)&v38);
    v48 = v39 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * v39));
  }
  v61[16] = -1;
  *(float *)&v61[12] = v23;
  v24 = v46 | (*(float *)g4_m128_ptr<int32_t>(v14) >= 0.0 ? 2 : 0);
  v61[8] =g4_m128_lane<int32_t>(v11, 0);
  v61[9] =g4_m128_lane<int32_t>(v14, 0);
  v61[10] =g4_m128_lane<int32_t>(v15, 0);
  v25 = *(float *)g4_m128_ptr<int32_t>(v15) < 0.0 ? 8 : 12;
  *(float *)&v61[11] = v50;
  if ( v50 < 0.0 )
    LOBYTE(v25) = *(float *)g4_m128_ptr<int32_t>(v15) >= 0.0 ? 4 : 0;
  v47 = *(uint32_t *)(a2 + 4);
  v57 = *(float *)a2;
  v58 = v47;
  v26 = *(uint32_t *)(a2 + 8);
  v27 = *(uint32_t *)(a2 + 12);
  *(float *)&v61[4] = v57;
  v61[5] = v47;
  v59 = v26;
  v61[6] = v26;
  v61[0] = (uint32_t)(uintptr_t)(v62);
  v60 = v27;
  v61[7] = v27;
  *(float *)&v61[13] = v49;
  v61[15] = ((uint8_t)v25 | v24) & 7 | 0x3F000000;
  *(float *)&v61[14] = v48;
  v52 = nullptr;
  v53 = 0;
  v54 = 0x80000000;
  v56 = 64;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v29 = *address;
  v30 = address;
  v31 = *((uint32_t *)*address + 2) <= 3071;
  v32 = *((char **)*address + 3);
  if ( v31 || (unsigned int)(uintptr_t)(v32 + 3072) > *((uint32_t *)v29 + 4) )
    v32 = (char *)hkLifoAllocator::allocateFromNewSlab(v29, 3072);
  else
    *((uint32_t *)v29 + 3) = (uint32_t)(uintptr_t)(v32 + 3072);
  v52 = v32;
  v55 = v32;
  v54 = -2147483584;
  hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpBvCompressedMeshShapeTree::Self,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage5::Self>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<hkpBvCompressedMeshShape_Internals::RayCastQuery::Self>>(
    a1 + 20,
    &v52,
    (int)(uintptr_t)(v61));
  v33 = 0;
  if ( v52 != v55 )
    v33 = v53;
  v34 = *v30;
  v53 = v33;
  v35 = (48 * v56 + 127) & 0xFFFFFF80;
  if ( v35 > *((uint32_t *)v34 + 2) || *((void **)v34 + 3) != (char *)v55 + v35 || v55 == *((void **)v34 + 5) )
    hkLifoAllocator::slowBlockFree(v34, (char *)v55, (48 * v56 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v34 + 3) = (uint32_t)(uintptr_t)(v55);
  result = v54;
  v53 = 0;
  if ( v54 >= 0 )
    return (*(int (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v52,
             48 * v54);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::getChildShape  (binary VA: 0x17c31c0)
// Original: hkpBvCompressedMeshShape::getChildShape
// ----------------------------------------------------------------------------
hkpConvexVerticesShape::Self * hkpBvCompressedMeshShape::getChildShape(int a1, unsigned int a2, int a3)
{
  float v3; // xmm1_4
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v13;
  float v14;
  float v15;
  int v16;
  int v17;
  hkpCylinderShape::Self *v18;
  int v19;
  int v20;
  int v21;
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  int v27;
  int v28;
  int v29;
  hkpConvexVerticesShape::Self *v30;
  int v31; // xmm0_4
  char v32;
  int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  hkpConvexVerticesShape::Self *result;
  int v46;
  float *v47;
  hkpConvexVerticesShape::Self *v48;
  int v49;
  uint16_t v50;
  uint64_t v51;
  uint64_t v52; // kr08_8
  uint64_t v53; // kr10_8
  uint64_t v54; // rax
  int v55;
  int v56;
  hkpConvexVerticesShape::Self *v57;
  float *v58;
  int v59;
  float v60; // xmm5_4
  float v61; // xmm0_4
  float v62; // xmm7_4
  float v63; // xmm4_4
  float v64; // xmm2_4
  float v65; // xmm3_4
  float v66; // xmm6_4
  float *v67;
  float v68; // xmm3_4
  signed int v69;
  float v70; // xmm5_4
  float v71; // xmm7_4
  float v72; // xmm6_4
  int v73;
  float v74; // xmm4_4
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm4_4
  float v78; // xmm1_4
  float v79; // xmm2_4
  float v80; // xmm4_4
  float v81; // xmm1_4
  float v82; // xmm7_4
  float v83; // xmm5_4
  float v84; // xmm3_4
  float v85; // xmm2_4
  float v86; // xmm4_4
  float v87; // xmm0_4
  float *v88;
  float v89;
  int v90;
  float v91; // xmm2_4
  float v92; // xmm2_4
  float v93; // xmm3_4
  float v94; // xmm4_4
  float v95; // xmm1_4
  float v96; // xmm4_4
  float v97; // xmm2_4
  int v98;
  int v99; // xmm3_4
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105; // xmm3_4
  float v106; // xmm2_4
  float v107; // xmm1_4
  float v108; // xmm7_4
  float v109; // xmm5_4
  float v110; // xmm2_4
  float v111; // xmm1_4
  float v112; // xmm0_4
  float v113; // xmm4_4
  float v114; // xmm5_4
  float v115; // xmm2_4
  float v116; // xmm1_4
  float v117; // xmm0_4
  float v118; // xmm5_4
  float v119; // xmm3_4
  float v120; // xmm2_4
  hkpConvexVerticesShape::Self *v211;
  typedef int _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef float _g4_t_v128;
  typedef int _g4_t_CustomPrimitiveVertices;
  typedef int _g4_t_v130;
  typedef float *_g4_t_v131;
  typedef signed int _g4_t_v132;
  typedef int _g4_t_PrimitiveData;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef int _g4_t_v152;
  typedef uint8_t *_g4_t_v153;
  typedef float _g4_t_v154;
  typedef float _g4_t_v155;
  typedef float _g4_t_v156;
  typedef float _g4_t_v157;
  typedef int _g4_t_v158;
  typedef hkpCylinderShape::Self *_g4_t_v159;
  typedef hkpCylinderShape::Self *_g4_t_v160;
  typedef hkpConvexVerticesShape::Self *_g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef float _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef float _g4_t_v167;
  typedef int _g4_t_v168;
  typedef float _g4_t_v169;
  typedef float _g4_t_v170;
  typedef uint32_t _g4_t_v171[8];
  typedef float _g4_t_v172;
  typedef float _g4_t_v173;
  typedef float _g4_t_v174;
  typedef float _g4_t_v175;
  typedef float _g4_t_v176;
  typedef float _g4_t_v177;
  typedef float _g4_t_v178;
  typedef float _g4_t_v179;
  typedef float _g4_t_v180;
  typedef float _g4_t_v181;
  typedef float _g4_t_v182;
  typedef float _g4_t_v183;
  typedef g4_int128_t _g4_t_v184;
  typedef int _g4_t_v186;
  typedef int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef hkpCylinderShape::Self *_g4_t_v189;
  typedef int _g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef unsigned int _g4_t_v193;
  typedef unsigned int _g4_t_v194;
  typedef float _g4_t_v195;
  typedef float _g4_t_v196;
  typedef float _g4_t_v197;
  typedef float _g4_t_v198;
  typedef float _g4_t_v199;
  typedef float _g4_t_v200;
  typedef float _g4_t_v201;
  typedef float _g4_t_v202;
  typedef float _g4_t_v203;
  typedef float _g4_t_v204;
  typedef float _g4_t_v205;
  typedef float _g4_t_v206;
  typedef float _g4_t_v207;
  typedef float _g4_t_v208;
  typedef float _g4_t_v209;
  typedef float _g4_t_v210;
  enum : size_t {
    _g4_s0 = 880u,
    _g4_s1 = (0u + sizeof(_g4_t_v121)) > _g4_s0 ? (0u + sizeof(_g4_t_v121)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v122)) > _g4_s1 ? (16u + sizeof(_g4_t_v122)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v123)) > _g4_s2 ? (20u + sizeof(_g4_t_v123)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v124)) > _g4_s3 ? (24u + sizeof(_g4_t_v124)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v125)) > _g4_s4 ? (32u + sizeof(_g4_t_v125)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v126)) > _g4_s5 ? (36u + sizeof(_g4_t_v126)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v127)) > _g4_s6 ? (48u + sizeof(_g4_t_v127)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v128)) > _g4_s7 ? (52u + sizeof(_g4_t_v128)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_CustomPrimitiveVertices)) > _g4_s8 ? (52u + sizeof(_g4_t_CustomPrimitiveVertices)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v130)) > _g4_s9 ? (56u + sizeof(_g4_t_v130)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v131)) > _g4_s10 ? (56u + sizeof(_g4_t_v131)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v132)) > _g4_s11 ? (60u + sizeof(_g4_t_v132)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_PrimitiveData)) > _g4_s12 ? (64u + sizeof(_g4_t_PrimitiveData)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v134)) > _g4_s13 ? (68u + sizeof(_g4_t_v134)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v135)) > _g4_s14 ? (68u + sizeof(_g4_t_v135)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v136)) > _g4_s15 ? (72u + sizeof(_g4_t_v136)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v137)) > _g4_s16 ? (72u + sizeof(_g4_t_v137)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v138)) > _g4_s17 ? (76u + sizeof(_g4_t_v138)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v139)) > _g4_s18 ? (76u + sizeof(_g4_t_v139)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v140)) > _g4_s19 ? (80u + sizeof(_g4_t_v140)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v141)) > _g4_s20 ? (80u + sizeof(_g4_t_v141)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v142)) > _g4_s21 ? (84u + sizeof(_g4_t_v142)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v143)) > _g4_s22 ? (88u + sizeof(_g4_t_v143)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v144)) > _g4_s23 ? (92u + sizeof(_g4_t_v144)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v145)) > _g4_s24 ? (92u + sizeof(_g4_t_v145)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v146)) > _g4_s25 ? (92u + sizeof(_g4_t_v146)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v147)) > _g4_s26 ? (96u + sizeof(_g4_t_v147)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v148)) > _g4_s27 ? (100u + sizeof(_g4_t_v148)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v149)) > _g4_s28 ? (100u + sizeof(_g4_t_v149)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v150)) > _g4_s29 ? (100u + sizeof(_g4_t_v150)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v151)) > _g4_s30 ? (100u + sizeof(_g4_t_v151)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v152)) > _g4_s31 ? (104u + sizeof(_g4_t_v152)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v153)) > _g4_s32 ? (104u + sizeof(_g4_t_v153)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v154)) > _g4_s33 ? (104u + sizeof(_g4_t_v154)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v155)) > _g4_s34 ? (104u + sizeof(_g4_t_v155)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v156)) > _g4_s35 ? (104u + sizeof(_g4_t_v156)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v157)) > _g4_s36 ? (104u + sizeof(_g4_t_v157)) : _g4_s36,
    _g4_s38 = (104u + sizeof(_g4_t_v158)) > _g4_s37 ? (104u + sizeof(_g4_t_v158)) : _g4_s37,
    _g4_s39 = (108u + sizeof(_g4_t_v159)) > _g4_s38 ? (108u + sizeof(_g4_t_v159)) : _g4_s38,
    _g4_s40 = (108u + sizeof(_g4_t_v160)) > _g4_s39 ? (108u + sizeof(_g4_t_v160)) : _g4_s39,
    _g4_s41 = (108u + sizeof(_g4_t_v161)) > _g4_s40 ? (108u + sizeof(_g4_t_v161)) : _g4_s40,
    _g4_s42 = (108u + sizeof(_g4_t_v162)) > _g4_s41 ? (108u + sizeof(_g4_t_v162)) : _g4_s41,
    _g4_s43 = (108u + sizeof(_g4_t_v163)) > _g4_s42 ? (108u + sizeof(_g4_t_v163)) : _g4_s42,
    _g4_s44 = (108u + sizeof(_g4_t_v164)) > _g4_s43 ? (108u + sizeof(_g4_t_v164)) : _g4_s43,
    _g4_s45 = (116u + sizeof(_g4_t_v165)) > _g4_s44 ? (116u + sizeof(_g4_t_v165)) : _g4_s44,
    _g4_s46 = (120u + sizeof(_g4_t_v166)) > _g4_s45 ? (120u + sizeof(_g4_t_v166)) : _g4_s45,
    _g4_s47 = (128u + sizeof(_g4_t_v167)) > _g4_s46 ? (128u + sizeof(_g4_t_v167)) : _g4_s46,
    _g4_s48 = (132u + sizeof(_g4_t_v168)) > _g4_s47 ? (132u + sizeof(_g4_t_v168)) : _g4_s47,
    _g4_s49 = (136u + sizeof(_g4_t_v169)) > _g4_s48 ? (136u + sizeof(_g4_t_v169)) : _g4_s48,
    _g4_s50 = (140u + sizeof(_g4_t_v170)) > _g4_s49 ? (140u + sizeof(_g4_t_v170)) : _g4_s49,
    _g4_s51 = (144u + sizeof(_g4_t_v171)) > _g4_s50 ? (144u + sizeof(_g4_t_v171)) : _g4_s50,
    _g4_s52 = (176u + sizeof(_g4_t_v172)) > _g4_s51 ? (176u + sizeof(_g4_t_v172)) : _g4_s51,
    _g4_s53 = (180u + sizeof(_g4_t_v173)) > _g4_s52 ? (180u + sizeof(_g4_t_v173)) : _g4_s52,
    _g4_s54 = (184u + sizeof(_g4_t_v174)) > _g4_s53 ? (184u + sizeof(_g4_t_v174)) : _g4_s53,
    _g4_s55 = (188u + sizeof(_g4_t_v175)) > _g4_s54 ? (188u + sizeof(_g4_t_v175)) : _g4_s54,
    _g4_s56 = (192u + sizeof(_g4_t_v176)) > _g4_s55 ? (192u + sizeof(_g4_t_v176)) : _g4_s55,
    _g4_s57 = (196u + sizeof(_g4_t_v177)) > _g4_s56 ? (196u + sizeof(_g4_t_v177)) : _g4_s56,
    _g4_s58 = (200u + sizeof(_g4_t_v178)) > _g4_s57 ? (200u + sizeof(_g4_t_v178)) : _g4_s57,
    _g4_s59 = (204u + sizeof(_g4_t_v179)) > _g4_s58 ? (204u + sizeof(_g4_t_v179)) : _g4_s58,
    _g4_s60 = (208u + sizeof(_g4_t_v180)) > _g4_s59 ? (208u + sizeof(_g4_t_v180)) : _g4_s59,
    _g4_s61 = (212u + sizeof(_g4_t_v181)) > _g4_s60 ? (212u + sizeof(_g4_t_v181)) : _g4_s60,
    _g4_s62 = (216u + sizeof(_g4_t_v182)) > _g4_s61 ? (216u + sizeof(_g4_t_v182)) : _g4_s61,
    _g4_s63 = (220u + sizeof(_g4_t_v183)) > _g4_s62 ? (220u + sizeof(_g4_t_v183)) : _g4_s62,
    _g4_s64 = (224u + sizeof(_g4_t_v184)) > _g4_s63 ? (224u + sizeof(_g4_t_v184)) : _g4_s63,
    _g4_s65 = (244u + sizeof(_g4_t_v186)) > _g4_s64 ? (244u + sizeof(_g4_t_v186)) : _g4_s64,
    _g4_s66 = (248u + sizeof(_g4_t_v187)) > _g4_s65 ? (248u + sizeof(_g4_t_v187)) : _g4_s65,
    _g4_s67 = (252u + sizeof(_g4_t_v188)) > _g4_s66 ? (252u + sizeof(_g4_t_v188)) : _g4_s66,
    _g4_s68 = (256u + sizeof(_g4_t_v189)) > _g4_s67 ? (256u + sizeof(_g4_t_v189)) : _g4_s67,
    _g4_s69 = (260u + sizeof(_g4_t_v190)) > _g4_s68 ? (260u + sizeof(_g4_t_v190)) : _g4_s68,
    _g4_s70 = (264u + sizeof(_g4_t_v191)) > _g4_s69 ? (264u + sizeof(_g4_t_v191)) : _g4_s69,
    _g4_s71 = (268u + sizeof(_g4_t_v192)) > _g4_s70 ? (268u + sizeof(_g4_t_v192)) : _g4_s70,
    _g4_s72 = (272u + sizeof(_g4_t_v193)) > _g4_s71 ? (272u + sizeof(_g4_t_v193)) : _g4_s71,
    _g4_s73 = (276u + sizeof(_g4_t_v194)) > _g4_s72 ? (276u + sizeof(_g4_t_v194)) : _g4_s72,
    _g4_s74 = (288u + sizeof(_g4_t_v195)) > _g4_s73 ? (288u + sizeof(_g4_t_v195)) : _g4_s73,
    _g4_s75 = (292u + sizeof(_g4_t_v196)) > _g4_s74 ? (292u + sizeof(_g4_t_v196)) : _g4_s74,
    _g4_s76 = (296u + sizeof(_g4_t_v197)) > _g4_s75 ? (296u + sizeof(_g4_t_v197)) : _g4_s75,
    _g4_s77 = (300u + sizeof(_g4_t_v198)) > _g4_s76 ? (300u + sizeof(_g4_t_v198)) : _g4_s76,
    _g4_s78 = (304u + sizeof(_g4_t_v199)) > _g4_s77 ? (304u + sizeof(_g4_t_v199)) : _g4_s77,
    _g4_s79 = (308u + sizeof(_g4_t_v200)) > _g4_s78 ? (308u + sizeof(_g4_t_v200)) : _g4_s78,
    _g4_s80 = (312u + sizeof(_g4_t_v201)) > _g4_s79 ? (312u + sizeof(_g4_t_v201)) : _g4_s79,
    _g4_s81 = (316u + sizeof(_g4_t_v202)) > _g4_s80 ? (316u + sizeof(_g4_t_v202)) : _g4_s80,
    _g4_s82 = (320u + sizeof(_g4_t_v203)) > _g4_s81 ? (320u + sizeof(_g4_t_v203)) : _g4_s81,
    _g4_s83 = (324u + sizeof(_g4_t_v204)) > _g4_s82 ? (324u + sizeof(_g4_t_v204)) : _g4_s82,
    _g4_s84 = (328u + sizeof(_g4_t_v205)) > _g4_s83 ? (328u + sizeof(_g4_t_v205)) : _g4_s83,
    _g4_s85 = (332u + sizeof(_g4_t_v206)) > _g4_s84 ? (332u + sizeof(_g4_t_v206)) : _g4_s84,
    _g4_s86 = (336u + sizeof(_g4_t_v207)) > _g4_s85 ? (336u + sizeof(_g4_t_v207)) : _g4_s85,
    _g4_s87 = (340u + sizeof(_g4_t_v208)) > _g4_s86 ? (340u + sizeof(_g4_t_v208)) : _g4_s86,
    _g4_s88 = (344u + sizeof(_g4_t_v209)) > _g4_s87 ? (344u + sizeof(_g4_t_v209)) : _g4_s87,
    _g4_s89 = (348u + sizeof(_g4_t_v210)) > _g4_s88 ? (348u + sizeof(_g4_t_v210)) : _g4_s88
  };
  alignas(16) uint8_t _g4_sf[_g4_s89];
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 0u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 16u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 20u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 24u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 32u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 36u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 48u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 52u);
  _g4_t_CustomPrimitiveVertices &CustomPrimitiveVertices = *reinterpret_cast<_g4_t_CustomPrimitiveVertices *>(_g4_sf + 52u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 56u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 56u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 60u);
  _g4_t_PrimitiveData &PrimitiveData = *reinterpret_cast<_g4_t_PrimitiveData *>(_g4_sf + 64u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 68u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 68u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 72u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 72u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 76u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 76u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 80u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 80u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 84u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 88u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 92u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 92u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 92u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 96u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 100u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 100u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 100u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 100u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 104u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 104u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 104u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 104u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 104u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 104u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 104u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 108u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 108u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 108u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 108u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 108u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 108u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 116u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 120u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 128u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 132u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 136u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 140u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 144u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 176u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 180u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 184u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 188u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 192u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 196u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 200u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 204u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 208u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 212u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 216u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 220u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 224u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 244u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 248u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 252u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 256u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 260u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 264u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 268u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 272u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 276u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 288u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 292u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 296u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 300u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 304u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 308u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 312u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 316u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 320u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 324u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 328u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 332u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 336u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 340u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 344u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 348u);

  v3 = *(float *)(a1 + 96);
  v4 = *(float *)(a1 + 112) - v3;
  v5 = *(float *)(a1 + 116);
  v184 = 0;
  v6 = *(float *)(a1 + 100);
  v124 = v3;
  v7 = v5 - v6;
  v8 = *(float *)(a1 + 104);
  v147 = (uint8_t)a2 >> 1;
  v187 = 0;
  v188 = 0;
  v189 = nullptr;
  v123 = v6;
  v190 = 0;
  v9 = v8;
  v191 = 0;
  v192 = 0;
  v122 = v8;
  v10 = *(float *)(a1 + 120);
  v172 = *(float *)(a1 + 96);
  v11 = v10 - v9;
  v144 = *(float *)(a1 + 108);
  v12 = *(float *)(a1 + 124);
  v173 = *(float *)(a1 + 100);
  v13 = *(uint32_t *)(a1 + 140) + 96 * (a2 >> 8);
  v14 = *(float *)(a1 + 104);
  v194 = a2 >> 8;
  v174 = v14;
  v15 = *(float *)(a1 + 108);
  v193 = a2 >> 8;
  v175 = v15;
  v16 = *(uint32_t *)(a1 + 176);
  v17 = *(uint32_t *)(v13 + 72);
  v186 = v13;
  v130 = v16 + 4 * v17;
  v188 = v130;
  v18 = (hkpCylinderShape::Self *)*(uint8_t *)(v13 + 92);
  v178 = (*(const float *)&unk_20C89B8) * v11;
  v159 = v18;
  v138 = (*(const float *)&unk_20C89B8) * v11;
  v19 = *(uint32_t *)(a1 + 188);
  v176 = (*(const float *)&g4_fnstatic_01bb1a9ef5)
       * v4;
  v134 = (*(const float *)&g4_fnstatic_01bb1a9ef5)
       * v4;
  v177 = (*(const float *)&unk_20C89B4) * v7;
  v136 = (*(const float *)&unk_20C89B4) * v7;
  v179 = (*(const float *)&unk_20C89BC) * (float)(v12 - v144);
  v140 = v179;
  v160 = (hkpCylinderShape::Self *)(v19 + ((uint32_t)(uintptr_t)(v159) << 19));
  v20 = *(uint32_t *)(a1 + 164);
  v189 = v160;
  v21 = *(uint32_t *)(a1 + 200);
  v190 = (*(uint32_t *)(v13 + 76) >> 8) + (*(uint32_t *)(v13 + 76) >> 8) + v20;
  v191 = v21 + 8 * (*(uint32_t *)(v13 + 84) >> 8);
  v192 = *(uint8_t *)(v13 + 76);
  v148 = v192;
  v187 = *(uint32_t *)(a1 + 152) + 4 * (*(uint32_t *)(v13 + 80) >> 8);
  v152 = v187;
  v22 = *(float *)(v13 + 52);
  v23 = *(float *)(v13 + 56);
  v24 = *(float *)(v13 + 60);
  v25 = *(float *)(v13 + 68);
  v128 = *(float *)(v13 + 48);
  v180 = v128;
  v26 = *(float *)(v13 + 64);
  v181 = v22;
  v182 = v23;
  v183 = v24;
  *(uint64_t *)&v184 = __PAIR64__(LODWORD(v26), LODWORD(v24));
  *((float *)&v184 + 2) = v25;
  v126 = v190 - 2 * *(uint8_t *)(v13 + 76);
  v190 = v126;
  PrimitiveData = hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getPrimitiveData(
                    (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)&v172,
                    v147);
  v153 = (uint8_t *)(v152 + 4 * v147);
  v27 = v153[3];
  v28 = v153[2];
  v125 = v153[1];
  v29 = *v153;
  v30 = (hkpConvexVerticesShape::Self *)a3;
  if ( v27 != v28 )
  {
    if ( (uint8_t)v29 == 0xDE && v125 == 173 && v28 == 222 )
    {
      result = nullptr;
      if ( v27 == 173 )
        return result;
    }
LABEL_3:
    v31 = *(uint32_t *)(a1 + 24);
    v32 = *(uint8_t *)(a1 + 28);
    *(uint32_t *)a3 = ((uint32_t)(uintptr_t)&off_209A8C8);
    *(uint8_t *)(a3 + 22) = v32;
    *(uint32_t *)(a3 + 4) = -65535;
    *(uint32_t *)(a3 + 16) = v31;
    *(uint8_t *)(a3 + 8) = 2;
    *(uint8_t *)(a3 + 9) = 4;
    *(uint8_t *)(a3 + 10) = 0;
    *(uint8_t *)(a3 + 11) = 0;
    *(uint32_t *)(a3 + 12) = 0;
    *(uint16_t *)(a3 + 20) = HIWORD(PrimitiveData);
    *(uint8_t *)(a3 + 23) = 0;
    *(uint32_t *)(a3 + 80) = 0;
    *(uint32_t *)(a3 + 84) = 0;
    *(uint32_t *)(a3 + 88) = 0;
    *(uint32_t *)(a3 + 92) = 0;
    v33 = *v153;
    if ( v148 <= v33 )
    {
      v51 = *((uint64_t *)v160 + *(uint16_t *)(v126 + 2 * v33));
      v195 = (float)((float)(v51 & 0x1FFFFF) * v134) + v124;
      v196 = (float)((float)((v51 >> 21) & 0x1FFFFF) * v136) + v123;
      v197 = (float)((float)(HIDWORD(v51) >> 10) * v138) + v122;
      v198 = (float)(v140 * 0.0) + v144;
      v35 = v153[1];
      if ( v148 > v35 )
      {
LABEL_5:
        v36 = *(uint32_t *)(v130 + 4 * v35);
        v199 = (float)((float)(v36 & 0x7FF) * v24) + v128;
        v200 = (float)((float)((v36 >> 11) & 0x7FF) * v26) + v22;
        v201 = (float)((float)(v36 >> 22) * v25) + v23;
        v202 = v24 + 0.0;
        v37 = v153[2];
        if ( v148 > v37 )
          goto LABEL_6;
        goto LABEL_26;
      }
    }
    else
    {
      v34 = *(uint32_t *)(v130 + 4 * v33);
      v195 = (float)((float)(v34 & 0x7FF) * v24) + v128;
      v196 = (float)((float)((v34 >> 11) & 0x7FF) * v26) + v22;
      v197 = (float)((float)(v34 >> 22) * v25) + v23;
      v198 = v24 + 0.0;
      v35 = v153[1];
      if ( v148 > v35 )
        goto LABEL_5;
    }
    v52 = *((uint64_t *)v160 + *(uint16_t *)(v126 + 2 * v35));
    v199 = (float)((float)(v52 & 0x1FFFFF) * v134) + v172;
    v200 = (float)((float)((v52 >> 21) & 0x1FFFFF) * v136) + v173;
    v201 = (float)((float)(HIDWORD(v52) >> 10) * v138) + v174;
    v202 = (float)(v140 * 0.0) + v175;
    v37 = v153[2];
    if ( v148 > v37 )
    {
LABEL_6:
      v38 = *(uint32_t *)(v130 + 4 * v37);
      v203 = (float)((float)(v38 & 0x7FF) * v24) + v128;
      v204 = (float)((float)((v38 >> 11) & 0x7FF) * v26) + v22;
      v205 = (float)((float)(v38 >> 22) * v25) + v23;
      v206 = v24 + 0.0;
      v39 = v153[3];
      if ( v148 > v39 )
      {
LABEL_7:
        v40 = *(uint32_t *)(v130 + 4 * v39);
        v210 = v24 + 0.0;
        v207 = (float)((float)(v40 & 0x7FF) * v24) + v128;
        v208 = (float)((float)((v40 >> 11) & 0x7FF) * v26) + v22;
        v209 = (float)((float)(v40 >> 22) * v25) + v23;
LABEL_8:
        *(float *)(a3 + 32) = v195;
        *(float *)(a3 + 36) = v196;
        *(float *)(a3 + 40) = v197;
        *(float *)(a3 + 44) = v198;
        v41 = 16 * ((a2 & 1) + 1);
        v42 = 16 * ((a2 & 1) + 2);
        *(float *)(a3 + 48) = *(float *)((char *)&v195 + v41);
        *(float *)(a3 + 52) = *(float *)((char *)&v196 + v41);
        v43 = *(uint32_t *)((char *)&v197 + v41);
        v44 = *(uint32_t *)((char *)&v198 + v41);
        *(uint32_t *)(a3 + 56) = v43;
        *(uint32_t *)(a3 + 60) = v44;
        *(float *)(a3 + 64) = *(float *)((char *)&v195 + v42);
        *(float *)(a3 + 68) = *(float *)((char *)&v196 + v42);
        *(float *)(a3 + 72) = *(float *)((char *)&v197 + v42);
        *(float *)(a3 + 76) = *(float *)((char *)&v198 + v42);
        result = (hkpConvexVerticesShape::Self *)a3;
        goto LABEL_9;
      }
LABEL_27:
      v54 = *((uint64_t *)v160 + *(uint16_t *)(v126 + 2 * v39));
      v210 = (float)(0.0 * v140) + v175;
      v207 = (float)((float)(v54 & 0x1FFFFF) * v134) + v172;
      v208 = (float)((float)((v54 >> 21) & 0x1FFFFF) * v136) + v173;
      v209 = (float)((float)(HIDWORD(v54) >> 10) * v138) + v174;
      goto LABEL_8;
    }
LABEL_26:
    v53 = *((uint64_t *)v160 + *(uint16_t *)(v126 + 2 * v37));
    v203 = (float)((float)(v53 & 0x1FFFFF) * v134) + v172;
    v204 = (float)((float)((v53 >> 21) & 0x1FFFFF) * v136) + v173;
    v205 = (float)((float)(HIDWORD(v53) >> 10) * v138) + v174;
    v206 = (float)(v140 * 0.0) + v175;
    v39 = v153[3];
    if ( v148 > v39 )
      goto LABEL_7;
    goto LABEL_27;
  }
  if ( v27 != v125 )
    goto LABEL_3;
  if ( (*(uint8_t *)(v126 + 2 * v29) & 0x30) != 0 )
  {
    hkcdStaticTree::Tree_hkcdStaticTree_DynamicSt_b26189::getNodeAabb(
      (hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage4::Self> *)v13,
      v27,
      (hkAabb::Self *)v171);
    v30 = (hkpConvexVerticesShape::Self *)a3;
  }
  else
  {
    v171[0] = 2139095022;
    v171[1] = 2139095022;
    v171[4] = -8388626;
    v171[2] = 2139095022;
    v171[3] = 2139095022;
    v171[5] = -8388626;
    v171[6] = -8388626;
    v171[7] = -8388626;
  }
  v161 = v30;
  v47 = (float *)((char *)&hkpBvCompressedMeshShape::g_vertexBufferPool
                + 4080 * *(uint32_t *)_emutls_get_address(&g4_emutls_v_hkThreadNumber));
  CustomPrimitiveVertices = hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getCustomPrimitiveVertices(
                              (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)&v172,
                              v147,
                              (const hkAabb::Self *)v171,
                              (hkVector4f::Self *)v47,
                              255);
  v48 = v161;
  v49 = *(uint8_t *)(v187 + 4 * v147);
  v50 = *(uint16_t *)(v190 + 2 * v49) & 0xF;
  if ( v50 <= 3u )
  {
    if ( v50 != 0 )
    {
      hkpConvexVerticesShape::Construct(v161, *(float *)(a1 + 24));
      v56 = CustomPrimitiveVertices;
      v132 = (CustomPrimitiveVertices + 3) & 0xFFFFFFFC;
      v127 = v132 >> 2;
      v57 = v161;
      if ( CustomPrimitiveVertices < v132 )
      {
        v58 = &v47[4 * CustomPrimitiveVertices + 1073741820];
        do
        {
          ++v56;
          v58[4] = *v58;
          v58[5] = v58[1];
          v58[6] = v58[2];
          v59 = *((uint32_t *)v58 + 3);
          v58 += 4;
          *((uint32_t *)v58 + 3) = v59;
        }
        while ( v56 != ((CustomPrimitiveVertices + 3) & 0xFFFFFFFC) );
        v57 = v161;
      }
      v60 = 3.40282e38f;
      v61 = 3.40282e38f;
      v62 = 3.40282e38f;
      v63 = 3.40282e38f;
      v64 = -3.40282e38f;
      v65 = -3.40282e38f;
      v66 = -3.40282e38f;
      v162 = -3.40282e38f;
      if ( v132 <= 0 )
        goto LABEL_44;
    }
    else
    {
      v105 = *v47;
      v157 = v47[13] - v47[1];
      v164 = v47[12] - *v47;
      v106 = v47[9];
      v107 = v47[15] - v47[3];
      v151 = v47[14] - v47[2];
      v108 = v47[8];
      v109 = v47[10];
      v47[21] = v157 + v106;
      v146 = v107;
      v110 = v106 - v47[1];
      v111 = v109 - v47[2];
      v112 = v47[11] - v47[3];
      v47[20] = v108 + v164;
      v47[22] = v109 + v151;
      v113 = (float)(v108 - v105) + v47[4];
      v114 = v47[11] + v146;
      v115 = v110 + v47[5];
      v116 = v111 + v47[6];
      v117 = v112 + v47[7];
      v47[16] = v113;
      v47[17] = v115;
      v47[18] = v116;
      v47[19] = v117;
      v47[23] = v114;
      v118 = v47[4] - v105;
      v119 = v47[12];
      v120 = v115 + v157;
      v47[30] = v116 + v151;
      v158 = (int)(uintptr_t)(v48);
      v47[31] = v117 + v146;
      v47[29] = v120;
      v47[24] = v119 + v118;
      v47[25] = (float)(v47[5] - v47[1]) + v47[13];
      v47[26] = (float)(v47[6] - v47[2]) + v47[14];
      v47[27] = (float)(v47[7] - v47[3]) + v47[15];
      v47[28] = v164 + v113;
      hkpConvexVerticesShape::Construct(v48, *(float *)(a1 + 24));
      v127 = 2;
      v64 = -3.40282e38f;
      v65 = -3.40282e38f;
      v132 = 8;
      v162 = -3.40282e38f;
      CustomPrimitiveVertices = 8;
      v57 = (hkpConvexVerticesShape::Self *)v158;
    }
    v154 = v65;
    v67 = v47;
    v68 = 3.40282e38f;
    v69 = 0;
    v141 = 3.40282e38f;
    v131 = v47;
    v139 = v64;
    v70 = 3.40282e38f;
    v71 = 3.40282e38f;
    v211 = v57;
    v149 = -3.40282e38f;
    do
    {
      v72 = v67[1];
      v73 = v69;
      v74 = v67[2];
      v69 += 4;
      v75 = fminf(v141, v74);
      v145 = v74;
      v67 += 16;
      v76 = fmaxf(v154, v74);
      v77 = *(v67 - 10);
      v78 = fminf(v75, v77);
      v79 = fmaxf(v76, v77);
      v143 = v77;
      v80 = *(v67 - 7);
      v81 = fminf(v78, *(v67 - 6));
      v82 = fminf(fminf(fminf(v71, *(v67 - 16)), *(v67 - 12)), *(v67 - 8));
      v155 = v79;
      v83 = fminf(fminf(fminf(v70, *(v67 - 13)), *(v67 - 9)), *(v67 - 5));
      v84 = fminf(fminf(fminf(v68, v72), *(v67 - 11)), v80);
      v150 = fmaxf(fmaxf(v149, *(v67 - 13)), *(v67 - 9));
      v142 = v80;
      v85 = fmaxf(fmaxf(fmaxf(v162, v72), *(v67 - 11)), v80);
      v86 = *(v67 - 3);
      v87 = fmaxf(fmaxf(fmaxf(fmaxf(v139, *(v67 - 16)), *(v67 - 12)), *(v67 - 8)), *(v67 - 4));
      v88 = &v131[12 * (v73 >> 2)];
      v89 = *(v67 - 6);
      v163 = v85;
      v168 = *((uint32_t *)v67 - 11);
      v90 = v168;
      v137 = v89;
      v91 = fmaxf(v155, *(v67 - 6));
      v135 = fminf(v84, v86);
      v197 = v89;
      v139 = v87;
      v71 = fminf(v82, *(v67 - 4));
      v70 = fminf(v83, *(v67 - 1));
      v156 = v91;
      v92 = v86;
      v93 = *(v67 - 2);
      v94 = v81;
      v95 = v92;
      v141 = fminf(v94, v93);
      v96 = v93;
      v162 = fmaxf(v163, v92);
      v97 = fmaxf(fmaxf(v150, *(v67 - 5)), *(v67 - 1));
      v165 = *((uint32_t *)v67 - 12);
      v154 = fmaxf(v156, v93);
      v149 = v97;
      v166 = *((uint32_t *)v67 - 8);
      v98 = *((uint32_t *)v67 - 16);
      v167 = v72;
      v99 = *((uint32_t *)v67 - 4);
      *(uint32_t *)v88 = v98;
      v169 = v142;
      *((uint32_t *)v88 + 5) = v90;
      v100 = v169;
      *((uint32_t *)v88 + 1) = v165;
      v170 = v95;
      v88[6] = v100;
      v101 = v170;
      *((uint32_t *)v88 + 2) = v166;
      v195 = v145;
      v88[7] = v101;
      v102 = v195;
      *((uint32_t *)v88 + 3) = v99;
      v196 = v143;
      v103 = v167;
      v88[8] = v102;
      v104 = v196;
      v88[4] = v103;
      v88[9] = v104;
      v198 = v96;
      v88[10] = v137;
      v88[11] = v96;
      v68 = v135;
    }
    while ( v69 < v132 );
    v66 = v97;
    v61 = v71;
    v63 = v70;
    v47 = v131;
    v60 = v135;
    v57 = v211;
    v62 = v141;
    v65 = v154;
    v64 = v139;
LABEL_44:
    *((uint32_t *)v57 + 17) = v127;
    *((uint32_t *)v57 + 18) = v127;
    *((uint32_t *)v57 + 19) = CustomPrimitiveVertices;
    *((uint32_t *)v57 + 16) = (uint32_t)(uintptr_t)(v47);
    *((uint8_t *)v57 + 80) = 1;
    result = v57;
    *((float *)v57 + 8) = (float)(v64 - v61) * 0.5;
    *((float *)v57 + 12) = (float)(v61 + v64) * 0.5;
    *((float *)v57 + 9) = (float)(v162 - v60) * 0.5;
    *((float *)v57 + 10) = (float)(v65 - v62) * 0.5;
    *((float *)v57 + 11) = (float)(v66 - v63) * 0.5;
    *((float *)v57 + 13) = (float)(v162 + v60) * 0.5;
    *((float *)v57 + 14) = (float)(v65 + v62) * 0.5;
    *((float *)v57 + 15) = (float)(v66 + v63) * 0.5;
LABEL_33:
    v55 = *(uint8_t *)(v187 + 4 * v147);
    if ( (*(uint8_t *)(v190 + 2 * v55) & 0xC0) != 0 )
      *((uint32_t *)result + 4) = *(int16_t *)(v190 + 2 * v55 + 4) << 16;
    goto LABEL_9;
  }
  if ( v50 != 4 )
  {
    hkErrStream::Construct((hkErrStream::Self *)&v167, (hkString::Self *)&v195, 512);
    hkOstream::opShl((int)(uintptr_t)(&v167), (hkString::Self *)"Not implemented");
    if ( hkError::messageError(
           (hkError::Self *)0x7798B41B,
           (int)(uintptr_t)(&v195),
           "Collide/BvCompressedMesh/hkpBvCompressedMeshShape.cpp",
           (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_1F4)->st_value + 2,
           v121) != 0 )
      __builtin_debugtrap();
    hkErrStream::Destroy((hkErrStream::Self *)&v167);
    *v47 = 0.0;
    v47[1] = 0.0;
    v47[2] = 0.0;
    v47[3] = 0.0;
    result = nullptr;
    goto LABEL_33;
  }
  hkpCylinderShape::Construct(
    v161,
    (const hkVector4f::Self *)v47,
    (const hkVector4f::Self *)(v47 + 4),
    COERCE_FLOAT(*(int16_t *)(v190 + 2 * (v49 + 2) + 2) << 16),
    COERCE_FLOAT(*(int16_t *)(v190 + 2 * (v49 + 2)) << 16));
  result = v161;
LABEL_9:
  if ( *(uint8_t *)(a1 + 30) != 0 )
  {
    if ( *(uint32_t *)(a1 + 48) != 0 )
      v46 = *(uint32_t *)(*(uint32_t *)(a1 + 44) + 4 * BYTE1(PrimitiveData));
    else
      v46 = BYTE1(PrimitiveData);
    *((uint32_t *)result + 3) = v46;
  }
  else
  {
    *((uint32_t *)result + 3) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeGc::appendCustomPrimitiveToGeometry  (binary VA: 0x17c4a60)
// Original: hkpBvCompressedMeshShapeGc::appendCustomPrimitiveToGeometry
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshShapeGc::appendCustomPrimitiveToGeometry(hkpBvCompressedMeshShapeGc::Self *self, const hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *a2, int a3, hkGeometry::Self *a4)
{
  const hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *v4;
  int v5;
  int v6;
  int v7;
  hkVector4f::Self *v8;
  hkVector4f::Self *v9;
  float *v10;
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm6_4
  __m128i v24;
  int v25;
  float v26; // xmm5_4
  int v27;
  float v28; // xmm6_4
  hkVector4f::Self *v29;
  float *v30;
  hkVector4f::Self *v31;
  float *v32;
  hkVector4f::Self *v33;
  float v34; // xmm6_4
  float v35; // xmm1_4
  float v36; // xmm3_4
  float v37; // xmm5_4
  float v38; // xmm5_4
  float v39; // xmm7_4
  float v40; // xmm7_4
  float v41; // xmm6_4
  float v42; // xmm4_4
  float v43; // xmm2_4
  int v44;
  float *v45;
  float v46; // xmm4_4
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  hkVector4f::Self *v50;
  typedef hkVector4f::Self *_g4_t_v51;
  typedef hkVector4f::Self *_g4_t_v52;
  typedef hkQuaternionf::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef hkQuaternionf::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef hkGeometry::Self *_g4_t_v59;
  typedef hkGeometry::Self *_g4_t_v60;
  typedef hkGeometry::Self *_g4_t_v61;
  typedef hkGeometry::Self *_g4_t_v62;
  typedef int _g4_t_PrimitiveData;
  typedef hkGeometry::Self *_g4_t_v64;
  typedef int _g4_t_i;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::CustomGeometryConverter *_g4_t_v68;
  typedef float _g4_t_xa;
  typedef float _g4_t_xb;
  typedef float _g4_t_xc;
  typedef int _g4_t_x;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef hkpBvCompressedMeshShapeGc::Self *_g4_t_v75;
  typedef hkVector4f::Self *_g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef hkAabb::Self *_g4_t_v83;
  typedef uint8_t _g4_t_v84[4];
  typedef hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::CustomGeometryConverter *_g4_t_v85;
  typedef hkVector4f::Self *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::CustomGeometryConverter *_g4_t_v88;
  typedef hkVector4f::Self *_g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::CustomGeometryConverter *_g4_t_v96;
  typedef hkVector4f::Self *_g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef uint8_t _g4_t_v104[32];
  typedef int _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef hkpBvCompressedMeshShapeGc::Self **_g4_t_v137;
  enum : size_t {
    _g4_s0 = 816u,
    _g4_s1 = (12u + sizeof(_g4_t_v51)) > _g4_s0 ? (12u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v52)) > _g4_s1 ? (12u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v53)) > _g4_s2 ? (16u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v54)) > _g4_s3 ? (16u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v55)) > _g4_s4 ? (16u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v56)) > _g4_s5 ? (16u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v57)) > _g4_s6 ? (16u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v58)) > _g4_s7 ? (20u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v59)) > _g4_s8 ? (20u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v60)) > _g4_s9 ? (20u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v61)) > _g4_s10 ? (20u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v62)) > _g4_s11 ? (20u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_PrimitiveData)) > _g4_s12 ? (32u + sizeof(_g4_t_PrimitiveData)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v64)) > _g4_s13 ? (36u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_i)) > _g4_s14 ? (44u + sizeof(_g4_t_i)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v66)) > _g4_s15 ? (68u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v67)) > _g4_s16 ? (72u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v68)) > _g4_s17 ? (76u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_xa)) > _g4_s18 ? (80u + sizeof(_g4_t_xa)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_xb)) > _g4_s19 ? (80u + sizeof(_g4_t_xb)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_xc)) > _g4_s20 ? (80u + sizeof(_g4_t_xc)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_x)) > _g4_s21 ? (80u + sizeof(_g4_t_x)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v73)) > _g4_s22 ? (84u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v74)) > _g4_s23 ? (84u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v75)) > _g4_s24 ? (88u + sizeof(_g4_t_v75)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v76)) > _g4_s25 ? (88u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v77)) > _g4_s26 ? (88u + sizeof(_g4_t_v77)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v78)) > _g4_s27 ? (88u + sizeof(_g4_t_v78)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v79)) > _g4_s28 ? (88u + sizeof(_g4_t_v79)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v80)) > _g4_s29 ? (92u + sizeof(_g4_t_v80)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v81)) > _g4_s30 ? (92u + sizeof(_g4_t_v81)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v82)) > _g4_s31 ? (92u + sizeof(_g4_t_v82)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v83)) > _g4_s32 ? (92u + sizeof(_g4_t_v83)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v84)) > _g4_s33 ? (96u + sizeof(_g4_t_v84)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v85)) > _g4_s34 ? (100u + sizeof(_g4_t_v85)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v86)) > _g4_s35 ? (104u + sizeof(_g4_t_v86)) : _g4_s35,
    _g4_s37 = (108u + sizeof(_g4_t_v87)) > _g4_s36 ? (108u + sizeof(_g4_t_v87)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v88)) > _g4_s37 ? (116u + sizeof(_g4_t_v88)) : _g4_s37,
    _g4_s39 = (120u + sizeof(_g4_t_v89)) > _g4_s38 ? (120u + sizeof(_g4_t_v89)) : _g4_s38,
    _g4_s40 = (124u + sizeof(_g4_t_v90)) > _g4_s39 ? (124u + sizeof(_g4_t_v90)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v91)) > _g4_s40 ? (128u + sizeof(_g4_t_v91)) : _g4_s40,
    _g4_s42 = (132u + sizeof(_g4_t_v92)) > _g4_s41 ? (132u + sizeof(_g4_t_v92)) : _g4_s41,
    _g4_s43 = (136u + sizeof(_g4_t_v93)) > _g4_s42 ? (136u + sizeof(_g4_t_v93)) : _g4_s42,
    _g4_s44 = (140u + sizeof(_g4_t_v94)) > _g4_s43 ? (140u + sizeof(_g4_t_v94)) : _g4_s43,
    _g4_s45 = (144u + sizeof(_g4_t_v95)) > _g4_s44 ? (144u + sizeof(_g4_t_v95)) : _g4_s44,
    _g4_s46 = (148u + sizeof(_g4_t_v96)) > _g4_s45 ? (148u + sizeof(_g4_t_v96)) : _g4_s45,
    _g4_s47 = (152u + sizeof(_g4_t_v97)) > _g4_s46 ? (152u + sizeof(_g4_t_v97)) : _g4_s46,
    _g4_s48 = (156u + sizeof(_g4_t_v98)) > _g4_s47 ? (156u + sizeof(_g4_t_v98)) : _g4_s47,
    _g4_s49 = (160u + sizeof(_g4_t_v99)) > _g4_s48 ? (160u + sizeof(_g4_t_v99)) : _g4_s48,
    _g4_s50 = (164u + sizeof(_g4_t_v100)) > _g4_s49 ? (164u + sizeof(_g4_t_v100)) : _g4_s49,
    _g4_s51 = (168u + sizeof(_g4_t_v101)) > _g4_s50 ? (168u + sizeof(_g4_t_v101)) : _g4_s50,
    _g4_s52 = (172u + sizeof(_g4_t_v102)) > _g4_s51 ? (172u + sizeof(_g4_t_v102)) : _g4_s51,
    _g4_s53 = (176u + sizeof(_g4_t_v103)) > _g4_s52 ? (176u + sizeof(_g4_t_v103)) : _g4_s52,
    _g4_s54 = (180u + sizeof(_g4_t_v104)) > _g4_s53 ? (180u + sizeof(_g4_t_v104)) : _g4_s53,
    _g4_s55 = (212u + sizeof(_g4_t_v105)) > _g4_s54 ? (212u + sizeof(_g4_t_v105)) : _g4_s54,
    _g4_s56 = (216u + sizeof(_g4_t_v106)) > _g4_s55 ? (216u + sizeof(_g4_t_v106)) : _g4_s55,
    _g4_s57 = (220u + sizeof(_g4_t_v107)) > _g4_s56 ? (220u + sizeof(_g4_t_v107)) : _g4_s56,
    _g4_s58 = (224u + sizeof(_g4_t_v108)) > _g4_s57 ? (224u + sizeof(_g4_t_v108)) : _g4_s57,
    _g4_s59 = (228u + sizeof(_g4_t_v109)) > _g4_s58 ? (228u + sizeof(_g4_t_v109)) : _g4_s58,
    _g4_s60 = (232u + sizeof(_g4_t_v110)) > _g4_s59 ? (232u + sizeof(_g4_t_v110)) : _g4_s59,
    _g4_s61 = (236u + sizeof(_g4_t_v111)) > _g4_s60 ? (236u + sizeof(_g4_t_v111)) : _g4_s60,
    _g4_s62 = (240u + sizeof(_g4_t_v112)) > _g4_s61 ? (240u + sizeof(_g4_t_v112)) : _g4_s61,
    _g4_s63 = (244u + sizeof(_g4_t_v113)) > _g4_s62 ? (244u + sizeof(_g4_t_v113)) : _g4_s62,
    _g4_s64 = (248u + sizeof(_g4_t_v114)) > _g4_s63 ? (248u + sizeof(_g4_t_v114)) : _g4_s63,
    _g4_s65 = (252u + sizeof(_g4_t_v115)) > _g4_s64 ? (252u + sizeof(_g4_t_v115)) : _g4_s64,
    _g4_s66 = (256u + sizeof(_g4_t_v116)) > _g4_s65 ? (256u + sizeof(_g4_t_v116)) : _g4_s65,
    _g4_s67 = (260u + sizeof(_g4_t_v117)) > _g4_s66 ? (260u + sizeof(_g4_t_v117)) : _g4_s66,
    _g4_s68 = (264u + sizeof(_g4_t_v118)) > _g4_s67 ? (264u + sizeof(_g4_t_v118)) : _g4_s67,
    _g4_s69 = (268u + sizeof(_g4_t_v119)) > _g4_s68 ? (268u + sizeof(_g4_t_v119)) : _g4_s68,
    _g4_s70 = (272u + sizeof(_g4_t_v120)) > _g4_s69 ? (272u + sizeof(_g4_t_v120)) : _g4_s69,
    _g4_s71 = (276u + sizeof(_g4_t_v121)) > _g4_s70 ? (276u + sizeof(_g4_t_v121)) : _g4_s70,
    _g4_s72 = (280u + sizeof(_g4_t_v122)) > _g4_s71 ? (280u + sizeof(_g4_t_v122)) : _g4_s71,
    _g4_s73 = (284u + sizeof(_g4_t_v123)) > _g4_s72 ? (284u + sizeof(_g4_t_v123)) : _g4_s72,
    _g4_s74 = (288u + sizeof(_g4_t_v124)) > _g4_s73 ? (288u + sizeof(_g4_t_v124)) : _g4_s73,
    _g4_s75 = (292u + sizeof(_g4_t_v125)) > _g4_s74 ? (292u + sizeof(_g4_t_v125)) : _g4_s74,
    _g4_s76 = (296u + sizeof(_g4_t_v126)) > _g4_s75 ? (296u + sizeof(_g4_t_v126)) : _g4_s75,
    _g4_s77 = (300u + sizeof(_g4_t_v127)) > _g4_s76 ? (300u + sizeof(_g4_t_v127)) : _g4_s76,
    _g4_s78 = (304u + sizeof(_g4_t_v128)) > _g4_s77 ? (304u + sizeof(_g4_t_v128)) : _g4_s77,
    _g4_s79 = (308u + sizeof(_g4_t_v129)) > _g4_s78 ? (308u + sizeof(_g4_t_v129)) : _g4_s78,
    _g4_s80 = (312u + sizeof(_g4_t_v130)) > _g4_s79 ? (312u + sizeof(_g4_t_v130)) : _g4_s79,
    _g4_s81 = (316u + sizeof(_g4_t_v131)) > _g4_s80 ? (316u + sizeof(_g4_t_v131)) : _g4_s80,
    _g4_s82 = (320u + sizeof(_g4_t_v132)) > _g4_s81 ? (320u + sizeof(_g4_t_v132)) : _g4_s81,
    _g4_s83 = (324u + sizeof(_g4_t_v133)) > _g4_s82 ? (324u + sizeof(_g4_t_v133)) : _g4_s82,
    _g4_s84 = (328u + sizeof(_g4_t_v134)) > _g4_s83 ? (328u + sizeof(_g4_t_v134)) : _g4_s83,
    _g4_s85 = (332u + sizeof(_g4_t_v135)) > _g4_s84 ? (332u + sizeof(_g4_t_v135)) : _g4_s84,
    _g4_s86 = (336u + sizeof(_g4_t_v136)) > _g4_s85 ? (336u + sizeof(_g4_t_v136)) : _g4_s85,
    _g4_s87 = (732u + sizeof(_g4_t_v137)) > _g4_s86 ? (732u + sizeof(_g4_t_v137)) : _g4_s86
  };
  alignas(16) uint8_t _g4_sf[_g4_s87];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_PrimitiveData &PrimitiveData = *reinterpret_cast<_g4_t_PrimitiveData *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_xa &xa = *reinterpret_cast<_g4_t_xa *>(_g4_sf + 80u);
  _g4_t_xb &xb = *reinterpret_cast<_g4_t_xb *>(_g4_sf + 80u);
  _g4_t_xc &xc = *reinterpret_cast<_g4_t_xc *>(_g4_sf + 80u);
  _g4_t_x &x = *reinterpret_cast<_g4_t_x *>(_g4_sf + 80u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 84u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 88u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 88u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 88u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 92u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 92u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 92u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 96u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 100u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 104u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 108u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 116u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 120u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 124u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 128u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 132u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 136u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 140u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 144u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 148u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 152u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 156u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 160u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 164u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 168u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 172u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 176u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 180u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 212u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 216u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 220u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 224u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 228u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 232u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 236u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 240u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 244u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 248u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 252u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 256u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 260u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 264u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 268u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 272u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 276u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 280u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 284u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 288u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 292u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 296u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 300u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 304u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 308u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 312u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 316u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 320u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 324u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 328u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 332u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 336u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 732u);

  v137 = &self;
  v4 = a2;
  v5 = a3;
  v75 = self;
  v64 = a4;
  PrimitiveData = hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getPrimitiveData(
                    a2,
                    a3);
  hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getPrimitiveAabb(
    v4,
    v5,
    (hkAabb::Self *)v104);
  switch ( *(uint16_t *)(*((uint32_t *)v4 + 21) + 2 * *(uint8_t *)(*((uint32_t *)v4 + 18) + 4 * v5)) & 0xF )
  {
    case 0:
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getCustomPrimitiveVertices(
        v4,
        v5,
        (const hkAabb::Self *)v104,
        (hkVector4f::Self *)&v105,
        4);
      v125 = (float)(v117 - *(float *)&v105) + v113;
      v127 = (float)(v119 - v107) + v115;
      v126 = (float)(v118 - v106) + v114;
      v122 = (float)(v114 - v106) + v110;
      v121 = (float)(v113 - *(float *)&v105) + v109;
      v123 = (float)(v115 - v107) + v111;
      v124 = (float)(v116 - v108) + v112;
      v128 = (float)(v120 - v108) + v116;
      v134 = (float)(v118 - v106) + v122;
      v135 = (float)(v119 - v107) + v123;
      v136 = (float)(v120 - v108) + v124;
      v129 = (float)(v109 - *(float *)&v105) + v117;
      v130 = (float)(v110 - v106) + v118;
      v131 = (float)(v111 - v107) + v119;
      v132 = (float)(v112 - v108) + v120;
      v133 = (float)(v117 - *(float *)&v105) + v121;
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::CustomGeometryConverter::appendVerticesAsConvexHull(
        (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::CustomGeometryConverter *)&v105,
        (const hkVector4f::Self *)&byte_8,
        PrimitiveData,
        (int)(uintptr_t)(v64),
        v61);
      break;
    case 1:
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::CustomGeometryConverter::appendCustomPrimitiveToGeometry(
        v75,
        v4,
        v5,
        v64);
      break;
    case 2:
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getCustomPrimitiveVertices(
        v4,
        v5,
        (const hkAabb::Self *)v104,
        (hkVector4f::Self *)&v100,
        1);
      v83 = (hkAabb::Self *)(*(int16_t *)(*((uint32_t *)v4 + 21) + 2 * *(uint8_t *)(*((uint32_t *)v4 + 18) + 4 * v5) + 4) << 16);
      *(float *)&v96 = 0.0;
      *(float *)&v97 = 0.0;
      v98 = -0.0;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v84, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v96, 144, 16);
      for ( x = 0; x != 12; ++x )
      {
        v44 = 0;
        do
        {
          v50 = v97;
          *(float *)&v105 = (float)x * 0.09090909f;
          v107 = 0.0;
          v106 = (float)v44 * 0.09090909f;
          v108 = 0.0;
          if ( v97 == (hkVector4f::Self *)(LODWORD(v98) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v96,
              &word_10,
              v57);
            v50 = v97;
          }
          v45 = (float *)((char *)v96 + 16 * (uint32_t)(uintptr_t)(v50));
          v97 = (hkVector4f::Self *)((char *)v50 + 1);
          hkGeometryProcessing::octahedronToNormal((hkGeometryProcessing::Self *)&v105, (const hkVector4f::Self *)v45, v52);
          ++v44;
          v46 = *v45 * *(float *)&v83;
          v47 = v45[1] * *(float *)&v83;
          v48 = v45[2] * *(float *)&v83;
          v49 = v45[3] * *(float *)&v83;
          *v45 = v46;
          v45[1] = v47;
          v45[2] = v48;
          v45[3] = v49;
          *v45 = v46 + *(float *)&v100;
          v45[1] = v47 + v101;
          v45[2] = v48 + v102;
          v45[3] = v49 + v103;
        }
        while ( v44 != 12 );
      }
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::CustomGeometryConverter::appendVerticesAsConvexHull(
        v96,
        v97,
        PrimitiveData,
        (int)(uintptr_t)(v64),
        v62);
      *(float *)&v97 = 0.0;
      if ( !__builtin_signbit(v98) )
        (*(void (**)(uint32_t *, hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::CustomGeometryConverter *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v96,
          16 * LODWORD(v98));
      break;
    case 3:
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getCustomPrimitiveVertices(
        v4,
        v5,
        (const hkAabb::Self *)v104,
        (hkVector4f::Self *)&v105,
        2);
      v6 = *(int16_t *)(*((uint32_t *)v4 + 21) + 2 * *(uint8_t *)(*((uint32_t *)v4 + 18) + 4 * v5) + 4);
      *(float *)&v88 = v109 - *(float *)&v105;
      LODWORD(v67) = v6 << 16;
      *(float *)&v89 = v110 - v106;
      v90 = v111 - v107;
      v91 = v112 - v108;
      sub_6B5B70(&v88);
      v92 = 0.0;
      v93 = 0.0;
      v94 = 1.0;
      v95 = 0.0;
      hkQuaternionUtilImpl_float_id_b67eb8::computeShortestRotation(
        (hkQuaternionUtilImpl<float> *)&v92,
        (const hkVector4f::Self *)&v88,
        (const hkVector4f::Self *)&v96,
        v53);
      v85 = nullptr;
      v86 = nullptr;
      v87 = 0x80000000;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v84, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v85, 144, 16);
      for ( i = 0; i != 12; ++i )
      {
        v7 = 0;
        do
        {
          while ( 1 )
          {
            v8 = v86;
            *(float *)&v100 = (float)i * 0.09090909f;
            v102 = 0.0;
            v101 = (float)v7 * 0.09090909f;
            v103 = 0.0;
            if ( v86 == (hkVector4f::Self *)(v87 & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v85,
                &word_10,
                v54);
              v8 = v86;
            }
            v9 = v8;
            v10 = (float *)((char *)v85 + 16 * (uint32_t)(uintptr_t)(v8));
            v86 = (hkVector4f::Self *)((char *)v9 + 1);
            hkGeometryProcessing::octahedronToNormal((hkGeometryProcessing::Self *)&v100, (const hkVector4f::Self *)v10, v51);
            v76 = v97;
            v11 = v99;
            v73 = *v10;
            v12 = (float)(v11 * v11) - 0.5;
            xa = v10[1];
            v13 = (float)((float)(*v10 * *(float *)&v96) + (float)(*(float *)&v97 * xa)) + (float)(v10[2] * v98);
            v80 = (float)(v99 * v13) + (float)(v10[3] * v12);
            v81 = (float)((float)(0.0 * v99) + v80) + (float)((float)(0.0 * v99) + v80);
            v14 = (float)((float)(*v10 * v12) + (float)(*(float *)&v96 * v13))
                + (float)((float)((float)(*(float *)&v97 * v10[2]) - (float)(xa * v98)) * v99);
            v15 = (float)(xa * v12) + (float)(*(float *)&v97 * v13);
            v16 = v98 * v13;
            v17 = xa * *(float *)&v96;
            v18 = (float)(v12 * v10[2]) + v16;
            v19 = (float)(v14 + v14) * v67;
            v20 = (float)((float)(*v10 * v98) - (float)(*(float *)&v96 * v10[2])) * v99;
            *v10 = v19;
            v21 = (float)((float)(v15 + v20) + (float)(v15 + v20)) * v67;
            v10[1] = v21;
            v22 = (float)((float)(v18 + (float)((float)(v17 - (float)(v73 * *(float *)&v76)) * v11))
                        + (float)(v18 + (float)((float)(v17 - (float)(v73 * *(float *)&v76)) * v11)))
                * v67;
            v10[2] = v22;
            v23 = v81 * v67;
            v10[3] = v81 * v67;
g4_m128_raw(v24) = (unsigned int)(uintptr_t)(v88);
            *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)(*(float *)&v88 * v19) + (float)(*(float *)&v89 * v21))
                                    + (float)(v90 * v22);
            if ( _mm_cvtsi128_si32(v24) < 0 )
              break;
            ++v7;
            *v10 = v19 + v109;
            v10[1] = v21 + v110;
            v10[2] = v22 + v111;
            v10[3] = v112 + v23;
            if ( v7 == 12 )
              goto LABEL_9;
          }
          ++v7;
          *v10 = v19 + *(float *)&v105;
          v10[1] = v21 + v106;
          v10[2] = v22 + v107;
          v10[3] = v23 + v108;
        }
        while ( v7 != 12 );
LABEL_9:
        ;
      }
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::CustomGeometryConverter::appendVerticesAsConvexHull(
        v85,
        v86,
        PrimitiveData,
        (int)(uintptr_t)(v64),
        v59);
      v86 = nullptr;
      if ( v87 >= 0 )
        (*(void (**)(uint32_t *, hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::CustomGeometryConverter *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v85,
          16 * v87);
      break;
    case 4:
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getCustomPrimitiveVertices(
        v4,
        v5,
        (const hkAabb::Self *)v104,
        (hkVector4f::Self *)&v105,
        2);
      v25 = *(int16_t *)(*((uint32_t *)v4 + 21) + 2 * *(uint8_t *)(*((uint32_t *)v4 + 18) + 4 * v5) + 6);
      v92 = v109 - *(float *)&v105;
      v68 = (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::CustomGeometryConverter *)(v25 << 16);
      v93 = v110 - v106;
      v94 = v111 - v107;
      v95 = v112 - v108;
      sub_6B5B70(&v92);
      *(float *)&v96 = 0.0;
      *(float *)&v97 = 0.0;
      v98 = 1.0;
      v99 = 0.0;
      hkQuaternionUtilImpl_float_id_b67eb8::computeShortestRotation(
        (hkQuaternionUtilImpl<float> *)&v96,
        (const hkVector4f::Self *)&v92,
        (const hkVector4f::Self *)&v100,
        v55);
      *(float *)&v88 = 0.0;
      *(float *)&v89 = 0.0;
      v90 = -0.0;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v84, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v88, 24, 16);
      v26 = 1.0;
      v82 = *(float *)&v68 * 0.0;
      v27 = 0;
      v28 = 0.0;
      while ( 1 )
      {
        v33 = v89;
        v34 = v28 * *(float *)&v68;
        v35 = (float)(v103 * v103) - 0.5;
        v79 = v26 * *(float *)&v68;
        v74 = v82 * v35;
        v36 = (float)((float)(*(float *)&v100 * (float)(v26 * *(float *)&v68)) + (float)(v101 * v34))
            + (float)(v82 * v102);
        v37 = (float)((float)((float)(v26 * *(float *)&v68) * v35) + (float)(*(float *)&v100 * v36))
            + (float)((float)((float)(v101 * v82) - (float)(v34 * v102)) * v103);
        v38 = v37 + v37;
        v39 = (float)((float)(v35 * v34) + (float)(v101 * v36))
            + (float)((float)((float)(v79 * v102) - (float)(v82 * *(float *)&v100)) * v103);
        v40 = v39 + v39;
        v41 = (float)((float)(v34 * *(float *)&v100) - (float)(v79 * v101)) * v103;
        v42 = (float)((float)((float)(v102 * v36) + v74) + v41) + (float)((float)((float)(v102 * v36) + v74) + v41);
        v43 = (float)((float)((float)(v36 * v103) + v74) + (float)(v103 * 0.0))
            + (float)((float)((float)(v36 * v103) + v74) + (float)(v103 * 0.0));
        if ( v89 == (hkVector4f::Self *)(LODWORD(v90) & 0x3FFFFFFF) )
        {
          v66 = (float)((float)((float)(v36 * v103) + v74) + (float)(v103 * 0.0))
              + (float)((float)((float)(v36 * v103) + v74) + (float)(v103 * 0.0));
          xc = (float)((float)((float)(v102 * v36) + v74) + v41) + (float)((float)((float)(v102 * v36) + v74) + v41);
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v88,
            &word_10,
            v56);
          v43 = v66;
          v33 = v89;
          v42 = xc;
        }
        v29 = (hkVector4f::Self *)((char *)v33 + 1);
        v30 = (float *)((char *)v88 + 16 * (uint32_t)(uintptr_t)(v33));
        v89 = v29;
        *v30 = *(float *)&v105 + v38;
        v30[1] = v106 + v40;
        v30[2] = v107 + v42;
        v30[3] = v108 + v43;
        v31 = v89;
        if ( v89 == (hkVector4f::Self *)(LODWORD(v90) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v88,
            &word_10,
            v56);
          v31 = v89;
        }
        v89 = (hkVector4f::Self *)((char *)v31 + 1);
        v32 = (float *)((char *)v88 + 16 * (uint32_t)(uintptr_t)(v31));
        ++v27;
        *v32 = v38 + v109;
        v32[1] = v40 + v110;
        v32[2] = v42 + v111;
        v32[3] = v43 + v112;
        if ( v27 == 12 )
          break;
        xb = (float)v27 * 0.5235988f;
        v77 = sinf(xb);
        v28 = v77;
        v78 = cosf(xb);
        v26 = v78;
      }
      hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::CustomGeometryConverter::appendVerticesAsConvexHull(
        v88,
        v89,
        PrimitiveData,
        (int)(uintptr_t)(v64),
        v60);
      *(float *)&v89 = 0.0;
      if ( !__builtin_signbit(v90) )
        (*(void (**)(uint32_t *, hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::CustomGeometryConverter *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v88,
          16 * LODWORD(v90));
      break;
    default:
      hkErrStream::Construct((hkErrStream::Self *)&v100, (hkString::Self *)&v105, 512);
      hkOstream::opShl((int)(uintptr_t)(&v100), (hkString::Self *)"Not implemented");
      if ( hkError::messageError(
             (hkError::Self *)0x93D510B9,
             (int)(uintptr_t)(&v105),
             "Collide/BvCompressedMesh/hkpBvCompressedMeshShape.cpp",
             (const char *)&dword_A4 + 1,
             v58) != 0 )
        __builtin_debugtrap();
      hkErrStream::Destroy((hkErrStream::Self *)&v100);
      break;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::convertToGeometry  (binary VA: 0x17c6160)
// Original: hkpBvCompressedMeshShape::convertToGeometry
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShape::convertToGeometry(hkpBvCompressedMeshShape::Self *self, hkGeometry::Self *a2, const hkArray<unsigned int, hkContainerHeapAllocator::Self> *a3, const hkArray<unsigned int, hkContainerHeapAllocator::Self> *a4)
{
  int *v4;
  hkpBvCompressedMeshShape::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int i;
  int v14;
  int savedregs;
  typedef char *_g4_t_v16;
  typedef hkpBvCompressedMeshShape::Self *_g4_t_v17;
  typedef uint8_t _g4_t_v18[4];
  typedef uint32_t _g4_t_v19[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);

  v19[6] = (uint32_t)(uintptr_t)(&self);
  v4 = (int *)a2;
  v5 = self;
  v17 = self;
  v19[2] = (uint32_t)(uintptr_t)(a4);
  v19[0] = ((uint32_t)(uintptr_t)&off_20A0C60);
  v19[1] = (uint32_t)(uintptr_t)(a3);
  v16 = (char *)self + 80;
  hkGeometry::clear(a2);
  v6 = *((uint32_t *)v5 + 32);
  v7 = v6 + v4[6];
  v8 = v4[7] & 0x3FFFFFFF;
  if ( v7 > v8 )
  {
    v9 = 2 * v8;
    if ( v9 < v7 )
      v9 = v6 + v4[6];
    hkArrayUtil::reserve((hkArrayUtil::Self *)v18, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v4 + 5, v9, 16);
    v6 = *((uint32_t *)v17 + 32);
  }
  v10 = v4[3] + 3 * v6;
  v11 = v4[4] & 0x3FFFFFFF;
  if ( v10 > v11 )
  {
    v12 = 2 * v11;
    if ( v10 >= v12 )
      v12 = v10;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v18, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v4 + 2, v12, 16);
  }
  for ( i = 0;
        i < *((uint32_t *)v17 + 36);
        sub_17C5B60(
          (int)(uintptr_t)(v16),
          v14,
          (int)(uintptr_t)(dword_20B9FF4),
          (int)(uintptr_t)(&savedregs),
          i,
          (int)(uintptr_t)(v4),
          v4,
          (hkpBvCompressedMeshShapeGc::Self *)v19) )
  {
    v14 = i++;
  }
  return hkGeometryUtils::weldVertices((hkGeometryUtils::Self *)v4, nullptr);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::getContainer  (binary VA: 0x17e1ec0)
// Original: hkpBvCompressedMeshShape::getContainer
// ----------------------------------------------------------------------------
char * hkpBvCompressedMeshShape::getContainer(hkpBvCompressedMeshShape::Self *self)
{
  return (char *)self + 20;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::Destroy  (binary VA: 0x17e2ff0)
// Original: hkpBvCompressedMeshShape::~hkpBvCompressedMeshShape
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshShape::Destroy(hkpBvCompressedMeshShape::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
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
  hkStringPtr::Self *v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;

  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A0F3C);
  v1 = *((uint32_t *)self + 52);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0EC8);
  *((uint32_t *)self + 51) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 50),
      8 * v1);
  v2 = *((uint32_t *)self + 49);
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 52) = 0x80000000;
  *((uint32_t *)self + 48) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 47),
      8 * v2);
  v3 = *((uint32_t *)self + 46);
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 49) = 0x80000000;
  *((uint32_t *)self + 45) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 44),
      4 * v3);
  v4 = *((uint32_t *)self + 43);
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 46) = 0x80000000;
  *((uint32_t *)self + 42) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 41),
      2 * (v4 & 0x3FFFFFFF));
  v5 = *((uint32_t *)self + 40);
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 43) = 0x80000000;
  *((uint32_t *)self + 39) = 0;
  if ( v5 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 38),
      4 * v5);
  v6 = *((uint32_t *)self + 36);
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 40) = 0x80000000;
  v7 = v6 - 1;
  if ( v6 - 1 >= 0 )
  {
    v8 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    v9 = 96 * v6 + *((uint32_t *)self + 35);
    do
    {
      v10 = *(uint32_t *)(v9 - 88);
      *(uint32_t *)(v9 - 92) = 0;
      if ( v10 >= 0 )
      {
        v21 = v8;
        G4_VCALL<void>(v8, 20, *(uint32_t *)(v9 - 96), 4 * v10);
        v8 = v21;
      }
      --v7;
      *(uint32_t *)(v9 - 96) = 0;
      *(uint32_t *)(v9 - 88) = 0x80000000;
      v9 -= 96;
    }
    while ( v7 != -1 );
  }
  v11 = *((uint32_t *)self + 37);
  *((uint32_t *)self + 36) = 0;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 35),
      96 * v11);
  v12 = *((uint32_t *)self + 22);
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 37) = 0x80000000;
  *((uint32_t *)self + 21) = 0;
  if ( v12 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 20),
      5 * (v12 & 0x3FFFFFFF));
  v13 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 20) = 0;
  v14 = v13;
  v15 = *((uint32_t *)self + 14);
  v16 = v14 - 1;
  *((uint32_t *)self + 22) = 0x80000000;
  v17 = (hkStringPtr::Self *)(v15 + 4 * v16);
  if ( v16 >= 0 )
  {
    do
    {
      --v16;
      hkStringPtr::Destroy(v17);
      v17 = (hkStringPtr::Self *)((char *)v17 - 4);
    }
    while ( v16 != -1 );
  }
  v18 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 15) = 0;
  if ( v18 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      4 * v18);
  v19 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v19);
  v20 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v20 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v20);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::Destroy_ea17e3390  (binary VA: 0x17e3390)
// Original: hkpBvCompressedMeshShape::~hkpBvCompressedMeshShape
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshShape::Destroy_ea17e3390(hkpBvCompressedMeshShape::Self *self)
{
  int v1;
  int v2;

  hkpBvCompressedMeshShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 224;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}



// ============================================================================
// Address:   0x17e3480 (size: 77 bytes)
// Symbol:    _ZN24hkpBvCompressedMeshShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpBvCompressedMeshShape::hkpBvCompressedMeshShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN24hkpBvCompressedMeshShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpBvCompressedMeshShape::hkpBvCompressedMeshShape(
        int a1,
        int a2))(hkpBvCompressedMeshShape::Self * self)
{
  void (**result)(hkpBvCompressedMeshShape::Self *);

  hkpBvTreeShape::hkpBvTreeShape(a1, a2);
  result = (void (**)(hkpBvCompressedMeshShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A0F3C));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A0EC8);
  *(uint32_t *)(a1 + 20) = ((uint32_t)(uintptr_t)&off_20A0F3C);
  if ( a2 != 0 )
  {
    *(uint8_t *)(a1 + 8) = 17;
    *(uint8_t *)(a1 + 16) = 3;
  }
  return result;
}


// ============================================================================
// Address:   0x17e7570 (size: 5405 bytes)
// Symbol:    _ZNK34hkpBvCompressedMeshShape_Internals16GeometryProvider23getCustomPrimitiveInfosEiRN22hkcdStaticMeshTreeBase16BuildCustomInfosE
// Demangled: hkpBvCompressedMeshShape_Internals::GeometryProvider::getCustomPrimitiveInfos(int,hkcdStaticMeshTreeBase::BuildCustomInfos &)const
// ============================================================================
// bad sp value at call has been detected, the output may be wrong!
void (**hkpBvCompressedMeshShape_Internals::GeometryProvider::getCustomPrimitiveInfos(
        long double a1,
        int a2,
        hkpCylinderShape::Self *a3,
        uint32_t *a4))(hkpSingleShapeContainer::Self * self)
{
  uint32_t *v4;
  float v5; // xmm7_4
  uint8_t v6;
  char *v7;
  __m128i v8; // xmm6
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  void (**result)(hkpSingleShapeContainer::Self *);
  int v14;
  int32_t v15; // kr00_4
  int32_t v16;
  int32_t v17; // ett
  __m128i v18; // xmm2
  int v19;
  int v20;
  int v21;
  int v22;
  hkAabb::Self *v23;
  float *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  float *v29;
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm4_4
  float v37; // xmm0_4
  float *v38;
  bool v39; // cc
  int v40;
  hkAabb::Self *v41;
  float *v42;
  int v43;
  hkpCylinderShape::Self *v44;
  uint32_t *v45;
  int v46;
  int v47;
  int v48;
  float *v49;
  float v50; // xmm6_4
  float v51; // xmm5_4
  float v52; // xmm7_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm1_4
  float v56; // xmm4_4
  float v57; // xmm0_4
  float *v58;
  int v59;
  hkAabb::Self *v60;
  float *v61;
  float v62; // xmm7_4
  float *v63;
  float v64; // xmm6_4
  float v65; // xmm5_4
  int v66;
  float v67; // xmm4_4
  float v68; // xmm3_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm0_4
  unsigned int v72;
  int v73;
  int v74;
  uint32_t *v75;
  uint32_t *v76;
  uint32_t *v77;
  uint32_t *v78;
  int v79;
  uint32_t *v80;
  uint32_t *v81;
  int v82;
  hkpCylinderShape::Self *v83;
  uint32_t *v84;
  int v85;
  float *v86;
  float v87; // xmm6_4
  float v88; // xmm5_4
  float v89; // xmm7_4
  float v90; // xmm2_4
  float v91; // xmm1_4
  float v92; // xmm1_4
  float v93; // xmm4_4
  float v94; // xmm0_4
  int address;
  hkAabb::Self *v96;
  hkAabb::Self *v97;
  int v98;
  float *v99;
  float v100; // xmm0_4
  float *v101;
  int v102;
  uint32_t *v103;
  int v104;
  uint32_t *v105;
  int savedregs;
  typedef float _g4_t_v106;
  typedef hkpCylinderShape::Self *_g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef int _g4_t_v112;
  typedef float _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef hkpCylinderShape::Self *_g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef hkpCylinderShape::Self *_g4_t_v120;
  typedef hkpCylinderShape::Self *_g4_t_v121;
  typedef float _g4_t_v122;
  typedef hkpCylinderShape::Self *_g4_t_v123;
  typedef hkpCylinderShape::Self *_g4_t_v124;
  typedef float _g4_t_v125;
  typedef hkpCylinderShape::Self *_g4_t_v126;
  typedef hkpCylinderShape::Self *_g4_t_v127;
  typedef hkpCylinderShape::Self *_g4_t_v128;
  typedef hkpCylinderShape::Self *_g4_t_v129;
  typedef float _g4_t_v130;
  typedef int _g4_t_v131;
  typedef char _g4_t_v132[4];
  typedef int _g4_t_v133[3];
  typedef float _g4_t_v134;
  typedef uint16_t _g4_t_v135[8];
  typedef float _g4_t_v136[12];
  typedef uint32_t _g4_t_v137[4];
  typedef float _g4_t_v138;
  typedef void (**_g4_t_v139)(hkpSingleShapeContainer::Self *);
  typedef int _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  typedef float _g4_t_v153;
  typedef float _g4_t_v154;
  typedef float _g4_t_v155;
  typedef float _g4_t_v156;
  typedef uint8_t _g4_t_v157[48];
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef char _g4_t_v174;
  typedef hkArrayUtil::Self *_g4_t_v175;
  typedef int _g4_t_v176;
  enum : size_t {
    _g4_s0 = 832u,
    _g4_s1 = (0u + sizeof(_g4_t_v106)) > _g4_s0 ? (0u + sizeof(_g4_t_v106)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v107)) > _g4_s1 ? (8u + sizeof(_g4_t_v107)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v108)) > _g4_s2 ? (16u + sizeof(_g4_t_v108)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v109)) > _g4_s3 ? (20u + sizeof(_g4_t_v109)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v110)) > _g4_s4 ? (20u + sizeof(_g4_t_v110)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v111)) > _g4_s5 ? (20u + sizeof(_g4_t_v111)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v112)) > _g4_s6 ? (20u + sizeof(_g4_t_v112)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v113)) > _g4_s7 ? (20u + sizeof(_g4_t_v113)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v114)) > _g4_s8 ? (24u + sizeof(_g4_t_v114)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v115)) > _g4_s9 ? (24u + sizeof(_g4_t_v115)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v116)) > _g4_s10 ? (28u + sizeof(_g4_t_v116)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v117)) > _g4_s11 ? (28u + sizeof(_g4_t_v117)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v118)) > _g4_s12 ? (28u + sizeof(_g4_t_v118)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v119)) > _g4_s13 ? (28u + sizeof(_g4_t_v119)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v120)) > _g4_s14 ? (28u + sizeof(_g4_t_v120)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v121)) > _g4_s15 ? (32u + sizeof(_g4_t_v121)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v122)) > _g4_s16 ? (32u + sizeof(_g4_t_v122)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v123)) > _g4_s17 ? (32u + sizeof(_g4_t_v123)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v124)) > _g4_s18 ? (32u + sizeof(_g4_t_v124)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v125)) > _g4_s19 ? (32u + sizeof(_g4_t_v125)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v126)) > _g4_s20 ? (32u + sizeof(_g4_t_v126)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v127)) > _g4_s21 ? (32u + sizeof(_g4_t_v127)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v128)) > _g4_s22 ? (32u + sizeof(_g4_t_v128)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v129)) > _g4_s23 ? (32u + sizeof(_g4_t_v129)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v130)) > _g4_s24 ? (32u + sizeof(_g4_t_v130)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_v131)) > _g4_s25 ? (36u + sizeof(_g4_t_v131)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v132)) > _g4_s26 ? (40u + sizeof(_g4_t_v132)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v133)) > _g4_s27 ? (44u + sizeof(_g4_t_v133)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v134)) > _g4_s28 ? (56u + sizeof(_g4_t_v134)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v135)) > _g4_s29 ? (60u + sizeof(_g4_t_v135)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v136)) > _g4_s30 ? (76u + sizeof(_g4_t_v136)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v137)) > _g4_s31 ? (124u + sizeof(_g4_t_v137)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v138)) > _g4_s32 ? (140u + sizeof(_g4_t_v138)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v139)) > _g4_s33 ? (144u + sizeof(_g4_t_v139)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v140)) > _g4_s34 ? (148u + sizeof(_g4_t_v140)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v141)) > _g4_s35 ? (156u + sizeof(_g4_t_v141)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v142)) > _g4_s36 ? (160u + sizeof(_g4_t_v142)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v143)) > _g4_s37 ? (164u + sizeof(_g4_t_v143)) : _g4_s37,
    _g4_s39 = (168u + sizeof(_g4_t_v144)) > _g4_s38 ? (168u + sizeof(_g4_t_v144)) : _g4_s38,
    _g4_s40 = (172u + sizeof(_g4_t_v145)) > _g4_s39 ? (172u + sizeof(_g4_t_v145)) : _g4_s39,
    _g4_s41 = (176u + sizeof(_g4_t_v146)) > _g4_s40 ? (176u + sizeof(_g4_t_v146)) : _g4_s40,
    _g4_s42 = (180u + sizeof(_g4_t_v147)) > _g4_s41 ? (180u + sizeof(_g4_t_v147)) : _g4_s41,
    _g4_s43 = (184u + sizeof(_g4_t_v148)) > _g4_s42 ? (184u + sizeof(_g4_t_v148)) : _g4_s42,
    _g4_s44 = (188u + sizeof(_g4_t_v149)) > _g4_s43 ? (188u + sizeof(_g4_t_v149)) : _g4_s43,
    _g4_s45 = (192u + sizeof(_g4_t_v150)) > _g4_s44 ? (192u + sizeof(_g4_t_v150)) : _g4_s44,
    _g4_s46 = (196u + sizeof(_g4_t_v151)) > _g4_s45 ? (196u + sizeof(_g4_t_v151)) : _g4_s45,
    _g4_s47 = (200u + sizeof(_g4_t_v152)) > _g4_s46 ? (200u + sizeof(_g4_t_v152)) : _g4_s46,
    _g4_s48 = (204u + sizeof(_g4_t_v153)) > _g4_s47 ? (204u + sizeof(_g4_t_v153)) : _g4_s47,
    _g4_s49 = (208u + sizeof(_g4_t_v154)) > _g4_s48 ? (208u + sizeof(_g4_t_v154)) : _g4_s48,
    _g4_s50 = (212u + sizeof(_g4_t_v155)) > _g4_s49 ? (212u + sizeof(_g4_t_v155)) : _g4_s49,
    _g4_s51 = (216u + sizeof(_g4_t_v156)) > _g4_s50 ? (216u + sizeof(_g4_t_v156)) : _g4_s50,
    _g4_s52 = (220u + sizeof(_g4_t_v157)) > _g4_s51 ? (220u + sizeof(_g4_t_v157)) : _g4_s51,
    _g4_s53 = (268u + sizeof(_g4_t_v158)) > _g4_s52 ? (268u + sizeof(_g4_t_v158)) : _g4_s52,
    _g4_s54 = (272u + sizeof(_g4_t_v159)) > _g4_s53 ? (272u + sizeof(_g4_t_v159)) : _g4_s53,
    _g4_s55 = (276u + sizeof(_g4_t_v160)) > _g4_s54 ? (276u + sizeof(_g4_t_v160)) : _g4_s54,
    _g4_s56 = (280u + sizeof(_g4_t_v161)) > _g4_s55 ? (280u + sizeof(_g4_t_v161)) : _g4_s55,
    _g4_s57 = (300u + sizeof(_g4_t_v162)) > _g4_s56 ? (300u + sizeof(_g4_t_v162)) : _g4_s56,
    _g4_s58 = (304u + sizeof(_g4_t_v163)) > _g4_s57 ? (304u + sizeof(_g4_t_v163)) : _g4_s57,
    _g4_s59 = (308u + sizeof(_g4_t_v164)) > _g4_s58 ? (308u + sizeof(_g4_t_v164)) : _g4_s58,
    _g4_s60 = (312u + sizeof(_g4_t_v165)) > _g4_s59 ? (312u + sizeof(_g4_t_v165)) : _g4_s59,
    _g4_s61 = (316u + sizeof(_g4_t_v166)) > _g4_s60 ? (316u + sizeof(_g4_t_v166)) : _g4_s60,
    _g4_s62 = (320u + sizeof(_g4_t_v167)) > _g4_s61 ? (320u + sizeof(_g4_t_v167)) : _g4_s61,
    _g4_s63 = (324u + sizeof(_g4_t_v168)) > _g4_s62 ? (324u + sizeof(_g4_t_v168)) : _g4_s62,
    _g4_s64 = (328u + sizeof(_g4_t_v169)) > _g4_s63 ? (328u + sizeof(_g4_t_v169)) : _g4_s63,
    _g4_s65 = (332u + sizeof(_g4_t_v170)) > _g4_s64 ? (332u + sizeof(_g4_t_v170)) : _g4_s64,
    _g4_s66 = (336u + sizeof(_g4_t_v171)) > _g4_s65 ? (336u + sizeof(_g4_t_v171)) : _g4_s65,
    _g4_s67 = (340u + sizeof(_g4_t_v172)) > _g4_s66 ? (340u + sizeof(_g4_t_v172)) : _g4_s66,
    _g4_s68 = (344u + sizeof(_g4_t_v173)) > _g4_s67 ? (344u + sizeof(_g4_t_v173)) : _g4_s67,
    _g4_s69 = (348u + sizeof(_g4_t_v174)) > _g4_s68 ? (348u + sizeof(_g4_t_v174)) : _g4_s68,
    _g4_s70 = (740u + sizeof(_g4_t_v175)) > _g4_s69 ? (740u + sizeof(_g4_t_v175)) : _g4_s69,
    _g4_s71 = (752u + sizeof(_g4_t_v176)) > _g4_s70 ? (752u + sizeof(_g4_t_v176)) : _g4_s70
  };
  alignas(16) uint8_t _g4_sf[_g4_s71];
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 0u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 8u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 16u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 20u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 20u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 20u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 20u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 20u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 24u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 24u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 28u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 28u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 28u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 28u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 28u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 32u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 32u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 32u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 32u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 32u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 32u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 32u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 32u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 32u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 32u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 36u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 40u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 44u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 56u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 60u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 76u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 124u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 140u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 144u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 148u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 156u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 160u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 164u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 168u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 172u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 176u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 180u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 184u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 188u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 192u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 196u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 200u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 204u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 208u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 212u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 216u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 220u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 268u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 272u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 276u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 280u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 300u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 304u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 308u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 312u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 316u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 320u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 324u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 328u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 332u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 336u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 340u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 344u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 348u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 740u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 752u);

  v175 = (hkArrayUtil::Self *)&a2;
  v131 = a2;
  v121 = a3;
  v4 = a4;
  (*(void (**)(uint32_t, hkpCylinderShape::Self *, int *, float *))(**(uint32_t **)(a2 + 4) + 40))(
    *(uint32_t *)(a2 + 4),
    a3,
    v133,
    v136);
  if ( *(float *)(*(uint32_t *)(v131 + 4) + 16) >= 3.40282e38f )
  {
    v4[15] = 1;
  }
  else
  {
    v4[15] = 3;
    v4[14] = *(uint32_t *)(*(uint32_t *)(v131 + 4) + 16);
  }
  hkpConvexTransformShape::Construct((hkpConvexTransformShape::Self *)v137, v133[0], (hkQsTransformf::Self *)v136, 1);
  v5 = v138;
  v134 = v138;
  v116 = (hkpCylinderShape::Self *)v133[0];
  v6 = *(uint8_t *)(v133[0] + 8);
  v7 = (char *)v6;
  if ( v6 == 1 || v6 == 4 || v138 != *(float *)(*(uint32_t *)(v131 + 4) + 8) || v6 == 0 )
  {
g4_m128_raw(v8) = 0x3F808000u;
    v9 = v4[13];
    *(float *)g4_m128_ptr<int32_t>(v8) = 1.0039062f * v138;
    v4[13] = v9 + 1;
    *((uint16_t *)v4 + v9 + 22) = (unsigned int)_mm_cvtsi128_si32(v8) >> 16;
  }
  switch ( v6 )
  {
    case 0u:
      v10 = 4 * (uint32_t)(uintptr_t)(v121);
      if ( *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) == 0 )
      {
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v96 = (hkAabb::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)address + 44),
                          48);
        *((uint32_t *)v96 + 8) = 0;
        *((uint32_t *)v96 + 9) = 0;
        *((uint32_t *)v96 + 10) = 0x80000000;
        v97 = v96;
        hkAabb::setEmpty(v96);
        *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) = (uint32_t)(uintptr_t)(v97);
        v98 = *((uint32_t *)v97 + 9);
        v10 = 4 * (uint32_t)(uintptr_t)(v121);
        if ( v98 == (*((uint32_t *)v97 + 10) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkAabb::Self *)((char *)v97 + 32),
            &word_10,
            v176);
          v98 = *((uint32_t *)v97 + 9);
          v10 = 4 * (uint32_t)(uintptr_t)(v121);
        }
        v99 = (float *)(*((uint32_t *)v97 + 8) + 16 * v98);
        *v99 = v136[0];
        v100 = v134;
        v99[1] = v136[1];
        v99[2] = v136[2];
        v99[3] = v136[3];
        ++*((uint32_t *)v97 + 9);
        v101 = *((float **)v97 + 8);
        *(float *)v97 = *v101 - v100;
        *((float *)v97 + 1) = v101[1] - v100;
        *((float *)v97 + 2) = v101[2] - v100;
        *((float *)v97 + 3) = v101[3] - v100;
        *((float *)v97 + 4) = *v101 + v100;
        *((float *)v97 + 5) = v101[1] + v100;
        *((float *)v97 + 6) = v101[2] + v100;
        *((float *)v97 + 7) = v100 + v101[3];
      }
      v4[9] = 2;
      goto LABEL_13;
    case 1u:
      hkpCylinderShape::getCylinderRadius(v116);
      v109 = a1;
      v10 = 4 * (uint32_t)(uintptr_t)(v121);
      v108 = fabs(v136[8]) * v109;
      if ( *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) != 0 )
        goto LABEL_22;
      v112 = 4 * (uint32_t)(uintptr_t)(v121);
      v79 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v80 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v79 + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)v79 + 44),
                        48);
      v80[8] = 0;
      v80[9] = 0;
      v80[10] = 0x80000000;
      v81 = v80;
      hkAabb::setEmpty((hkAabb::Self *)v80);
      *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) = (uint32_t)(uintptr_t)(v81);
      v129 = (hkpCylinderShape::Self *)(v81[9] + 2);
      v82 = v81[10] & 0x3FFFFFFF;
      v83 = (hkpCylinderShape::Self *)v112;
      if ( (int)(uintptr_t)(v129) > v82 )
      {
        v104 = 2 * v82;
        savedregs = 16;
        v175 = (hkArrayUtil::Self *)v132;
        if ( v104 < (int)(uintptr_t)(v129) )
          v104 = (int)(uintptr_t)(v129);
        hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v81 + 8, v104, savedregs);
        v105 = (uint32_t *)(v81[8] + 16 * v81[9]);
        *v105 = *((uint32_t *)v116 + 8);
        v105[1] = *((uint32_t *)v116 + 9);
        v105[2] = *((uint32_t *)v116 + 10);
        v105[3] = *((uint32_t *)v116 + 11);
        v105[4] = *((uint32_t *)v116 + 12);
        v105[5] = *((uint32_t *)v116 + 13);
        v105[6] = *((uint32_t *)v116 + 14);
        v105[7] = *((uint32_t *)v116 + 15);
        v81[9] = (uint32_t)(uintptr_t)(v129);
        v83 = (hkpCylinderShape::Self *)v112;
      }
      else
      {
        v84 = (uint32_t *)(v81[8] + 16 * v81[9]);
        *v84 = *((uint32_t *)v116 + 8);
        v84[1] = *((uint32_t *)v116 + 9);
        v84[2] = *((uint32_t *)v116 + 10);
        v84[3] = *((uint32_t *)v116 + 11);
        v84[4] = *((uint32_t *)v116 + 12);
        v84[5] = *((uint32_t *)v116 + 13);
        v84[6] = *((uint32_t *)v116 + 14);
        v84[7] = *((uint32_t *)v116 + 15);
        v81[9] = (uint32_t)(uintptr_t)(v129);
        if ( (int)(uintptr_t)(v129) <= 0 )
          goto LABEL_53;
      }
      v85 = 0;
      v106 = v5;
      do
      {
        v86 = (float *)(v81[8] + 16 * v85++);
        v113 = v144;
        v87 = (float)(v150 * v86[1]) + (float)((float)(v86[1] - v152) * v154);
        v88 = (float)(v151 * v86[2]) + (float)((float)(v86[2] - v156) * v155);
        v130 = (float)(v148 * v148) - 0.5;
        v119 = (float)((float)(*v86 - v144) * v153) + (float)(v149 * *v86);
        v89 = (float)((float)(v145 * v119) + (float)(v146 * v87)) + (float)(v147 * v88);
        v90 = (float)((float)(v119 * v130) + (float)(v145 * v89))
            + (float)((float)((float)(v146 * v88) - (float)(v147 * v87)) * v148);
        v91 = (float)((float)(v130 * v87) + (float)(v146 * v89))
            + (float)((float)((float)(v147 * v119) - (float)(v145 * v88)) * v148);
        v92 = (float)(v91 + v91) + v142;
        v93 = (float)((float)((float)((float)(v130 * v88) + (float)(v147 * v89))
                            + (float)((float)((float)(v87 * v145) - (float)(v119 * v146)) * v148))
                    + (float)((float)((float)(v130 * v88) + (float)(v147 * v89))
                            + (float)((float)((float)(v87 * v145) - (float)(v119 * v146)) * v148)))
            + v143;
        v94 = (float)((float)((float)((float)(v86[3] * v152) + (float)((float)(v86[3] - 0.0) * v156)) * v130)
                    + (float)(v148 * v89))
            + (float)(0.0 * v148);
        *v86 = (float)(v90 + v90) + v141;
        v86[1] = v92;
        v86[2] = v93;
        v86[3] = (float)(v94 + v94) + v113;
      }
      while ( v81[9] > v85 );
      v5 = v106;
LABEL_53:
      v120 = v83;
      hkpCylinderShape::Construct(
        (hkpCylinderShape::Self *)v157,
        (const hkVector4f::Self *)v81[8],
        (const hkVector4f::Self *)(v81[8] + 16),
        v108,
        v5);
      hkpCylinderShape::getAabb((hkpCylinderShape::Self *)v157, (const hkTransformf::Self *)&unk_1D12FD0, 0.0, (hkAabb::Self *)v81);
      v10 = (int)(uintptr_t)(v120);
LABEL_22:
g4_m128_raw(v18) = LODWORD(v108);
      v19 = v4[13];
      *(float *)g4_m128_ptr<int32_t>(v18) = v108 * 1.0039062f;
      v4[13] = v19 + 1;
      *((uint16_t *)v4 + v19 + 22) = (unsigned int)_mm_cvtsi128_si32(v18) >> 16;
      v4[9] = 4;
LABEL_13:
      v11 = *(uint32_t **)(*(uint32_t *)(v131 + 8) + v10);
      *v4 = *v11;
      v4[1] = v11[1];
      v4[2] = v11[2];
      v4[3] = v11[3];
      v4[4] = v11[4];
      v4[5] = v11[5];
      v4[6] = v11[6];
      v4[7] = v11[7];
      v12 = v140;
      v4[8] = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v131 + 8) + v10) + 36);
      v137[0] = ((uint32_t)(uintptr_t)&off_2099D88);
      result = (void (**)(hkpSingleShapeContainer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20994E8));
      v139 = (void (**)(hkpSingleShapeContainer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20994E8));
      if ( v12 != 0 && *(uint16_t *)(v12 + 6) != 0 )
      {
        do
        {
          v15 = *(uint32_t *)(v12 + 4);
          HIWORD(v14) = HIWORD(v15);
          LOWORD(v14) = 0;
          v16 = v14 | (uint16_t)(v15 - 1);
          v17 = v15;
          result = (void (**)(hkpSingleShapeContainer::Self *))__sync_val_compare_and_swap(
                                                                           (volatile int32_t *)(v12 + 4),
                                                                           v17,
                                                                           v16);
        }
        while ( (void (**)(hkpSingleShapeContainer::Self *))v17 != result );
        if ( (uint16_t)v16 == 0 )
          return (void (**)(hkpSingleShapeContainer::Self *))G4_VCALL<int>(v12, 16);
      }
      return result;
    case 3u:
      v10 = 4 * (uint32_t)(uintptr_t)(v121);
      if ( *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) == 0 )
      {
        v59 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v60 = (hkAabb::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v59 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v59 + 44),
                          48);
        *((uint32_t *)v60 + 8) = 0;
        *((uint32_t *)v60 + 9) = 0;
        *((uint32_t *)v60 + 10) = 0x80000000;
        v61 = (float *)v60;
        hkAabb::setEmpty(v60);
        *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) = (uint32_t)(uintptr_t)(v61);
        v135[0] = 0;
        v135[1] = 1;
        v135[2] = 2;
        v135[3] = 3;
        v135[4] = 4;
        v135[5] = 5;
        v135[6] = 6;
        v135[7] = 7;
        hkpConvexTransformShape::convertVertexIdsToVertices(v137, v135, 8, v157);
        v62 = *v61;
        v63 = (float *)v157;
        v64 = v61[1];
        v65 = v61[2];
        v66 = 4 * (uint32_t)(uintptr_t)(v121);
        v67 = v61[3];
        v68 = v61[4];
        v69 = v61[5];
        v70 = v61[6];
        v71 = v61[7];
        do
        {
          v62 = fminf(v62, *v63);
          v63 += 4;
          *v61 = v62;
          v64 = fminf(v64, *(v63 - 3));
          v61[1] = v64;
          v65 = fminf(v65, *(v63 - 2));
          v61[2] = v65;
          v67 = fminf(v67, *(v63 - 1));
          v61[3] = v67;
          v68 = fmaxf(v68, *(v63 - 4));
          v61[4] = v68;
          v69 = fmaxf(v69, *(v63 - 3));
          v61[5] = v69;
          v70 = fmaxf(v70, *(v63 - 2));
          v61[6] = v70;
          v71 = fmaxf(v71, *(v63 - 1));
          v61[7] = v71;
        }
        while ( v63 != (float *)&v174 );
        v72 = (uint32_t)v61[10] & 0x3FFFFFFF;
        if ( v72 <= 3 )
        {
          v73 = 2 * v72;
          v127 = (hkpCylinderShape::Self *)(4 * (uint32_t)(uintptr_t)(v121));
          v74 = 4;
          if ( v73 >= 4 )
            v74 = v73;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v132,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v61 + 8,
            v74,
            16);
          v66 = (int)(uintptr_t)(v127);
        }
        v75 = *((uint32_t **)v61 + 8);
        *((uint32_t *)v61 + 9) = 4;
        v128 = (hkpCylinderShape::Self *)v66;
        *v75 = v170;
        v75[1] = v171;
        v75[2] = v172;
        v75[3] = v173;
        v76 = *((uint32_t **)v61 + 8);
        v76[4] = v166;
        v76[5] = v167;
        v76[6] = v168;
        v76[7] = v169;
        v77 = *((uint32_t **)v61 + 8);
        v77[8] = v162;
        v77[9] = v163;
        v77[10] = v164;
        v77[11] = v165;
        v78 = *((uint32_t **)v61 + 8);
        v78[12] = v158;
        v78[13] = v159;
        v78[14] = v160;
        v78[15] = v161;
        hkAabb::expandBy(v61, &v134);
        v10 = (int)(uintptr_t)(v128);
      }
      v4[9] = 0;
      goto LABEL_13;
    case 4u:
      v10 = 4 * (uint32_t)(uintptr_t)(v121);
      if ( *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) != 0 )
        goto LABEL_26;
      v115 = 4 * (uint32_t)(uintptr_t)(v121);
      v40 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v41 = (hkAabb::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v40 + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)v40 + 44),
                        48);
      *((uint32_t *)v41 + 8) = 0;
      *((uint32_t *)v41 + 9) = 0;
      *((uint32_t *)v41 + 10) = 0x80000000;
      v42 = (float *)v41;
      hkAabb::setEmpty(v41);
      *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) = (uint32_t)(uintptr_t)(v42);
      v124 = (hkpCylinderShape::Self *)(*((uint32_t *)v42 + 9) + 2);
      v43 = (uint32_t)v42[10] & 0x3FFFFFFF;
      v44 = (hkpCylinderShape::Self *)v115;
      if ( (int)(uintptr_t)(v124) > v43 )
      {
        v102 = 2 * v43;
        savedregs = 16;
        v175 = (hkArrayUtil::Self *)v132;
        if ( v102 < (int)(uintptr_t)(v124) )
          v102 = (int)(uintptr_t)(v124);
        hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v42 + 8, v102, savedregs);
        v103 = (uint32_t *)(*((uint32_t *)v42 + 8) + 16 * *((uint32_t *)v42 + 9));
        *v103 = *((uint32_t *)v116 + 8);
        v103[1] = *((uint32_t *)v116 + 9);
        v103[2] = *((uint32_t *)v116 + 10);
        v103[3] = *((uint32_t *)v116 + 11);
        v103[4] = *((uint32_t *)v116 + 12);
        v103[5] = *((uint32_t *)v116 + 13);
        v103[6] = *((uint32_t *)v116 + 14);
        v103[7] = *((uint32_t *)v116 + 15);
        *((uint32_t *)v42 + 9) = (uint32_t)(uintptr_t)(v124);
        v44 = (hkpCylinderShape::Self *)v115;
      }
      else
      {
        v45 = (uint32_t *)(*((uint32_t *)v42 + 8) + 16 * *((uint32_t *)v42 + 9));
        *v45 = *((uint32_t *)v116 + 8);
        v45[1] = *((uint32_t *)v116 + 9);
        v45[2] = *((uint32_t *)v116 + 10);
        v45[3] = *((uint32_t *)v116 + 11);
        v45[4] = *((uint32_t *)v116 + 12);
        v45[5] = *((uint32_t *)v116 + 13);
        v45[6] = *((uint32_t *)v116 + 14);
        v45[7] = *((uint32_t *)v116 + 15);
        *((uint32_t *)v42 + 9) = (uint32_t)(uintptr_t)(v124);
        if ( (int)(uintptr_t)(v124) <= 0 )
        {
LABEL_40:
          v126 = v44;
          hkAabb::expandBy(v42, &v134);
          v10 = (int)(uintptr_t)(v126);
LABEL_26:
          v4[9] = 3;
          goto LABEL_13;
        }
      }
      v107 = v44;
      v46 = *((uint32_t *)v42 + 8);
      v47 = 0;
      do
      {
        v48 = 16 * v47;
        v49 = (float *)(16 * v47++ + v46);
        v50 = (float)(v150 * v49[1]) + (float)((float)(v49[1] - v152) * v154);
        v111 = v144;
        v51 = (float)(v151 * v49[2]) + (float)((float)(v49[2] - v156) * v155);
        v118 = (float)((float)(*v49 - v144) * v153) + (float)(v149 * *v49);
        v125 = (float)(v148 * v148) - 0.5;
        v52 = (float)((float)(v145 * v118) + (float)(v146 * v50)) + (float)(v147 * v51);
        v53 = (float)((float)(v118 * v125) + (float)(v145 * v52))
            + (float)((float)((float)(v146 * v51) - (float)(v147 * v50)) * v148);
        v54 = (float)((float)(v125 * v50) + (float)(v146 * v52))
            + (float)((float)((float)(v147 * v118) - (float)(v145 * v51)) * v148);
        v55 = (float)(v54 + v54) + v142;
        v56 = (float)((float)((float)((float)(v125 * v51) + (float)(v147 * v52))
                            + (float)((float)((float)(v50 * v145) - (float)(v118 * v146)) * v148))
                    + (float)((float)((float)(v125 * v51) + (float)(v147 * v52))
                            + (float)((float)((float)(v50 * v145) - (float)(v118 * v146)) * v148)))
            + v143;
        v57 = (float)((float)((float)((float)(v49[3] * v152) + (float)((float)(v49[3] - 0.0) * v156)) * v125)
                    + (float)(v148 * v52))
            + (float)(0.0 * v148);
        *v49 = (float)(v53 + v53) + v141;
        v49[1] = v55;
        v49[2] = v56;
        v49[3] = (float)(v57 + v57) + v111;
        v46 = *((uint32_t *)v42 + 8);
        v58 = (float *)(v46 + v48);
        v39 = *((uint32_t *)v42 + 9) <= v47;
        *v42 = fminf(*v42, *v58);
        v42[1] = fminf(v42[1], v58[1]);
        v42[2] = fminf(v42[2], v58[2]);
        v42[3] = fminf(v42[3], v58[3]);
        v42[4] = fmaxf(v42[4], *v58);
        v42[5] = fmaxf(v42[5], v58[1]);
        v42[6] = fmaxf(v42[6], v58[2]);
        v42[7] = fmaxf(v42[7], v58[3]);
      }
      while ( !v39 );
      v44 = v107;
      goto LABEL_40;
    case 5u:
      v10 = 4 * (uint32_t)(uintptr_t)(v121);
      if ( *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) == 0 )
      {
        v22 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v23 = (hkAabb::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v22 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v22 + 44),
                          48);
        *((uint32_t *)v23 + 8) = 0;
        *((uint32_t *)v23 + 9) = 0;
        *((uint32_t *)v23 + 10) = 0x80000000;
        v24 = (float *)v23;
        hkAabb::setEmpty(v23);
        *(uint32_t *)(*(uint32_t *)(v131 + 8) + 4 * (uint32_t)(uintptr_t)(v121)) = (uint32_t)(uintptr_t)(v24);
        hkpConvexVerticesShape::getOriginalVertices(v116, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)(v24 + 8));
        v25 = 4 * (uint32_t)(uintptr_t)(v121);
        if ( *((int *)v24 + 9) > 0 )
        {
          v114 = 4 * (uint32_t)(uintptr_t)(v121);
          v26 = *((uint32_t *)v24 + 8);
          v27 = 0;
          do
          {
            v28 = 16 * v27;
            v29 = (float *)(16 * v27++ + v26);
            v110 = v144;
            v30 = (float)(v150 * v29[1]) + (float)((float)(v29[1] - v152) * v154);
            v31 = (float)(v151 * v29[2]) + (float)((float)(v29[2] - v156) * v155);
            v122 = (float)(v148 * v148) - 0.5;
            v117 = (float)((float)(*v29 - v144) * v153) + (float)(v149 * *v29);
            v32 = (float)((float)(v145 * v117) + (float)(v146 * v30)) + (float)(v147 * v31);
            v33 = (float)((float)(v117 * v122) + (float)(v145 * v32))
                + (float)((float)((float)(v146 * v31) - (float)(v147 * v30)) * v148);
            v34 = (float)((float)(v122 * v30) + (float)(v146 * v32))
                + (float)((float)((float)(v147 * v117) - (float)(v145 * v31)) * v148);
            v35 = (float)(v34 + v34) + v142;
            v36 = (float)((float)((float)((float)(v122 * v31) + (float)(v147 * v32))
                                + (float)((float)((float)(v30 * v145) - (float)(v117 * v146)) * v148))
                        + (float)((float)((float)(v122 * v31) + (float)(v147 * v32))
                                + (float)((float)((float)(v30 * v145) - (float)(v117 * v146)) * v148)))
                + v143;
            v37 = (float)((float)((float)((float)(v29[3] * v152) + (float)((float)(v29[3] - 0.0) * v156)) * v122)
                        + (float)(v148 * v32))
                + (float)(0.0 * v148);
            *v29 = (float)(v33 + v33) + v141;
            v29[1] = v35;
            v29[2] = v36;
            v29[3] = (float)(v37 + v37) + v110;
            v26 = *((uint32_t *)v24 + 8);
            v38 = (float *)(v26 + v28);
            v39 = *((uint32_t *)v24 + 9) <= v27;
            *v24 = fminf(*v24, *v38);
            v24[1] = fminf(v24[1], v38[1]);
            v24[2] = fminf(v24[2], v38[2]);
            v24[3] = fminf(v24[3], v38[3]);
            v24[4] = fmaxf(v24[4], *v38);
            v24[5] = fmaxf(v24[5], v38[1]);
            v24[6] = fmaxf(v24[6], v38[2]);
            v24[7] = fmaxf(v24[7], v38[3]);
          }
          while ( !v39 );
          v25 = v114;
        }
        v123 = (hkpCylinderShape::Self *)v25;
        hkAabb::expandBy(v24, &v134);
        v10 = (int)(uintptr_t)(v123);
      }
      v4[9] = 1;
      goto LABEL_13;
    default:
      hkErrStream::Construct((hkErrStream::Self *)v135, (hkString::Self *)v157, 512);
      v20 = hkOstream::opShl((int)(uintptr_t)(v135), (hkString::Self *)"Shape type ");
      v21 = hkOstream::opShl(v20, v7);
      hkOstream::opShl(v21, (hkString::Self *)" not supported");
      if ( hkError::messageError(
             (hkError::Self *)0x531B61C8,
             (int)(uintptr_t)(v157),
             "../../Physics2012/Internal/Collide/BvCompressedMesh/hkpBvCompressedMeshShapeInternals.inl",
             dword_D8,
             savedregs) != 0 )
        __builtin_debugtrap();
      hkErrStream::Destroy((hkErrStream::Self *)v135);
      v10 = 4 * (uint32_t)(uintptr_t)(v121);
      goto LABEL_13;
  }
}
// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeCinfo::Destroy  (binary VA: 0x17f2ce0)
// Original: hkpBvCompressedMeshShapeCinfo::~hkpBvCompressedMeshShapeCinfo
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshShapeCinfo::Destroy(hkpBvCompressedMeshShapeCinfo::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A12C8);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeCinfo::getTriangleCollisionFilterInfo  (binary VA: 0x1818ac0)
// Original: hkpBvCompressedMeshShapeCinfo::getTriangleCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShapeCinfo::getTriangleCollisionFilterInfo()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeCinfo::getTriangleUserData  (binary VA: 0x1818ad0)
// Original: hkpBvCompressedMeshShapeCinfo::getTriangleUserData
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShapeCinfo::getTriangleUserData()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeCinfo::getConvexShapeCollisionFilterInfo  (binary VA: 0x1818ae0)
// Original: hkpBvCompressedMeshShapeCinfo::getConvexShapeCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShapeCinfo::getConvexShapeCollisionFilterInfo()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeCinfo::getConvexShapeUserData  (binary VA: 0x1818af0)
// Original: hkpBvCompressedMeshShapeCinfo::getConvexShapeUserData
// ----------------------------------------------------------------------------
int hkpBvCompressedMeshShapeCinfo::getConvexShapeUserData()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeCinfo::getTriangleUserString  (binary VA: 0x1818c60)
// Original: hkpBvCompressedMeshShapeCinfo::getTriangleUserString
// ----------------------------------------------------------------------------
hkString::Self * hkpBvCompressedMeshShapeCinfo::getTriangleUserString(hkpBvCompressedMeshShapeCinfo::Self *self, int a2, hkStringPtr::Self *a3)
{
  return hkStringPtr::set(a3, (hkString::Self *)&unk_1B15112, -1);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeCinfo::getConvexShapeUserString  (binary VA: 0x1818ca0)
// Original: hkpBvCompressedMeshShapeCinfo::getConvexShapeUserString
// ----------------------------------------------------------------------------
hkString::Self * hkpBvCompressedMeshShapeCinfo::getConvexShapeUserString(hkpBvCompressedMeshShapeCinfo::Self *self, int a2, hkStringPtr::Self *a3)
{
  return hkStringPtr::set(a3, (hkString::Self *)&unk_1B15112, -1);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeCinfo::Destroy_ea1818ce0  (binary VA: 0x1818ce0)
// Original: hkpBvCompressedMeshShapeCinfo::~hkpBvCompressedMeshShapeCinfo
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshShapeCinfo::Destroy_ea1818ce0(hkpBvCompressedMeshShapeCinfo::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A12C8);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpBvCompressedMeshShapeCinfo::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    40);
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeCinfo::Construct  (binary VA: 0x1818e70)
// Original: hkpBvCompressedMeshShapeCinfo::hkpBvCompressedMeshShapeCinfo
// ----------------------------------------------------------------------------
void hkpBvCompressedMeshShapeCinfo::Construct(hkpBvCompressedMeshShapeCinfo::Self *self)
{
  _mm_storeh_ps((double *)self + 2, G4_BITCAST<__m128>(xmmword_1C7CCE0));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A12C8);
  *((uint8_t *)self + 4) = 0;
  *((uint8_t *)self + 5) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 6;
  *((uint8_t *)self + 28) = 1;
  *((uint8_t *)self + 29) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeTree::staticClass  (binary VA: 0x1819220)
// Original: hkpBvCompressedMeshShapeTree::staticClass
// ----------------------------------------------------------------------------
void * hkpBvCompressedMeshShapeTree::staticClass()
{
  return &hkpBvCompressedMeshShapeTreeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShapeTreeDataRun::staticClass  (binary VA: 0x1819240)
// Original: hkpBvCompressedMeshShapeTreeDataRun::staticClass
// ----------------------------------------------------------------------------
void * hkpBvCompressedMeshShapeTreeDataRun::staticClass()
{
  return &hkpBvCompressedMeshShapeTreeDataRunClass;
}


