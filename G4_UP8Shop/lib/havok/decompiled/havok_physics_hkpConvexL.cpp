#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpConvexL.h"

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::staticClass  (binary VA: 0x169baa0)
// Original: hkpConvexListShape::staticClass
// ----------------------------------------------------------------------------
void * hkpConvexListShape::staticClass()
{
  return &hkpConvexListShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListFilter::Destroy  (binary VA: 0x16c2f00)
// Original: hkpConvexListFilter::~hkpConvexListFilter
// ----------------------------------------------------------------------------
void hkpConvexListFilter::Destroy(hkpConvexListFilter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListFilter::Destroy_ea16c2f50  (binary VA: 0x16c2f50)
// Original: hkpConvexListFilter::~hkpConvexListFilter
// ----------------------------------------------------------------------------
void hkpConvexListFilter::Destroy_ea16c2f50(hkpConvexListFilter::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getSupportingVertex  (binary VA: 0x16c93d0)
// Original: hkpConvexListShape::getSupportingVertex
// ----------------------------------------------------------------------------
int hkpConvexListShape::getSupportingVertex(int a1, float *a2, float *a3)
{
  int v3;
  int v4;
  float v5; // xmm1_4
  int v6;
  int result;
  typedef int _g4_t_v8;
  typedef float _g4_t_v9;
  typedef int _g4_t_v10;
  typedef float _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v3 = a1;
  v9 = -3.40282e38f;
  if ( *(int *)(a1 + 72) <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v4 = 0;
    v8 = 0;
    do
    {
      v10 = v3;
      (*(void (**)(uint32_t, float *, float *))(**(uint32_t **)(*(uint32_t *)(v3 + 68) + 4 * v4) + 40))(
        *(uint32_t *)(*(uint32_t *)(v3 + 68) + 4 * v4),
        a2,
        v11);
      v3 = v10;
      v5 = v11[2] * a2[2];
      if ( (float)((float)((float)(v11[0] * *a2) + (float)(v11[1] * a2[1])) + v5) > v9 )
      {
        v9 = (float)((float)(v11[0] * *a2) + (float)(v11[1] * a2[1])) + v5;
        v8 = v4;
        *a3 = v11[0];
        a3[1] = v11[1];
        a3[2] = v11[2];
        a3[3] = v11[3];
      }
      ++v4;
    }
    while ( *(uint32_t *)(v10 + 72) > v4 );
    v6 = v8 << 8;
  }
  result = (v6 + *((uint16_t *)a3 + 6)) | 0x3F000000;
  *((uint32_t *)a3 + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::convertVertexIdsToVertices  (binary VA: 0x16c94d0)
// Original: hkpConvexListShape::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
int hkpConvexListShape::convertVertexIdsToVertices(int a1, uint16_t *a2, int a3, int a4)
{
  int result;
  uint16_t *v5;
  int v7;
  typedef int _g4_t_v8;
  typedef uint16_t _g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (46u + sizeof(_g4_t_v9)) > _g4_s1 ? (46u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 46u);

  result = a3;
  v5 = a2;
  if ( a3 > 0 )
  {
    do
    {
      v7 = (uint8_t)HIBYTE(*v5);
      v9[0] = (uint8_t)*v5++;
      v8 = a4;
      a4 += 16;
      (*(void (**)(uint32_t, uint16_t *, int, int))(**(uint32_t **)(*(uint32_t *)(a1 + 68) + 4 * v7) + 44))(
        *(uint32_t *)(*(uint32_t *)(a1 + 68) + 4 * v7),
        v9,
        1,
        v8);
      result = (*(uint16_t *)(a4 - 4) + (v7 << 8)) | 0x3F000000;
      *(uint32_t *)(a4 - 4) = result;
    }
    while ( v5 != &a2[a3] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getFirstVertex  (binary VA: 0x16c9560)
// Original: hkpConvexListShape::getFirstVertex
// ----------------------------------------------------------------------------
int hkpConvexListShape::getFirstVertex(hkpConvexListShape::Self *self, hkVector4f::Self *a2)
{
  return (*(int (**)(uint32_t, hkVector4f::Self *))(***((uint32_t ***)self + 17) + 76))(**((uint32_t **)self + 17), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getNumCollisionSpheres  (binary VA: 0x16c9590)
// Original: hkpConvexListShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpConvexListShape::getNumCollisionSpheres(hkpConvexListShape::Self *self)
{
  int v1;
  int v2;
  int v3;

  if ( *((int *)self + 18) <= 0 )
    return 0;
  v1 = 0;
  v2 = 0;
  do
  {
    v3 = *(uint32_t *)(*((uint32_t *)self + 17) + 4 * v1++);
    v2 += G4_VCALL<int>(v3, 52);
  }
  while ( *((uint32_t *)self + 18) > v1 );
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getCollisionSpheres  (binary VA: 0x16c95e0)
// Original: hkpConvexListShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpConvexListShape::getCollisionSpheres(hkpConvexListShape::Self *self, hkSphere::Self *a2)
{
  int v2;
  hkSphere::Self *i;
  int v4;
  hkSphere::Self *v6;

  v2 = 0;
  for ( i = a2;
        *((uint32_t *)self + 18) > v2;
        i = (hkSphere::Self *)((char *)v6 + 16 * G4_VCALL<int>(v4, 52)) )
  {
    v6 = i;
    v4 = *(uint32_t *)(*((uint32_t *)self + 17) + 4 * v2++);
    G4_VCALL<void>(v4, 56, i);
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getNumChildShapes  (binary VA: 0x16c9640)
// Original: hkpConvexListShape::getNumChildShapes
// ----------------------------------------------------------------------------
int hkpConvexListShape::getNumChildShapes(hkpConvexListShape::Self *self)
{
  return *((uint32_t *)self + 18);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getFirstKey  (binary VA: 0x16c9660)
// Original: hkpConvexListShape::getFirstKey
// ----------------------------------------------------------------------------
int hkpConvexListShape::getFirstKey()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getNextKey  (binary VA: 0x16c9680)
// Original: hkpConvexListShape::getNextKey
// ----------------------------------------------------------------------------
int hkpConvexListShape::getNextKey(hkpConvexListShape::Self *self, unsigned int a2)
{
  int result;

  result = -1;
  if ( (signed int)(a2 + 1) < *((uint32_t *)self + 18) )
    return a2 + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getChildShape  (binary VA: 0x16c96b0)
// Original: hkpConvexListShape::getChildShape
// ----------------------------------------------------------------------------
int hkpConvexListShape::getChildShape(int a1, int a2)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 68) + 4 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getCollisionFilterInfo  (binary VA: 0x16c96d0)
// Original: hkpConvexListShape::getCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpConvexListShape::getCollisionFilterInfo()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getContainer  (binary VA: 0x16c96f0)
// Original: hkpConvexListShape::getContainer
// ----------------------------------------------------------------------------
char * hkpConvexListShape::getContainer(hkpConvexListShape::Self *self)
{
  return (char *)self + 20;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getAabb  (binary VA: 0x16c9700)
// Original: hkpConvexListShape::getAabb
// ----------------------------------------------------------------------------
float * hkpConvexListShape::getAabb(hkpConvexListShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, float a16, float a17, float a18, float a19, float a20, float a21, float a22, float a23)
{
  int v23;
  int v24;
  float *result;
  int v26;
  float v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm7_4
  float v31; // xmm5_4
  float v32; // xmm2_4
  float v33; // xmm6_4
  float v34; // xmm0_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm6_4
  int v40;
  int v41;
  float v42;
  int v43;
  float v44;
  int v45;
  float v46;
  int v47;
  float v48;
  int v49;
  float v50;
  int v51;
  float v52;
  int v53;
  float v54;
  int v55;
  float v56;
  int v57;
  float v58;
  int v59;
  float v60;
  int v61;
  float v62;
  int v63;
  float v64;
  int v65;
  float v66;
  int v67;
  float v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;

  if ( *((uint8_t *)self + 64) != 0 )
  {
    v27 = *((float *)self + 8);
    v66 = *((float *)a2 + 1);
    v58 = *((float *)a2 + 5);
    v56 = *((float *)a2 + 7);
    v54 = *((float *)a2 + 9);
    v28 = *((float *)self + 10);
    v62 = *((float *)a2 + 3);
    v60 = *((float *)a2 + 4);
    v29 = *((float *)self + 9);
    v48 = *((float *)a2 + 6);
    v46 = *((float *)a2 + 8);
    v64 = *((float *)a2 + 2);
    v52 = *((float *)a2 + 10);
    v50 = *((float *)a2 + 11);
    v44 = (float)(fabs(*(float *)a2 * v27) + fabs(v60 * v29))
        + (float)((float)(a3 + *((float *)self + 4)) + fabs(v46 * v28));
    v30 = v52 * v28;
    v42 = (float)(fabs(v66 * v27) + fabs(v58 * v29)) + (float)((float)(a3 + *((float *)self + 4)) + fabs(v54 * v28));
    v31 = *((float *)self + 13);
    v32 = fabs(v64 * v27) + fabs(v48 * v29);
    v33 = *((float *)self + 12);
    v34 = (float)((float)(a3 + *((float *)self + 4)) + fabs(v28 * v50)) + (float)(fabs(v27 * v62) + fabs(v29 * v56));
    v35 = *((float *)self + 14);
    v68 = (float)((float)(a3 + *((float *)self + 4)) + fabs(v30)) + v32;
    v36 = (float)((float)((float)(*(float *)a2 * v33) + (float)(v60 * v31)) + (float)(v46 * v35)) + *((float *)a2 + 12);
    v37 = (float)((float)((float)(v66 * v33) + (float)(v58 * v31)) + (float)(v54 * v35)) + *((float *)a2 + 13);
    v38 = (float)((float)((float)(v64 * v33) + (float)(v48 * v31)) + (float)(v52 * v35)) + *((float *)a2 + 14);
    v39 = (float)((float)((float)(v33 * v62) + (float)(v31 * v56)) + (float)(v35 * v50)) + *((float *)a2 + 15);
    *((float *)a4 + 4) = v44 + v36;
    *((float *)a4 + 5) = v42 + v37;
    *(float *)a4 = v36 - v44;
    *((float *)a4 + 1) = v37 - v42;
    *((float *)a4 + 6) = v68 + v38;
    *((float *)a4 + 2) = v38 - v68;
    *((float *)a4 + 7) = v34 + v39;
    *((float *)a4 + 3) = v39 - v34;
    return (float *)a2;
  }
  else
  {
    v23 = 1;
    (*(void (**)(uint32_t, const hkTransformf::Self *, uint32_t, hkAabb::Self *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, hkpConvexListShape::Self *, int, int, int, int, int, int, int, int))(***((uint32_t ***)self + 17) + 24))(
      **((uint32_t **)self + 17),
      a2,
      LODWORD(a3),
      a4,
      v40,
      v41,
      v43,
      v45,
      v47,
      v49,
      v51,
      v53,
      v55,
      v57,
      v59,
      v61,
      v63,
      v65,
      v67,
      self,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    v24 = a15;
    result = &a16;
    if ( *(int *)(a15 + 72) > 1 )
    {
      do
      {
        v77 = v24;
        v26 = *(uint32_t *)(*(uint32_t *)(v24 + 68) + 4 * v23++);
        result = (float *)G4_VCALL<int>(v26, 24, a2, LODWORD(a3), &a16);
        v24 = v77;
        *(float *)a4 = fminf(*(float *)a4, a16);
        *((float *)a4 + 1) = fminf(*((float *)a4 + 1), a17);
        *((float *)a4 + 2) = fminf(*((float *)a4 + 2), a18);
        *((float *)a4 + 3) = fminf(*((float *)a4 + 3), a19);
        *((float *)a4 + 4) = fmaxf(*((float *)a4 + 4), a20);
        *((float *)a4 + 5) = fmaxf(*((float *)a4 + 5), a21);
        *((float *)a4 + 6) = fmaxf(*((float *)a4 + 6), a22);
        *((float *)a4 + 7) = fmaxf(*((float *)a4 + 7), a23);
      }
      while ( v23 < *(uint32_t *)(v77 + 72) );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::castRayWithCollector  (binary VA: 0x16c9ae0)
// Original: hkpConvexListShape::castRayWithCollector
// ----------------------------------------------------------------------------
uint32_t * hkpConvexListShape::castRayWithCollector(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int *a7, int a8, int a9, int a10)
{
  int *address;
  uint32_t *v11;
  uint64_t v12; // rax
  int i;
  uint32_t *result;
  uint32_t *v15;
  uint64_t v16; // rax
  int v17;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v17 = *address;
  v11 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*address + 12) )
  {
    *v11 = (uint32_t)(uintptr_t)("TtrcShpCollect");
    v12 = __rdtsc();
    v11[1] = v12;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
  }
  for ( i = G4_VCALL<int>(a1, 88);
        i != -1;
        i = G4_VCALL<int>(a1, 92, i) )
  {
    a4 = G4_VCALL<int>(a1, 100, i, &a8);
    a7 = &a8;
    a5 = i;
    a6 = a10;
    G4_VCALL<void>(a4, 32, &a4, &a4, a4);
  }
  result = a1;
  v15 = (uint32_t *)a1[1];
  if ( (unsigned int)(uintptr_t)(v15) < a1[3] )
  {
    *v15 = (uint32_t)(uintptr_t)("Et");
    v16 = __rdtsc();
    v15[1] = v16;
    a1[1] = (uint32_t)(uintptr_t)(v15 + 3);
    return a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::castRay  (binary VA: 0x16c9be0)
// Original: hkpConvexListShape::castRay
// ----------------------------------------------------------------------------
char * hkpConvexListShape::castRay(char *a1, int *a2, int a3, int a4)
{
  int *v4;
  int *address;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int *v9;
  int i;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;
  uint32_t *v16;
  uint64_t v17; // rax
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint32_t _g4_t_v25[134];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v23)) > _g4_s4 ? (24u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v24)) > _g4_s5 ? (31u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v25)) > _g4_s6 ? (32u + sizeof(_g4_t_v25)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 31u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);

  v25[130] = (uint32_t)(uintptr_t)(&a1);
  v20 = a1;
  v21 = a3;
  v22 = a4;
  v4 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v19 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcCxList");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  ++*(uint32_t *)(v22 + 64);
  v8 = G4_VCALL<int>(v4, 88);
  if ( v8 == -1 )
  {
    --*(uint32_t *)(v22 + 64);
    v15 = 0;
  }
  else
  {
    v23 = -1;
    v9 = v4;
    for ( i = v8; i != -1; i = (*(int (**)(int *))(v13 + 92))(v9) )
    {
      v11 = G4_VCALL<int>(v9, 100, i, v25);
      (*(void (**)(char *, int, int, int))(*(uint32_t *)v11 + 28))(&v24, v11, v21, v22);
      v12 = v23;
      if ( v24 != 0 )
        v12 = i;
      v23 = v12;
      v13 = *v9;
      v25[130] = i;
    }
    v14 = *(uint32_t *)(v22 + 64);
    *(uint32_t *)(v22 + 64) = v14 - 1;
    v15 = 0;
    if ( v23 != -1 )
    {
      *(uint32_t *)(v22 + 4 * v14 + 28) = v23;
      v15 = 1;
    }
  }
  *v20 = v15;
  v16 = *(uint32_t **)(v19 + 4);
  if ( (unsigned int)(uintptr_t)(v16) < *(uint32_t *)(v19 + 12) )
  {
    *v16 = (uint32_t)(uintptr_t)("Et");
    v17 = __rdtsc();
    v16[1] = v17;
    *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v16 + 3);
  }
  return v20;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::Destroy  (binary VA: 0x16c9d80)
// Original: hkpConvexListShape::~hkpConvexListShape
// ----------------------------------------------------------------------------
void hkpConvexListShape::Destroy(hkpConvexListShape::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;

  v1 = 0;
  v2 = *((uint32_t *)self + 18);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209ABA8);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209AC18);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 17) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v9 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v9;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 18);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 18) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 17),
      4 * v8);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 19) = 0x80000000;
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::Destroy_ea16c9e80  (binary VA: 0x16c9e80)
// Original: hkpConvexListShape::~hkpConvexListShape
// ----------------------------------------------------------------------------
void hkpConvexListShape::Destroy_ea16c9e80(hkpConvexListShape::Self *self)
{
  int v1;
  int v2;

  hkpConvexListShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}



// ============================================================================
// Address:   0x16c9ef0 (size: 67 bytes)
// Symbol:    _ZN18hkpConvexListShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpConvexListShape::hkpConvexListShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN18hkpConvexListShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpConvexListShape::Construct(int a1, int a2))(hkpConvexListShape::Self * self)
{
  hkpConvexShape::hkpConvexShape(a1, a2);
  *(uint32_t *)(a1 + 20) = ((uint32_t)(uintptr_t)&off_209AC18);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209ABA8);
  *(uint8_t *)(a1 + 8) = 26;
  return (void (**)(hkpConvexListShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209AC18));
}
// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::setShapesAndRadius  (binary VA: 0x16c9f40)
// Original: hkpConvexListShape::setShapesAndRadius
// ----------------------------------------------------------------------------
hkpConvexListShape::Self * hkpConvexListShape::setShapesAndRadius(hkpConvexListShape::Self *self, const hkpConvexShape::Self *const *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  const hkpConvexShape::Self *v6;
  hkpConvexListShape::Self *result;
  const hkpConvexShape::Self *i;
  int32_t v9;
  int v10;
  hkpConvexListShape::Self *v11; // ett
  uint8_t v12[28];

  v3 = *((uint32_t *)self + 19) & 0x3FFFFFFF;
  if ( a3 <= v3 )
  {
    *((uint32_t *)self + 18) = a3;
    result = self;
    *((uint32_t *)self + 4) = *((uint32_t *)*a2 + 4);
    if ( a3 <= 0 )
      return result;
  }
  else
  {
    v4 = 2 * v3;
    if ( v4 < a3 )
      v4 = a3;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v12,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)self + 17,
      v4,
      4);
    *((uint32_t *)self + 18) = a3;
    *((uint32_t *)self + 4) = *((uint32_t *)*a2 + 4);
  }
  v5 = 0;
  do
  {
    *(const hkpConvexShape::Self **)(*((uint32_t *)self + 17) + 4 * v5) = a2[v5];
    v6 = a2[v5];
    result = (hkpConvexListShape::Self *)((const hkpConvexShape::Self *)((char *)v6 + 4));
    if ( *((uint16_t *)v6 + 3) != 0 )
    {
      for ( i = a2[v5]; ; i = v6 )
      {
        v9 = *((uint32_t *)i + 1);
        HIWORD(v10) = HIWORD(v9);
        LOWORD(v10) = 0;
        v11 = (hkpConvexListShape::Self *)v9;
        result = (hkpConvexListShape::Self *)__sync_val_compare_and_swap(
                                         (volatile int32_t *)v6 + 1,
                                         v9,
                                         v10 | (uint16_t)(v9 + 1));
        if ( v11 == result )
          break;
      }
    }
    ++v5;
  }
  while ( v5 != a3 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::setUseCachedAabb  (binary VA: 0x16ca040)
// Original: hkpConvexListShape::setUseCachedAabb
// ----------------------------------------------------------------------------
void hkpConvexListShape::setUseCachedAabb(hkpConvexListShape::Self *self, bool a2)
{
  float v2; // xmm5_4
  float v3; // xmm3_4
  float v4; // xmm6_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  int v8;
  int v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  *((uint8_t *)self + 64) = a2;
  if ( a2 )
  {
    v10 = 3.40282e38f;
    v2 = 3.40282e38f;
    v3 = 3.40282e38f;
    v11 = 3.40282e38f;
    v4 = -3.40282e38f;
    v5 = -3.40282e38f;
    v6 = -3.40282e38f;
    v7 = -3.40282e38f;
    if ( *((int *)self + 18) > 0 )
    {
      v8 = 0;
      do
      {
        v9 = *(uint32_t *)(*((uint32_t *)self + 17) + 4 * v8++);
        G4_VCALL<void>(v9, 24, &unk_1D12FD0, 0, v12);
        v2 = fminf(v2, v12[0]);
        v3 = fminf(v3, v12[1]);
        v11 = fminf(v11, v12[2]);
        v10 = fminf(v10, v12[3]);
        v4 = fmaxf(v4, v12[4]);
        v5 = fmaxf(v5, v12[5]);
        v6 = fmaxf(v6, v12[6]);
        v7 = fmaxf(v7, v12[7]);
      }
      while ( *((uint32_t *)self + 18) > v8 );
    }
    *((float *)self + 12) = (float)(v4 + v2) * 0.5;
    *((float *)self + 8) = (float)(v4 - v2) * 0.5;
    *((float *)self + 13) = (float)(v5 + v3) * 0.5;
    *((float *)self + 9) = (float)(v5 - v3) * 0.5;
    *((float *)self + 14) = (float)(v11 + v6) * 0.5;
    *((float *)self + 10) = (float)(v6 - v11) * 0.5;
    *((float *)self + 15) = (float)(v10 + v7) * 0.5;
    *((float *)self + 11) = (float)(v7 - v10) * 0.5;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::Construct  (binary VA: 0x16ca240)
// Original: hkpConvexListShape::hkpConvexListShape
// ----------------------------------------------------------------------------
void hkpConvexListShape::Construct(hkpConvexListShape::Self *self, hkpConvexShape::Self **a2, int a3)
{
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209AC18);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209ABA8);
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 26;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0x80000000;
  *((uint32_t *)self + 6) = 1065353216;
  hkpConvexListShape::setShapesAndRadius(self, a2, a3);
  hkpConvexListShape::setUseCachedAabb(self, true);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListShape::getUseCachedAabb  (binary VA: 0x16ca2e0)
// Original: hkpConvexListShape::getUseCachedAabb
// ----------------------------------------------------------------------------
bool hkpConvexListShape::getUseCachedAabb(hkpConvexListShape::Self *self)
{
  return *((uint8_t *)self + 64) != 0;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListFilter::staticClass  (binary VA: 0x16d7910)
// Original: hkpConvexListFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpConvexListFilter::staticClass()
{
  return &hkpConvexListFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::Destroy  (binary VA: 0x16e9800)
// Original: hkpConvexListAgent::~hkpConvexListAgent
// ----------------------------------------------------------------------------
void hkpConvexListAgent::Destroy(hkpConvexListAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::invalidateTim  (binary VA: 0x16e9d10)
// Original: hkpConvexListAgent::invalidateTim
// ----------------------------------------------------------------------------
uint32_t * hkpConvexListAgent::invalidateTim(int a1, int a2)
{
  if ( *(uint8_t *)(a1 + 120) != 0 )
    return hkpGskBaseAgent::invalidateTim((uint32_t *)a1);
  else
    return (uint32_t *)hkAgent1nMachine_InvalidateTim(a1 + 48, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::warpTime  (binary VA: 0x16e9d60)
// Original: hkpConvexListAgent::warpTime
// ----------------------------------------------------------------------------
int hkpConvexListAgent::warpTime(int a1, float a2, int64_t a3)
{
  if ( *(uint8_t *)(a1 + 120) != 0 )
    return hkpGskBaseAgent::warpTime(a1, a2, a3);
  else
    return hkAgent1nMachine_WarpTime(a1 + 48, LODWORD(a2), a3, HIDWORD(a3));
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::removePoint  (binary VA: 0x16e9dc0)
// Original: hkpConvexListAgent::removePoint
// ----------------------------------------------------------------------------
hkpGskfAgent::Self * hkpConvexListAgent::removePoint(hkpConvexListAgent::Self *self, uint16_t a2)
{
  hkpGskfAgent::Self *result;

  result = (hkpGskfAgent::Self *)(self);
  if ( *((uint8_t *)self + 120) != 0 )
    return hkpGskfAgent::removePoint(self, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::commitPotential  (binary VA: 0x16e9e00)
// Original: hkpConvexListAgent::commitPotential
// ----------------------------------------------------------------------------
hkpGskfAgent::Self * hkpConvexListAgent::commitPotential(hkpConvexListAgent::Self *self, uint16_t a2)
{
  hkpGskfAgent::Self *result;

  result = (hkpGskfAgent::Self *)(self);
  if ( *((uint8_t *)self + 120) != 0 )
    return hkpGskfAgent::commitPotential(self, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::createZombie  (binary VA: 0x16e9e40)
// Original: hkpConvexListAgent::createZombie
// ----------------------------------------------------------------------------
void hkpConvexListAgent::createZombie(hkpConvexListAgent::Self *self, uint16_t a2)
{
  if ( *((uint8_t *)self + 120) != 0 )
    hkpGskfAgent::createZombie(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::cleanup  (binary VA: 0x16e9e80)
// Original: hkpConvexListAgent::cleanup
// ----------------------------------------------------------------------------
int hkpConvexListAgent::cleanup(hkpConvexListAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  if ( *((uint8_t *)self + 120) != 0 )
    hkGskManifold_cleanup((char *)self + 48, *((uint32_t *)self + 2), a2);
  else
    hkAgent1nMachine_Destroy((char *)self + 48, *((uint32_t *)self + 29), *((uint32_t *)self + 2), a2);
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::updateShapeCollectionFilter  (binary VA: 0x16e9f00)
// Original: hkpConvexListAgent::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpConvexListAgent::updateShapeCollectionFilter(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  uint32_t v5[11];

  if ( *(uint8_t *)(a1 + 120) == 0 )
  {
    v5[0] = a2;
    v5[1] = (uint32_t)(uintptr_t)(a3);
    v5[4] = a4;
    v5[5] = *(uint32_t *)(a1 + 8);
    v5[6] = a5;
    v5[3] = G4_VCALL<int>(*a3, 64);
    hkAgent1nMachine_UpdateShapeCollectionFilter(a1 + 48, v5);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::staticLinearCast  (binary VA: 0x16ea0e0)
// Original: hkpConvexListAgent::staticLinearCast
// ----------------------------------------------------------------------------
int hkpConvexListAgent::staticLinearCast(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  uint32_t *v10;
  uint64_t v11; // rax
  float v12; // xmm1_4
  float v13; // xmm1_4
  int v14;
  float v15; // xmm1_4
  uint64_t v16; // rax
  int v17;
  uint32_t *v18;
  typedef int *_g4_t_v20;
  typedef uint32_t _g4_t_v21[4];
  typedef uint32_t _g4_t_v22[2];
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t _g4_t_v25[6];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29[31];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v22)) > _g4_s2 ? (32u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v23)) > _g4_s3 ? (40u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v24)) > _g4_s4 ? (76u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v25)) > _g4_s5 ? (80u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (104u + sizeof(_g4_t_v26)) > _g4_s6 ? (104u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (108u + sizeof(_g4_t_v27)) > _g4_s7 ? (108u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v28)) > _g4_s8 ? (112u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v29)) > _g4_s9 ? (128u + sizeof(_g4_t_v29)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v20 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("LtCvsListAgent");
    v7[3] = (uint32_t)(uintptr_t)("StcheckHull");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 4);
  }
  v22[1] = 2139095022;
  v23 = 0;
  v22[0] = ((uint32_t)(uintptr_t)&off_209BD10);
  v24 = 2139095022;
  hkpIterativeLinearCastAgent::staticLinearCast(a1, (int)(uintptr_t)(a2), a3, (int)(uintptr_t)(v22), (int)(uintptr_t)(v22));
  if ( v23 != 0 )
  {
    v9 = *v20;
    v10 = *(uint32_t **)(*v20 + 4);
    if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v20 + 12) )
    {
      *v10 = (uint32_t)(uintptr_t)("Stchild");
      v11 = __rdtsc();
      v10[1] = v11;
      *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
    }
    std::memcpy(v29, (const void *)a3, 112);
    v25[1] = 2139095022;
    v12 = *(float *)(a3 + 80);
    v25[0] = ((uint32_t)(uintptr_t)&off_209B830);
    v29[20] = -v12;
    v13 = *(float *)(a3 + 84);
    v25[4] = *(uint32_t *)(a3 + 80);
    v14 = *(uint32_t *)(a3 + 84);
    v29[21] = -v13;
    v25[5] = v14;
    v26 = *(uint32_t *)(a3 + 88);
    v27 = *(uint32_t *)(a3 + 92);
    LODWORD(v29[22]) = v26 ^ 0x80000000;
    v15 = *(float *)(a3 + 92);
    v28 = a4;
    v29[23] = -v15;
    if ( a5 != 0 )
    {
      v21[1] = 2139095022;
      v21[0] = ((uint32_t)(uintptr_t)&off_209B818);
      v21[2] = a5;
      hkpShapeCollectionAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v29), (int)(uintptr_t)(v25), (int)(uintptr_t)(v21));
    }
    else
    {
      hkpShapeCollectionAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v29), (int)(uintptr_t)(v25), 0);
    }
  }
  LODWORD(v16) = (uint32_t)(uintptr_t)(v20);
  v17 = *v20;
  v18 = *(uint32_t **)(*v20 + 4);
  if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*v20 + 12) )
  {
    *v18 = (uint32_t)(uintptr_t)("lt");
    v16 = __rdtsc();
    v18[1] = v16;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::linearCast  (binary VA: 0x16ea400)
// Original: hkpConvexListAgent::linearCast
// ----------------------------------------------------------------------------
int hkpConvexListAgent::linearCast(int a1, int a2, uint32_t *a3, int a4, int a5, int a6)
{
  return hkpConvexListAgent::staticLinearCast(a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::Destroy_ea16ea600  (binary VA: 0x16ea600)
// Original: hkpConvexListAgent::~hkpConvexListAgent
// ----------------------------------------------------------------------------
void hkpConvexListAgent::Destroy_ea16ea600(hkpConvexListAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::staticGetPenetrations  (binary VA: 0x16ea660)
// Original: hkpConvexListAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpConvexListAgent::staticGetPenetrations(int a1, uint32_t *a2, int a3, int a4)
{
  int *address;
  int v5;
  int *v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint64_t v9; // rax
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  uint64_t v14; // rax
  typedef void (**_g4_t_v16)(hkpFlagCdBodyPairCollector::Self *);
  typedef char _g4_t_v17;
  typedef uint32_t _g4_t_v18[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v6 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("LtCvxList");
    v7[3] = (uint32_t)(uintptr_t)("StcheckHull");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 4);
  }
  v17 = 0;
  v16 = (void (**)(hkpFlagCdBodyPairCollector::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209C220));
  LODWORD(v9) = ((uint32_t (*)(int, uint32_t *, int, void (***)(hkpFlagCdBodyPairCollector::Self *)))hkpGskBaseAgent::staticGetPenetrations)(
                  a1,
                  a2,
                  a3,
                  &v16);
  if ( v17 != 0 )
  {
    v10 = *v6;
    v11 = *(uint32_t **)(*v6 + 4);
    if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*v6 + 12) )
    {
      *v11 = (uint32_t)(uintptr_t)("Stchildren");
      v14 = __rdtsc();
      v11[1] = v14;
      *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
    }
    LOBYTE(v18[1]) = 0;
    v18[0] = ((uint32_t)(uintptr_t)&off_209B848);
    v18[2] = a4;
    LODWORD(v9) = hkpShapeCollectionAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v18));
  }
  v12 = *v6;
  v13 = *(uint32_t **)(v12 + 4);
  if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(v12 + 12) )
  {
    *v13 = (uint32_t)(uintptr_t)("lt");
    v9 = __rdtsc();
    v13[1] = v9;
    *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v13 + 3);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::getPenetrations  (binary VA: 0x16ea7d0)
// Original: hkpConvexListAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpConvexListAgent::getPenetrations(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  return hkpConvexListAgent::staticGetPenetrations(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::staticGetClosestPoints  (binary VA: 0x16ea870)
// Original: hkpConvexListAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpConvexListAgent::staticGetClosestPoints(int a1, uint32_t *a2, int a3, uint32_t *a4)
{
  int *address;
  int v5;
  int *v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  uint32_t *v10;
  void (***v11)(hkpSymmetricAgentFlipCollector::Self *);
  uint64_t v12; // rax
  int v13;
  uint32_t *v14;
  uint64_t v15; // rax
  int v16;
  uint32_t *v17;
  uint64_t v18; // rax
  int v19;
  typedef void (**_g4_t_v21)(hkpFlagCdBodyPairCollector::Self *);
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef void (**_g4_t_v25)(hkpSymmetricAgentFlipCollector::Self *);
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef float _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef float _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef uint32_t _g4_t_v39[8];
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef float _g4_t_v43;
  typedef int _g4_t_v44;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v24)) > _g4_s3 ? (12u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v25)) > _g4_s4 ? (16u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v26)) > _g4_s5 ? (20u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v27)) > _g4_s6 ? (24u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v28)) > _g4_s7 ? (28u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v29)) > _g4_s8 ? (32u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v30)) > _g4_s9 ? (36u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v31)) > _g4_s10 ? (40u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v32)) > _g4_s11 ? (44u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v33)) > _g4_s12 ? (48u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v34)) > _g4_s13 ? (52u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v35)) > _g4_s14 ? (56u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v36)) > _g4_s15 ? (60u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v37)) > _g4_s16 ? (64u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v38)) > _g4_s17 ? (68u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v39)) > _g4_s18 ? (80u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v40)) > _g4_s19 ? (112u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v41)) > _g4_s20 ? (116u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v42)) > _g4_s21 ? (120u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v43)) > _g4_s22 ? (124u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v44)) > _g4_s23 ? (128u + sizeof(_g4_t_v44)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 116u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v6 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("LtCvxList");
    v7[3] = (uint32_t)(uintptr_t)("StcheckHull");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 4);
  }
  LOBYTE(v22) = 0;
  v21 = (void (**)(hkpFlagCdBodyPairCollector::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209C220));
  ((void (*)(int, uint32_t *, int, void (***)(hkpFlagCdBodyPairCollector::Self *)))hkpGskBaseAgent::staticGetPenetrations)(
    a1,
    a2,
    a3,
    &v21);
  if ( (uint8_t)v22 != 0 )
  {
    v9 = *v6;
    v10 = *(uint32_t **)(*v6 + 4);
    if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v6 + 12) )
    {
      *v10 = (uint32_t)(uintptr_t)("Stchildren");
      v15 = __rdtsc();
      v10[1] = v15;
      *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
    }
    v39[1] = 2139095022;
    v39[0] = ((uint32_t)(uintptr_t)&off_209B818);
    v39[2] = (uint32_t)(uintptr_t)(a4);
    v11 = (void (***)(hkpSymmetricAgentFlipCollector::Self *))v39;
