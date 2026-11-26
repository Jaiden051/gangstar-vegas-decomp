#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShapeDi.h"

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::Destroy  (binary VA: 0x181b5c0)
// Original: hkpShapeDisplayBuilder::~hkpShapeDisplayBuilder
// ----------------------------------------------------------------------------
void hkpShapeDisplayBuilder::Destroy(hkpShapeDisplayBuilder::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::Destroy_ea181b690  (binary VA: 0x181b690)
// Original: hkpShapeDisplayBuilder::~hkpShapeDisplayBuilder
// ----------------------------------------------------------------------------
void hkpShapeDisplayBuilder::Destroy_ea181b690(hkpShapeDisplayBuilder::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::getInitialContinueData  (binary VA: 0x181b750)
// Original: hkpShapeDisplayBuilder::getInitialContinueData
// ----------------------------------------------------------------------------
uint32_t * hkpShapeDisplayBuilder::getInitialContinueData()
{
  int address;
  uint32_t *result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)address + 44),
                       28);
  result[1] = -65535;
  result[2] = 0;
  *result = ((uint32_t)(uintptr_t)&off_20A13F0);
  result[3] = 0;
  result[4] = 0x80000000;
  result[5] = -1;
  result[6] = -1;
  return result;
}



// ============================================================================
// Address:   0x181b9b0 (size: 15 bytes)
// Symbol:    _ZN22hkpShapeDisplayBuilder33hkpShapeDisplayBuilderEnvironmentC1Ev
// Demangled: hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::hkpShapeDisplayBuilderEnvironment(void)
// ============================================================================
// Alternative name is '_ZN22hkpShapeDisplayBuilder33hkpShapeDisplayBuilderEnvironmentC2Ev'
struct hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Construct(
        hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *self)
{
  *(uint32_t *)self = 2;
  return self;
}
// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::Construct  (binary VA: 0x181b9c0)
// Original: hkpShapeDisplayBuilder::hkpShapeDisplayBuilder
// ----------------------------------------------------------------------------
void hkpShapeDisplayBuilder::Construct(hkpShapeDisplayBuilder::Self *self, const hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *a2)
{
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1428);
  *((uint32_t *)self + 1) = -65535;
  v2 = *(uint32_t *)a2;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = v2;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_Sphere  (binary VA: 0x181ba00)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_Sphere
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_Sphere(int a1, int a2, uint32_t *a3, int a4, float *a5)
{
  float v5; // xmm0_4
  int address;
  hkDisplaySphere::Self *v7;
  int *v8;
  int v9;
  int result;
  int v11;
  int *savedregs;
  int *savedregsa;
  void *retaddr;

  v5 = *(float *)(a2 + 16);
  if ( a5 != nullptr )
    v5 = v5 * fabs(*a5);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v7 = (hkDisplaySphere::Self *)(*(int (**)(uint32_t, int, int, int, uint32_t, uint32_t, uint32_t, float))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                            *(uint32_t *)(*(uint32_t *)address + 44),
                            128,
                            v11,
                            a4,
                            0,
                            0,
                            0,
                            COERCE_FLOAT(LODWORD(v5)));
  hkDisplaySphere::Construct(v7, (const hkSphere::Self *)&retaddr, *(uint32_t *)(a1 + 8));
  v8 = savedregs;
  *((uint32_t *)v7 + 4) = *a3;
  *((uint32_t *)v7 + 5) = a3[1];
  *((uint32_t *)v7 + 6) = a3[2];
  *((uint32_t *)v7 + 7) = a3[3];
  *((uint32_t *)v7 + 8) = a3[4];
  *((uint32_t *)v7 + 9) = a3[5];
  *((uint32_t *)v7 + 10) = a3[6];
  *((uint32_t *)v7 + 11) = a3[7];
  *((uint32_t *)v7 + 12) = a3[8];
  *((uint32_t *)v7 + 13) = a3[9];
  *((uint32_t *)v7 + 14) = a3[10];
  *((uint32_t *)v7 + 15) = a3[11];
  *((uint32_t *)v7 + 16) = a3[12];
  *((uint32_t *)v7 + 17) = a3[13];
  *((uint32_t *)v7 + 18) = a3[14];
  *((uint32_t *)v7 + 19) = a3[15];
  v9 = savedregs[1];
  if ( v9 == (savedregs[2] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)savedregs,
      4,
      (int)(uintptr_t)(savedregs));
    v8 = savedregsa;
    v9 = savedregsa[1];
  }
  result = *v8;
  *(uint32_t *)(*v8 + 4 * v9) = (uint32_t)(uintptr_t)(v7);
  ++v8[1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_MultiSphere  (binary VA: 0x181bb50)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_MultiSphere
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_MultiSphere(int a1, int a2, int a3, uint32_t *a4)
{
  uint32_t *v4;
  int result;
  hkDisplaySphere::Self *v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_address;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_address)) > _g4_s1 ? (20u + sizeof(_g4_t_address)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  v4 = (uint32_t *)(a2 + 32);
  result = *(uint32_t *)(a2 + 16);
  if ( result > 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v12 = 0;
    do
    {
      v11 = a4;
      v13[3] = v4[3];
      memset(v13, 0, 12);
      v7 = (hkDisplaySphere::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                *(uint32_t *)(*(uint32_t *)address + 44),
                                128);
      hkDisplaySphere::Construct(v7, (const hkSphere::Self *)v13, *(uint32_t *)(a1 + 8));
      a4 = v11;
      *((uint32_t *)v7 + 16) = *v4;
      *((uint32_t *)v7 + 17) = v4[1];
      *((uint32_t *)v7 + 18) = v4[2];
      *((uint32_t *)v7 + 19) = v4[3];
      v8 = v11[1];
      if ( v8 == (v11[2] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v11, 4, v9);
        a4 = v11;
        v8 = v11[1];
      }
      ++v12;
      v4 += 4;
      *(uint32_t *)(*a4 + 4 * v8) = (uint32_t)(uintptr_t)(v7);
      result = a2;
      ++a4[1];
    }
    while ( *(uint32_t *)(a2 + 16) > v12 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_Box  (binary VA: 0x181bca0)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_Box
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_Box(int a1, __m128 *a2, uint32_t *a3, int a4, __m128 *a5)
{
  int address;
  hkDisplayBox::Self *v6;
  int *v7;
  int v8;
  int result;
  int v10;
  __m128 v11;
  int *savedregs;
  int *savedregsa;
  void *retaddr;

  v11 = a2[2];
  if ( a5 != nullptr )
    v11 = _mm_and_ps(_mm_mul_ps(v11, *a5), G4_BITCAST<__m128>(xmmword_1C7C250));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v6 = (hkDisplayBox::Self *)(*(int (**)(uint32_t, int, int, int, int32_t, int32_t, int32_t, int32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                         *(uint32_t *)(*(uint32_t *)address + 44),
                         112,
                         v10,
                         a4,
g4_m128_lane<int32_t>(v11, 0),
g4_m128_lane<int32_t>(v11, 1),
g4_m128_lane<int32_t>(v11, 2),
g4_m128_lane<int32_t>(v11, 3));
  hkDisplayBox::Construct(v6, (const hkVector4f::Self *)&retaddr);
  v7 = savedregs;
  *((uint32_t *)v6 + 4) = *a3;
  *((uint32_t *)v6 + 5) = a3[1];
  *((uint32_t *)v6 + 6) = a3[2];
  *((uint32_t *)v6 + 7) = a3[3];
  *((uint32_t *)v6 + 8) = a3[4];
  *((uint32_t *)v6 + 9) = a3[5];
  *((uint32_t *)v6 + 10) = a3[6];
  *((uint32_t *)v6 + 11) = a3[7];
  *((uint32_t *)v6 + 12) = a3[8];
  *((uint32_t *)v6 + 13) = a3[9];
  *((uint32_t *)v6 + 14) = a3[10];
  *((uint32_t *)v6 + 15) = a3[11];
  *((uint32_t *)v6 + 16) = a3[12];
  *((uint32_t *)v6 + 17) = a3[13];
  *((uint32_t *)v6 + 18) = a3[14];
  *((uint32_t *)v6 + 19) = a3[15];
  v8 = savedregs[1];
  if ( v8 == (savedregs[2] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)savedregs,
      4,
      (int)(uintptr_t)(savedregs));
    v7 = savedregsa;
    v8 = savedregsa[1];
  }
  result = *v7;
  *(uint32_t *)(*v7 + 4 * v8) = (uint32_t)(uintptr_t)(v6);
  ++v7[1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_ConvexVertices  (binary VA: 0x181c210)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_ConvexVertices
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_ConvexVertices(int a1, int *a2, int a3, int a4, int a5)
{
  int *v5;
  int result;
  int v7;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v9;
  signed int v10;
  int v11;
  void *v12;
  void *v13;
  int v14;
  int v15;
  int v16;
  const hkVector4f::Self *v17;
  int v18;
  const hkVector4f::Self *v19;
  hkGeometry::Self *v20;
  int v21;
  hkDisplayConvex::Self *v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  hkLifoAllocator::Self *v27;
  signed int v28;
  int savedregs;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef void *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef hkLifoAllocator::Self **_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef hkTransformf::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef void *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef signed int _g4_t_v53;
  typedef void *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t _g4_t_v59[8];
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef hkArrayUtil::Self *_g4_t_v66;
  typedef int _g4_t_v67;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v33)) > _g4_s4 ? (28u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v34)) > _g4_s5 ? (32u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v35)) > _g4_s6 ? (32u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v36)) > _g4_s7 ? (36u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v37)) > _g4_s8 ? (36u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v38)) > _g4_s9 ? (40u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v39)) > _g4_s10 ? (44u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v40)) > _g4_s11 ? (44u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v41)) > _g4_s12 ? (48u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v42)) > _g4_s13 ? (52u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v43)) > _g4_s14 ? (56u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v44)) > _g4_s15 ? (60u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v45)) > _g4_s16 ? (64u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v46)) > _g4_s17 ? (68u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v47)) > _g4_s18 ? (72u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v48)) > _g4_s19 ? (76u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v49)) > _g4_s20 ? (80u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v50)) > _g4_s21 ? (84u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v51)) > _g4_s22 ? (88u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v52)) > _g4_s23 ? (92u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v53)) > _g4_s24 ? (96u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v54)) > _g4_s25 ? (100u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v55)) > _g4_s26 ? (104u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v56)) > _g4_s27 ? (108u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v57)) > _g4_s28 ? (112u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v58)) > _g4_s29 ? (116u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v59)) > _g4_s30 ? (120u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v60)) > _g4_s31 ? (152u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v61)) > _g4_s32 ? (156u + sizeof(_g4_t_v61)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v62)) > _g4_s33 ? (160u + sizeof(_g4_t_v62)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v63)) > _g4_s34 ? (164u + sizeof(_g4_t_v63)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v64)) > _g4_s35 ? (168u + sizeof(_g4_t_v64)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v65)) > _g4_s36 ? (172u + sizeof(_g4_t_v65)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v66)) > _g4_s37 ? (176u + sizeof(_g4_t_v66)) : _g4_s37,
    _g4_s39 = (188u + sizeof(_g4_t_v67)) > _g4_s38 ? (188u + sizeof(_g4_t_v67)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 84u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 88u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 92u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 100u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 104u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 108u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 112u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 116u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 120u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 152u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 156u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 160u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 164u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 168u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 172u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 176u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 188u);

  v66 = (hkArrayUtil::Self *)&a1;
  v5 = a2;
  result = G4_VCALL<int>(a2, 52, v29, v30, v31, v32, v33, v34, v36, a4, a5, a3, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59[0], v59[1], v59[2], v59[3], v59[4], v59[5], v59[6], v59[7], v60, v61, v62, v63, v64, v65);
  v7 = result;
  if ( result != 0 )
  {
    v55 = result;
    v51 = nullptr;
    v52 = 0;
    v53 = 0x80000000;
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v9 = *address;
    v37 = address;
    v10 = (16 * v7 + 127) & 0xFFFFFF80;
    v35 = *((void **)v9 + 3);
    if ( v10 <= *((uint32_t *)v9 + 2) && (unsigned int)(v11 = v10 + *((uint32_t *)v9 + 3)) <= *((uint32_t *)v9 + 4) )
    {
      *((uint32_t *)v9 + 3) = v11;
      v12 = v35;
      v13 = v35;
    }
    else
    {
      v12 = (void *)hkLifoAllocator::allocateFromNewSlab(v9, (16 * v7 + 127) & 0xFFFFFF80);
      v35 = v12;
      v13 = v12;
    }
    v51 = v12;
    v53 = v7 | 0x80000000;
    v54 = v35;
    if ( v7 > (v7 & 0x3FFFFFFF) )
    {
      v14 = 2 * (v7 & 0x3FFFFFFF);
      savedregs = 16;
      v66 = (hkArrayUtil::Self *)&v42;
      if ( v14 < v7 )
        v14 = v7;
      hkArrayUtil::reserve(v66, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)&v51, v14, savedregs);
      v13 = v51;
    }
    v15 = *v5;
    v52 = v7;
    v16 = (*(int (**)(int *, void *))(v15 + 56))(v5, v13);
    hkQsTransformf::setFromTransformNoScale((hkQsTransformf::Self *)v59, v41);
    if ( v39 != nullptr )
    {
      v60 = *v39;
      v61 = v39[1];
      v62 = v39[2];
      v63 = v39[3];
    }
    v43 = 0;
    v44 = 0;
    v45 = 0x80000000;
    if ( v7 <= 0 )
    {
      v44 = v7;
    }
    else
    {
      hkArrayUtil::reserve((hkArrayUtil::Self *)&v42, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v43, v7, 16);
      v17 = (const hkVector4f::Self *)v16;
      v44 = v7;
      v40 = v7;
      v18 = 0;
      v19 = v17;
      do
      {
        v66 = (hkArrayUtil::Self *)(v43 + 16 * v18++);
        hkVector4f::setTransformedPos(v66, (const hkQsTransformf::Self *)v59, v19);
        v19 = (const hkVector4f::Self *)((char *)v19 + 16);
      }
      while ( v18 != v40 );
    }
    v20 = (hkGeometry::Self *)(*(int (**)(uint32_t, int))(**((uint32_t **)*v37 + 11) + 8))(*((uint32_t *)*v37 + 11), 32);
    *((uint32_t *)v20 + 1) = -65535;
    *(uint32_t *)v20 = ((uint32_t)(uintptr_t)&off_20586B8);
    v48 = v43;
    v21 = v44;
    *((uint32_t *)v20 + 2) = 0;
    *((uint32_t *)v20 + 3) = 0;
    *((uint32_t *)v20 + 4) = 0x80000000;
    *((uint32_t *)v20 + 5) = 0;
    *((uint32_t *)v20 + 6) = 0;
    *((uint32_t *)v20 + 7) = 0x80000000;
    v49 = v21;
    v50 = 16;
    hkGeometryUtility::createConvexGeometry(&v48, v20);
    v22 = (hkDisplayConvex::Self *)(*(int (**)(uint32_t, int))(**((uint32_t **)*v37 + 11) + 8))(
                               *((uint32_t *)*v37 + 11),
                               96);
    hkDisplayConvex::Construct(v22, v20);
    v23 = v38;
    v24 = v38[1];
    if ( v24 == (v38[2] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v38, 4, v67);
      v24 = v38[1];
      v23 = v38;
    }
    *(uint32_t *)(*v23 + 4 * v24) = (uint32_t)(uintptr_t)(v22);
    v25 = v45;
    ++v23[1];
    v44 = 0;
    if ( v25 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v43,
        16 * v25);
    v26 = 0;
    v45 = 0x80000000;
    if ( v51 != v54 )
      v26 = v52;
    v43 = 0;
    v27 = *v37;
    v52 = v26;
    v28 = (16 * v55 + 127) & 0xFFFFFF80;
    if ( v28 > *((uint32_t *)v27 + 2) || *((void **)v27 + 3) != (char *)v54 + v28 || v54 == *((void **)v27 + 5) )
      hkLifoAllocator::slowBlockFree(v27, (char *)v54, (16 * v55 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v27 + 3) = (uint32_t)(uintptr_t)(v54);
    result = v53;
    v52 = 0;
    if ( v53 >= 0 )
      return (*(int (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v51,
               16 * v53);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_ConvexPiece  (binary VA: 0x181c620)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_ConvexPiece
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_ConvexPiece(int a1, uint32_t *a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4)
{
  uint32_t *v4;
  int *v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  const hkVector4f::Self *v22;
  hkDisplayConvex::Self *v23;
  int v24;
  int result;
  int savedregs;
  typedef int _g4_t_address;
  typedef hkMemoryAllocator::Self *_g4_t_v27;
  typedef int *_g4_t_v28;
  typedef int *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef hkTransformf::Self *_g4_t_v33;
  typedef int *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37[520];
  typedef hkArrayUtil::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (0u + sizeof(_g4_t_address)) > _g4_s0 ? (0u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v31)) > _g4_s5 ? (24u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v32)) > _g4_s6 ? (28u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v33)) > _g4_s7 ? (32u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v34)) > _g4_s8 ? (36u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v35)) > _g4_s9 ? (36u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v36)) > _g4_s10 ? (40u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v37)) > _g4_s11 ? (44u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (564u + sizeof(_g4_t_v38)) > _g4_s12 ? (564u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (576u + sizeof(_g4_t_v39)) > _g4_s13 ? (576u + sizeof(_g4_t_v39)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 564u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 576u);

  v38 = (hkArrayUtil::Self *)&a1;
  v4 = a2;
  v30 = a2;
  v33 = a3;
  v27 = a4;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (int *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                *(uint32_t *)(*(uint32_t *)address + 44),
                32);
  v5[1] = -65535;
  *v5 = (int)((uint32_t)(uintptr_t)&off_20586B8);
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0x80000000;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0x80000000;
  if ( (int)v4[10] > 0 )
  {
    v32 = 0;
    v28 = v5 + 5;
    v6 = v5;
    v29 = v5 + 2;
    do
    {
      v34 = v6;
      v7 = G4_VCALL<int>(v30[8] + 16, 24, *(uint32_t *)(v30[9] + 4 * v32), v37);
      v8 = v34;
      v9 = v7;
      v10 = v34[6];
      v11 = v34[7] & 0x3FFFFFFF;
      v12 = v10 + 1;
      if ( v10 + 1 > v11 )
      {
        v13 = 2 * v11;
        v38 = (hkArrayUtil::Self *)&v36;
        savedregs = 16;
        if ( v13 >= v12 )
          v12 = v13;
        hkArrayUtil::reserve(v38, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v28, v12, savedregs);
        v8 = v34;
        v12 = v34[6] + 1;
      }
      v14 = (uint32_t *)(v8[5] + 16 * v10);
      v8[6] = v12;
      v15 = v8[3];
      *v14 = v15;
      v14[2] = v15 + 2;
      v14[1] = v15 + 1;
      v14[3] = -1;
      v35 = v9 + 32;
      v16 = 0;
      v17 = v8;
      do
      {
        v18 = v17[3];
        v19 = v17[4] & 0x3FFFFFFF;
        v20 = v18 + 1;
        if ( v18 + 1 > v19 )
        {
          v21 = 2 * v19;
          v31 = v17[3];
          savedregs = 16;
          v38 = (hkArrayUtil::Self *)&v36;
          if ( v21 >= v20 )
            v20 = v21;
          hkArrayUtil::reserve(v38, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v29, v20, savedregs);
          v20 = v17[3] + 1;
          v18 = v31;
        }
        v17[3] = v20;
        v22 = (const hkVector4f::Self *)(v16 + v35);
        v16 += 16;
        hkVector4f::setTransformedPos((hkVector4f::Self *)(v17[2] + 16 * v18), v33, v22);
      }
      while ( v16 != 48 );
      ++v32;
      v6 = v17;
    }
    while ( v30[10] > v32 );
    v5 = v17;
  }
  v23 = (hkDisplayConvex::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                             *(uint32_t *)(*(uint32_t *)address + 44),
                             96);
  hkDisplayConvex::Construct(v23, (hkGeometry::Self *)v5);
  v24 = *((uint32_t *)v27 + 1);
  if ( v24 == (*((uint32_t *)v27 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v27, 4, v39);
    v24 = *((uint32_t *)v27 + 1);
  }
  result = *(uint32_t *)v27;
  *(uint32_t *)(*(uint32_t *)v27 + 4 * v24) = (uint32_t)(uintptr_t)(v23);
  ++*((uint32_t *)v27 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_UserShapes  (binary VA: 0x181c900)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_UserShapes
// ----------------------------------------------------------------------------
uint8_t * hkpShapeDisplayBuilder::buildShapeDisplay_UserShapes(uint8_t *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;

  v5 = 0;
  *a1 = 0;
  v6 = (int)(uintptr_t)(hkSingleton<hkpUserShapeDisplayBuilder::Self>::s_instance);
  v7 = *(uint32_t *)(hkSingleton<hkpUserShapeDisplayBuilder::Self>::s_instance + 12);
  if ( v7 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *(uint32_t *)(v6 + 8) + 8 * v5;
        if ( *(uint32_t *)(v8 + 4) == *(uint8_t *)(a3 + 8) )
          break;
        if ( ++v5 >= v7 )
          return a1;
      }
      ++v5;
      (*(void (**)(int, int, int, int))v8)(a3, a4, a5, a2);
      *a1 = 1;
      v6 = (int)(uintptr_t)(hkSingleton<hkpUserShapeDisplayBuilder::Self>::s_instance);
      v7 = *(uint32_t *)(hkSingleton<hkpUserShapeDisplayBuilder::Self>::s_instance + 12);
    }
    while ( v5 < v7 );
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiSphere  (binary VA: 0x181c9a0)
// Original: hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiSphere
// ----------------------------------------------------------------------------
char * hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiSphere(char *a1, int a2, int a3, int a4, int a5, int *a6, int a7, hkMemoryAllocator::Self *a8)
{
  int v8;
  int v9;
  hkDisplaySphere::Self *v10;
  uint32_t *v11;
  int v12;
  int v13;
  char v14;
  typedef int _g4_t_v16;
  typedef int _g4_t_address;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef hkDisplaySphere::Self *_g4_t_v20;
  typedef uint32_t _g4_t_v21[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_address)) > _g4_s1 ? (20u + sizeof(_g4_t_address)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v18)) > _g4_s2 ? (24u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);

  v8 = *(uint32_t *)(a7 + 20);
  if ( v8 == -1 )
  {
    *(uint32_t *)(a7 + 20) = 0;
    v8 = 0;
  }
  v9 = *(uint32_t *)(a3 + 16);
  if ( v9 > v8 && *a6 > 0 )
  {
    v19 = v8;
    v18 = a3 + 32;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v8 = v19;
    while ( 1 )
    {
      v21[3] = *(uint32_t *)(v18 + 16 * v8 + 12);
      memset(v21, 0, 12);
      v20 = (hkDisplaySphere::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                 *(uint32_t *)(*(uint32_t *)address + 44),
                                 128);
      hkDisplaySphere::Construct(v20, (const hkSphere::Self *)v21, *(uint32_t *)(a2 + 8));
      v10 = v20;
      v11 = (uint32_t *)(v18 + 16 * *(uint32_t *)(a7 + 20));
      *((uint32_t *)v20 + 16) = *v11;
      *((uint32_t *)v20 + 17) = v11[1];
      *((uint32_t *)v20 + 18) = v11[2];
      *((uint32_t *)v20 + 19) = v11[3];
      v12 = *((uint32_t *)a8 + 1);
      if ( v12 == (*((uint32_t *)a8 + 2) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a8, 4, v16);
        v12 = *((uint32_t *)a8 + 1);
        v10 = v20;
      }
      *(uint32_t *)(*(uint32_t *)a8 + 4 * v12) = (uint32_t)(uintptr_t)(v10);
      ++*((uint32_t *)a8 + 1);
      ++*(uint32_t *)(a7 + 20);
      v13 = *a6 - 1;
      *a6 = v13;
      v8 = *(uint32_t *)(a7 + 20);
      v9 = *(uint32_t *)(a3 + 16);
      if ( v8 >= v9 )
        break;
      if ( v13 <= 0 )
        goto LABEL_11;
    }
  }
  if ( v8 == v9 )
  {
    *(uint32_t *)(a7 + 20) = -1;
    v14 = 1;
  }
  else
  {
LABEL_11:
    v14 = 0;
  }
  *a1 = v14;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::getCurrentRawGeometry  (binary VA: 0x181cb50)
// Original: hkpShapeDisplayBuilder::getCurrentRawGeometry
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::getCurrentRawGeometry(int a1, uint32_t *a2)
{
  int result;
  int address;
  hkGeometry::Self *v4;
  hkDisplayConvex::Self *v5;
  uint32_t *v6;
  int v7;
  int v8;

  result = *(uint32_t *)(a1 + 12);
  if ( result == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v4 = (hkGeometry::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                         *(uint32_t *)(*(uint32_t *)address + 44),
                         32);
    *((uint32_t *)v4 + 1) = -65535;
    *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_20586B8);
    *((uint32_t *)v4 + 2) = 0;
    *((uint32_t *)v4 + 3) = 0;
    *((uint32_t *)v4 + 4) = 0x80000000;
    *((uint32_t *)v4 + 5) = 0;
    *((uint32_t *)v4 + 6) = 0;
    *((uint32_t *)v4 + 7) = 0x80000000;
    v5 = (hkDisplayConvex::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)address + 44),
                              96);
    hkDisplayConvex::Construct(v5, v4);
    v6 = a2;
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v5);
    v7 = a2[1];
    if ( v7 == (a2[2] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a2, 4, v8);
      v5 = *(hkDisplayConvex::Self **)(a1 + 12);
      v6 = a2;
      v7 = a2[1];
    }
    *(uint32_t *)(*v6 + 4 * v7) = (uint32_t)(uintptr_t)(v5);
    ++v6[1];
    return *(uint32_t *)(a1 + 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsCompress  (binary VA: 0x181cc60)
// Original: hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsCompress
// ----------------------------------------------------------------------------
void hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsCompress(int a1, int a2, hkTransformf::Self *a3, uint32_t *a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  uint16_t *v7;
  char v8;
  int v9;
  int i;
  uint32_t *v11;
  unsigned int inserted;
  hkVector4f::Self *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  float *v20;
  unsigned int v21;
  hkVector4f::Self *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  hkVector4f::Self *v39;
  int v40;
  float *v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef hkTransformf::Self *_g4_t_v47;
  typedef const hkQsTransformf::Self *_g4_t_v48;
  typedef int *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef hkVector4f::Self *_g4_t_v52;
  typedef hkVector4f::Self *_g4_t_v53;
  typedef hkVector4f::Self *_g4_t_v54;
  typedef hkVector4f::Self *_g4_t_v55;
  typedef hkVector4f::Self *_g4_t_v56;
  typedef float *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef char _g4_t_v60[4];
  typedef int _g4_t_v61;
  typedef uint32_t _g4_t_v62[3];
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t _g4_t_v66[3];
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int *_g4_t_v73;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v43)) > _g4_s1 ? (0u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v44)) > _g4_s2 ? (16u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v45)) > _g4_s3 ? (20u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v46)) > _g4_s4 ? (24u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v47)) > _g4_s5 ? (28u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v48)) > _g4_s6 ? (32u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v49)) > _g4_s7 ? (36u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v50)) > _g4_s8 ? (40u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v51)) > _g4_s9 ? (52u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v52)) > _g4_s10 ? (64u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v53)) > _g4_s11 ? (64u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v54)) > _g4_s12 ? (64u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v55)) > _g4_s13 ? (64u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v56)) > _g4_s14 ? (64u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v57)) > _g4_s15 ? (64u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v58)) > _g4_s16 ? (72u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v59)) > _g4_s17 ? (76u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v60)) > _g4_s18 ? (80u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v61)) > _g4_s19 ? (84u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v62)) > _g4_s20 ? (88u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v63)) > _g4_s21 ? (100u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v64)) > _g4_s22 ? (104u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v65)) > _g4_s23 ? (108u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v66)) > _g4_s24 ? (112u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v67)) > _g4_s25 ? (124u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v68)) > _g4_s26 ? (128u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v69)) > _g4_s27 ? (132u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v70)) > _g4_s28 ? (136u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v71)) > _g4_s29 ? (140u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v72)) > _g4_s30 ? (144u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v73)) > _g4_s31 ? (156u + sizeof(_g4_t_v73)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 64u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 88u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 100u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 104u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 108u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 112u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 132u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 136u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 140u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 144u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 156u);

  v73 = &a1;
  v4 = a2;
  v47 = a3;
  v44 = a2;
  v5 = *(uint32_t **)(hkpShapeDisplayBuilder::getCurrentRawGeometry(a1, a4) + 8);
  v66[0] = 0;
  v59 = v5;
  v6 = *(uint32_t *)(v4 + 188);
  v66[1] = 0;
  v66[2] = -1;
  v45 = v6;
  if ( v6 <= 0 )
  {
    hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v66,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  }
  else
  {
    v46 = 0;
    do
    {
      v61 = 0;
      v62[0] = 0;
      v62[1] = -1;
      v58 = *(uint32_t *)(v44 + 184) + 112 * v46;
      v50 = *(uint32_t *)(v58 + 20);
      if ( v50 > 0 )
      {
        v51 = 0;
        v49 = (int *)(v59 + 5);
        v48 = (const hkQsTransformf::Self *)(v58 + 64);
        do
        {
          v7 = (uint16_t *)(*(uint32_t *)(v58 + 32) + v51 * *(uint16_t *)(v58 + 44));
          v8 = *(uint8_t *)(v58 + 46);
          v9 = v51 & *(char *)(v58 + 47);
          switch ( v8 )
          {
            case 2:
              v63 = *v7;
              v64 = v7[v9 + 1];
              v65 = v7[(v9 ^ 1) + 1];
              break;
            case 3:
              v63 = *(uint32_t *)v7;
              v64 = *(uint32_t *)&v7[2 * v9 + 2];
              v65 = *(uint32_t *)&v7[2 * (v9 ^ 1) + 2];
              break;
            case 1:
              v63 = *(uint8_t *)v7;
              v64 = *((uint8_t *)v7 + v9 + 1);
              v65 = *((uint8_t *)v7 + (v9 ^ 1) + 1);
              break;
            default:
              v63 = 0;
              v64 = 0;
              v65 = 0;
              break;
          }
          for ( i = 0; i != 3; ++i )
          {
            v11 = (uint32_t *)(*(uint32_t *)(v58 + 24) + *(&v63 + i) * *(uint16_t *)(v58 + 36));
            v52 = (hkVector4f::Self *)v59[3];
            inserted = hkMapBase_unsigned_long_unsigned_l_393416::findOrInsertKey(
                         (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v66,
                         (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                         (unsigned int)(uintptr_t)(v11),
                         (unsigned int)(uintptr_t)(v52));
            v13 = *(hkVector4f::Self **)(v66[0] + 8 * inserted + 4);
            *(&v67 + i) = (int)(uintptr_t)(v13);
            if ( v52 == v13 )
            {
              v38 = v59[3];
              if ( v38 == (v59[4] & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)(v59 + 2),
                  16,
                  v42);
                v38 = v59[3];
              }
              v54 = (hkVector4f::Self *)v59[2];
              v59[3] = v38 + 1;
              v39 = (hkVector4f::Self *)((char *)v54 + 16 * v38);
              *(uint32_t *)v39 = *v11;
              v55 = v39;
              *((uint32_t *)v39 + 1) = v11[1];
              *((uint32_t *)v39 + 2) = v11[2];
              hkVector4f::setTransformedPos(v39, v48, v39);
              hkVector4f::setTransformedPos(v55, v47, v55);
            }
          }
          v14 = v59[6];
          v15 = v59[7] & 0x3FFFFFFF;
          v16 = v14 + 1;
          if ( v14 + 1 > v15 )
          {
            v17 = 2 * v15;
            if ( v17 >= v16 )
              v16 = v17;
            hkArrayUtil::reserve(
              (hkArrayUtil::Self *)v60,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              v49,
              v16,
              16);
            v16 = v59[6] + 1;
          }
          v18 = 3;
          v19 = (uint32_t *)(v59[5] + 16 * v14);
          v59[6] = v16;
          *v19 = v67;
          v19[1] = v68;
          v19[2] = v69;
          v19[3] = -1;
          if ( (float)((float)((float)(*(float *)(v58 + 48) * *(float *)(v58 + 48))
                             + (float)(*(float *)(v58 + 52) * *(float *)(v58 + 52)))
                     + (float)(*(float *)(v58 + 56) * *(float *)(v58 + 56))) > 0.0 )
          {
            do
            {
              v20 = (float *)(*(uint32_t *)(v58 + 24) + v62[v18] * *(uint16_t *)(v58 + 36));
              v53 = (hkVector4f::Self *)v59[3];
              v21 = hkMapBase_unsigned_long_unsigned_l_393416::findOrInsertKey(
                      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v61,
                      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                      (unsigned int)(uintptr_t)(v20),
                      (unsigned int)(uintptr_t)(v53));
              v22 = *(hkVector4f::Self **)(v61 + 8 * v21 + 4);
              *(&v67 + v18) = (int)(uintptr_t)(v22);
              if ( v53 == v22 )
              {
                v40 = v59[3];
                if ( v40 == (v59[4] & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)(v59 + 2),
                    16,
                    v43);
                  v40 = v59[3];
                }
                v56 = (hkVector4f::Self *)v59[2];
                v59[3] = v40 + 1;
                v41 = (float *)((char *)v56 + 16 * v40);
                *v41 = *v20;
                v57 = v41;
                v41[1] = v20[1];
                v41[2] = v20[2];
                hkVector4f::setTransformedPos((hkVector4f::Self *)v41, v48, (const hkVector4f::Self *)v41);
                *v57 = *v57 + *(float *)(v58 + 48);
                v57[1] = v57[1] + *(float *)(v58 + 52);
                v57[2] = v57[2] + *(float *)(v58 + 56);
                v57[3] = v57[3] + *(float *)(v58 + 60);
                hkVector4f::setTransformedPos((hkVector4f::Self *)v57, v47, (const hkVector4f::Self *)v57);
              }
              ++v18;
            }
            while ( v18 != 6 );
            v23 = v59[6];
            v24 = v59[7] & 0x3FFFFFFF;
            v25 = v23 + 7;
            if ( v23 + 7 > v24 )
            {
              v26 = 2 * v24;
              if ( v26 >= v25 )
                v25 = v26;
              hkArrayUtil::reserve(
                (hkArrayUtil::Self *)v60,
                (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                v49,
                v25,
                16);
              v25 = v59[6] + 7;
            }
            v27 = 16 * v23;
            v28 = v67;
            v29 = v68;
            v30 = (uint32_t *)(v59[5] + v27);
            v59[6] = v25;
            v31 = v71;
            v32 = v70;
            v30[2] = v28;
            v30[8] = v71;
            v30[13] = v69;
            v33 = v67;
            v30[5] = v31;
            v30[17] = v33;
            v34 = v72;
            v35 = v69;
            v30[9] = v72;
            v30[12] = v34;
            v30[16] = v34;
            v30[18] = v35;
            v30[20] = v34;
            *v30 = v32;
            v30[1] = v29;
            v30[3] = -1;
            v30[4] = v32;
            v30[6] = v29;
            v30[7] = -1;
            v30[10] = v29;
            v30[11] = -1;
            v30[14] = v29;
            v30[15] = -1;
            v30[19] = -1;
            v30[21] = v32;
            v36 = v67;
            v30[24] = v34;
            v37 = v71;
            v30[22] = v36;
            v30[23] = -1;
            v30[25] = v37;
            v30[26] = v32;
            v30[27] = -1;
          }
          ++v51;
        }
        while ( v51 != v50 );
      }
      hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v61,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
      hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
      ++v46;
    }
    while ( v46 != v45 );
    hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v66,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  }
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsStorage  (binary VA: 0x181d280)
// Original: hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsStorage
// ----------------------------------------------------------------------------
uint32_t * hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsStorage(int a1, int a2, hkTransformf::Self *a3, uint32_t *a4)
{
  int v4;
  uint32_t *result;
  float v6; // xmm0_4
  int v7;
  int v8;
  int v9;
  int v10;
  hkVector4f::Self *v11;
  int v12;
  hkVector4f::Self *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  char v27;
  typedef int *_g4_t_v28;
  typedef int *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef hkTransformf::Self *_g4_t_v35;
  typedef const hkQsTransformf::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t _g4_t_v44[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v29)) > _g4_s1 ? (4u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_i)) > _g4_s4 ? (16u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v33)) > _g4_s5 ? (20u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v34)) > _g4_s6 ? (24u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v35)) > _g4_s7 ? (28u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v36)) > _g4_s8 ? (32u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v37)) > _g4_s9 ? (36u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v38)) > _g4_s10 ? (40u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v39)) > _g4_s11 ? (48u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v40)) > _g4_s12 ? (52u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v41)) > _g4_s13 ? (52u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v42)) > _g4_s14 ? (56u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v43)) > _g4_s15 ? (56u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v44)) > _g4_s16 ? (60u + sizeof(_g4_t_v44)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);

  v44[3] = (uint32_t)(uintptr_t)(&a1);
  v4 = a2;
  v35 = a3;
  v30 = a2;
  result = *(uint32_t **)(hkpShapeDisplayBuilder::getCurrentRawGeometry(a1, a4) + 8);
  v33 = result;
  v31 = *(uint32_t *)(v4 + 188);
  if ( v31 > 0 )
  {
    v29 = (int *)(result + 2);
    v28 = (int *)(result + 5);
    for ( i = 0; i != v31; ++i )
    {
      v34 = *(uint32_t *)(v30 + 184) + 112 * i;
      v38 = v33[3];
      v37 = *(uint32_t *)(*(uint32_t *)(v30 + 240) + 4 * i);
      v39 = *(uint32_t *)(v37 + 12);
      v6 = (float)((float)(*(float *)(v34 + 48) * *(float *)(v34 + 48))
                 + (float)(*(float *)(v34 + 52) * *(float *)(v34 + 52)))
         + (float)(*(float *)(v34 + 56) * *(float *)(v34 + 56));
      v7 = v39 * (2 - (v6 <= 0.0));
      v8 = v33[4] & 0x3FFFFFFF;
      v9 = v7 + v38;
      if ( v7 + v38 > v8 )
      {
        v10 = 2 * v8;
        if ( v9 < v10 )
          v9 = v10;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v44, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v29, v9, 16);
        v9 = v7 + v33[3];
      }
      v33[3] = v9;
      v11 = (hkVector4f::Self *)(v33[2] + 16 * v38);
      if ( v39 > 0 )
      {
        v12 = 0;
        v36 = (const hkQsTransformf::Self *)(v34 + 64);
        v13 = (hkVector4f::Self *)((char *)v11 + 16 * v39);
        do
        {
          while ( 1 )
          {
            v40 = v12;
            v42 = 16 * v12;
            v14 = *(uint32_t *)(v37 + 8);
            *(uint32_t *)v11 = *(uint32_t *)(v14 + 16 * v12);
            *((uint32_t *)v11 + 1) = *(uint32_t *)(v14 + 16 * v12 + 4);
            *((uint32_t *)v11 + 2) = *(uint32_t *)(v14 + 16 * v12 + 8);
            *((uint32_t *)v11 + 3) = *(uint32_t *)(v14 + 16 * v12 + 12);
            hkVector4f::setTransformedPos(v11, v36, v11);
            hkVector4f::setTransformedPos(v11, v35, v11);
            if ( v6 > 0.0 )
              break;
            v12 = v40 + 1;
            v11 = (hkVector4f::Self *)((char *)v11 + 16);
            v13 = (hkVector4f::Self *)((char *)v13 + 16);
            if ( v40 + 1 == v39 )
              goto LABEL_12;
          }
          v11 = (hkVector4f::Self *)((char *)v11 + 16);
          v15 = *(uint32_t *)(v37 + 8);
          *(uint32_t *)v13 = *(uint32_t *)(v15 + v42);
          *((uint32_t *)v13 + 1) = *(uint32_t *)(v15 + v42 + 4);
          *((uint32_t *)v13 + 2) = *(uint32_t *)(v15 + v42 + 8);
          *((uint32_t *)v13 + 3) = *(uint32_t *)(v15 + v42 + 12);
          hkVector4f::setTransformedPos(v13, v36, v13);
          *(float *)v13 = *(float *)v13 + *(float *)(v34 + 48);
          *((float *)v13 + 1) = *((float *)v13 + 1) + *(float *)(v34 + 52);
          *((float *)v13 + 2) = *((float *)v13 + 2) + *(float *)(v34 + 56);
          *((float *)v13 + 3) = *((float *)v13 + 3) + *(float *)(v34 + 60);
          hkVector4f::setTransformedPos(v13, v35, v13);
          v13 = (hkVector4f::Self *)((char *)v13 + 16);
          v12 = v40 + 1;
        }
        while ( v40 + 1 != v39 );
      }
LABEL_12:
      v16 = *(uint32_t *)(v34 + 20) * (v6 <= 0.0 ? 1 : 8);
      v17 = v33[6];
      v18 = v33[7] & 0x3FFFFFFF;
      v19 = v17 + v16;
      if ( v17 + v16 > v18 )
      {
        v20 = 2 * v18;
        if ( v19 < v20 )
          v19 = v20;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v44, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v28, v19, 16);
        v19 = v16 + v33[6];
      }
      v41 = 0;
      v33[6] = v19;
      v21 = (uint32_t *)(16 * v17 + v33[5]);
      if ( *(int *)(v34 + 20) > 0 )
      {
        v22 = 0;
        do
        {
          v25 = (uint32_t *)(*(uint32_t *)(v34 + 32) + v22 * *(uint16_t *)(v34 + 44));
          v26 = v22 & *(char *)(v34 + 47);
          v27 = *(uint8_t *)(v34 + 46);
          switch ( v27 )
          {
            case 2:
              v43 = v38 + *(uint16_t *)v25;
              v24 = v38 + *((uint16_t *)v25 + v26 + 1);
              v23 = v38 + *((uint16_t *)v25 + (v26 ^ 1) + 1);
              break;
            case 3:
              v43 = v38 + *v25;
              v24 = v38 + v25[v26 + 1];
              v23 = v25[(v26 ^ 1) + 1] + v38;
              break;
            case 1:
              v43 = v38 + *(uint8_t *)v25;
              v24 = v38 + *((uint8_t *)v25 + v26 + 1);
              v23 = v38 + *((uint8_t *)v25 + (v26 ^ 1) + 1);
              break;
            default:
              v23 = 0;
              v24 = 0;
              v43 = 0;
              break;
          }
          v21[1] = v24;
          *v21 = v43;
          v21[2] = v23;
          v21[3] = -1;
          if ( v6 > 0.0 )
          {
            v21[5] = v24;
            v21[6] = v43;
            v21[4] = v43 + v39;
            v21[10] = v24;
            v21[14] = v24;
            v21[8] = v43 + v39;
            v21[18] = v24;
            v21[17] = v23;
            v21[21] = v43;
            v21[22] = v23;
            v21[9] = v24 + v39;
            v21[12] = v24 + v39;
            v21[7] = -1;
            v21[11] = -1;
            v21[13] = v23 + v39;
            v21[15] = -1;
            v21[16] = v23 + v39;
            v21[19] = -1;
            v21[20] = v23 + v39;
            v21[23] = -1;
            v21[24] = v23 + v39;
            v21[25] = v43 + v39;
            v21[26] = v43;
            v21[27] = -1;
            v21[29] = v24 + v39;
            v21[28] = v23 + v39;
            v21[30] = v43 + v39;
            v21[31] = -1;
            v21 += 28;
          }
          ++v41;
          v21 += 4;
          v22 = v41;
        }
        while ( *(uint32_t *)(v34 + 20) > v41 );
      }
      result = (uint32_t *)v31;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_SampledHeightField  (binary VA: 0x181d720)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_SampledHeightField
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_SampledHeightField(int a1, float *a2, hkTransformf::Self *a3, uint32_t *a4)
{
  float *v4;
  int *v5;
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  float *v18;
  int result;
  int v20;
  float *v21;
  int v22;
  float *v23;
  int v24;
  int v25;
  float v26; // xmm0_4
  int v27;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  uint32_t *v36;
  typedef hkTransformf::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef float _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef float *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_i;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51[4];
  typedef float _g4_t_v52[10];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v38)) > _g4_s1 ? (20u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v39)) > _g4_s2 ? (24u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v40)) > _g4_s3 ? (32u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v41)) > _g4_s4 ? (36u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v42)) > _g4_s5 ? (36u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v43)) > _g4_s6 ? (36u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v44)) > _g4_s7 ? (40u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v45)) > _g4_s8 ? (40u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v46)) > _g4_s9 ? (44u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v47)) > _g4_s10 ? (48u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_i)) > _g4_s11 ? (48u + sizeof(_g4_t_i)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v49)) > _g4_s12 ? (48u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (55u + sizeof(_g4_t_v50)) > _g4_s13 ? (55u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v51)) > _g4_s14 ? (56u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v52)) > _g4_s15 ? (60u + sizeof(_g4_t_v52)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 55u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);

  LODWORD(v52[6]) = (uint32_t)(uintptr_t)(&a1);
  v4 = a2;
  v46 = a2;
  v37 = a3;
  v5 = *(int **)(hkpShapeDisplayBuilder::getCurrentRawGeometry(a1, a4) + 8);
  v6 = v4[16];
  v7 = v4[17];
  v8 = v4[18];
  v9 = v4[19];
  v10 = *((uint32_t *)v4 + 11) * *((uint32_t *)v4 + 10);
  v39 = v5[3];
  v11 = v5[4] & 0x3FFFFFFF;
  v12 = v10 + v39;
  if ( v10 + v39 > v11 )
  {
    v13 = 2 * v11;
    if ( v13 >= v12 )
      v12 = v13;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v51, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v5 + 2, v12, 16);
    v12 = v10 + v5[3];
  }
  v5[3] = v12;
  v14 = v5[6];
  v38 = v5[2] + 16 * v39;
  v15 = v5[7] & 0x3FFFFFFF;
  v16 = v14 + 2 * (*((uint32_t *)v46 + 11) - 1) * (*((uint32_t *)v46 + 10) - 1);
  if ( v16 > v15 )
  {
    v17 = 2 * v15;
    v47 = 2 * (*((uint32_t *)v46 + 11) - 1) * (*((uint32_t *)v46 + 10) - 1);
    if ( v17 >= v16 )
      v16 = v17;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v51, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v5 + 5, v16, 16);
    v16 = v47 + v5[6];
  }
  v5[6] = v16;
  v44 = 16 * v14;
  v18 = v46;
  result = v5[5];
  v45 = result + v44;
  v20 = *((uint32_t *)v46 + 10);
  if ( v20 > 0 )
  {
    result = *((uint32_t *)v46 + 11);
    for ( i = 0; i < v20; ++i )
    {
      if ( result > 0 )
      {
        v21 = v18;
        v22 = 0;
        v23 = v21;
        do
        {
          v41 = ((long double (*)(float *, int, int))*(uint32_t *)(*(uint32_t *)v23 + 88))(v23, i, v22);
          v24 = *((uint32_t *)v23 + 11) * i;
          v52[1] = v41 * v7;
          v25 = v22 + v24;
          v26 = (float)v22++ * v8;
          v52[2] = v26;
          v52[0] = (float)i * v6;
          v52[3] = 0.0 * v9;
          hkVector4f::setTransformedPos((hkVector4f::Self *)(v38 + 16 * v25), v37, (const hkVector4f::Self *)v52);
          result = *((uint32_t *)v23 + 11);
        }
        while ( result > v22 );
        v18 = v23;
        v20 = *((uint32_t *)v23 + 10);
      }
    }
    if ( v20 > 1 )
    {
      v27 = result;
      v40 = 0;
      do
      {
        v28 = v27 - 1;
        if ( v27 - 1 > 0 )
        {
          v49 = 0;
          do
          {
            v32 = v39 + v27 * v40;
            v33 = v32 + v27;
            v43 = v32;
            (*(void (**)(char *))(*(uint32_t *)v46 + 92))(&v50);
            v34 = 2 * v40 * v28;
            v35 = v49 + v33;
            if ( v50 != 0 )
            {
              v29 = v49 + v43;
              v42 = v35;
              v30 = v35 + 1;
              v31 = (uint32_t *)(v45 + 16 * (v34 + 2 * v49));
              v31[2] = v30;
              *v31 = v29;
              v31[1] = v29 + 1;
              v31[3] = -1;
              v31[5] = v30;
              v31[4] = v29;
              v31[6] = v42;
              v31[7] = -1;
            }
            else
            {
              v36 = (uint32_t *)(v45 + 16 * (v34 + 2 * v49));
              v36[1] = v49 + v43 + 1;
              *v36 = v49 + v43;
              v36[2] = v35;
              v36[3] = -1;
              v36[4] = v49 + v43 + 1;
              v36[6] = v35;
              v36[7] = -1;
              v36[5] = v35 + 1;
            }
            ++v49;
            v27 = *((uint32_t *)v46 + 11);
            v28 = v27 - 1;
          }
          while ( v27 - 1 > v49 );
          v20 = *((uint32_t *)v46 + 10);
        }
        ++v40;
        result = v20 - 1;
      }
      while ( v20 - 1 > v40 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_MultiRay  (binary VA: 0x181da60)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_MultiRay
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_MultiRay(int a1, int a2, hkTransformf::Self *a3, uint32_t *a4)
{
  int v4;
  uint32_t *v5;
  int result;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  hkVector4f::Self *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  float *v19;
  float v20; // xmm0_4
  int v21;
  int v22;
  int v23;
  int v24;
  hkVector4f::Self *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  typedef int *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef hkTransformf::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef char _g4_t_v37[4];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int *_g4_t_v46;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v32)) > _g4_s0 ? (4u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v33)) > _g4_s1 ? (8u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v34)) > _g4_s2 ? (12u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v35)) > _g4_s3 ? (16u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v36)) > _g4_s4 ? (20u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v37)) > _g4_s5 ? (24u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v38)) > _g4_s6 ? (28u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v39)) > _g4_s7 ? (32u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v40)) > _g4_s8 ? (36u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v41)) > _g4_s9 ? (40u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v42)) > _g4_s10 ? (44u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v43)) > _g4_s11 ? (48u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v44)) > _g4_s12 ? (52u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v45)) > _g4_s13 ? (56u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v46)) > _g4_s14 ? (68u + sizeof(_g4_t_v46)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);

  v46 = &a1;
  v4 = a2;
  v35 = a2;
  v34 = a3;
  v5 = *(uint32_t **)(hkpShapeDisplayBuilder::getCurrentRawGeometry(a1, a4) + 8);
  result = *(uint32_t *)(v4 + 20);
  if ( result > 0 )
  {
    v36 = 0;
    v33 = 0;
    v32 = (int *)(v5 + 2);
    do
    {
      v7 = v5[3];
      v8 = (int *)(*(uint32_t *)(v35 + 16) + 32 * v36);
      v38 = *v8;
      v39 = v8[1];
      v40 = v8[2];
      v41 = v8[3];
      v42 = v8[4];
      v43 = v8[5];
      v9 = v8[6];
      v10 = v8[7];
      v44 = v9;
      v45 = v10;
      v11 = v5[4] & 0x3FFFFFFF;
      v12 = v7 + 1;
      if ( v7 + 1 > v11 )
      {
        v13 = 2 * v11;
        if ( v13 >= v12 )
          v12 = v13;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v37, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v32, v12, 16);
        v12 = v5[3] + 1;
      }
      v14 = (hkVector4f::Self *)(v5[2] + 16 * v7);
      v5[3] = v12;
      *(uint32_t *)v14 = v38;
      *((uint32_t *)v14 + 1) = v39;
      *((uint32_t *)v14 + 2) = v40;
      *((uint32_t *)v14 + 3) = v41;
      hkVector4f::setTransformedPos(v14, v34, v14);
      v15 = v5[3];
      v16 = v5[4] & 0x3FFFFFFF;
      v17 = v15 + 1;
      if ( v15 + 1 > v16 )
      {
        v18 = 2 * v16;
        if ( v18 >= v17 )
          v17 = v18;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v37, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v32, v17, 16);
        v17 = v5[3] + 1;
      }
      v19 = (float *)(v5[2] + 16 * v15);
      v5[3] = v17;
      *(uint32_t *)v19 = v38;
      v20 = *v19 + 0.01f;
      *((uint32_t *)v19 + 1) = v39;
      *((uint32_t *)v19 + 2) = v40;
      *((uint32_t *)v19 + 3) = v41;
      *v19 = v20;
      v19[1] = v19[1] + 0.0;
      v19[2] = v19[2] + 0.0;
      v19[3] = v19[3] + 0.0;
      v21 = v5[3];
      v22 = v5[4] & 0x3FFFFFFF;
      v23 = v21 + 1;
      if ( v21 + 1 > v22 )
      {
        v24 = 2 * v22;
        if ( v24 >= v23 )
          v23 = v24;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v37, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v32, v23, 16);
        v23 = v5[3] + 1;
      }
      v25 = (hkVector4f::Self *)(v5[2] + 16 * v21);
      v5[3] = v23;
      *(uint32_t *)v25 = v42;
      *((uint32_t *)v25 + 1) = v43;
      *((uint32_t *)v25 + 2) = v44;
      *((uint32_t *)v25 + 3) = v45;
      hkVector4f::setTransformedPos(v25, v34, v25);
      v26 = v5[6];
      v27 = v5[7] & 0x3FFFFFFF;
      v28 = v26 + 1;
      if ( v26 + 1 > v27 )
      {
        v29 = 2 * v27;
        if ( v29 >= v28 )
          v28 = v29;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v37,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v5 + 5,
          v28,
          16);
        v28 = v5[6] + 1;
      }
      v30 = (uint32_t *)(v5[5] + 16 * v26);
      v31 = v33;
      v5[6] = v28;
      ++v36;
      v33 += 3;
      v30[1] = v31 + 1;
      *v30 = v31;
      v30[2] = v31 + 2;
      result = v35;
      v30[3] = -1;
    }
    while ( *(uint32_t *)(v35 + 20) > v36 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_Triangle  (binary VA: 0x181dd50)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_Triangle
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_Triangle(int a1, float *a2, hkTransformf::Self *a3, uint32_t *a4, int *a5)
{
  float *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  hkVector4f::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  int result;
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm2_4
  float v27; // xmm4_4
  float v28; // xmm1_4
  float v29; // xmm4_4
  float v30; // xmm0_4
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  uint32_t *v40;
  int v41;
  typedef int *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef hkVector4f::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef hkTransformf::Self *_g4_t_v51;
  typedef uint8_t _g4_t_v52[4];
  typedef float _g4_t_v53[4];
  typedef uint32_t _g4_t_v54[4];
  typedef uint32_t _g4_t_v55[4];
  typedef uint8_t _g4_t_v56[32];
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int *_g4_t_v61;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v42)) > _g4_s0 ? (4u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v43)) > _g4_s1 ? (8u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v44)) > _g4_s2 ? (8u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v45)) > _g4_s3 ? (12u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v46)) > _g4_s4 ? (12u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v47)) > _g4_s5 ? (12u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v48)) > _g4_s6 ? (16u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v49)) > _g4_s7 ? (20u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v50)) > _g4_s8 ? (20u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v51)) > _g4_s9 ? (24u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v52)) > _g4_s10 ? (28u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v53)) > _g4_s11 ? (32u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v54)) > _g4_s12 ? (48u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v55)) > _g4_s13 ? (64u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v56)) > _g4_s14 ? (80u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v57)) > _g4_s15 ? (112u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v58)) > _g4_s16 ? (116u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v59)) > _g4_s17 ? (120u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v60)) > _g4_s18 ? (124u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v61)) > _g4_s19 ? (136u + sizeof(_g4_t_v61)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 112u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 116u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 120u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 124u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 136u);

  v61 = &a1;
  v51 = a3;
  v5 = a2;
  v49 = a5;
  v6 = *(uint32_t **)(hkpShapeDisplayBuilder::getCurrentRawGeometry(a1, a4) + 8);
  hkQsTransformf::setFromTransformNoScale((hkQsTransformf::Self *)v56, v51);
  if ( v49 != nullptr )
  {
    v57 = *v49;
    v58 = v49[1];
    v59 = v49[2];
    v60 = v49[3];
  }
  v50 = v6[3];
  v43 = (int *)(v6 + 2);
  v48 = v50 + 3;
  v7 = v6[4] & 0x3FFFFFFF;
  v8 = v50 + 3;
  if ( v50 + 3 > v7 )
  {
    v9 = 2 * v7;
    if ( v9 < v50 + 3 )
      v9 = v50 + 3;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v52, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v43, v9, 16);
    v8 = v6[3] + 3;
  }
  v10 = (hkVector4f::Self *)(v6[2] + 16 * v50);
  v6[3] = v8;
  v45 = v10;
  hkVector4f::setTransformedPos(v10, (const hkQsTransformf::Self *)v56, (const hkVector4f::Self *)(v5 + 8));
  hkVector4f::setTransformedPos(
    (hkVector4f::Self *)((char *)v45 + 16),
    (const hkQsTransformf::Self *)v56,
    (const hkVector4f::Self *)(v5 + 12));
  hkVector4f::setTransformedPos(
    (hkVector4f::Self *)((char *)v45 + 32),
    (const hkQsTransformf::Self *)v56,
    (const hkVector4f::Self *)(v5 + 16));
  v11 = v6[6];
  v42 = (int *)(v6 + 5);
  v12 = v6[7] & 0x3FFFFFFF;
  v13 = v11 + 1;
  if ( v11 + 1 > v12 )
  {
    v14 = 2 * v12;
    v46 = v6[6];
    if ( v14 >= v13 )
      v13 = v14;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v52, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v42, v13, 16);
    v13 = v6[6] + 1;
    v11 = v46;
  }
  v6[6] = v13;
  v15 = (uint32_t *)(v6[5] + 16 * v11);
  v47 = v50 + 2;
  *v15 = v50;
  v16 = v50 + 1;
  result = v50 + 2;
  v15[1] = v50 + 1;
  v15[2] = v50 + 2;
  v15[3] = -1;
  v18 = v5[20];
  v19 = v5[21];
  v20 = v5[22];
  if ( (float)((float)((float)(v18 * v18) + (float)(v19 * v19)) + (float)(v20 * v20)) > 0.0 )
  {
    v21 = v5[11];
    v53[0] = v5[8] + v18;
    v53[1] = v5[9] + v19;
    v53[2] = v5[10] + v20;
    v22 = v5[23];
    v53[3] = v21 + v22;
    v23 = v5[12] + v18;
    v24 = v18 + v5[16];
    *(float *)v54 = v23;
    v25 = v5[13] + v19;
    *(float *)v55 = v24;
    v26 = v19 + v5[17];
    *(float *)&v54[1] = v25;
    v27 = v5[14] + v20;
    *(float *)&v55[1] = v26;
    v28 = v20 + v5[18];
    *(float *)&v54[2] = v27;
    v29 = v5[15] + v22;
    *(float *)&v55[2] = v28;
    v30 = v22 + v5[19];
    *(float *)&v54[3] = v29;
    *(float *)&v55[3] = v30;
    v31 = v6[3];
    v32 = v6[4] & 0x3FFFFFFF;
    v33 = v31 + 3;
    if ( v31 + 3 > v32 )
    {
      v34 = 2 * v32;
      if ( v34 >= v33 )
        v33 = v34;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v52, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v43, v33, 16);
      v33 = v6[3] + 3;
      v16 = v50 + 1;
    }
    v35 = v6[2] + 16 * v31;
    v6[3] = v33;
    v44 = v16;
    hkVector4f::setTransformedPos((hkVector4f::Self *)v35, (const hkQsTransformf::Self *)v56, (const hkVector4f::Self *)v53);
    hkVector4f::setTransformedPos((hkVector4f::Self *)(v35 + 16), (const hkQsTransformf::Self *)v56, (const hkVector4f::Self *)v54);
    hkVector4f::setTransformedPos((hkVector4f::Self *)(v35 + 32), (const hkQsTransformf::Self *)v56, (const hkVector4f::Self *)v55);
    v36 = v6[6];
    v37 = v6[7] & 0x3FFFFFFF;
    v38 = v36 + 7;
    v39 = v44;
    if ( v36 + 7 > v37 )
    {
      v41 = 2 * v37;
      if ( v41 >= v38 )
        v38 = v41;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v52, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v42, v38, 16);
      v38 = v6[6] + 7;
      v39 = v44;
    }
    v6[6] = v38;
    v40 = (uint32_t *)(v6[5] + 16 * v36);
    *v40 = v48;
    v40[2] = v50;
    v40[4] = v48;
    v40[1] = v39;
    v40[5] = v50 + 4;
    v40[6] = v39;
    v40[8] = v50 + 4;
    v40[9] = v50 + 5;
    v40[10] = v39;
    v40[12] = v50 + 5;
    v40[14] = v39;
    v40[16] = v50 + 5;
    v40[20] = v50 + 5;
    v40[24] = v50 + 5;
    result = v50 + 4;
    v40[3] = -1;
    v40[7] = -1;
    v40[11] = -1;
    v40[13] = v47;
    v40[15] = -1;
    v40[17] = v50;
    v40[18] = v47;
    v40[19] = -1;
    v40[21] = v48;
    v40[22] = v50;
    v40[23] = -1;
    v40[25] = v50 + 4;
    v40[26] = v48;
    v40[27] = -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiRay  (binary VA: 0x181e1e0)
