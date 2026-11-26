#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPowered.h"

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::Target::staticClass  (binary VA: 0x1830fd0)
// Original: hkpPoweredChainMapper::Target::staticClass
// ----------------------------------------------------------------------------
void * hkpPoweredChainMapper::Target::staticClass()
{
  return &hkpPoweredChainMapperTargetClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::LinkInfo::staticClass  (binary VA: 0x1830ff0)
// Original: hkpPoweredChainMapper::LinkInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpPoweredChainMapper::LinkInfo::staticClass()
{
  return &hkpPoweredChainMapperLinkInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::staticClass  (binary VA: 0x1831010)
// Original: hkpPoweredChainMapper::staticClass
// ----------------------------------------------------------------------------
void * hkpPoweredChainMapper::staticClass()
{
  return &hkpPoweredChainMapperClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::Destroy  (binary VA: 0x1849030)
// Original: hkpPoweredChainMapper::~hkpPoweredChainMapper
// ----------------------------------------------------------------------------
void hkpPoweredChainMapper::Destroy(hkpPoweredChainMapper::Self *self)
{
  int v1;
  hkpPoweredChainMapper::Self *v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int i;
  int v11;
  int v12;
  int32_t v13; // kr04_4
  int32_t v14;
  int32_t v15; // ett
  int v16;
  int v17;
  int v18;
  hkpPoweredChainMapper::Self *thisa;
  hkpPoweredChainMapper::Self *thisb;

  v1 = 0;
  v2 = self;
  v3 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3CA8);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)v2 + 2) + 12 * v1 + 8);
      if ( v4 != 0 && *(uint16_t *)(v4 + 6) != 0 )
      {
        thisa = v2;
        do
        {
          v6 = *(uint32_t *)(v4 + 4);
          HIWORD(v5) = HIWORD(v6);
          LOWORD(v5) = 0;
          v7 = v5 | (uint16_t)(v6 - 1);
          v8 = v6;
        }
        while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
        v2 = thisa;
        if ( (uint16_t)v7 == 0 )
          G4_VCALL<void>(v4, 16);
        v3 = *((uint32_t *)thisa + 3);
      }
      ++v1;
    }
    while ( v1 < v3 );
  }
  v9 = *((uint32_t *)v2 + 9);
  for ( i = 0; i < v9; ++i )
  {
    v11 = *(uint32_t *)(*((uint32_t *)v2 + 8) + 4 * i);
    if ( *(uint16_t *)(v11 + 6) != 0 )
    {
      thisb = v2;
      do
      {
        v13 = *(uint32_t *)(v11 + 4);
        HIWORD(v12) = HIWORD(v13);
        LOWORD(v12) = 0;
        v14 = v12 | (uint16_t)(v13 - 1);
        v15 = v13;
      }
      while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v15, v14) );
      v2 = thisb;
      if ( (uint16_t)v14 == 0 )
        G4_VCALL<void>(v11, 16);
      v9 = *((uint32_t *)thisb + 9);
    }
  }
  v16 = *((uint32_t *)v2 + 10);
  *((uint32_t *)v2 + 9) = 0;
  if ( v16 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v2 + 8),
      4 * v16);
  v17 = *((uint32_t *)v2 + 7);
  *((uint32_t *)v2 + 8) = 0;
  *((uint32_t *)v2 + 10) = 0x80000000;
  *((uint32_t *)v2 + 6) = 0;
  if ( v17 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v2 + 5),
      8 * v17);
  v18 = *((uint32_t *)v2 + 4);
  *((uint32_t *)v2 + 5) = 0;
  *((uint32_t *)v2 + 7) = 0x80000000;
  *((uint32_t *)v2 + 3) = 0;
  if ( v18 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v2 + 2),
      12 * v18);
  *((uint32_t *)v2 + 2) = 0;
  *((uint32_t *)v2 + 4) = 0x80000000;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::Destroy_ea18491d0  (binary VA: 0x18491d0)