LABEL_7:
    LODWORD(v12) = hkpShapeCollectionAgent::staticGetClosestPoints(a2, a1, a3, (int)(uintptr_t)(v11));
    goto LABEL_8;
  }
  v39[1] = 2139095022;
  v44 = 0;
  v39[0] = ((uint32_t)(uintptr_t)&off_20998B0);
  v43 = 3.40282e38f;
  G4_MEM_CALL((uintptr_t)(hkpGskBaseAgent::staticGetClosestPoints), 
    a1,
    (int)(uintptr_t)(a2),
    a3,
    (int)(uintptr_t)(v39),
    (int)(uintptr_t)(v21),
    v22,
    v23,
    v24,
    (int)(uintptr_t)(v25),
    v26,
    (int)(uintptr_t)(v27),
    v28,
    v29,
    v30,
    v31,
    SLOBYTE(v32));
  LODWORD(v12) = v44;
  if ( v44 != 0 )
  {
    if ( v43 <= *(float *)(*a2 + 24) )
    {
      v16 = *v6;
      v17 = *(uint32_t **)(*v6 + 4);
      if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*v6 + 12) )
      {
        *v17 = (uint32_t)(uintptr_t)("Stchildren");
        v18 = __rdtsc();
        v17[1] = v18;
        *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
      }
      v26 = 2139095022;
      v25 = (void (**)(hkpSymmetricAgentFlipCollector::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209B818));
      v27 = a4;
      v11 = &v25;
      goto LABEL_7;
    }
    v37 = a1;
    v38 = a2;
    v25 = (void (**)(hkpSymmetricAgentFlipCollector::Self *))v39[4];
    v26 = v39[5];
    v27 = (uint32_t *)v39[6];
    v28 = v39[7];
    v32 = v43;
    v36 = v43;
    v31 = v42;
    v35 = v42;
    v29 = v40;
    v30 = v41;
    v19 = *a4;
    v33 = v40;
    v34 = v41;
    LODWORD(v12) = (*(int (**)(uint32_t *, void (***)(hkpSymmetricAgentFlipCollector::Self *)))(v19 + 8))(
                     a4,
                     &v25);
  }