// Original: hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiRay
// ----------------------------------------------------------------------------
char * hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiRay(char *a1, int a2, int a3, hkTransformf::Self *a4, int a5, int *a6, int a7, uint32_t *a8)
{
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  hkVector4f::Self *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  float *v24;
  float v25; // xmm0_4
  int v26;
  int v27;
  int v28;
  int v29;
  hkVector4f::Self *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  char v38;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef hkTransformf::Self *_g4_t_v46;
  typedef char _g4_t_v47[4];
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char **_g4_t_v56;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v41)) > _g4_s1 ? (8u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v42)) > _g4_s2 ? (12u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v43)) > _g4_s3 ? (16u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v44)) > _g4_s4 ? (20u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v45)) > _g4_s5 ? (28u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v46)) > _g4_s6 ? (32u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v47)) > _g4_s7 ? (36u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v48)) > _g4_s8 ? (40u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v49)) > _g4_s9 ? (44u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v50)) > _g4_s10 ? (48u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v51)) > _g4_s11 ? (52u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v52)) > _g4_s12 ? (56u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v53)) > _g4_s13 ? (60u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v54)) > _g4_s14 ? (64u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v55)) > _g4_s15 ? (68u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v56)) > _g4_s16 ? (80u + sizeof(_g4_t_v56)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);

  v56 = &a1;
  v44 = a3;
  v46 = a4;
  v42 = a6;
  v8 = a7;
  v40 = a1;
  v41 = a7;
  v9 = *(uint32_t **)(hkpShapeDisplayBuilder::getCurrentRawGeometry(a2, a8) + 8);
  v10 = *(uint32_t *)(v8 + 20);
  if ( v10 == -1 )
  {
    *(uint32_t *)(v41 + 20) = 0;
    v10 = 0;
  }
  v11 = *(uint32_t *)(v44 + 20);
  if ( v11 > v10 && *v42 > 0 )
  {
    v45 = 0;
    v43 = (int *)(v9 + 2);
    while ( 1 )
    {
      v12 = v9[3];
      v13 = (int *)(*(uint32_t *)(v44 + 16) + 32 * v10);
      v48 = *v13;
      v49 = v13[1];
      v50 = v13[2];
      v51 = v13[3];
      v52 = v13[4];
      v53 = v13[5];
      v14 = v13[6];
      v15 = v13[7];
      v54 = v14;
      v55 = v15;
      v16 = v9[4] & 0x3FFFFFFF;
      v17 = v12 + 1;
      if ( v12 + 1 > v16 )
      {
        v18 = 2 * v16;
        if ( v18 >= v17 )
          v17 = v18;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v47, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v43, v17, 16);
        v17 = v9[3] + 1;
      }
      v19 = (hkVector4f::Self *)(v9[2] + 16 * v12);
      v9[3] = v17;
      *(uint32_t *)v19 = v48;
      *((uint32_t *)v19 + 1) = v49;
      *((uint32_t *)v19 + 2) = v50;
      *((uint32_t *)v19 + 3) = v51;
      hkVector4f::setTransformedPos(v19, v46, v19);
      v20 = v9[3];
      v21 = v9[4] & 0x3FFFFFFF;
      v22 = v20 + 1;
      if ( v20 + 1 > v21 )
      {
        v23 = 2 * v21;
        if ( v23 >= v22 )
          v22 = v23;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v47, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v43, v22, 16);
        v22 = v9[3] + 1;
      }
      v24 = (float *)(v9[2] + 16 * v20);
      v9[3] = v22;
      *(uint32_t *)v24 = v48;
      v25 = *v24 + 0.01f;
      *((uint32_t *)v24 + 1) = v49;
      *((uint32_t *)v24 + 2) = v50;
      *((uint32_t *)v24 + 3) = v51;
      *v24 = v25;
      v24[1] = v24[1] + 0.0;
      v24[2] = v24[2] + 0.0;
      v24[3] = v24[3] + 0.0;
      v26 = v9[3];
      v27 = v9[4] & 0x3FFFFFFF;
      v28 = v26 + 1;
      if ( v26 + 1 > v27 )
      {
        v29 = 2 * v27;
        if ( v29 >= v28 )
          v28 = v29;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v47, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v43, v28, 16);
        v28 = v9[3] + 1;
      }
      v30 = (hkVector4f::Self *)(v9[2] + 16 * v26);
      v9[3] = v28;
      *(uint32_t *)v30 = v52;
      *((uint32_t *)v30 + 1) = v53;
      *((uint32_t *)v30 + 2) = v54;
      *((uint32_t *)v30 + 3) = v55;
      hkVector4f::setTransformedPos(v30, v46, v30);
      v31 = v9[6];
      v32 = v9[7] & 0x3FFFFFFF;
      v33 = v31 + 1;
      if ( v31 + 1 > v32 )
      {
        v34 = 2 * v32;
        if ( v34 >= v33 )
          v33 = v34;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v47,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v9 + 5,
          v33,
          16);
        v33 = v9[6] + 1;
      }
      v35 = (uint32_t *)(v9[5] + 16 * v31);
      v36 = v45;
      v9[6] = v33;
      v45 += 3;
      v35[1] = v36 + 1;
      *v35 = v36;
      v35[2] = v36 + 2;
      v35[3] = -1;
      ++*(uint32_t *)(v41 + 20);
      v37 = *v42 - 1;
      *v42 = v37;
      v10 = *(uint32_t *)(v41 + 20);
      v11 = *(uint32_t *)(v44 + 20);
      if ( v10 >= v11 )
        break;
      if ( v37 <= 0 )
        goto LABEL_25;
    }
  }
  if ( v10 == v11 )
  {
    *(uint32_t *)(v41 + 20) = -1;
    v38 = 1;
  }
  else
  {
LABEL_25:
    v38 = 0;
  }
  *v40 = v38;
  return v40;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildPartialShapeDisplay_SampledHeightField  (binary VA: 0x181e540)