// Original: hkpPoweredChainMapper::~hkpPoweredChainMapper
// ----------------------------------------------------------------------------
void hkpPoweredChainMapper::Destroy_ea18491d0(hkpPoweredChainMapper::Self *self)
{
  int v1;
  int v2;

  hkpPoweredChainMapper::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::getMotors  (binary VA: 0x1849230)
// Original: hkpPoweredChainMapper::getMotors
// ----------------------------------------------------------------------------
int hkpPoweredChainMapper::getMotors(int a1, int a2, int a3, hkMemoryAllocator::Self *a4)
{
  int v4;
  int v5;
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;

  v4 = 0;
  v11 = (uint32_t *)(*(uint32_t *)(a1 + 8) + 12 * a2);
  v5 = v11[1];
  result = a3 + 16;
  if ( v5 > 0 )
  {
    do
    {
      v7 = (uint32_t *)(*(uint32_t *)(a1 + 20) + 8 * (v4 + *v11));
      result = *(uint32_t *)(*v7 + 32) + 80 * v7[1];
      v8 = *(uint32_t *)(result + 4 * (a3 + 16));
      if ( v8 != 0 )
      {
        v9 = *((uint32_t *)a4 + 1);
        if ( v9 == (*((uint32_t *)a4 + 2) & 0x3FFFFFFF) )
        {
          v12 = *(uint32_t *)(result + 4 * (a3 + 16));
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a4, 4, v10);
          v9 = *((uint32_t *)a4 + 1);
          v8 = v12;
        }
        *(uint32_t *)(*(uint32_t *)a4 + 4 * v9) = v8;
        result = (int)(uintptr_t)(v11);
        ++*((uint32_t *)a4 + 1);
        v5 = v11[1];
      }
      ++v4;
    }
    while ( v4 < v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::setForceLimits  (binary VA: 0x1849300)
// Original: hkpPoweredChainMapper::setForceLimits
// ----------------------------------------------------------------------------
int hkpPoweredChainMapper::setForceLimits(hkpPoweredChainMapper::Self *self, int a2, int a3, float a4, float a5)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  int *v7;
  int *v8;
  int v9;
  int result;
  typedef int *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);

  v11 = nullptr;
  v12 = 0;
  v13 = 0x80000000;
  hkpPoweredChainMapper::getMotors((int)(uintptr_t)(self), a2, a3, (hkMemoryAllocator::Self *)&v11);
  if ( v12 != 0 )
  {
    v5 = a4 / (float)v12;
    v6 = a5 / (float)v12;
    if ( v12 > 0 )
    {
      v7 = v11;
      v8 = &v11[v12];
      do
      {
        v9 = *v7++;
        *(float *)(v9 + 12) = v5;
        *(float *)(v9 + 16) = v6;
      }
      while ( v7 != v8 );
    }
  }
  result = v13;
  v12 = 0;
  if ( v13 >= 0 )
    return (*(int (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v11,
             4 * v13);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::setMotors  (binary VA: 0x18493d0)
// Original: hkpPoweredChainMapper::setMotors
// ----------------------------------------------------------------------------
uint32_t * hkpPoweredChainMapper::setMotors(hkpPoweredChainMapper::Self *self, int a2, int a3, hkpConstraintMotor::Self *a4)
{
  int v4;
  uint32_t *result;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int32_t v10; // kr00_4
  int32_t v11;
  int32_t v12; // ett
  int v13;
  int32_t v14; // kr04_4
  int v15;
  int v16;
  int v17;
  int v18;

  v4 = 0;
  v16 = *((uint32_t *)self + 2) + 12 * a2;
  v15 = a3 + 16;
  result = *(uint32_t **)(v16 + 4);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    result = (uint32_t *)(*((uint32_t *)self + 2) + 12 * a2);
    do
    {
      v6 = (uint32_t *)(*((uint32_t *)self + 5) + 8 * (v4 + *result));
      v17 = *v6;
      v7 = *(uint32_t *)(*v6 + 32) + 80 * v6[1];
      v8 = *(uint32_t *)(v7 + 4 * v15);
      if ( v8 != 0 && *(uint16_t *)(v8 + 6) != 0 )
      {
        v18 = *((uint32_t *)self + 5) + 8 * (v4 + *result);
        do
        {
          v10 = *(uint32_t *)(v8 + 4);
          HIWORD(v9) = HIWORD(v10);
          LOWORD(v9) = 0;
          v11 = v9 | (uint16_t)(v10 - 1);
          v12 = v10;
        }
        while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v12, v11) );
        if ( (uint16_t)v11 == 0 )
          G4_VCALL<void>(v8, 16);
        v7 = *(uint32_t *)(v17 + 32) + 80 * *(uint32_t *)(v18 + 4);
      }
      *(uint32_t *)(v7 + 4 * v15) = (uint32_t)(uintptr_t)(a4);
      if ( a4 != nullptr && *((uint16_t *)a4 + 3) != 0 )
      {
        do
        {
          v14 = *((uint32_t *)a4 + 1);
          HIWORD(v13) = HIWORD(v14);
          LOWORD(v13) = 0;
        }
        while ( v14 != __sync_val_compare_and_swap(
                         (volatile int32_t *)a4 + 1,
                         v14,
                         v13 | (uint16_t)(v14 + 1)) );
      }
      result = (uint32_t *)v16;
      ++v4;
    }
    while ( *(uint32_t *)(v16 + 4) > v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::setTargetOrientation  (binary VA: 0x18494f0)
// Original: hkpPoweredChainMapper::setTargetOrientation
// ----------------------------------------------------------------------------
int hkpPoweredChainMapper::setTargetOrientation(hkpPoweredChainMapper::Self *self, int a2, const hkQuaternionf::Self *a3)
{
  uint32_t *v3;
  int64_t v4; // rax
  int v5;
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm7_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float v17; // xmm3_4

  LODWORD(v4) = *((uint32_t *)self + 2);
  v3 = (uint32_t *)(v4 + 12 * a2);
  v4 = (unsigned int)v4;
  if ( (int)v3[1] > 0 )
  {
    do
    {
      v5 = HIDWORD(v4) + *v3;
      v6 = *((float *)a3 + 1);
      ++HIDWORD(v4);
      v7 = *((float *)a3 + 2);
      v8 = *((float *)a3 + 3);
      LODWORD(v4) = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 5) + 8 * v5) + 32)
                  + 80 * *(uint32_t *)(*((uint32_t *)self + 5) + 8 * v5 + 4);
      v9 = *(float *)(v4 + 60);
      v10 = (float)(*(float *)(v4 + 48) * *(float *)a3) + (float)(*(float *)(v4 + 52) * v6);
      v11 = *(float *)(v4 + 56) * *(float *)a3;
      v12 = *(float *)a3 * *(float *)(v4 + 52);
      *(float *)(v4 + 32) = (float)((float)((float)(*(float *)(v4 + 56) * v6) - (float)(*(float *)(v4 + 52) * v7))
                                  + (float)(*(float *)(v4 + 48) * v8))
                          + (float)(*(float *)a3 * v9);
      v13 = (float)((float)(*(float *)(v4 + 48) * v7) - v11) + (float)(*(float *)(v4 + 52) * v8);
      v14 = v6 * v9;
      v15 = v6 * *(float *)(v4 + 48);
      *(float *)(v4 + 36) = v13 + v14;
      v16 = v7 * v9;
      v17 = (float)(v9 * v8) - (float)(v10 + (float)(v7 * *(float *)(v4 + 56)));
      *(float *)(v4 + 40) = (float)((float)(v12 - v15) + (float)(*(float *)(v4 + 56) * v8)) + v16;
      *(float *)(v4 + 44) = v17;
    }
    while ( v3[1] > SHIDWORD(v4) );
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainMapper::buildChainMapper  (binary VA: 0x1849620)
// Original: hkpPoweredChainMapper::buildChainMapper
// ----------------------------------------------------------------------------
uint32_t * hkpPoweredChainMapper::buildChainMapper(int16_t a1, hkpConstraintInstance::Self *a2, int *a3, hkMemoryAllocator::Self *a4)
{
  hkpConstraintInstance::Self *v4;
  int address;
  uint32_t *v6;
  int v7;
  void *v8;
  int v9;
  int v10;
  signed int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  int *v21;
  int v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  uint32_t *v28;
  int v29;
  int v30;
  int Key;
  int v32;
  int v33;
  int v34;
  bool v35; // cc
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int i;
  int v47;
  int v48;
  int32_t v49; // kr00_4
  int32_t v50;
  int32_t v51; // ett
  int v52;
  int32_t v53; // kr04_4
  int32_t v54;
  int32_t v55; // ett
  uint32_t *v56;
  int v58;
  int32_t v59; // kr08_4
  int32_t v60;
  int32_t v61; // ett
  int v62;
  int32_t v63; // kr0C_4
  int32_t v64; // ett
  int v65;
  int32_t v66; // kr10_4
  int32_t v67; // ett
  int v68;
  int32_t v69; // kr14_4
  int32_t v70; // ett
  int *savedregs;
  int *retaddr;
  typedef hkMemoryAllocator::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int *_g4_t_v73;
  typedef hkpConstraintInstance::Self *_g4_t_v74;
  typedef int16_t _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef uint32_t *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef void *_g4_t_s;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef uint32_t _g4_t_v92[2];
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100[3];
  typedef int _g4_t_v101[130];
  typedef hkArrayUtil::Self *_g4_t_v102;
  typedef hkpConstraintInstance::Self *_g4_t_v103;
  typedef int _g4_t_v104;
  typedef unsigned int _g4_t_v105;
  enum : size_t {
    _g4_s0 = 800u,
    _g4_s1 = (0u + sizeof(_g4_t_v71)) > _g4_s0 ? (0u + sizeof(_g4_t_v71)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v72)) > _g4_s1 ? (16u + sizeof(_g4_t_v72)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v73)) > _g4_s2 ? (24u + sizeof(_g4_t_v73)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v74)) > _g4_s3 ? (32u + sizeof(_g4_t_v74)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v75)) > _g4_s4 ? (36u + sizeof(_g4_t_v75)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v76)) > _g4_s5 ? (52u + sizeof(_g4_t_v76)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v77)) > _g4_s6 ? (60u + sizeof(_g4_t_v77)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v78)) > _g4_s7 ? (60u + sizeof(_g4_t_v78)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v79)) > _g4_s8 ? (64u + sizeof(_g4_t_v79)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v80)) > _g4_s9 ? (72u + sizeof(_g4_t_v80)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v81)) > _g4_s10 ? (72u + sizeof(_g4_t_v81)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v82)) > _g4_s11 ? (72u + sizeof(_g4_t_v82)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v83)) > _g4_s12 ? (76u + sizeof(_g4_t_v83)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v84)) > _g4_s13 ? (76u + sizeof(_g4_t_v84)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v85)) > _g4_s14 ? (80u + sizeof(_g4_t_v85)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v86)) > _g4_s15 ? (84u + sizeof(_g4_t_v86)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v87)) > _g4_s16 ? (88u + sizeof(_g4_t_v87)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v88)) > _g4_s17 ? (92u + sizeof(_g4_t_v88)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_s)) > _g4_s18 ? (100u + sizeof(_g4_t_s)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v90)) > _g4_s19 ? (104u + sizeof(_g4_t_v90)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v91)) > _g4_s20 ? (108u + sizeof(_g4_t_v91)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v92)) > _g4_s21 ? (116u + sizeof(_g4_t_v92)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v93)) > _g4_s22 ? (124u + sizeof(_g4_t_v93)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v94)) > _g4_s23 ? (132u + sizeof(_g4_t_v94)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v95)) > _g4_s24 ? (136u + sizeof(_g4_t_v95)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v96)) > _g4_s25 ? (140u + sizeof(_g4_t_v96)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v97)) > _g4_s26 ? (148u + sizeof(_g4_t_v97)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v98)) > _g4_s27 ? (152u + sizeof(_g4_t_v98)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v99)) > _g4_s28 ? (156u + sizeof(_g4_t_v99)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v100)) > _g4_s29 ? (168u + sizeof(_g4_t_v100)) : _g4_s29,
    _g4_s31 = (180u + sizeof(_g4_t_v101)) > _g4_s30 ? (180u + sizeof(_g4_t_v101)) : _g4_s30,
    _g4_s32 = (700u + sizeof(_g4_t_v102)) > _g4_s31 ? (700u + sizeof(_g4_t_v102)) : _g4_s31,
    _g4_s33 = (704u + sizeof(_g4_t_v103)) > _g4_s32 ? (704u + sizeof(_g4_t_v103)) : _g4_s32,
    _g4_s34 = (708u + sizeof(_g4_t_v104)) > _g4_s33 ? (708u + sizeof(_g4_t_v104)) : _g4_s33,
    _g4_s35 = (712u + sizeof(_g4_t_v105)) > _g4_s34 ? (712u + sizeof(_g4_t_v105)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 0u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 16u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 24u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 36u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 60u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 64u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 72u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 72u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 72u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 76u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 76u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 80u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 84u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 88u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 92u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 100u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 104u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 108u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 116u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 124u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 132u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 136u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 140u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 148u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 152u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 156u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 168u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 180u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 700u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 704u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 708u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 712u);

  v102 = (hkArrayUtil::Self *)&a1;
  v75 = a1;
  v4 = a2;
  v74 = a2;
  v73 = a3;
  v71 = a4;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v6 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   44);
  v6[1] = -65535;
  v79 = v6;
  *v6 = ((uint32_t)(uintptr_t)&off_20A3CA8);
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0x80000000;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0x80000000;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0x80000000;
  v7 = *((uint32_t *)v4 + 1);
  v86 = 0;
  v87 = 0;
  v88 = 0x80000000;
  s = nullptr;
  v90 = 0;
  v91 = 0x80000000;
  if ( v7 <= 0 )
  {
    v8 = nullptr;
  }
  else
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v85, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &s, v7, 4);
    v8 = s;
  }
  v90 = v7;
  v9 = v7 & 0x3FFFFFFF;
  if ( v9 != 0 )
    memset(v8, 0, 4 * v9);
  v92[0] = 0;
  v92[1] = 0;
  v93 = -1;
  v10 = *((uint32_t *)v74 + 1);
  if ( v10 > 0 )
  {
    v11 = 0;
    do
    {
      v105 = v11;
      v12 = *(uint32_t *)(*(uint32_t *)v74 + 4 * v11++);
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v12,
        v105);
    }
    while ( *((uint32_t *)v74 + 1) > v11 );
    v10 = *((uint32_t *)v74 + 1);
    v13 = v79[4] & 0x3FFFFFFF;
    if ( v10 > v13 )
    {
      v14 = 2 * v13;
      savedregs = (int *)((uint32_t *)(byte_9 + 3));
      v102 = (hkArrayUtil::Self *)&v85;
      if ( v10 >= v14 )
        v14 = v10;
      hkArrayUtil::reserve(v102, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v79 + 2, v14, savedregs);
    }
  }
  v15 = v79[3];
  v16 = (char *)v79[2];
  v17 = v10 - v15;
  v18 = &v16[12 * v15];
  if ( v17 > 0 )
  {
    v19 = &v18[12 * v17];
    do
    {
      *(uint32_t *)v18 = -1;
      *((uint32_t *)v18 + 1) = 0;
      *((uint32_t *)v18 + 2) = 0;
      v18 += 12;
    }
    while ( v18 != v19 );
    v16 = (char *)v79[2];
  }
  v79[3] = v10;
  if ( ((3 * v10) & 0x3FFFFFFF) != 0 )
    memset(v16, 0, 12 * v10);
  if ( v73[1] <= 0 )
  {
LABEL_39:
    if ( (int)v79[3] <= 0 )
    {
      v37 = 0;
    }
    else
    {
      v36 = 0;
      v37 = 0;
      do
      {
        v38 = 3 * v36;
        *(uint32_t *)(v79[2] + 4 * v38) = v37;
        v37 += *((uint32_t *)s + v36++);
        *(uint32_t *)(v79[2] + 4 * v38 + 4) = 0;
      }
      while ( v79[3] > v36 );
      v39 = v79[7] & 0x3FFFFFFF;
      if ( v37 > v39 )
      {
        v40 = 2 * v39;
        savedregs = (int *)((uint32_t *)&byte_8);
        v102 = (hkArrayUtil::Self *)&v85;
        if ( v37 >= v40 )
          v40 = v37;
        hkArrayUtil::reserve(v102, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v79 + 5, v40, savedregs);
      }
    }
    v84 = 0;
    v79[6] = v37;
    if ( v87 > 0 )
    {
      v81 = 0;
      do
      {
        v41 = (uint32_t *)(v86 + v81);
        ++v84;
        v81 += 12;
        v78 = (uint32_t *)(v79[2] + 12 * v41[2]);
        v42 = v78[1] + *v78;
        v43 = v79[5];
        v44 = v41[1];
        *(uint32_t *)(v43 + 8 * v42) = *v41;
        *(uint32_t *)(v43 + 8 * v42 + 4) = v44;
        ++v78[1];
      }
      while ( v87 > v84 );
    }
    if ( v71 != nullptr )
    {
      v45 = v79[3];
      if ( v45 <= 0 )
      {
        v56 = v79;
        goto LABEL_71;
      }
      for ( i = 0; i < v45; ++i )
      {
        if ( *(uint32_t *)(v79[2] + 12 * i + 4) == 0 )
        {
          v47 = *((uint32_t *)v71 + 1);
          v82 = (uint32_t *)(*(uint32_t *)v74 + 4 * i);
          if ( v47 == (*((uint32_t *)v71 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v71, &loc_4, v105);
            v47 = *((uint32_t *)v71 + 1);
          }
          *(uint32_t *)(*(uint32_t *)v71 + 4 * v47) = *v82;
          ++*((uint32_t *)v71 + 1);
          v45 = v79[3];
        }
      }
    }
    v56 = v79;
    goto LABEL_71;
  }
  v72 = 0;
  v20 = 0;
  v21 = v73;
  while ( 1 )
  {
    v22 = *v21;
    v95 = 0;
    v96 = 0x80000000;
    v98 = 0;
    v99 = 0x80000000;
    v94 = 0;
    v97 = 0;
    v23 = (int *)(v22 + 8 * v20);
    retaddr = &v97;
    savedregs = &v94;
    v105 = v23[1];
    v104 = *v23;
    v103 = v74;
    hkpConstraintChainUtil::findConstraintLinkBetweenEntities(&v85);
    if ( v85 == 1 )
    {
      hkErrStream::Construct((hkErrStream::Self *)v100, (hkString::Self *)v101, 512);
      hkOstream::opShl(
        (int)(uintptr_t)(v100),
        (hkString::Self *)"Cannot find a chain of constraints linking one of the entity pairs.");
      hkError::messageWarning(
        (hkError::Self *)0xABBAAA88,
        (int)(uintptr_t)(v101),
        "Constraint/Chain/hkpPoweredChainMapper.cpp",
        (const char *)&dword_44,
        (int)(uintptr_t)(savedregs));
      hkErrStream::Destroy((hkErrStream::Self *)v100);
      if ( *((uint16_t *)v79 + 3) == 0 )
        goto LABEL_66;
      do
      {
        v66 = v79[1];
        HIWORD(v65) = HIWORD(v66);
        LOWORD(v65) = 0;
        v54 = v65 | (uint16_t)(v66 - 1);
        v67 = v66;
      }
      while ( v67 != __sync_val_compare_and_swap(v79 + 1, v67, v54) );
LABEL_64:
      if ( (uint16_t)v54 == 0 )
        G4_VCALL<void>(v79, 16);
      goto LABEL_66;
    }
    LOBYTE(v103) = HIBYTE(v75);
    v83 = hkpConstraintChainUtil::buildPoweredChain(&v97, v103);
    if ( v83 == 0 )
    {
      hkErrStream::Construct((hkErrStream::Self *)v100, (hkString::Self *)v101, 512);
      hkOstream::opShl((int)(uintptr_t)(v100), (hkString::Self *)"Failed to build a chain.");
      hkError::messageWarning(
        (hkError::Self *)0xABBADDAA,
        (int)(uintptr_t)(v101),
        "Constraint/Chain/hkpPoweredChainMapper.cpp",
        (const char *)&dword_4C + 2,
        (int)(uintptr_t)(savedregs));
      hkErrStream::Destroy((hkErrStream::Self *)v100);
      if ( *((uint16_t *)v79 + 3) == 0 )
        goto LABEL_66;
      do
      {
        v69 = v79[1];
        HIWORD(v68) = HIWORD(v69);
        LOWORD(v68) = 0;
        v54 = v68 | (uint16_t)(v69 - 1);
        v70 = v69;
      }
      while ( v70 != __sync_val_compare_and_swap(v79 + 1, v70, v54) );
      goto LABEL_64;
    }
    v24 = v79[9];
    if ( v24 == (v79[10] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(v79 + 8),
        &loc_4,
        v105);
      v24 = v79[9];
    }
    *(uint32_t *)(v79[8] + 4 * v24) = v83;
    v25 = v98;
    ++v79[9];
    v26 = 0;
    if ( v25 > 0 )
      break;
LABEL_34:
    v98 = 0;
    if ( v99 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v97,
        4 * v99);
    v97 = 0;
    v99 = 0x80000000;
    v95 = 0;
    if ( v96 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v94,
        4 * v96);
    v21 = v73;
    v20 = ++v72;
    if ( v73[1] <= v72 )
      goto LABEL_39;
  }
  while ( 1 )
  {
    v76 = 4 * v26;
    Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
            *(uint32_t *)(v97 + 4 * v26));
    if ( Key > v93 )
      break;
    v32 = *(uint32_t *)(v92[0] + 8 * Key + 4);
    v77 = v79[2];
    v33 = v87;
    if ( v87 == (v88 & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)&v86,
        &byte_9[3],
        v105);
      v33 = v87;
    }
    v87 = v33 + 1;
    v27 = (uint32_t *)(v86 + 12 * v33);
    v28 = (uint32_t *)(s);
    v27[2] = v32;
    v80 = v27;
    ++v28[v32];
    if ( (*(int (**)(uint32_t))(**(uint32_t **)(v83 + 12) + 20))(*(uint32_t *)(v83 + 12)) != 102 )
    {
      hkErrStream::Construct((hkErrStream::Self *)v100, (hkString::Self *)v101, 512);
      hkOstream::opShl((int)(uintptr_t)(v100), (hkString::Self *)"Internal error; invalid chain type.");
      hkError::messageWarning(
        (hkError::Self *)0xABBA9D6D,
        (int)(uintptr_t)(v101),
        "Constraint/Chain/hkpPoweredChainMapper.cpp",
        dword_6C,
        (int)(uintptr_t)(savedregs));
      hkErrStream::Destroy((hkErrStream::Self *)v100);
      if ( *(uint16_t *)(v83 + 6) != 0 )
      {
        do
        {
          v59 = *(uint32_t *)(v83 + 4);
          HIWORD(v58) = HIWORD(v59);
          LOWORD(v58) = 0;
          v60 = v58 | (uint16_t)(v59 - 1);
          v61 = v59;
        }
        while ( v61 != __sync_val_compare_and_swap((volatile int32_t *)(v83 + 4), v61, v60) );
        if ( (uint16_t)v60 == 0 )
          G4_VCALL<void>(v83, 16);
      }
      if ( *((uint16_t *)v79 + 3) != 0 )
      {
        do
        {
          v63 = v79[1];
          HIWORD(v62) = HIWORD(v63);
          LOWORD(v62) = 0;
          v54 = v62 | (uint16_t)(v63 - 1);
          v64 = v63;
        }
        while ( v64 != __sync_val_compare_and_swap(v79 + 1, v64, v54) );
        goto LABEL_64;
      }
      goto LABEL_66;
    }
    v29 = *(uint32_t *)(v83 + 12);
    v80[1] = v26;
    *v80 = v29;
    if ( (uint8_t)v75 != 0 && *(uint32_t *)((v30 = v77 + 12 * v32) + 8) == 0 )
    {
      ++v26;
      v34 = hkpConstraintUtils::convertToLimits(*(hkpConstraintUtils::Self **)(v97 + v76), v103);
      v35 = v98 <= v26;
      *(uint32_t *)(v30 + 8) = v34;
      if ( v35 )
        goto LABEL_34;
    }
    else if ( v98 <= ++v26 )
    {
      goto LABEL_34;
    }
  }
  hkErrStream::Construct((hkErrStream::Self *)v100, (hkString::Self *)v101, 512);
  hkOstream::opShl((int)(uintptr_t)(v100), (hkString::Self *)"Internal error.");
  hkError::messageWarning(
    (hkError::Self *)0xABBA99DD,
    (int)(uintptr_t)(v101),
    "Constraint/Chain/hkpPoweredChainMapper.cpp",
    (const char *)&dword_5C + 1,
    (int)(uintptr_t)(savedregs));
  hkErrStream::Destroy((hkErrStream::Self *)v100);
  if ( *(uint16_t *)(v83 + 6) != 0 )
  {
    do
    {
      v49 = *(uint32_t *)(v83 + 4);
      HIWORD(v48) = HIWORD(v49);
      LOWORD(v48) = 0;
      v50 = v48 | (uint16_t)(v49 - 1);
      v51 = v49;
    }
    while ( v51 != __sync_val_compare_and_swap((volatile int32_t *)(v83 + 4), v51, v50) );
    if ( (uint16_t)v50 == 0 )
      G4_VCALL<void>(v83, 16);
  }
  if ( *((uint16_t *)v79 + 3) != 0 )
  {
    do
    {
      v53 = v79[1];
      HIWORD(v52) = HIWORD(v53);
      LOWORD(v52) = 0;
      v54 = v52 | (uint16_t)(v53 - 1);
      v55 = v53;
    }
    while ( v55 != __sync_val_compare_and_swap(v79 + 1, v55, v54) );
    goto LABEL_64;
  }