LABEL_8:
  v13 = *v6;
  v14 = *(uint32_t **)(v13 + 4);
  if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(v13 + 12) )
  {
    *v14 = (uint32_t)(uintptr_t)("lt");
    v12 = __rdtsc();
    v14[1] = v12;
    *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::getClosestPoints  (binary VA: 0x16eab30)
// Original: hkpConvexListAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpConvexListAgent::getClosestPoints(int a1, int a2, uint32_t *a3, int a4, uint32_t *a5)
{
  return hkpConvexListAgent::staticGetClosestPoints(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::Construct  (binary VA: 0x16eabd0)
// Original: hkpConvexListAgent::hkpConvexListAgent
// ----------------------------------------------------------------------------
int hkpConvexListAgent::Construct(hkpGskfAgent::Self *a1, const hkTransformf::Self **a2, const hkTransformf::Self **a3, int *a4, hkpContactMgr::Self *a5)
{
  int v5;
  int result;
  typedef const hkpConvexShape::Self *_g4_t_v7;
  typedef const hkpConvexShape::Self *_g4_t_v8;
  typedef uint8_t _g4_t_v9[76];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  hkpGskfAgent::Construct(a1, a2, a3, a5);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B7A8);
  v5 = *a4;
  *((uint8_t *)a1 + 120) = 1;
  *((uint32_t *)a1 + 29) = v5;
  *((uint8_t *)a1 + 121) = 0;
  v7 = (const hkpConvexShape::Self *)(*a2);
  v8 = (const hkpConvexShape::Self *)(*a3);
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v9, a2[2], a3[2]);
  result = (int)(uintptr_t)(hkpGskCache::init((hkpGskfAgent::Self *)((char *)a1 + 12), v7, v8, (const hkTransformf::Self *)v9));
  *((uint32_t *)a1 + 11) = -1082130432;
  *((uint32_t *)a1 + 6) = -1082130432;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::createConvexConvexListAgent  (binary VA: 0x16eac90)
// Original: hkpConvexListAgent::createConvexConvexListAgent
// ----------------------------------------------------------------------------
hkpGskfAgent::Self * hkpConvexListAgent::createConvexConvexListAgent(const hkTransformf::Self **a1, const hkTransformf::Self **a2, hkpContactMgr::Self *a3, hkpContactMgr::Self *a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int address;
  hkpCdBody::Self *v11;
  hkpCdBody::Self *v12;
  hkpContactMgr::Self *v13;
  hkpContactMgr::Self *v14;
  hkpGskfAgent::Self *v15;
  hkpGskfAgent::Self *v16;
  uint32_t *v17;

  if ( a4 == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v9 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     56);
    v14 = nullptr;
    v13 = a3;
    v12 = (hkpCdBody::Self *)a1;
    v11 = (hkpCdBody::Self *)a2;
    goto LABEL_9;
  }
  v4 = (*(int (**)(uint32_t *, const hkTransformf::Self **, const hkTransformf::Self **, hkpContactMgr::Self *))(**((uint32_t **)a3 + 5) + 20))(
         *((uint32_t **)a3 + 5),
         a2,
         a1,
         a3);
  switch ( v4 )
  {
    case 0:
      v7 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v16 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v7 + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)v7 + 44),
                              128);
      hkpConvexListAgent::Construct(v16, a1, a2, (int *)a3, a4);
      return v16;
    case 1:
      v8 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v9 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v8 + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)v8 + 44),
                       56);
      v14 = a4;
      v13 = a3;
      v12 = (hkpCdBody::Self *)a1;
      v11 = (hkpCdBody::Self *)a2;