// Original: hkpShapeDisplayBuilder::buildPartialShapeDisplay_SampledHeightField
// ----------------------------------------------------------------------------
uint8_t * hkpShapeDisplayBuilder::buildPartialShapeDisplay_SampledHeightField(uint8_t *a1, int a2, float *a3, hkTransformf::Self *a4, int a5, int *a6, int a7, uint32_t *a8)
{
  int v8;
  float *v9;
  int CurrentRawGeometry;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  long double v20; // fst7
  int v21;
  float v22; // xmm1_4
  __m128i v23;
  float v24;
  float v25; // xmm0_4
  int v26;
  int v27;
  int v28;
  float v29; // xmm0_4
  int v30;
  int v31;
  int v32;
  float v33; // xmm0_4
  int v34;
  int v35;
  long double v36; // fst7
  float v37; // xmm0_4
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int *v46;
  int v47;
  typedef uint8_t *_g4_t_v49;
  typedef int *_g4_t_v50;
  typedef float _g4_t_v51;
  typedef int *_g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef hkTransformf::Self *_g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float *_g4_t_v63;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65[4];
  typedef float _g4_t_v66[4];
  typedef float _g4_t_v67[4];
  typedef float _g4_t_v68[4];
  typedef float _g4_t_v69[10];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v49)) > _g4_s0 ? (0u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v50)) > _g4_s1 ? (4u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v51)) > _g4_s2 ? (12u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v52)) > _g4_s3 ? (36u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v53)) > _g4_s4 ? (40u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v54)) > _g4_s5 ? (40u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v55)) > _g4_s6 ? (40u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v56)) > _g4_s7 ? (44u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v57)) > _g4_s8 ? (48u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v58)) > _g4_s9 ? (52u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v59)) > _g4_s10 ? (56u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v60)) > _g4_s11 ? (60u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v61)) > _g4_s12 ? (64u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v62)) > _g4_s13 ? (64u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v63)) > _g4_s14 ? (68u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (75u + sizeof(_g4_t_v64)) > _g4_s15 ? (75u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v65)) > _g4_s16 ? (76u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v66)) > _g4_s17 ? (80u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v67)) > _g4_s18 ? (96u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v68)) > _g4_s19 ? (112u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v69)) > _g4_s20 ? (128u + sizeof(_g4_t_v69)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 75u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 112u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 128u);

  LODWORD(v69[6]) = (uint32_t)(uintptr_t)(&a1);
  v56 = a4;
  v49 = a1;
  v52 = a6;
  v8 = a7;
  v9 = a3;
  v63 = a3;
  v61 = a7;
  CurrentRawGeometry = hkpShapeDisplayBuilder::getCurrentRawGeometry(a2, a8);
  v57 = v9[16];
  v60 = *(int **)(CurrentRawGeometry + 8);
  v11 = *(uint32_t *)(v8 + 20);
  v58 = v9[17];
  v59 = v9[18];
  v51 = v9[19];
  if ( v11 == -1 )
  {
    *(uint32_t *)(v61 + 20) = 0;
    v11 = 0;
  }
  v12 = *((uint32_t *)v63 + 10) - 1;
  if ( v12 > v11 )
  {
    if ( *v52 > 0 )
    {
      v13 = *(uint32_t *)(v61 + 24);
      if ( v13 == -1 )
        goto LABEL_29;
      while ( 1 )
      {
        v14 = *((uint32_t *)v63 + 11) - 1;
        if ( v14 > v13 )
        {
          if ( *v52 <= 0 )
            goto LABEL_31;
          v50 = v60 + 5;
          while ( 1 )
          {
            v19 = v61;
            v20 = ((long double (*)(float *))*(uint32_t *)(*(uint32_t *)v63 + 88))(v63);
            v21 = *(uint32_t *)(v61 + 20);
            v62 = v20;
            v22 = v62;
            v61 = v19;
g4_m128_raw(v23) = LODWORD(v51);
            *(float *)g4_m128_ptr<int32_t>(v23) = v51 * 0.0;
            v66[3] = v51 * 0.0;
            v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
            v66[1] = v22 * v58;
            v66[0] = (float)((float)v21 + 0.0) * v57;
            v25 = (float)v13 + 0.0;
            v26 = *(uint32_t *)(v61 + 24);
            v27 = *(uint32_t *)v63;
            v66[2] = v25 * v59;
            v53 = ((long double (*)(float *, int, int))*(uint32_t *)(v27 + 88))(v63, v21, v26 + 1);
            v67[3] = v24;
            v28 = *(uint32_t *)(v61 + 20);
            v67[1] = v53 * v58;
            v67[0] = (float)((float)v28 + 0.0) * v57;
            v29 = (float)v26 + 1.0;
            v30 = *(uint32_t *)(v61 + 24);
            v31 = *(uint32_t *)v63;
            v67[2] = v29 * v59;
            v54 = ((long double (*)(float *, int, int))*(uint32_t *)(v31 + 88))(v63, v28 + 1, v30);
            v68[3] = v24;
            v32 = *(uint32_t *)(v61 + 20);
            v68[1] = v54 * v58;
            v68[0] = (float)((float)v32 + 1.0) * v57;
            v33 = (float)v30 + 0.0;
            v34 = *(uint32_t *)(v61 + 24);
            v35 = *(uint32_t *)v63;
            v68[2] = v33 * v59;
            v36 = ((long double (*)(float *, int, int))*(uint32_t *)(v35 + 88))(v63, v32 + 1, v34 + 1);
            v37 = (float)*(int *)(v61 + 20) + 1.0;
            v55 = v36;
            v69[3] = v24;
            v69[1] = v55 * v58;
            v69[0] = v37 * v57;
            v69[2] = (float)((float)v34 + 1.0) * v59;
            v38 = v60[3];
            v39 = v60[4] & 0x3FFFFFFF;
            v40 = v38 + 4;
            if ( v38 + 4 > v39 )
            {
              v41 = 2 * v39;
              if ( v41 >= v40 )
                v40 = v41;
              hkArrayUtil::reserve(
                (hkArrayUtil::Self *)v65,
                (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                v60 + 2,
                v40,
                16);
              v40 = v60[3] + 4;
            }
            v60[3] = v40;
            v42 = v60[2] + 16 * v38;
            hkVector4f::setTransformedPos((hkVector4f::Self *)v42, v56, (const hkVector4f::Self *)v66);
            hkVector4f::setTransformedPos((hkVector4f::Self *)(v42 + 16), v56, (const hkVector4f::Self *)v67);
            hkVector4f::setTransformedPos((hkVector4f::Self *)(v42 + 32), v56, (const hkVector4f::Self *)v68);
            hkVector4f::setTransformedPos((hkVector4f::Self *)(v42 + 48), v56, (const hkVector4f::Self *)v69);
            (*(void (**)(char *, float *))(*(uint32_t *)v63 + 92))(&v64, v63);
            v43 = v60[6];
            v44 = v60[7] & 0x3FFFFFFF;
            v16 = v43 + 2;
            if ( v64 != 0 )
            {
              if ( v16 > v44 )
              {
                v15 = 2 * v44;
                if ( v15 >= v16 )
                  v16 = v15;
                hkArrayUtil::reserve(
                  (hkArrayUtil::Self *)v65,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                  v50,
                  v16,
                  16);
                v16 = v60[6] + 2;
              }
              v17 = (int *)(v60[5] + 16 * v43);
              v60[6] = v16;
              *v17 = v38;
              v17[4] = v38;
              v17[1] = v38 + 1;
              v17[2] = v38 + 3;
              v17[3] = -1;
              v17[5] = v38 + 3;
              v17[6] = v38 + 2;
              v17[7] = -1;
            }
            else
            {
              if ( v16 > v44 )
              {
                v45 = 2 * v44;
                if ( v45 >= v16 )
                  v16 = v45;
                hkArrayUtil::reserve(
                  (hkArrayUtil::Self *)v65,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                  v50,
                  v16,
                  16);
                v16 = v60[6] + 2;
              }
              v46 = (int *)(v60[5] + 16 * v43);
              v60[6] = v16;
              *v46 = v38;
              v46[1] = v38 + 1;
              v46[2] = v38 + 2;
              v46[3] = -1;
              v46[4] = v38 + 3;
              v46[5] = v38 + 2;
              v46[6] = v38 + 1;
              v46[7] = -1;
            }
            ++*(uint32_t *)(v61 + 24);
            v18 = *v52 - 1;
            *v52 = v18;
            v13 = *(uint32_t *)(v61 + 24);
            v14 = *((uint32_t *)v63 + 11) - 1;
            if ( v13 >= v14 )
              break;
            if ( v18 <= 0 )
              goto LABEL_31;
          }
        }
        if ( v13 != v14 )
          break;
        v47 = *(uint32_t *)(v61 + 20);
        *(uint32_t *)(v61 + 24) = -1;
        v11 = v47 + 1;
        *(uint32_t *)(v61 + 20) = v11;
        v12 = *((uint32_t *)v63 + 10) - 1;
        if ( v12 <= v11 )
          goto LABEL_30;
        if ( *v52 <= 0 )
          break;
LABEL_29:
        v13 = 0;
        *(uint32_t *)(v61 + 24) = 0;
      }
    }
    goto LABEL_31;
  }
LABEL_30:
  if ( v11 != v12 )
  {
LABEL_31:
    *v49 = 0;
    return v49;
  }
  *(uint32_t *)(v61 + 20) = -1;
  *v49 = 1;
  return v49;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_BvCompressedMeshShape  (binary VA: 0x181eaf0)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_BvCompressedMeshShape
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_BvCompressedMeshShape(int a1, hkpBvCompressedMeshShape::Self *a2, hkTransformf::Self *a3, uint32_t *a4, uint32_t *a5)
{
  const hkGeometry::Self *v5;
  int v6;
  int result;
  typedef uint32_t _g4_t_v8[2];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[12];
  typedef uint8_t _g4_t_v16[76];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v12)) > _g4_s4 ? (20u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v13)) > _g4_s5 ? (24u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v14)) > _g4_s6 ? (28u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v15)) > _g4_s7 ? (32u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v16)) > _g4_s8 ? (80u + sizeof(_g4_t_v16)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);

  v5 = *(const hkGeometry::Self **)(hkpShapeDisplayBuilder::getCurrentRawGeometry(a1, a4) + 8);
  v8[0] = ((uint32_t)(uintptr_t)&off_20586B8);
  v8[1] = -65535;
  v9 = 0;
  v10 = 0;
  v11 = 0x80000000;
  v12 = 0;
  v13 = 0;
  v14 = 0x80000000;
  hkpBvCompressedMeshShape::convertToGeometry(a2, (hkGeometry::Self *)v8, nullptr, nullptr);
  hkQsTransformf::setFromTransformNoScale((hkQsTransformf::Self *)v15, a3);
  if ( a5 != nullptr )
  {
    v15[8] = *a5;
    v15[9] = a5[1];
    v6 = a5[3];
    v15[10] = a5[2];
    v15[11] = v6;
  }
  hkMatrix4f::set((hkMatrix4f::Self *)v16, (const hkQsTransformf::Self *)v15);
  hkGeometryUtils::transformGeometry((hkGeometryUtils::Self *)v16, (const hkMatrix4f::Self *)v8);
  hkGeometryUtils::appendGeometry((hkGeometryUtils::Self *)v8, v5);
  v13 = 0;
  v8[0] = ((uint32_t)(uintptr_t)&off_20586B8);
  if ( v14 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v12,
      16 * v14);
  result = v11;
  v12 = 0;
  v14 = 0x80000000;
  v10 = 0;
  if ( v11 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v9,
             16 * v11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_CompressedMeshShape  (binary VA: 0x181ec80)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_CompressedMeshShape
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_CompressedMeshShape(int a1, hkpCompressedMeshShapeBuilder::Self *a2, hkTransformf::Self *a3, uint32_t *a4)
{
  hkpCompressedMeshShapeBuilder::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int *v19;
  int *v20;
  int *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  float *v34;
  int v35;
  uint16_t *v36;
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  int v40;
  int NumTriangles;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  signed int v47;
  int v48;
  hkVector4f::Self *v49;
  int v50;
  int v51;
  int v52;
  int result;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  hkVector4f::Self *v60;
  int v61;
  int v62;
  int v63;
  int *v64;
  int v65;
  int v66;
  int v67;
  typedef hkVector4f::Self *_g4_t_v68;
  typedef const hkVector4f::Self *_g4_t_v69;
  typedef const hkVector4f::Self *_g4_t_v70;
  typedef hkGeometry::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef hkpCompressedMeshShapeBuilder::Self *_g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef hkTransformf::Self *_g4_t_v80;
  typedef hkMemoryAllocator::Self *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef hkVector4f::Self *_g4_t_v85;
  typedef hkVector4f::Self *_g4_t_v86;
  typedef hkVector4f::Self *_g4_t_v87;
  typedef hkVector4f::Self *_g4_t_v88;
  typedef hkVector4f::Self *_g4_t_v89;
  typedef hkVector4f::Self *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef uint16_t *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef char _g4_t_v107[4];
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int (**_g4_t_v120)(int);
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int *_g4_t_v132;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v68)) > _g4_s0 ? (8u + sizeof(_g4_t_v68)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v69)) > _g4_s1 ? (16u + sizeof(_g4_t_v69)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v70)) > _g4_s2 ? (16u + sizeof(_g4_t_v70)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v71)) > _g4_s3 ? (20u + sizeof(_g4_t_v71)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v72)) > _g4_s4 ? (36u + sizeof(_g4_t_v72)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v73)) > _g4_s5 ? (40u + sizeof(_g4_t_v73)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v74)) > _g4_s6 ? (44u + sizeof(_g4_t_v74)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v75)) > _g4_s7 ? (48u + sizeof(_g4_t_v75)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v76)) > _g4_s8 ? (52u + sizeof(_g4_t_v76)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v77)) > _g4_s9 ? (56u + sizeof(_g4_t_v77)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v78)) > _g4_s10 ? (60u + sizeof(_g4_t_v78)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v79)) > _g4_s11 ? (64u + sizeof(_g4_t_v79)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v80)) > _g4_s12 ? (68u + sizeof(_g4_t_v80)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v81)) > _g4_s13 ? (72u + sizeof(_g4_t_v81)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v82)) > _g4_s14 ? (72u + sizeof(_g4_t_v82)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v83)) > _g4_s15 ? (76u + sizeof(_g4_t_v83)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v84)) > _g4_s16 ? (80u + sizeof(_g4_t_v84)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v85)) > _g4_s17 ? (84u + sizeof(_g4_t_v85)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v86)) > _g4_s18 ? (84u + sizeof(_g4_t_v86)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v87)) > _g4_s19 ? (84u + sizeof(_g4_t_v87)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v88)) > _g4_s20 ? (88u + sizeof(_g4_t_v88)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v89)) > _g4_s21 ? (88u + sizeof(_g4_t_v89)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v90)) > _g4_s22 ? (88u + sizeof(_g4_t_v90)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v91)) > _g4_s23 ? (92u + sizeof(_g4_t_v91)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v92)) > _g4_s24 ? (92u + sizeof(_g4_t_v92)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v93)) > _g4_s25 ? (92u + sizeof(_g4_t_v93)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v94)) > _g4_s26 ? (92u + sizeof(_g4_t_v94)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v95)) > _g4_s27 ? (92u + sizeof(_g4_t_v95)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v96)) > _g4_s28 ? (92u + sizeof(_g4_t_v96)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v97)) > _g4_s29 ? (92u + sizeof(_g4_t_v97)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v98)) > _g4_s30 ? (92u + sizeof(_g4_t_v98)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v99)) > _g4_s31 ? (96u + sizeof(_g4_t_v99)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v100)) > _g4_s32 ? (96u + sizeof(_g4_t_v100)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v101)) > _g4_s33 ? (96u + sizeof(_g4_t_v101)) : _g4_s33,
    _g4_s35 = (96u + sizeof(_g4_t_v102)) > _g4_s34 ? (96u + sizeof(_g4_t_v102)) : _g4_s34,
    _g4_s36 = (96u + sizeof(_g4_t_v103)) > _g4_s35 ? (96u + sizeof(_g4_t_v103)) : _g4_s35,
    _g4_s37 = (96u + sizeof(_g4_t_v104)) > _g4_s36 ? (96u + sizeof(_g4_t_v104)) : _g4_s36,
    _g4_s38 = (96u + sizeof(_g4_t_v105)) > _g4_s37 ? (96u + sizeof(_g4_t_v105)) : _g4_s37,
    _g4_s39 = (96u + sizeof(_g4_t_v106)) > _g4_s38 ? (96u + sizeof(_g4_t_v106)) : _g4_s38,
    _g4_s40 = (100u + sizeof(_g4_t_v107)) > _g4_s39 ? (100u + sizeof(_g4_t_v107)) : _g4_s39,
    _g4_s41 = (104u + sizeof(_g4_t_v108)) > _g4_s40 ? (104u + sizeof(_g4_t_v108)) : _g4_s40,
    _g4_s42 = (108u + sizeof(_g4_t_v109)) > _g4_s41 ? (108u + sizeof(_g4_t_v109)) : _g4_s41,
    _g4_s43 = (112u + sizeof(_g4_t_v110)) > _g4_s42 ? (112u + sizeof(_g4_t_v110)) : _g4_s42,
    _g4_s44 = (116u + sizeof(_g4_t_v111)) > _g4_s43 ? (116u + sizeof(_g4_t_v111)) : _g4_s43,
    _g4_s45 = (120u + sizeof(_g4_t_v112)) > _g4_s44 ? (120u + sizeof(_g4_t_v112)) : _g4_s44,
    _g4_s46 = (124u + sizeof(_g4_t_v113)) > _g4_s45 ? (124u + sizeof(_g4_t_v113)) : _g4_s45,
    _g4_s47 = (128u + sizeof(_g4_t_v114)) > _g4_s46 ? (128u + sizeof(_g4_t_v114)) : _g4_s46,
    _g4_s48 = (132u + sizeof(_g4_t_v115)) > _g4_s47 ? (132u + sizeof(_g4_t_v115)) : _g4_s47,
    _g4_s49 = (136u + sizeof(_g4_t_v116)) > _g4_s48 ? (136u + sizeof(_g4_t_v116)) : _g4_s48,
    _g4_s50 = (140u + sizeof(_g4_t_v117)) > _g4_s49 ? (140u + sizeof(_g4_t_v117)) : _g4_s49,
    _g4_s51 = (144u + sizeof(_g4_t_v118)) > _g4_s50 ? (144u + sizeof(_g4_t_v118)) : _g4_s50,
    _g4_s52 = (148u + sizeof(_g4_t_v119)) > _g4_s51 ? (148u + sizeof(_g4_t_v119)) : _g4_s51,
    _g4_s53 = (152u + sizeof(_g4_t_v120)) > _g4_s52 ? (152u + sizeof(_g4_t_v120)) : _g4_s52,
    _g4_s54 = (156u + sizeof(_g4_t_v121)) > _g4_s53 ? (156u + sizeof(_g4_t_v121)) : _g4_s53,
    _g4_s55 = (160u + sizeof(_g4_t_v122)) > _g4_s54 ? (160u + sizeof(_g4_t_v122)) : _g4_s54,
    _g4_s56 = (164u + sizeof(_g4_t_v123)) > _g4_s55 ? (164u + sizeof(_g4_t_v123)) : _g4_s55,
    _g4_s57 = (168u + sizeof(_g4_t_v124)) > _g4_s56 ? (168u + sizeof(_g4_t_v124)) : _g4_s56,
    _g4_s58 = (172u + sizeof(_g4_t_v125)) > _g4_s57 ? (172u + sizeof(_g4_t_v125)) : _g4_s57,
    _g4_s59 = (176u + sizeof(_g4_t_v126)) > _g4_s58 ? (176u + sizeof(_g4_t_v126)) : _g4_s58,
    _g4_s60 = (180u + sizeof(_g4_t_v127)) > _g4_s59 ? (180u + sizeof(_g4_t_v127)) : _g4_s59,
    _g4_s61 = (184u + sizeof(_g4_t_v128)) > _g4_s60 ? (184u + sizeof(_g4_t_v128)) : _g4_s60,
    _g4_s62 = (188u + sizeof(_g4_t_v129)) > _g4_s61 ? (188u + sizeof(_g4_t_v129)) : _g4_s61,
    _g4_s63 = (192u + sizeof(_g4_t_v130)) > _g4_s62 ? (192u + sizeof(_g4_t_v130)) : _g4_s62,
    _g4_s64 = (196u + sizeof(_g4_t_v131)) > _g4_s63 ? (196u + sizeof(_g4_t_v131)) : _g4_s63,
    _g4_s65 = (208u + sizeof(_g4_t_v132)) > _g4_s64 ? (208u + sizeof(_g4_t_v132)) : _g4_s64
  };
  alignas(16) uint8_t _g4_sf[_g4_s65];
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 16u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 16u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 64u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 68u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 72u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 72u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 76u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 80u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 84u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 84u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 84u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 88u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 88u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 88u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 92u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 92u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 92u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 92u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 92u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 92u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 92u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 92u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 96u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 96u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 96u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 96u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 96u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 96u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 96u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 96u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 100u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 104u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 108u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 112u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 116u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 120u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 124u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 128u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 132u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 136u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 140u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 144u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 148u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 152u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 156u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 160u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 164u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 168u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 172u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 176u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 180u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 184u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 188u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 192u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 196u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 208u);

  v132 = &a1;
  v4 = a2;
  v77 = a2;
  v80 = a3;
  v75 = *(int **)(hkpShapeDisplayBuilder::getCurrentRawGeometry(a1, a4) + 8);
  v83 = *((uint32_t *)v4 + 28);
  v73 = v75 + 5;
  v5 = v75[6];
  v6 = v75[7] & 0x3FFFFFFF;
  v7 = v5 + v83;
  if ( v5 + v83 > v6 )
  {
    v8 = 2 * v6;
    if ( v8 >= v7 )
      v7 = v8;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v107, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v73, v7, 16);
    v7 = v75[6] + v83;
  }
  v75[6] = v7;
  v9 = v75[5] + 16 * v5;
  if ( v83 > 0 )
  {
    v81 = (hkMemoryAllocator::Self *)(v75 + 2);
    v91 = 0;
    v10 = v9;
    do
    {
      v99 = (uint16_t *)(*((uint32_t *)v77 + 27) + 16 * v91);
      v18 = *((uint32_t *)v77 + 24);
      v19 = (int *)(16 * *v99 + v18);
      v108 = *v19;
      v109 = v19[1];
      v110 = v19[2];
      v111 = v19[3];
      v20 = (int *)(16 * v99[1] + v18);
      v112 = *v20;
      v113 = v20[1];
      v114 = v20[2];
      v115 = v20[3];
      v21 = (int *)(16 * v99[2] + v18);
      v116 = *v21;
      v117 = v21[1];
      v118 = v21[2];
      v119 = v21[3];
      v22 = v99[7];
      if ( (uint16_t)v22 != 0xFFFF )
      {
        v100 = v10;
        v23 = *((uint32_t *)v77 + 21) + 48 * v22;
        v120 = *(int (***)(int))v23;
        v121 = *(uint32_t *)(v23 + 4);
        v122 = *(uint32_t *)(v23 + 8);
        v123 = *(uint32_t *)(v23 + 12);
        v124 = *(uint32_t *)(v23 + 16);
        v125 = *(uint32_t *)(v23 + 20);
        v126 = *(uint32_t *)(v23 + 24);
        v127 = *(uint32_t *)(v23 + 28);
        v128 = *(uint32_t *)(v23 + 32);
        v129 = *(uint32_t *)(v23 + 36);
        v130 = *(uint32_t *)(v23 + 40);
        v131 = *(uint32_t *)(v23 + 44);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v108, (const hkQsTransformf::Self *)&v120, (const hkVector4f::Self *)&v108);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v112, (const hkQsTransformf::Self *)&v120, (const hkVector4f::Self *)&v112);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v116, (const hkQsTransformf::Self *)&v120, (const hkVector4f::Self *)&v116);
        v10 = v100;
      }
      v101 = v10;
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v108, v80, (const hkVector4f::Self *)&v108);
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v112, v80, (const hkVector4f::Self *)&v112);
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v116, v80, (const hkVector4f::Self *)&v116);
      v24 = v75[3];
      v25 = v24;
      v26 = v101;
      if ( v24 == (v75[4] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v81, 16, (int)(uintptr_t)(v71));
        v25 = v75[3];
        v26 = v101;
      }
      v11 = (uint32_t *)(v75[2] + 16 * v25);
      *v11 = v108;
      v11[1] = v109;
      v11[2] = v110;
      v11[3] = v111;
      v12 = v75[3] + 1;
      v13 = v75[4] & 0x3FFFFFFF;
      v75[3] = v12;
      if ( v12 == v13 )
      {
        v103 = v26;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v81, 16, (int)(uintptr_t)(v71));
        v12 = v75[3];
        v26 = v103;
      }
      v14 = (uint32_t *)(v75[2] + 16 * v12);
      *v14 = v112;
      v14[1] = v113;
      v14[2] = v114;
      v14[3] = v115;
      v15 = v75[3] + 1;
      v16 = v75[4] & 0x3FFFFFFF;
      v75[3] = v15;
      if ( v15 == v16 )
      {
        v102 = v26;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v81, 16, (int)(uintptr_t)(v71));
        v15 = v75[3];
        v26 = v102;
      }
      v17 = (uint32_t *)(v75[2] + 16 * v15);
      v10 = v26 + 16;
      ++v91;
      *v17 = v116;
      v17[1] = v117;
      v17[2] = v118;
      v17[3] = v119;
      ++v75[3];
      *(uint32_t *)(v10 - 16) = v24;
      *(uint32_t *)(v10 - 12) = v24 + 1;
      *(uint32_t *)(v10 - 8) = v24 + 2;
    }
    while ( v91 != v83 );
  }
  v74 = 0;
  v72 = *((uint32_t *)v77 + 31);
  if ( v72 > 0 )
  {
    do
    {
      v27 = *((uint32_t *)v77 + 30);
      v28 = v27 + 80 * v74;
      v88 = (hkVector4f::Self *)v28;
      v29 = *(uint16_t *)(v28 + 68);
      if ( v29 != 0xFFFF )
        v28 = 80 * v29 + v27;
      v104 = v75[3];
      v30 = *(uint32_t *)(v28 + 20) / 3;
      v31 = v75[4] & 0x3FFFFFFF;
      v32 = v30 + v104;
      if ( v30 + v104 > v31 )
      {
        v33 = 2 * v31;
        v92 = *(uint32_t *)(v28 + 20) / 3;
        if ( v32 < v33 )
          v32 = v33;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v107,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v75 + 2,
          v32,
          16);
        v30 = v92;
        v32 = v92 + v75[3];
      }
      v34 = (float *)(v75[2] + 16 * v104);
      v75[3] = v32;
      if ( v30 > 0 )
      {
        v85 = (hkVector4f::Self *)(6 * v30);
        v35 = 0;
        do
        {
          v36 = (uint16_t *)(*(uint32_t *)(v28 + 16) + v35);
          v37 = (float)v36[2];
          v38 = (float)v36[1];
          v39 = *((float *)v77 + 36);
          *v34 = (float)((float)*v36 * v39) + *(float *)v28;
          v34[1] = (float)(v38 * v39) + *(float *)(v28 + 4);
          v34[2] = (float)(v37 * v39) + *(float *)(v28 + 8);
          v34[3] = (float)(v39 * 0.0) + *(float *)(v28 + 12);
          v40 = *((uint16_t *)v88 + 35);
          if ( (uint16_t)v40 != 0xFFFF )
          {
            v93 = v35;
            hkVector4f::setTransformedPos(
              (hkVector4f::Self *)v34,
              (const hkQsTransformf::Self *)(*((uint32_t *)v77 + 21) + 48 * v40),
              (const hkVector4f::Self *)v34);
            v35 = v93;
          }
          v69 = (const hkVector4f::Self *)v34;
          v68 = (hkVector4f::Self *)v34;
          v94 = v35;
          v34 += 4;
          hkVector4f::setTransformedPos(v68, v80, v69);
          v35 = v94 + 6;
        }
        while ( (hkVector4f::Self *)(v94 + 6) != v85 );
      }
      NumTriangles = hkpCompressedMeshShape::Chunk::getNumTriangles((hkpCompressedMeshShape::Chunk::Self *)v28);
      v42 = v75[6];
      v43 = v42 + NumTriangles;
      v44 = v75[7] & 0x3FFFFFFF;
      if ( v42 + NumTriangles > v44 )
      {
        v45 = 2 * v44;
        v95 = v75[6];
        if ( v43 >= v45 )
          v45 = v42 + NumTriangles;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v107,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v73,
          v45,
          16);
        v42 = v95;
        v43 = v75[6] + NumTriangles;
      }
      v75[6] = v43;
      v79 = v75[5] + 16 * v42;
      v46 = *(uint32_t *)(v28 + 44);
      if ( v46 <= 0 )
      {
        v84 = 0;
      }
      else
      {
        v82 = 0;
        v76 = 2 * v46;
        v84 = 0;
        do
        {
          v78 = *(uint16_t *)(*(uint32_t *)(v28 + 40) + v82);
          if ( v78 > 2 )
          {
            v47 = 0;
            v86 = (hkVector4f::Self *)(2 * v84);
            v48 = v79;
            do
            {
              v89 = (hkVector4f::Self *)(v47 + v84);
              v96 = v47 & 1;
              v49 = v86;
              v48 += 16;
              ++v47;
              v86 = (hkVector4f::Self *)((char *)v86 + 2);
              *(uint32_t *)(v48 - 16) = v104 + *(uint16_t *)((char *)v49 + *(uint32_t *)(v28 + 28));
              *(uint32_t *)(v48 - 12) = v104 + *(uint16_t *)(*(uint32_t *)(v28 + 28) + 2 * ((uint32_t)(uintptr_t)(v89) + v96 + 1));
              *(uint32_t *)(v48 - 8) = v104 + *(uint16_t *)(*(uint32_t *)(v28 + 28) + 2 * ((uint32_t)(uintptr_t)(v89) + 2 - v96));
            }
            while ( v47 < (int)(v78 - 2) );
            v79 += 16 * (v78 + 268435454);
            v84 = v84 + v78 - 2;
          }
          v84 += 2;
          v82 += 2;
        }
        while ( v82 != v76 );
      }
      v50 = 2 * v84;
      if ( *(uint32_t *)(v28 + 32) - 2 > v84 )
      {
        v51 = v79;
        do
        {
          v51 += 16;
          v84 += 3;
          *(uint32_t *)(v51 - 16) = v104 + *(uint16_t *)(*(uint32_t *)(v28 + 28) + v50);
          *(uint32_t *)(v51 - 12) = v104 + *(uint16_t *)(*(uint32_t *)(v28 + 28) + v50 + 2);
          v52 = *(uint16_t *)(*(uint32_t *)(v28 + 28) + v50 + 4);
          v50 += 6;
          *(uint32_t *)(v51 - 8) = v104 + v52;
        }
        while ( *(uint32_t *)(v28 + 32) - 2 > v84 );
      }
      ++v74;
    }
    while ( v74 != v72 );
  }
  result = *((uint32_t *)v77 + 34);
  v87 = (hkVector4f::Self *)result;
  if ( result > 0 )
  {
    v90 = nullptr;
    do
    {
      v121 = -65535;
      v122 = 0;
      v120 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
      v123 = 0;
      v124 = 0x80000000;
      v125 = 0;
      v126 = 0;
      v127 = 0x80000000;
      hkpCompressedMeshShapeBuilder::convexPieceToGeometry(v77, v90, (int)(uintptr_t)(&v120), v71);
      v105 = v123;
      v54 = v75[3];
      v55 = v75[4] & 0x3FFFFFFF;
      v56 = v54 + v123;
      if ( v54 + v123 > v55 )
      {
        v57 = 2 * v55;
        if ( v57 >= v56 )
          v56 = v57;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v107,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v75 + 2,
          v56,
          16);
        v56 = v75[3] + v105;
      }
      v75[3] = v56;
      v58 = v75[2] + 16 * v54;
      if ( v105 > 0 )
      {
        v97 = v54;
        v59 = 0;
        v60 = (hkVector4f::Self *)v58;
        do
        {
          v70 = (const hkVector4f::Self *)(v122 + 16 * v59++);
          hkVector4f::setTransformedPos(v60, v80, v70);
          v60 = (hkVector4f::Self *)((char *)v60 + 16);
        }
        while ( v59 != v105 );
        v54 = v97;
      }
      v98 = v126;
      v61 = v75[6];
      v62 = v61 + v126;
      v63 = v75[7] & 0x3FFFFFFF;
      if ( v61 + v126 > v63 )
      {
        v67 = 2 * v63;
        if ( v67 < v62 )
          v67 = v61 + v126;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v107,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v73,
          v67,
          16);
        v64 = v75;
        v62 = v75[6] + v98;
      }
      else
      {
        v64 = v75;
      }
      v64[6] = v62;
      v65 = v64[5] + 16 * v61;
      if ( v98 > 0 )
      {
        v106 = 0;
        do
        {
          v66 = 16 * v106;
          v65 += 16;
          ++v106;
          *(uint32_t *)(v65 - 16) = v54 + *(uint32_t *)(v125 + v66);
          *(uint32_t *)(v65 - 12) = v54 + *(uint32_t *)(v125 + v66 + 4);
          *(uint32_t *)(v65 - 8) = v54 + *(uint32_t *)(v125 + v66 + 8);
        }
        while ( v106 != v98 );
      }
      v126 = 0;
      v120 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20586B8));
      if ( v127 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v125,
          16 * v127);
      v125 = 0;
      v127 = 0x80000000;
      v123 = 0;
      if ( v124 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v122,
          16 * v124);
      v90 = (hkVector4f::Self *)((char *)v90 + 1);
      result = (int)(uintptr_t)(v87);
    }
    while ( v90 != v87 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_Plane  (binary VA: 0x181f760)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_Plane
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_Plane(int a1, unsigned int *a2, hkTransformf::Self *a3, uint32_t *a4)
{
  float *v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  float v8; // xmm4_4
  __m128 v9;
  int v10;
  int v11;
  int v12;
  __m128 v13;
  float v14; // xmm4_4
  int v15;
  char *v16;
  float *v17;
  float v18; // xmm4_4
  int v19; // xmm0_4
  float *v20;
  float v21; // xmm6_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  int v34;
  uint32_t *v35;
  int v36;
  uint32_t *v37;
  float v38; // xmm7_4
  float v39; // xmm6_4
  float v40; // xmm7_4
  __m128i v41;
  int v42;
  int v43;
  int v44;
  float v45; // xmm3_4
  float v46; // xmm1_4
  int v47;
  int v48;
  float v49; // xmm4_4
  float v50; // xmm3_4
  char *v51;
  float v52; // xmm4_4
  float v53; // xmm5_4
  float v54; // xmm3_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm5_4
  int v58;
  int v59;
  uint32_t *v60;
  int v61;
  int v62;
  float *v63;
  float *v64;
  float v65; // xmm0_4
  __m128i v66;
  int v67;
  int v68;
  uint32_t *v69;
  int v70;
  int *v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  hkVector4f::Self *v80;
  int *v81;
  int v82;
  int v83;
  int result;
  int v85;
  typedef const hkVector4f::Self *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef float *_g4_t_v90;
  typedef hkTransformf::Self *_g4_t_v91;
  typedef uint32_t *_g4_t_v92;
  typedef float *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef bool _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef char *_g4_t_v111;
  typedef int _g4_t_v112;
  typedef uint8_t _g4_t_v113[12];
  typedef float _g4_t_v114[2];
  typedef uint32_t *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef int *_g4_t_v126;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v86)) > _g4_s0 ? (12u + sizeof(_g4_t_v86)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v87)) > _g4_s1 ? (16u + sizeof(_g4_t_v87)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v88)) > _g4_s2 ? (32u + sizeof(_g4_t_v88)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v89)) > _g4_s3 ? (36u + sizeof(_g4_t_v89)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v90)) > _g4_s4 ? (40u + sizeof(_g4_t_v90)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v91)) > _g4_s5 ? (44u + sizeof(_g4_t_v91)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v92)) > _g4_s6 ? (64u + sizeof(_g4_t_v92)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v93)) > _g4_s7 ? (72u + sizeof(_g4_t_v93)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v94)) > _g4_s8 ? (72u + sizeof(_g4_t_v94)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v95)) > _g4_s9 ? (76u + sizeof(_g4_t_v95)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v96)) > _g4_s10 ? (76u + sizeof(_g4_t_v96)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v97)) > _g4_s11 ? (76u + sizeof(_g4_t_v97)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v98)) > _g4_s12 ? (80u + sizeof(_g4_t_v98)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v99)) > _g4_s13 ? (80u + sizeof(_g4_t_v99)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v100)) > _g4_s14 ? (80u + sizeof(_g4_t_v100)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v101)) > _g4_s15 ? (84u + sizeof(_g4_t_v101)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v102)) > _g4_s16 ? (84u + sizeof(_g4_t_v102)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v103)) > _g4_s17 ? (84u + sizeof(_g4_t_v103)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v104)) > _g4_s18 ? (88u + sizeof(_g4_t_v104)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v105)) > _g4_s19 ? (88u + sizeof(_g4_t_v105)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v106)) > _g4_s20 ? (88u + sizeof(_g4_t_v106)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v107)) > _g4_s21 ? (88u + sizeof(_g4_t_v107)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v108)) > _g4_s22 ? (92u + sizeof(_g4_t_v108)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v109)) > _g4_s23 ? (92u + sizeof(_g4_t_v109)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v110)) > _g4_s24 ? (92u + sizeof(_g4_t_v110)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v111)) > _g4_s25 ? (92u + sizeof(_g4_t_v111)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v112)) > _g4_s26 ? (92u + sizeof(_g4_t_v112)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v113)) > _g4_s27 ? (96u + sizeof(_g4_t_v113)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v114)) > _g4_s28 ? (108u + sizeof(_g4_t_v114)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v115)) > _g4_s29 ? (116u + sizeof(_g4_t_v115)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v116)) > _g4_s30 ? (120u + sizeof(_g4_t_v116)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v117)) > _g4_s31 ? (124u + sizeof(_g4_t_v117)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v118)) > _g4_s32 ? (132u + sizeof(_g4_t_v118)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v119)) > _g4_s33 ? (136u + sizeof(_g4_t_v119)) : _g4_s33,
    _g4_s35 = (140u + sizeof(_g4_t_v120)) > _g4_s34 ? (140u + sizeof(_g4_t_v120)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v121)) > _g4_s35 ? (144u + sizeof(_g4_t_v121)) : _g4_s35,
    _g4_s37 = (148u + sizeof(_g4_t_v122)) > _g4_s36 ? (148u + sizeof(_g4_t_v122)) : _g4_s36,
    _g4_s38 = (152u + sizeof(_g4_t_v123)) > _g4_s37 ? (152u + sizeof(_g4_t_v123)) : _g4_s37,
    _g4_s39 = (156u + sizeof(_g4_t_v124)) > _g4_s38 ? (156u + sizeof(_g4_t_v124)) : _g4_s38,
    _g4_s40 = (160u + sizeof(_g4_t_v125)) > _g4_s39 ? (160u + sizeof(_g4_t_v125)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v126)) > _g4_s40 ? (172u + sizeof(_g4_t_v126)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 12u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 16u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 32u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 36u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 40u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 44u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 64u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 72u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 72u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 76u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 76u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 76u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 80u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 80u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 80u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 84u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 84u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 84u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 88u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 88u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 88u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 88u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 92u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 92u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 92u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 92u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 92u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 96u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 108u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 116u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 120u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 124u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 132u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 136u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 140u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 144u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 148u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 152u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 156u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 160u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 172u);

  v126 = &a1;
  v4 = (float *)a2;