LABEL_66:
  v98 = 0;
  if ( v99 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v97,
      4 * v99);
  v97 = 0;
  v99 = 0x80000000;
  v95 = 0;
  if ( v96 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v94,
      4 * v96);
  v56 = nullptr;
LABEL_71:
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy((hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92);
  v90 = 0;
  if ( v91 >= 0 )
    (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      s,
      4 * v91);
  s = nullptr;
  v91 = 0x80000000;
  v87 = 0;
  if ( v88 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v86,
      12 * v88);
  return v56;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::ConstraintInfo::staticClass  (binary VA: 0x1b02da0)
// Original: hkpPoweredChainData::ConstraintInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpPoweredChainData::ConstraintInfo::staticClass()
{
  return &hkpPoweredChainDataConstraintInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::staticClass  (binary VA: 0x1b02dc0)
// Original: hkpPoweredChainData::staticClass
// ----------------------------------------------------------------------------
void * hkpPoweredChainData::staticClass()
{
  return &hkpPoweredChainDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::isValid  (binary VA: 0x1b03500)
// Original: hkpPoweredChainData::isValid
// ----------------------------------------------------------------------------
hkpPoweredChainData::Self * hkpPoweredChainData::isValid(hkpPoweredChainData::Self *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::getNumConstraintInfos  (binary VA: 0x1b03510)
// Original: hkpPoweredChainData::getNumConstraintInfos
// ----------------------------------------------------------------------------
int hkpPoweredChainData::getNumConstraintInfos(hkpPoweredChainData::Self *self)
{
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::getSolverResults  (binary VA: 0x1b03520)
// Original: hkpPoweredChainData::getSolverResults
// ----------------------------------------------------------------------------
int hkpPoweredChainData::getSolverResults(int a1, int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::getType  (binary VA: 0x1b03530)
// Original: hkpPoweredChainData::getType
// ----------------------------------------------------------------------------
int hkpPoweredChainData::getType()
{
  return 102;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::getConstraintInfo  (binary VA: 0x1b03540)
// Original: hkpPoweredChainData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpPoweredChainData::getConstraintInfo(int a1, uint32_t *a2)
{
  int v3;
  int v4;
  int v5;

  a2[4] = a1 + 16;
  a2[5] = 16;
  a2[2] = 0;
  a2[3] = 0;
  a2[1] = 16;
  *a2 = 0;
  v3 = *(uint32_t *)(a1 + 36);
  v4 = 1296 * v3;
  v5 = 9 * v3 + 9;
  v3 *= 6;
  a2[2] = v3;
  a2[3] = v3;
  a2[1] = ((v4 + 4 * v5 + 47) & 0xFFFFFFF0) + 16;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::getRuntimeInfo  (binary VA: 0x1b035a0)
// Original: hkpPoweredChainData::getRuntimeInfo
// ----------------------------------------------------------------------------
int hkpPoweredChainData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = *(uint32_t *)(a1 + 36);
  a3[1] = 6 * v3;
  v4 = 48 * v3;
  v5 = v3 + 3;
  result = 16 * v3;
  *a3 = result + v4 + (v5 & 0xFFFFFFFC);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::Destroy  (binary VA: 0x1b035d0)
// Original: hkpPoweredChainData::~hkpPoweredChainData
// ----------------------------------------------------------------------------
void hkpPoweredChainData::Destroy(hkpPoweredChainData::Self *self)
{
  hkpPoweredChainData::Self *v1;
  int v2;
  int v3;
  int i;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11;
  int v12;

  v1 = self;
  v12 = 0;
  v2 = *((uint32_t *)self + 9);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B21C8);
  if ( v2 > 0 )
  {
    v3 = 0;
    do
    {
      for ( i = 0; i != 3; ++i )
      {
        v5 = *(uint32_t *)(*((uint32_t *)self + 8) + 4 * i + 64 + v3);
        if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
        {
          v11 = i;
          do
          {
            v7 = *(uint32_t *)(v5 + 4);
            HIWORD(v6) = HIWORD(v7);
            LOWORD(v6) = 0;
            v8 = v6 | (uint16_t)(v7 - 1);
            v9 = v7;
          }
          while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
          i = v11;
          if ( (uint16_t)v8 == 0 )
            G4_VCALL<void>(v5, 16);
        }
      }
      ++v12;
      v3 += 80;
    }
    while ( *((uint32_t *)self + 9) > v12 );
    v1 = self;
  }
  v10 = *((uint32_t *)v1 + 10);
  *((uint32_t *)v1 + 9) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 8),
      80 * v10);
  *((uint32_t *)v1 + 8) = 0;
  *((uint32_t *)v1 + 10) = 0x80000000;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::Destroy_ea1b036f0  (binary VA: 0x1b036f0)
// Original: hkpPoweredChainData::~hkpPoweredChainData
// ----------------------------------------------------------------------------
void hkpPoweredChainData::Destroy_ea1b036f0(hkpPoweredChainData::Self *self)
{
  int v1;
  int v2;

  hkpPoweredChainData::Destroy(self);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::buildJacobian  (binary VA: 0x1b03750)
// Original: hkpPoweredChainData::buildJacobian
// ----------------------------------------------------------------------------
int hkpPoweredChainData::buildJacobian(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  int v10;
  int AngularJacobians;
  hkRotationf::Self *v12;
  int v13;
  int v14;
  int v15;
  float *v16;
  float v17; // xmm5_4
  float v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  int v43;
  float v44; // xmm6_4
  float v45; // xmm3_4
  float v46; // xmm5_4
  float v47; // xmm1_4
  float *v48;
  float v49; // xmm7_4
  float v50; // xmm0_4
  float v51; // xmm7_4
  float v52; // xmm5_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  float v57; // xmm5_4
  float v58; // xmm7_4
  float v59; // xmm6_4
  float v60; // xmm4_4
  float v61; // xmm1_4
  float v62; // xmm6_4
  float v63; // xmm0_4
  float v64; // xmm3_4
  float v65; // xmm1_4
  float v66; // xmm0_4
  float v67; // xmm7_4
  __m128i v68;
  __m128 v69;
  __m128 v70;
  __m128i v71;
  __m128 v72;
  __m128i v73;
  __m128i v74;
  unsigned int v75;
  float v76;
  float v77;
  __m128 v78;
  __m128 v79;
  __m128 v80;
  __m128 v81;
  __m128 v82;
  __m128 v83;
  __m128 v84;
  __m128 v85;
  __m128 v86;
  float v87;
  __m128 v88;
  bool v89;
  hkRotationf::Self *v90;
  int v91;
  int v92;
  int32_t v93; // xmm0_4
  int v94;
  int32_t v95; // xmm0_4
  int v96;
  int v97;
  float *v98;
  float *v99;
  int v100;
  uint8_t *v101;
  int v102;
  float v103; // xmm0_4
  int v104; // xmm0_4
  int result;
  float v106;
  float v107;
  float v108;
  float v109;
  int savedregs;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float *_g4_t_v120;
  typedef int _g4_t_LinearJacobians;
  typedef float _g4_t_v122;
  typedef int _g4_t_v123;
  typedef float _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef unsigned int _g4_t_v129;
  typedef unsigned int _g4_t_v130;
  typedef float _g4_t_v131;
  typedef unsigned int _g4_t_v132;
  typedef hkRotationf::Self *_g4_t_v133;
  typedef float _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float *_g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef char _g4_t_v141[4];
  typedef float _g4_t_v142[4];
  typedef float _g4_t_v143[4];
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef __m128 _g4_t_v152;
  typedef __m128 _g4_t_v153;
  typedef g4_int128_t _g4_t_v154;
  typedef float _g4_t_v155[2];
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int32_t _g4_t_v158;
  typedef int32_t _g4_t_v159;
  typedef float _g4_t_v160[6];
  typedef float _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef float _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef uint8_t *_g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef float _g4_t_v174[24];
  typedef uint8_t *_g4_t_v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef uint8_t _g4_t_v178[132];
  typedef uint32_t *_g4_t_v179;
  typedef int _g4_t_v180;
  typedef int _g4_t_v181;
  typedef uint32_t _g4_t_v182[517];
  typedef float _g4_t_v183;
  typedef float *_g4_t_v184;
  enum : size_t {
    _g4_s0 = 2784u,
    _g4_s1 = (4u + sizeof(_g4_t_v110)) > _g4_s0 ? (4u + sizeof(_g4_t_v110)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v111)) > _g4_s1 ? (8u + sizeof(_g4_t_v111)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v112)) > _g4_s2 ? (12u + sizeof(_g4_t_v112)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v113)) > _g4_s3 ? (16u + sizeof(_g4_t_v113)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v114)) > _g4_s4 ? (32u + sizeof(_g4_t_v114)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v115)) > _g4_s5 ? (36u + sizeof(_g4_t_v115)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v116)) > _g4_s6 ? (40u + sizeof(_g4_t_v116)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v117)) > _g4_s7 ? (40u + sizeof(_g4_t_v117)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v118)) > _g4_s8 ? (44u + sizeof(_g4_t_v118)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v119)) > _g4_s9 ? (48u + sizeof(_g4_t_v119)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v120)) > _g4_s10 ? (56u + sizeof(_g4_t_v120)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_LinearJacobians)) > _g4_s11 ? (60u + sizeof(_g4_t_LinearJacobians)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v122)) > _g4_s12 ? (64u + sizeof(_g4_t_v122)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v123)) > _g4_s13 ? (84u + sizeof(_g4_t_v123)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v124)) > _g4_s14 ? (88u + sizeof(_g4_t_v124)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v125)) > _g4_s15 ? (92u + sizeof(_g4_t_v125)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v126)) > _g4_s16 ? (96u + sizeof(_g4_t_v126)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v127)) > _g4_s17 ? (100u + sizeof(_g4_t_v127)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v128)) > _g4_s18 ? (100u + sizeof(_g4_t_v128)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v129)) > _g4_s19 ? (104u + sizeof(_g4_t_v129)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v130)) > _g4_s20 ? (116u + sizeof(_g4_t_v130)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v131)) > _g4_s21 ? (116u + sizeof(_g4_t_v131)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v132)) > _g4_s22 ? (124u + sizeof(_g4_t_v132)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v133)) > _g4_s23 ? (124u + sizeof(_g4_t_v133)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v134)) > _g4_s24 ? (128u + sizeof(_g4_t_v134)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v135)) > _g4_s25 ? (128u + sizeof(_g4_t_v135)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v136)) > _g4_s26 ? (128u + sizeof(_g4_t_v136)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v137)) > _g4_s27 ? (132u + sizeof(_g4_t_v137)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v138)) > _g4_s28 ? (132u + sizeof(_g4_t_v138)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v139)) > _g4_s29 ? (132u + sizeof(_g4_t_v139)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v140)) > _g4_s30 ? (136u + sizeof(_g4_t_v140)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v141)) > _g4_s31 ? (140u + sizeof(_g4_t_v141)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v142)) > _g4_s32 ? (144u + sizeof(_g4_t_v142)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v143)) > _g4_s33 ? (160u + sizeof(_g4_t_v143)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v144)) > _g4_s34 ? (176u + sizeof(_g4_t_v144)) : _g4_s34,
    _g4_s36 = (180u + sizeof(_g4_t_v145)) > _g4_s35 ? (180u + sizeof(_g4_t_v145)) : _g4_s35,
    _g4_s37 = (184u + sizeof(_g4_t_v146)) > _g4_s36 ? (184u + sizeof(_g4_t_v146)) : _g4_s36,
    _g4_s38 = (188u + sizeof(_g4_t_v147)) > _g4_s37 ? (188u + sizeof(_g4_t_v147)) : _g4_s37,
    _g4_s39 = (192u + sizeof(_g4_t_v148)) > _g4_s38 ? (192u + sizeof(_g4_t_v148)) : _g4_s38,
    _g4_s40 = (196u + sizeof(_g4_t_v149)) > _g4_s39 ? (196u + sizeof(_g4_t_v149)) : _g4_s39,
    _g4_s41 = (200u + sizeof(_g4_t_v150)) > _g4_s40 ? (200u + sizeof(_g4_t_v150)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v151)) > _g4_s41 ? (204u + sizeof(_g4_t_v151)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v152)) > _g4_s42 ? (208u + sizeof(_g4_t_v152)) : _g4_s42,
    _g4_s44 = (224u + sizeof(_g4_t_v153)) > _g4_s43 ? (224u + sizeof(_g4_t_v153)) : _g4_s43,
    _g4_s45 = (240u + sizeof(_g4_t_v154)) > _g4_s44 ? (240u + sizeof(_g4_t_v154)) : _g4_s44,
    _g4_s46 = (256u + sizeof(_g4_t_v155)) > _g4_s45 ? (256u + sizeof(_g4_t_v155)) : _g4_s45,
    _g4_s47 = (264u + sizeof(_g4_t_v156)) > _g4_s46 ? (264u + sizeof(_g4_t_v156)) : _g4_s46,
    _g4_s48 = (268u + sizeof(_g4_t_v157)) > _g4_s47 ? (268u + sizeof(_g4_t_v157)) : _g4_s47,
    _g4_s49 = (272u + sizeof(_g4_t_v158)) > _g4_s48 ? (272u + sizeof(_g4_t_v158)) : _g4_s48,
    _g4_s50 = (276u + sizeof(_g4_t_v159)) > _g4_s49 ? (276u + sizeof(_g4_t_v159)) : _g4_s49,
    _g4_s51 = (280u + sizeof(_g4_t_v160)) > _g4_s50 ? (280u + sizeof(_g4_t_v160)) : _g4_s50,
    _g4_s52 = (304u + sizeof(_g4_t_v161)) > _g4_s51 ? (304u + sizeof(_g4_t_v161)) : _g4_s51,
    _g4_s53 = (308u + sizeof(_g4_t_v162)) > _g4_s52 ? (308u + sizeof(_g4_t_v162)) : _g4_s52,
    _g4_s54 = (312u + sizeof(_g4_t_v163)) > _g4_s53 ? (312u + sizeof(_g4_t_v163)) : _g4_s53,
    _g4_s55 = (316u + sizeof(_g4_t_v164)) > _g4_s54 ? (316u + sizeof(_g4_t_v164)) : _g4_s54,
    _g4_s56 = (320u + sizeof(_g4_t_v165)) > _g4_s55 ? (320u + sizeof(_g4_t_v165)) : _g4_s55,
    _g4_s57 = (324u + sizeof(_g4_t_v166)) > _g4_s56 ? (324u + sizeof(_g4_t_v166)) : _g4_s56,
    _g4_s58 = (328u + sizeof(_g4_t_v167)) > _g4_s57 ? (328u + sizeof(_g4_t_v167)) : _g4_s57,
    _g4_s59 = (332u + sizeof(_g4_t_v168)) > _g4_s58 ? (332u + sizeof(_g4_t_v168)) : _g4_s58,
    _g4_s60 = (336u + sizeof(_g4_t_v169)) > _g4_s59 ? (336u + sizeof(_g4_t_v169)) : _g4_s59,
    _g4_s61 = (340u + sizeof(_g4_t_v170)) > _g4_s60 ? (340u + sizeof(_g4_t_v170)) : _g4_s60,
    _g4_s62 = (344u + sizeof(_g4_t_v171)) > _g4_s61 ? (344u + sizeof(_g4_t_v171)) : _g4_s61,
    _g4_s63 = (348u + sizeof(_g4_t_v172)) > _g4_s62 ? (348u + sizeof(_g4_t_v172)) : _g4_s62,
    _g4_s64 = (352u + sizeof(_g4_t_v173)) > _g4_s63 ? (352u + sizeof(_g4_t_v173)) : _g4_s63,
    _g4_s65 = (368u + sizeof(_g4_t_v174)) > _g4_s64 ? (368u + sizeof(_g4_t_v174)) : _g4_s64,
    _g4_s66 = (464u + sizeof(_g4_t_v175)) > _g4_s65 ? (464u + sizeof(_g4_t_v175)) : _g4_s65,
    _g4_s67 = (468u + sizeof(_g4_t_v176)) > _g4_s66 ? (468u + sizeof(_g4_t_v176)) : _g4_s66,
    _g4_s68 = (472u + sizeof(_g4_t_v177)) > _g4_s67 ? (472u + sizeof(_g4_t_v177)) : _g4_s67,
    _g4_s69 = (476u + sizeof(_g4_t_v178)) > _g4_s68 ? (476u + sizeof(_g4_t_v178)) : _g4_s68,
    _g4_s70 = (608u + sizeof(_g4_t_v179)) > _g4_s69 ? (608u + sizeof(_g4_t_v179)) : _g4_s69,
    _g4_s71 = (612u + sizeof(_g4_t_v180)) > _g4_s70 ? (612u + sizeof(_g4_t_v180)) : _g4_s70,
    _g4_s72 = (616u + sizeof(_g4_t_v181)) > _g4_s71 ? (616u + sizeof(_g4_t_v181)) : _g4_s71,
    _g4_s73 = (620u + sizeof(_g4_t_v182)) > _g4_s72 ? (620u + sizeof(_g4_t_v182)) : _g4_s72,
    _g4_s74 = (2688u + sizeof(_g4_t_v183)) > _g4_s73 ? (2688u + sizeof(_g4_t_v183)) : _g4_s73,
    _g4_s75 = (2692u + sizeof(_g4_t_v184)) > _g4_s74 ? (2692u + sizeof(_g4_t_v184)) : _g4_s74
  };
  alignas(16) uint8_t _g4_sf[_g4_s75];
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 4u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 8u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 12u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 16u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 32u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 36u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 40u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 40u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 44u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 48u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 56u);
  _g4_t_LinearJacobians &LinearJacobians = *reinterpret_cast<_g4_t_LinearJacobians *>(_g4_sf + 60u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 64u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 84u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 88u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 92u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 96u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 100u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 100u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 104u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 116u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 116u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 124u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 124u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 128u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 128u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 128u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 132u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 132u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 132u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 136u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 140u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 144u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 160u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 176u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 180u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 184u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 188u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 192u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 196u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 200u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 204u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 208u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 224u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 240u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 256u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 264u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 268u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 272u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 276u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 280u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 304u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 308u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 312u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 316u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 320u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 324u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 328u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 332u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 336u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 340u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 344u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 348u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 352u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 368u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 464u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 468u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 472u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 476u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 608u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 612u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 616u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 620u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 2688u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 2692u);

  v182[515] = (uint32_t)(uintptr_t)(&a1);
  v140 = a1;
  v3 = (uint32_t *)a2;
  v4 = a3;
  v112 = a3;
  (*(void (**)(int, int *, int, int))(a2 + 92))(a2, a3, a3[1], 8);
  v114 = v4[1];
  v111 = (int)(uintptr_t)(v3);
  std::memcpy(v174, v3, sizeof(v174));
  v4[1] = 0;
  v5 = v3[19];
  v174[19] = 0.0;
  v126 = v5;
  v116 = v3[12];
  v6 = 0;
  v7 = *(uint32_t *)(v5 + 20);
  v8 = v178;
  v176 = 0;
  v175 = v178;
  v177 = -2147483616;
  v180 = 0;
  v181 = -2147483616;
  v117 = v116 - *(uint32_t *)(v7 + 160);
  v110 = *(uint32_t *)(v5 + 60);
  v115 = v110 - 1;
  v179 = v182;
  if ( v110 - 1 > 32 )
  {
    v9 = 64;
    savedregs = 64;
    if ( v110 - 1 > 63 )
      v9 = v110 - 1;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v141,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v179,
      v9,
      savedregs);
    v8 = v175;
    v6 = 4 * v176;
  }
  v180 = v110 - 1;
  v10 = **(uint32_t **)(v5 + 56) + 240;
  LODWORD(v174[13]) = *(uint32_t *)(**(uint32_t **)(v5 + 56) + 160) + v117;
  *(uint32_t *)&v8[v6] = LODWORD(v174[13]) - v117;
  LODWORD(v174[15]) = v10;
  ++v176;
  v174[9] = 1.0;
  v174[8] = v174[2];
  LinearJacobians = hkJacobianPoweredChainSchema_getLinearJacobians(*v112);
  AngularJacobians = hkJacobianPoweredChainSchema_getAngularJacobians(*v112, v115);
  v113 = AngularJacobians;
  if ( v115 <= 0 )
  {
    v12 = (hkRotationf::Self *)&v161;
    v102 = *(uint32_t *)(*(uint32_t *)(v126 + 48) + 28) + 48 * *(uint32_t *)(v140 + 36);
  }
  else
  {
    v120 = (float *)AngularJacobians;
    v125 = 0;
    v123 = 0;
    v12 = (hkRotationf::Self *)&v161;
    do
    {
      ++v123;
      v174[12] = v174[13];
      v174[14] = v174[15];
      v13 = *(uint32_t *)(*(uint32_t *)(v126 + 56) + 4 * v123);
      LODWORD(v174[13]) = v117 + *(uint32_t *)(v13 + 160);
      v14 = LODWORD(v174[13]) - v117;
      v15 = v176;
      if ( v176 == (v177 & 0x3FFFFFFF) )
      {
        v139 = LODWORD(v174[13]) - v117;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)&v175,
          4,
          (int)(uintptr_t)(v184));
        v15 = v176;
        v14 = v139;
      }
      *(uint32_t *)&v175[4 * v15] = v14;
      LODWORD(v174[15]) = v13 + 240;
      ++v176;
      v16 = (float *)(*(uint32_t *)(v140 + 32) + 5 * v125);
      v17 = v16[1];
      v18 = v16[2];
      v19 = *(float *)(LODWORD(v174[14]) + 28) * v17;
      v20 = (float)((float)(*(float *)(LODWORD(v174[14]) + 4) * *v16) + (float)(*(float *)(LODWORD(v174[14]) + 20) * v17))
          + (float)(*(float *)(LODWORD(v174[14]) + 36) * v18);
      v21 = *(float *)(LODWORD(v174[14]) + 24) * v17;
      v22 = v17 * *(float *)(LODWORD(v174[14]) + 16);
      v23 = (float)((float)(*(float *)(LODWORD(v174[14]) + 8) * *v16) + v21)
          + (float)(*(float *)(LODWORD(v174[14]) + 40) * v18);
      v24 = *(float *)(LODWORD(v174[14]) + 12) * *v16;
      v25 = *v16 * *(float *)LODWORD(v174[14]);
      v142[1] = v20 + *(float *)(LODWORD(v174[14]) + 52);
      v26 = *(float *)(v13 + 244);
      v27 = (float)(v24 + v19) + (float)(*(float *)(LODWORD(v174[14]) + 44) * v18);
      v28 = *(float *)(v13 + 268);
      v29 = (float)(v25 + v22) + (float)(v18 * *(float *)(LODWORD(v174[14]) + 32));
      v142[2] = v23 + *(float *)(LODWORD(v174[14]) + 56);
      v30 = *(float *)(v13 + 248);
      v31 = v29 + *(float *)(LODWORD(v174[14]) + 48);
      v142[3] = v27 + *(float *)(LODWORD(v174[14]) + 60);
      v32 = v16[5];
      v33 = *(float *)(v13 + 260);
      v142[0] = v31;
      v34 = v16[4];
      v35 = v16[6];
      v36 = (float)((float)(v26 * v34) + (float)(v33 * v32)) + (float)(*(float *)(v13 + 276) * v35);
      v37 = (float)((float)(v30 * v34) + (float)(*(float *)(v13 + 264) * v32)) + (float)(*(float *)(v13 + 280) * v35);
      v38 = (float)(*(float *)(v13 + 252) * v34) + (float)(v28 * v32);
      v39 = *(float *)(v13 + 284) * v35;
      v143[0] = (float)((float)((float)(v34 * *(float *)(v13 + 240)) + (float)(v32 * *(float *)(v13 + 256)))
                      + (float)(v35 * *(float *)(v13 + 272)))
              + *(float *)(v13 + 288);
      v40 = (float)(v38 + v39) + *(float *)(v13 + 300);
      v41 = v36 + *(float *)(v13 + 292);
      v42 = v37 + *(float *)(v13 + 296);
      savedregs = LinearJacobians;
      v143[3] = v40;
      v184 = v174;
      v183 = *(float *)(v140 + 68);
      v143[1] = v41;
      v143[2] = v42;
      hkStabilizedBallSocketConstraintBuildJacobian_noSchema(v142, v143, v183, (int)(uintptr_t)(v174), LinearJacobians);
      LinearJacobians += 144;
      hkQuaternionf::set((hkQuaternionf::Self *)&v144, (const hkRotationf::Self *)LODWORD(v174[14]));
      hkQuaternionf::set((hkQuaternionf::Self *)&v148, (const hkRotationf::Self *)LODWORD(v174[15]));
      v43 = *(uint32_t *)(v140 + 32) + 5 * v125;
      if ( *(uint8_t *)(v43 + 76) != 0 )
      {
        v162 = v145;
        v161 = v144;
        v164 = v147;
        v106 = v148;
        v148 = v144;
        v144 = v106;
        v107 = v145;
        v145 = v149;
        v108 = v146;
        v149 = v107;
        v146 = v150;
        v109 = v147;
        v163 = v108;
        v147 = v151;
        v150 = v108;
        v151 = v109;
      }
      v44 = v148;
      v45 = *(float *)(v43 + 48);
      v46 = *(float *)(v43 + 52);
      v47 = (float)(v148 * v45) + (float)(v149 * v46);
      v48 = (float *)(v125 + v114 + 48 * *(uint32_t *)(v140 + 36) + ((*(uint32_t *)(v140 + 36) + 3) & 0xFFFFFFFC));
      v49 = *(float *)(v43 + 56) * v148;
      v148 = (float)((float)((float)(*(float *)(v43 + 56) * v149) - (float)(v150 * v46)) + (float)(v151 * v45))
           + (float)(*(float *)(v43 + 60) * v148);
      v50 = (float)(v150 * v45) - v49;
      v51 = v151 * v46;
      v52 = (float)(v46 * v44) - (float)(v45 * v149);
      v149 = (float)(v50 + v51) + (float)(*(float *)(v43 + 60) * v149);
      v53 = v47 + (float)(v150 * *(float *)(v43 + 56));
      v54 = v151 * *(float *)(v43 + 60);
      v150 = (float)(v52 + (float)(v151 * *(float *)(v43 + 56))) + (float)(*(float *)(v43 + 60) * v150);
      v151 = v54 - v53;
      v55 = *v48;
      v56 = v48[1];
      v57 = v48[2];
      v58 = v48[3];
      if ( (float)((float)((float)((float)(v55 * v55) + (float)(v56 * v56)) + (float)(v57 * v57)) + (float)(v58 * v58)) == 0.0 )
      {
        v56 = *(float *)(v43 + 36);
        v57 = *(float *)(v43 + 40);
        v61 = v56;
        v55 = *(float *)(v43 + 32);
        v60 = v57;
        v58 = *(float *)(v43 + 44);
        v137 = v55;
        v59 = v58;
        v127 = v56;
        v134 = v57;
      }
      else
      {
        v134 = *(float *)(v43 + 40);
        v127 = *(float *)(v43 + 36);
        v137 = *(float *)(v43 + 32);
        v59 = *(float *)(v43 + 44);
        v60 = v134;
        v61 = v127;
      }
      *(float *)&v132 = (float)((float)((float)(v60 * v145) - (float)(v146 * v61)) + (float)(v147 * v137))
                      + (float)(v144 * v59);
      *(float *)&v130 = (float)((float)((float)(v146 * v137) - (float)(v134 * v144)) + (float)(v147 * v61))
                      + (float)(v145 * v59);
      *(float *)&v129 = (float)((float)((float)(v144 * v61) - (float)(v145 * v137)) + (float)(v134 * v147))
                      + (float)(v146 * v59);
      v62 = (float)(v59 * v147) - (float)((float)((float)(v144 * v137) + (float)(v127 * v145)) + (float)(v134 * v146));
      v128 = (float)((float)((float)(v145 * v57) - (float)(v146 * v56)) + (float)(v147 * v55)) + (float)(v144 * v58);
      v119 = (float)((float)((float)(v146 * v55) - (float)(v144 * v57)) + (float)(v147 * v56)) + (float)(v145 * v58);
      v63 = v145 * v55;
      v64 = (float)((float)(v55 * v144) + (float)(v56 * v145)) + (float)(v57 * v146);
      v65 = (float)((float)(v144 * v56) - v63) + (float)(v147 * v57);
      v66 = v146 * v58;
      v67 = v58 * v147;
      *v48 = v137;
      v124 = v66 + v65;
      v48[1] = *(float *)(v43 + 36);
      v48[2] = *(float *)(v43 + 40);
      v48[3] = *(float *)(v43 + 44);
      v118 = v67 - v64;