LABEL_9:
      v17 = v9;
      hkpShapeCollectionAgent::Construct(v9, v11, (int)(uintptr_t)(v12), (int)(uintptr_t)(v13), (int)(uintptr_t)(v14));
      *v17 = ((uint32_t)(uintptr_t)&off_2099C88);
      return (hkpGskfAgent::Self *)v17;
    case 2:
      v6 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v15 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v6 + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)v6 + 44),
                              128);
      hkpGskfAgent::Construct(v15, a1, a2, a4);
      *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_209B248);
      return v15;
    default:
      return nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::createConvexListConvexAgent  (binary VA: 0x16eae40)
// Original: hkpConvexListAgent::createConvexListConvexAgent
// ----------------------------------------------------------------------------
hkpGskfAgent::Self * hkpConvexListAgent::createConvexListConvexAgent(const hkTransformf::Self **a1, const hkTransformf::Self **a2, int a3, hkpContactMgr::Self *a4)
{
  int v4;
  int v6;
  int address;
  int v8;
  int v9;
  hkpGskfAgent::Self *v10;
  hkpGskfAgent::Self *v11;
  uint32_t *v12;
  uint32_t *v13;

  if ( a4 != nullptr )
  {
    v4 = (*(int (**)(uint32_t, const hkTransformf::Self **, const hkTransformf::Self **, int))(**(uint32_t **)(a3 + 20) + 20))(
           *(uint32_t *)(a3 + 20),
           a1,
           a2,
           a3);
    switch ( v4 )
    {
      case 0:
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v11 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                *(uint32_t *)(*(uint32_t *)address + 44),
                                128);
        hkpConvexListAgent::Construct(v11, a2, a1, (int *)a3, a4);
        *(uint32_t *)v11 = ((uint32_t)(uintptr_t)&off_209B748);
        return v11;
      case 1:
        v8 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v12 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v8 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v8 + 44),
                          56);
        hkpShapeCollectionAgent::Construct(v12, a1, (int)(uintptr_t)(a2), a3, (int)(uintptr_t)(a4));
        return (hkpGskfAgent::Self *)v12;
      case 2:
        v6 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v10 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v6 + 44) + 8))(
                                *(uint32_t *)(*(uint32_t *)v6 + 44),
                                128);
        hkpGskfAgent::Construct(v10, a1, a2, a4);
        *(uint32_t *)v10 = ((uint32_t)(uintptr_t)&off_209B248);
        return v10;
      default:
        return nullptr;
    }
  }
  else
  {
    v9 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v13 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v9 + 44) + 8))(
                      *(uint32_t *)(*(uint32_t *)v9 + 44),
                      56);
    hkpShapeCollectionAgent::Construct(v13, a1, (int)(uintptr_t)(a2), a3, 0);
    return (hkpGskfAgent::Self *)v13;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::createConvexListConvexListAgent  (binary VA: 0x16eb000)