g4_m128_raw(v5) = a2[5];
  v6 = _mm_and_ps(G4_BITCAST<__m128>(a2[4]), g4_m128_u32(0x7FFFFFFFu));
  v7 = _mm_and_ps(v5, g4_m128_u32(0x7FFFFFFFu));
  v8 = *((float *)a2 + 6);
  v89 = a1;
g4_m128_lane<int32_t>(v9, 0) = fabs(v8);
  v91 = a3;
  v88 = a4;
  if (g4_m128_lane<float>(v7, 0) >=g4_m128_lane<float>(v6, 0) )
  {
    v10 = 480;
    v108 = 0;
    v104 = 2;
    v11 = 1;
  }
  else
  {
g4_m128_raw(v5) = a2[4];
    v7 = v6;
    v10 = 464;
    v108 = 2;
    v104 = 1;
    v11 = 0;
  }
  HIWORD(v12) = 0;
  v13 = _mm_cmple_ss(v7, v9);
  v115 = nullptr;
  v116 = 0;
  v117 = 0x80000000;
  v14 = 1.0 / COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v13, v5), 0) | LODWORD(v8) &g4_m128_lane<int32_t>(v13, 0));
  if (g4_m128_lane<float>(v9, 0) >=g4_m128_lane<float>(v7, 0) )
    v11 = 2;
  LOWORD(v12) = 496;
  if (g4_m128_lane<float>(v9, 0) >=g4_m128_lane<float>(v7, 0) )
    v10 = v12;
  v95 = v11;
  LOWORD(v12) = 1;
  if (g4_m128_lane<float>(v9, 0) <g4_m128_lane<float>(v7, 0) )
    v12 = v108;
  v109 = v12;
  v15 = 0;
  if (g4_m128_lane<float>(v9, 0) <g4_m128_lane<float>(v7, 0) )
    v15 = v104;
  v16 = (char *)&unk_1D1A840;
  v105 = v15;
  v17 = (float *)((char *)&g_vectorfConstants + v10);
  v18 = -v14;