g4_m128_raw(v69) = v129;
g4_m128_raw(v68) = LODWORD(v148);
g4_m128_raw(v70) = LODWORD(v150);
g4_m128_lane<float>(v69, 0) = (float)((float)((float)(*(float *)&v129 * v149) - (float)(*(float *)&v130 * v150))
                              + (float)(v62 * v148))
                      - (float)(*(float *)&v132 * v151);
g4_m128_lane<float>(v69, 0) =g4_m128_lane<float>(v69, 0) +g4_m128_lane<float>(v69, 0);
g4_m128_lane<float>(v70, 0) = (float)((float)((float)(v150 * *(float *)&v132) - (float)(*(float *)&v129 * v148))
                              + (float)(v149 * v62))
                      - (float)(*(float *)&v130 * v151);
g4_m128_raw(v72) = v130;
g4_m128_lane<float>(v70, 0) =g4_m128_lane<float>(v70, 0) +g4_m128_lane<float>(v70, 0);
      v122 = v62 * v151;
g4_m128_lane<float>(v72, 0) = (float)((float)(*(float *)&v130 * v148) - (float)(*(float *)&v132 * v149)) + (float)(v62 * v150);
g4_m128_raw(v71) = v132;
      *(float *)g4_m128_ptr<int32_t>(v71) = *(float *)&v132 * v148;