// Original: hkpConvexListAgent::createConvexListConvexListAgent
// ----------------------------------------------------------------------------
hkpGskfAgent::Self * hkpConvexListAgent::createConvexListConvexListAgent(const hkTransformf::Self **a1, const hkTransformf::Self **a2, int a3, hkpContactMgr::Self *a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int address;
  int v13;
  hkpGskfAgent::Self *v14;
  hkpContactMgr::Self *v15;
  hkpGskfAgent::Self *v16;
  hkpGskfAgent::Self *v17;
  uint32_t *v18;
  uint32_t *v19;

  if ( a4 == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v10 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                      *(uint32_t *)(*(uint32_t *)address + 44),
                      56);
    v15 = nullptr;
    goto LABEL_12;
  }
  v4 = (*(int (**)(uint32_t, const hkTransformf::Self **, const hkTransformf::Self **, int))(**(uint32_t **)(a3 + 20) + 20))(
         *(uint32_t *)(a3 + 20),
         a1,
         a2,
         a3);
  switch ( v4 )
  {
    case 0:
      v8 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v17 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v8 + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)v8 + 44),
                              128);
      hkpConvexListAgent::Construct(v17, a2, a1, (int *)a3, a4);
      *(uint32_t *)v17 = ((uint32_t)(uintptr_t)&off_209B748);
      return v17;
    case 1:
      v9 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v10 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v9 + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)v9 + 44),
                        56);
      v15 = a4;