LABEL_14:
  v93 = v17;
  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v115, 16, v87);
  v34 = v116;
  v17 = v93;
  while ( 1 )
  {
    v16 += 8;
    v19 = *((uint32_t *)v16 - 2);
    v116 = v34 + 1;
    v20 = (float *)&v115[4 * v34];
    *(&v122 + v95) = 1.0;
    *((uint32_t *)&v122 + v105) = v19;
    *(&v122 + v109) = *((float *)v16 - 1);
    v21 = v122;
    v22 = v123;
    v23 = v124;
    *v20 = v122;
    v20[1] = v22;
    v20[2] = v23;
    v24 = v21 * v4[12];
    v25 = v20[3];
    *v20 = v24;
    v26 = v22 * v4[13];
    v20[1] = v26;
    v27 = v23 * v4[14];
    v20[2] = v27;
    v28 = v25 * v4[15];
    v20[3] = v28;
    v29 = v24 + v4[8];
    *v20 = v29;
    v30 = v26 + v4[9];
    v20[1] = v30;
    v31 = v27 + v4[10];
    v20[2] = v31;
    v32 = v4[11] + v28;
    v20[3] = v32;
    v33 = (float)((float)((float)((float)(v4[4] * v29) + (float)(v4[5] * v30)) + (float)(v4[6] * v31)) + v4[7]) * v18;
    *v20 = (float)(*v93 * v33) + v29;
    v20[1] = (float)(v93[1] * v33) + v30;
    v20[2] = (float)(v93[2] * v33) + v31;
    v20[3] = (float)(v33 * v93[3]) + v32;
    if ( v16 == "11hkSingletonI26hkpUserShapeDisplayBuilderE" )
      break;
    v34 = v116;
    if ( (v117 & 0x3FFFFFFF) == v116 )
      goto LABEL_14;
  }
  v35 = v115;
  v36 = v116;
  v118 = *v115;
  v119 = v115[1];
  v120 = v115[2];
  v121 = v115[3];
  if ( v116 == (v117 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v115, 16, v87);
    v35 = v115;
    v36 = v116;
  }
  v37 = &v35[4 * v36];
  v106 = 0;
  *v37 = v118;
  v37[1] = v119;
  v37[2] = v120;
  v37[3] = v121;
  v110 = ++v116;
  v90 = &v4[v95];
  v38 = v90[8];
  v39 = v90[12] + v38;
  v40 = v38 - v90[12];
  v114[1] = v39;
  v114[0] = v40;
  while ( 1 )
  {
    v92 = v115;
    v98 = 4 * v106;
    v101 = 16 * v106 + 16;
    v63 = (float *)&v115[4 * v106];
    v94 = v106 + 1;
    v64 = (float *)((char *)v115 + v101);
    v65 = v63[v95];
g4_m128_raw(v66) = *(unsigned int *)((char *)&v115[v95] + v101);
    if ( v40 > v65 && *(float *)g4_m128_ptr<int32_t>(v66) > v40 )
      goto LABEL_19;
    if ( v40 > *(float *)g4_m128_ptr<int32_t>(v66) && v65 > v40 )
    {
LABEL_19:
g4_m128_raw(v41) = *(unsigned int *)((char *)&v115[v95] + v101);
      *(float *)g4_m128_ptr<int32_t>(v41) = *(float *)g4_m128_ptr<int32_t>(v66) - v65;
      v42 = _mm_cvtsi128_si32(v41);
      v43 = (2130706432 - v42) & ((v42 ^ (v42 + 2139095040)) >> 31);
      v44 = 0;
      v45 = (float)(2.0
                  - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v66) - v65)
                          * (float)((float)(2.0 - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v66) - v65) * *(float *)&v43))
                                  * *(float *)&v43)))
          * (float)((float)(2.0 - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v66) - v65) * *(float *)&v43)) * *(float *)&v43);
      v46 = (float)(v40 - v65) * (float)((float)(2.0 - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v66) - v65) * v45)) * v45);
      if ( v46 >= 3.40282e38f )
      {
        v46 = 3.40282e38f;
        v44 = -1;
      }
      if ( v39 <= v65 )
      {
LABEL_38:
        if ( v39 <= *(float *)g4_m128_ptr<int32_t>(v66) || v65 <= v39 )
          goto LABEL_26;
        goto LABEL_23;
      }
    }
    else
    {
      v46 = 3.40282e38f;
      v44 = -1;
      if ( v39 <= v65 )
        goto LABEL_38;
    }
    if ( *(float *)g4_m128_ptr<int32_t>(v66) <= v39 )
      goto LABEL_38;
LABEL_23:
    *(float *)g4_m128_ptr<int32_t>(v66) = *(float *)g4_m128_ptr<int32_t>(v66) - v65;
    v47 = _mm_cvtsi128_si32(v66);
    v48 = (2130706432 - v47) & ((v47 ^ (v47 + 2139095040)) >> 31);
    v49 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v66)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v66) * *(float *)&v48)) * *(float *)&v48)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v66) * *(float *)&v48)) * *(float *)&v48);
    v50 = (float)(v39 - v65) * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v66) * v49)) * v49);
    if ( v46 > v50 )
      v44 = 1;
    else
      v50 = v46;
    v46 = v50;
LABEL_26:
    if ( v44 != -1 )
    {
      v51 = (char *)v115 + v101;
      v52 = (float)((float)(v64[1] - v63[1]) * v46) + v63[1];
      v53 = (float)(*v64 - *v63) * v46;
      v54 = (float)((float)(v64[2] - v63[2]) * v46) + v63[2];
      v55 = (float)((float)(v64[3] - v63[3]) * v46) + v63[3];
      v56 = v114[v44];
      v57 = v53 + *v63;
      v123 = v52;
      v124 = v54;
      v125 = v55;
      v122 = v57;
      *(&v122 + v95) = v56;
      v58 = v110 + 1;
      v59 = v110 - v94;
      if ( v110 + 1 > (v117 & 0x3FFFFFFF) )
      {
        v85 = 2 * (v117 & 0x3FFFFFFF);
        if ( v58 >= v85 )
          v85 = v110 + 1;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v113,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)&v115,
          v85,
          16);
        v92 = v115;
        v51 = (char *)v115 + v101;
        v59 = v110 - v94;
      }
      hkMemUtil::memMove((hkMemUtil::Self *)&v92[v98 + 8], v51, 16 * v59);
      v60 = v115;
      ++v110;
      *(float *)&v115[v98 + 4] = v122;
      *(float *)((char *)v60 + v101 + 4) = v123;
      *(float *)((char *)v60 + v101 + 8) = v124;
      *(float *)((char *)v60 + v101 + 12) = v125;
      v116 = v58;
    }
    if ( v40 <= v65 && v65 <= v39 )
    {
      v61 = v110;
      ++v106;
      goto LABEL_32;
    }
    v61 = v110 - 1;
    v67 = 16 * (v110 - 1 - v106);
    v116 = v110 - 1;
    if ( v67 > 0 )
      break;
LABEL_32:
    v62 = v61 - 1;
    if ( v106 >= v61 - 1 )
      goto LABEL_45;
LABEL_33:
    v110 = v61;
  }
  v111 = (char *)v115 + v101;
  v68 = 0;
  v69 = &v115[v98];
  do
  {
    v70 = *(uint32_t *)&v111[v68 + 4];
    v69[v68 / 4u] = *(uint32_t *)&v111[v68];
    v69[v68 / 4u + 1] = v70;
    v68 += 8;
  }
  while ( v68 < v67 );
  v61 = v116;
  v62 = v116 - 1;
  if ( v106 < v116 - 1 )
    goto LABEL_33;
LABEL_45:
  v116 = v62;
  v71 = *(int **)(hkpShapeDisplayBuilder::getCurrentRawGeometry(v89, v88) + 8);
  v112 = v116;
  v72 = v71[3];
  v73 = v71[4] & 0x3FFFFFFF;
  v74 = v72 + v116;
  if ( v72 + v116 > v73 )
  {
    v75 = 2 * v73;
    if ( v75 >= v74 )
      v74 = v75;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v113,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      v71 + 2,
      v74,
      16);
    v74 = v71[3] + v112;
  }
  v71[3] = v74;
  v107 = v112 - 2;
  v96 = v71[6];
  v76 = v71[2] + 16 * v72;
  v102 = v71[7] & 0x3FFFFFFF;
  v77 = v96 + v112 - 2;
  if ( v77 > v102 )
  {
    v99 = v71[2] + 16 * v72;
    v78 = 2 * v102;
    if ( 2 * v102 < v77 )
      v78 = v96 + v112 - 2;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v113,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      v71 + 5,
      v78,
      16);
    v76 = v99;
    v77 = v71[6] + v107;
  }
  v71[6] = v77;
  v103 = v71[5] + 16 * v96;
  v100 = v90[4] > 0.0;
  if ( v112 > 0 )
  {
    v97 = v72;
    v79 = 0;
    v80 = (hkVector4f::Self *)v76;
    do
    {
      v86 = (const hkVector4f::Self *)&v115[4 * v79++];
      hkVector4f::setTransformedPos(v80, v91, v86);
      v80 = (hkVector4f::Self *)((char *)v80 + 16);
    }
    while ( v79 != v112 );
    v72 = v97;
  }
  if ( v107 > 0 )
  {
    v81 = (int *)v103;
    v82 = 0;
    do
    {
      v81[1] = v100 + 1 + v82 + v72;
      v83 = v82 + v72 - v100 + 2;
      ++v82;
      *v81 = v72;
      v81[2] = v83;
      v81 += 4;
    }
    while ( v107 != v82 );
  }
  result = v117;
  v116 = 0;
  if ( v117 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v115,
             16 * v117);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildPartialShapeDisplay  (binary VA: 0x18200a0)
// Original: hkpShapeDisplayBuilder::buildPartialShapeDisplay
// ----------------------------------------------------------------------------
uint8_t * hkpShapeDisplayBuilder::buildPartialShapeDisplay(uint8_t *a1, int a2, float *a3, hkTransformf::Self *a4, int a5, int *a6, int a7, hkMemoryAllocator::Self *a8, __m128 *a9)
{
  uint8_t *v9;
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef hkTransformf::Self *_g4_t_v18;
  typedef int *_g4_t_v19;
  typedef char _g4_t_v20;
  typedef uint8_t _g4_t_v21[64];
  typedef uint32_t _g4_t_v22[22];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v18)) > _g4_s3 ? (32u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v19)) > _g4_s4 ? (48u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (63u + sizeof(_g4_t_v20)) > _g4_s5 ? (63u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v21)) > _g4_s6 ? (64u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v22)) > _g4_s7 ? (128u + sizeof(_g4_t_v22)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 63u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 128u);

  v22[18] = (uint32_t)(uintptr_t)(&a1);
  v9 = a1;
  v19 = a6;
  switch ( *((uint8_t *)a3 + 8) )
  {
    case 0:
      hkpShapeDisplayBuilder::buildShapeDisplay_Sphere(a2, (int)(uintptr_t)(a3), (uint32_t *)(a4), (int)(uintptr_t)(a8),g4_m128_ptr<float>(*(a9)));
      --*v19;
      goto LABEL_5;
    case 1:
      hkpShapeDisplayBuilder::buildShapeDisplay_Cylinder(
        a2,
        (hkpCylinderShape::Self *)a3,
        (int)(uintptr_t)(a4),
        (int)(uintptr_t)(a8),
        (int)(uintptr_t)(a9),
        v15,
        v16,
        v17);
      --*v19;
      goto LABEL_5;
    case 2:
      hkpShapeDisplayBuilder::buildShapeDisplay_Triangle(a2, a3, a4, (uint32_t *)(a8), (int *)a9);
      --*v19;
      goto LABEL_5;
    case 3:
      hkpShapeDisplayBuilder::buildShapeDisplay_Box(a2, (__m128 *)a3, (uint32_t *)(a4), (int)(uintptr_t)(a8), a9);
      --*v19;
      goto LABEL_5;
    case 4:
      hkpShapeDisplayBuilder::buildShapeDisplay_Capsule(a2, a3, a4, a8, a9);
      --*v19;
      goto LABEL_5;
    case 5:
      hkpShapeDisplayBuilder::buildShapeDisplay_ConvexVertices(a2, (int *)a3, (int)(uintptr_t)(a4), (int)(uintptr_t)(a8), (int)(uintptr_t)(a9));
      --*v19;
      goto LABEL_5;
    case 6:
    case 7:
    case 8:
    case 0xD:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x16:
    case 0x1A:
    case 0x1B:
      G4_VCALL<void>(a3, 64);
      hkpShapeDisplayBuilder::buildPartialShapeDisplay_ShapeContainer(v9);
      return v9;
    case 9:
    case 0x1E:
      goto LABEL_12;
    case 0xA:
      v11 = a3[8];
      v12 = a3[9];
      v13 = a3[10];
      v14 = a3[11];
      if ( a9 != nullptr )
      {
        v11 = v11 *g4_m128_lane<float>(*(a9), 0);
        v12 = v12 *g4_m128_lane<float>(*(a9), 1);
        v13 = v13 *g4_m128_lane<float>(*(a9), 2);
        v14 = v14 *g4_m128_lane<float>(*(a9), 3);
      }
      *(float *)&v22[12] = v11;
      *(float *)&v22[13] = v12;
      *(float *)&v22[14] = v13;
      *(float *)&v22[15] = v14;
      v22[0] = 1065353216;
      memset(&v22[1], 0, 16);
      v22[5] = 1065353216;
      memset(&v22[6], 0, 16);
      v22[10] = 1065353216;
      v22[11] = 0;
      hkTransformf::setMul((hkTransformf::Self *)v21, a4, (const hkTransformf::Self *)v22);
      goto LABEL_12;
    case 0xB:
      v18 = a4;
      hkQsTransformf::copyToTransformNoScale((hkQsTransformf::Self *)(a3 + 8), (hkTransformf::Self *)v21);
      hkTransformf::setMul((hkTransformf::Self *)v22, v18, (const hkTransformf::Self *)v21);
      goto LABEL_12;
    case 0xC:
      hkpShapeDisplayBuilder::buildPartialShapeDisplay_SampledHeightField(a1, a2, a3, a4, a5, a6, a7, (uint32_t *)(a8));
      return v9;
    case 0xE:
      hkTransformf::setMul((hkTransformf::Self *)v22, a4, (const hkTransformf::Self *)(a3 + 12));
LABEL_12:
      hkpShapeDisplayBuilder::buildPartialShapeDisplay(v9);
      return v9;
    case 0x18:
      hkpShapeDisplayBuilder::buildShapeDisplay_ConvexPiece(a2, (uint32_t *)(a3), a4, a8);
      --*v19;
      goto LABEL_5;
    case 0x19:
      hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiSphere(&v20, a2, (int)(uintptr_t)(a3), (int)(uintptr_t)(a4), a5, a6, a7, a8);
      goto LABEL_5;
    case 0x1F:
      hkpShapeDisplayBuilder::buildShapeDisplay_Plane(a2, (unsigned int *)a3, a4, (uint32_t *)(a8));
      --*v19;
      goto LABEL_5;
    case 0x21:
      hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiRay((char *)(a1), a2, (int)(uintptr_t)(a3), a4, a5, a6, a7, (uint32_t *)(a8));
      return v9;
    default:
      hkpShapeDisplayBuilder::buildShapeDisplay_UserShapes((uint8_t *)(&v20), a2, (int)(uintptr_t)(a3), (int)(uintptr_t)(a4), (int)(uintptr_t)(a8));
      if ( v20 != 0 )
        --*v19;
LABEL_5:
      *v9 = 1;
      return v9;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildPartialShapeDisplay_ShapeContainer  (binary VA: 0x18206f0)
// Original: hkpShapeDisplayBuilder::buildPartialShapeDisplay_ShapeContainer
// ----------------------------------------------------------------------------
uint8_t * hkpShapeDisplayBuilder::buildPartialShapeDisplay_ShapeContainer(uint8_t *a1, int a2, int a3, hkTransformf::Self *a4, int a5, int *a6, uint32_t *a7, hkMemoryAllocator::Self *a8, __m128 *a9)
{
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  float *v16;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef uint8_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef __m128 *_g4_t_v25;
  typedef hkMemoryAllocator::Self *_g4_t_v26;
  typedef hkTransformf::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int *_g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint32_t _g4_t_v34[134];
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v21)) > _g4_s1 ? (48u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v22)) > _g4_s2 ? (52u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v23)) > _g4_s3 ? (64u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v24)) > _g4_s4 ? (64u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v25)) > _g4_s5 ? (68u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v26)) > _g4_s6 ? (72u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v27)) > _g4_s7 ? (76u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v28)) > _g4_s8 ? (80u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v29)) > _g4_s9 ? (84u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v30)) > _g4_s10 ? (84u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v31)) > _g4_s11 ? (84u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v32)) > _g4_s12 ? (88u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (95u + sizeof(_g4_t_v33)) > _g4_s13 ? (95u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v34)) > _g4_s14 ? (96u + sizeof(_g4_t_v34)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 95u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);

  v34[130] = (uint32_t)(uintptr_t)(&a1);
  v21 = a1;
  v28 = a2;
  v9 = a7;
  v10 = a5;
  v27 = a4;
  v32 = a6;
  v26 = a8;
  v25 = a9;
  v11 = a7[3];
  v12 = a3;
  if ( v11 == a5 )
  {
    if ( v11 == (a7[4] & 0x3FFFFFFF) )
    {
      v31 = a5;
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a7 + 2),
        4,
        v20);
      v11 = v9[3];
      v10 = v31;
    }
    v24 = v10;
    v18 = v9[2];
    v9[3] = v11 + 1;
    v30 = (int *)(v18 + 4 * v11);
    v19 = G4_VCALL<int>(v12, 12);
    v10 = v24;
    *v30 = v19;
  }
  v22 = 4 * v10;
  v13 = *(uint32_t *)(v9[2] + 4 * v10);
  if ( v13 == -1 )
  {
LABEL_10:
    --v9[3];
    *v21 = 1;
    return v21;
  }
  else
  {
    v23 = v10 + 1;
    if ( *v32 > 0 )
    {
      v29 = (int)(uintptr_t)(v9);
      v14 = v12;
      v15 = v13;
      do
      {
        v16 = (float *)G4_VCALL<int>(v14, 24, v15, v34);
        hkpShapeDisplayBuilder::buildPartialShapeDisplay((uint8_t *)(&v33), v28, v16, v27, v23, v32, v29, v26, v25);
        if ( v33 == 0 )
          break;
        v15 = G4_VCALL<int>(v14, 16, v15);
        *(uint32_t *)(*(uint32_t *)(v29 + 8) + v22) = v15;
        if ( v15 == -1 )
        {
          v9 = (uint32_t *)v29;
          goto LABEL_10;
        }
      }
      while ( *v32 > 0 );
    }
    *v21 = 0;
    return v21;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::resetCurrentRawGeometry  (binary VA: 0x1820930)
// Original: hkpShapeDisplayBuilder::resetCurrentRawGeometry
// ----------------------------------------------------------------------------
hkpShapeDisplayBuilder::Self * hkpShapeDisplayBuilder::resetCurrentRawGeometry(hkpShapeDisplayBuilder::Self *self)
{
  *((uint32_t *)self + 3) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildPartialDisplayGeometries  (binary VA: 0x1820940)
// Original: hkpShapeDisplayBuilder::buildPartialDisplayGeometries
// ----------------------------------------------------------------------------
uint8_t * hkpShapeDisplayBuilder::buildPartialDisplayGeometries(uint8_t *a1, hkpShapeDisplayBuilder::Self *a2, float *a3, int *a4, int a5, hkMemoryAllocator::Self *a6)
{
  hkpShapeDisplayBuilder::Self *v6;
  uint8_t *v7;
  int v9;
  int32_t v10; // kr00_4
  int32_t v11;
  int32_t v12; // ett
  typedef hkMemoryAllocator::Self *_g4_t_v13;
  typedef int *_g4_t_v14;
  typedef float *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef uint32_t _g4_t_v18[22];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v17)) > _g4_s4 ? (19u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 19u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);

  v18[18] = (uint32_t)(uintptr_t)(&a1);
  v15 = a3;
  v14 = a4;
  v16 = a5;
  v6 = a2;
  v7 = a1;
  v13 = a6;
  v18[0] = 1065353216;
  memset(&v18[1], 0, 16);
  v18[5] = 1065353216;
  memset(&v18[6], 0, 16);
  v18[10] = 1065353216;
  memset(&v18[11], 0, 20);
  hkpShapeDisplayBuilder::resetCurrentRawGeometry(a2);
  *((uint32_t *)v13 + 1) = 0;
  hkpShapeDisplayBuilder::buildPartialShapeDisplay((uint8_t *)(&v17), (int)(uintptr_t)(v6), v15, (hkTransformf::Self *)v18, 0, v14, v16, v13, nullptr);
  if ( v17 != 0 )
  {
    if ( *(uint16_t *)(v16 + 6) != 0 )
    {
      do
      {
        v10 = *(uint32_t *)(v16 + 4);
        HIWORD(v9) = HIWORD(v10);
        LOWORD(v9) = 0;
        v11 = v9 | (uint16_t)(v10 - 1);
        v12 = v10;
      }
      while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v16 + 4), v12, v11) );
      if ( (uint16_t)v11 == 0 )
        G4_VCALL<void>(v16, 16);
    }
    *v7 = 1;
    return v7;
  }
  else
  {
    *v7 = 0;
    return v7;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_ShapeUnregistered  (binary VA: 0x1820bc0)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_ShapeUnregistered
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_ShapeUnregistered(int a1, int a2, int a3, int a4, int a5, hkMemoryAllocator::Self *a6, int a7, int a8, int a9, int a10, int a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19, float a20, float a21, float a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35)
{
  float v35; // xmm5_4
  int v36;
  float v37; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm4_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  int v44;
  int v45;
  int v46;
  int v47;
  float v48; // xmm1_4
  hkMemoryAllocator::Self *v49;
  float v50; // xmm2_4
  float v51; // xmm2_4
  float v52; // xmm4_4
  float v53; // xmm1_4
  float v54; // xmm3_4
  int v55;
  int v56;
  int v57;
  int v58;
  float v59; // xmm1_4
  hkMemoryAllocator::Self *v60;
  float v61; // xmm2_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  float v64; // xmm4_4
  float v65; // xmm3_4
  int v66;
  int v67;
  int result;
  int savedregs;
  float retaddr;
  float v74;
  float v75;
  float v76;
  hkMemoryAllocator::Self *v77;
  hkMemoryAllocator::Self *v78;
  hkMemoryAllocator::Self *v79;
  hkMemoryAllocator::Self *v80;
  hkMemoryAllocator::Self *v81;
  hkMemoryAllocator::Self *v82;
  float v83;
  float v84;
  hkMemoryAllocator::Self *v85;
  hkMemoryAllocator::Self *v86;
  int *address;
  int v88;
  int v89;
  int v90;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70[8];
  typedef int _g4_t_v71[131];
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (0u + sizeof(_g4_t_v69)) > _g4_s0 ? (0u + sizeof(_g4_t_v69)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v70)) > _g4_s1 ? (64u + sizeof(_g4_t_v70)) : _g4_s1,
    _g4_s3 = (96u + sizeof(_g4_t_v71)) > _g4_s2 ? (96u + sizeof(_g4_t_v71)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 0u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 64u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 96u);

  hkErrStream::Construct((hkErrStream::Self *)v70, (hkString::Self *)v71, 512);
  hkOstream::opShl((int)(uintptr_t)(v70), (hkString::Self *)"Shape type unsupported. Using current aabb for display geometry");
  hkError::messageReport(
    (hkError::Self *)0xFFFFFFFF,
    (int)(uintptr_t)(v71),
    "VisualDebugger/Viewer/hkpShapeDisplayBuilder.cpp",
    (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_244)->st_info,
    v69);
  hkErrStream::Destroy((hkErrStream::Self *)v70);
  G4_VCALL<void>(a2, 24, &unk_1D12FD0, 0, v70);
  v76 = a20 - a16;
  v75 = a21 - a17;
  v35 = (float)(a20 - a16) * 0.5;
  v74 = a22 - a18;
  v84 = (float)(a21 - a17) * 0.5;
  v83 = 0.5 * (float)(a22 - a18);
  retaddr = fminf(fminf(v35, v84), v83) * 0.16666667f;
  a13 = retaddr;
  a14 = retaddr;
  a15 = retaddr;
  a12 = v35 + retaddr;
  address = (int *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v36 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 112);
  hkDisplayBox::Construct((hkDisplayBox::Self *)v36, (const hkVector4f::Self *)&a12);
  v88 = 0;
  v37 = 0.0;
LABEL_2:
  v39 = 0.0;
  if ( (v88 & 1) == 0 )
    goto LABEL_4;
LABEL_3:
  v39 = v75;
  while ( 1 )
  {
LABEL_4:
    a25 = 0;
    a26 = 0;
    a27 = 0;
    a28 = 0;
    a29 = 1065353216;
    a30 = 0;
    a31 = 0;
    a32 = 0;
    a33 = 0;
    a34 = 1065353216;
    a24 = 1065353216;
    v40 = v35 + a16;
    v41 = v39 + a17;
    v42 = v37 + a18;
    v43 = a19;
    a35 = 0;
    *(uint32_t *)(v36 + 16) = 1065353216;
    *(uint32_t *)(v36 + 20) = a25;
    *(uint32_t *)(v36 + 24) = a26;
    *(uint32_t *)(v36 + 28) = a27;
    *(uint32_t *)(v36 + 32) = a28;
    *(uint32_t *)(v36 + 36) = a29;
    *(uint32_t *)(v36 + 40) = a30;
    *(uint32_t *)(v36 + 44) = a31;
    *(uint32_t *)(v36 + 48) = a32;
    *(uint32_t *)(v36 + 52) = a33;
    *(uint32_t *)(v36 + 56) = a34;
    v44 = a35;
    *(float *)(v36 + 64) = v40;
    *(uint32_t *)(v36 + 60) = v44;
    *(float *)(v36 + 68) = v41;
    *(float *)(v36 + 72) = v42;
    *(float *)(v36 + 76) = v43 + 0.0;
    v45 = *((uint32_t *)a6 + 1);
    if ( v45 == (*((uint32_t *)a6 + 2) & 0x3FFFFFFF) )
    {
      v81 = a6;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a6, &loc_4, savedregs);
      a6 = v81;
      v45 = *((uint32_t *)v81 + 1);
    }
    ++v88;
    *(uint32_t *)(*(uint32_t *)a6 + 4 * v45) = v36;
    ++*((uint32_t *)a6 + 1);
    if ( v88 == 4 )
      break;
    v77 = a6;
    v36 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 112);
    hkDisplayBox::Construct((hkDisplayBox::Self *)v36, (const hkVector4f::Self *)&a12);
    v37 = 0.0;
    a6 = v77;
    if ( (v88 & 2) == 0 )
      goto LABEL_2;
    v39 = 0.0;
    v37 = v74;
    if ( (v88 & 1) != 0 )
      goto LABEL_3;
  }
  v79 = a6;
  a12 = retaddr;
  a14 = retaddr;
  v46 = *address;
  a15 = retaddr;
  a13 = v84 + retaddr;
  v47 = (*(int (**)(uint32_t, int))(**(uint32_t **)(v46 + 44) + 8))(*(uint32_t *)(v46 + 44), 112);
  hkDisplayBox::Construct((hkDisplayBox::Self *)v47, (const hkVector4f::Self *)&a12);
  v89 = 0;
  v48 = 0.0;
  v49 = v79;