g4_m128_lane<float>(v72, 0) = (float)(g4_m128_lane<float>(v72, 0) - (float)(*(float *)&v129 * v151))
                      + (float)(g4_m128_lane<float>(v72, 0) - (float)(*(float *)&v129 * v151));
      v73 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v71));
      *(float *)g4_m128_ptr<int32_t>(v73) = (float)(*(float *)g4_m128_ptr<int32_t>(v73) + (float)(*(float *)&v130 * v149))
                              + (float)(*(float *)&v129 * v150);
      v74 = v73;
      *(float *)g4_m128_ptr<int32_t>(v74) = *(float *)g4_m128_ptr<int32_t>(v73) + v122;
      if ( _mm_cvtsi128_si32(v74) < 0 )
      {
        v75 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_xor_ps(v72, *(__m128 *)&dword_1C7C1B0)));
        v131 = -(float)((float)((float)(v122 + 0.0) - v122) + (float)((float)(v122 + 0.0) - v122));
        v76 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_xor_ps(v70, *(__m128 *)&dword_1C7C1B0))));
        v77 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_xor_ps(v69, *(__m128 *)&dword_1C7C1B0))));
      }
      else
      {
        v131 = (float)((float)(v122 + 0.0) - v122) + (float)((float)(v122 + 0.0) - v122);
        v75 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v72)));
        v76 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v70))));
        v77 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v69))));
      }