LABEL_12:
      v18 = v10;
      hkpShapeCollectionAgent::Construct(v10, a1, (int)(uintptr_t)(a2), a3, (int)(uintptr_t)(v15));
      return (hkpGskfAgent::Self *)v18;
    case 2:
      v6 = (*(int (**)(uint32_t, const hkTransformf::Self **, const hkTransformf::Self **, int))(**(uint32_t **)(a3 + 20) + 20))(
             *(uint32_t *)(a3 + 20),
             a2,
             a1,
             a3);
      switch ( v6 )
      {
        case 0:
          v7 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v16 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v7 + 44) + 8))(
                                  *(uint32_t *)(*(uint32_t *)v7 + 44),
                                  128);
          hkpConvexListAgent::Construct(v16, a1, a2, (int *)a3, a4);
          return v16;
        case 1:
          v11 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v19 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v11 + 44) + 8))(
                            *(uint32_t *)(*(uint32_t *)v11 + 44),
                            56);
          hkpShapeCollectionAgent::Construct(v19, a2, (int)(uintptr_t)(a1), a3, (int)(uintptr_t)(a4));
          *v19 = ((uint32_t)(uintptr_t)&off_2099C88);
          return (hkpGskfAgent::Self *)v19;
        case 2:
          v13 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v14 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v13 + 44) + 8))(
                                  *(uint32_t *)(*(uint32_t *)v13 + 44),
                                  128);
          hkpGskfAgent::Construct(v14, a1, a2, a4);
          *(uint32_t *)v14 = ((uint32_t)(uintptr_t)&off_209B248);
          return v14;
        default:
          return nullptr;
      }
    default:
      return nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::registerAgent  (binary VA: 0x16eb270)
// Original: hkpConvexListAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpConvexListAgent::registerAgent(hkpConvexListAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpConvexListAgent::createConvexListConvexAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 26, 23);
  v2[1] = (uint32_t)(uintptr_t)(hkpConvexListAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpConvexListAgent::staticGetClosestPoints);
  v2[0] = (uint32_t)(uintptr_t)(hkpConvexListAgent::createConvexConvexListAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpConvexListAgent::staticLinearCast);
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 23, 26);
  v2[1] = (uint32_t)(uintptr_t)(hkpConvexListAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpConvexListAgent::staticGetClosestPoints);
  LOWORD(v2[4]) = 256;
  v2[0] = (uint32_t)(uintptr_t)(hkpConvexListAgent::createConvexListConvexListAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpConvexListAgent::staticLinearCast);
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 26, 26);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::switchToStreamMode  (binary VA: 0x16eb390)
// Original: hkpConvexListAgent::switchToStreamMode
// ----------------------------------------------------------------------------
int hkpConvexListAgent::switchToStreamMode(hkpConvexListAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int result;

  hkGskManifold_cleanup((char *)self + 48, *((uint32_t *)self + 2), a2);
  *((uint8_t *)self + 120) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  result = hkAgent1nMachine_Create((char *)self + 48);
  *((uint16_t *)self + 61) = 25;
  *((uint32_t *)self + 15) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::switchToGskMode  (binary VA: 0x16eb400)
// Original: hkpConvexListAgent::switchToGskMode
// ----------------------------------------------------------------------------
int hkpConvexListAgent::switchToGskMode(hkpConvexListAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int result;

  result = hkAgent1nMachine_Destroy((char *)self + 48, *((uint32_t *)self + 29), *((uint32_t *)self + 2), a2);
  *((uint32_t *)self + 12) = 0;
  *((uint8_t *)self + 120) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexListAgent::processCollision  (binary VA: 0x16eb450)
// Original: hkpConvexListAgent::processCollision
// ----------------------------------------------------------------------------
int hkpConvexListAgent::processCollision(hkpConvexListAgent::Self *a1, int64_t a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  float *v8;
  float v9; // xmm3_4
  int v10;
  float v11; // xmm5_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  __m128i v14;
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  int v19;
  const void *v20;
  float v21; // xmm0_4
  float v22; // xmm3_4
  int v23;
  uint32_t *v24;
  uint64_t v25; // rax
  int16_t v26;
  float v27;
  float v28; // xmm6_4
  __m128i v29;
  int v30;
  int v31;
  float v32; // xmm6_4
  float v33; // xmm5_4
  int v34;
  int v35;
  hkLifoAllocator::Self *v36;
  unsigned int *v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  __m128i *v41;
  unsigned int v42;
  __m128i v43;
  __m128i v44;
  void *v45;
  float v46; // xmm5_4
  float v47; // xmm5_4
  uint64_t v48; // rax
  int v49;
  uint32_t *v50;
  int v51;
  uint32_t *v52;
  int32_t v53;
  int32_t v54;
  bool v55;
  int i;
  float v57; // xmm5_4
  int j;
  float v59; // xmm4_4
  void *v60;
  unsigned int v61;
  int v62;
  hkLifoAllocator::Self *v63;
  uint64_t v64; // rax
  int v65; // xmm4_4
  int v66;
  int v67; // xmm4_4
  int v68;
  typedef unsigned int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef float _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int *_g4_t_v76;
  typedef int64_t _g4_t_v77;
  typedef hkLifoAllocator::Self **_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef signed int _g4_t_v81;
  typedef hkpConvexListAgent::Self *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef char _g4_t_v84[28];
  typedef __m128i *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef __m128i _g4_t_v90;
  typedef int _g4_t_v91;
  typedef char _g4_t_v92[80];
  typedef int32_t _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef uint8_t _g4_t_v97[4108];
  typedef uint32_t _g4_t_v98[34];
  enum : size_t {
    _g4_s0 = 4544u,
    _g4_s1 = (0u + sizeof(_g4_t_v70)) > _g4_s0 ? (0u + sizeof(_g4_t_v70)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v71)) > _g4_s1 ? (4u + sizeof(_g4_t_v71)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v72)) > _g4_s2 ? (4u + sizeof(_g4_t_v72)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v73)) > _g4_s3 ? (8u + sizeof(_g4_t_v73)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v74)) > _g4_s4 ? (8u + sizeof(_g4_t_v74)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v75)) > _g4_s5 ? (16u + sizeof(_g4_t_v75)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v76)) > _g4_s6 ? (20u + sizeof(_g4_t_v76)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v77)) > _g4_s7 ? (24u + sizeof(_g4_t_v77)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v78)) > _g4_s8 ? (24u + sizeof(_g4_t_v78)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v79)) > _g4_s9 ? (32u + sizeof(_g4_t_v79)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v80)) > _g4_s10 ? (36u + sizeof(_g4_t_v80)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v81)) > _g4_s11 ? (36u + sizeof(_g4_t_v81)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v82)) > _g4_s12 ? (40u + sizeof(_g4_t_v82)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v83)) > _g4_s13 ? (44u + sizeof(_g4_t_v83)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v84)) > _g4_s14 ? (48u + sizeof(_g4_t_v84)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v85)) > _g4_s15 ? (76u + sizeof(_g4_t_v85)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v86)) > _g4_s16 ? (80u + sizeof(_g4_t_v86)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v87)) > _g4_s17 ? (84u + sizeof(_g4_t_v87)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v88)) > _g4_s18 ? (88u + sizeof(_g4_t_v88)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v89)) > _g4_s19 ? (92u + sizeof(_g4_t_v89)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v90)) > _g4_s20 ? (96u + sizeof(_g4_t_v90)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v91)) > _g4_s21 ? (112u + sizeof(_g4_t_v91)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v92)) > _g4_s22 ? (128u + sizeof(_g4_t_v92)) : _g4_s22,
    _g4_s24 = (208u + sizeof(_g4_t_v93)) > _g4_s23 ? (208u + sizeof(_g4_t_v93)) : _g4_s23,
    _g4_s25 = (212u + sizeof(_g4_t_v94)) > _g4_s24 ? (212u + sizeof(_g4_t_v94)) : _g4_s24,
    _g4_s26 = (216u + sizeof(_g4_t_v95)) > _g4_s25 ? (216u + sizeof(_g4_t_v95)) : _g4_s25,
    _g4_s27 = (220u + sizeof(_g4_t_v96)) > _g4_s26 ? (220u + sizeof(_g4_t_v96)) : _g4_s26,
    _g4_s28 = (228u + sizeof(_g4_t_v97)) > _g4_s27 ? (228u + sizeof(_g4_t_v97)) : _g4_s27,
    _g4_s29 = (4336u + sizeof(_g4_t_v98)) > _g4_s28 ? (4336u + sizeof(_g4_t_v98)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 0u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 4u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 4u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 8u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 8u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 16u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 20u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 24u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 24u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 32u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 36u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 36u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 40u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 48u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 76u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 80u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 84u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 88u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 92u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 96u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 112u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 128u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 208u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 212u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 216u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 220u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 228u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 4336u);

  v98[30] = (uint32_t)(uintptr_t)(&a1);
  v82 = a1;
  v77 = a2;
  v80 = a3;
  v79 = a4;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v76 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("LtCvxLst");
    v6[3] = (uint32_t)(uintptr_t)("StTim");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 4);
  }
  v8 = *(float **)(HIDWORD(v77) + 8);
  v75 = *(uint32_t *)HIDWORD(v77);
  v9 = *(float *)(v80 + 88);
  v10 = *(uint32_t *)(v77 + 8);