LABEL_11:
  v50 = 0.0;
  if ( (v89 & 1) == 0 )
    goto LABEL_13;
LABEL_12:
  v50 = v76;
  while ( 1 )
  {
LABEL_13:
    a25 = 0;
    a26 = 0;
    a27 = 0;
    a28 = 0;
    a29 = 1065353216;
    a30 = 0;
    a31 = 0;
    a32 = 0;
    a33 = 0;
    a34 = 1065353216;
    a24 = 1065353216;
    v51 = v50 + a16;
    v52 = v84 + a17;
    v53 = v48 + a18;
    v54 = a19;
    a35 = 0;
    *(uint32_t *)(v47 + 16) = 1065353216;
    *(uint32_t *)(v47 + 20) = a25;
    *(uint32_t *)(v47 + 24) = a26;
    *(uint32_t *)(v47 + 28) = a27;
    *(uint32_t *)(v47 + 32) = a28;
    *(uint32_t *)(v47 + 36) = a29;
    *(uint32_t *)(v47 + 40) = a30;
    *(uint32_t *)(v47 + 44) = a31;
    *(uint32_t *)(v47 + 48) = a32;
    *(uint32_t *)(v47 + 52) = a33;
    *(uint32_t *)(v47 + 56) = a34;
    v55 = a35;
    *(float *)(v47 + 64) = v51;
    *(uint32_t *)(v47 + 60) = v55;
    *(float *)(v47 + 68) = v52;
    *(float *)(v47 + 72) = v53;
    *(float *)(v47 + 76) = v54 + 0.0;
    v56 = *((uint32_t *)v49 + 1);
    if ( v56 == (*((uint32_t *)v49 + 2) & 0x3FFFFFFF) )
    {
      v82 = v49;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v49, &loc_4, savedregs);
      v49 = v82;
      v56 = *((uint32_t *)v82 + 1);
    }
    ++v89;
    *(uint32_t *)(*(uint32_t *)v49 + 4 * v56) = v47;
    ++*((uint32_t *)v49 + 1);
    if ( v89 == 4 )
      break;
    v78 = v49;
    v47 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 112);
    hkDisplayBox::Construct((hkDisplayBox::Self *)v47, (const hkVector4f::Self *)&a12);
    v48 = 0.0;
    v49 = v78;
    if ( (v89 & 2) == 0 )
      goto LABEL_11;
    v50 = 0.0;
    v48 = v74;
    if ( (v89 & 1) != 0 )
      goto LABEL_12;
  }
  v85 = v49;
  a12 = retaddr;
  a13 = retaddr;
  v57 = *address;
  a15 = retaddr;
  a14 = v83 + retaddr;
  v58 = (*(int (**)(uint32_t, int))(**(uint32_t **)(v57 + 44) + 8))(*(uint32_t *)(v57 + 44), 112);
  hkDisplayBox::Construct((hkDisplayBox::Self *)v58, (const hkVector4f::Self *)&a12);
  v90 = 0;
  v59 = 0.0;
  v60 = v85;
LABEL_20:
  v61 = 0.0;
  if ( (v90 & 1) == 0 )
    goto LABEL_22;
LABEL_21:
  v61 = v76;
  while ( 1 )
  {
LABEL_22:
    a25 = 0;
    a26 = 0;
    a27 = 0;
    a28 = 0;
    a29 = 1065353216;
    a30 = 0;
    a31 = 0;
    a32 = 0;
    a33 = 0;
    a34 = 1065353216;
    a24 = 1065353216;
    v62 = v61 + a16;
    v63 = v59 + a17;
    v64 = v83 + a18;
    v65 = a19;
    a35 = 0;
    *(uint32_t *)(v58 + 16) = 1065353216;
    *(uint32_t *)(v58 + 20) = a25;
    *(uint32_t *)(v58 + 24) = a26;
    *(uint32_t *)(v58 + 28) = a27;
    *(uint32_t *)(v58 + 32) = a28;
    *(uint32_t *)(v58 + 36) = a29;
    *(uint32_t *)(v58 + 40) = a30;
    *(uint32_t *)(v58 + 44) = a31;
    *(uint32_t *)(v58 + 48) = a32;
    *(uint32_t *)(v58 + 52) = a33;
    *(uint32_t *)(v58 + 56) = a34;
    v66 = a35;
    *(float *)(v58 + 64) = v62;
    *(uint32_t *)(v58 + 60) = v66;
    *(float *)(v58 + 68) = v63;
    *(float *)(v58 + 72) = v64;
    *(float *)(v58 + 76) = v65 + 0.0;
    v67 = *((uint32_t *)v60 + 1);
    if ( v67 == (*((uint32_t *)v60 + 2) & 0x3FFFFFFF) )
    {
      v86 = v60;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v60, &loc_4, savedregs);
      v60 = v86;
      v67 = *((uint32_t *)v86 + 1);
    }
    result = *(uint32_t *)v60;
    ++v90;
    *(uint32_t *)(*(uint32_t *)v60 + 4 * v67) = v58;
    ++*((uint32_t *)v60 + 1);
    if ( v90 == 4 )
      return result;
    v80 = v60;
    v58 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 112);
    hkDisplayBox::Construct((hkDisplayBox::Self *)v58, (const hkVector4f::Self *)&a12);
    v59 = 0.0;
    v60 = v80;
    if ( (v90 & 2) == 0 )
      goto LABEL_20;
    v61 = 0.0;
    v59 = v75;
    if ( (v90 & 1) != 0 )
      goto LABEL_21;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay  (binary VA: 0x1821950)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay
// ----------------------------------------------------------------------------
uint8_t * hkpShapeDisplayBuilder::buildShapeDisplay(int a1, int a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4, __m128 *a5)
{
  uint8_t *result;
  uint8_t v6[25];

  result = hkpShapeDisplayBuilder::buildShapeDisplay_UserShapes(v6, a1, a2, (int)(uintptr_t)(a3), (int)(uintptr_t)(a4));
  if ( v6[0] == 0 )
    return (uint8_t *)sub_1821450(a1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildDisplayGeometries  (binary VA: 0x18219d0)
// Original: hkpShapeDisplayBuilder::buildDisplayGeometries
// ----------------------------------------------------------------------------
uint8_t * hkpShapeDisplayBuilder::buildDisplayGeometries(hkpShapeDisplayBuilder::Self *a1, int a2, hkMemoryAllocator::Self *a3)
{
  uint32_t v4[20];

  v4[0] = 1065353216;
  memset(&v4[1], 0, 16);
  v4[5] = 1065353216;
  memset(&v4[6], 0, 16);
  v4[10] = 1065353216;
  memset(&v4[11], 0, 20);
  hkpShapeDisplayBuilder::resetCurrentRawGeometry(a1);
  *((uint32_t *)a3 + 1) = 0;
  return hkpShapeDisplayBuilder::buildShapeDisplay((int)(uintptr_t)(a1), a2, (hkTransformf::Self *)v4, a3, nullptr);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::addObjectToDebugDisplay  (binary VA: 0x1821ad0)
// Original: hkpShapeDisplayBuilder::addObjectToDebugDisplay
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::addObjectToDebugDisplay(hkpShapeDisplayBuilder::Self *self, const hkpShape::Self *a2, hkTransformf::Self *a3)
{
  int v3;
  uint32_t *v4;
  int result;
  typedef uint8_t _g4_t_v6[16];
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v10)) > _g4_s4 ? (32u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);

  hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Construct((hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v6);
  hkpShapeDisplayBuilder::Construct(
    (hkpShapeDisplayBuilder::Self *)v10,
    (const hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v6);
  v7 = nullptr;
  v8 = 0;
  v9 = 0x80000000;
  hkpShapeDisplayBuilder::buildDisplayGeometries((hkpShapeDisplayBuilder::Self *)v10, (int)(uintptr_t)(self), (hkMemoryAllocator::Self *)&v7);
  hkDebugDisplay::addGeometry(hkSingleton<hkDebugDisplay::Self>::s_instance, &v7, a2, a3, 0, self);
  while ( 1 )
  {
    v3 = v8;
    if ( v8 == 0 )
      break;
    v4 = v7;
    if ( *v7 != 0 )
    {
      G4_VCALL<void>(*v7, 4);
      v4 = v7;
      v3 = v8;
    }
    v8 = v3 - 1;
    if ( v3 == 1 )
      break;
    *v4 = v4[v3 - 1];
  }
  result = v9;
  v8 = 0;
  if ( v9 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v7,
             4 * v9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildDisplayGeometries_ea1821bd0  (binary VA: 0x1821bd0)
// Original: hkpShapeDisplayBuilder::buildDisplayGeometries
// ----------------------------------------------------------------------------
uint8_t * hkpShapeDisplayBuilder::buildDisplayGeometries_ea1821bd0(hkpShapeDisplayBuilder::Self *a1, int a2, hkMemoryAllocator::Self *a3)
{
  return hkpShapeDisplayBuilder::buildDisplayGeometries(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplayShapeSubParts  (binary VA: 0x1821c10)
// Original: hkpShapeDisplayBuilder::buildShapeDisplayShapeSubParts
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplayShapeSubParts(int a1, int a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4)
{
  int result;
  uint32_t *v5;
  int v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[64];
  typedef uint32_t _g4_t_v12[19];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v8)) > _g4_s1 ? (32u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v9)) > _g4_s2 ? (36u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v10)) > _g4_s3 ? (40u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v11)) > _g4_s4 ? (48u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (112u + sizeof(_g4_t_v12)) > _g4_s5 ? (112u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 112u);

  v9 = 0;
  result = *(uint32_t *)(a2 + 200);
  v8 = result;
  if ( result > 0 )
  {
    do
    {
      v5 = (uint32_t *)(*(uint32_t *)(a2 + 196) + (v9 << 6));
      hkRotationf::set((hkRotationf::Self *)v12, (const hkQuaternionf::Self *)(v5 + 8));
      v12[12] = v5[12];
      v12[13] = v5[13];
      v12[14] = v5[14];
      v12[15] = v5[15];
      hkTransformf::setMul((hkTransformf::Self *)v11, a3, (const hkTransformf::Self *)v12);
      v6 = 0;
      v10 = v5[6];
      if ( v10 > 0 )
      {
        do
        {
          v7 = *(uint32_t *)(v5[5] + 4 * v6++);
          hkpShapeDisplayBuilder::buildShapeDisplay(a1, v7, (hkTransformf::Self *)v11, a4, nullptr);
        }
        while ( v6 != v10 );
      }
      ++v9;
      result = v8;
    }
    while ( v9 != v8 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_ExtendedMeshShape  (binary VA: 0x1821d30)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_ExtendedMeshShape
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_ExtendedMeshShape(int a1, int a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4)
{
  int v4;
  int v5;

  v4 = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 28))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  if ( (void *)G4_VCALL<int>(v4, 28, a2) == &hkpStorageExtendedMeshShapeClass )
  {
    hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsStorage(a1, a2, a3, (uint32_t *)(a4));
    return hkpShapeDisplayBuilder::buildShapeDisplayShapeSubParts(a1, a2, a3, a4);
  }
  else
  {
    v5 = 0;
    if ( a2 != 0 )
      v5 = a2 + 16;
    return hkpShapeDisplayBuilder::buildShapeDisplay_ShapeContainer(a1, v5, a3, a4);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_ListShape  (binary VA: 0x1821e80)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_ListShape
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_ListShape(int a1, uint32_t *a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4)
{
  int result;
  int i;

  result = G4_VCALL<int>(a2, 100);
  for ( i = result; result != -1; i = result )
  {
    hkpShapeDisplayBuilder::buildShapeDisplay(a1, *(uint32_t *)(a2[6] + 16 * i), a3, a4, nullptr);
    result = G4_VCALL<int>(a2, 104, i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayBuilder::buildShapeDisplay_StaticCompound  (binary VA: 0x1821f00)
// Original: hkpShapeDisplayBuilder::buildShapeDisplay_StaticCompound
// ----------------------------------------------------------------------------
int hkpShapeDisplayBuilder::buildShapeDisplay_StaticCompound(int a1, int a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4, float *a5)
{
  int result;
  int v6;
  float *v7;
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm7_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm7_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  __m128i v21;
  __m128i v22;
  int v23;
  __m128i v24;
  float v25; // xmm0_4
  uint8_t v26;
  int v27;
  uint64_t v39; // 0:^4C.4,4:ecx.4
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef int _g4_t_v30;
  typedef float _g4_t_v31[8];
  typedef float _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef float _g4_t_v36[8];
  typedef __m128 _g4_t_v37;
  typedef uint8_t _g4_t_v38[76];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v30)) > _g4_s2 ? (24u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v31)) > _g4_s3 ? (32u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v32)) > _g4_s4 ? (64u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v33)) > _g4_s5 ? (68u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v34)) > _g4_s6 ? (72u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v35)) > _g4_s7 ? (76u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v36)) > _g4_s8 ? (80u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v37)) > _g4_s9 ? (112u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v38)) > _g4_s10 ? (128u + sizeof(_g4_t_v38)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 128u);

  hkQsTransformf::setFromTransformNoScale((hkQsTransformf::Self *)v31, a3);
  if ( a5 != nullptr )
  {
    v32 = *a5;
    v33 = *((unsigned int *)a5 + 1);
    v34 = *((unsigned int *)a5 + 2);
    v35 = *((unsigned int *)a5 + 3);
  }
  result = *(uint32_t *)(a2 + 36);
  if ( result > 0 )
  {
    v30 = 0;
    do
    {
      v6 = v30 << 6;
      v7 = (float *)((v30 << 6) + *(uint32_t *)(a2 + 32));
      v8 = v32 * *v7;
      v9 = *(float *)&v33 * v7[1];
      v10 = *(float *)&v34 * v7[2];
      v11 = (float)(v31[7] * v31[7]) - 0.5;
      v12 = (float)((float)(v31[4] * v8) + (float)(v31[5] * v9)) + (float)(v31[6] * v10);
      v13 = (float)((float)(v8 * v11) + (float)(v31[4] * v12))
          + (float)((float)((float)(v31[5] * v10) - (float)(v31[6] * v9)) * v31[7]);
      v14 = (float)((float)(v9 * v11) + (float)(v31[5] * v12))
          + (float)(v31[7] * (float)((float)(v31[6] * v8) - (float)(v31[4] * v10)));
      v15 = (float)(*(float *)&v35 * v7[3]) * v11;
      v16 = (float)((float)(v10 * v11) + (float)(v31[6] * v12))
          + (float)((float)((float)(v9 * v31[4]) - (float)(v8 * v31[5])) * v31[7]);
      v17 = v7[6];
      v18 = v7[4];
      v19 = (float)(v15 + (float)(v12 * v31[7])) + (float)(0.0 * v31[7]);
      v28 = v7[7];
      v29 = v7[5];
      v36[2] = (float)(v16 + v16) + v31[2];
      v20 = v32 * v7[8];
      v36[0] = (float)(v13 + v13) + v31[0];
      v36[3] = (float)(v19 + v19) + v31[3];
      *(float *)&v39 = v20;
g4_m128_raw(v21) = v33;
      *(float *)g4_m128_ptr<int32_t>(v21) = *(float *)&v33 * v7[9];
      v36[1] = (float)(v14 + v14) + v31[1];
      HIDWORD(v39) = _mm_cvtsi128_si32(v21);
g4_m128_raw(v22) = v34;
      *(float *)g4_m128_ptr<int32_t>(v22) = *(float *)&v34 * v7[10];
      v23 = _mm_cvtsi128_si32(v22);
g4_m128_raw(v24) = v35;
      *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)&v35 * v7[11];
      v36[4] = (float)((float)((float)(v31[5] * v17) - (float)(v31[6] * v29)) + (float)(v31[7] * v18))
             + (float)(v31[4] * v28);
      v36[5] = (float)((float)((float)(v31[6] * v18) - (float)(v31[4] * v17)) + (float)(v31[7] * v29))
             + (float)(v31[5] * v28);
      v36[6] = (float)((float)((float)(v29 * v31[4]) - (float)(v18 * v31[5])) + (float)(v31[7] * v17))
             + (float)(v31[6] * v28);
g4_m128_lane<uint64_t>(v37, 0) = v39;
g4_m128_lane<uint64_t>(v37, 1) = __PAIR64__(_mm_cvtsi128_si32(v24), v23);
      v36[7] = (float)(v28 * v31[7])
             - (float)((float)((float)(v31[4] * v18) + (float)(v29 * v31[5])) + (float)(v17 * v31[6]));
      hkQsTransformf::copyToTransformNoScale((hkQsTransformf::Self *)v36, (hkTransformf::Self *)v38);
      v25 = fabs(g4_m128_lane<float>(v37, 2) - 1.0);
      v26 = (fabs(g4_m128_lane<float>(v37, 0) - 1.0) <= 0.00000011920929f)
          | (fabs(g4_m128_lane<float>(v37, 1) - 1.0) <= 0.00000011920929f ? 2 : 0);
      LOBYTE(v27) = v25 <= 0.00000011920929f ? 4 : 0;
      if ( fabs(g4_m128_lane<float>(v37, 3) - 1.0) <= 0.00000011920929f )
        v27 = v25 > 0.00000011920929f ? 8 : 12;
      if ( (((uint8_t)v27 | v26) & 7) == 7 )
        hkpShapeDisplayBuilder::buildShapeDisplay(
          a1,
          *(uint32_t *)(*(uint32_t *)(a2 + 32) + v6 + 48),
          (hkTransformf::Self *)v38,
          a4,
          nullptr);
      else
        hkpShapeDisplayBuilder::buildShapeDisplay(
          a1,
          *(uint32_t *)(*(uint32_t *)(a2 + 32) + v6 + 48),
          (hkTransformf::Self *)v38,
          a4,
          &v37);
      result = ++v30;
    }
    while ( *(uint32_t *)(a2 + 36) > v30 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::getProcessTag  (binary VA: 0x183dd20)
// Original: hkpShapeDisplayViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::getProcessTag(hkpShapeDisplayViewer::Self *self)
{
  return *((uint32_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::entityShapeSetCallback  (binary VA: 0x183df50)
// Original: hkpShapeDisplayViewer::entityShapeSetCallback
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::entityShapeSetCallback(hkpShapeDisplayViewer::Self *self, hkpEntity::Self *a2)
{
  G4_VCALL<void>(self, 60, a2);
  return G4_VCALL<int>(self, 56, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::synchronizeTransforms  (binary VA: 0x183df90)
// Original: hkpShapeDisplayViewer::synchronizeTransforms
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::synchronizeTransforms(hkpShapeDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  return G4_VCALL<int>(self, 48, *((uint32_t *)self + 6), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::isTriggerVolume  (binary VA: 0x183dfc0)
// Original: hkpShapeDisplayViewer::isTriggerVolume
// ----------------------------------------------------------------------------
hkpShapeDisplayViewer::Self * hkpShapeDisplayViewer::isTriggerVolume(hkpShapeDisplayViewer::Self *self, hkpEntity::Self *a2)
{
  hkpShapeDisplayViewer::Self *result;
  int v3;
  uint32_t *v4;
  int v5;

  result = self;
  v3 = *((uint32_t *)a2 + 32);
  if ( v3 <= 0 )
  {
LABEL_6:
    *(uint8_t *)self = 0;
    return result;
  }
  v4 = *((uint32_t **)a2 + 31);
  if ( *v4 != 4880 )
  {
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( v4[4 * v5] == 4880 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  *(uint8_t *)self = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::isShape  (binary VA: 0x183e020)
// Original: hkpShapeDisplayViewer::isShape
// ----------------------------------------------------------------------------
hkpShapeDisplayViewer::Self * hkpShapeDisplayViewer::isShape(hkpShapeDisplayViewer::Self *self, hkpEntity::Self *a2)
{
  hkpShapeDisplayViewer::Self *result;
  int v3;
  uint32_t *v4;
  int v5;

  result = self;
  v3 = *((uint32_t *)a2 + 32);
  if ( v3 <= 0 )
  {
LABEL_6:
    *(uint8_t *)self = 1;
    return result;
  }
  v4 = *((uint32_t **)a2 + 31);
  if ( *v4 != 4880 )
  {
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( v4[4 * v5] == 4880 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  *(uint8_t *)self = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::postSimulationCallback  (binary VA: 0x183e080)
// Original: hkpShapeDisplayViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::postSimulationCallback(hkpShapeDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  uint64_t v2; // rax
  int v3;
  uint32_t *v4;

  LODWORD(v2) = (uint32_t)(uintptr_t)(_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance));
  v3 = *(uint32_t *)v2;
  v4 = *(uint32_t **)(*(uint32_t *)v2 + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*(uint32_t *)v2 + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TthkpShapeDisplayViewer");
    v2 = __rdtsc();
    v4[1] = v2;
    v4 += 3;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4);
  }
  if ( *((uint8_t *)self + 104) != 0 )
  {
    LODWORD(v2) = G4_VCALL<int>(self, 48, *((uint32_t *)self + 6), a2);
    v4 = *(uint32_t **)(v3 + 4);
    if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(v3 + 12) )
      goto LABEL_5;
  }
  else if ( *(uint32_t *)(v3 + 12) > (unsigned int)(uintptr_t)(v4) )
  {
LABEL_5:
    *v4 = (uint32_t)(uintptr_t)("Et");
    v2 = __rdtsc();
    v4[1] = v2;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::inactiveEntityMovedCallback  (binary VA: 0x183e130)
// Original: hkpShapeDisplayViewer::inactiveEntityMovedCallback
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::inactiveEntityMovedCallback(hkpShapeDisplayViewer::Self *self, hkpEntity::Self *a2)
{
  hkpEntity::Self *v2;
  int v3;
  uint32_t *v4;
  int v5;
  char *v6;
  int v7;
  uint32_t *v9;
  int v10;
  typedef int (*_g4_t_v11)(uint8_t *, uint32_t, char *, char *, int);
  typedef uint8_t _g4_t_v12[12];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v2 = a2;
  v3 = *((uint32_t *)a2 + 32);
  if ( v3 <= 0 )
  {
LABEL_7:
    v6 = (char *)v2 + 16;
  }
  else
  {
    v4 = *((uint32_t **)a2 + 31);
    if ( *v4 == 4404 )
    {
LABEL_13:
      v6 = (char *)v4[2];
    }
    else
    {
      v5 = 0;
      do
      {
        if ( ++v5 == v3 )
        {
          v2 = a2;
          goto LABEL_7;
        }
      }
      while ( v4[4 * v5] != 4404 );
      v9 = v4 + 4;
      v10 = 0;
      while ( ++v10 != v3 )
      {
        v4 = v9;
        v9 += 4;
        if ( *(v9 - 4) == 4404 )
          goto LABEL_13;
      }
      v6 = nullptr;
    }
  }
  v11 = *(int (**)(uint8_t *, uint32_t, char *, char *, int))(**((uint32_t **)self + 6) + 36);
  v7 = G4_VCALL<int>(self, 40);
  return v11(v12, *((uint32_t *)self + 6), (char *)a2 + 240, v6, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::synchronizeTransforms  (binary VA: 0x183e200)
// Original: hkpShapeDisplayViewer::synchronizeTransforms
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::synchronizeTransforms(hkpShapeDisplayViewer::Self *self, hkDebugDisplayHandler::Self *a2, hkpWorld::Self *a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v14;
  int v15;
  int savedregs;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef hkpWorld::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef hkpShapeDisplayViewer::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_CurrentTime;
  typedef float _g4_t_v28;
  typedef hkDebugDisplayHandler::Self *_g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef hkTransformf::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t _g4_t_v38[22];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v22)) > _g4_s6 ? (32u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v23)) > _g4_s7 ? (36u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v24)) > _g4_s8 ? (36u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v25)) > _g4_s9 ? (40u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v26)) > _g4_s10 ? (40u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_CurrentTime)) > _g4_s11 ? (44u + sizeof(_g4_t_CurrentTime)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v28)) > _g4_s12 ? (44u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v29)) > _g4_s13 ? (48u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v30)) > _g4_s14 ? (48u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v31)) > _g4_s15 ? (52u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v32)) > _g4_s16 ? (56u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v33)) > _g4_s17 ? (60u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v34)) > _g4_s18 ? (60u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v35)) > _g4_s19 ? (64u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v36)) > _g4_s20 ? (64u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v37)) > _g4_s21 ? (68u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v38)) > _g4_s22 ? (72u + sizeof(_g4_t_v38)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_CurrentTime &CurrentTime = *reinterpret_cast<_g4_t_CurrentTime *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);

  v38[18] = (uint32_t)(uintptr_t)(&self);
  v29 = a2;
  v25 = self;
  v21 = a3;
  CurrentTime = *((float *)self + 28);
  if ( CurrentTime <= 0.0 )
    CurrentTime = hkpWorld::getCurrentTime(a3);
  G4_VCALL<void>(v29, 128, v16, v17, v18, v19, v20, v21, v23, v25, COERCE_FLOAT(LODWORD(CurrentTime)), v29, v31, v32, v33, v35, v37, v38[0], v38[1], v38[2], v38[3], v38[4], v38[5], v38[6], v38[7], v38[8], v38[9], v38[10], v38[11], v38[12], v38[13], v38[14], v38[15], v38[16], v38[17]);
  v24 = 0;
  v3 = *(uint32_t *)(v22 + 44);
  if ( v3 <= 0 )
    return G4_VCALL<int>(v30, 132);
  do
  {
    v34 = *(uint32_t *)(*(uint32_t *)(v22 + 40) + 4 * v24);
    if ( *(int *)(v34 + 80) <= 0 )
      goto LABEL_14;
    v36 = 0;
    v4 = 0;
    v5 = *(uint32_t *)(*(uint32_t *)(v22 + 40) + 4 * v24);
    do
    {
      v6 = *(uint32_t **)(*(uint32_t *)(v5 + 76) + 4 * v4);
      v7 = v6[32];
      if ( v7 <= 0 )
        goto LABEL_11;
      v8 = (uint32_t *)v6[31];
      if ( *v8 != 4404 )
      {
        v9 = 0;
        while ( ++v9 != v7 )
        {
          if ( v8[4 * v9] == 4404 )
          {
            v14 = v8 + 4;
            v15 = 0;
            while ( ++v15 != v7 )
            {
              v8 = v14;
              v14 += 4;
              if ( *(v14 - 4) == 4404 )
                goto LABEL_20;
            }
            v10 = nullptr;
            goto LABEL_12;
          }
        }
LABEL_11:
        v10 = v6 + 4;
        goto LABEL_12;
      }
LABEL_20:
      v10 = (uint32_t *)v8[2];
LABEL_12:
      hkpMotion::approxTransformAt((hkpMotion::Self *)(v6 + 56), v28, (hkTransformf::Self *)v38);
      v11 = *v30;
      v12 = *(uint32_t *)(v26 + 52);
      v38[20] = (uint32_t)(uintptr_t)(v38);
      savedregs = v12;
      v38[21] = (uint32_t)(uintptr_t)(v10);
      v38[19] = (uint32_t)(uintptr_t)(v30);
      (*(void (**)(int *))(v11 + 36))(&v37);
      v5 = v34;
      v4 = ++v36;
    }
    while ( *(uint32_t *)(v34 + 80) > v36 );
    v3 = *(uint32_t *)(v22 + 44);
LABEL_14:
    ++v24;
  }
  while ( v24 < v3 );
  return G4_VCALL<int>(v30, 132);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::registerViewer  (binary VA: 0x183e3c0)