g4_m128_raw(v78) = LODWORD(v149);
g4_m128_lane<float>(v78, 0) = v149 * v124;
      v79 = v78;
g4_m128_raw(v80) = LODWORD(v128);
g4_m128_lane<float>(v79, 0) = (float)((float)((float)(v149 * v124) - (float)(v150 * v119)) + (float)(v118 * v148))
                      - (float)(v128 * v151);
g4_m128_lane<float>(v79, 0) =g4_m128_lane<float>(v79, 0) +g4_m128_lane<float>(v79, 0);
g4_m128_lane<int32_t>(v153, 0) =g4_m128_lane<int32_t>(v79, 0);
g4_m128_lane<float>(v80, 0) = (float)((float)((float)(v128 * v150) - (float)(v124 * v148)) + (float)(v149 * v118))
                      - (float)(v119 * v151);
g4_m128_raw(v82) = LODWORD(v119);
g4_m128_lane<float>(v80, 0) =g4_m128_lane<float>(v80, 0) +g4_m128_lane<float>(v80, 0);
g4_m128_lane<int32_t>(v153, 1) =g4_m128_lane<int32_t>(v80, 0);
      v81 = v79;
g4_m128_lane<float>(v82, 0) = (float)((float)((float)(v119 * v148) - (float)(v128 * v149)) + (float)(v150 * v118))
                      - (float)(v151 * v124);