g4_m128_raw(v14) = *(unsigned int *)(v10 + 64);
  v11 = *(float *)(v10 + 92) * v9;
  v12 = v9 * v8[23];
  v13 = (float)(*(float *)(v10 + 68) - *(float *)(v10 + 84)) * v11;
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) - *(float *)(v10 + 80)) * v11)
                          + (float)((float)(v8[20] - v8[16]) * v12);
  v15 = (float)(*(float *)(v10 + 72) - *(float *)(v10 + 88)) * v11;
  v16 = (float)(v11 * *(float *)(v10 + 156)) * *(float *)(v10 + 160);
  v73 = *(float *)(v79 + 12336);
  v17 = v13 + (float)((float)(v8[21] - v8[17]) * v12);
  v18 = v8[22] - v8[18];
  v71 = *(uint32_t *)v79;
  std::memcpy(v98, (const void *)(v79 + 12304), 112);
  HIWORD(v19) = 0;
  v20 = *(const void **)(v79 + 12416);
  v21 = v15 + (float)(v18 * v12);
  v22 = (float)((float)(v12 * v8[39]) * v8[40]) + v16;
  if ( v20 != nullptr )
  {
    LOWORD(v19) = 1026;
    std::memcpy(v97, v20, 4 * v19);
  }
  if ( *((uint8_t *)v82 + 120) != 0 )
    goto LABEL_34;
  while ( 1 )
  {
    v23 = *v76;
    v24 = *(uint32_t **)(*v76 + 4);
    if ( (unsigned int)(uintptr_t)(v24) < *(uint32_t *)(*v76 + 12) )
    {
      *v24 = (uint32_t)(uintptr_t)("StStream");
      v25 = __rdtsc();
      v24[1] = v25;
      *(uint32_t *)(v23 + 4) = (uint32_t)(uintptr_t)(v24 + 3);
    }
    v26 = *((uint16_t *)v82 + 61);
    *((uint16_t *)v82 + 61) = v26 - 1;
    if ( v26 >= 0 )
    {
      v27 = *((float *)v82 + 15);
      goto LABEL_10;
    }
    *((uint16_t *)v82 + 61) = 25;
    hkTransformf::setMulInverseMul(
      (hkTransformf::Self *)&v90,
      *(const hkTransformf::Self **)(v77 + 8),
      *(const hkTransformf::Self **)(HIDWORD(v77) + 8));
    v87 = *(uint32_t *)v77;
    v85 = &v90;
    v88 = *(uint32_t *)HIDWORD(v77);
    v86 = *(uint32_t *)(v77 + 8);
    v89 = *(uint32_t *)(v80 + 12);
    hkpGsk::getClosestPoint(&v83);
g4_m128_raw(v14) =g4_m128_lane<uint32_t>(v14, 0);
    if ( v83 == 0 )
    {
      LODWORD(v27) = *((uint32_t *)v82 + 11) ^ 0x80000000;
LABEL_10:
      v29 = v14;
      v28 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)) + (float)(v17 * v17))
                              + (float)(v21 * v21);
      if ( *(float *)g4_m128_ptr<int32_t>(v29) > 0.0 )
      {
        v30 = _mm_cvtsi128_si32(v29) >> 1;
        v31 = (_mm_cvtsi128_si32(v29) + 2139095040) >> 31;
        v32 = (float)(1.5 * COERCE_FLOAT(v31 & (1597463174 - v30)))
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * COERCE_FLOAT(v31 & (1597463174 - v30)))
                    * (float)(COERCE_FLOAT(v31 & (1597463174 - v30)) * COERCE_FLOAT(v31 & (1597463174 - v30))));
        v33 = (float)(1.5 * v32) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v32) * (float)(v32 * v32));
        v28 = (float)((float)(1.5 * v33)
                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v33) * (float)(v33 * v33)))
            * *(float *)g4_m128_ptr<int32_t>(v29);
      }
g4_m128_lane<int64_t>(v90, 0) = v77;
g4_m128_lane<int32_t>(v90, 2) = 0;
      v93 =g4_m128_lane<int32_t>(v14, 0);
      v94 = v17;
      *((float *)v82 + 15) = v27 - v28;
      v34 = *((uint32_t *)v82 + 2);
      v95 = v21;
      v91 = v34;
      v96 = v22;
g4_m128_lane<int32_t>(v90, 3) = v80;
      hkTransformf::setMulInverseMul(
        (hkTransformf::Self *)v92,
        *(const hkTransformf::Self **)(v77 + 8),
        *(const hkTransformf::Self **)(HIDWORD(v77) + 8));
      v35 = *(uint32_t *)(v75 + 72);
      v78 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v36 = *v78;
      v81 = (4 * v35 + 131) & 0xFFFFFF80;
      v37 = *((unsigned int **)*v78 + 3);
      if ( v81 <= *((uint32_t *)*v78 + 2) && (unsigned int)(uintptr_t)(v37) + v81 <= *((uint32_t *)v36 + 4) )
        *((uint32_t *)v36 + 3) = (uint32_t)(uintptr_t)((char *)v37 + v81);
      else
        v37 = (unsigned int *)hkLifoAllocator::allocateFromNewSlab(v36, v81);
      if ( v35 <= 0 )
        goto LABEL_62;
      v38 = v35;
      v39 = -((uint8_t)((uint8_t)(uintptr_t)(v37) & 0xF) >> 2) & 3;
      if ( v39 > v35 )
        v39 = v35;
      if ( (unsigned int)v35 > 6 )
      {
        if ( v39 == 0 )
        {
          v38 = 0;
          v40 = 0;
          goto LABEL_26;
        }
        v38 = v39;
      }
      *v37 = 0;
      if ( v38 <= 1 )
      {
        v40 = 1;
      }
      else
      {
        v37[1] = 1;
        if ( v38 <= 2 )
        {
          v40 = 2;
        }
        else
        {
          v37[2] = 2;
          if ( v38 <= 3 )
          {
            v40 = 3;
          }
          else
          {
            v37[3] = 3;
            if ( v38 <= 4 )
            {
              v40 = 4;
            }
            else
            {
              v37[4] = 4;
              if ( v38 <= 5 )
              {
                v40 = 5;
              }
              else
              {
                v37[5] = 5;
                v40 = 6;
              }
            }
          }
        }
      }
      if ( v35 == v38 )
      {
LABEL_62:
        v37[v35] = 0xFFFFFFFF;
        hkAgent1nMachine_Process((int *)v82 + 12, &v90, v75 + 20, v37, (int *)v79);
        v63 = *v78;
        if ( v81 > *((uint32_t *)*v78 + 2)
          || *((unsigned int **)v63 + 3) != (unsigned int *)((char *)v37 + v81)
          || v37 == *((unsigned int **)v63 + 5) )
        {
          hkLifoAllocator::slowBlockFree(v63, (char *)v37, v81);
        }
        else
        {
          *((uint32_t *)v63 + 3) = (uint32_t)(uintptr_t)(v37);
        }
        goto LABEL_38;
      }
LABEL_26:
      v70 = v35 - v38;
      v74 = (v35 - v38) >> 2;
      v72 = 4 * v74;
      if ( 4 * v74 == 0 )
        goto LABEL_81;
      v41 = (__m128i *)&v37[v38];
      v42 = 0;