// Original: hkpShapeDisplayViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::registerViewer()
{
  int result;

  hkpShapeDisplayViewer::s_tagShapeViewer = hkProcessFactory::registerProcess(
                                              hkSingleton<hkProcessFactory::Self>::s_instance,
                                              "Shapes",
                                              hkpShapeDisplayViewer::createShapeViewer);
  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Trigger Volumes",
             hkpShapeDisplayViewer::createTriggerVolumeViewer);
  hkpShapeDisplayViewer::s_tagTriggerVolumeViewer = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::Construct  (binary VA: 0x183e430)
// Original: hkpShapeDisplayViewer::hkpShapeDisplayViewer
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::Construct(int a1, uint32_t *a2, int a3, int a4)
{
  int address;
  int v5;
  int v6;
  int result;
  char *v8;
  typedef hkString::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[32];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  hkpWorldViewerBase::Construct(a1, a2);
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A34E8);
  *(uint32_t *)(a1 + 64) = 0x80000000;
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20A353C);
  *(uint32_t *)(a1 + 32) = ((uint32_t)(uintptr_t)&off_20A3568);
  *(uint32_t *)(a1 + 40) = ((uint32_t)(uintptr_t)&off_20A3580);
  *(uint32_t *)(a1 + 44) = ((uint32_t)(uintptr_t)&off_20A35A4);
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 76) = -1;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = -1;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = -1;
  hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Construct((hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v11);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v9 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     16);
  v5 = 0;
  hkpShapeDisplayBuilder::Construct(
    (hkpShapeDisplayBuilder::Self *)(v9),
    (const hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v11);
  *(uint8_t *)(a1 + 104) = 1;
  *(uint32_t *)(a1 + 124) = (uint32_t)(uintptr_t)(v9);
  *(uint32_t *)(a1 + 52) = a3;
  *(uint32_t *)(a1 + 48) = a4;
  *(uint8_t *)(a1 + 105) = 0;
  *(uint8_t *)(a1 + 106) = 0;
  *(uint8_t *)(a1 + 107) = 1;
  *(uint8_t *)(a1 + 108) = 1;
  *(uint8_t *)(a1 + 109) = 1;
  *(uint8_t *)(a1 + 110) = 0;
  v6 = HK_SHAPE_DISPLAY_VIEWER_DEFAULT_FIXED_OBJECT_COLOR;
  *(uint32_t *)(a1 + 112) = -1082130432;
  *(uint32_t *)(a1 + 116) = v6;
  *(uint32_t *)(a1 + 120) = HK_SHAPE_DISPLAY_VIEWER_DEFAULT_OBJECT_COLOR;
  result = a2[1];
  v10 = result;
  if ( result > 0 )
  {
    while ( 1 )
    {
      v8 = (char *)(*(int (**)(uint32_t))(**(uint32_t **)(*a2 + 4 * v5) + 8))(*(uint32_t *)(*a2 + 4 * v5));
      result = hkString::strCmp((hkString::Self *)"ShapeDisplayViewerOptions", v8);
      if ( result == 0 )
        break;
      if ( ++v5 == v10 )
        return result;
    }
    if ( *(uint32_t *)(*a2 + 4 * v5) != 0 )
      result = *(uint32_t *)(*a2 + 4 * v5) - 8;
    result = *(uint8_t *)(result + 88);
    *(uint8_t *)(a1 + 104) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::createShapeViewer  (binary VA: 0x183e5f0)
// Original: hkpShapeDisplayViewer::createShapeViewer
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::createShapeViewer(uint32_t *a1)
{
  int address;
  int v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         128);
  hkpShapeDisplayViewer::Construct(
    v2,
    a1,
    hkpShapeDisplayViewer::s_tagShapeViewer,
    (int)(uintptr_t)(hkpShapeDisplayViewer::isShape));
  if ( v2 != 0 )
    return v2 + 8;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::createTriggerVolumeViewer  (binary VA: 0x183e670)
// Original: hkpShapeDisplayViewer::createTriggerVolumeViewer
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::createTriggerVolumeViewer(uint32_t *a1)
{
  int address;
  int v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         128);
  hkpShapeDisplayViewer::Construct(
    v2,
    a1,
    hkpShapeDisplayViewer::s_tagTriggerVolumeViewer,
    (int)(uintptr_t)(hkpShapeDisplayViewer::isTriggerVolume));
  if ( v2 != 0 )
    return v2 + 8;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::addWorld  (binary VA: 0x183e6f0)
// Original: hkpShapeDisplayViewer::addWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpShapeDisplayViewer::addWorld(hkpShapeDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  int address;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  hkpWorld::Self *result;
  int v12;
  int v13;
  hkpWorldPostSimulationListener::Self *v14;
  hkpWorldPostSimulationListener::Self *v15;
  hkpWorldPostSimulationListener::Self *v16;
  int v17;
  int v18;
  uint32_t *v19;

  hkpWorld::addEntityListener(a2, (int)(uintptr_t)(self) + 40);
  hkpWorld::addWorldPostSimulationListener(a2, (hkpShapeDisplayViewer::Self *)((char *)self + 44));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   16);
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0x80000000;
  *v3 = (uint32_t)(uintptr_t)(a2);
  v4 = *((uint32_t *)self + 15);
  if ( v4 == (*((uint32_t *)self + 16) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpShapeDisplayViewer::Self *)((char *)self + 56),
      4,
      (int)(uintptr_t)(v3));
    v4 = *((uint32_t *)self + 15);
    v3 = v19;
  }
  v17 = 0;
  *(uint32_t *)(*((uint32_t *)self + 14) + 4 * v4) = (uint32_t)(uintptr_t)(v3);
  ++*((uint32_t *)self + 15);
  v5 = *((uint32_t *)a2 + 11);
  if ( v5 > 0 )
  {
    do
    {
      v6 = *(uint32_t *)(*((uint32_t *)a2 + 10) + 4 * v17);
      if ( *(int *)(v6 + 80) > 0 )
      {
        v7 = 0;
        do
        {
          v14 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v6 + 76) + 4 * v7++);
          G4_VCALL<void>(self, 56, v14);
        }
        while ( *(uint32_t *)(v6 + 80) > v7 );
        v5 = *((uint32_t *)a2 + 11);
      }
      ++v17;
    }
    while ( v17 < v5 );
  }
  v18 = 0;
  v8 = *((uint32_t *)a2 + 14);
  if ( v8 > 0 )
  {
    do
    {
      v9 = *(uint32_t *)(*((uint32_t *)a2 + 13) + 4 * v18);
      if ( *(int *)(v9 + 80) > 0 )
      {
        v10 = 0;
        do
        {
          v15 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v9 + 76) + 4 * v10++);
          G4_VCALL<void>(self, 56, v15);
        }
        while ( *(uint32_t *)(v9 + 80) > v10 );
        v8 = *((uint32_t *)a2 + 14);
      }
      ++v18;
    }
    while ( v18 < v8 );
  }
  result = a2;
  v12 = *((uint32_t *)a2 + 8);
  if ( v12 != 0 )
  {
    result = *(hkpWorld::Self **)(v12 + 80);
    if ( (int)(uintptr_t)(result) > 0 )
    {
      v13 = 0;
      do
      {
        v16 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v12 + 76) + 4 * v13++);
        result = (hkpWorld::Self *)G4_VCALL<int>(self, 56, v16);
      }
      while ( *(uint32_t *)(v12 + 80) > v13 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::init  (binary VA: 0x183e8b0)
// Original: hkpShapeDisplayViewer::init
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::init(hkpShapeDisplayViewer::Self *self)
{
  int result;
  int v2;
  hkpWorld::Self *v3;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v2++);
      hkpShapeDisplayViewer::addWorld(self, v3);
      result = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::worldAddedCallback  (binary VA: 0x183e920)
// Original: hkpShapeDisplayViewer::worldAddedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpShapeDisplayViewer::worldAddedCallback(hkpShapeDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpShapeDisplayViewer::addWorld(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::setInstancingEnabled  (binary VA: 0x183e960)
// Original: hkpShapeDisplayViewer::setInstancingEnabled
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::setInstancingEnabled(hkpShapeDisplayViewer::Self *self, int a2)
{
  *((uint8_t *)self + 105) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::setAutoColorMode  (binary VA: 0x183e970)
// Original: hkpShapeDisplayViewer::setAutoColorMode
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::setAutoColorMode(hkpShapeDisplayViewer::Self *self, int a2)
{
  *((uint8_t *)self + 109) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::setDisplayBodyCachingEnabled  (binary VA: 0x183e980)
// Original: hkpShapeDisplayViewer::setDisplayBodyCachingEnabled
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::setDisplayBodyCachingEnabled(hkpShapeDisplayViewer::Self *self, int a2)
{
  *((uint8_t *)self + 106) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::setDisplayBodyCreateEnabled  (binary VA: 0x183e990)
// Original: hkpShapeDisplayViewer::setDisplayBodyCreateEnabled
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::setDisplayBodyCreateEnabled(hkpShapeDisplayViewer::Self *self, int a2)
{
  *((uint8_t *)self + 107) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::setAutoGeometryCreation  (binary VA: 0x183e9a0)
// Original: hkpShapeDisplayViewer::setAutoGeometryCreation
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::setAutoGeometryCreation(hkpShapeDisplayViewer::Self *self, int a2)
{
  *((uint8_t *)self + 108) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::clearCache  (binary VA: 0x183e9b0)
// Original: hkpShapeDisplayViewer::clearCache
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::clearCache(hkpShapeDisplayViewer::Self *self)
{
  return hkMapBase_unsigned_long_unsigned_l_393416::clear((hkpShapeDisplayViewer::Self *)((char *)self + 92));
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::removeAllGeometries  (binary VA: 0x183e9e0)
// Original: hkpShapeDisplayViewer::removeAllGeometries
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::removeAllGeometries(hkpShapeDisplayViewer::Self *self, int a2)
{
  int v2;
  int result;
  int v4;
  hkpShapeDisplayViewer::Self *v5;
  typedef hkpShapeDisplayViewer::Self *_g4_t_v6;
  typedef uint8_t _g4_t_v7[12];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v2 = 0;
  result = *(uint32_t *)(*((uint32_t *)self + 14) + 4 * a2);
  if ( *(int *)(result + 8) > 0 )
  {
    v4 = *(uint32_t *)(*((uint32_t *)self + 14) + 4 * a2);
    v5 = self;
    do
    {
      v6 = v5;
      ++v2;
      (*(void (**)(uint8_t *))(**((uint32_t **)v5 + 6) + 60))(v7);
      v5 = v6;
    }
    while ( *(uint32_t *)(v4 + 8) > v2 );
    result = v4;
  }
  *(uint32_t *)(result + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::findWorld  (binary VA: 0x183ea70)
// Original: hkpShapeDisplayViewer::findWorld
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::findWorld(hkpShapeDisplayViewer::Self *self, const hkpWorld::Self *a2)
{
  int v2;
  const hkpWorld::Self ***v3;
  int result;

  v2 = *((uint32_t *)self + 15);
  if ( v2 <= 0 )
    return -1;
  v3 = *((const hkpWorld::Self ****)self + 14);
  result = 0;
  if ( **v3 != a2 )
  {
    while ( ++result != v2 )
    {
      if ( *v3[result] == a2 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::entityRemovedCallback  (binary VA: 0x183eab0)
// Original: hkpShapeDisplayViewer::entityRemovedCallback
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::entityRemovedCallback(hkpShapeDisplayViewer::Self *self, hkpEntity::Self *a2)
{
  char v2;
  hkpEntity::Self *v3;
  int result;
  int v5;
  uint32_t *v6;
  int v7;
  char *v8;
  unsigned int v9;
  int v10;
  char **v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef hkpShapeDisplayViewer::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21[4];
  typedef uint32_t _g4_t_v22[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);

  v2 = 0;
  v22[6] = (uint32_t)(uintptr_t)(&self);
  v3 = a2;
  v19 = self;
  if ( *((uint32_t *)self + 5) == 0 )
    v2 = *((uint32_t *)self + 4) == 0;
  v20 = sub_183DD40((int)(uintptr_t)(a2), v2, v22);
  result = hkpShapeDisplayViewer::findWorld(v19, *((const hkpWorld::Self **)v3 + 2));
  if ( result < 0 )
    return result;
  v18 = *(uint32_t *)(*((uint32_t *)v19 + 14) + 4 * result);
  if ( v20 == 0 )
    v20 = *((uint32_t *)v3 + 4);
  v5 = *((uint32_t *)v3 + 32);
  if ( v5 > 0 )
  {
    v6 = *((uint32_t **)v3 + 31);
    if ( *v6 == 4404 )
    {
      v16 = *((uint32_t **)v3 + 31);
LABEL_31:
      v8 = (char *)v16[2];
      goto LABEL_12;
    }
    v7 = 0;
    while ( ++v7 != v5 )
    {
      if ( v6[4 * v7] == 4404 )
      {
        v14 = v6 + 4;
        v15 = 0;
        while ( ++v15 != v5 )
        {
          v16 = v14;
          v14 += 4;
          if ( *(v14 - 4) == 4404 )
            goto LABEL_31;
        }
        v8 = nullptr;
        goto LABEL_12;
      }
    }
  }
  v8 = (char *)v3 + 16;
LABEL_12:
  (*(void (**)(char *))(**((uint32_t **)v19 + 6) + 60))(v21);
  if ( *((uint8_t *)v19 + 105) != 0 && v20 != 0 )
  {
    v17 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((hkpShapeDisplayViewer::Self *)((char *)v19 + 80));
    v9 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
           (hkpShapeDisplayViewer::Self *)((char *)v19 + 80),
           v20,
           0)
       - 1;
    if ( v9 != 0 )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        v17,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v20,
        v9);
    }
    else
    {
      hkMapBase_unsigned_long_unsigned_l_393416::remove(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v21,
        (hkpShapeDisplayViewer::Self *)((char *)v19 + 68),
        v20);
      hkMapBase_unsigned_long_unsigned_l_393416::remove(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v21,
        v17,
        v20);
    }
  }
  result = v18;
  v10 = *(uint32_t *)(v18 + 8);
  if ( v10 > 0 )
  {
    v11 = *(char ***)(v18 + 4);
    if ( *v11 == v8 )
    {
      v12 = 0;
      result = 0;
LABEL_23:
      v13 = v10 - 1;
      *(uint32_t *)(v18 + 8) = v13;
      if ( result != v13 )
      {
        result = (int)(uintptr_t)(v11[v13]);
        v11[v12] = (char *)result;
      }
    }
    else
    {
      result = 0;
      while ( ++result != v10 )
      {
        v12 = result;
        if ( v11[result] == v8 )
          goto LABEL_23;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::entityAddedCallback  (binary VA: 0x183ed00)
// Original: hkpShapeDisplayViewer::entityAddedCallback
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::entityAddedCallback(hkpShapeDisplayViewer::Self *self, hkpEntity::Self *a2, unsigned int a3, uint64_t *a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint64_t v9; // rax
  char v10;
  uint32_t *v11;
  hkpShapeDisplayViewer::Self *v12;
  char v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  int v22;
  hkGeometry::Self *v23;
  unsigned int v24;
  int v25;
  int *v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  uint64_t *v32;
  int v33;
  int32_t v34; // kr00_4
  int32_t v35;
  int32_t v36; // ett
  int v37;
  uint32_t *v38;
  uint32_t *v39;
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  uint32_t *v44;
  uint32_t *v45;
  int v46;
  uint32_t *v47;
  hkpEntity::Self *v48;
  hkpShapeDisplayViewer::Self *v49;
  unsigned int v50;
  hkpShapeDisplayViewer::Self *v51;
  int v52;
  int *v53;
  int v54;
  uint64_t *v55;
  unsigned int v56;
  int v57;
  int v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  int v62;
  uint32_t *v63;
  int v64;
  int v65;
  int v66;
  uint32_t *v67;
  int v68;
  uint32_t *v69;
  int v70;
  uint64_t v71; // kr08_8
  int v72;
  int v73;
  int32_t v74; // kr04_4
  int32_t v75;
  int32_t v76; // ett
  uint32_t *v77;
  int v78;
  int v79;
  int v80;
  int v81;
  unsigned int v82;
  uint64_t *savedregs;
  uint64_t *retaddr;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef hkGeometry::Self *_g4_t_v95;
  typedef hkGeometry::Self *_g4_t_v96;
  typedef bool _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef bool _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef bool _g4_t_v103;
  typedef int _g4_t_v104;
  typedef unsigned int _g4_t_v105;
  typedef hkDisplayConvex::Self *_g4_t_v106;
  typedef hkDisplayConvex::Self *_g4_t_v107;
  typedef hkDisplayConvex::Self *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef bool _g4_t_v110;
  typedef int _g4_t_v111;
  typedef uint32_t *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef bool _g4_t_v114;
  typedef char _g4_t_v115;
  typedef int _g4_t_v116;
  typedef hkGeometry::Self *_g4_t_v117;
  typedef uint64_t _g4_t_v118;
  typedef uint64_t _g4_t_v119;
  typedef uint64_t _g4_t_v120;
  typedef uint64_t _g4_t_v121;
  typedef uint64_t _g4_t_v122;
  typedef int _g4_t_v123;
  typedef unsigned int _g4_t_v124;
  typedef hkpShapeDisplayViewer::Self *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef uint32_t *_g4_t_v127;
  typedef int (*_g4_t_v128)(int *, uint32_t, int, uint64_t *);
  typedef unsigned int _g4_t_v129;
  typedef int (*_g4_t_v130)(int *, int, unsigned int, unsigned int);
  typedef unsigned int _g4_t_v131;
  typedef unsigned int _g4_t_v132;
  typedef uint64_t *_g4_t_v133;
  typedef hkpEntity::Self *_g4_t_v134;
  typedef unsigned int _g4_t_v135;
  typedef unsigned int _g4_t_v136;
  typedef hkpShapeDisplayViewer::Self *_g4_t_v137;
  typedef hkpShapeDisplayViewer::Self *_g4_t_v138;
  typedef hkpShapeDisplayViewer::Self *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef uint32_t _g4_t_v141[3];
  typedef int _g4_t_v142;
  typedef char _g4_t_v143[16];
  typedef uint64_t _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef void (**_g4_t_v147)(hkCrc64StreamWriter::Self *);
  typedef int _g4_t_v148;
  typedef int64_t _g4_t_v149;
  typedef char _g4_t_v150;
  typedef hkpShapeDisplayViewer::Self **_g4_t_v151;
  typedef uint32_t *_g4_t_v152;
  typedef void (***_g4_t_v153)(hkCrc64StreamWriter::Self *);
  typedef void (***_g4_t_v154)(hkCrc64StreamWriter::Self *);
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v84)) > _g4_s0 ? (8u + sizeof(_g4_t_v84)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v85)) > _g4_s1 ? (12u + sizeof(_g4_t_v85)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v86)) > _g4_s2 ? (16u + sizeof(_g4_t_v86)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v87)) > _g4_s3 ? (20u + sizeof(_g4_t_v87)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v88)) > _g4_s4 ? (24u + sizeof(_g4_t_v88)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v89)) > _g4_s5 ? (28u + sizeof(_g4_t_v89)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v90)) > _g4_s6 ? (32u + sizeof(_g4_t_v90)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v91)) > _g4_s7 ? (36u + sizeof(_g4_t_v91)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v92)) > _g4_s8 ? (40u + sizeof(_g4_t_v92)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v93)) > _g4_s9 ? (44u + sizeof(_g4_t_v93)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v94)) > _g4_s10 ? (48u + sizeof(_g4_t_v94)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v95)) > _g4_s11 ? (52u + sizeof(_g4_t_v95)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v96)) > _g4_s12 ? (52u + sizeof(_g4_t_v96)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v97)) > _g4_s13 ? (52u + sizeof(_g4_t_v97)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v98)) > _g4_s14 ? (56u + sizeof(_g4_t_v98)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v99)) > _g4_s15 ? (56u + sizeof(_g4_t_v99)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v100)) > _g4_s16 ? (56u + sizeof(_g4_t_v100)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v101)) > _g4_s17 ? (60u + sizeof(_g4_t_v101)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v102)) > _g4_s18 ? (64u + sizeof(_g4_t_v102)) : _g4_s18,
    _g4_s20 = (67u + sizeof(_g4_t_v103)) > _g4_s19 ? (67u + sizeof(_g4_t_v103)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v104)) > _g4_s20 ? (68u + sizeof(_g4_t_v104)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v105)) > _g4_s21 ? (68u + sizeof(_g4_t_v105)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v106)) > _g4_s22 ? (72u + sizeof(_g4_t_v106)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v107)) > _g4_s23 ? (72u + sizeof(_g4_t_v107)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v108)) > _g4_s24 ? (72u + sizeof(_g4_t_v108)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v109)) > _g4_s25 ? (76u + sizeof(_g4_t_v109)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v110)) > _g4_s26 ? (76u + sizeof(_g4_t_v110)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v111)) > _g4_s27 ? (80u + sizeof(_g4_t_v111)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v112)) > _g4_s28 ? (80u + sizeof(_g4_t_v112)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v113)) > _g4_s29 ? (80u + sizeof(_g4_t_v113)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v114)) > _g4_s30 ? (80u + sizeof(_g4_t_v114)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v115)) > _g4_s31 ? (80u + sizeof(_g4_t_v115)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v116)) > _g4_s32 ? (80u + sizeof(_g4_t_v116)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v117)) > _g4_s33 ? (80u + sizeof(_g4_t_v117)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v118)) > _g4_s34 ? (80u + sizeof(_g4_t_v118)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v119)) > _g4_s35 ? (80u + sizeof(_g4_t_v119)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v120)) > _g4_s36 ? (80u + sizeof(_g4_t_v120)) : _g4_s36,
    _g4_s38 = (80u + sizeof(_g4_t_v121)) > _g4_s37 ? (80u + sizeof(_g4_t_v121)) : _g4_s37,
    _g4_s39 = (80u + sizeof(_g4_t_v122)) > _g4_s38 ? (80u + sizeof(_g4_t_v122)) : _g4_s38,
    _g4_s40 = (84u + sizeof(_g4_t_v123)) > _g4_s39 ? (84u + sizeof(_g4_t_v123)) : _g4_s39,
    _g4_s41 = (88u + sizeof(_g4_t_v124)) > _g4_s40 ? (88u + sizeof(_g4_t_v124)) : _g4_s40,
    _g4_s42 = (88u + sizeof(_g4_t_v125)) > _g4_s41 ? (88u + sizeof(_g4_t_v125)) : _g4_s41,
    _g4_s43 = (92u + sizeof(_g4_t_v126)) > _g4_s42 ? (92u + sizeof(_g4_t_v126)) : _g4_s42,
    _g4_s44 = (92u + sizeof(_g4_t_v127)) > _g4_s43 ? (92u + sizeof(_g4_t_v127)) : _g4_s43,
    _g4_s45 = (92u + sizeof(_g4_t_v128)) > _g4_s44 ? (92u + sizeof(_g4_t_v128)) : _g4_s44,
    _g4_s46 = (92u + sizeof(_g4_t_v129)) > _g4_s45 ? (92u + sizeof(_g4_t_v129)) : _g4_s45,
    _g4_s47 = (92u + sizeof(_g4_t_v130)) > _g4_s46 ? (92u + sizeof(_g4_t_v130)) : _g4_s46,
    _g4_s48 = (96u + sizeof(_g4_t_v131)) > _g4_s47 ? (96u + sizeof(_g4_t_v131)) : _g4_s47,
    _g4_s49 = (96u + sizeof(_g4_t_v132)) > _g4_s48 ? (96u + sizeof(_g4_t_v132)) : _g4_s48,
    _g4_s50 = (96u + sizeof(_g4_t_v133)) > _g4_s49 ? (96u + sizeof(_g4_t_v133)) : _g4_s49,
    _g4_s51 = (100u + sizeof(_g4_t_v134)) > _g4_s50 ? (100u + sizeof(_g4_t_v134)) : _g4_s50,
    _g4_s52 = (100u + sizeof(_g4_t_v135)) > _g4_s51 ? (100u + sizeof(_g4_t_v135)) : _g4_s51,
    _g4_s53 = (100u + sizeof(_g4_t_v136)) > _g4_s52 ? (100u + sizeof(_g4_t_v136)) : _g4_s52,
    _g4_s54 = (104u + sizeof(_g4_t_v137)) > _g4_s53 ? (104u + sizeof(_g4_t_v137)) : _g4_s53,
    _g4_s55 = (104u + sizeof(_g4_t_v138)) > _g4_s54 ? (104u + sizeof(_g4_t_v138)) : _g4_s54,
    _g4_s56 = (104u + sizeof(_g4_t_v139)) > _g4_s55 ? (104u + sizeof(_g4_t_v139)) : _g4_s55,
    _g4_s57 = (108u + sizeof(_g4_t_v140)) > _g4_s56 ? (108u + sizeof(_g4_t_v140)) : _g4_s56,
    _g4_s58 = (112u + sizeof(_g4_t_v141)) > _g4_s57 ? (112u + sizeof(_g4_t_v141)) : _g4_s57,
    _g4_s59 = (124u + sizeof(_g4_t_v142)) > _g4_s58 ? (124u + sizeof(_g4_t_v142)) : _g4_s58,
    _g4_s60 = (128u + sizeof(_g4_t_v143)) > _g4_s59 ? (128u + sizeof(_g4_t_v143)) : _g4_s59,
    _g4_s61 = (144u + sizeof(_g4_t_v144)) > _g4_s60 ? (144u + sizeof(_g4_t_v144)) : _g4_s60,
    _g4_s62 = (152u + sizeof(_g4_t_v145)) > _g4_s61 ? (152u + sizeof(_g4_t_v145)) : _g4_s61,
    _g4_s63 = (156u + sizeof(_g4_t_v146)) > _g4_s62 ? (156u + sizeof(_g4_t_v146)) : _g4_s62,
    _g4_s64 = (160u + sizeof(_g4_t_v147)) > _g4_s63 ? (160u + sizeof(_g4_t_v147)) : _g4_s63,
    _g4_s65 = (164u + sizeof(_g4_t_v148)) > _g4_s64 ? (164u + sizeof(_g4_t_v148)) : _g4_s64,
    _g4_s66 = (168u + sizeof(_g4_t_v149)) > _g4_s65 ? (168u + sizeof(_g4_t_v149)) : _g4_s65,
    _g4_s67 = (176u + sizeof(_g4_t_v150)) > _g4_s66 ? (176u + sizeof(_g4_t_v150)) : _g4_s66,
    _g4_s68 = (200u + sizeof(_g4_t_v151)) > _g4_s67 ? (200u + sizeof(_g4_t_v151)) : _g4_s67,
    _g4_s69 = (204u + sizeof(_g4_t_v152)) > _g4_s68 ? (204u + sizeof(_g4_t_v152)) : _g4_s68,
    _g4_s70 = (208u + sizeof(_g4_t_v153)) > _g4_s69 ? (208u + sizeof(_g4_t_v153)) : _g4_s69,
    _g4_s71 = (212u + sizeof(_g4_t_v154)) > _g4_s70 ? (212u + sizeof(_g4_t_v154)) : _g4_s70
  };
  alignas(16) uint8_t _g4_sf[_g4_s71];
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 8u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 12u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 16u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 20u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 24u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 28u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 32u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 36u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 40u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 44u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 48u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 52u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 52u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 56u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 56u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 56u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 60u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 64u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 67u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 68u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 68u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 72u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 72u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 72u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 76u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 76u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 80u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 80u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 80u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 80u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 80u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 80u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 80u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 80u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 80u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 80u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 80u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 80u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 84u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 88u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 88u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 92u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 92u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 92u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 92u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 92u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 96u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 96u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 96u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 100u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 100u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 100u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 104u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 104u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 104u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 108u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 112u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 124u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 128u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 144u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 152u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 156u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 160u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 164u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 168u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 176u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 200u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 204u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 208u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 212u);

  v151 = &self;
  v137 = self;
  v134 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TthkpShapeDisplayViewer");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  LODWORD(v9) = (*((int (**)(char *, hkpEntity::Self *, int, int, int, int, int, int, int, int, int, int, int, hkGeometry::Self *, int, int, int, int, hkDisplayConvex::Self *, int, int, int, unsigned int, int, unsigned int, hkpEntity::Self *, hkpShapeDisplayViewer::Self *, int, uint32_t, uint32_t, uint32_t, int))v137
                 + 12))(
                  (char *)&v142 + 3,
                  v134,
                  v84,
                  v85,
                  v86,
                  v87,
                  v88,
                  v89,
                  v90,
                  v91,
                  v92,
                  v93,
                  v94,
                  v95,
                  v98,
                  v101,
                  v102,
                  v104,
                  v106,
                  v109,
                  v111,
                  v123,
                  v124,
                  v126,
                  v131,
                  v134,
                  v137,
                  v140,
                  v141[0],
                  v141[1],
                  v141[2],
                  v142);
  if ( HIBYTE(v142) != 0 )
  {
    v10 = 0;
    if ( *((uint32_t *)v138 + 5) == 0 )
      v10 = *((uint32_t *)v138 + 4) == 0;
    LODWORD(v9) = sub_183DD40(v135, v10, v143);
    v132 = v9;
    if ( v143[0] == 0 )
    {
      LODWORD(v9) = hkpShapeDisplayViewer::findWorld(v138, *(const hkpWorld::Self **)(v135 + 8));
      if ( (v9 & 0x80000000) == 0LL )
      {
        v127 = *(uint32_t **)(*((uint32_t *)v138 + 14) + 4 * v9);
        v125 = (hkpShapeDisplayViewer::Self *)v132;
        if ( v132 != 0 || (LODWORD(v9) = *(uint32_t *)(v135 + 16), v125 = (hkpShapeDisplayViewer::Self *)v9, (uint32_t)v9 != 0) )
        {
          v12 = v138;
          v13 = 1;
          v103 = false;
          if ( *((uint8_t *)v138 + 106) != 0 )
          {
            v56 = *((uint32_t *)v138 + 23)
                + 8
                * hkMapBase_unsigned_long_unsigned_l_393416::findOrInsertKey(
                    (hkpShapeDisplayViewer::Self *)((char *)v138 + 92),
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                    (unsigned int)(uintptr_t)(v125),
                    0);
            v57 = *(uint32_t *)(v56 + 4);
            v103 = v57 != 0;
            if ( v57 == 0 )
              *(uint32_t *)(v56 + 4) = 1;
            v12 = v138;
            v13 = !v103;
          }
          v110 = true;
          v105 = 0;
          if ( *((uint8_t *)v12 + 105) != 0
            && (v115 = v13,
                v105 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                         (hkpShapeDisplayViewer::Self *)((char *)v138 + 68),
                         (unsigned int)(uintptr_t)(v125),
                         0),
                v110 = v105 == 0,
                v13 = v115,
                v105 != 0)
            || v13 == 0
            || *((uint8_t *)v138 + 107) == 0
            || *((uint8_t *)v138 + 108) == 0 )
          {
            v107 = nullptr;
            v114 = false;
            v97 = false;
            v100 = false;
            goto LABEL_33;
          }
          v14 = *(uint32_t *)(v135 + 128);
          if ( v14 > 0 )
          {
            v112 = *(uint32_t **)(v135 + 124);
            if ( *v112 == 4406 )
            {
              v67 = *(uint32_t **)(v135 + 124);
            }
            else
            {
              v15 = 0;
              v16 = v112 + 4;
              v99 = v6;
              do
              {
                if ( ++v15 == v14 )
                {
                  v6 = v99;
                  v96 = nullptr;
                  v100 = false;
                  goto LABEL_23;
                }
                v17 = v16;
                v16 += 4;
              }
              while ( *(v16 - 4) != 4406 );
              v67 = v17;
              v6 = v99;
            }
            v96 = (hkGeometry::Self *)v67[2];
            v100 = v96 != nullptr;
LABEL_23:
            v18 = *(uint32_t **)(v135 + 124);
            if ( *v112 != 4401 )
            {
              v19 = v112 + 4;
              v20 = 0;
              v113 = v6;
              while ( ++v20 != v14 )
              {
                v21 = v19;
                v19 += 4;
                if ( *(v19 - 4) == 4401 )
                {
                  v18 = v21;
                  v6 = v113;
                  goto LABEL_110;
                }
              }
              v6 = v113;
              if ( !v100 )
                goto LABEL_92;
              v22 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
              v107 = (hkDisplayConvex::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v22 + 44) + 8))(
                                          *(uint32_t *)(*(uint32_t *)v22 + 44),
                                          96);
              goto LABEL_29;
            }
LABEL_110:
            v117 = (hkGeometry::Self *)v18[2];
            if ( v117 != nullptr )
            {
              hkpWorldObject::removeProperty((hkpWorldObject::Self *)v141, v135, 4401);
LABEL_112:
              v66 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
              v107 = (hkDisplayConvex::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v66 + 44) + 8))(
                                          *(uint32_t *)(*(uint32_t *)v66 + 44),
                                          96);
              if ( v96 == nullptr )
              {
                v23 = v117;
                goto LABEL_30;
              }
LABEL_29:
              v23 = v96;
LABEL_30:
              hkDisplayConvex::Construct(v107, v23);
              v114 = false;
              v97 = false;
LABEL_33:
              v24 = v135;
              v25 = *(uint32_t *)(v135 + 128);
              if ( v25 <= 0 )
              {
LABEL_40:
                v133 = (uint64_t *)(v24 + 16);
                goto LABEL_41;
              }
              v26 = *(int **)(v135 + 124);
              v27 = *v26;
              goto LABEL_35;
            }
            if ( v100 )
              goto LABEL_112;
          }