g4_m128_raw(v83) = 0;
      *(float *)g4_m128_ptr<int32_t>(v68) = (float)((float)((float)(v148 * v128) + (float)(v119 * v149)) + (float)(v124 * v150))
                              + (float)(v118 * v151);
g4_m128_lane<float>(v82, 0) =g4_m128_lane<float>(v82, 0) +g4_m128_lane<float>(v82, 0);
g4_m128_lane<int32_t>(v153, 2) =g4_m128_lane<int32_t>(v82, 0);
g4_m128_lane<float>(v83, 0) = (float)((float)((float)(v118 * v151) + 0.0) - (float)(v118 * v151))
                      + (float)((float)((float)(v118 * v151) + 0.0) - (float)(v118 * v151));
g4_m128_lane<float>(v153, 3) =g4_m128_lane<float>(v83, 0);
      if ( _mm_cvtsi128_si32(v68) < 0 )
      {
        v84 = v79;
g4_m128_lane<uint64_t>(v85, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v79, v80), 0);
g4_m128_lane<uint64_t>(v85, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v82, v83), 0);
        v81 = _mm_xor_ps(v84, *(__m128 *)&dword_1C7C1B0);
        v82 = _mm_xor_ps(v82, *(__m128 *)&dword_1C7C1B0);
        v153 = _mm_xor_ps(v85, G4_BITCAST<__m128>(xmmword_1C7C2A0));
        v80 = _mm_xor_ps(v80, *(__m128 *)&dword_1C7C1B0);
g4_m128_raw(v83) = COERCE_UNSIGNED_INT(-(float)((float)((float)((float)(v118 * v151) + 0.0) - (float)(v118 * v151))
                                                   + (float)((float)((float)(v118 * v151) + 0.0) - (float)(v118 * v151))));
      }
g4_m128_raw(v86) = (g4_int128_t)_mm_cvtsi32_si128(v75);
g4_m128_lane<float>(v86, 0) =g4_m128_lane<float>(v86, 0) -g4_m128_lane<float>(v82, 0);
      v87 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v86))));
g4_m128_lane<uint64_t>(v88, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(
                          g4_m128_from<__m128>(_mm_cvtsi32_si128(LODWORD(v77))),
                          g4_m128_from<__m128>(_mm_cvtsi32_si128(LODWORD(v76)))), 0);