g4_m128_lane<int64_t>(v43, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v40 + 1)), 0);
g4_m128_lane<int64_t>(v43, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v40 + 2), _mm_cvtsi32_si128(v40 + 3)), 0);
      while ( 1 )
      {
        *v41 = v43;
        ++v42;
        ++v41;
        v44 = _mm_add_epi32(v43, G4_BITCAST<__m128i>(xmmword_1C7C400));
        if ( v42 >= v74 )
          break;
        v43 = v44;
      }
      v40 += v72;
      if ( v72 != v70 )
      {
LABEL_81:
        v61 = v40 + 1;
        v37[v40] = v40;
        if ( v35 > (int)(v40 + 1) )
        {
          v62 = v40 + 2;
          v37[v61] = v61;
          if ( v35 > v62 )
            v37[v62] = v62;
        }
      }
      goto LABEL_62;
    }
    hkpConvexListAgent::switchToGskMode(v82, *(hkpConstraintOwner::Self **)(v79 + 4));
    if ( v73 != *(float *)(v79 + 12336) )
    {
      (*(void (**)(uint32_t, uint32_t, int, int, char *))(**((uint32_t **)v82 + 2) + 40))(
        *((uint32_t *)v82 + 2),
        *(uint32_t *)(v79 + 4),
        v79 + 12368,
        (int)(uintptr_t)(v82) + 32,
        v84);
      v65 = v98[9];
      *(uint32_t *)(v79 + 12304) = v98[0];
      *(float *)(v79 + 12336) = v73;
      v66 = v98[1];
      *(uint32_t *)(v79 + 12340) = v65;
      *(uint32_t *)(v79 + 12308) = v66;
      *(uint32_t *)(v79 + 12312) = v98[2];
      *(uint32_t *)(v79 + 12316) = v98[3];
      *(uint32_t *)(v79 + 12320) = v98[4];
      *(uint32_t *)(v79 + 12324) = v98[5];
      *(uint32_t *)(v79 + 12328) = v98[6];
      *(uint32_t *)(v79 + 12332) = v98[7];
      *(uint32_t *)(v79 + 12352) = v98[12];
      *(uint32_t *)(v79 + 12356) = v98[13];
      *(uint32_t *)(v79 + 12360) = v98[14];
      *(uint32_t *)(v79 + 12368) = v98[16];
      *(uint32_t *)(v79 + 12372) = v98[17];
      *(uint32_t *)(v79 + 12376) = v98[18];
      *(uint32_t *)(v79 + 12380) = v98[19];
      *(uint32_t *)(v79 + 12384) = v98[20];
      *(uint32_t *)(v79 + 12388) = v98[21];
      *(uint32_t *)(v79 + 12392) = v98[22];
      *(uint32_t *)(v79 + 12396) = v98[23];
      *(uint32_t *)(v79 + 12400) = v98[24];
      *(uint32_t *)(v79 + 12404) = v98[25];
      *(uint32_t *)(v79 + 12408) = v98[26];
      *(uint32_t *)(v79 + 12412) = v98[27];
    }
    *(uint32_t *)v79 = v71;
    v45 = *(void **)(v79 + 12416);
    if ( v45 != nullptr )
      std::memcpy(v45, v97, 4104);
LABEL_34:
    v46 = *((float *)v82 + 11);
    if ( v46 > *(float *)(v80 + 12) )
    {
      v47 = v46
          - (float)((float)((float)((float)(*((float *)v82 + 8) * *(float *)g4_m128_ptr<int32_t>(v14))
                                  + (float)(*((float *)v82 + 9) * v17))
                          + (float)(*((float *)v82 + 10) * v21))
                  + v22);
      *((float *)v82 + 11) = v47;
      if ( v47 > *(float *)(v80 + 12) )
        break;
    }
    v51 = *v76;
    v52 = *(uint32_t **)(*v76 + 4);
    if ( (unsigned int)(uintptr_t)(v52) < *(uint32_t *)(*v76 + 12) )
    {
      *v52 = (uint32_t)(uintptr_t)("StGsk");
      v64 = __rdtsc();
      v52[1] = v64;
      *(uint32_t *)(v51 + 4) = (uint32_t)(uintptr_t)(v52 + 3);
    }
    *(int64_t *)((char *)g4_m128_ptr<int64_t>(v90) + 4) = 0x2FFFF0001LL;
g4_m128_lane<int32_t>(v90, 0) = (int32_t)((uint32_t)(uintptr_t)&off_209B6A8);
    v53 = *((uint32_t *)v82 + 2);
    LOBYTE(v91) = 0;
g4_m128_lane<int32_t>(v90, 3) = v53;
    *((uint32_t *)v82 + 2) = (uint32_t)(uintptr_t)(&v90);
    hkpPredGskfAgent::processCollision((int)(uintptr_t)(v82), (const hkTransformf::Self *)v77, SHIDWORD(v77), v80, (uint32_t *)v79);
    v54 =g4_m128_lane<int32_t>(v90, 3);
    v55 = (uint8_t)v91 == 0;
    *((uint32_t *)v82 + 2) =g4_m128_lane<int32_t>(v90, 3);
    if ( v55 )
    {
      if ( *((uint8_t *)v82 + 50) == 0 )
        goto LABEL_38;
      if ( *((uint8_t *)v82 + 121) != 0 )
        goto LABEL_38;
      for ( i = HIDWORD(v77); *(uint32_t *)(i + 12) != 0; i = *(uint32_t *)(i + 12) )
        ;
      v57 = *(float *)(i + 76);
      for ( j = v77; *(uint32_t *)(j + 12) != 0; j = *(uint32_t *)(j + 12) )
        ;
      v59 = fminf(*(float *)(j + 76), v57);
      if ( (float)-(float)(v59 + v59) <= *((float *)v82 + 11) )
        goto LABEL_38;
    }
    if ( v73 != *(float *)(v79 + 12336) )
    {
      G4_VCALL<void>(v54, 40, *(uint32_t *)(v79 + 4), v79 + 12368);
      v67 = v98[9];
      *(uint32_t *)(v79 + 12304) = v98[0];
      *(float *)(v79 + 12336) = v73;
      v68 = v98[1];
      *(uint32_t *)(v79 + 12340) = v67;
      *(uint32_t *)(v79 + 12308) = v68;
      *(uint32_t *)(v79 + 12312) = v98[2];
      *(uint32_t *)(v79 + 12316) = v98[3];
      *(uint32_t *)(v79 + 12320) = v98[4];
      *(uint32_t *)(v79 + 12324) = v98[5];
      *(uint32_t *)(v79 + 12328) = v98[6];
      *(uint32_t *)(v79 + 12332) = v98[7];
      *(uint32_t *)(v79 + 12352) = v98[12];
      *(uint32_t *)(v79 + 12356) = v98[13];
      *(uint32_t *)(v79 + 12360) = v98[14];
      *(uint32_t *)(v79 + 12368) = v98[16];
      *(uint32_t *)(v79 + 12372) = v98[17];
      *(uint32_t *)(v79 + 12376) = v98[18];
      *(uint32_t *)(v79 + 12380) = v98[19];
      *(uint32_t *)(v79 + 12384) = v98[20];
      *(uint32_t *)(v79 + 12388) = v98[21];
      *(uint32_t *)(v79 + 12392) = v98[22];
      *(uint32_t *)(v79 + 12396) = v98[23];
      *(uint32_t *)(v79 + 12400) = v98[24];
      *(uint32_t *)(v79 + 12404) = v98[25];
      *(uint32_t *)(v79 + 12408) = v98[26];
      *(uint32_t *)(v79 + 12412) = v98[27];
    }
    *(uint32_t *)v79 = v71;
    v60 = *(void **)(v79 + 12416);
    if ( v60 != nullptr )
      std::memcpy(v60, v97, 4104);
    hkpConvexListAgent::switchToStreamMode(v82, *(hkpConstraintOwner::Self **)(v79 + 4));
g4_m128_raw(v14) =g4_m128_lane<uint32_t>(v14, 0);
  }
  if ( *((uint8_t *)v82 + 50) != 0 )
    hkGskManifold_cleanup((char *)v82 + 48, *((uint32_t *)v82 + 2), *(uint32_t *)(v79 + 4));
LABEL_38:
  *((uint8_t *)v82 + 121) = 1;
  LODWORD(v48) = (uint32_t)(uintptr_t)(v76);
  v49 = *v76;
  v50 = *(uint32_t **)(*v76 + 4);
  if ( (unsigned int)(uintptr_t)(v50) < *(uint32_t *)(*v76 + 12) )
  {
    *v50 = (uint32_t)(uintptr_t)("lt");
    v48 = __rdtsc();
    v50[1] = v48;
    *(uint32_t *)(v49 + 4) = (uint32_t)(uintptr_t)(v50 + 3);
  }
  return v48;
}