LABEL_92:
          if ( *((uint32_t *)v138 + 5) == 0 && *((uint32_t *)v138 + 4) == 0 )
            goto LABEL_95;
          v58 = **((uint32_t **)v138 + 6);
          v152 = *((uint32_t **)v138 + 6);
          (*(void (**)(char *))(v58 + 140))((char *)&v142 + 3);
          if ( HIBYTE(v142) == 0 )
          {
            v14 = *(uint32_t *)(v135 + 128);
LABEL_95:
            v108 = (hkDisplayConvex::Self *)v14;
            v114 = false;
            v97 = true;
            goto LABEL_96;
          }
          v148 = -65535;
          v149 = 0x541892C16F4E1957LL;
          v147 = (void (**)(hkCrc64StreamWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A32E8));
          v150 = 1;
          v68 = *(uint32_t *)(v135 + 128);
          v108 = (hkDisplayConvex::Self *)v68;
          if ( v68 > 0 )
          {
            v69 = *(uint32_t **)(v135 + 124);
            if ( *v69 == 4662 )
            {
LABEL_146:
              v79 = v69[2];
              v80 = v69[3];
LABEL_143:
              v145 = v79;
              v146 = v80;
              v118 = hkCrc64StreamWriter::g_crc64lookupTable[BYTE1(v79)
                                                           ^ LOBYTE(hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)v79 ^ 0x57])
                                                           ^ 0x19]
                   ^ ((hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)v79 ^ 0x57] ^ 0x541892C16F4E19uLL) >> 8);
              v119 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(BYTE2(v79) ^ v118)] ^ (v118 >> 8);
              v120 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(HIBYTE(v79) ^ v119)] ^ (v119 >> 8);
              v121 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v80 ^ v120)] ^ (v120 >> 8);
              v122 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(BYTE1(v80) ^ v121)] ^ (v121 >> 8);
              v81 = (uint8_t)(BYTE2(v80) ^ v122);
              v97 = false;
              v82 = LODWORD(hkCrc64StreamWriter::g_crc64lookupTable[v81]) ^ (v122 >> 8);
              v114 = true;
              v71 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(HIBYTE(v146) ^ v82)]
                  ^ (__PAIR64__(HIDWORD(hkCrc64StreamWriter::g_crc64lookupTable[v81]) ^ (HIDWORD(v122) >> 8), v82) >> 8);
              goto LABEL_128;
            }
            v70 = 0;
            while ( ++v70 != v68 )
            {
              if ( v69[4 * v70] == 4662 )
              {
                v77 = v69 + 4;
                v78 = 0;
                do
                {
                  if ( ++v78 == v68 )
                  {
                    v108 = *(hkDisplayConvex::Self **)(v135 + 128);
                    v79 = 0;
                    v80 = 0;
                    goto LABEL_143;
                  }
                  v69 = v77;
                  v77 += 4;
                }
                while ( *(v77 - 4) != 4662 );
                v108 = *(hkDisplayConvex::Self **)(v135 + 128);
                goto LABEL_146;
              }
            }
          }
          hkpShapeHashUtil::writeShape(&v147, v125, 0);
          v114 = v150 != 0;
          v97 = v150 == 0;
          v108 = *(hkDisplayConvex::Self **)(v135 + 128);
          v71 = v149;
LABEL_128:
          v144 = ~v71;
LABEL_96:
          if ( (int)(uintptr_t)(v108) <= 0 )
          {
            v107 = nullptr;
            v100 = false;
LABEL_39:
            v24 = v135;
            goto LABEL_40;
          }
          v26 = *(int **)(v135 + 124);
          if ( *v26 == 4405 )
          {
            v60 = *(uint32_t **)(v135 + 124);
LABEL_129:
            v72 = v60[2];
            if ( v132 == v72 && v72 != 0 )
            {
              if ( *(uint16_t *)(v72 + 6) != 0 )
              {
                do
                {
                  v74 = *(uint32_t *)(v72 + 4);
                  HIWORD(v73) = HIWORD(v74);
                  LOWORD(v73) = 0;
                  v75 = v73 | (uint16_t)(v74 - 1);
                  v76 = v74;
                }
                while ( v76 != __sync_val_compare_and_swap((volatile int32_t *)(v72 + 4), v76, v75) );
                if ( (uint16_t)v75 == 0 )
                  G4_VCALL<void>(v72, 16);
              }
              hkpWorldObject::removeProperty((hkpWorldObject::Self *)v141, v135, 4405);
              v107 = nullptr;
              v100 = false;
              goto LABEL_33;
            }
            v25 = (int)(uintptr_t)(v108);
            v27 = *v26;
            v107 = nullptr;
            v100 = false;
          }
          else
          {
            v59 = (uint32_t *)(v26 + 4);
            v25 = 0;
            while ( (hkDisplayConvex::Self *)++v25 != v108 )
            {
              v60 = v59;
              v59 += 4;
              if ( *(v59 - 4) == 4405 )
                goto LABEL_129;
            }
            v27 = *v26;
            v107 = nullptr;
            v100 = false;
          }
LABEL_35:
          if ( v27 == 4404 )
          {
LABEL_106:
            v55 = (uint64_t *)v26[2];
LABEL_84:
            v133 = v55;
LABEL_41:
            v29 = v127[2];
            if ( v29 == (v127[3] & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)(v127 + 1),
                4,
                (int)(uintptr_t)(v154));
              v29 = v127[2];
            }
            *(uint32_t *)(v127[1] + 4 * v29) = (uint32_t)(uintptr_t)(v133);
            ++v127[2];
            if ( v110 )
            {
              if ( v107 != nullptr )
              {
                v147 = (void (**)(hkCrc64StreamWriter::Self *))&v149 + 1;
                HIDWORD(v149) = (uint32_t)(uintptr_t)(v107);
                LODWORD(v149) = -2147483647;
                v148 = 1;
                v30 = *((uint32_t **)v138 + 6);
                v31 = *v30;
                self = v125;
                a2 = nullptr;
                v32 = *((uint64_t **)v138 + 13);
                savedregs = v133;
                retaddr = v32;
                v152 = v30;
                v154 = (void (***)(hkCrc64StreamWriter::Self *))(v135 + 240);
                v153 = &v147;
                (*(void (**)(int *))(v31 + 12))(&v140);
                if ( v100 )
                  *((uint32_t *)v107 + 2) = 0;
                if ( *((uint16_t *)v107 + 3) != 0 )
                {
                  do
                  {
                    v34 = *((uint32_t *)v107 + 1);
                    HIWORD(v33) = HIWORD(v34);
                    LOWORD(v33) = 0;
                    v35 = v33 | (uint16_t)(v34 - 1);
                    v36 = v34;
                  }
                  while ( v36 != __sync_val_compare_and_swap((volatile int32_t *)v107 + 1, v36, v35) );
                  if ( (uint16_t)v35 == 0 )
                    G4_VCALL<void>(v107, 16);
                }
                v148 = 0;
                if ( (int)v149 >= 0 )
                  (*(void (**)(uint32_t *, void (**)(hkCrc64StreamWriter::Self *), uint32_t))(hkContainerHeapAllocator::s_alloc + 20))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    v147,
                    4 * v149);
LABEL_53:
                if ( *((uint8_t *)v138 + 105) != 0 )
                {
                  hkMapBase_unsigned_long_unsigned_l_393416::insert(
                    (hkpShapeDisplayViewer::Self *)((char *)v138 + 68),
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                    (unsigned int)(uintptr_t)(v125),
                    (unsigned int)(uintptr_t)(v133));
                  hkMapBase_unsigned_long_unsigned_l_393416::insert(
                    (hkpShapeDisplayViewer::Self *)((char *)v138 + 80),
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                    (unsigned int)(uintptr_t)(v125),
                    1u);
                }
                v37 = *(uint32_t *)(v135 + 128);
                if ( v37 > 0 )
                {
                  v38 = *(uint32_t **)(v135 + 124);
                  if ( *v38 == 4400 )
                  {
                    v41 = *(uint32_t **)(v135 + 124);
LABEL_108:
                    v42 = v41[2];
                    goto LABEL_61;
                  }
                  v39 = v38 + 4;
                  v40 = 0;
                  while ( ++v40 != v37 )
                  {
                    v41 = v39;
                    v39 += 4;
                    if ( *(v39 - 4) == 4400 )
                      goto LABEL_108;
                  }
                }
                v42 = 0;
LABEL_61:
                LODWORD(v9) = (uint32_t)(uintptr_t)(v138);
                if ( *((uint8_t *)v138 + 109) != 0 )
                {
                  if ( *((uint8_t *)v138 + 110) == 0 && v42 != 0 )
                    goto LABEL_64;
                  LODWORD(v9) = (uint32_t)(uintptr_t)(v138);
                  if ( *(uint8_t *)(v135 + 232) == 5 )
                    v42 = *((uint32_t *)v138 + 29);
                  else
                    v42 = *((uint32_t *)v138 + 30);
                }
                if ( v42 != 0 )
                {
LABEL_64:
                  v128 = *(int (**)(int *, uint32_t, int, uint64_t *))(**((uint32_t **)v138 + 6) + 28);
                  retaddr = (uint64_t *)G4_VCALL<int>(v138, 40);
                  LODWORD(v9) = v128(&v140, *((uint32_t *)v138 + 6), v42, v133);
                }
LABEL_65:
                if ( !v114 )
                  goto LABEL_7;
                v129 = v135 + 240;
                v116 = *(uint32_t *)v125;
                v154 = &v147;
                v153 = nullptr;
                v152 = (uint32_t *)(v135 + 240);
                (*(void (**)(hkpShapeDisplayViewer::Self *))(v116 + 24))(v125);
                v43 = *(uint32_t *)(v135 + 128);
                if ( v43 > 0 )
                {
                  v44 = *(uint32_t **)(v135 + 124);
                  if ( *v44 == 4400 )
                  {
                    v47 = *(uint32_t **)(v135 + 124);
LABEL_120:
                    v48 = (hkpEntity::Self *)v47[2];
                    goto LABEL_72;
                  }
                  v45 = v44 + 4;
                  v46 = 0;
                  while ( ++v46 != v43 )
                  {
                    v47 = v45;
                    v45 += 4;
                    if ( *(v45 - 4) == 4400 )
                      goto LABEL_120;
                  }
                }
                v48 = nullptr;
LABEL_72:
                v49 = v138;
                if ( *((uint8_t *)v138 + 109) != 0 )
                {
                  if ( *((uint8_t *)v138 + 110) != 0 || v48 == nullptr )
                  {
                    v49 = v138;
                    if ( *(uint8_t *)(v135 + 232) == 5 )
                      v48 = *((hkpEntity::Self **)v138 + 29);
                    else
                      v48 = *((hkpEntity::Self **)v138 + 30);
                  }
                  else
                  {
                    v49 = v138;
                  }
                }
                v139 = *((hkpShapeDisplayViewer::Self **)v49 + 6);
                v136 = *(uint32_t *)v139;
                a5 = *((uint32_t *)v49 + 13);
                a4 = v133;
                a3 = v129;
                a2 = v48;
                self = (hkpShapeDisplayViewer::Self *)&v147;
                retaddr = &v144;
                LODWORD(v9) = (*(int (**)(int *, hkpShapeDisplayViewer::Self *, hkpShapeDisplayViewer::Self *, uint32_t))(v136 + 144))(
                                &v140,
                                v139,
                                v125,
                                *((uint32_t *)v49 + 31));
                goto LABEL_7;
              }
              if ( v103 )
              {
                v147 = nullptr;
                v148 = 0;
                LODWORD(v149) = 0x80000000;
                v61 = *((uint32_t **)v138 + 6);
                v62 = *v61;
                a2 = nullptr;
                self = v125;
                retaddr = *((uint64_t **)v138 + 13);
                savedregs = v133;
                v152 = v61;
                v154 = (void (***)(hkCrc64StreamWriter::Self *))(v135 + 240);
                v153 = &v147;
                v151 = (hkpShapeDisplayViewer::Self **)(*(int (**)(int *))(v62 + 12))(&v140);
                goto LABEL_53;
              }
              if ( v97 )
              {
                v63 = *((uint32_t **)v138 + 6);
                v64 = *v63;
                a2 = (hkpEntity::Self *)(v125);
                self = *((hkpShapeDisplayViewer::Self **)v138 + 13);
                retaddr = v133;
                savedregs = (uint64_t *)(v135 + 240);
                v65 = *((uint32_t *)v138 + 31);
                v153 = (void (***)(hkCrc64StreamWriter::Self *))v125;
                v154 = (void (***)(hkCrc64StreamWriter::Self *))v65;
                v152 = v63;
                (*(void (**)(int *))(v64 + 136))(&v140);
                v151 = (hkpShapeDisplayViewer::Self **)v64;
                goto LABEL_53;
              }
              if ( *((uint8_t *)v138 + 108) == 0 )
                goto LABEL_53;
            }
            LODWORD(v9) = v105;
            if ( v105 != 0 )
            {
              v50 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                      (hkpShapeDisplayViewer::Self *)((char *)v138 + 80),
                      (unsigned int)(uintptr_t)(v125),
                      1u);
              hkMapBase_unsigned_long_unsigned_l_393416::insert(
                (hkpShapeDisplayViewer::Self *)((char *)v138 + 80),
                (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                (unsigned int)(uintptr_t)(v125),
                v50 + 1);
              v130 = *(int (**)(int *, int, unsigned int, unsigned int))(**((uint32_t **)v138 + 6) + 16);
              v51 = (hkpShapeDisplayViewer::Self *)G4_VCALL<int>(v138, 40);
              v52 = *((uint32_t *)v138 + 6);
              self = v51;
              retaddr = v133;
              a2 = (hkpEntity::Self *)(v125);
              LODWORD(v9) = v130(&v140, v52, v105, v135 + 240);
            }
            goto LABEL_65;
          }
          v28 = 0;
          while ( ++v28 < v25 )
          {
            if ( v26[4 * v28] == 4404 )
            {
              v53 = v26 + 4;
              v54 = 0;
              while ( ++v54 < v25 )
              {
                v26 = v53;
                v53 += 4;
                if ( *(v53 - 4) == 4404 )
                  goto LABEL_106;
              }
              v55 = nullptr;
              goto LABEL_84;
            }
          }
          goto LABEL_39;
        }
      }
    }
  }
LABEL_7:
  v11 = *(uint32_t **)(v6 + 4);
  if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(v6 + 12) )
  {
    *v11 = (uint32_t)(uintptr_t)("Et");
    v9 = __rdtsc();
    v11[1] = v9;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::removeWorld  (binary VA: 0x183fc00)
// Original: hkpShapeDisplayViewer::removeWorld
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::removeWorld(hkpShapeDisplayViewer::Self *self, int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  int address;
  int v6;

  hkpWorld::removeEntityListener(**(uint32_t ***)(*((uint32_t *)self + 14) + 4 * a2), (int)(uintptr_t)(self) + 40);
  hkpWorld::removeWorldPostSimulationListener(
    **(hkpWorld::Self ***)(*((uint32_t *)self + 14) + 4 * a2),
    (hkpShapeDisplayViewer::Self *)((char *)self + 44));
  hkpShapeDisplayViewer::removeAllGeometries(self, a2);
  result = *((uint32_t *)self + 14);
  v3 = *(uint32_t **)(result + 4 * a2);
  if ( v3 != nullptr )
  {
    v4 = v3[3];
    v3[2] = 0;
    if ( v4 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v3[1],
        4 * v4);
    v3[1] = 0;
    v3[3] = 0x80000000;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v3,
      16);
    result = *((uint32_t *)self + 14);
  }
  v6 = *((uint32_t *)self + 15) - 1;
  *((uint32_t *)self + 15) = v6;
  if ( a2 != v6 )
    *(uint32_t *)(result + 4 * a2) = *(uint32_t *)(result + 4 * v6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::Destroy  (binary VA: 0x183fcf0)
// Original: hkpShapeDisplayViewer::~hkpShapeDisplayViewer
// ----------------------------------------------------------------------------
void hkpShapeDisplayViewer::Destroy(hkpShapeDisplayViewer::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  hkMemoryAllocator::Self *v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A34E8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A353C);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A3568);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A3580);
  v1 = *((uint32_t *)self + 31);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A35A4);
  if ( *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
      v4 = v2 | (uint16_t)(v3 - 1);
      v5 = v3;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
    if ( (uint16_t)v4 == 0 )
      G4_VCALL<void>(v1, 16);
  }
  v6 = *((uint32_t *)self + 15) - 1;
  if ( v6 >= 0 )
  {
    do
    {
      v8 = (hkMemoryAllocator::Self *)v6--;
      hkpShapeDisplayViewer::removeWorld(self, (int)(uintptr_t)(v8));
    }
    while ( v6 != -1 );
  }
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkpShapeDisplayViewer::Self *)((char *)self + 92),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkpShapeDisplayViewer::Self *)((char *)self + 80),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkpShapeDisplayViewer::Self *)((char *)self + 68),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v7 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 15) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      4 * v7);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_2054DE8);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::Destroy_ea183fe80  (binary VA: 0x183fe80)
// Original: hkpShapeDisplayViewer::~hkpShapeDisplayViewer
// ----------------------------------------------------------------------------
void hkpShapeDisplayViewer::Destroy_ea183fe80(hkpShapeDisplayViewer::Self *self)
{
  int v1;
  int v2;

  hkpShapeDisplayViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeDisplayViewer::worldRemovedCallback  (binary VA: 0x183ff20)
// Original: hkpShapeDisplayViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
int hkpShapeDisplayViewer::worldRemovedCallback(hkpShapeDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  int result;

  result = hkpShapeDisplayViewer::findWorld(self, a2);
  if ( result >= 0 )
    return hkpShapeDisplayViewer::removeWorld(self, result);
  return result;
}