g4_m128_lane<uint64_t>(v88, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v75)), g4_m128_from<__m128>(LODWORD(v131))), 0);
g4_m128_lane<uint64_t>(v86, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v81, v80), 0);
g4_m128_lane<uint64_t>(v86, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v82, v83), 0);
      v89 = *(uint8_t *)(*(uint32_t *)(v140 + 32) + 5 * v125 + 76) == 0;
      v152 = _mm_sub_ps(v88, v86);
      if ( !v89 )
      {
g4_m128_lane<float>(v152, 0) = -(float)(v77 -g4_m128_lane<float>(v81, 0));
g4_m128_lane<float>(v152, 1) = -(float)(v76 -g4_m128_lane<float>(v80, 0));
g4_m128_lane<float>(v152, 2) = -v87;
g4_m128_lane<float>(v153, 0) = -g4_m128_lane<float>(v81, 0);
g4_m128_lane<float>(v153, 1) = -g4_m128_lane<float>(v80, 0);
g4_m128_lane<float>(v153, 2) = -g4_m128_lane<float>(v82, 0);
      }
      hkRotationf::set(v12, (const hkQuaternionf::Self *)&v148);
      v90 = v12;
      v138 = v120;
      v91 = 3 * v125 + 24;
      v92 = 0;
      do
      {
        v133 = v90;
        v154 = *((g4_int128_t *)v90 + v92);
        v135 = G4_VCALL<int>(v140, 80, *(uint32_t *)(*(uint32_t *)(v126 + 48) + 28));
        v156 = 0;
        v157 = 0;
        hk1dAngularVelocityMotorBeginJacobian((float *)&v154, (int)(uintptr_t)(v174), v138, v155);
        LODWORD(v155[1]) = (uint32_t)(uintptr_t)(v174);
        v93 =g4_m128_lane<int32_t>(v152, v92);
        v94 = *(uint32_t *)(v135 + v91);
        v157 = *(uint32_t *)(v135 + v91 + 4);
        v158 = v93;
        v156 = v94;
        v95 =g4_m128_lane<int32_t>(v153, v92);
        LODWORD(v183) = (uint32_t)(uintptr_t)(v160);
        v182[516] = (uint32_t)(uintptr_t)(v155);
        v96 = *(uint32_t *)(v140 + 32) + 4 * v92 + 64;
        v159 = v95;
        v91 += 8;
        hkCalcMotorData(*(uint32_t *)(v96 + 5 * v125), (int)(uintptr_t)(v155), v160);
        v90 = v133;
        v97 = 5 * v92++;
        v98 = (float *)&v179[v125 + v97];
        v99 = v138;
        v98[1] = v160[2] * v174[1];
        v138 += 8;
        v98[2] = v160[3] * v174[1];
        v98[3] = v160[1];
        v98[4] = v160[4];
        v98[5] = v160[5];
        v99[7] = v160[0] * v174[2];
      }
      while ( v92 != 3 );
      v120 += 24;
      v125 += 16;
      v12 = v133;
    }
    while ( v115 != v123 );
    v113 = v113 + 96 * v110 - 96;
    v100 = 0;
    v136 = *(uint32_t *)(*(uint32_t *)(v126 + 48) + 28) + 48 * *(uint32_t *)(v140 + 36);
    do
    {
      v101 = (uint8_t *)(&v179[16 * v100++]);
      *v101 = *(uint8_t *)(v100 + v136 - 1);
    }
    while ( v115 != v100 );
    v102 = v136;
  }
  v171 = 0;
  LODWORD(v161) = v110 - 1;
  v103 = *(float *)(v140 + 44);
  v172 = v102;
  v162 = v103;
  v163 = *(float *)(v140 + 48);
  v164 = *(float *)(v140 + 52);
  v165 = *(uint32_t *)(v140 + 56);
  v166 = *(uint32_t *)(v140 + 60);
  v104 = *(uint32_t *)(v140 + 64);
  v168 = v175;
  v169 = v117;
  v170 = (int)(uintptr_t)(v179);
  v173 = v113;
  v167 = v104;
  hkPoweredChainBuildJacobian((int)(uintptr_t)(v12), v111, v112);
  v180 = 0;
  if ( v181 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v179,
      v181 << 6);
  result = v177;
  v176 = 0;
  if ( v177 >= 0 )
    return (*(int (**)(uint32_t *, uint8_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v175,
             4 * v177);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::Construct  (binary VA: 0x1b049c0)
// Original: hkpPoweredChainData::hkpPoweredChainData
// ----------------------------------------------------------------------------
void hkpPoweredChainData::Construct(hkpPoweredChainData::Self *self)
{
  *((uint32_t *)self + 12) = 1065353216;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B21C8);
  *((uint16_t *)self + 8) = 1;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 11) = 1058642330;
  *((uint32_t *)self + 13) = 843893965;
  *((uint32_t *)self + 17) = 1036831949;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 15) = 843893965;
  *((uint32_t *)self + 16) = 1065353216;
  hkpBridgeConstraintAtom::init((hkpPoweredChainData::Self *)((char *)self + 16), self);
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::Construct  (binary VA: 0x1b04a60)
// Original: hkpPoweredChainData::hkpPoweredChainData
// ----------------------------------------------------------------------------
hkpBridgeConstraintAtom::Self * hkpPoweredChainData::Construct(hkpConstraintData::Self **a1, int a2)
{
  hkpBridgeConstraintAtom::Self *result;

  hkpConstraintData::Construct(a1);
  result = (hkpBridgeConstraintAtom::Self *)((uint32_t)(uintptr_t)&off_20B21C8);
  *a1 = (hkpConstraintData::Self *)((uint32_t)(uintptr_t)&off_20B21C8);
  if ( a2 != 0 )
  {
    hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), a1[6]);
    return hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), (hkpConstraintData::Self *)a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::addConstraintInfoInBodySpace  (binary VA: 0x1b04ad0)
// Original: hkpPoweredChainData::addConstraintInfoInBodySpace
// ----------------------------------------------------------------------------
int hkpPoweredChainData::addConstraintInfoInBodySpace(hkpPoweredChainData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkQuaternionf::Self *a4, hkpConstraintMotor::Self *a5, hkpConstraintMotor::Self *a6, hkpConstraintMotor::Self *a7)
{
  hkpPoweredChainData::Self *v7;
  int v8;
  int v9;
  hkpConstraintMotor::Self *v10;
  int v12;
  int32_t v13; // kr00_4
  hkpConstraintMotor::Self *i;
  int32_t v15;
  int v16;
  int32_t v17;
  int v18;
  int v19;
  hkpPoweredChainData::Self *v20;

  v7 = self;
  v8 = *((uint32_t *)self + 9);
  if ( v8 == (*((uint32_t *)self + 10) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpPoweredChainData::Self *)((char *)self + 32),
      80,
      (int)(uintptr_t)(self));
    v7 = v20;
    v8 = *((uint32_t *)v20 + 9);
  }
  v19 = *((uint32_t *)v7 + 8);
  *((uint32_t *)v7 + 9) = v8 + 1;
  v9 = 80 * v8 + v19;
  *(uint32_t *)v9 = *(uint32_t *)a2;
  *(uint32_t *)(v9 + 4) = *((uint32_t *)a2 + 1);
  *(uint32_t *)(v9 + 8) = *((uint32_t *)a2 + 2);
  *(uint32_t *)(v9 + 12) = *((uint32_t *)a2 + 3);
  *(uint32_t *)(v9 + 16) = *(uint32_t *)a3;
  *(uint32_t *)(v9 + 20) = *((uint32_t *)a3 + 1);
  *(uint32_t *)(v9 + 24) = *((uint32_t *)a3 + 2);
  *(uint32_t *)(v9 + 28) = *((uint32_t *)a3 + 3);
  *(uint32_t *)(v9 + 32) = *(uint32_t *)a4;
  *(uint32_t *)(v9 + 36) = *((uint32_t *)a4 + 1);
  *(uint32_t *)(v9 + 40) = *((uint32_t *)a4 + 2);
  *(uint32_t *)(v9 + 44) = *((uint32_t *)a4 + 3);
  v10 = a5;
  *(uint32_t *)(v9 + 64) = (uint32_t)(uintptr_t)(a5);
  if ( *((uint16_t *)a5 + 3) != 0 )
  {
    while ( 1 )
    {
      v17 = *((uint32_t *)v10 + 1);
      HIWORD(v18) = HIWORD(v17);
      LOWORD(v18) = 0;
      if ( v17 == __sync_val_compare_and_swap((volatile int32_t *)a5 + 1, v17, v18 | (uint16_t)(v17 + 1)) )
        break;
      v10 = a5;
    }
  }
  *(uint32_t *)(v9 + 68) = (uint32_t)(uintptr_t)(a6);
  if ( *((uint16_t *)a6 + 3) != 0 )
  {
    for ( i = a6; ; i = a6 )
    {
      v15 = *((uint32_t *)i + 1);
      HIWORD(v16) = HIWORD(v15);
      LOWORD(v16) = 0;
      if ( v15 == __sync_val_compare_and_swap((volatile int32_t *)a6 + 1, v15, v16 | (uint16_t)(v15 + 1)) )
        break;
    }
  }
  *(uint32_t *)(v9 + 72) = (uint32_t)(uintptr_t)(a7);
  if ( *((uint16_t *)a7 + 3) != 0 )
  {
    do
    {
      v13 = *((uint32_t *)a7 + 1);
      HIWORD(v12) = HIWORD(v13);
      LOWORD(v12) = 0;
    }
    while ( v13 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a7 + 1,
                     v13,
                     v12 | (uint16_t)(v13 + 1)) );
  }
  *(uint8_t *)(v9 + 76) = 0;
  *(uint32_t *)(v9 + 48) = 0;
  *(uint32_t *)(v9 + 52) = 0;
  *(uint32_t *)(v9 + 56) = 0;
  *(uint32_t *)(v9 + 60) = 1065353216;
  return 1065353216;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::enableMotor  (binary VA: 0x1b04c80)
// Original: hkpPoweredChainData::enableMotor
// ----------------------------------------------------------------------------
uint8_t * hkpPoweredChainData::enableMotor(hkpPoweredChainData::Self *self, hkpConstraintChainInstance::Self *a2, char a3)
{
  uint8_t *result;

  result = (uint8_t *)((char *)a2 + 48 * *(uint32_t *)(*((uint32_t *)self + 3) + 36) + *(uint32_t *)(*((uint32_t *)self + 12) + 28));
  *result &= ~(3 << (2 * a3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPoweredChainData::disableMotor  (binary VA: 0x1b04cb0)
// Original: hkpPoweredChainData::disableMotor
// ----------------------------------------------------------------------------
uint8_t * hkpPoweredChainData::disableMotor(hkpPoweredChainData::Self *self, hkpConstraintChainInstance::Self *a2, char a3)
{
  uint8_t *result;

  result = (uint8_t *)((char *)a2 + 48 * *(uint32_t *)(*((uint32_t *)self + 3) + 36) + *(uint32_t *)(*((uint32_t *)self + 12) + 28));
  *result = (2 << (2 * a3)) | *result & ~(3 << (2 * a3));
  return result;
}


